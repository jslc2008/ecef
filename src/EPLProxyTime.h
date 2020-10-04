#pragma once

#include "stdafx.h"
#include "lib2.h"


#define DECL_DATA_TYPE_ProxyTime \
	{ /*33*/ \
		/*m_szName*/		 _WT("Chromiumʱ��"), \
		/*m_szEgName*/		 _WT("ProxyTime"), \
		/*m_szExplain*/		 _WT("ʱ����Ϣ��ʱ��ֵӦʼ��ΪUTC��"), \
		/*m_nCmdCount*/		 27, \
		/*m_pnCmdsIndex*/		 s_nProxyTimeElementCmdIndex, \
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

#define DECL_DATA_TYPE_ProxyTime_ARGINFO \
	{ /****** ProxyTime::SetYear ** 0 **/ \
		/*name*/	 _WT("��"), \
		/*explain*/	 _WT("��λ������λ���������\"2007\"(��Windows ��Ϊ1601��30827)��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyTime::SetMonth ** 1 **/ \
		/*name*/	 _WT("��"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyTime::SetDayOfWeek ** 2 **/ \
		/*name*/	 _WT("����"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyTime::SetDayOfMonth ** 3 **/ \
		/*name*/	 _WT("��"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyTime::SetHour ** 4 **/ \
		/*name*/	 _WT("Сʱ"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyTime::SetMinute ** 5 **/ \
		/*name*/	 _WT("������"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyTime::SetSecond ** 6 **/ \
		/*name*/	 _WT("����"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyTime::SetMillisecond ** 7 **/ \
		/*name*/	 _WT("������"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyTime::SetTime ** 8 **/ \
		/*name*/	 _WT("ʱ��"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT64, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyTime::SetTimeDouble ** 9 **/ \
		/*name*/	 _WT("С��ʱ��"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_DOUBLE, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyTime::Delta ** 10 **/ \
		/*name*/	 _WT("ȡֵʱ��"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(34,0),  /*shrewd_ptr<ProxyTime>*/ \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyTime_CMDINFO(BeginIndex) \
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
		/*ret*/	MAKELONG(34,0),  /*shrewd_ptr<ProxyTime>*/ \
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
		/*ccname*/	_WT("������"),\
		/*egname*/	_WT("SetYear"), \
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
		/*ccname*/	_WT("��ȡ��"),\
		/*egname*/	_WT("GetYear"), \
		/*explain*/	_WT("��ȡ������"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_INT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+1] \
	},\
	{ /*7*/ \
		/*ccname*/	_WT("������"),\
		/*egname*/	_WT("SetMonth"), \
		/*explain*/	_WT("�·ݴ�1��ʼ, 1 = һ��, �������ơ�"), \
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
	{ /*8*/ \
		/*ccname*/	_WT("��ȡ��"),\
		/*egname*/	_WT("GetMonth"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_INT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+2] \
	},\
	{ /*9*/ \
		/*ccname*/	_WT("��������"),\
		/*egname*/	_WT("SetDayOfWeek"), \
		/*explain*/	_WT("���ڴ�0��ʼ, 0 = �����ա�"), \
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
	{ /*10*/ \
		/*ccname*/	_WT("��ȡ����"),\
		/*egname*/	_WT("GetDayOfWeek"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_INT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+3] \
	},\
	{ /*11*/ \
		/*ccname*/	_WT("������"),\
		/*egname*/	_WT("SetDayOfMonth"), \
		/*explain*/	_WT("��1��ʼ������, 1 - 31��"), \
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
	{ /*12*/ \
		/*ccname*/	_WT("��ȡ��"),\
		/*egname*/	_WT("GetDayOfMonth"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_INT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+4] \
	},\
	{ /*13*/ \
		/*ccname*/	_WT("����Сʱ"),\
		/*egname*/	_WT("SetHour"), \
		/*explain*/	_WT("���յ�Сʱ, 0 - 23"), \
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
	{ /*14*/ \
		/*ccname*/	_WT("��ȡСʱ"),\
		/*egname*/	_WT("GetHour"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_INT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+5] \
	},\
	{ /*15*/ \
		/*ccname*/	_WT("���÷���"),\
		/*egname*/	_WT("SetMinute"), \
		/*explain*/	_WT("��Сʱ�ڵķ�����, 0 - 59��"), \
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
	{ /*16*/ \
		/*ccname*/	_WT("��ȡ����"),\
		/*egname*/	_WT("GetMinute"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_INT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+6] \
	},\
	{ /*17*/ \
		/*ccname*/	_WT("������"),\
		/*egname*/	_WT("SetSecond"), \
		/*explain*/	_WT("�������ڵ�����, (0 - 59 ���Ͻ�λ��, �����ܵ�60��)��"), \
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
	{ /*18*/ \
		/*ccname*/	_WT("��ȡ��"),\
		/*egname*/	_WT("GetSecond"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_INT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+7] \
	},\
	{ /*19*/ \
		/*ccname*/	_WT("���ú���"),\
		/*egname*/	_WT("SetMillisecond"), \
		/*explain*/	_WT("���õ����ڵĺ�����, 0 - 999��"), \
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
	{ /*20*/ \
		/*ccname*/	_WT("��ȡ����"),\
		/*egname*/	_WT("GetMillisecond"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_INT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+8] \
	},\
	{ /*21*/ \
		/*ccname*/	_WT("����UTCʱ��"),\
		/*egname*/	_WT("SetTime"), \
		/*explain*/	_WT(""), \
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
	{ /*22*/ \
		/*ccname*/	_WT("��ȡUTCʱ��"),\
		/*egname*/	_WT("GetTime"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_INT64, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+9] \
	},\
	{ /*23*/ \
		/*ccname*/	_WT("����UTCʱ��С��ֵ"),\
		/*egname*/	_WT("SetTimeDouble"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+9] \
	},\
	{ /*24*/ \
		/*ccname*/	_WT("��ȡUTCʱ��С��ֵ"),\
		/*egname*/	_WT("GetTimeDouble"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_DOUBLE, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+10] \
	},\
	{ /*25*/ \
		/*ccname*/	_WT("��������ʱ��"),\
		/*egname*/	_WT("SetNow"), \
		/*explain*/	_WT("����Ϊ���ڵ�UTCʱ�䡣"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+10] \
	},\
	{ /*26*/ \
		/*ccname*/	_WT("ȡʱ����"),\
		/*egname*/	_WT("Delta"), \
		/*explain*/	_WT("��ȡ����UTCʱ��ļ��ʱ����"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_INT64, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+10] \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyTime_FUN_NAMES \
	EDITIONS("ProxyTime_Constructor"),\
	EDITIONS("ProxyTime_Destructor"),\
	EDITIONS("ProxyTime_CopyConstructor"),\
	EDITIONS("ProxyTime_Create"),\
	EDITIONS("ProxyTime_IsValid"),\
	EDITIONS("ProxyTime_SetYear"),\
	EDITIONS("ProxyTime_GetYear"),\
	EDITIONS("ProxyTime_SetMonth"),\
	EDITIONS("ProxyTime_GetMonth"),\
	EDITIONS("ProxyTime_SetDayOfWeek"),\
	EDITIONS("ProxyTime_GetDayOfWeek"),\
	EDITIONS("ProxyTime_SetDayOfMonth"),\
	EDITIONS("ProxyTime_GetDayOfMonth"),\
	EDITIONS("ProxyTime_SetHour"),\
	EDITIONS("ProxyTime_GetHour"),\
	EDITIONS("ProxyTime_SetMinute"),\
	EDITIONS("ProxyTime_GetMinute"),\
	EDITIONS("ProxyTime_SetSecond"),\
	EDITIONS("ProxyTime_GetSecond"),\
	EDITIONS("ProxyTime_SetMillisecond"),\
	EDITIONS("ProxyTime_GetMillisecond"),\
	EDITIONS("ProxyTime_SetTime"),\
	EDITIONS("ProxyTime_GetTime"),\
	EDITIONS("ProxyTime_SetTimeDouble"),\
	EDITIONS("ProxyTime_GetTimeDouble"),\
	EDITIONS("ProxyTime_SetNow"),\
	EDITIONS("ProxyTime_Delta"),\


//==========================================

#define DECL_DATA_TYPE_ProxyTime_FUN_CALLS \
	EDITIONF(ProxyTime_Constructor),\
	EDITIONF(ProxyTime_Destructor),\
	EDITIONF(ProxyTime_CopyConstructor),\
	EDITIONF(ProxyTime_Create),\
	EDITIONF(ProxyTime_IsValid),\
	EDITIONF(ProxyTime_SetYear),\
	EDITIONF(ProxyTime_GetYear),\
	EDITIONF(ProxyTime_SetMonth),\
	EDITIONF(ProxyTime_GetMonth),\
	EDITIONF(ProxyTime_SetDayOfWeek),\
	EDITIONF(ProxyTime_GetDayOfWeek),\
	EDITIONF(ProxyTime_SetDayOfMonth),\
	EDITIONF(ProxyTime_GetDayOfMonth),\
	EDITIONF(ProxyTime_SetHour),\
	EDITIONF(ProxyTime_GetHour),\
	EDITIONF(ProxyTime_SetMinute),\
	EDITIONF(ProxyTime_GetMinute),\
	EDITIONF(ProxyTime_SetSecond),\
	EDITIONF(ProxyTime_GetSecond),\
	EDITIONF(ProxyTime_SetMillisecond),\
	EDITIONF(ProxyTime_GetMillisecond),\
	EDITIONF(ProxyTime_SetTime),\
	EDITIONF(ProxyTime_GetTime),\
	EDITIONF(ProxyTime_SetTimeDouble),\
	EDITIONF(ProxyTime_GetTimeDouble),\
	EDITIONF(ProxyTime_SetNow),\
	EDITIONF(ProxyTime_Delta),\


//==========================================

extern "C"
void EDITIONF(ProxyTime_Constructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTime_Destructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTime_CopyConstructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTime_Create) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTime_IsValid) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTime_SetYear) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTime_GetYear) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTime_SetMonth) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTime_GetMonth) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTime_SetDayOfWeek) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTime_GetDayOfWeek) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTime_SetDayOfMonth) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTime_GetDayOfMonth) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTime_SetHour) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTime_GetHour) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTime_SetMinute) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTime_GetMinute) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTime_SetSecond) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTime_GetSecond) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTime_SetMillisecond) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTime_GetMillisecond) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTime_SetTime) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTime_GetTime) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTime_SetTimeDouble) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTime_GetTimeDouble) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTime_SetNow) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTime_Delta) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);


//==========================================

