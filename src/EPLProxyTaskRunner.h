#pragma once

#include "stdafx.h"
#include "lib2.h"


#define DECL_DATA_TYPE_ProxyTaskRunner \
	{ /*32*/ \
		/*m_szName*/		 _WT("Chromium�߳�"), \
		/*m_szEgName*/		 _WT("ProxyTaskRunner"), \
		/*m_szExplain*/		 _WT("�ṩ������߳����첽ִ��������ࡣ���κ��߳��ϵ��ô���ķ������ǰ�ȫ�ġ�CEFά������ڲ��̣߳���Щ�߳����ڴ���ͬ�����еĲ�ͬ���͵�����ö�ٳ���: #������߳�.* �г��˳�����CEF�̡߳� �������г��򻹿���������CEF�߳�(����: V8 WebWorker �߳�)��"), \
		/*m_nCmdCount*/		 6, \
		/*m_pnCmdsIndex*/		 s_nProxyTaskRunnerElementCmdIndex, \
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

#define DECL_DATA_TYPE_ProxyTaskRunner_ARGINFO \
	{ /****** ProxyTaskRunner::GetForThread ** 0 **/ \
		/*name*/	 _WT("����ȡ���߳�"), \
		/*explain*/	 _WT("�̶߳���ֵΪö�ٳ���: #������߳�.*"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyTaskRunner::PostTask ** 1 **/ \
		/*name*/	 _WT("����ID"), \
		/*explain*/	 _WT("�Զ���ֵ"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyTaskRunner::PostTask ** 2 **/ \
		/*name*/	 _WT("�������"), \
		/*explain*/	 _WT("�Զ���ֵ"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(36,0),  /*shrewd_ptr<ProxyValue>*/ \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyTaskRunner::PostDelayedTask ** 3 **/ \
		/*name*/	 _WT("����ID"), \
		/*explain*/	 _WT("�Զ�����"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyTaskRunner::PostDelayedTask ** 4 **/ \
		/*name*/	 _WT("�������"), \
		/*explain*/	 _WT("�Զ���ֵ"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(36,0),  /*shrewd_ptr<ProxyValue>*/ \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyTaskRunner::PostDelayedTask ** 5 **/ \
		/*name*/	 _WT("�ӳ�ʱ��"), \
		/*explain*/	 _WT("��λ: ����"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT64, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyTaskRunner_CMDINFO(BeginIndex) \
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
		/*ccname*/	_WT("��ȡ�߳�"),\
		/*egname*/	_WT("GetForThread"), \
		/*explain*/	_WT("��ȡ������̡߳�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(33,0),  /*shrewd_ptr<ProxyTaskRunner>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*4*/ \
		/*ccname*/	_WT("Ͷ������"),\
		/*egname*/	_WT("PostTask"), \
		/*explain*/	_WT("Ͷ��һ������ָ����������߳�ִ�С�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+1] \
	},\
	{ /*5*/ \
		/*ccname*/	_WT("Ͷ���ӳ�����"),\
		/*egname*/	_WT("PostDelayedTask"), \
		/*explain*/	_WT("Ͷ��һ������ָ����������̸߳�������Ŀ���߳��н��ᱻ�ӳٵ�ָ����ʱ��ִ�С�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	3, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+3] \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyTaskRunner_FUN_NAMES \
	EDITIONS("ProxyTaskRunner_Constructor"),\
	EDITIONS("ProxyTaskRunner_Destructor"),\
	EDITIONS("ProxyTaskRunner_CopyConstructor"),\
	EDITIONS("ProxyTaskRunner_GetForThread"),\
	EDITIONS("ProxyTaskRunner_PostTask"),\
	EDITIONS("ProxyTaskRunner_PostDelayedTask"),\


//==========================================

#define DECL_DATA_TYPE_ProxyTaskRunner_FUN_CALLS \
	EDITIONF(ProxyTaskRunner_Constructor),\
	EDITIONF(ProxyTaskRunner_Destructor),\
	EDITIONF(ProxyTaskRunner_CopyConstructor),\
	EDITIONF(ProxyTaskRunner_GetForThread),\
	EDITIONF(ProxyTaskRunner_PostTask),\
	EDITIONF(ProxyTaskRunner_PostDelayedTask),\


//==========================================

extern "C"
void EDITIONF(ProxyTaskRunner_Constructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTaskRunner_Destructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTaskRunner_CopyConstructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTaskRunner_GetForThread) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTaskRunner_PostTask) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTaskRunner_PostDelayedTask) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);


//==========================================

