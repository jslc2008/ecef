#pragma once

#include "stdafx.h"
#include "lib2.h"


#define DECL_DATA_TYPE_ProxyValue \
	{ /*31*/ \
		/*m_szName*/		 _WT("ˮ��ͨ����"), \
		/*m_szEgName*/		 _WT("ProxyValue"), \
		/*m_szExplain*/		 _WT("��װ��������������ֵ����, ����������(�б���, �ֵ���)����ֻ�������������,�������ڴ˶���"), \
		/*m_nCmdCount*/		 25, \
		/*m_pnCmdsIndex*/		 s_nProxyValueElementCmdIndex, \
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

#define DECL_DATA_TYPE_ProxyValue_ARGINFO \
	{ /****** ProxyValue::IsSame ** 0 **/ \
		/*name*/	 _WT("�Ƚ�����"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(31,0),  /*shrewd_ptr<ProxyValue>*/ \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyValue::IsEqual ** 1 **/ \
		/*name*/	 _WT("�Ƚ�����"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(31,0),  /*shrewd_ptr<ProxyValue>*/ \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyValue::SetBool ** 2 **/ \
		/*name*/	 _WT("����ֵ"), \
		/*explain*/	 _WT("Ԥ���õ�����ֵ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyValue::SetInt ** 3 **/ \
		/*name*/	 _WT("����ֵ"), \
		/*explain*/	 _WT("Ԥ���õ�����ֵ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyValue::SetDouble ** 4 **/ \
		/*name*/	 _WT("����ֵ"), \
		/*explain*/	 _WT("Ԥ���õ�����ֵ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_DOUBLE, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyValue::SetString ** 5 **/ \
		/*name*/	 _WT("����ֵ"), \
		/*explain*/	 _WT("Ԥ���õ�����ֵ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyValue::SetBinary ** 6 **/ \
		/*name*/	 _WT("����ֵ"), \
		/*explain*/	 _WT("Ԥ���õ�����ֵ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BIN, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyValue::SetBinary ** 7 **/ \
		/*name*/	 _WT("����"), \
		/*explain*/	 _WT("����ֵ����"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyValue::SetDictionary ** 8 **/ \
		/*name*/	 _WT("����ֵ"), \
		/*explain*/	 _WT("Ԥ���õ�����ֵ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(11,0),  /*shrewd_ptr<ProxyDictionaryValue>*/ \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyValue::SetList ** 9 **/ \
		/*name*/	 _WT("����ֵ"), \
		/*explain*/	 _WT("Ԥ���õ�����ֵ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(20,0),  /*shrewd_ptr<ProxyListValue>*/ \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyValue_CMDINFO(BeginIndex) \
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
		/*ccname*/	_WT("�Ƿ�ӵ��"),\
		/*egname*/	_WT("IsOwned"), \
		/*explain*/	_WT("���������������һ������ӵ�У��򷵻�true��"), \
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
		/*ccname*/	_WT("�Ƿ�ֻ��"),\
		/*egname*/	_WT("IsReadOnly"), \
		/*explain*/	_WT("���������ֻ���ķ�����"), \
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
		/*ccname*/	_WT("�Ƿ���ͬ"),\
		/*egname*/	_WT("IsSame"), \
		/*explain*/	_WT("�Ƚ�����һ�������Ƿ���ͬ"), \
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
	{ /*7*/ \
		/*ccname*/	_WT("�Ƿ����"),\
		/*egname*/	_WT("IsEqual"), \
		/*explain*/	_WT("�Ƚ����������Ƿ�Ϊͬһ��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+1] \
	},\
	{ /*8*/ \
		/*ccname*/	_WT("��������"),\
		/*egname*/	_WT("Copy"), \
		/*explain*/	_WT("�����ö����һ���¸�����"), \
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
	{ /*9*/ \
		/*ccname*/	_WT("ȡ����"),\
		/*egname*/	_WT("GetType"), \
		/*explain*/	_WT("ȡ�ö����д洢�Ļ�������ֵ����, �йض�����ö�ٳ���: #ֵ����.* �С�"), \
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
	{ /*10*/ \
		/*ccname*/	_WT("ȡ�߼���"),\
		/*egname*/	_WT("GetBool"), \
		/*explain*/	_WT("��ȡ�߼������ݡ�"), \
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
	{ /*11*/ \
		/*ccname*/	_WT("ȡ������"),\
		/*egname*/	_WT("GetInt"), \
		/*explain*/	_WT("��ȡ���������ݡ�"), \
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
	{ /*12*/ \
		/*ccname*/	_WT("ȡ˫����С����"),\
		/*egname*/	_WT("GetDouble"), \
		/*explain*/	_WT("��ȡ˫����С�������ݡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_DOUBLE, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+2] \
	},\
	{ /*13*/ \
		/*ccname*/	_WT("ȡ�ı���"),\
		/*egname*/	_WT("GetString"), \
		/*explain*/	_WT("��ȡ�ı������ݡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_TEXT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+2] \
	},\
	{ /*14*/ \
		/*ccname*/	_WT("ȡ�ֽڼ���"),\
		/*egname*/	_WT("GetBinary"), \
		/*explain*/	_WT("��ȡ�ֽڼ������ݡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BIN, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+2] \
	},\
	{ /*15*/ \
		/*ccname*/	_WT("ȡ�ֵ���"),\
		/*egname*/	_WT("GetDictionary"), \
		/*explain*/	_WT("��ȡ�ֵ������ݡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(11,0),  /*shrewd_ptr<ProxyDictionaryValue>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+2] \
	},\
	{ /*16*/ \
		/*ccname*/	_WT("ȡ�б���"),\
		/*egname*/	_WT("GetList"), \
		/*explain*/	_WT("��ȡ�б������ݡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(20,0),  /*shrewd_ptr<ProxyListValue>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+2] \
	},\
	{ /*17*/ \
		/*ccname*/	_WT("��Ϊ��"),\
		/*egname*/	_WT("SetNull"), \
		/*explain*/	_WT("����Ϊ���������ݡ�"), \
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
	{ /*18*/ \
		/*ccname*/	_WT("���߼���"),\
		/*egname*/	_WT("SetBool"), \
		/*explain*/	_WT("����Ϊ�߼������ݡ�"), \
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
	{ /*19*/ \
		/*ccname*/	_WT("��������"),\
		/*egname*/	_WT("SetInt"), \
		/*explain*/	_WT("����Ϊ���������ݡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+3] \
	},\
	{ /*20*/ \
		/*ccname*/	_WT("��˫����С����"),\
		/*egname*/	_WT("SetDouble"), \
		/*explain*/	_WT("����Ϊ˫����С�������ݡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+4] \
	},\
	{ /*21*/ \
		/*ccname*/	_WT("���ı���"),\
		/*egname*/	_WT("SetString"), \
		/*explain*/	_WT("����Ϊ�ı������ݡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+5] \
	},\
	{ /*22*/ \
		/*ccname*/	_WT("���ֽڼ���"),\
		/*egname*/	_WT("SetBinary"), \
		/*explain*/	_WT("����Ϊ�ֽڼ������ݡ�"), \
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
	{ /*23*/ \
		/*ccname*/	_WT("���ֵ���"),\
		/*egname*/	_WT("SetDictionary"), \
		/*explain*/	_WT("����Ϊ�ֵ������ݡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+8] \
	},\
	{ /*24*/ \
		/*ccname*/	_WT("���б���"),\
		/*egname*/	_WT("SetList"), \
		/*explain*/	_WT("����Ϊ�б������ݡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+9] \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyValue_FUN_NAMES \
	EDITIONS("ProxyValue_Constructor"),\
	EDITIONS("ProxyValue_Destructor"),\
	EDITIONS("ProxyValue_CopyConstructor"),\
	EDITIONS("ProxyValue_IsValid"),\
	EDITIONS("ProxyValue_IsOwned"),\
	EDITIONS("ProxyValue_IsReadOnly"),\
	EDITIONS("ProxyValue_IsSame"),\
	EDITIONS("ProxyValue_IsEqual"),\
	EDITIONS("ProxyValue_Copy"),\
	EDITIONS("ProxyValue_GetType"),\
	EDITIONS("ProxyValue_GetBool"),\
	EDITIONS("ProxyValue_GetInt"),\
	EDITIONS("ProxyValue_GetDouble"),\
	EDITIONS("ProxyValue_GetString"),\
	EDITIONS("ProxyValue_GetBinary"),\
	EDITIONS("ProxyValue_GetDictionary"),\
	EDITIONS("ProxyValue_GetList"),\
	EDITIONS("ProxyValue_SetNull"),\
	EDITIONS("ProxyValue_SetBool"),\
	EDITIONS("ProxyValue_SetInt"),\
	EDITIONS("ProxyValue_SetDouble"),\
	EDITIONS("ProxyValue_SetString"),\
	EDITIONS("ProxyValue_SetBinary"),\
	EDITIONS("ProxyValue_SetDictionary"),\
	EDITIONS("ProxyValue_SetList"),\


//==========================================

#define DECL_DATA_TYPE_ProxyValue_FUN_CALLS \
	EDITIONF(ProxyValue_Constructor),\
	EDITIONF(ProxyValue_Destructor),\
	EDITIONF(ProxyValue_CopyConstructor),\
	EDITIONF(ProxyValue_IsValid),\
	EDITIONF(ProxyValue_IsOwned),\
	EDITIONF(ProxyValue_IsReadOnly),\
	EDITIONF(ProxyValue_IsSame),\
	EDITIONF(ProxyValue_IsEqual),\
	EDITIONF(ProxyValue_Copy),\
	EDITIONF(ProxyValue_GetType),\
	EDITIONF(ProxyValue_GetBool),\
	EDITIONF(ProxyValue_GetInt),\
	EDITIONF(ProxyValue_GetDouble),\
	EDITIONF(ProxyValue_GetString),\
	EDITIONF(ProxyValue_GetBinary),\
	EDITIONF(ProxyValue_GetDictionary),\
	EDITIONF(ProxyValue_GetList),\
	EDITIONF(ProxyValue_SetNull),\
	EDITIONF(ProxyValue_SetBool),\
	EDITIONF(ProxyValue_SetInt),\
	EDITIONF(ProxyValue_SetDouble),\
	EDITIONF(ProxyValue_SetString),\
	EDITIONF(ProxyValue_SetBinary),\
	EDITIONF(ProxyValue_SetDictionary),\
	EDITIONF(ProxyValue_SetList),\


//==========================================

extern "C"
void EDITIONF(ProxyValue_Constructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyValue_Destructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyValue_CopyConstructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyValue_IsValid) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyValue_IsOwned) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyValue_IsReadOnly) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyValue_IsSame) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyValue_IsEqual) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyValue_Copy) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyValue_GetType) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyValue_GetBool) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyValue_GetInt) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyValue_GetDouble) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyValue_GetString) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyValue_GetBinary) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyValue_GetDictionary) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyValue_GetList) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyValue_SetNull) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyValue_SetBool) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyValue_SetInt) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyValue_SetDouble) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyValue_SetString) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyValue_SetBinary) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyValue_SetDictionary) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyValue_SetList) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);


//==========================================

