#pragma once

#include "stdafx.h"
#include "lib2.h"


#define DECL_DATA_TYPE_ProxyTouchEvent \
	{ /*34*/ \
		/*m_szName*/		 _WT("Chromium�����¼�"), \
		/*m_szEgName*/		 _WT("ProxyTouchEvent"), \
		/*m_szExplain*/		 _WT("��ʾ�����¼����ࡣ"), \
		/*m_nCmdCount*/		 15, \
		/*m_pnCmdsIndex*/		 s_nProxyTouchEventElementCmdIndex, \
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

#define DECL_DATA_TYPE_ProxyTouchEvent_ARGINFO \
	{ /****** ProxyTouchEvent::SetId ** 0 **/ \
		/*name*/	 _WT("����ID"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyTouchEvent::SetX ** 1 **/ \
		/*name*/	 _WT("x"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyTouchEvent::SetY ** 2 **/ \
		/*name*/	 _WT("y"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyTouchEvent::SetRadiusX ** 3 **/ \
		/*name*/	 _WT("�뾶"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyTouchEvent::SetRadiusY ** 4 **/ \
		/*name*/	 _WT("�뾶"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyTouchEvent::SetRotationAngle ** 5 **/ \
		/*name*/	 _WT("�Ƕ�"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyTouchEvent::SetPressure ** 6 **/ \
		/*name*/	 _WT("����ѹ��"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyTouchEvent::SetType ** 7 **/ \
		/*name*/	 _WT("����״̬"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyTouchEvent::SetModifiers ** 8 **/ \
		/*name*/	 _WT("��λ��־"), \
		/*explain*/	 _WT("��λ��־, �����������ܼ��İ���״̬, ����ֵλö�ٳ���: #�¼���־.* ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyTouchEvent::SetPointerType ** 9 **/ \
		/*name*/	 _WT("ָ������"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyTouchEvent_CMDINFO(BeginIndex) \
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
		/*ret*/	MAKELONG(35,0),  /*shrewd_ptr<ProxyTouchEvent>*/ \
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
		/*ccname*/	_WT("���ô���ID"),\
		/*egname*/	_WT("SetId"), \
		/*explain*/	_WT("���ýӴ���ID, ÿ�δ�������Ψһ,������-1������κ����֡���ע��, �����Ը���16�������������������ֽ������ԡ�"), \
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
		/*ccname*/	_WT("����X����"),\
		/*egname*/	_WT("SetX"), \
		/*explain*/	_WT("�������ͼ����X���ꡣ"), \
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
		/*ccname*/	_WT("����Y����"),\
		/*egname*/	_WT("SetY"), \
		/*explain*/	_WT("�����������ͼ������Y���ꡣ"), \
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
	{ /*8*/ \
		/*ccname*/	_WT("����X�뾶"),\
		/*egname*/	_WT("SetRadiusX"), \
		/*explain*/	_WT("������Ϊ��λ�����������, ������Ϊ0."), \
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
	{ /*9*/ \
		/*ccname*/	_WT("����Y�뾶"),\
		/*egname*/	_WT("SetRadiusY"), \
		/*explain*/	_WT("������Ϊ��λ�����������, ������Ϊ0"), \
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
	{ /*10*/ \
		/*ccname*/	_WT("���ýǶ�"),\
		/*egname*/	_WT("SetRotationAngle"), \
		/*explain*/	_WT("�Ի���Ϊ��λ�����������, ������Ϊ0"), \
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
	{ /*11*/ \
		/*ccname*/	_WT("��������ѹ��"),\
		/*egname*/	_WT("SetPressure"), \
		/*explain*/	_WT("����ָ��ı�׼������ѹ����[0,1]�ķ�Χ�ڡ����������, ������Ϊ0."), \
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
	{ /*12*/ \
		/*ccname*/	_WT("���ô���״̬"),\
		/*egname*/	_WT("SetType"), \
		/*explain*/	_WT("���ýӴ����״̬������ֵΪö�ٳ���: #����״̬.*��������һ�� TET_PRESSED �¼���ʼ, Ȼ����������� TET_MOVED �¼�, ���һ���� TET_RELEASED ���� TET_CANCELLED �¼��������ش�˳����¼��������ԡ�"), \
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
	{ /*13*/ \
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
		/*arg lp*/	&s_ArgInfo[BeginIndex+8] \
	},\
	{ /*14*/ \
		/*ccname*/	_WT("����ָ������"),\
		/*egname*/	_WT("SetPointerType"), \
		/*explain*/	_WT("���÷������¼����豸���͡�����ֵ��ö�ٳ���: #�豸ָ������.* ��"), \
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


//==========================================

#define DECL_DATA_TYPE_ProxyTouchEvent_FUN_NAMES \
	EDITIONS("ProxyTouchEvent_Constructor"),\
	EDITIONS("ProxyTouchEvent_Destructor"),\
	EDITIONS("ProxyTouchEvent_CopyConstructor"),\
	EDITIONS("ProxyTouchEvent_Create"),\
	EDITIONS("ProxyTouchEvent_IsValid"),\
	EDITIONS("ProxyTouchEvent_SetId"),\
	EDITIONS("ProxyTouchEvent_SetX"),\
	EDITIONS("ProxyTouchEvent_SetY"),\
	EDITIONS("ProxyTouchEvent_SetRadiusX"),\
	EDITIONS("ProxyTouchEvent_SetRadiusY"),\
	EDITIONS("ProxyTouchEvent_SetRotationAngle"),\
	EDITIONS("ProxyTouchEvent_SetPressure"),\
	EDITIONS("ProxyTouchEvent_SetType"),\
	EDITIONS("ProxyTouchEvent_SetModifiers"),\
	EDITIONS("ProxyTouchEvent_SetPointerType"),\


//==========================================

#define DECL_DATA_TYPE_ProxyTouchEvent_FUN_CALLS \
	EDITIONF(ProxyTouchEvent_Constructor),\
	EDITIONF(ProxyTouchEvent_Destructor),\
	EDITIONF(ProxyTouchEvent_CopyConstructor),\
	EDITIONF(ProxyTouchEvent_Create),\
	EDITIONF(ProxyTouchEvent_IsValid),\
	EDITIONF(ProxyTouchEvent_SetId),\
	EDITIONF(ProxyTouchEvent_SetX),\
	EDITIONF(ProxyTouchEvent_SetY),\
	EDITIONF(ProxyTouchEvent_SetRadiusX),\
	EDITIONF(ProxyTouchEvent_SetRadiusY),\
	EDITIONF(ProxyTouchEvent_SetRotationAngle),\
	EDITIONF(ProxyTouchEvent_SetPressure),\
	EDITIONF(ProxyTouchEvent_SetType),\
	EDITIONF(ProxyTouchEvent_SetModifiers),\
	EDITIONF(ProxyTouchEvent_SetPointerType),\


//==========================================

extern "C"
void EDITIONF(ProxyTouchEvent_Constructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTouchEvent_Destructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTouchEvent_CopyConstructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTouchEvent_Create) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTouchEvent_IsValid) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTouchEvent_SetId) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTouchEvent_SetX) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTouchEvent_SetY) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTouchEvent_SetRadiusX) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTouchEvent_SetRadiusY) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTouchEvent_SetRotationAngle) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTouchEvent_SetPressure) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTouchEvent_SetType) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTouchEvent_SetModifiers) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyTouchEvent_SetPointerType) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);


//==========================================

