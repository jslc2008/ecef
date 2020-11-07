#include "stdafx.h"
#include <stdio.h>
#include "lib2.h"
#include "lang.h"
#include <assert.h>
#include <string>
#include "resource.h"
#include "proxy/ProxyBase.h"
#include <shellapi.h>
#include "def/Power.h"

//headers
#include "EPLChromium.h"
#include "EPLProxyActiveBrowserCallback.h"
#include "EPLProxyAuthCallback.h"
#include "EPLProxyBase.h"
#include "EPLProxyBrowser.h"
#include "EPLProxyBrowserSettings.h"
#include "EPLProxyCollection.h"
#include "EPLProxyCommandLine.h"
#include "EPLProxyContextMenuParams.h"
#include "EPLProxyCookie.h"
#include "EPLProxyCookieManager.h"
#include "EPLProxyDictionaryValue.h"
#include "EPLProxyDOMDocument.h"
#include "EPLProxyDOMNode.h"
#include "EPLProxyDownloadItem.h"
#include "EPLProxyExtension.h"
#include "EPLProxyFileDialogCallback.h"
#include "EPLProxyFrame.h"
#include "EPLProxyGetExtensionResourceCallback.h"
#include "EPLProxyJSDialogCallback.h"
#include "EPLProxyListValue.h"
#include "EPLProxyMenuModel.h"
#include "EPLProxyPostDataElement.h"
#include "EPLProxyQueryCallback.h"
#include "EPLProxyRequest.h"
#include "EPLProxyResponse.h"
#include "EPLProxyResponseFilter.h"
#include "EPLProxyRunContextMenuCallback.h"
#include "EPLProxyServer.h"
#include "EPLProxySettings.h"
#include "EPLProxyURLRequest.h"
#include "EPLProxyValue.h"
#include "EPLProxyWaitableEvent.h"
#include "EPLProxyWebSocket.h"
#include "EPLProxyWindowInfo.h"



/////////////////////////////////////////////////////////////////////////////
INT g_nLastNotifyResult;
PFN_NOTIFY_SYS g_fnNotifySys = NULL;

INT WINAPI NotifySys (INT nMsg, DWORD dwParam1, DWORD dwParam2)
{
	assert(g_fnNotifySys != NULL);
	if (g_fnNotifySys != NULL)
		return g_nLastNotifyResult = g_fnNotifySys (nMsg, dwParam1, dwParam2);
	else
		return g_nLastNotifyResult = 0;
}


void* WEBCALLBACK EPLNewBuffer(size_t size){
	return (void*)NotifySys(NRS_MALLOC,(DWORD)size, 0 );
}

void* WEBCALLBACK EPLNewBufferInArray(size_t size){
	return (void*)NotifySys(NRS_MALLOC,(DWORD)size, 0 );
}

void WEBCALLBACK EPLDeleteBuffer(void* ptr){
	if(ptr){
		NotifySys(NRS_MFREE,(DWORD)ptr, 0 );
	}
}

void WEBCALLBACK EPLDeleteBufferInArray(void* ptr){
	if(ptr){
		NotifySys(NRS_MFREE,(DWORD)ptr, 0 );
	}
}

INT WINAPI AddInFunction (INT nAddInFnIndex){
	char buffer[128];

	if(nAddInFnIndex == 0){
		char libDir[MAX_PATH] = "";
		NotifySys(NAS_GET_PATH, 1005, (LPARAM)libDir);
		ProxyBase::ExportResourceToDir(libDir);
	}
	else if(nAddInFnIndex == 1){
		Power::GetInstance()->Initialize(1);
	}
	return 0;
}

INT WINAPI ProcessNotifyLib (INT nMsg, DWORD dwParam1, DWORD dwParam2)
{
	INT nRet = NR_OK;
	switch (nMsg)
	{
	case NL_SYS_NOTIFY_FUNCTION:
		g_fnNotifySys = (PFN_NOTIFY_SYS)dwParam1;
		NewBuffer = EPLNewBuffer;
		NewBufferInArray = EPLNewBufferInArray;
		DeleteBuffer = EPLDeleteBuffer;
		DeleteBufferInArray = EPLDeleteBufferInArray;
		break;
	default:
		nRet = NR_ERR;
		break;
	}

	return nRet;
}

/////////////////////////////////////////////////////////////////////////////
class EPLChromiumApp : public CWinApp
{
public:
	EPLChromiumApp(){

	}

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CHtmlViewApp)
	public:
	//}}AFX_VIRTUAL

	//{{AFX_MSG(CHtmlViewApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


BEGIN_MESSAGE_MAP(EPLChromiumApp, CWinApp)
	//{{AFX_MSG_MAP(CHtmlViewApp)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


#ifndef __E_STATIC_LIB

EPLChromiumApp theApp;

#endif

/////////////////////////////////////////////////////////////////////////////

UNIT_PROPERTY s_ChromiumProperty [] =
{
	FIXED_WIN_UNIT_PROPERTY,
	{
		/*m_szName*/			_WT("�߿�"),
		/*m_szEgName*/			_WT("border"),
		/*m_szExplain*/			_WT(""),
		/*m_shtType*/			UD_PICK_INT,
		/*m_wState*/			NULL,
		/*m_szzPickStr*/		_WT("�ޱ߿�\0����ʽ\0͹��ʽ\0ǳ����ʽ\0����ʽ\0���߱߿�ʽ\0"),
	}
};

