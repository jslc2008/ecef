#pragma once

#include "stdafx.h"
#include "lib2.h"


#define DECL_DATA_TYPE_ProxyQueryCallback \
	{ /*23*/ \
		/*m_szName*/		 _WT("ˮ�ǽű���ѯ�ص�"), \
		/*m_szEgName*/		 _WT("ProxyQueryCallback"), \
		/*m_szExplain*/		 _WT("�뵥�������Javascript�첽��ѯ�����Ļص���ִ�� \"�ɹ�\" �� \"ʧ��\" �������첽��Ӧ���͵�������Javascript��������ڲ�����ִ������һ���ص������������, ������δȡ����ѯ������Ļص�����ʱ�ᱨ������ʱ����"), \
		/*m_nCmdCount*/		 5, \
		/*m_pnCmdsIndex*/		 s_nProxyQueryCallbackElementCmdIndex, \
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

#define DECL_DATA_TYPE_ProxyQueryCallback_ARGINFO \
	{ /****** ProxyQueryCallback::Success ** 0 **/ \
		/*name*/	 _WT("��Ӧ"), \
		/*explain*/	 _WT("��ѯ���ؽ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyQueryCallback::Failure ** 1 **/ \
		/*name*/	 _WT("�������"), \
		/*explain*/	 _WT("��ѯʧ�ܵĴ������"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyQueryCallback::Failure ** 2 **/ \
		/*name*/	 _WT("������Ϣ"), \
		/*explain*/	 _WT("��ѯʧ�ܵĴ���ԭ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyQueryCallback_CMDINFO(BeginIndex) \
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
		/*ccname*/	_WT("�ɹ�"),\
		/*egname*/	_WT("Success"), \
		/*explain*/	_WT("֪ͨ������Javascript onSuccess�ص�, �Գɹ���ɲ�ѯ, ���� | ��Ӧ | �ṩ�˲�ѯ�����"), \
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
	{ /*4*/ \
		/*ccname*/	_WT("ʧ��"),\
		/*egname*/	_WT("Failure"), \
		/*explain*/	_WT("֪ͨ������Javascript onFailure �ص�, ��ѯ��ʧ��, ���� |�������| , | ������Ϣ | �ṩ�˲�ѯʧ�ܵ�ԭ��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+1] \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyQueryCallback_FUN_NAMES \
	EDITIONS("ProxyQueryCallback_Constructor"),\
	EDITIONS("ProxyQueryCallback_Destructor"),\
	EDITIONS("ProxyQueryCallback_CopyConstructor"),\
	EDITIONS("ProxyQueryCallback_Success"),\
	EDITIONS("ProxyQueryCallback_Failure"),\


//==========================================

#define DECL_DATA_TYPE_ProxyQueryCallback_FUN_CALLS \
	EDITIONF(ProxyQueryCallback_Constructor),\
	EDITIONF(ProxyQueryCallback_Destructor),\
	EDITIONF(ProxyQueryCallback_CopyConstructor),\
	EDITIONF(ProxyQueryCallback_Success),\
	EDITIONF(ProxyQueryCallback_Failure),\


//==========================================

extern "C"
void EDITIONF(ProxyQueryCallback_Constructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyQueryCallback_Destructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyQueryCallback_CopyConstructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyQueryCallback_Success) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyQueryCallback_Failure) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);


//==========================================

