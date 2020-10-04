#pragma once

#include "stdafx.h"
#include "lib2.h"


#define DECL_DATA_TYPE_ProxyCookieManager \
	{ /*10*/ \
		/*m_szName*/		 _WT("ChromiumCOOKIE������"), \
		/*m_szEgName*/		 _WT("ProxyCookieManager"), \
		/*m_szExplain*/		 _WT("���ڹ��� cookie ���ۡ���������˵��, ����������κ��߳��ϵ��ô���ķ�����"), \
		/*m_nCmdCount*/		 11, \
		/*m_pnCmdsIndex*/		 s_nProxyCookieManagerElementCmdIndex, \
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

#define DECL_DATA_TYPE_ProxyCookieManager_ARGINFO \
	{ /****** ProxyCookieManager::SetSupportedSchemes ** 0 **/ \
		/*name*/	 _WT("schemes"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyCookieManager::SetSupportedSchemes ** 1 **/ \
		/*name*/	 _WT("include_defaults"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyCookieManager::VisitUrlCookies ** 2 **/ \
		/*name*/	 _WT("url"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyCookieManager::VisitUrlCookies ** 3 **/ \
		/*name*/	 _WT("includeHttpOnly"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyCookieManager::SetCookie ** 4 **/ \
		/*name*/	 _WT("url"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyCookieManager::SetCookie ** 5 **/ \
		/*name*/	 _WT("cookie"), \
		/*explain*/	 _WT("cookie����"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(10,0),  /*shrewd_ptr<ProxyCookie>*/ \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyCookieManager::DeleteCookies ** 6 **/ \
		/*name*/	 _WT("url"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyCookieManager::DeleteCookies ** 7 **/ \
		/*name*/	 _WT("cookie_name"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyCookieManager_CMDINFO(BeginIndex) \
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
		/*ccname*/	_WT("ȡȫ��ʵ��"),\
		/*egname*/	_WT("GetGlobalManager"), \
		/*explain*/	_WT("��ȡȫ�ֵ�Cookieg������ʵ����Ĭ�������, ���ݽ��洢��ȫ�ֻ���Ŀ¼��(�����ָ��), ������Щ���ݽ�ֻ�ᱣ�����ڴ���, ����д���������ϡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(11,0),  /*shrewd_ptr<ProxyCookieManager>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*5*/ \
		/*ccname*/	_WT("SetSupportedSchemes"),\
		/*egname*/	_WT("SetSupportedSchemes"), \
		/*explain*/	_WT("Set the schemes supported by this manager.If |include_defaults| is true the default schemes (\"http\", \"https\", \"ws\" and \"wss\") will also be supported. Calling this method with an empty |schemes| value and |include_defaults| set to false will disable all loading and saving of cookies for this manager."), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*6*/ \
		/*ccname*/	_WT("VisitAllCookies"),\
		/*egname*/	_WT("VisitAllCookies"), \
		/*explain*/	_WT("��������cookies�� ���ص�cookie���¼�\"OnCookieVisitor\"����, cookie�Ĵ���˳������·����ѡ��, ��Ȼ��������Ĵ������ڡ�"), \
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
		/*ccname*/	_WT("VisitUrlCookies"),\
		/*egname*/	_WT("VisitUrlCookies"), \
		/*explain*/	_WT("����ָ��url�µ�����cookies�����ص�cookie���¼�\"OnCookieVisitor\"����, cookie�Ĵ���˳������·����ѡ��, ��Ȼ��������Ĵ������ڡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+2] \
	},\
	{ /*8*/ \
		/*ccname*/	_WT("SetCookie"),\
		/*egname*/	_WT("SetCookie"), \
		/*explain*/	_WT("����һ��������ЧURL��cookie���Ե�cookie�����õ�cookie����Ӧ��ʹ�ñ�׼�ĸ�ʽ����, �ڴ˺����н�����cookie���Ƿ���ڷǷ��ַ�(����: \";\"�ǲ����������cookie.value�е�),����������������ַ��˺������������ô�cookie���Բ�����ʧ�ܡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+4] \
	},\
	{ /*9*/ \
		/*ccname*/	_WT("DeleteCookies"),\
		/*egname*/	_WT("DeleteCookies"), \
		/*explain*/	_WT("ɾ����ָ������ƥ���cookie�����ָ���� |url| �� |cookie_name| ��ô����ɾ�����������cookie�������ָ��|url|�������������cookie����ɾ��(����������cookie)�����|url|Ϊ����ɾ���������������cookies��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+6] \
	},\
	{ /*10*/ \
		/*ccname*/	_WT("FlushStore"),\
		/*egname*/	_WT("FlushStore"), \
		/*explain*/	_WT("�����ڴ��еĴ洢����(����еĻ�)д�뵽�����ϡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+8] \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyCookieManager_FUN_NAMES \
	EDITIONS("ProxyCookieManager_Constructor"),\
	EDITIONS("ProxyCookieManager_Destructor"),\
	EDITIONS("ProxyCookieManager_CopyConstructor"),\
	EDITIONS("ProxyCookieManager_IsValid"),\
	EDITIONS("ProxyCookieManager_GetGlobalManager"),\
	EDITIONS("ProxyCookieManager_SetSupportedSchemes"),\
	EDITIONS("ProxyCookieManager_VisitAllCookies"),\
	EDITIONS("ProxyCookieManager_VisitUrlCookies"),\
	EDITIONS("ProxyCookieManager_SetCookie"),\
	EDITIONS("ProxyCookieManager_DeleteCookies"),\
	EDITIONS("ProxyCookieManager_FlushStore"),\


//==========================================

#define DECL_DATA_TYPE_ProxyCookieManager_FUN_CALLS \
	EDITIONF(ProxyCookieManager_Constructor),\
	EDITIONF(ProxyCookieManager_Destructor),\
	EDITIONF(ProxyCookieManager_CopyConstructor),\
	EDITIONF(ProxyCookieManager_IsValid),\
	EDITIONF(ProxyCookieManager_GetGlobalManager),\
	EDITIONF(ProxyCookieManager_SetSupportedSchemes),\
	EDITIONF(ProxyCookieManager_VisitAllCookies),\
	EDITIONF(ProxyCookieManager_VisitUrlCookies),\
	EDITIONF(ProxyCookieManager_SetCookie),\
	EDITIONF(ProxyCookieManager_DeleteCookies),\
	EDITIONF(ProxyCookieManager_FlushStore),\


//==========================================

extern "C"
void EDITIONF(ProxyCookieManager_Constructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCookieManager_Destructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCookieManager_CopyConstructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCookieManager_IsValid) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCookieManager_GetGlobalManager) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCookieManager_SetSupportedSchemes) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCookieManager_VisitAllCookies) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCookieManager_VisitUrlCookies) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCookieManager_SetCookie) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCookieManager_DeleteCookies) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCookieManager_FlushStore) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);


//==========================================

