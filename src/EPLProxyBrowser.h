#pragma once

#include "stdafx.h"
#include "lib2.h"


#define DECL_DATA_TYPE_ProxyBrowser \
	{ /*4*/ \
		/*m_szName*/		 _WT("Chromium�����"), \
		/*m_szEgName*/		 _WT("ProxyBrowser"), \
		/*m_szExplain*/		 _WT("���ڱ�ʾ��������ڵ��ࡣ�������������ʹ��ʱ, �������κ��߳��ϵ��ô��෽��, ����ע��������˵��������Ⱦ������ʹ��ʱ, ����ķ���ֻ�������߳��ϵ��á�"), \
		/*m_nCmdCount*/		 26, \
		/*m_pnCmdsIndex*/		 s_nProxyBrowserElementCmdIndex, \
		/*m_dwState*/		 NULL, \
		/*m_dwUnitBmpID*/		 NULL, \
		/*m_nEventCount*/		 0, \
		/*m_pEventBegin*/		 NULL, \
		/*m_nPropertyCount*/		 0, \
		/*m_pPropertyBegin*/		 NULL, \
		/*m_pfnGetInterface*/		 NULL, \
		/*m_nElementCount*/		 1, \
		/*m_pElementBegin*/		 s_dtDataElemnet \
	}, \


//==========================================

