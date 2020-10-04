#pragma once

#include "stdafx.h"
#include "lib2.h"


#define DECL_DATA_TYPE_ProxyBase \
	{ /*2*/ \
		/*m_szName*/		 _WT("Chromium����"), \
		/*m_szEgName*/		 _WT("ProxyBase"), \
		/*m_szExplain*/		 _WT("Chromium������Chromium��������̵ļ��, �ö�������˶����������̷�֧�ĵ��ȹ���, ȫ������,��ʼ������Ϣѭ���ȹ��ܵ�ʵ�֡�"), \
		/*m_nCmdCount*/		 13, \
		/*m_pnCmdsIndex*/		 s_nProxyBaseElementCmdIndex, \
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

#define DECL_DATA_TYPE_ProxyBase_ARGINFO \
	{ /****** ProxyBase::ExecuteProcess ** 0 **/ \
		/*name*/	 _WT("����"), \
		/*explain*/	 _WT("������Ϊ0��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBase::Initialize ** 1 **/ \
		/*name*/	 _WT("���ò���"), \
		/*explain*/	 _WT("Chromium���������ȫ�����ò�����"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(32,0),  /*shrewd_ptr<ProxySettings>*/ \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBase::Initialize ** 2 **/ \
		/*name*/	 _WT("����"), \
		/*explain*/	 _WT("������Ϊ0."), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBase::SetOSModalLoop ** 3 **/ \
		/*name*/	 _WT("osModalLoop"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBase::SetV8Interceptor ** 4 **/ \
		/*name*/	 _WT("������Ϣ"), \
		/*explain*/	 _WT("���¼�\"��Ⱦ�����߳��Ѵ���\"�¼��ṩ�Ĳ�������"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(19,0),  /*shrewd_ptr<ProxyListValue>*/ \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBase::SetV8Interceptor ** 5 **/ \
		/*name*/	 _WT("����·������"), \
		/*explain*/	 _WT("ʹ���Է���\"/\"���зָ���������·��, ͨ�����е���������ö����Լ��Զ��崴���Ķ���Ӧ��'window'������, ����: window/clientInformation/appVersion ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBase::SetV8Interceptor ** 6 **/ \
		/*name*/	 _WT("���÷���ֵ"), \
		/*explain*/	 _WT("ʹ�ô˲�����ֵ����ԭ�����ֵ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(36,0),  /*shrewd_ptr<ProxyValue>*/ \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBase::SetV8Interceptor ** 7 **/ \
		/*name*/	 _WT("����Ȩ��"), \
		/*explain*/	 _WT("����Ŀ�����Է���Ȩ��, ����ֵΪö�ٳ���: #����Ȩ��.* ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBase::CreateV8Object ** 8 **/ \
		/*name*/	 _WT("������Ϣ"), \
		/*explain*/	 _WT("���¼�\"��Ⱦ�����߳��Ѵ���\"�¼��ṩ�Ĳ�������"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(19,0),  /*shrewd_ptr<ProxyListValue>*/ \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBase::CreateV8Object ** 9 **/ \
		/*name*/	 _WT("����·������"), \
		/*explain*/	 _WT("ʹ���Է���\"/\"���зָ���������·��, ͨ�����е���������ö����Լ��Զ��崴���Ķ���Ӧ��'window'������, ����: window/clientInformation/appVersion ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBase::CreateV8Object ** 10 **/ \
		/*name*/	 _WT("����Ȩ��"), \
		/*explain*/	 _WT("����Ŀ�����Է���Ȩ��, ����ֵΪö�ٳ���: #����Ȩ��.* ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyBase_CMDINFO(BeginIndex) \
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
		/*ccname*/	_WT("���Ƚ���"),\
		/*egname*/	_WT("ExecuteProcess"), \
		/*explain*/	_WT("�˺���Ӧ�ڳ�������λ�õ���, �����ڰ���Chromium������������, �������̳����������ò���ָ��������ú�������-1, ���ʶ�˽���Ϊ���������, ������Ϊ�����������̡�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_INT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*4*/ \
		/*ccname*/	_WT("��ʼ��"),\
		/*egname*/	_WT("Initialize"), \
		/*explain*/	_WT("�˺���Ӧ���ڳ�������λ�õ���, ��Ӧ���������������ִ��, ִ�д˺����Գ�ʼ��Chromium��������̡���ʼ���ɹ�������, ʧ�ܷ��ؼ١�"), \
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
		/*ccname*/	_WT("Shutdown"),\
		/*egname*/	_WT("Shutdown"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+3] \
	},\
	{ /*6*/ \
		/*ccname*/	_WT("DoMessageLoopWork"),\
		/*egname*/	_WT("DoMessageLoopWork"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+3] \
	},\
	{ /*7*/ \
		/*ccname*/	_WT("������Ϣѭ��"),\
		/*egname*/	_WT("RunMessageLoop"), \
		/*explain*/	_WT("����Chromium��Ϣѭ��������δ���ö��߳���Ϣѭ������ʱ, ��Ӧ�õ��ô˺������˺�����ִ�к�һֱ����, ֱ���յ�ϵͳ�˳���ϢΪֹ��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+3] \
	},\
	{ /*8*/ \
		/*ccname*/	_WT("ֹͣ��ϢѶϢ"),\
		/*egname*/	_WT("QuitMessageLoop"), \
		/*explain*/	_WT("���ô˺������˳�Chromium��Ϣѭ��, ����������Chromium��Ϣѭ��ʱ��Ӧ�õ��ô˺�����"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+3] \
	},\
	{ /*9*/ \
		/*ccname*/	_WT("SetOSModalLoop"),\
		/*egname*/	_WT("SetOSModalLoop"), \
		/*explain*/	_WT(""), \
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
	{ /*10*/ \
		/*ccname*/	_WT("���ø�DPI֧��"),\
		/*egname*/	_WT("EnableHighDPISupport"), \
		/*explain*/	_WT("���ڳ�������ʱ����, ����Windows 7 ���߸��߰汾������High-DPI֧�֡��Ͼɰ汾��Windows��֧��DPI, ��Ϊ���ǲ�֧��DirectWrite, ����GDI������־�ǳ��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+4] \
	},\
	{ /*11*/ \
		/*ccname*/	_WT("����V8����������"),\
		/*egname*/	_WT("SetV8Interceptor"), \
		/*explain*/	_WT("����Javascript V8����������Է������������˺���ֻ�����¼�\"��Ⱦ�����߳��Ѵ���\"�е��á�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	4, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+4] \
	},\
	{ /*12*/ \
		/*ccname*/	_WT("����V8����"),\
		/*egname*/	_WT("CreateV8Object"), \
		/*explain*/	_WT("���� Javascript ���󡣴˺���ֻ�����¼�\"��Ⱦ�����߳��Ѵ���\"�е��á�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	3, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+8] \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyBase_FUN_NAMES \
	EDITIONS("ProxyBase_Constructor"),\
	EDITIONS("ProxyBase_Destructor"),\
	EDITIONS("ProxyBase_CopyConstructor"),\
	EDITIONS("ProxyBase_ExecuteProcess"),\
	EDITIONS("ProxyBase_Initialize"),\
	EDITIONS("ProxyBase_Shutdown"),\
	EDITIONS("ProxyBase_DoMessageLoopWork"),\
	EDITIONS("ProxyBase_RunMessageLoop"),\
	EDITIONS("ProxyBase_QuitMessageLoop"),\
	EDITIONS("ProxyBase_SetOSModalLoop"),\
	EDITIONS("ProxyBase_EnableHighDPISupport"),\
	EDITIONS("ProxyBase_SetV8Interceptor"),\
	EDITIONS("ProxyBase_CreateV8Object"),\


//==========================================

#define DECL_DATA_TYPE_ProxyBase_FUN_CALLS \
	EDITIONF(ProxyBase_Constructor),\
	EDITIONF(ProxyBase_Destructor),\
	EDITIONF(ProxyBase_CopyConstructor),\
	EDITIONF(ProxyBase_ExecuteProcess),\
	EDITIONF(ProxyBase_Initialize),\
	EDITIONF(ProxyBase_Shutdown),\
	EDITIONF(ProxyBase_DoMessageLoopWork),\
	EDITIONF(ProxyBase_RunMessageLoop),\
	EDITIONF(ProxyBase_QuitMessageLoop),\
	EDITIONF(ProxyBase_SetOSModalLoop),\
	EDITIONF(ProxyBase_EnableHighDPISupport),\
	EDITIONF(ProxyBase_SetV8Interceptor),\
	EDITIONF(ProxyBase_CreateV8Object),\


//==========================================

extern "C"
void EDITIONF(ProxyBase_Constructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_Destructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_CopyConstructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_ExecuteProcess) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_Initialize) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_Shutdown) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_DoMessageLoopWork) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_RunMessageLoop) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_QuitMessageLoop) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_SetOSModalLoop) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_EnableHighDPISupport) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_SetV8Interceptor) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_CreateV8Object) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);


//==========================================