static EVENT_ARG_INFO2 s_ChromiumEventArgInfo [] = 
{
	{	/*EPLClient_OnBeforeCommandLineProcessing*/ 
	/*name*/	_WT("��������"), 
	/*explain*/	_WT("������������, Ϊ��ʱ�����������,����Ϊ�����ӽ���"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_TEXT, 
	},
	{	/*EPLClient_OnBeforeCommandLineProcessing*/ 
	/*name*/	_WT("������"), 
	/*explain*/	_WT("��ʹ�õ����������ö���, �ö������������е����ò����鿴�����޸ġ���Ҫ���¼�֮�Ᵽ���˶�������á�"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(7,0), 
	},
	{	/*EPLClient_OnBeforeChildProcessLaunch*/ 
	/*name*/	_WT("������"), 
	/*explain*/	_WT("��������Ϣ"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(7,0), 
	},
	{	/*EPLClient_OnRenderProcessThreadCreated*/ 
	/*name*/	_WT("������Ϣ"), 
	/*explain*/	_WT("�˲���Ϊ����Ϊ��Ⱦ�����ṩ������Ϣ, ��Ҫ�����Դ˶�������á�"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(20,0), 
	},
	{	/*EPLClient_OnBeforePopup*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("������������������������Դ�����"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnBeforePopup*/ 
	/*name*/	_WT("���"), 
	/*explain*/	_WT("�˿�ܴ�������������Ŀ��"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(17,0), 
	},
	{	/*EPLClient_OnBeforePopup*/ 
	/*name*/	_WT("Ŀ��URL"), 
	/*explain*/	_WT("��URLΪ��Դ����������´���Ӧ������URL��"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_TEXT, 
	},
	{	/*EPLClient_OnBeforePopup*/ 
	/*name*/	_WT("Ŀ��������"), 
	/*explain*/	_WT(""), 
	/*state*/	NULL, 
	/*DataType*/	SDT_TEXT, 
	},
	{	/*EPLClient_OnBeforePopup*/ 
	/*name*/	_WT("���ӵĴ򿪷�ʽ"), 
	/*explain*/	_WT("��ֵ������ö�ٳ���: #���Ӵ򿪷�ʽ.* , �ò����ṩ����Դ����������������ӵĴ򿪷�ʽ(��: �ڵ�ǰ��ǩ��, �����Ǵ���һ���µı�ǩ��)��"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_INT, 
	},
	{	/*EPLClient_OnBeforePopup*/ 
	/*name*/	_WT("�Ƿ�Ϊ���Ƶ��"), 
	/*explain*/	_WT("�����������(�����µĴ���)�����û�ͨ�����Ƶ����, ��˲�����Ϊ�档"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_BOOL, 
	},
	{	/*EPLClient_OnBeforePopup*/ 
	/*name*/	_WT("��������"), 
	/*explain*/	_WT("�ڴ���������ṩ��������ڴ��ڴ�����������Ϣ��"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(34,0), 
	},
	{	/*EPLClient_OnBeforePopup*/ 
	/*name*/	_WT("���������"), 
	/*explain*/	_WT("�ڴ���������ṩ����������ڵ�������Ϣ��"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(5,0), 
	},
	{	/*EPLClient_OnBeforePopup*/ 
	/*name*/	_WT("�Ƿ��ֹ�ű�����"), 
	/*explain*/	_WT("������������Ƿ��������µ�������������Ƿ����ִ��Javascript���롣�����ϣ�������ִ��Javascript����, ��Ӧ���˲�������Ϊ��"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	SDT_INT, 
	},
	{	/*EPLClient_OnAfterCreated*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("������ϵ������"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnBeforeClose*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("�������ٵ������"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_DoClose*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("�����"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnLoadingStateChange*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("�����"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnLoadingStateChange*/ 
	/*name*/	_WT("�Ƿ����ڼ���"), 
	/*explain*/	_WT("��ʾ������Ƿ����ڳ���������"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_BOOL, 
	},
	{	/*EPLClient_OnLoadingStateChange*/ 
	/*name*/	_WT("�ɷ����"), 
	/*explain*/	_WT("�����ǰ��������Խ��ܻ���������������Ϊ��"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_BOOL, 
	},
	{	/*EPLClient_OnLoadingStateChange*/ 
	/*name*/	_WT("�ɷ�ǰ��"), 
	/*explain*/	_WT("�����ǰ��������Խ���ǰ��������������Ϊ��"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_BOOL, 
	},
	{	/*EPLClient_OnLoadStart*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("�����"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnLoadStart*/ 
	/*name*/	_WT("���"), 
	/*explain*/	_WT("�ύ��������Ŀ��, �˲�����Զ����Ϊ��, ����.�Ƿ�Ϊ��Ҫ��ܺ����Լ��ÿ���Ƿ�Ϊ��Ҫ(Top-Level)��ܡ�"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(17,0), 
	},
	{	/*EPLClient_OnLoadStart*/ 
	/*name*/	_WT("������Դ"), 
	/*explain*/	_WT("������Դ����ֵΪö�ٳ���: #������Դ.* , �˲����ṩ���йص�����Դ����Ϣ��"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_INT, 
	},
	{	/*EPLClient_OnLoadEnd*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("������ɵ������"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnLoadEnd*/ 
	/*name*/	_WT("���"), 
	/*explain*/	_WT("��ɼ��صĿ��, �˲�����Զ����Ϊ��, ����.�Ƿ�Ϊ��Ҫ��ܺ����Լ��ÿ���Ƿ�Ϊ��Ҫ(Top-Level)��ܡ�"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(17,0), 
	},
	{	/*EPLClient_OnLoadEnd*/ 
	/*name*/	_WT("״̬��"), 
	/*explain*/	_WT("�˲���������ܵļ��ؽ��, ���û�д�����, ��˲�����״ֵ̬ӦΪ: HTTP-200"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_INT, 
	},
	{	/*EPLClient_OnLoadError*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("���ز�����ֹ�������"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnLoadError*/ 
	/*name*/	_WT("���"), 
	/*explain*/	_WT("���ز�����ֹ�Ŀ��"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(17,0), 
	},
	{	/*EPLClient_OnLoadError*/ 
	/*name*/	_WT("�������"), 
	/*explain*/	_WT("�������ʧ�ܵĴ������"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_INT, 
	},
	{	/*EPLClient_OnLoadError*/ 
	/*name*/	_WT("������Ϣ"), 
	/*explain*/	_WT("�ṩ����ʧ�ܵ�ԭ��"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_TEXT, 
	},
	{	/*EPLClient_OnLoadError*/ 
	/*name*/	_WT("����ʧ�ܵ�URL"), 
	/*explain*/	_WT("����ʧ�ܵ�URL��ַ"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_TEXT, 
	},
	{	/*EPLClient_OnBeforeContextMenu*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT(""), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnBeforeContextMenu*/ 
	/*name*/	_WT("���"), 
	/*explain*/	_WT(""), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(17,0), 
	},
	{	/*EPLClient_OnBeforeContextMenu*/ 
	/*name*/	_WT("�˵���Ϣ"), 
	/*explain*/	_WT("�����йز˵������ĵ���Ϣ"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(8,0), 
	},
	{	/*EPLClient_OnBeforeContextMenu*/ 
	/*name*/	_WT("�˵�"), 
	/*explain*/	_WT("�����Ĳ˵�"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(21,0), 
	},
	{	/*EPLClient_RunContextMenu*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT(""), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_RunContextMenu*/ 
	/*name*/	_WT("���"), 
	/*explain*/	_WT(""), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(17,0), 
	},
	{	/*EPLClient_RunContextMenu*/ 
	/*name*/	_WT("�˵���Ϣ"), 
	/*explain*/	_WT("�����йز˵������ĵ���Ϣ"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(8,0), 
	},
	{	/*EPLClient_RunContextMenu*/ 
	/*name*/	_WT("�˵�"), 
	/*explain*/	_WT("�����Ĳ˵�"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(21,0), 
	},
	{	/*EPLClient_RunContextMenu*/ 
	/*name*/	_WT("�˵��ص�"), 
	/*explain*/	_WT("ʹ���Զ���˵�������ص�"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(27,0), 
	},
	{	/*EPLClient_OnContextMenuCommand*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT(""), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnContextMenuCommand*/ 
	/*name*/	_WT("���"), 
	/*explain*/	_WT(""), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(17,0), 
	},
	{	/*EPLClient_OnContextMenuCommand*/ 
	/*name*/	_WT("�˵���Ϣ"), 
	/*explain*/	_WT("�����йز˵������ĵ���Ϣ"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(8,0), 
	},
	{	/*EPLClient_OnContextMenuCommand*/ 
	/*name*/	_WT("����ID"), 
	/*explain*/	_WT("�˵�����ID"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_INT, 
	},
	{	/*EPLClient_OnContextMenuCommand*/ 
	/*name*/	_WT("�¼���־"), 
	/*explain*/	_WT("����ֵΪö�ٳ���, #�¼���־.* ��"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_INT, 
	},
	{	/*EPLClient_OnContextMenuDismissed*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT(""), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnContextMenuDismissed*/ 
	/*name*/	_WT("���"), 
	/*explain*/	_WT(""), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(17,0), 
	},
	{	/*EPLClient_OnAddressChange*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("�����ı�������"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnAddressChange*/ 
	/*name*/	_WT("���"), 
	/*explain*/	_WT("�����ı�Ŀ��"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(17,0), 
	},
	{	/*EPLClient_OnAddressChange*/ 
	/*name*/	_WT("�����ַ"), 
	/*explain*/	_WT("����������ĵ�ַ"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_TEXT, 
	},
	{	/*EPLClient_OnTitleChange*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("�����ı�������"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnTitleChange*/ 
	/*name*/	_WT("�������"), 
	/*explain*/	_WT("����������ı���"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_TEXT, 
	},
	{	/*EPLClient_OnTooltip*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("������ʾ�������"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnTooltip*/ 
	/*name*/	_WT("��ʾ��Ϣ"), 
	/*explain*/	_WT("��ʾ��Ϣ, �������ڹ�����ʾ����ʾ���ı���"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_TEXT, 
	},
	{	/*EPLClient_OnStatusMessage*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("�յ�״̬��Ϣ�������"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnStatusMessage*/ 
	/*name*/	_WT("��Ϣ����"), 
	/*explain*/	_WT("�յ�����Ϣ����"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_TEXT, 
	},
	{	/*EPLClient_OnConsoleMessage*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("�յ�����̨��Ϣ�������"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnConsoleMessage*/ 
	/*name*/	_WT("��Ϣ�ȼ�"), 
	/*explain*/	_WT("��¼�ÿ���̨��Ϣ�������Եȼ�, ��������ֵΪö�ٳ���: #��Ϣ��¼�ȼ�.* ��"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_INT, 
	},
	{	/*EPLClient_OnConsoleMessage*/ 
	/*name*/	_WT("��Ϣ����"), 
	/*explain*/	_WT(""), 
	/*state*/	NULL, 
	/*DataType*/	SDT_TEXT, 
	},
	{	/*EPLClient_OnConsoleMessage*/ 
	/*name*/	_WT("��ϢԴ"), 
	/*explain*/	_WT(""), 
	/*state*/	NULL, 
	/*DataType*/	SDT_TEXT, 
	},
	{	/*EPLClient_OnConsoleMessage*/ 
	/*name*/	_WT("��ʼ��"), 
	/*explain*/	_WT(""), 
	/*state*/	NULL, 
	/*DataType*/	SDT_INT, 
	},
	{	/*EPLClient_OnLoadingProgressChange*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("���ؽ��ȸı�������"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnLoadingProgressChange*/ 
	/*name*/	_WT("����ֵ"), 
	/*explain*/	_WT("����ֵ�ķ�Χ��: 0.0 �� 1.0"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_DOUBLE, 
	},
	{	/*EPLClient_OnFullscreenModeChange*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT(""), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnFullscreenModeChange*/ 
	/*name*/	_WT("ȫ��ģʽ"), 
	/*explain*/	_WT("����˲���Ϊ����ҳ��ʾ���ݽ�����������������, ���Ϊ����ԭ��ԭʼ��С��λ�á�"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_BOOL, 
	},
	{	/*EPLClient_OnJSDialog*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("�����򿪶Ի���������"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnJSDialog*/ 
	/*name*/	_WT("ҳ��URL"), 
	/*explain*/	_WT("�����öԻ����ҳ��URL��ַ"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_TEXT, 
	},
	{	/*EPLClient_OnJSDialog*/ 
	/*name*/	_WT("�Ի�������"), 
	/*explain*/	_WT("�Ի�������ֵ������ö�ٳ���: #�ű��Ի���.*"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_INT, 
	},
	{	/*EPLClient_OnJSDialog*/ 
	/*name*/	_WT("��Ϣ����"), 
	/*explain*/	_WT("�Ի�����Ϣ����"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_TEXT, 
	},
	{	/*EPLClient_OnJSDialog*/ 
	/*name*/	_WT("Ĭ��ֵ"), 
	/*explain*/	_WT("�ṩĬ��������ı�"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_TEXT, 
	},
	{	/*EPLClient_OnJSDialog*/ 
	/*name*/	_WT("�Ի���ص�"), 
	/*explain*/	_WT("ִ�иûص�������Javascript���ضԻ�����ý����"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(19,0), 
	},
	{	/*EPLClient_OnJSDialog*/ 
	/*name*/	_WT("��ֹ��Ϣ"), 
	/*explain*/	_WT("���ô˲���Ϊ�沢���ؼٿ���������Ϣ(������Ϣ������ִ�л��˸��Ӹ�Ч, ��Ϊ�����ڼ����ܵĶ�����Ϊ, ������onbeforeunload�з���������Ϣ)��"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	SDT_INT, 
	},
	{	/*EPLClient_OnBeforeUnloadDialog*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("����ѯ�ʵ������"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnBeforeUnloadDialog*/ 
	/*name*/	_WT("��Ϣ����"), 
	/*explain*/	_WT("ѯ�ʵ���Ϣ����"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_TEXT, 
	},
	{	/*EPLClient_OnBeforeUnloadDialog*/ 
	/*name*/	_WT("�Ƿ����¼���"), 
	/*explain*/	_WT(""), 
	/*state*/	NULL, 
	/*DataType*/	SDT_BOOL, 
	},
	{	/*EPLClient_OnBeforeUnloadDialog*/ 
	/*name*/	_WT("�Ի���ص�"), 
	/*explain*/	_WT("���ϣ��ʹ���Զ���Ի�����ʾ��Ϣ����, ��û��˽ӿ��ṩ�˶Ի���Ĺ���ʵ��, ���ô˶Ի���ӿ��������������ִ�н����"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(19,0), 
	},
	{	/*EPLClient_OnResetDialogState*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("���öԻ���״̬�������"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnDialogClosed*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("�رնԻ���������"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_GetAuthCredentials*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("��������������"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_GetAuthCredentials*/ 
	/*name*/	_WT("��֤Դ"), 
	/*explain*/	_WT("�˲����Ƿ����������֤�������ԴURL��"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_TEXT, 
	},
	{	/*EPLClient_GetAuthCredentials*/ 
	/*name*/	_WT("�Ƿ�Ϊ���������"), 
	/*explain*/	_WT("�˲���ָʾĿ�������Ƿ�Ϊ�����������"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_BOOL, 
	},
	{	/*EPLClient_GetAuthCredentials*/ 
	/*name*/	_WT("��������"), 
	/*explain*/	_WT("������������"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_TEXT, 
	},
	{	/*EPLClient_GetAuthCredentials*/ 
	/*name*/	_WT("�˿ں�"), 
	/*explain*/	_WT("�����˿ں�"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_INT, 
	},
	{	/*EPLClient_GetAuthCredentials*/ 
	/*name*/	_WT("��"), 
	/*explain*/	_WT("���ʵ���"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_TEXT, 
	},
	{	/*EPLClient_GetAuthCredentials*/ 
	/*name*/	_WT("��֤����"), 
	/*explain*/	_WT("�˲�������ʹ�õ������֤����, ����:\"base\" �� \"digest\"����������Դ��FTP������, ��˲���Ϊ�ա�"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_TEXT, 
	},
	{	/*EPLClient_GetAuthCredentials*/ 
	/*name*/	_WT("��֤�ص�"), 
	/*explain*/	_WT("ִ�д˻ص�������������ύ�û������֤��Ϣ��"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(3,0), 
	},
	{	/*EPLClient_OnBeforeBrowse*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("��ʾ������Դ�������"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnBeforeBrowse*/ 
	/*name*/	_WT("���"), 
	/*explain*/	_WT("��ʾ������Դ�Ŀ��"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(17,0), 
	},
	{	/*EPLClient_OnBeforeBrowse*/ 
	/*name*/	_WT("����"), 
	/*explain*/	_WT("����������������, �ö����޷��ڴ��¼����޸ġ�"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(24,0), 
	},
	{	/*EPLClient_OnBeforeBrowse*/ 
	/*name*/	_WT("�Ƿ�Ϊ�û�����"), 
	/*explain*/	_WT("������û������������ȷ��ʹ�����ƽ��е���(����, ��������),��˲���Ϊ�档"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_BOOL, 
	},
	{	/*EPLClient_OnBeforeBrowse*/ 
	/*name*/	_WT("�Ƿ��ض���"), 
	/*explain*/	_WT("ָʾ�˵����Ƿ�Ϊ�ض�������"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_BOOL, 
	},
	{	/*EPLClient_OnBeforeResourceLoad*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("����Դ�������Դ�������"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnBeforeResourceLoad*/ 
	/*name*/	_WT("���"), 
	/*explain*/	_WT("����Դ�������Դ���"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(17,0), 
	},
	{	/*EPLClient_OnBeforeResourceLoad*/ 
	/*name*/	_WT("����"), 
	/*explain*/	_WT("����ȡ����Դ����������Դ���������޸����ض���������Դ���ء�"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(24,0), 
	},
	{	/*EPLClient_OnResourceRedirect*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("����������Դ�������"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnResourceRedirect*/ 
	/*name*/	_WT("���"), 
	/*explain*/	_WT("����������Դ�Ŀ��"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(17,0), 
	},
	{	/*EPLClient_OnResourceRedirect*/ 
	/*name*/	_WT("����"), 
	/*explain*/	_WT("�˲��������ɵ�URL�������������йص���Ϣ��ֻ������"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(24,0), 
	},
	{	/*EPLClient_OnResourceRedirect*/ 
	/*name*/	_WT("��Ӧ"), 
	/*explain*/	_WT("�˲��������������ض������Ӧ(response)��ֻ������"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(25,0), 
	},
	{	/*EPLClient_OnResourceRedirect*/ 
	/*name*/	_WT("�µ�ַ"), 
	/*explain*/	_WT("�˲����������µ�URL��ַ, �����Ը�����Ҫ���ġ�"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	SDT_TEXT, 
	},
	{	/*EPLClient_OnResourceResponse*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("����������Դ�������, ����Դ��Service Worker���� URLRequest������,�ò���Ϊ�ա�"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnResourceResponse*/ 
	/*name*/	_WT("���"), 
	/*explain*/	_WT("����������Դ�Ŀ��, ����Դ��Service Worker���� URLRequest������,�ò���Ϊ�ա�"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(17,0), 
	},
	{	/*EPLClient_OnResourceResponse*/ 
	/*name*/	_WT("����"), 
	/*explain*/	_WT("����ȡ����Դ������"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(24,0), 
	},
	{	/*EPLClient_OnResourceResponse*/ 
	/*name*/	_WT("��Ӧ"), 
	/*explain*/	_WT("����Դ����Ӧ(response), ֻ������"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(25,0), 
	},
	{	/*EPLClient_OnResourceResponseFilter*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("����������Դ�������"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnResourceResponseFilter*/ 
	/*name*/	_WT("���"), 
	/*explain*/	_WT("����������Դ�Ŀ��"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(17,0), 
	},
	{	/*EPLClient_OnResourceResponseFilter*/ 
	/*name*/	_WT("����"), 
	/*explain*/	_WT("�������Դ���������, �ö������ڴ��¼����޸ġ�"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(24,0), 
	},
	{	/*EPLClient_OnResourceResponseFilter*/ 
	/*name*/	_WT("��Ӧ"), 
	/*explain*/	_WT("�������Դ����Ӧ����, �ö������ڴ��¼����޸ġ�"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(25,0), 
	},
	{	/*EPLClient_OnResourceLoadComplete*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("����������Դ�������, ����Դ��Service Worker �� URLRequest������, �ò�������Ϊ�ա�"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnResourceLoadComplete*/ 
	/*name*/	_WT("���"), 
	/*explain*/	_WT("����������Դ�Ŀ��, ����Դ��Service Worker �� URLRequest������, �ò�������Ϊ�ա�"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(17,0), 
	},
	{	/*EPLClient_OnResourceLoadComplete*/ 
	/*name*/	_WT("����"), 
	/*explain*/	_WT("�˲����������Դ������, ֻ������"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(24,0), 
	},
	{	/*EPLClient_OnResourceLoadComplete*/ 
	/*name*/	_WT("��Ӧ"), 
	/*explain*/	_WT("�˲����������Դ����Ӧ, ֻ������"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(25,0), 
	},
	{	/*EPLClient_OnResourceLoadComplete*/ 
	/*name*/	_WT("״̬��"), 
	/*explain*/	_WT("�˲���ָʾ���ص����״̬������ֵΪö�ٳ����� #����״̬.*"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_INT, 
	},
	{	/*EPLClient_OnResourceLoadComplete*/ 
	/*name*/	_WT("���ճ���"), 
	/*explain*/	_WT("�˲�����ʵ�ʶ�ȡ����Ӧ�ֽ�����"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_INT64, 
	},
	{	/*EPLClient_OnFileDialog*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("������ȡ�ļ��Ի���������"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnFileDialog*/ 
	/*name*/	_WT("��ģʽ"), 
	/*explain*/	_WT("�ļ��Ի����ģʽ, ����ֵΪö�ٳ���: #�ļ��Ի���ģʽ.* "), 
	/*state*/	NULL, 
	/*DataType*/	SDT_INT, 
	},
	{	/*EPLClient_OnFileDialog*/ 
	/*name*/	_WT("����"), 
	/*explain*/	_WT("�Ի���Ҫʹ�õı���"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_TEXT, 
	},
	{	/*EPLClient_OnFileDialog*/ 
	/*name*/	_WT("Ĭ���ļ���"), 
	/*explain*/	_WT("�ṩ�ľ��п�ѡĿ¼���ļ�����·��Ӧ�������ڶԻ�����ѡ������"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_TEXT, 
	},
	{	/*EPLClient_OnFileDialog*/ 
	/*name*/	_WT("������"), 
	/*explain*/	_WT("�������������ڿ�ѡ���ļ�����, ���ҿ����������: a.��Ч��СдMIME����(����: \"text/*\" �� \"image/*\"), b.�����ļ���չ��(����: \".txt\" �� \".png\"), c.���˵�����ļ���չ��(����: \"ͼ���ļ�|.png;.gif.jpg \"), ����\"|\"���ڽ綨˵������չ���б�,��\";\"�����ڷָ�ÿһ����չ����"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_TEXT, 
	},
	{	/*EPLClient_OnFileDialog*/ 
	/*name*/	_WT("ѡ�������"), 
	/*explain*/	_WT("��0��ʼ, Ĭ�������Ӧѡ�������������"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_INT, 
	},
	{	/*EPLClient_OnFileDialog*/ 
	/*name*/	_WT("�Ի���ص�"), 
	/*explain*/	_WT("��ʹ���Զ����ļ��Ի���, ��ʹ�øûص��ӿ����ڷ����ļ�ѡ������"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(16,0), 
	},
	{	/*EPLClient_OnBeforeDownload*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("������������������"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnBeforeDownload*/ 
	/*name*/	_WT("������"), 
	/*explain*/	_WT("�ļ���������Ϣ, ��Ҫ���¼�֮�Ᵽ���ö�������á�"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(14,0), 
	},
	{	/*EPLClient_OnBeforeDownload*/ 
	/*name*/	_WT("��������"), 
	/*explain*/	_WT("���������������ļ��Ľ�������"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_TEXT, 
	},
	{	/*EPLClient_OnDownloadUpdated*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("������������������"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnDownloadUpdated*/ 
	/*name*/	_WT("������"), 
	/*explain*/	_WT("�ļ���������Ϣ, ��Ҫ�ڴ��¼�֮�Ᵽ���ö�������á�"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(14,0), 
	},
	{	/*EPLClient_OnResourceFilter*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("�����Դ��������ص������"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnResourceFilter*/ 
	/*name*/	_WT("������"), 
	/*explain*/	_WT("���ڽ�����Դ��ѡ�����á�"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(26,0), 
	},
	{	/*EPLClient_OnServerCreated*/ 
	/*name*/	_WT("������"), 
	/*explain*/	_WT("�����������ķ�����"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(28,0), 
	},
	{	/*EPLClient_OnServerDestroyed*/ 
	/*name*/	_WT("������"), 
	/*explain*/	_WT("ֹͣ���еķ�����"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(28,0), 
	},
	{	/*EPLClient_OnClientConnected*/ 
	/*name*/	_WT("������"), 
	/*explain*/	_WT(""), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(28,0), 
	},
	{	/*EPLClient_OnClientConnected*/ 
	/*name*/	_WT("�ͻ�ID"), 
	/*explain*/	_WT("��ʾ�ͻ����ӵ�ΨһID"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_INT, 
	},
	{	/*EPLClient_OnClientDisconnected*/ 
	/*name*/	_WT("������"), 
	/*explain*/	_WT(""), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(28,0), 
	},
	{	/*EPLClient_OnClientDisconnected*/ 
	/*name*/	_WT("�ͻ�ID"), 
	/*explain*/	_WT("��ʾ�ͻ����ӵ�ΨһID"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_INT, 
	},
	{	/*EPLClient_OnHttpRequest*/ 
	/*name*/	_WT("������"), 
	/*explain*/	_WT(""), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(28,0), 
	},
	{	/*EPLClient_OnHttpRequest*/ 
	/*name*/	_WT("�ͻ�ID"), 
	/*explain*/	_WT("��ʾ�ͻ����ӵ�ΨһID"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_INT, 
	},
	{	/*EPLClient_OnHttpRequest*/ 
	/*name*/	_WT("�ͻ���ַ"), 
	/*explain*/	_WT("�ͻ��˵����ӵ�ַ,�����˿ں�"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_TEXT, 
	},
	{	/*EPLClient_OnHttpRequest*/ 
	/*name*/	_WT("����"), 
	/*explain*/	_WT("��ʾ�����ͻ����������ݲ�����"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(24,0), 
	},
	{	/*EPLClient_OnWebSocketRequest*/ 
	/*name*/	_WT("������"), 
	/*explain*/	_WT(""), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(28,0), 
	},
	{	/*EPLClient_OnWebSocketRequest*/ 
	/*name*/	_WT("�ͻ�ID"), 
	/*explain*/	_WT("��ʾ�ͻ����ӵ�ΨһID"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_INT, 
	},
	{	/*EPLClient_OnWebSocketRequest*/ 
	/*name*/	_WT("�ͻ���ַ"), 
	/*explain*/	_WT("�ͻ��˵����ӵ�ַ, �����˿ں�"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_TEXT, 
	},
	{	/*EPLClient_OnWebSocketRequest*/ 
	/*name*/	_WT("����"), 
	/*explain*/	_WT("ָʾ�ͻ����������ݵĲ���"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(24,0), 
	},
	{	/*EPLClient_OnWebSocketConnected*/ 
	/*name*/	_WT("������"), 
	/*explain*/	_WT(""), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(28,0), 
	},
	{	/*EPLClient_OnWebSocketConnected*/ 
	/*name*/	_WT("�ͻ�ID"), 
	/*explain*/	_WT("��ʾ�ͻ����ӵ�ΨһID"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_INT, 
	},
	{	/*EPLClient_OnWebSocketMessage*/ 
	/*name*/	_WT("������"), 
	/*explain*/	_WT(""), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(28,0), 
	},
	{	/*EPLClient_OnWebSocketMessage*/ 
	/*name*/	_WT("�ͻ�ID"), 
	/*explain*/	_WT("��ʾ�ͻ����ӵ�ΨһID"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_INT, 
	},
	{	/*EPLClient_OnWebSocketMessage*/ 
	/*name*/	_WT("��Ϣ����"), 
	/*explain*/	_WT(""), 
	/*state*/	NULL, 
	/*DataType*/	SDT_BIN, 
	},
	{	/*EPLClient_OnWebSocketMessage*/ 
	/*name*/	_WT("��Ϣ����"), 
	/*explain*/	_WT("���ֽ�Ϊ��λ"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_INT, 
	},
	{	/*EPLClient_OnWebSocketClientConnected*/ 
	/*name*/	_WT("�׽���"), 
	/*explain*/	_WT("�����׽���"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(33,0), 
	},
	{	/*EPLClient_OnWebSocketClientClosed*/ 
	/*name*/	_WT("�׽���"), 
	/*explain*/	_WT("�Ͽ��׽���"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(33,0), 
	},
	{	/*EPLClient_OnWebSocketClientMessage*/ 
	/*name*/	_WT("�׽���"), 
	/*explain*/	_WT("�����׽���"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(33,0), 
	},
	{	/*EPLClient_OnWebSocketClientMessage*/ 
	/*name*/	_WT("������"), 
	/*explain*/	_WT("���յ�������������, ����ֵΪö�ٳ���: #���ı�������. * ��"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_INT, 
	},
	{	/*EPLClient_OnWebSocketClientMessage*/ 
	/*name*/	_WT("������"), 
	/*explain*/	_WT("�ֽ������ݡ�"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_BIN, 
	},
	{	/*EPLClient_OnWebSocketClientError*/ 
	/*name*/	_WT("�׽���"), 
	/*explain*/	_WT("�����׽���"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(33,0), 
	},
	{	/*EPLClient_OnWebSocketClientError*/ 
	/*name*/	_WT("������Ϣ"), 
	/*explain*/	_WT("����Ĵ�����Ϣ"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_TEXT, 
	},
	{	/*EPLClient_OnExtensionLoadFailed*/ 
	/*name*/	_WT("�������"), 
	/*explain*/	_WT("�������"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_INT, 
	},
	{	/*EPLClient_OnExtensionLoaded*/ 
	/*name*/	_WT("��չ����"), 
	/*explain*/	_WT(""), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(15,0), 
	},
	{	/*EPLClient_OnExtensionUnloaded*/ 
	/*name*/	_WT("��չ����"), 
	/*explain*/	_WT(""), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(15,0), 
	},
	{	/*EPLClient_OnBeforeBackgroundBrowser*/ 
	/*name*/	_WT("��չ����"), 
	/*explain*/	_WT("���ڼ��ؽű�����չ����"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(15,0), 
	},
	{	/*EPLClient_OnBeforeBackgroundBrowser*/ 
	/*name*/	_WT("����ҳ��URL"), 
	/*explain*/	_WT("��չ�����ڲ�����HTMLҳ���URL��ַ����HTMLҳ��ͨ��<script>�� src ���Լ��غ�̨�ű���"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_TEXT, 
	},
	{	/*EPLClient_OnBeforeBrowser*/ 
	/*name*/	_WT("��չ����"), 
	/*explain*/	_WT("����API��Դ����չ����"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(15,0), 
	},
	{	/*EPLClient_OnBeforeBrowser*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("����API��Դ����չ���������"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnBeforeBrowser*/ 
	/*name*/	_WT("������"), 
	/*explain*/	_WT(""), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnBeforeBrowser*/ 
	/*name*/	_WT("����"), 
	/*explain*/	_WT("����ָʾ�������λ������, ����ͨ��index����ָ����"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_INT, 
	},
	{	/*EPLClient_OnBeforeBrowser*/ 
	/*name*/	_WT("����URL"), 
	/*explain*/	_WT("�������Ҫ���ص�URL"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_TEXT, 
	},
	{	/*EPLClient_OnBeforeBrowser*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("�����ָʾ��������Ƿ�Ϊǰ̨����ڡ�"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_BOOL, 
	},
	{	/*EPLClient_OnBeforeBrowser*/ 
	/*name*/	_WT("��������"), 
	/*explain*/	_WT("������������Ĵ�����ʽ��Ϣ��"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(34,0), 
	},
	{	/*EPLClient_CanAccessBrowser*/ 
	/*name*/	_WT("��չ����"), 
	/*explain*/	_WT("��չ����API�ĵ�����Դ"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(15,0), 
	},
	{	/*EPLClient_CanAccessBrowser*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("��չ����API�ĵ�����Դ"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_CanAccessBrowser*/ 
	/*name*/	_WT("����ģʽ"), 
	/*explain*/	_WT("����Դ��չ�����������������, ��������������������, ����������´˲���Ϊ�档"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_BOOL, 
	},
	{	/*EPLClient_CanAccessBrowser*/ 
	/*name*/	_WT("Ŀ�������"), 
	/*explain*/	_WT(""), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_GetActiveBrowser*/ 
	/*name*/	_WT("��չ����"), 
	/*explain*/	_WT(""), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(15,0), 
	},
	{	/*EPLClient_GetActiveBrowser*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT(""), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_GetActiveBrowser*/ 
	/*name*/	_WT("����ģʽ"), 
	/*explain*/	_WT("����Դ��չ�����������������, ���򲻿������������, ����������´˲���Ϊ�档"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_BOOL, 
	},
	{	/*EPLClient_GetActiveBrowser*/ 
	/*name*/	_WT("��ȡ�ص�"), 
	/*explain*/	_WT("ʹ�ô˻ص��ӿ�����չ���򷵻ص�ǰӦ�ó����еĻ���������"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(2,0), 
	},
	{	/*EPLClient_GetExtensionResource*/ 
	/*name*/	_WT("��չ����"), 
	/*explain*/	_WT(""), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(15,0), 
	},
	{	/*EPLClient_GetExtensionResource*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT(""), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_GetExtensionResource*/ 
	/*name*/	_WT("��Դ�ļ���"), 
	/*explain*/	_WT("��չ���������������ص���Դ�ļ�����,���·��"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_TEXT, 
	},
	{	/*EPLClient_GetExtensionResource*/ 
	/*name*/	_WT("��Դ��ȡ�ص�"), 
	/*explain*/	_WT("���Ҫ������Դ����, ʹ�ô˻ص��ӿ�����չ���򷵻���Դ��ȡ�����"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(18,0), 
	},
	{	/*EPLClient_OnQuery*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("��ʾ��ѯ���������Դ"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnQuery*/ 
	/*name*/	_WT("���"), 
	/*explain*/	_WT("��ʾ��ѯ�Ŀ����Դ"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(17,0), 
	},
	{	/*EPLClient_OnQuery*/ 
	/*name*/	_WT("��ѯID"), 
	/*explain*/	_WT("��ʾ��ѯ��Ψһ��ʶ��, ����·�ɴ���ʱ���������ڲ�ѯ��"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_INT64, 
	},
	{	/*EPLClient_OnQuery*/ 
	/*name*/	_WT("����"), 
	/*explain*/	_WT("��ѯ����"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_TEXT, 
	},
	{	/*EPLClient_OnQuery*/ 
	/*name*/	_WT("�־���"), 
	/*explain*/	_WT(""), 
	/*state*/	NULL, 
	/*DataType*/	SDT_BOOL, 
	},
	{	/*EPLClient_OnQuery*/ 
	/*name*/	_WT("��ѯ���"), 
	/*explain*/	_WT("���ڷ����� Javascript ���ز�ѯִ�н����"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(23,0), 
	},
	{	/*EPLClient_OnQueryCanceled*/ 
	/*name*/	_WT("�����"), 
	/*explain*/	_WT("��ʾ��ѯ���������Դ"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(4,0), 
	},
	{	/*EPLClient_OnQueryCanceled*/ 
	/*name*/	_WT("���"), 
	/*explain*/	_WT("��ʾ��ѯ�Ŀ����Դ"), 
	/*state*/	EAS_BY_REF, 
	/*DataType*/	MAKELONG(17,0), 
	},
	{	/*EPLClient_OnQueryCanceled*/ 
	/*name*/	_WT("��ѯID"), 
	/*explain*/	_WT("��ʾ��ѯ��Ψһ��ʶ��, ����·�ɴ���ʱ���������ڲ�ѯ��"), 
	/*state*/	NULL, 
	/*DataType*/	SDT_INT64, 
	},

};


EVENT_INFO2 s_ChromiumEvent [] = 
{
	{
	/*szName*/	_WT("���̼�����ʼ��"),
	/*szExplain*/	_WT("��������������Ļ�����Ҫ��ʼ��ʱ���ô��¼����ڴ��¼�������������ṩ��һ�β鿴�����޸������в����Ļ��ᡣ"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	2,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[0],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("���̳�ʼ�����"),
	/*szExplain*/	_WT("��������������ĳ�ʼ����Ϻ���ô��¼���"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	0,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[2],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("�ӽ��̼�������"),
	/*szExplain*/	_WT("�������ӽ���ǰ���ô��¼���"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	1,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[2],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("��Ⱦ�����߳��Ѵ���"),
	/*szExplain*/	_WT("��Ϊ�µ���Ⱦ���̴������̺߳���ô��¼����⽫�ṩһ�λ�������Ϊ��Ⱦ�����ṩ�������Ϣ��"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	1,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[3],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("�������Ҫ��"),
	/*szExplain*/	_WT("��������������µĴ���ǰ���ô��¼�, �����ϣ����������������ô�����Ӧ�ڴ��¼��з������Դ�ʹ�����ȡ����������, ��δ���÷���ֵ�����������Ĭ�ϼ���ִ�и��������"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	9,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[4],
	/*nRet*/	SDT_BOOL,
	},
	{
	/*szName*/	_WT("������������"),
	/*szExplain*/	_WT("�ڴ����µ����������ô��¼�, ����¼����������������ĵ�һ�����õ��¼���"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	1,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[13],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("�������������"),
	/*szExplain*/	_WT("�������������֮ǰ���ô��¼�, ����¼����غ�����������ͷ����жԸö��������, �����벻Ҫ�ڴ��¼�֮���Զ��ٶԸö���ִ���κη���, ��������Ǹ��������������һ�������¼���"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	1,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[14],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("�������Ҫ�ر�"),
	/*szExplain*/	_WT("����������Ĺر�, ��ر��¼���Դ�����Ĺر���������������丸���ڽ������û��Ĺر�����(�û������X��ť)���ڴ��¼��������ϣ��������������رշ�����, ��ȡ���ر�����"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	1,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[15],
	/*nRet*/	SDT_BOOL,
	},
	{
	/*szName*/	_WT("���������״̬�Ѹı�"),
	/*szExplain*/	_WT("�����������״̬����ʱ���ô��¼������¼�ͨ�����ᱻ��������, һ����ͨ���û���������, ��һ��������ɻ�����ֹ���ش��������¼����������¼�\"��ʼ����\"����, ���ڼ�����ɻ���ֹʱ��\"�������\" �� \"����ʧ��\"�¼�֮����á�"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	4,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[16],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("�������ʼ����"),
	/*szExplain*/	_WT("�ڵ��������ύ�󽫻���ô��¼������¼����ܻ������п�ܷ�������������ε��á�"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	3,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[20],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("������������"),
	/*szExplain*/	_WT("���������ɼ��ؿ��ʱ���ô��¼��������ǰҳ���д��ڶ�����, ����¼��ᱻ��ε��á�"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	3,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[23],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("���������ʧ��"),
	/*szExplain*/	_WT("�����������ҳ��ʧ�ܻ���ִ�б�ȡ������ô��¼���"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	5,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[26],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("������˵�������"),
	/*szExplain*/	_WT("��ʾ�����Ĳ˵�ǰ���ô��¼���"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	4,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[31],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("�������ʾ�Զ���˵�"),
	/*szExplain*/	_WT("��ʾ�����Ĳ˵�ǰ���ô��¼�, �����Ҫ��ʾ�Զ���˵������档���򷵻ؼ�����ʾϵͳĬ�ϲ˵���"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	5,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[35],
	/*nRet*/	SDT_BOOL,
	},
	{
	/*szName*/	_WT("������˵��ѡ��"),
	/*szExplain*/	_WT("ִ�в˵�����ʱ���ô��¼�������˵������Ѵ�������, ���򷵻ؼٽ���ϵͳ����"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	5,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[40],
	/*nRet*/	SDT_BOOL,
	},
	{
	/*szName*/	_WT("������˵������ر�"),
	/*szExplain*/	_WT("�رղ˵�ǰ���ô��¼�, ���۲˵��Ƿ�ѡ�����ȡ�������ᷢ�����¼���"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	2,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[45],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("�������ַ�Ѹı�"),
	/*szExplain*/	_WT("���������ܵ�ַ����ʱ���ô��¼���"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	3,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[47],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("����������Ѹı�"),
	/*szExplain*/	_WT("�������ҳ�������ʱ���ô��¼���"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	2,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[50],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("�������ʾ������ʾ"),
	/*szExplain*/	_WT("�����������ʾ������ʾʱ���ô��¼�, �����Ҫ������ʾ��Ϣ���������Զ�����ʾ��������ʾ��Ӧ���ڴ��¼��з����档"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	2,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[52],
	/*nRet*/	SDT_BOOL,
	},
	{
	/*szName*/	_WT("�����״̬��Ϣ"),
	/*szExplain*/	_WT("��������յ�״̬��Ϣʱ���ô��¼���"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	2,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[54],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("���������̨��Ϣ"),
	/*szExplain*/	_WT("��������յ�����̨��Ϣʱ���ô��¼�, ���ϣ�������ֹͣ��Ϣ���������̨��Ӧ�������档"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	5,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[56],
	/*nRet*/	SDT_BOOL,
	},
	{
	/*szName*/	_WT("��������ؽ����Ѹ���"),
	/*szExplain*/	_WT("������ҳ����ؽ��ȸ���ʱ���ô��¼���"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	2,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[61],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("�����ȫ��ģʽ�Ѹı�"),
	/*szExplain*/	_WT("��ҳ�е���ҳ�����л�Ϊȫ��ģʽʱ���ô��¼���"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	2,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[63],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("������ű��Ի���Ҫ��"),
	/*szExplain*/	_WT("����������յ�Javascript�Ի������ʱִ�д��¼������ؼ�ʹ��ϵͳĬ�϶Ի���, ������ʹ���Զ���Ի���"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	7,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[65],
	/*nRet*/	SDT_BOOL,
	},
	{
	/*szName*/	_WT("������Ի���ҳ��ˢ��ѯ��"),
	/*szExplain*/	_WT("����һ���Ի���, ѯ���û��Ƿ�Ҫ�뿪ҳ�棬���ϣ��ʹ���Զ���ĶԻ�����ʾ��Ϣ������Ӧ���ڴ��¼��з����档"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	4,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[72],
	/*nRet*/	SDT_BOOL,
	},
	{
	/*szName*/	_WT("��������öԻ���״̬"),
	/*szExplain*/	_WT("ִ�д��¼���ȡ������δ���ĶԻ����������б��ֵĶԻ���״̬����������ҳ�浼��֮����¼�����������, �����ܵ�ǰ�Ƿ����κζԻ������"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	1,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[76],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("������Ի���ر�"),
	/*szExplain*/	_WT("�������Ĭ�϶Ի��򱻹ر�ʱ���ô��¼���"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	1,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[77],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("����������û������֤"),
	/*szExplain*/	_WT("���������Ҫ�û��ṩ��֤ƾ��ʱ���ô��¼�, ���ϣ�����������ִ�и���������Ӧ��������, ���ڴ˷����л��ں�����������֤��Ϣ֮�������֤�ص��ӿڡ����ؼ�����ȡ����������"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	8,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[78],
	/*nRet*/	SDT_BOOL,
	},
	{
	/*szName*/	_WT("�������Ҫ����"),
	/*szExplain*/	_WT("�������Ҫ����֮ǰ���ô��¼�����������ȡ������, ���ؼٵ������������С�"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	5,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[86],
	/*nRet*/	SDT_BOOL,
	},
	{
	/*szName*/	_WT("�������Ҫ������Դ"),
	/*szExplain*/	_WT("�����������Դ֮ǰ���ô��¼���ͨ������ö�ٳ���: #��Դ����.* �ж����ֵ�Ծ���������Ƿ�ȡ�����߼�������Դ������ "),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	3,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[91],
	/*nRet*/	SDT_INT,
	},
	{
	/*szName*/	_WT("�������Դ�ض���"),
	/*szExplain*/	_WT("������ض�����Դ����ʱ���ô��¼���"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	5,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[94],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("�������Դ�����յ���Ӧ"),
	/*szExplain*/	_WT("������յ���Դ��Ӧʱ���ô��¼�����Ҫ������Դ���ض������޸���Ӧ���ؼ�, Ҫ�ض����������Դ����, ����ѡ���޸�|����|������������, ������URL���޸Ľ�����Ϊ�ض���"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	4,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[99],
	/*nRet*/	SDT_BOOL,
	},
	{
	/*szName*/	_WT("�������Դ������"),
	/*szExplain*/	_WT("�ṩ���¼����Կ�ѡ���Ĺ�����Դ��Ӧ���ݡ����ϣ�������ִ����Դ������Ӧ���ڴ��¼�������, �����¼�\"�������Դ�������Ѿ���\"����ɹ�������, ������ؼ���������Դ����������������ֱ�ӷ��ص��������"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	4,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[103],
	/*nRet*/	SDT_BOOL,
	},
	{
	/*szName*/	_WT("�������Դ�������"),
	/*szExplain*/	_WT("�������Դ������ɺ���ô��¼������е���Դ���󶼻���ô��¼�, ����ӡChromium�رջ������������ٶ���ֹ��������������������������, ����¼������ڸ��������\"����������\"�¼�֮�󵽴��|���|ִ�з���\"�Ƿ���Ч\"���Բ����������, ����Ӧע�ⲻҪ����\"ȡ�����\"������"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	6,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[107],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("�������Ҫ���ļ��Ի���"),
	/*szExplain*/	_WT("����������ļ�ѡ��Ի���ʱ���ô��¼�, ���ϣ��ʹ���Զ�����ļ�ѡ�����Ի�����Ӧ�ڴ��¼��з����档"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	7,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[113],
	/*nRet*/	SDT_BOOL,
	},
	{
	/*szName*/	_WT("�������������"),
	/*szExplain*/	_WT("����������ؿ�ʼ֮ǰ���ô��¼���Ĭ����������е����ض�����ȡ����ִ��|���ػص�|�ӿڿ���ʹ�������������(�����Ҫ)��"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	3,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[120],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("��������ؽ����Ѹ���"),
	/*szExplain*/	_WT("������״̬�������Ϣ�Ѹ���ʱ���ô��¼������¼�����\"�������������\"�¼�֮�󱻶�ε��á�"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	2,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[123],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("�������Դ�������Ѿ���"),
	/*szExplain*/	_WT("���¼�����������Դ��������Żᷢ��, ��Դ��������ʼ�����ʱ���ô��¼���"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	2,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[125],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("��������������"),
	/*szExplain*/	_WT("��������������ʱ���ô��¼���"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	1,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[127],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("������ֹͣ����"),
	/*szExplain*/	_WT("������ֹͣ����ʱ���ô��¼�"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	1,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[128],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("�������ͻ�����"),
	/*szExplain*/	_WT("�յ��ͻ�������ʱ���ô��¼���"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	2,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[129],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("�������ͻ��뿪"),
	/*szExplain*/	_WT("�ͻ�����������Ͽ�����ʱ���ô��¼���"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	2,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[131],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("�������յ�����"),
	/*szExplain*/	_WT("�������յ�һ��HTTP����ʱ���ô��¼���"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	4,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[133],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("�������յ��׽�������"),
	/*szExplain*/	_WT("�������յ�һ��WebSocket����ʱ���ô��¼�������������ͻ������׽���(Websocket)����, ���ؼٺ��Դ�����"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	4,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[137],
	/*nRet*/	SDT_BOOL,
	},
	{
	/*szName*/	_WT("�������׽���������"),
	/*szExplain*/	_WT("���ܿͻ���Websocket���Ӻ���ô��¼���"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	2,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[141],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("�������յ��׽�����Ϣ"),
	/*szExplain*/	_WT("�������յ�Websocket��Ϣʱ���ô��¼���"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	4,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[143],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("��ҳ�׽������ӳɹ�"),
	/*szExplain*/	_WT("�ɹ����ӵ�������ʱ���ô��¼���"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	1,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[147],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("��ҳ�׽������ӶϿ�"),
	/*szExplain*/	_WT("�ѶϿ��������������ʱ���ô��¼���"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	1,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[148],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("��ҳ�׽������ݵ���"),
	/*szExplain*/	_WT("���յ�����������ʱ���ô��¼���"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	3,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[149],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("��ҳ�׽������Ӵ���"),
	/*szExplain*/	_WT("��ҳ�׽������Ӳ�������ʱ���ô��¼���"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	2,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[152],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("��չ��������ʧ��"),
	/*szExplain*/	_WT("���ú��� ˮ�������.������չ����() ����ʧ��ʱִ�д��¼���"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	1,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[154],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("��չ�����������"),
	/*szExplain*/	_WT("������ú��� ˮ�������.������չ����() ����ɹ�ʱִ�д��¼���"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	1,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[155],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("��չ������ж��"),
	/*szExplain*/	_WT("���ú��� ˮ����չ����.ж��() ����ɹ�ʱִ�д��¼���"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	1,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[156],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("��չ�����йܽű�"),
	/*szExplain*/	_WT("����չ������Ҫ��������йܺ�̨�ű�����ʱ���ô��¼���ȡ����̨�ű��ļ����Լ�������Ĵ���������, ���ؼ�������������������нű���"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	2,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[157],
	/*nRet*/	SDT_BOOL,
	},
	{
	/*szName*/	_WT("��չ����Ҫ��"),
	/*szExplain*/	_WT("����չ����API(����: chrome.tabs.create)���󴴽�һ���µ������ʱ���ô��¼���ȡ��������Ĵ���������, ���ؼ������������������"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	7,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[159],
	/*nRet*/	SDT_BOOL,
	},
	{
	/*szName*/	_WT("��չ������������"),
	/*szExplain*/	_WT("��tabId��|Ŀ�������|����ʱ���ô��¼���ָ��������tabId��������չ����API����(����: chrome.tabs.* )��������չ������������������, ȡ�����ʷ��ؼ١�"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	4,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[166],
	/*nRet*/	SDT_BOOL,
	},
	{
	/*szName*/	_WT("��չ����ȡ������"),
	/*szExplain*/	_WT("Ϊδ����tabId��������չAPI����ָ��tabIdʱ����(����, chrome.tabs.*)��"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	4,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[170],
	/*nRet*/	_SDT_NULL,
	},
	{
	/*szName*/	_WT("��չ�����ȡ��Դ�¼�"),
	/*szExplain*/	_WT("��չ������ô��¼��Ӵ���������������չ��Դ(����, ������ļ�����ָ��Ϊchrome.tabs.executeScript)��Ҫ������Դ�����뷵���沢ִ��|��Դ��ȡ�ص�|������������չ�����ύ��ȡ�����"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	4,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[174],
	/*nRet*/	SDT_BOOL,
	},
	{
	/*szName*/	_WT("�ű��յ���ѯ"),
	/*szExplain*/	_WT("�յ��µ� Javascript ��ѯʱִ�д��¼����������ʾ��ѯ�ѱ�����, ���ؼٲ�ѯ���ᱻ������������ע��Ĵ�������(�����)�����û�д������Ӵ��¼��з�����, ��ѯ���ᱻȡ��, ����Javascript onFailure �ص����ݴ������-1������˷��ط��������ִ���첽�����ص�|��ѯ���|�Է��ز�ѯ�����"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	6,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[178],
	/*nRet*/	SDT_BOOL,
	},
	{
	/*szName*/	_WT("�ű���ѯ��ȡ��"),
	/*szExplain*/	_WT("ʹ�� Javascript ȡ��������ʾ��ȡ���˲�ѯ�����������������, ����������Renderer������ֹ����ʽȡ����ѯʱ���ô��¼������ô˷�����, ��Ӧ�ڱ������ѯ�����Ļص��ӿڶ���, Ҳ��Ӧ��ִ�лص��е��κνӿڡ�"),
	/*dwState*/	EV_IS_VER2,
	/*nArgCount*/	3,
	/*pBeginArgInfo*/	&s_ChromiumEventArgInfo[184],
	/*nRet*/	_SDT_NULL,
	},

};

#ifndef __E_STATIC_LIB

static LIB_DATA_TYPE_ELEMENT s_dtDataElemnet[]={
	{
		/*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("�ڲ�ָ��"),
        /*m_szEgName*/          _T("InternalPointer"),
        /*m_szExplain*/         _T("��Ŷ����ָ��"),
        /*m_dwState*/           LES_HIDED,
        /*m_nDefault*/          0
    }
};

INT s_nChromiumElementCmdIndex[]={
	0,1,2,3,4,5,6,7,
};

INT s_nProxyActiveBrowserCallbackElementCmdIndex[]={
	8,9,10,11,
};

INT s_nProxyAuthCallbackElementCmdIndex[]={
	12,13,14,15,16,
};

INT s_nProxyBaseElementCmdIndex[]={
	17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,
};

INT s_nProxyBrowserElementCmdIndex[]={
	48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,
};

INT s_nProxyBrowserSettingsElementCmdIndex[]={
	118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,
};

INT s_nProxyCollectionElementCmdIndex[]={
	152,153,154,155,156,157,158,159,160,
};

INT s_nProxyCommandLineElementCmdIndex[]={
	161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,
};

INT s_nProxyContextMenuParamsElementCmdIndex[]={
	178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,
};

INT s_nProxyCookieElementCmdIndex[]={
	202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,
};

INT s_nProxyCookieManagerElementCmdIndex[]={
	226,227,228,229,230,231,232,233,234,235,236,237,
};

INT s_nProxyDictionaryValueElementCmdIndex[]={
	238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,256,257,258,259,260,261,262,263,264,265,266,267,268,269,
};

INT s_nProxyDOMDocumentElementCmdIndex[]={
	270,271,272,273,274,275,276,277,278,279,280,281,282,283,284,285,286,287,288,289,
};

INT s_nProxyDOMNodeElementCmdIndex[]={
	290,291,292,293,294,295,296,297,298,299,300,301,302,303,304,305,306,307,308,309,310,311,312,313,314,315,316,317,318,319,320,321,322,323,
};

INT s_nProxyDownloadItemElementCmdIndex[]={
	324,325,326,327,328,329,330,331,332,333,334,335,336,337,338,339,340,341,342,343,344,345,346,347,
};

INT s_nProxyExtensionElementCmdIndex[]={
	348,349,350,351,352,353,354,355,356,357,
};

INT s_nProxyFileDialogCallbackElementCmdIndex[]={
	358,359,360,361,362,
};

INT s_nProxyFrameElementCmdIndex[]={
	363,364,365,366,367,368,369,370,371,372,373,374,375,376,377,378,379,380,381,382,383,384,385,386,387,388,389,390,391,392,393,
};

INT s_nProxyGetExtensionResourceCallbackElementCmdIndex[]={
	394,395,396,397,398,399,
};

INT s_nProxyJSDialogCallbackElementCmdIndex[]={
	400,401,402,403,
};

INT s_nProxyListValueElementCmdIndex[]={
	404,405,406,407,408,409,410,411,412,413,414,415,416,417,418,419,420,421,422,423,424,425,426,427,428,429,430,431,432,433,434,
};

INT s_nProxyMenuModelElementCmdIndex[]={
	435,436,437,438,439,440,441,442,443,444,445,446,447,448,449,450,451,452,453,454,455,456,457,458,459,460,461,462,463,464,465,466,467,468,469,470,471,472,473,474,475,476,477,478,479,480,481,482,483,484,485,486,487,488,489,
};

INT s_nProxyPostDataElementElementCmdIndex[]={
	490,491,492,493,494,495,496,497,498,499,500,501,
};

INT s_nProxyQueryCallbackElementCmdIndex[]={
	502,503,504,505,506,
};

INT s_nProxyRequestElementCmdIndex[]={
	507,508,509,510,511,512,513,514,515,516,517,518,519,520,521,522,523,524,525,526,527,528,529,530,531,532,533,534,
};

INT s_nProxyResponseElementCmdIndex[]={
	535,536,537,538,539,540,541,542,543,544,545,546,547,548,549,550,551,552,553,554,555,
};

INT s_nProxyResponseFilterElementCmdIndex[]={
	556,557,558,559,560,561,562,563,564,
};

INT s_nProxyRunContextMenuCallbackElementCmdIndex[]={
	565,566,567,568,569,
};

INT s_nProxyServerElementCmdIndex[]={
	570,571,572,573,574,575,576,577,578,579,580,581,582,583,584,
};

INT s_nProxySettingsElementCmdIndex[]={
	585,586,587,588,589,590,591,592,593,594,595,596,597,
};

INT s_nProxyURLRequestElementCmdIndex[]={
	598,599,600,601,602,603,604,605,606,607,608,609,
};

INT s_nProxyValueElementCmdIndex[]={
	610,611,612,613,614,615,616,617,618,619,620,621,622,623,624,625,626,627,628,629,630,631,632,633,634,
};

INT s_nProxyWaitableEventElementCmdIndex[]={
	635,636,637,638,639,640,641,642,643,644,645,
};

INT s_nProxyWebSocketElementCmdIndex[]={
	646,647,648,649,650,651,652,653,654,655,656,657,
};

INT s_nProxyWindowInfoElementCmdIndex[]={
	658,659,660,661,662,663,
};



#endif

/////////////////////////////////////////////////////////////////////////////


#ifndef __E_STATIC_LIB

#include "tenum.h"


//��������
static const char* const g_CmdNames[] = 
{
DECL_DATA_TYPE_ProxyClient_FUN_NAMES
DECL_DATA_TYPE_ProxyActiveBrowserCallback_FUN_NAMES
DECL_DATA_TYPE_ProxyAuthCallback_FUN_NAMES
DECL_DATA_TYPE_ProxyBase_FUN_NAMES
DECL_DATA_TYPE_ProxyBrowser_FUN_NAMES
DECL_DATA_TYPE_ProxyBrowserSettings_FUN_NAMES
DECL_DATA_TYPE_ProxyCollection_FUN_NAMES
DECL_DATA_TYPE_ProxyCommandLine_FUN_NAMES
DECL_DATA_TYPE_ProxyContextMenuParams_FUN_NAMES
DECL_DATA_TYPE_ProxyCookie_FUN_NAMES
DECL_DATA_TYPE_ProxyCookieManager_FUN_NAMES
DECL_DATA_TYPE_ProxyDictionaryValue_FUN_NAMES
DECL_DATA_TYPE_ProxyDOMDocument_FUN_NAMES
DECL_DATA_TYPE_ProxyDOMNode_FUN_NAMES
DECL_DATA_TYPE_ProxyDownloadItem_FUN_NAMES
DECL_DATA_TYPE_ProxyExtension_FUN_NAMES
DECL_DATA_TYPE_ProxyFileDialogCallback_FUN_NAMES
DECL_DATA_TYPE_ProxyFrame_FUN_NAMES
DECL_DATA_TYPE_ProxyGetExtensionResourceCallback_FUN_NAMES
DECL_DATA_TYPE_ProxyJSDialogCallback_FUN_NAMES
DECL_DATA_TYPE_ProxyListValue_FUN_NAMES
DECL_DATA_TYPE_ProxyMenuModel_FUN_NAMES
DECL_DATA_TYPE_ProxyPostDataElement_FUN_NAMES
DECL_DATA_TYPE_ProxyQueryCallback_FUN_NAMES
DECL_DATA_TYPE_ProxyRequest_FUN_NAMES
DECL_DATA_TYPE_ProxyResponse_FUN_NAMES
DECL_DATA_TYPE_ProxyResponseFilter_FUN_NAMES
DECL_DATA_TYPE_ProxyRunContextMenuCallback_FUN_NAMES
DECL_DATA_TYPE_ProxyServer_FUN_NAMES
DECL_DATA_TYPE_ProxySettings_FUN_NAMES
DECL_DATA_TYPE_ProxyURLRequest_FUN_NAMES
DECL_DATA_TYPE_ProxyValue_FUN_NAMES
DECL_DATA_TYPE_ProxyWaitableEvent_FUN_NAMES
DECL_DATA_TYPE_ProxyWebSocket_FUN_NAMES
DECL_DATA_TYPE_ProxyWindowInfo_FUN_NAMES

};


//��������
PFN_EXECUTE_CMD s_RunFunc [] =	
{
DECL_DATA_TYPE_ProxyClient_FUN_CALLS
DECL_DATA_TYPE_ProxyActiveBrowserCallback_FUN_CALLS
DECL_DATA_TYPE_ProxyAuthCallback_FUN_CALLS
DECL_DATA_TYPE_ProxyBase_FUN_CALLS
DECL_DATA_TYPE_ProxyBrowser_FUN_CALLS
DECL_DATA_TYPE_ProxyBrowserSettings_FUN_CALLS
DECL_DATA_TYPE_ProxyCollection_FUN_CALLS
DECL_DATA_TYPE_ProxyCommandLine_FUN_CALLS
DECL_DATA_TYPE_ProxyContextMenuParams_FUN_CALLS
DECL_DATA_TYPE_ProxyCookie_FUN_CALLS
DECL_DATA_TYPE_ProxyCookieManager_FUN_CALLS
DECL_DATA_TYPE_ProxyDictionaryValue_FUN_CALLS
DECL_DATA_TYPE_ProxyDOMDocument_FUN_CALLS
DECL_DATA_TYPE_ProxyDOMNode_FUN_CALLS
DECL_DATA_TYPE_ProxyDownloadItem_FUN_CALLS
DECL_DATA_TYPE_ProxyExtension_FUN_CALLS
DECL_DATA_TYPE_ProxyFileDialogCallback_FUN_CALLS
DECL_DATA_TYPE_ProxyFrame_FUN_CALLS
DECL_DATA_TYPE_ProxyGetExtensionResourceCallback_FUN_CALLS
DECL_DATA_TYPE_ProxyJSDialogCallback_FUN_CALLS
DECL_DATA_TYPE_ProxyListValue_FUN_CALLS
DECL_DATA_TYPE_ProxyMenuModel_FUN_CALLS
DECL_DATA_TYPE_ProxyPostDataElement_FUN_CALLS
DECL_DATA_TYPE_ProxyQueryCallback_FUN_CALLS
DECL_DATA_TYPE_ProxyRequest_FUN_CALLS
DECL_DATA_TYPE_ProxyResponse_FUN_CALLS
DECL_DATA_TYPE_ProxyResponseFilter_FUN_CALLS
DECL_DATA_TYPE_ProxyRunContextMenuCallback_FUN_CALLS
DECL_DATA_TYPE_ProxyServer_FUN_CALLS
DECL_DATA_TYPE_ProxySettings_FUN_CALLS
DECL_DATA_TYPE_ProxyURLRequest_FUN_CALLS
DECL_DATA_TYPE_ProxyValue_FUN_CALLS
DECL_DATA_TYPE_ProxyWaitableEvent_FUN_CALLS
DECL_DATA_TYPE_ProxyWebSocket_FUN_CALLS
DECL_DATA_TYPE_ProxyWindowInfo_FUN_CALLS

};


//��������ǩ��
ARG_INFO s_ArgInfo[] = 
{
DECL_DATA_TYPE_ProxyClient_ARGINFO
DECL_DATA_TYPE_ProxyActiveBrowserCallback_ARGINFO
DECL_DATA_TYPE_ProxyAuthCallback_ARGINFO
DECL_DATA_TYPE_ProxyBase_ARGINFO
DECL_DATA_TYPE_ProxyBrowser_ARGINFO
DECL_DATA_TYPE_ProxyBrowserSettings_ARGINFO
DECL_DATA_TYPE_ProxyCollection_ARGINFO
DECL_DATA_TYPE_ProxyCommandLine_ARGINFO
DECL_DATA_TYPE_ProxyContextMenuParams_ARGINFO
DECL_DATA_TYPE_ProxyCookie_ARGINFO
DECL_DATA_TYPE_ProxyCookieManager_ARGINFO
DECL_DATA_TYPE_ProxyDictionaryValue_ARGINFO
DECL_DATA_TYPE_ProxyDOMDocument_ARGINFO
DECL_DATA_TYPE_ProxyDOMNode_ARGINFO
DECL_DATA_TYPE_ProxyDownloadItem_ARGINFO
DECL_DATA_TYPE_ProxyExtension_ARGINFO
DECL_DATA_TYPE_ProxyFileDialogCallback_ARGINFO
DECL_DATA_TYPE_ProxyFrame_ARGINFO
DECL_DATA_TYPE_ProxyGetExtensionResourceCallback_ARGINFO
DECL_DATA_TYPE_ProxyJSDialogCallback_ARGINFO
DECL_DATA_TYPE_ProxyListValue_ARGINFO
DECL_DATA_TYPE_ProxyMenuModel_ARGINFO
DECL_DATA_TYPE_ProxyPostDataElement_ARGINFO
DECL_DATA_TYPE_ProxyQueryCallback_ARGINFO
DECL_DATA_TYPE_ProxyRequest_ARGINFO
DECL_DATA_TYPE_ProxyResponse_ARGINFO
DECL_DATA_TYPE_ProxyResponseFilter_ARGINFO
DECL_DATA_TYPE_ProxyRunContextMenuCallback_ARGINFO
DECL_DATA_TYPE_ProxyServer_ARGINFO
DECL_DATA_TYPE_ProxySettings_ARGINFO
DECL_DATA_TYPE_ProxyURLRequest_ARGINFO
DECL_DATA_TYPE_ProxyValue_ARGINFO
DECL_DATA_TYPE_ProxyWaitableEvent_ARGINFO
DECL_DATA_TYPE_ProxyWebSocket_ARGINFO
DECL_DATA_TYPE_ProxyWindowInfo_ARGINFO

};

//��������ǩ��
static CMD_INFO s_CmdInfo[] = 
{
DECL_DATA_TYPE_ProxyClient_CMDINFO(0)
DECL_DATA_TYPE_ProxyActiveBrowserCallback_CMDINFO(12)
DECL_DATA_TYPE_ProxyAuthCallback_CMDINFO(13)
DECL_DATA_TYPE_ProxyBase_CMDINFO(15)
DECL_DATA_TYPE_ProxyBrowser_CMDINFO(55)
DECL_DATA_TYPE_ProxyBrowserSettings_CMDINFO(127)
DECL_DATA_TYPE_ProxyCollection_CMDINFO(157)
DECL_DATA_TYPE_ProxyCommandLine_CMDINFO(161)
DECL_DATA_TYPE_ProxyContextMenuParams_CMDINFO(168)
DECL_DATA_TYPE_ProxyCookie_CMDINFO(168)
DECL_DATA_TYPE_ProxyCookieManager_CMDINFO(178)
DECL_DATA_TYPE_ProxyDictionaryValue_CMDINFO(188)
DECL_DATA_TYPE_ProxyDOMDocument_CMDINFO(220)
DECL_DATA_TYPE_ProxyDOMNode_CMDINFO(224)
DECL_DATA_TYPE_ProxyDownloadItem_CMDINFO(233)
DECL_DATA_TYPE_ProxyExtension_CMDINFO(235)
DECL_DATA_TYPE_ProxyFileDialogCallback_CMDINFO(236)
DECL_DATA_TYPE_ProxyFrame_CMDINFO(238)
DECL_DATA_TYPE_ProxyGetExtensionResourceCallback_CMDINFO(278)
DECL_DATA_TYPE_ProxyJSDialogCallback_CMDINFO(281)
DECL_DATA_TYPE_ProxyListValue_CMDINFO(283)
DECL_DATA_TYPE_ProxyMenuModel_CMDINFO(314)
DECL_DATA_TYPE_ProxyPostDataElement_CMDINFO(401)
DECL_DATA_TYPE_ProxyQueryCallback_CMDINFO(404)
DECL_DATA_TYPE_ProxyRequest_CMDINFO(407)
DECL_DATA_TYPE_ProxyResponse_CMDINFO(420)
DECL_DATA_TYPE_ProxyResponseFilter_CMDINFO(431)
DECL_DATA_TYPE_ProxyRunContextMenuCallback_CMDINFO(433)
DECL_DATA_TYPE_ProxyServer_CMDINFO(435)
DECL_DATA_TYPE_ProxySettings_CMDINFO(455)
DECL_DATA_TYPE_ProxyURLRequest_CMDINFO(464)
DECL_DATA_TYPE_ProxyValue_CMDINFO(464)
DECL_DATA_TYPE_ProxyWaitableEvent_CMDINFO(474)
DECL_DATA_TYPE_ProxyWebSocket_CMDINFO(476)
DECL_DATA_TYPE_ProxyWindowInfo_CMDINFO(485)

};

//��������ǩ��
LIB_CONST_INFO s_ConstInfo [] =
{
	NULL
};

//������������ǩ��
static LIB_DATA_TYPE_INFO s_DataType[] = 
{
DATA_TYPE_AQUARIUS_UNIT
DECL_DATA_TYPE_ProxyActiveBrowserCallback
DECL_DATA_TYPE_ProxyAuthCallback
DECL_DATA_TYPE_ProxyBrowser
DECL_DATA_TYPE_ProxyBrowserSettings
DECL_DATA_TYPE_ProxyCollection
DECL_DATA_TYPE_ProxyCommandLine
DECL_DATA_TYPE_ProxyContextMenuParams
DECL_DATA_TYPE_ProxyCookie
DECL_DATA_TYPE_ProxyCookieManager
DECL_DATA_TYPE_ProxyDictionaryValue
DECL_DATA_TYPE_ProxyDOMDocument
DECL_DATA_TYPE_ProxyDOMNode
DECL_DATA_TYPE_ProxyDownloadItem
DECL_DATA_TYPE_ProxyExtension
DECL_DATA_TYPE_ProxyFileDialogCallback
DECL_DATA_TYPE_ProxyFrame
DECL_DATA_TYPE_ProxyGetExtensionResourceCallback
DECL_DATA_TYPE_ProxyJSDialogCallback
DECL_DATA_TYPE_ProxyListValue
DECL_DATA_TYPE_ProxyMenuModel
DECL_DATA_TYPE_ProxyPostDataElement
DECL_DATA_TYPE_ProxyQueryCallback
DECL_DATA_TYPE_ProxyRequest
DECL_DATA_TYPE_ProxyResponse
DECL_DATA_TYPE_ProxyResponseFilter
DECL_DATA_TYPE_ProxyRunContextMenuCallback
DECL_DATA_TYPE_ProxyServer
DECL_DATA_TYPE_ProxySettings
DECL_DATA_TYPE_ProxyURLRequest
DECL_DATA_TYPE_ProxyValue
DECL_DATA_TYPE_ProxyWaitableEvent
DECL_DATA_TYPE_ProxyWebSocket
DECL_DATA_TYPE_ProxyWindowInfo

DATA_TYPE_ENUM_DEFINITION("����¼�","ClickEvent", ENUM_MOUSE_EVENT_EXPLAIN, s_ChromiumMouseEventEnumList)
DATA_TYPE_ENUM_DEFINITION("��Դ����","ReferrerPolicy", ENUM_REFERRER_POLICY_EXPLAIN, s_RequestReferrerPolicyEnumList)
DATA_TYPE_ENUM_DEFINITION("��Դ����","ResourceType", ENUM_RESOURCE_TYPE_EXPLAIN, s_ResourceTypeEnumList)
DATA_TYPE_ENUM_DEFINITION("�ű��Ի���","JavacriptDialogType", ENUM_JAVASCRIPTDIALOG_TYPE_EXPLAIN, s_JavaScriptDialogTypeEnumList)
DATA_TYPE_ENUM_DEFINITION("��Դ����","ResourceRequest", ENUM_RESOURCE_RETVALUE_TYPE_EXPLAIN, s_ResourceRetValueEnumList)
DATA_TYPE_ENUM_DEFINITION("�ļ��Ի���ģʽ","FileMode", ENUM_FILEMODE_TYPE_EXPLAIN, s_FileModeEnumList)
DATA_TYPE_ENUM_DEFINITION("�¼���־","EventFlags", ENUM_EVENTFLAGS_EXPLAIN, s_EventFlagsEnumList)
DATA_TYPE_ENUM_DEFINITION("״̬����","StateSwitch", ENUM_COMMANDSWITCH_EXPLAIN, s_CommandSwitchEnumList)
DATA_TYPE_ENUM_DEFINITION("������Դ","TransitionType", ENUM_TRANSITION_TYPE_EXPLAIN, s_TransitionTypeEnumList)
DATA_TYPE_ENUM_DEFINITION("ֵ����","ValueType", ENUM_VALUE_TYPE_EXPLAIN, s_ValueTypeEnumList)
DATA_TYPE_ENUM_DEFINITION("���Ӵ򿪷�ʽ","ValueType", ENUM_WINDOW_OPEN_DISPOSITION_EXPLAIN, s_WindowOpenDispositionEnumList)
DATA_TYPE_ENUM_DEFINITION("��Ϣ��¼�ȼ�","MessageLevel", ENUM_MESSAGE_LEVEL_EXPLAIN, s_MessageLevelEnumList)
DATA_TYPE_ENUM_DEFINITION("ϵͳ���ò˵�","SystemMenuId",ENUM_SYSTEM_MENU_ID_EXPLAIN,s_SystemMenuIdEnumList)
DATA_TYPE_ENUM_DEFINITION("����������","V8Interecptor", ENUM_V8_PROPERTY_ATTRI_EXPLAIN, s_V8PropertyAttriEnumList)
DATA_TYPE_ENUM_DEFINITION("�����¼�����","KeyEventType", ENUM_KEY_EVENT_EXPLAIN, s_KeyEventEnumList)
DATA_TYPE_ENUM_DEFINITION("����״̬","TouchEventTYPE", ENUM_TOUCH_EVENT_TYPE_EXPLAIN, s_TouchEventTypeEnumList)
DATA_TYPE_ENUM_DEFINITION("�豸ָ������","TouchPointType", ENUM_TOUCH_POINTER_TYPE_EXPLAIN, s_TouchPointerTypeEnumList)
DATA_TYPE_ENUM_DEFINITION("�ύԪ������","PostDataElementType", ENUM_POST_DATA_ELEMENT_TYPE_EXPLAIN, s_PostDataElementTypeEnumList)
DATA_TYPE_ENUM_DEFINITION("ת�����","UriUnescapeRule", ENUM_POST_DATA_ELEMENT_TYPE_EXPLAIN, s_UriUnescapeRuleEnumList)
DATA_TYPE_ENUM_DEFINITION("����״̬","UrlRequestStatus", ENUM_URL_REQUEST_STATUS_EXPLAIN, s_UrlRequestStatusEnumList)
DATA_TYPE_ENUM_DEFINITION("�׽���������","WebSocketDataType", ENUM_WEB_SOCKET_DATA_TYPE_EXPLAIN, s_WebSocketDataTypeEnumList)
DATA_TYPE_ENUM_DEFINITION("�˵�����","MenuType", ENUM_MENU_TYPE_EXPLAIN, s_MenuTypeEnumList)
DATA_TYPE_ENUM_DEFINITION("��ý������","MediaType", ENUM_MEDIA_TYPE_EXPLAIN, s_MediaTypeEnumList)
DATA_TYPE_ENUM_DEFINITION("��ҳ�ĵ�����","DocumentType","��ҳ�ĵ�����",s_DocumentTypeEnumList)
DATA_TYPE_ENUM_DEFINITION("��ҳԪ������","DocumentElementType","��ҳ�ĵ�Ԫ������",s_DocumentElementTypeEnumList)
DATA_TYPE_ENUM_DEFINITION("�������Դ","GestureSourceType","ָʾ���ɺ������͵������¼�",s_GestureSourceTypeEnumList)
DATA_TYPE_ENUM_DEFINITION("��������������","GestureProviderConfig","������������������",s_GestureProviderConfigTypeEnumList)
DATA_TYPE_ENUM_DEFINITION("�豸��Ļ����","DeviceScreenType","�豸��Ļ����",s_DeviceScreenTypeEnumList)
DATA_TYPE_ENUM_DEFINITION("��Ļ����","ScreenOrientation","�豸��Ļ����",s_ScreenOrientationTypeEnumList)
DATA_TYPE_ENUM_DEFINITION("�����־","URLRequestFlags","URL�����־����ֵ",s_URLRequestFlagsEnumList)
DATA_TYPE_ENUM_DEFINITION("����������","RequestTransitionType","����������",s_RequestTransitionTypeEnumList)
};

#endif

/////////////////////////////////////////////////////////////////////////////

EXTERN_C INT WINAPI EDITIONF(ProcessNotifyLib) (INT nMsg, DWORD dwParam1, DWORD dwParam2)
{
#ifndef __E_STATIC_LIB
	if(nMsg == NL_GET_CMD_FUNC_NAMES){
		return (INT) g_CmdNames;
	}
	else if(nMsg == NL_GET_NOTIFY_LIB_FUNC_NAME)
		return (INT) EDITIONS("ProcessNotifyLib");
	else if(nMsg == NL_GET_DEPENDENT_LIBS)
		return (INT)"aquarius2.lib\0\0";
#endif
	return ProcessNotifyLib(nMsg, dwParam1, dwParam2);
}

/////////////////////////////////////////////////////////////////////////////

#ifndef __E_STATIC_LIB
/////////////////////////////////////////////////////////////////////////////

//////////// �ⶨ�忪ʼ
static LIB_INFO s_LibInfo =
{
/*Lib Format Ver*/		LIB_FORMAT_VER,		// ����δ�á�

// ��֧�ֿ��GUID����
// {369F969F-2DB0-42bc-86DF-23AE68BF0553}
#define		LI_LIB_GUID_STR	"369F969F2DB042bc86DF23AE68BF0553"
/*guid str*/			_WT (LI_LIB_GUID_STR),

/*m_nMajorVersion*/		2,
/*m_nMinorVersion*/		0,

//!!!	ע�⣺������ɾ��������������������������͡�������Ϣ�ȣ�ֻҪ�԰���
//!!! �ļ����ɻ����Ӱ�죬�����������汾�ţ�������ֻ�޸�BuildNumber��
//!!!   �Ķ����������汾��!!!
/*m_nBuildNumber*/		51,	// 1: 2.5;  2: 2.5���Ű�; 3: 3.0��;  50: 3.39; 51: 4.11
		// �����汾�ţ�����Դ˰汾�����κδ���
		//   ���汾�Ž�����������ͬ��ʽ�汾�ŵĿ⣨Ʃ������޸��˼��� BUG����
		// �κι��������û�ʹ�õİ汾��˰汾�Ŷ�Ӧ�ò�һ����
		//   ��ֵʱӦ��˳�������

/*m_nRqSysMajorVer*/		3,
/*m_nRqSysMinorVer*/		0,
/*m_nRqSysKrnlLibMajorVer*/	3,
/*m_nRqSysKrnlLibMinorVer*/	0,

/*name*/				_WT ("ˮ�������֧�ֿ�"),
/*lang*/				__GBK_LANG_VER,
/*explain*/				_WT("��֧�ֿ��ṩ��Ƕ��ʽChromium�����֧�֡�")
						_WT("��֧�ֿ����CEF����, CEF�汾Ϊ: CEF 80.1.15 / Chromium 80.0.3987.163��")
                        _WT("��ȡ֧�ֿ������: http://www.itwitch.cc/ecef/��")
                        _WT("��֧�ֿ���Ҫ����ϵͳ: Win7 / Win2008 ������,  32bit or 64bit��"),
/*dwState*/				NULL,

/*szAuthor*/	_WT("��è"),
/*szZipCode*/	_WT("10032"),
/*szAddress*/	_WT("��ӭ����ˮ��������: 89456201��649931225"),
/*szPhoto*/		_WT(""),
/*szFax*/		_WT(""),
/*szEmail*/		_WT("kirno17@hotmail.com"),
/*szHomePage*/	_WT("http://www.itwitch.cc/ecef/"),
/*szOther*/		_WT("ף��һ����˳�������³ɣ�"),

/*type count*/			sizeof (s_DataType) / sizeof (s_DataType[0]),
/*PLIB_DATA_TYPE_INFO*/	s_DataType,

/*CategoryCount*/ 1,	// ���������Ӵ�ֵ��
/*category*/_WT("0000��̬����\0"	// ���˵����ÿ��Ϊһ�ַ���,ǰ��λ���ֱ�ʾͼ��������(��1��ʼ,0��).
				"\0"),
/*CmdCount*/				sizeof (s_CmdInfo) / sizeof (s_CmdInfo [0]),
/*BeginCmd*/				s_CmdInfo,
/*m_pCmdsFunc*/             s_RunFunc,
/*pfnRunAddInFn*/			AddInFunction,
/*szzAddInFnInfo*/			_WT("[ˮ��] ����Ӧ�ó���\0�������������ʱ��Ҫ��Դ����װ����Ŀ¼��\0\0"),

/*pfnNotify*/				(PFN_NOTIFY_LIB)EDITIONF(ProcessNotifyLib),

/*pfnRunSuperTemplate*/		NULL,
/*szzSuperTemplateInfo*/	NULL,

/*nLibConstCount*/			0,//sizeof (s_ConstInfo) / sizeof (s_ConstInfo [0]),
/*pLibConst*/				NULL,//s_ConstInfo,

/*szzDependFiles*/			NULL,
};

PLIB_INFO WINAPI GetNewInf ()
{
	return &s_LibInfo;
}

#endif
