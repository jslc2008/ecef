#pragma once

#include "stdafx.h"
#include "lib2.h"


#define DECL_DATA_TYPE_ProxyRequestContext \
	{ /*26*/ \
		/*m_szName*/		 _WT("Chromium�Ự����"), \
		/*m_szEgName*/		 _WT("ProxyRequestContext"), \
		/*m_szExplain*/		 _WT("Chromium �Ự����Ϊһ����ص��������URL��������ṩ�Ự����ͨ������ \"���������\" ���������µ������ʱ ���� \"����URL����\"�����µ�URL����ʱ, ����ָ���Ự���������в�ͬ�Ự�����������������Զ�����й���ͳһ��Ⱦ�����С�������ͬ�Ự�����������������ܻ�Ҳ���ܲ����й���ͬһ�����������, ��ȡ��������ģ�͡� ͨ��Javascript��window.open������Ŀ�����Ӽ䴴����������������������Դ���������һ����ͬ����Ⱦ���̺���ͬ�ĻỰ������ "), \
		/*m_nCmdCount*/		 16, \
		/*m_pnCmdsIndex*/		 s_nProxyRequestContextElementCmdIndex, \
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

#define DECL_DATA_TYPE_ProxyRequestContext_ARGINFO \
	{ /****** ProxyRequestContext::CreateContext ** 0 **/ \
		/*name*/	 _WT("�Ự��������"), \
		/*explain*/	 _WT("�Ự����������Ϣ"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(28,0),  /*shrewd_ptr<ProxyRequestContextSettings>*/ \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyRequestContext::CreateContextWith ** 1 **/ \
		/*name*/	 _WT("other"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(27,0),  /*shrewd_ptr<ProxyRequestContext>*/ \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyRequestContext::IsSame ** 2 **/ \
		/*name*/	 _WT("�Ƚ϶���"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(27,0),  /*shrewd_ptr<ProxyRequestContext>*/ \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyRequestContext::IsSharingWith ** 3 **/ \
		/*name*/	 _WT("Ŀ�����"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(27,0),  /*shrewd_ptr<ProxyRequestContext>*/ \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyRequestContext::PurgePluginListCache ** 4 **/ \
		/*name*/	 _WT("�Ƿ����¼���ҳ��"), \
		/*explain*/	 _WT("����˲�������Ϊ��, ��˻Ự����������������������ʹ�ò������������ҳ�档"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyRequestContext_CMDINFO(BeginIndex) \
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
		/*ccname*/	_WT("ȡȫ��ʵ��"),\
		/*egname*/	_WT("GetGlobalContext"), \
		/*explain*/	_WT("����ȫ�ֵĻỰ��������, ���ڴ˶���ĸ�д����Ӧ���������������"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(27,0),  /*shrewd_ptr<ProxyRequestContext>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*4*/ \
		/*ccname*/	_WT("��������"),\
		/*egname*/	_WT("CreateContext"), \
		/*explain*/	_WT("ʵ��֪�������ò�������һ���µĻỰ��������"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(27,0),  /*shrewd_ptr<ProxyRequestContext>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*5*/ \
		/*ccname*/	_WT("CreateContextWith"),\
		/*egname*/	_WT("CreateContextWith"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(27,0),  /*shrewd_ptr<ProxyRequestContext>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+1] \
	},\
	{ /*6*/ \
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
		/*arg lp*/	&s_ArgInfo[BeginIndex+2] \
	},\
	{ /*7*/ \
		/*ccname*/	_WT("�Ƿ���ͬ"),\
		/*egname*/	_WT("IsSame"), \
		/*explain*/	_WT("�Ƚ������Ự���������Ƿ���ͬ��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+2] \
	},\
	{ /*8*/ \
		/*ccname*/	_WT("�Ƿ�����"),\
		/*egname*/	_WT("IsSharingWith"), \
		/*explain*/	_WT("����ö�����Ŀ�����ʹ����ͬ�Ĵ洢�����档"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+3] \
	},\
	{ /*9*/ \
		/*ccname*/	_WT("�Ƿ�Ϊȫ�ֶ���"),\
		/*egname*/	_WT("IsGlobal"), \
		/*explain*/	_WT("����˶�����ȫ�ֻỰ�������󷵻��档"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+4] \
	},\
	{ /*10*/ \
		/*ccname*/	_WT("ȡ����Ŀ¼"),\
		/*egname*/	_WT("GetCachePath"), \
		/*explain*/	_WT("��ȡ�ûỰ����ʹ�õĻ���Ŀ¼�����Ϊ��, ��ʹ��\"incognito mode(����ģʽ)\"�ڴ滺�档"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_TEXT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+4] \
	},\
	{ /*11*/ \
		/*ccname*/	_WT("ȡCOOKIE������"),\
		/*egname*/	_WT("GetCookieManager"), \
		/*explain*/	_WT("��ȡ�ûỰ������COOKIE��������"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(11,0),  /*shrewd_ptr<ProxyCookieManager>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+4] \
	},\
	{ /*12*/ \
		/*ccname*/	_WT("�������б���"),\
		/*egname*/	_WT("PurgePluginListCache"), \
		/*explain*/	_WT("�����˻Ự�����������������Ĳ���б��档"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+4] \
	},\
	{ /*13*/ \
		/*ccname*/	_WT("ClearCertificateExceptions"),\
		/*egname*/	_WT("ClearCertificateExceptions"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+5] \
	},\
	{ /*14*/ \
		/*ccname*/	_WT("ClearHttpAuthCredentials"),\
		/*egname*/	_WT("ClearHttpAuthCredentials"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+5] \
	},\
	{ /*15*/ \
		/*ccname*/	_WT("CloseAllConnections"),\
		/*egname*/	_WT("CloseAllConnections"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+5] \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyRequestContext_FUN_NAMES \
	EDITIONS("ProxyRequestContext_Constructor"),\
	EDITIONS("ProxyRequestContext_Destructor"),\
	EDITIONS("ProxyRequestContext_CopyConstructor"),\
	EDITIONS("ProxyRequestContext_GetGlobalContext"),\
	EDITIONS("ProxyRequestContext_CreateContext"),\
	EDITIONS("ProxyRequestContext_CreateContextWith"),\
	EDITIONS("ProxyRequestContext_IsValid"),\
	EDITIONS("ProxyRequestContext_IsSame"),\
	EDITIONS("ProxyRequestContext_IsSharingWith"),\
	EDITIONS("ProxyRequestContext_IsGlobal"),\
	EDITIONS("ProxyRequestContext_GetCachePath"),\
	EDITIONS("ProxyRequestContext_GetCookieManager"),\
	EDITIONS("ProxyRequestContext_PurgePluginListCache"),\
	EDITIONS("ProxyRequestContext_ClearCertificateExceptions"),\
	EDITIONS("ProxyRequestContext_ClearHttpAuthCredentials"),\
	EDITIONS("ProxyRequestContext_CloseAllConnections"),\


//==========================================

#define DECL_DATA_TYPE_ProxyRequestContext_FUN_CALLS \
	EDITIONF(ProxyRequestContext_Constructor),\
	EDITIONF(ProxyRequestContext_Destructor),\
	EDITIONF(ProxyRequestContext_CopyConstructor),\
	EDITIONF(ProxyRequestContext_GetGlobalContext),\
	EDITIONF(ProxyRequestContext_CreateContext),\
	EDITIONF(ProxyRequestContext_CreateContextWith),\
	EDITIONF(ProxyRequestContext_IsValid),\
	EDITIONF(ProxyRequestContext_IsSame),\
	EDITIONF(ProxyRequestContext_IsSharingWith),\
	EDITIONF(ProxyRequestContext_IsGlobal),\
	EDITIONF(ProxyRequestContext_GetCachePath),\
	EDITIONF(ProxyRequestContext_GetCookieManager),\
	EDITIONF(ProxyRequestContext_PurgePluginListCache),\
	EDITIONF(ProxyRequestContext_ClearCertificateExceptions),\
	EDITIONF(ProxyRequestContext_ClearHttpAuthCredentials),\
	EDITIONF(ProxyRequestContext_CloseAllConnections),\


//==========================================

extern "C"
void EDITIONF(ProxyRequestContext_Constructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequestContext_Destructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequestContext_CopyConstructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequestContext_GetGlobalContext) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequestContext_CreateContext) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequestContext_CreateContextWith) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequestContext_IsValid) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequestContext_IsSame) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequestContext_IsSharingWith) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequestContext_IsGlobal) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequestContext_GetCachePath) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequestContext_GetCookieManager) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequestContext_PurgePluginListCache) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequestContext_ClearCertificateExceptions) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequestContext_ClearHttpAuthCredentials) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequestContext_CloseAllConnections) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);


//==========================================

