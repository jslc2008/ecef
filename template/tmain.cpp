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
##{{0}}


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
##{{7}}
};


EVENT_INFO2 s_ChromiumEvent [] = 
{
##{{8}}
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

##{{6}}

#endif

/////////////////////////////////////////////////////////////////////////////


#ifndef __E_STATIC_LIB

#include "tenum.h"


//��������
static const char* const g_CmdNames[] = 
{
##{{1}}
};


//��������
PFN_EXECUTE_CMD s_RunFunc [] =	
{
##{{2}}
};


//��������ǩ��
ARG_INFO s_ArgInfo[] = 
{
##{{3}}
};

//��������ǩ��
static CMD_INFO s_CmdInfo[] = 
{
##{{4}}
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
##{{5}}
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
