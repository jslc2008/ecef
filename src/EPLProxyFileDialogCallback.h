#pragma once

#include "stdafx.h"
#include "lib2.h"


#define DECL_DATA_TYPE_ProxyFileDialogCallback \
	{ /*14*/ \
		/*m_szName*/		 _WT("Chromium�ļ��Ի���ص�"), \
		/*m_szEgName*/		 _WT("ProxyFileDialogCallback"), \
		/*m_szExplain*/		 _WT("�ļ��Ի���ص��ӿ�, ��ʹ���Զ����ļ��Ի���, ��ʹ�øûص��ӿڷ����ļ�ѡ������"), \
		/*m_nCmdCount*/		 5, \
		/*m_pnCmdsIndex*/		 s_nProxyFileDialogCallbackElementCmdIndex, \
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

#define DECL_DATA_TYPE_ProxyFileDialogCallback_ARGINFO \
	{ /****** ProxyFileDialogCallback::Continue ** 0 **/ \
		/*name*/	 _WT("ѡ��������"), \
		/*explain*/	 _WT("ѡ���������ǴӴ��ݸ�\"�������ļ��Ի���\"�¼��Ĺ�����������±�ֵ, ��0��ʼ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyFileDialogCallback::Continue ** 1 **/ \
		/*name*/	 _WT("ѡ����ļ��б�"), \
		/*explain*/	 _WT("�ύѡ����ļ��б�,����Ϊ����ֵ���߶��ֵ, ���ֵʹ�� #���з� �ָ���"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyFileDialogCallback_CMDINFO(BeginIndex) \
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
		/*ccname*/	_WT("ѡ���ļ�"),\
		/*egname*/	_WT("Continue"), \
		/*explain*/	_WT("�ύѡ����ļ�"), \
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
	{ /*4*/ \
		/*ccname*/	_WT("ȡ��"),\
		/*egname*/	_WT("Cancel"), \
		/*explain*/	_WT("ȡ���ļ�ѡ��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+2] \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyFileDialogCallback_FUN_NAMES \
	EDITIONS("ProxyFileDialogCallback_Constructor"),\
	EDITIONS("ProxyFileDialogCallback_Destructor"),\
	EDITIONS("ProxyFileDialogCallback_CopyConstructor"),\
	EDITIONS("ProxyFileDialogCallback_Continue"),\
	EDITIONS("ProxyFileDialogCallback_Cancel"),\


//==========================================

#define DECL_DATA_TYPE_ProxyFileDialogCallback_FUN_CALLS \
	EDITIONF(ProxyFileDialogCallback_Constructor),\
	EDITIONF(ProxyFileDialogCallback_Destructor),\
	EDITIONF(ProxyFileDialogCallback_CopyConstructor),\
	EDITIONF(ProxyFileDialogCallback_Continue),\
	EDITIONF(ProxyFileDialogCallback_Cancel),\


//==========================================

extern "C"
void EDITIONF(ProxyFileDialogCallback_Constructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyFileDialogCallback_Destructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyFileDialogCallback_CopyConstructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyFileDialogCallback_Continue) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyFileDialogCallback_Cancel) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);


//==========================================

