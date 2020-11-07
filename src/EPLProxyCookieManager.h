#pragma once

#include "stdafx.h"
#include "lib2.h"


#define DECL_DATA_TYPE_ProxyCookieManager \
	{ /*10*/ \
		/*m_szName*/		 _WT("ˮ�ǻỰ������"), \
		/*m_szEgName*/		 _WT("ProxyCookieManager"), \
		/*m_szExplain*/		 _WT("���ڹ��� cookie ���ࡣ��������˵��, ����������κ��߳��ϵ��ô���ķ�����"), \
		/*m_nCmdCount*/		 12, \
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
	{ /****** ProxyCookieManager::VisitUrlCookies ** 0 **/ \
		/*name*/	 _WT("url"), \
		/*explain*/	 _WT("��ȡ��URL�µ����лỰƾ֤"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyCookieManager::VisitUrlCookies ** 1 **/ \
		/*name*/	 _WT("includeHttpOnly"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyCookieManager::SetCookie ** 2 **/ \
		/*name*/	 _WT("url"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyCookieManager::SetCookie ** 3 **/ \
		/*name*/	 _WT("domain"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyCookieManager::SetCookie ** 4 **/ \
		/*name*/	 _WT("name"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyCookieManager::SetCookie ** 5 **/ \
		/*name*/	 _WT("value"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyCookieManager::DeleteCookies ** 6 **/ \
		/*name*/	 _WT("url"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyCookieManager::DeleteCookies ** 7 **/ \
		/*name*/	 _WT("ƾ֤����"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyCookieManager::ReduceFromString ** 8 **/ \
		/*name*/	 _WT("cookie����"), \
		/*explain*/	 _WT("�����cookie����"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyCookieManager::ExtractToHTTP ** 9 **/ \
		/*name*/	 _WT("url"), \
		/*explain*/	 _WT("ָ��������һ��url�µ�cookie����, �������Ϊ���򱣴�����cookie���ݡ�"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
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
		/*ccname*/	_WT("ȡ���лỰƾ֤"),\
		/*egname*/	_WT("VisitAllCookies"), \
		/*explain*/	_WT("��������cookies�� ���ص�cookie���¼�\"OnCookieVisitor\"����, cookie�Ĵ���˳������·����ѡ��, ��Ȼ��������Ĵ������ڡ�"), \
		/*category*/	-1, \
		/*state*/	CT_RETRUN_ARY_TYPE_DATA, \
		/*ret*/	MAKELONG(9,0),  /*shrewd_ptr<ProxyCookie>***/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*5*/ \
		/*ccname*/	_WT("ȡָ���Ựƾ֤"),\
		/*egname*/	_WT("VisitUrlCookies"), \
		/*explain*/	_WT("����ָ��url�µ�����cookies�����ص�cookie���¼�\"OnCookieVisitor\"����, cookie�Ĵ���˳������·����ѡ��, ��Ȼ��������Ĵ������ڡ�"), \
		/*category*/	-1, \
		/*state*/	CT_RETRUN_ARY_TYPE_DATA, \
		/*ret*/	MAKELONG(9,0),  /*shrewd_ptr<ProxyCookie>***/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*6*/ \
		/*ccname*/	_WT("�ûỰƾ֤"),\
		/*egname*/	_WT("SetCookie"), \
		/*explain*/	_WT("����һ��������ЧURL��cookie���Ե�cookie�����õ�cookie����Ӧ��ʹ�ñ�׼�ĸ�ʽ����, �ڴ˺����н�����cookie���Ƿ���ڷǷ��ַ�(����: \";\"�ǲ����������cookie.value�е�),����������������ַ��˺������������ô�cookie���Բ�����ʧ�ܡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	4, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+2] \
	},\
	{ /*7*/ \
		/*ccname*/	_WT("ɾ���Ựƾ֤"),\
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
	{ /*8*/ \
		/*ccname*/	_WT("ˢ�µ��洢"),\
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
	{ /*9*/ \
		/*ccname*/	_WT("���浽�ı�"),\
		/*egname*/	_WT("ExtractToString"), \
		/*explain*/	_WT("����ǰcookie���������������ݱ��浽�ı��ַ�����"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_TEXT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+8] \
	},\
	{ /*10*/ \
		/*ccname*/	_WT("���ı���ԭ"),\
		/*egname*/	_WT("ReduceFromString"), \
		/*explain*/	_WT("���ı��ַ����л�ԭ����cookie���ݵ���������"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+8] \
	},\
	{ /*11*/ \
		/*ccname*/	_WT("����ΪHTTP��ʽ"),\
		/*egname*/	_WT("ExtractToHTTP"), \
		/*explain*/	_WT("����ǰcookie�������е�ָ��������HTTP�Ự�������õĸ�ʽ���浽�ı��ַ�����"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_TEXT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+9] \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyCookieManager_FUN_NAMES \
	EDITIONS("ProxyCookieManager_Constructor"),\
	EDITIONS("ProxyCookieManager_Destructor"),\
	EDITIONS("ProxyCookieManager_CopyConstructor"),\
	EDITIONS("ProxyCookieManager_IsValid"),\
	EDITIONS("ProxyCookieManager_VisitAllCookies"),\
	EDITIONS("ProxyCookieManager_VisitUrlCookies"),\
	EDITIONS("ProxyCookieManager_SetCookie"),\
	EDITIONS("ProxyCookieManager_DeleteCookies"),\
	EDITIONS("ProxyCookieManager_FlushStore"),\
	EDITIONS("ProxyCookieManager_ExtractToString"),\
	EDITIONS("ProxyCookieManager_ReduceFromString"),\
	EDITIONS("ProxyCookieManager_ExtractToHTTP"),\


//==========================================

#define DECL_DATA_TYPE_ProxyCookieManager_FUN_CALLS \
	EDITIONF(ProxyCookieManager_Constructor),\
	EDITIONF(ProxyCookieManager_Destructor),\
	EDITIONF(ProxyCookieManager_CopyConstructor),\
	EDITIONF(ProxyCookieManager_IsValid),\
	EDITIONF(ProxyCookieManager_VisitAllCookies),\
	EDITIONF(ProxyCookieManager_VisitUrlCookies),\
	EDITIONF(ProxyCookieManager_SetCookie),\
	EDITIONF(ProxyCookieManager_DeleteCookies),\
	EDITIONF(ProxyCookieManager_FlushStore),\
	EDITIONF(ProxyCookieManager_ExtractToString),\
	EDITIONF(ProxyCookieManager_ReduceFromString),\
	EDITIONF(ProxyCookieManager_ExtractToHTTP),\


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
void EDITIONF(ProxyCookieManager_VisitAllCookies) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCookieManager_VisitUrlCookies) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCookieManager_SetCookie) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCookieManager_DeleteCookies) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCookieManager_FlushStore) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCookieManager_ExtractToString) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCookieManager_ReduceFromString) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCookieManager_ExtractToHTTP) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);


//==========================================

