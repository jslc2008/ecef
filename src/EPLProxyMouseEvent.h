#pragma once

#include "stdafx.h"
#include "lib2.h"


#define DECL_DATA_TYPE_ProxyMouseEvent \
	{ /*20*/ \
		/*m_szName*/		 _WT("Chromium����¼�"), \
		/*m_szEgName*/		 _WT("ProxyMouseEvent"), \
		/*m_szExplain*/		 _WT("��ʾ����¼����ࡣ"), \
		/*m_nCmdCount*/		 8, \
		/*m_pnCmdsIndex*/		 s_nProxyMouseEventElementCmdIndex, \
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

#define DECL_DATA_TYPE_ProxyMouseEvent_ARGINFO \
	{ /****** ProxyMouseEvent::SetX ** 0 **/ \
		/*name*/	 _WT("����λ��"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMouseEvent::SetY ** 1 **/ \
		/*name*/	 _WT("����λ��"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMouseEvent::SetModifiers ** 2 **/ \
		/*name*/	 _WT("��λ��־"), \
		/*explain*/	 _WT("��λ��־, �����������ܼ��İ���״̬, ����ֵλö�ٳ���: #�¼���־.* ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyMouseEvent_CMDINFO(BeginIndex) \
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
		/*egname*/	_WT("Create"), \
		/*explain*/	_WT("��������ʵ��, �Ǿ�̬����, ��Ҫ���ô˺�������ܹ���Ч���ʡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(21,0),  /*shrewd_ptr<ProxyMouseEvent>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*4*/ \
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
	{ /*5*/ \
		/*ccname*/	_WT("���ú���λ��"),\
		/*egname*/	_WT("SetX"), \
		/*explain*/	_WT(""), \
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
	{ /*6*/ \
		/*ccname*/	_WT("��������λ��"),\
		/*egname*/	_WT("SetY"), \
		/*explain*/	_WT(""), \
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
	{ /*7*/ \
		/*ccname*/	_WT("���ü�λ��־"),\
		/*egname*/	_WT("SetModifiers"), \
		/*explain*/	_WT("���ü�λ��־ֵ"), \
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


//==========================================

#define DECL_DATA_TYPE_ProxyMouseEvent_FUN_NAMES \
	EDITIONS("ProxyMouseEvent_Constructor"),\
	EDITIONS("ProxyMouseEvent_Destructor"),\
	EDITIONS("ProxyMouseEvent_CopyConstructor"),\
	EDITIONS("ProxyMouseEvent_Create"),\
	EDITIONS("ProxyMouseEvent_IsValid"),\
	EDITIONS("ProxyMouseEvent_SetX"),\
	EDITIONS("ProxyMouseEvent_SetY"),\
	EDITIONS("ProxyMouseEvent_SetModifiers"),\


//==========================================

#define DECL_DATA_TYPE_ProxyMouseEvent_FUN_CALLS \
	EDITIONF(ProxyMouseEvent_Constructor),\
	EDITIONF(ProxyMouseEvent_Destructor),\
	EDITIONF(ProxyMouseEvent_CopyConstructor),\
	EDITIONF(ProxyMouseEvent_Create),\
	EDITIONF(ProxyMouseEvent_IsValid),\
	EDITIONF(ProxyMouseEvent_SetX),\
	EDITIONF(ProxyMouseEvent_SetY),\
	EDITIONF(ProxyMouseEvent_SetModifiers),\


//==========================================

extern "C"
void EDITIONF(ProxyMouseEvent_Constructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMouseEvent_Destructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMouseEvent_CopyConstructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMouseEvent_Create) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMouseEvent_IsValid) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMouseEvent_SetX) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMouseEvent_SetY) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMouseEvent_SetModifiers) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);


//==========================================

