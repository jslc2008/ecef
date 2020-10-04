#pragma once

#include "stdafx.h"
#include "lib2.h"


#define DECL_DATA_TYPE_ProxyCommandLine \
	{ /*7*/ \
		/*m_szName*/		 _WT("Chromium������"), \
		/*m_szEgName*/		 _WT("ProxyCommandLine"), \
		/*m_szExplain*/		 _WT("���ڴ����ͽ��������в������ࡣ��windows�д���\"--\" �� \"-\" �Լ� \"/\" ǰ׺�Ĳ�������Ϊ�����п��ء����ؽ�ʼ�����κ�û�п���ǰ׺�Ĳ���֮ǰ�� ���ؿ���ѡ��ʹ��\"=\"�ָ���ָ��һ��ֵ(����: \"--switch=value\")������\"-\" ����ֹ���к�����ǵĿ��ؽ���, ����ǰ׺���, ����������Ϊ�ǿ��ز������������Ʋ����ִ�Сд�������ڵ���\"Chromium����.��ʼ��\" ֮ǰʹ�ô��ࡣ"), \
		/*m_nCmdCount*/		 19, \
		/*m_pnCmdsIndex*/		 s_nProxyCommandLineElementCmdIndex, \
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

#define DECL_DATA_TYPE_ProxyCommandLine_ARGINFO \
	{ /****** ProxyCommandLine::InitFromString ** 0 **/ \
		/*name*/	 _WT("�������ַ���"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyCommandLine::SetProgram ** 1 **/ \
		/*name*/	 _WT("��������"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyCommandLine::HasSwitch ** 2 **/ \
		/*name*/	 _WT("����������"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyCommandLine::GetSwitchValue ** 3 **/ \
		/*name*/	 _WT("������"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyCommandLine::AppendSwitch ** 4 **/ \
		/*name*/	 _WT("�����������"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyCommandLine::AppendSwitchWithValue ** 5 **/ \
		/*name*/	 _WT("����������"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyCommandLine::AppendSwitchWithValue ** 6 **/ \
		/*name*/	 _WT("������ֵ"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyCommandLine_CMDINFO(BeginIndex) \
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
		/*egname*/	_WT("CreateCommandLine"), \
		/*explain*/	_WT("����һ���µ�Chromium�����ж���ʵ����"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(8,0),  /*shrewd_ptr<ProxyCommandLine>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*4*/ \
		/*ccname*/	_WT("ȡȫ�ֶ���"),\
		/*egname*/	_WT("GetGlobalCommandLine"), \
		/*explain*/	_WT("���ص���ȫ��Chromium�����ж���, �ö�����ֻ���ġ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(8,0),  /*shrewd_ptr<ProxyCommandLine>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*5*/ \
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
	{ /*6*/ \
		/*ccname*/	_WT("�Ƿ�Ϊֻ��"),\
		/*egname*/	_WT("IsReadOnly"), \
		/*explain*/	_WT("����˶�����Ϊֻ��ģʽ�����档"), \
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
		/*ccname*/	_WT("����"),\
		/*egname*/	_WT("Copy"), \
		/*explain*/	_WT("����һ���µ�Chromium����,�ö���Ϊ���˶���ĸ�����"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(8,0),  /*shrewd_ptr<ProxyCommandLine>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*8*/ \
		/*ccname*/	_WT("���ַ�����ʼ��"),\
		/*egname*/	_WT("InitFromString"), \
		/*explain*/	_WT("���ַ�����ʼ��Chromium�����ж���"), \
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
	{ /*9*/ \
		/*ccname*/	_WT("����"),\
		/*egname*/	_WT("Reset"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+1] \
	},\
	{ /*10*/ \
		/*ccname*/	_WT("ȡԭʼ������"),\
		/*egname*/	_WT("GetArgv"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	CT_RETRUN_ARY_TYPE_DATA, \
		/*ret*/	SDT_TEXT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+1] \
	},\
	{ /*11*/ \
		/*ccname*/	_WT("ȡ�������ַ���"),\
		/*egname*/	_WT("GetCommandLineString"), \
		/*explain*/	_WT("����ԭʼ�������ַ������ݡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_TEXT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+1] \
	},\
	{ /*12*/ \
		/*ccname*/	_WT("ȡ��������"),\
		/*egname*/	_WT("GetProgram"), \
		/*explain*/	_WT("���������в����е�·�����ơ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_TEXT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+1] \
	},\
	{ /*13*/ \
		/*ccname*/	_WT("���ó�������"),\
		/*egname*/	_WT("SetProgram"), \
		/*explain*/	_WT("���������в����е�·�����ơ�"), \
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
	{ /*14*/ \
		/*ccname*/	_WT("�Ƿ���������������"),\
		/*egname*/	_WT("HasSwitches"), \
		/*explain*/	_WT("����������д�����������档"), \
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
	{ /*15*/ \
		/*ccname*/	_WT("�Ƿ���ָ��������"),\
		/*egname*/	_WT("HasSwitch"), \
		/*explain*/	_WT("�������������ָ�������������"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+2] \
	},\
	{ /*16*/ \
		/*ccname*/	_WT("ȡ������ֵ"),\
		/*egname*/	_WT("GetSwitchValue"), \
		/*explain*/	_WT("����ָ���������ֵ��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_TEXT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+3] \
	},\
	{ /*17*/ \
		/*ccname*/	_WT("׷���������"),\
		/*egname*/	_WT("AppendSwitch"), \
		/*explain*/	_WT("׷��һ��������ص������в����С�"), \
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
	{ /*18*/ \
		/*ccname*/	_WT("׷��������ֵ"),\
		/*egname*/	_WT("AppendSwitchWithValue"), \
		/*explain*/	_WT("׷��һ��������ֵ�������в����С�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+5] \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyCommandLine_FUN_NAMES \
	EDITIONS("ProxyCommandLine_Constructor"),\
	EDITIONS("ProxyCommandLine_Destructor"),\
	EDITIONS("ProxyCommandLine_CopyConstructor"),\
	EDITIONS("ProxyCommandLine_CreateCommandLine"),\
	EDITIONS("ProxyCommandLine_GetGlobalCommandLine"),\
	EDITIONS("ProxyCommandLine_IsValid"),\
	EDITIONS("ProxyCommandLine_IsReadOnly"),\
	EDITIONS("ProxyCommandLine_Copy"),\
	EDITIONS("ProxyCommandLine_InitFromString"),\
	EDITIONS("ProxyCommandLine_Reset"),\
	EDITIONS("ProxyCommandLine_GetArgv"),\
	EDITIONS("ProxyCommandLine_GetCommandLineString"),\
	EDITIONS("ProxyCommandLine_GetProgram"),\
	EDITIONS("ProxyCommandLine_SetProgram"),\
	EDITIONS("ProxyCommandLine_HasSwitches"),\
	EDITIONS("ProxyCommandLine_HasSwitch"),\
	EDITIONS("ProxyCommandLine_GetSwitchValue"),\
	EDITIONS("ProxyCommandLine_AppendSwitch"),\
	EDITIONS("ProxyCommandLine_AppendSwitchWithValue"),\


//==========================================

#define DECL_DATA_TYPE_ProxyCommandLine_FUN_CALLS \
	EDITIONF(ProxyCommandLine_Constructor),\
	EDITIONF(ProxyCommandLine_Destructor),\
	EDITIONF(ProxyCommandLine_CopyConstructor),\
	EDITIONF(ProxyCommandLine_CreateCommandLine),\
	EDITIONF(ProxyCommandLine_GetGlobalCommandLine),\
	EDITIONF(ProxyCommandLine_IsValid),\
	EDITIONF(ProxyCommandLine_IsReadOnly),\
	EDITIONF(ProxyCommandLine_Copy),\
	EDITIONF(ProxyCommandLine_InitFromString),\
	EDITIONF(ProxyCommandLine_Reset),\
	EDITIONF(ProxyCommandLine_GetArgv),\
	EDITIONF(ProxyCommandLine_GetCommandLineString),\
	EDITIONF(ProxyCommandLine_GetProgram),\
	EDITIONF(ProxyCommandLine_SetProgram),\
	EDITIONF(ProxyCommandLine_HasSwitches),\
	EDITIONF(ProxyCommandLine_HasSwitch),\
	EDITIONF(ProxyCommandLine_GetSwitchValue),\
	EDITIONF(ProxyCommandLine_AppendSwitch),\
	EDITIONF(ProxyCommandLine_AppendSwitchWithValue),\


//==========================================

extern "C"
void EDITIONF(ProxyCommandLine_Constructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCommandLine_Destructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCommandLine_CopyConstructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCommandLine_CreateCommandLine) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCommandLine_GetGlobalCommandLine) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCommandLine_IsValid) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCommandLine_IsReadOnly) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCommandLine_Copy) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCommandLine_InitFromString) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCommandLine_Reset) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCommandLine_GetArgv) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCommandLine_GetCommandLineString) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCommandLine_GetProgram) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCommandLine_SetProgram) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCommandLine_HasSwitches) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCommandLine_HasSwitch) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCommandLine_GetSwitchValue) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCommandLine_AppendSwitch) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyCommandLine_AppendSwitchWithValue) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);


//==========================================

