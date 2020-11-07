#pragma once

#include "stdafx.h"
#include "lib2.h"


#define DECL_DATA_TYPE_ProxySettings \
	{ /*29*/ \
		/*m_szName*/		 _WT("ˮ�ǳ�ʼ������"), \
		/*m_szEgName*/		 _WT("ProxySettings"), \
		/*m_szExplain*/		 _WT("�ṩ��������̵ĳ�ʼ�����á���Щ������������Chromiumȫ�����в���, ����Ϊ0���ʱ����Ϊ�����Ĭ��ֵ, ��Щ����Ҳʹ�������п���(command-switch)�������á�"), \
		/*m_nCmdCount*/		 13, \
		/*m_pnCmdsIndex*/		 s_nProxySettingsElementCmdIndex, \
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

#define DECL_DATA_TYPE_ProxySettings_ARGINFO \
	{ /****** ProxySettings::SetCachePath ** 0 **/ \
		/*name*/	 _WT("����·��"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxySettings::SetUserDataPath ** 1 **/ \
		/*name*/	 _WT("·��"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxySettings::SetPersistSessionCookies ** 2 **/ \
		/*name*/	 _WT("ֵ"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxySettings::SetPersistUserPreferences ** 3 **/ \
		/*name*/	 _WT("ֵ"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxySettings::SetUserAgent ** 4 **/ \
		/*name*/	 _WT("��ʶ�ַ���"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxySettings::SetProductVersion ** 5 **/ \
		/*name*/	 _WT("��Ʒ��ʶ"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxySettings::SetLocale ** 6 **/ \
		/*name*/	 _WT("���Ա�ʶ"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxySettings::SetIgnoreCertificateErrors ** 7 **/ \
		/*name*/	 _WT("ֵ"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxySettings::SetAcceptLanguageList ** 8 **/ \
		/*name*/	 _WT("�����ַ���"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxySettings_CMDINFO(BeginIndex) \
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
		/*ccname*/	_WT("ȫ�ֻ���Ŀ¼"),\
		/*egname*/	_WT("SetCachePath"), \
		/*explain*/	_WT("���������ȫ�ֻ���Ŀ¼, ��ֵ��Ϊ�������������ʱʹ�õ�ȱʡֵ, ����ر�ָ��, ���е�����������Ṳ������á�����Ϊ��ʱ��Ĭ�ϲ��Ὣ���ݴ洢�������ϡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*5*/ \
		/*ccname*/	_WT("�û�����Ŀ¼"),\
		/*egname*/	_WT("SetUserDataPath"), \
		/*explain*/	_WT("�����û����ݴ洢(����ƴд����ֶ��ļ�)λ�á���ֵ��Ϊ�������������ʱʹ�õ�ȱʡֵ, ����ر�ָ��, ���е�����������Ṳ������á�����Ϊ��ʱ��Ĭ�ϲ��Ὣ���ݴ洢�������ϡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+1] \
	},\
	{ /*6*/ \
		/*ccname*/	_WT("���ֻỰCOOKIES"),\
		/*egname*/	_WT("SetPersistSessionCookies"), \
		/*explain*/	_WT("���ô�ֵΪ1, ��ȫ��COOKIE�������б����ỰCOOKIE(���ǽ�û����Ч��)��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+2] \
	},\
	{ /*7*/ \
		/*ccname*/	_WT("�����û���ѡ��"),\
		/*egname*/	_WT("SetPersistUserPreferences"), \
		/*explain*/	_WT("���ô�ֵΪ1, �û���ѡ�����ݽ�ʹ��JSON�ļ�����������Ŀ¼�С�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+3] \
	},\
	{ /*8*/ \
		/*ccname*/	_WT("�û������ʶ"),\
		/*egname*/	_WT("SetUserAgent"), \
		/*explain*/	_WT("���ô�ֵ��Ϊ: User-Agent HTTP ��ͷ�ķ���ֵ��"), \
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
	{ /*9*/ \
		/*ccname*/	_WT("��Ʒ��ʶ"),\
		/*egname*/	_WT("SetProductVersion"), \
		/*explain*/	_WT("���ô�ֵ��ΪĬ�� User-Agent �ַ����Ĳ�Ʒ���ֲ����ֵ��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+5] \
	},\
	{ /*10*/ \
		/*ccname*/	_WT("���Ի���"),\
		/*egname*/	_WT("SetLocale"), \
		/*explain*/	_WT("������������Ի����ַ�����"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+6] \
	},\
	{ /*11*/ \
		/*ccname*/	_WT("����SSL֤�����"),\
		/*egname*/	_WT("SetIgnoreCertificateErrors"), \
		/*explain*/	_WT("���ô�ֵΪ1, �ɺ�������ЧSSL֤���йصĴ���"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+7] \
	},\
	{ /*12*/ \
		/*ccname*/	_WT("���������ַ���"),\
		/*egname*/	_WT("SetAcceptLanguageList"), \
		/*explain*/	_WT("����ȫ�ֵ�HTTP���������ַ���,�Զ��ŷָ������Դ����ַ�������,������ʹ�ÿո�, ��Щ�ַ���ֵ����\"Accept-Language\" HTTP��ͷ��ʹ�á�"), \
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


//==========================================

#define DECL_DATA_TYPE_ProxySettings_FUN_NAMES \
	EDITIONS("ProxySettings_Constructor"),\
	EDITIONS("ProxySettings_Destructor"),\
	EDITIONS("ProxySettings_CopyConstructor"),\
	EDITIONS("ProxySettings_IsValid"),\
	EDITIONS("ProxySettings_SetCachePath"),\
	EDITIONS("ProxySettings_SetUserDataPath"),\
	EDITIONS("ProxySettings_SetPersistSessionCookies"),\
	EDITIONS("ProxySettings_SetPersistUserPreferences"),\
	EDITIONS("ProxySettings_SetUserAgent"),\
	EDITIONS("ProxySettings_SetProductVersion"),\
	EDITIONS("ProxySettings_SetLocale"),\
	EDITIONS("ProxySettings_SetIgnoreCertificateErrors"),\
	EDITIONS("ProxySettings_SetAcceptLanguageList"),\


//==========================================

#define DECL_DATA_TYPE_ProxySettings_FUN_CALLS \
	EDITIONF(ProxySettings_Constructor),\
	EDITIONF(ProxySettings_Destructor),\
	EDITIONF(ProxySettings_CopyConstructor),\
	EDITIONF(ProxySettings_IsValid),\
	EDITIONF(ProxySettings_SetCachePath),\
	EDITIONF(ProxySettings_SetUserDataPath),\
	EDITIONF(ProxySettings_SetPersistSessionCookies),\
	EDITIONF(ProxySettings_SetPersistUserPreferences),\
	EDITIONF(ProxySettings_SetUserAgent),\
	EDITIONF(ProxySettings_SetProductVersion),\
	EDITIONF(ProxySettings_SetLocale),\
	EDITIONF(ProxySettings_SetIgnoreCertificateErrors),\
	EDITIONF(ProxySettings_SetAcceptLanguageList),\


//==========================================

extern "C"
void EDITIONF(ProxySettings_Constructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_Destructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_CopyConstructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_IsValid) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_SetCachePath) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_SetUserDataPath) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_SetPersistSessionCookies) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_SetPersistUserPreferences) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_SetUserAgent) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_SetProductVersion) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_SetLocale) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_SetIgnoreCertificateErrors) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_SetAcceptLanguageList) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);


//==========================================

