#pragma once

#include "stdafx.h"
#include "lib2.h"


#define DECL_DATA_TYPE_ProxyWaitableEvent \
	{ /*32*/ \
		/*m_szName*/		 _WT("ˮ�ǵȴ��¼�"), \
		/*m_szEgName*/		 _WT("ProxyWaitableEvent"), \
		/*m_szExplain*/		 _WT("�ȴ��¼�ͨ�������߳�ͬ��, ������һ���̵߳ȴ���һ���߳����ĳЩ�¼����ڼ���������"), \
		/*m_nCmdCount*/		 11, \
		/*m_pnCmdsIndex*/		 s_nProxyWaitableEventElementCmdIndex, \
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

#define DECL_DATA_TYPE_ProxyWaitableEvent_ARGINFO \
	{ /****** ProxyWaitableEvent::TimedWait ** 0 **/ \
		/*name*/	 _WT("��ʱʱ��"), \
		/*explain*/	 _WT("��ʱʱ��, ��λ: ����"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT64, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyWaitableEvent::SetUserData ** 1 **/ \
		/*name*/	 _WT("��������"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(31,0),  /*shrewd_ptr<ProxyValue>*/ \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyWaitableEvent_CMDINFO(BeginIndex) \
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
		/*ccname*/	_WT("����"),\
		/*egname*/	_WT("Reset"), \
		/*explain*/	_WT("���¼���Ϊδ����״̬��"), \
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
	{ /*5*/ \
		/*ccname*/	_WT("���ź�"),\
		/*egname*/	_WT("Signal"), \
		/*explain*/	_WT("���¼���Ϊ����״̬���κεȴ����¼����̶߳��������ѡ�"), \
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
	{ /*6*/ \
		/*ccname*/	_WT("�Ƿ����ź�"),\
		/*egname*/	_WT("IsSignaled"), \
		/*explain*/	_WT("����¼���������״̬������, ���򷵻ؼ١�"), \
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
		/*ccname*/	_WT("�ȴ�����"),\
		/*egname*/	_WT("Wait"), \
		/*explain*/	_WT("����һ���ȴ��¼�ֱ������Ϊ���ź�״̬��"), \
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
		/*ccname*/	_WT("�ȴ�����2"),\
		/*egname*/	_WT("TimedWait"), \
		/*explain*/	_WT("����һ���ȴ��¼�ֱ������Ϊ���ź�״̬���߳���ʱ�䡣"), \
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
	{ /*9*/ \
		/*ccname*/	_WT("�ø�������"),\
		/*egname*/	_WT("SetUserData"), \
		/*explain*/	_WT("���ø��ӵ����¼��ϵ��û����ݡ�"), \
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
	{ /*10*/ \
		/*ccname*/	_WT("ȡ��������"),\
		/*egname*/	_WT("GetUserData"), \
		/*explain*/	_WT("��ȡ���ӵ����¼��ϵ��û����ݡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(31,0),  /*shrewd_ptr<ProxyValue>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+2] \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyWaitableEvent_FUN_NAMES \
	EDITIONS("ProxyWaitableEvent_Constructor"),\
	EDITIONS("ProxyWaitableEvent_Destructor"),\
	EDITIONS("ProxyWaitableEvent_CopyConstructor"),\
	EDITIONS("ProxyWaitableEvent_IsValid"),\
	EDITIONS("ProxyWaitableEvent_Reset"),\
	EDITIONS("ProxyWaitableEvent_Signal"),\
	EDITIONS("ProxyWaitableEvent_IsSignaled"),\
	EDITIONS("ProxyWaitableEvent_Wait"),\
	EDITIONS("ProxyWaitableEvent_TimedWait"),\
	EDITIONS("ProxyWaitableEvent_SetUserData"),\
	EDITIONS("ProxyWaitableEvent_GetUserData"),\


//==========================================

#define DECL_DATA_TYPE_ProxyWaitableEvent_FUN_CALLS \
	EDITIONF(ProxyWaitableEvent_Constructor),\
	EDITIONF(ProxyWaitableEvent_Destructor),\
	EDITIONF(ProxyWaitableEvent_CopyConstructor),\
	EDITIONF(ProxyWaitableEvent_IsValid),\
	EDITIONF(ProxyWaitableEvent_Reset),\
	EDITIONF(ProxyWaitableEvent_Signal),\
	EDITIONF(ProxyWaitableEvent_IsSignaled),\
	EDITIONF(ProxyWaitableEvent_Wait),\
	EDITIONF(ProxyWaitableEvent_TimedWait),\
	EDITIONF(ProxyWaitableEvent_SetUserData),\
	EDITIONF(ProxyWaitableEvent_GetUserData),\


//==========================================

extern "C"
void EDITIONF(ProxyWaitableEvent_Constructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyWaitableEvent_Destructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyWaitableEvent_CopyConstructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyWaitableEvent_IsValid) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyWaitableEvent_Reset) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyWaitableEvent_Signal) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyWaitableEvent_IsSignaled) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyWaitableEvent_Wait) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyWaitableEvent_TimedWait) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyWaitableEvent_SetUserData) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyWaitableEvent_GetUserData) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);


//==========================================

