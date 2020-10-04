#pragma once

#include "stdafx.h"
#include "lib2.h"


#define DECL_DATA_TYPE_ProxyBeforeDownloadCallback \
	{ /*3*/ \
		/*m_szName*/		 _WT("Chromium�ļ���������ص�"), \
		/*m_szEgName*/		 _WT("ProxyBeforeDownloadCallback"), \
		/*m_szExplain*/		 _WT("���ڱ�ʾ�Ƿ������������Ļص��ӿڡ�"), \
		/*m_nCmdCount*/		 4, \
		/*m_pnCmdsIndex*/		 s_nProxyBeforeDownloadCallbackElementCmdIndex, \
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

#define DECL_DATA_TYPE_ProxyBeforeDownloadCallback_ARGINFO \
	{ /****** ProxyBeforeDownloadCallback::Continue ** 0 **/ \
		/*name*/	 _WT("����·��"), \
		/*explain*/	 _WT("���ļ������ر���·��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBeforeDownloadCallback::Continue ** 1 **/ \
		/*name*/	 _WT("��ʾ�Ի���"), \
		/*explain*/	 _WT("�Ƿ���ʾ�ļ�ѡ�����Ի����Թ��û�ѡ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyBeforeDownloadCallback_CMDINFO(BeginIndex) \
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
		/*ccname*/	_WT("��������"),\
		/*egname*/	_WT("Continue"), \
		/*explain*/	_WT("�������ظ��ļ�"), \
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


//==========================================

#define DECL_DATA_TYPE_ProxyBeforeDownloadCallback_FUN_NAMES \
	EDITIONS("ProxyBeforeDownloadCallback_Constructor"),\
	EDITIONS("ProxyBeforeDownloadCallback_Destructor"),\
	EDITIONS("ProxyBeforeDownloadCallback_CopyConstructor"),\
	EDITIONS("ProxyBeforeDownloadCallback_Continue"),\


//==========================================

#define DECL_DATA_TYPE_ProxyBeforeDownloadCallback_FUN_CALLS \
	EDITIONF(ProxyBeforeDownloadCallback_Constructor),\
	EDITIONF(ProxyBeforeDownloadCallback_Destructor),\
	EDITIONF(ProxyBeforeDownloadCallback_CopyConstructor),\
	EDITIONF(ProxyBeforeDownloadCallback_Continue),\


//==========================================

extern "C"
void EDITIONF(ProxyBeforeDownloadCallback_Constructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBeforeDownloadCallback_Destructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBeforeDownloadCallback_CopyConstructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBeforeDownloadCallback_Continue) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);


//==========================================