#define DECL_DATA_TYPE_ProxyBrowser_ARGINFO \
	{ /****** ProxyBrowser::IsSame ** 0 **/ \
		/*name*/	 _WT("Ŀ�������"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(5,0),  /*shrewd_ptr<ProxyBrowser>*/ \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBrowser::GetFrame ** 1 **/ \
		/*name*/	 _WT("�������"), \
		/*explain*/	 _WT("�������"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBrowser::GetFrameWithIdentity ** 2 **/ \
		/*name*/	 _WT("identity"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT64, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyBrowser_CMDINFO(BeginIndex) \
	{ /*0*/ \
		/*ccname*/	_WT("Constructor"),\
		/*egname*/	_WT(""), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	CT_IS_HIDED|CT_IS_OBJ_CONSTURCT_CMD, \
		/*ret*/	NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	NULL, \
	},\
	{ /*1*/ \
		/*ccname*/	_WT("Destructor"),\
		/*egname*/	_WT(""), \
		/*explain*/	_WT("{0}"), \
		/*category*/	-1, \
		/*state*/	CT_IS_HIDED|CT_IS_OBJ_FREE_CMD, \
		/*ret*/	NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	NULL, \
	},\
	{ /*2*/ \
		/*ccname*/	_WT("CopyConstructor"),\
		/*egname*/	_WT(""), \
		/*explain*/	_WT("{0}"), \
		/*category*/	-1, \
		/*state*/	CT_IS_HIDED|CT_IS_OBJ_COPY_CMD, \
		/*ret*/	 NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	NULL, \
	},\
	{ /*3*/ \
		/*ccname*/	_WT("�Ƿ���Ч"),\
		/*egname*/	_WT("IsValid"), \
		/*explain*/	_WT("�˺�����鱾���еĶ���ʵ���Ƿ���Ч��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*4*/ \
		/*ccname*/	_WT("ȡ���ھ��"),\
		/*egname*/	_WT("GetWindowHandle"), \
		/*explain*/	_WT("��ȡ��������ھ����"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_INT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*5*/ \
		/*ccname*/	_WT("ȡ���������"),\
		/*egname*/	_WT("GetHost"), \
		/*explain*/	_WT("��ȡ�������������ֻ��������������е��ô˷�����"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(6,0),  /*shrewd_ptr<ProxyBrowserHost>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*6*/ \
		/*ccname*/	_WT("�ɷ����"),\
		/*egname*/	_WT("CanGoBack"), \
		/*explain*/	_WT("�����ǰ������ɻ�������һ���ҳ�淵����, ���򷵻ؼ١�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*7*/ \
		/*ccname*/	_WT("����"),\
		/*egname*/	_WT("GoBack"), \
		/*explain*/	_WT("������������˵���һ���ҳ�档"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*8*/ \
		/*ccname*/	_WT("�ɷ�ǰ��"),\
		/*egname*/	_WT("CanGoForward"), \
		/*explain*/	_WT("�����ǰ�������ǰ������һ���ҳ�淵����, ���򷵻ؼ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*9*/ \
		/*ccname*/	_WT("ǰ��"),\
		/*egname*/	_WT("GoForward"), \
		/*explain*/	_WT("���������ǰ������һ���ҳ�档"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*10*/ \
		/*ccname*/	_WT("�Ƿ����ڼ���"),\
		/*egname*/	_WT("IsLoading"), \
		/*explain*/	_WT("�����ǰ��������ڼ����з����档"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*11*/ \
		/*ccname*/	_WT("���¼���"),\
		/*egname*/	_WT("Reload"), \
		/*explain*/	_WT("���¼��ش�ҳ�档"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*12*/ \
		/*ccname*/	_WT("���¼��غ��Ի���"),\
		/*egname*/	_WT("ReloadIgnoreCache"), \
		/*explain*/	_WT("���¼��ش�ҳ��, ���ӻ����ж�ȡ��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*13*/ \
		/*ccname*/	_WT("ֹͣ����"),\
		/*egname*/	_WT("StopLoad"), \
		/*explain*/	_WT("ֹͣ����ҳ�档"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*14*/ \
		/*ccname*/	_WT("ȡ��ʶ��"),\
		/*egname*/	_WT("GetIdentifier"), \
		/*explain*/	_WT("���ش�������ı�ʶ��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_INT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*15*/ \
		/*ccname*/	_WT("�Ƿ���ͬ"),\
		/*egname*/	_WT("IsSame"), \
		/*explain*/	_WT("�Ƚ���������������Ƿ���ͬ��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*16*/ \
		/*ccname*/	_WT("�Ƿ�Ϊ����ʽ����"),\
		/*egname*/	_WT("IsPopup"), \
		/*explain*/	_WT("�����ǰ�����Ϊ����ʽ���ڷ����档"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+1] \
	},\
	{ /*17*/ \
		/*ccname*/	_WT("�Ƿ��Ѽ����ĵ�"),\
		/*egname*/	_WT("HasDocument"), \
		/*explain*/	_WT("����ĵ��Ѽ��ص�������з����档"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+1] \
	},\
	{ /*18*/ \
		/*ccname*/	_WT("ȡ�����"),\
		/*egname*/	_WT("GetMainFrame"), \
		/*explain*/	_WT("��ȡ��һ�����ص�(Top-Level)��ܡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(16,0),  /*shrewd_ptr<ProxyFrame>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+1] \
	},\
	{ /*19*/ \
		/*ccname*/	_WT("ȡ������"),\
		/*egname*/	_WT("GetFocusedFrame"), \
		/*explain*/	_WT("��ȡ��ǰӵ�н���Ŀ�ܡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(16,0),  /*shrewd_ptr<ProxyFrame>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+1] \
	},\
	{ /*20*/ \
		/*ccname*/	_WT("������ȡ���"),\
		/*egname*/	_WT("GetFrame"), \
		/*explain*/	_WT("ʹ�����Ƽ���������е�ָ�����, �����ɹ����ض���ʵ��, ����ʧ�ܷ��ؿն���, �ɵ���IsValid() ������������Ч�ԡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(16,0),  /*shrewd_ptr<ProxyFrame>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+1] \
	},\
	{ /*21*/ \
		/*ccname*/	_WT("�ӱ�ʶ��ȡ���"),\
		/*egname*/	_WT("GetFrameWithIdentity"), \
		/*explain*/	_WT("ʹ�ñ�ʶ������������е�ָ�����, �����ɹ����ض���ʵ��, ����ʧ�ܷ��ؿն���, �ɵ���IsValid() ������������Ч�ԡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(16,0),  /*shrewd_ptr<ProxyFrame>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+2] \
	},\
	{ /*22*/ \
		/*ccname*/	_WT("ȡ�������"),\
		/*egname*/	_WT("GetFrameCount"), \
		/*explain*/	_WT("��ȡ��������Ѽ��صĿ��������"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_INT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+3] \
	},\
	{ /*23*/ \
		/*ccname*/	_WT("ȡ���п������"),\
		/*egname*/	_WT("GetFrameNames"), \
		/*explain*/	_WT("��ȡ������������Ѽ��ؿ�ܵ����ơ�"), \
		/*category*/	-1, \
		/*state*/	CT_RETRUN_ARY_TYPE_DATA, \
		/*ret*/	SDT_TEXT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+3] \
	},\
	{ /*24*/ \
		/*ccname*/	_WT("ȡ���п�ܱ�ʶ��"),\
		/*egname*/	_WT("GetFrameIdentifiers"), \
		/*explain*/	_WT("��ȡ������������Ѽ��ؿ�ܵı�ʶ����"), \
		/*category*/	-1, \
		/*state*/	CT_RETRUN_ARY_TYPE_DATA, \
		/*ret*/	SDT_INT64, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+3] \
	},\
	{ /*25*/ \
		/*ccname*/	_WT("ȡ���п��"),\
		/*egname*/	_WT("GetFrames"), \
		/*explain*/	_WT("��ȡ������������Ѽ��صĿ�ܡ�"), \
		/*category*/	-1, \
		/*state*/	CT_RETRUN_ARY_TYPE_DATA, \
		/*ret*/	MAKELONG(16,0),  /*shrewd_ptr<ProxyFrame>***/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+3] \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyBrowser_FUN_NAMES \
	EDITIONS("ProxyBrowser_Constructor"),\
	EDITIONS("ProxyBrowser_Destructor"),\
	EDITIONS("ProxyBrowser_CopyConstructor"),\
	EDITIONS("ProxyBrowser_IsValid"),\
	EDITIONS("ProxyBrowser_GetWindowHandle"),\
	EDITIONS("ProxyBrowser_GetHost"),\
	EDITIONS("ProxyBrowser_CanGoBack"),\
	EDITIONS("ProxyBrowser_GoBack"),\
	EDITIONS("ProxyBrowser_CanGoForward"),\
	EDITIONS("ProxyBrowser_GoForward"),\
	EDITIONS("ProxyBrowser_IsLoading"),\
	EDITIONS("ProxyBrowser_Reload"),\
	EDITIONS("ProxyBrowser_ReloadIgnoreCache"),\
	EDITIONS("ProxyBrowser_StopLoad"),\
	EDITIONS("ProxyBrowser_GetIdentifier"),\
	EDITIONS("ProxyBrowser_IsSame"),\
	EDITIONS("ProxyBrowser_IsPopup"),\
	EDITIONS("ProxyBrowser_HasDocument"),\
	EDITIONS("ProxyBrowser_GetMainFrame"),\
	EDITIONS("ProxyBrowser_GetFocusedFrame"),\
	EDITIONS("ProxyBrowser_GetFrame"),\
	EDITIONS("ProxyBrowser_GetFrameWithIdentity"),\
	EDITIONS("ProxyBrowser_GetFrameCount"),\
	EDITIONS("ProxyBrowser_GetFrameNames"),\
	EDITIONS("ProxyBrowser_GetFrameIdentifiers"),\
	EDITIONS("ProxyBrowser_GetFrames"),\


//==========================================

#define DECL_DATA_TYPE_ProxyBrowser_FUN_CALLS \
	EDITIONF(ProxyBrowser_Constructor),\
	EDITIONF(ProxyBrowser_Destructor),\
	EDITIONF(ProxyBrowser_CopyConstructor),\
	EDITIONF(ProxyBrowser_IsValid),\
	EDITIONF(ProxyBrowser_GetWindowHandle),\
	EDITIONF(ProxyBrowser_GetHost),\
	EDITIONF(ProxyBrowser_CanGoBack),\
	EDITIONF(ProxyBrowser_GoBack),\
	EDITIONF(ProxyBrowser_CanGoForward),\
	EDITIONF(ProxyBrowser_GoForward),\
	EDITIONF(ProxyBrowser_IsLoading),\
	EDITIONF(ProxyBrowser_Reload),\
	EDITIONF(ProxyBrowser_ReloadIgnoreCache),\
	EDITIONF(ProxyBrowser_StopLoad),\
	EDITIONF(ProxyBrowser_GetIdentifier),\
	EDITIONF(ProxyBrowser_IsSame),\
	EDITIONF(ProxyBrowser_IsPopup),\
	EDITIONF(ProxyBrowser_HasDocument),\
	EDITIONF(ProxyBrowser_GetMainFrame),\
	EDITIONF(ProxyBrowser_GetFocusedFrame),\
	EDITIONF(ProxyBrowser_GetFrame),\
	EDITIONF(ProxyBrowser_GetFrameWithIdentity),\
	EDITIONF(ProxyBrowser_GetFrameCount),\
	EDITIONF(ProxyBrowser_GetFrameNames),\
	EDITIONF(ProxyBrowser_GetFrameIdentifiers),\
	EDITIONF(ProxyBrowser_GetFrames),\


//==========================================

extern "C"
void EDITIONF(ProxyBrowser_Constructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_Destructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_CopyConstructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_IsValid) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_GetWindowHandle) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_GetHost) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_CanGoBack) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_GoBack) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_CanGoForward) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_GoForward) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_IsLoading) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_Reload) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_ReloadIgnoreCache) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_StopLoad) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_GetIdentifier) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_IsSame) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_IsPopup) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_HasDocument) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_GetMainFrame) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_GetFocusedFrame) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_GetFrame) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_GetFrameWithIdentity) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_GetFrameCount) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_GetFrameNames) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_GetFrameIdentifiers) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_GetFrames) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);


//==========================================

