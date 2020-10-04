#pragma once

#include "stdafx.h"
#include "lib2.h"


#define DECL_DATA_TYPE_ProxyFrame \
	{ /*15*/ \
		/*m_szName*/		 _WT("Chromium���"), \
		/*m_szEgName*/		 _WT("ProxyFrame"), \
		/*m_szExplain*/		 _WT("����������������б�ʾ��ܵ��ࡣ�������������ʹ��ʱ, �������κ��߳��ϵ��ô����еķ���������ע������˵����"), \
		/*m_nCmdCount*/		 25, \
		/*m_pnCmdsIndex*/		 s_nProxyFrameElementCmdIndex, \
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

#define DECL_DATA_TYPE_ProxyFrame_ARGINFO \
	{ /****** ProxyFrame::LoadRequest ** 0 **/ \
		/*name*/	 _WT("����"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(25,0),  /*shrewd_ptr<ProxyRequest>*/ \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyFrame::LoadURL ** 1 **/ \
		/*name*/	 _WT("url"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyFrame::ExecuteJavaScript ** 2 **/ \
		/*name*/	 _WT("�ű�����"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyFrame::ExecuteJavaScript ** 3 **/ \
		/*name*/	 _WT("�ű�����"), \
		/*explain*/	 _WT("�����ڿ���̨����ʾ��url��ʶ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyFrame::ExecuteJavaScript ** 4 **/ \
		/*name*/	 _WT("��ʼ��"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyFrame::ExecuteJavaScriptEx ** 5 **/ \
		/*name*/	 _WT("�ű�����"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyFrame::ExecuteJavaScriptEx ** 6 **/ \
		/*name*/	 _WT("�ű�����"), \
		/*explain*/	 _WT("�����ڿ���̨����ʾ��url��ʶ����"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyFrame::ExecuteJavaScriptEx ** 7 **/ \
		/*name*/	 _WT("��ʼ��"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyFrame::ExecuteJavaScriptEx ** 8 **/ \
		/*name*/	 _WT("�쳣��Ϣ"), \
		/*explain*/	 _WT("ִ���쳣ʱ����Ĵ�����Ϣ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 AS_RECEIVE_VAR,\
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyFrame_CMDINFO(BeginIndex) \
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
		/*egname*/	_WT("Undo"), \
		/*explain*/	_WT(""), \
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
		/*ccname*/	_WT("����"),\
		/*egname*/	_WT("Redo"), \
		/*explain*/	_WT(""), \
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
		/*ccname*/	_WT("����"),\
		/*egname*/	_WT("Cut"), \
		/*explain*/	_WT(""), \
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
	{ /*7*/ \
		/*ccname*/	_WT("����"),\
		/*egname*/	_WT("Copy"), \
		/*explain*/	_WT(""), \
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
		/*ccname*/	_WT("ճ��"),\
		/*egname*/	_WT("Paste"), \
		/*explain*/	_WT(""), \
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
	{ /*9*/ \
		/*ccname*/	_WT("ɾ��"),\
		/*egname*/	_WT("Delete"), \
		/*explain*/	_WT(""), \
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
	{ /*10*/ \
		/*ccname*/	_WT("ȫѡ"),\
		/*egname*/	_WT("SelectAll"), \
		/*explain*/	_WT(""), \
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
	{ /*11*/ \
		/*ccname*/	_WT("Դ�ļ���ͼ"),\
		/*egname*/	_WT("ViewSource"), \
		/*explain*/	_WT(""), \
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
	{ /*12*/ \
		/*ccname*/	_WT("ȡҳ��Դ����"),\
		/*egname*/	_WT("GetSource"), \
		/*explain*/	_WT("��ȡ�˿���е�ҳ��HTMLԴ����, ע��: �˺�����ֹ���¼��е��á�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_TEXT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*13*/ \
		/*ccname*/	_WT("ȡҳ���ı�"),\
		/*egname*/	_WT("GetText"), \
		/*explain*/	_WT("��ȡ�˿���е�ҳ���ı�, ע��: �˺�����ֹ���¼��е��á�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_TEXT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*14*/ \
		/*ccname*/	_WT("��������"),\
		/*egname*/	_WT("LoadRequest"), \
		/*explain*/	_WT("�ڴ˿���м���ָ��������"), \
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
	{ /*15*/ \
		/*ccname*/	_WT("����URL"),\
		/*egname*/	_WT("LoadURL"), \
		/*explain*/	_WT("�ڴ˿���м���ָ����URL��"), \
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
	{ /*16*/ \
		/*ccname*/	_WT("ִ�нű�"),\
		/*egname*/	_WT("ExecuteJavaScript"), \
		/*explain*/	_WT("�ڴ˿��ִֵ��ָ����Javascript�ű����롣"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	3, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+2] \
	},\
	{ /*17*/ \
		/*ccname*/	_WT("ִ�нű�2"),\
		/*egname*/	_WT("ExecuteJavaScriptEx"), \
		/*explain*/	_WT("�ڴ˿����ִ��ָ����javacript�ű����롣ִ�гɹ����ؼ�����, ִ��ʧ�ܷ��ؿն���, �ɵ���IsValid() ������������Ч�ԡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(36,0),  /*shrewd_ptr<ProxyValue>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	4, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+5] \
	},\
	{ /*18*/ \
		/*ccname*/	_WT("�Ƿ�Ϊ��Ҫ���"),\
		/*egname*/	_WT("IsMain"), \
		/*explain*/	_WT("����˿��Ϊ��Ҫ���(Top-Level)�����档"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+9] \
	},\
	{ /*19*/ \
		/*ccname*/	_WT("�Ƿ�ӵ�н���"),\
		/*egname*/	_WT("IsFocused"), \
		/*explain*/	_WT("����˿��ӵ�н��㷵���档"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+9] \
	},\
	{ /*20*/ \
		/*ccname*/	_WT("ȡ����"),\
		/*egname*/	_WT("GetName"), \
		/*explain*/	_WT("��ȡ�˿�ܵ����ơ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_TEXT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+9] \
	},\
	{ /*21*/ \
		/*ccname*/	_WT("ȡ�����"),\
		/*egname*/	_WT("GetParent"), \
		/*explain*/	_WT("��ȡ�˿�ܵĸ����, ����˿��û�и���ܽ����ؿն���"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(16,0),  /*shrewd_ptr<ProxyFrame>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+9] \
	},\
	{ /*22*/ \
		/*ccname*/	_WT("ȡURL"),\
		/*egname*/	_WT("GetURL"), \
		/*explain*/	_WT("��ȡ�˿���м��ص�URL��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_TEXT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+9] \
	},\
	{ /*23*/ \
		/*ccname*/	_WT("ȡ�����"),\
		/*egname*/	_WT("GetBrowser"), \
		/*explain*/	_WT("��ȡ�˿���������������"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(5,0),  /*shrewd_ptr<ProxyBrowser>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+9] \
	},\
	{ /*24*/ \
		/*ccname*/	_WT("ȡ��ʶ��"),\
		/*egname*/	_WT("GetIdentifier"), \
		/*explain*/	_WT("���ش˿�ܵı�ʶ��"), \
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


//==========================================

#define DECL_DATA_TYPE_ProxyFrame_FUN_NAMES \
	EDITIONS("ProxyFrame_Constructor"),\
	EDITIONS("ProxyFrame_Destructor"),\
	EDITIONS("ProxyFrame_CopyConstructor"),\
	EDITIONS("ProxyFrame_IsValid"),\
	EDITIONS("ProxyFrame_Undo"),\
	EDITIONS("ProxyFrame_Redo"),\
	EDITIONS("ProxyFrame_Cut"),\
	EDITIONS("ProxyFrame_Copy"),\
	EDITIONS("ProxyFrame_Paste"),\
	EDITIONS("ProxyFrame_Delete"),\
	EDITIONS("ProxyFrame_SelectAll"),\
	EDITIONS("ProxyFrame_ViewSource"),\
	EDITIONS("ProxyFrame_GetSource"),\
	EDITIONS("ProxyFrame_GetText"),\
	EDITIONS("ProxyFrame_LoadRequest"),\
	EDITIONS("ProxyFrame_LoadURL"),\
	EDITIONS("ProxyFrame_ExecuteJavaScript"),\
	EDITIONS("ProxyFrame_ExecuteJavaScriptEx"),\
	EDITIONS("ProxyFrame_IsMain"),\
	EDITIONS("ProxyFrame_IsFocused"),\
	EDITIONS("ProxyFrame_GetName"),\
	EDITIONS("ProxyFrame_GetParent"),\
	EDITIONS("ProxyFrame_GetURL"),\
	EDITIONS("ProxyFrame_GetBrowser"),\
	EDITIONS("ProxyFrame_GetIdentifier"),\


//==========================================

#define DECL_DATA_TYPE_ProxyFrame_FUN_CALLS \
	EDITIONF(ProxyFrame_Constructor),\
	EDITIONF(ProxyFrame_Destructor),\
	EDITIONF(ProxyFrame_CopyConstructor),\
	EDITIONF(ProxyFrame_IsValid),\
	EDITIONF(ProxyFrame_Undo),\
	EDITIONF(ProxyFrame_Redo),\
	EDITIONF(ProxyFrame_Cut),\
	EDITIONF(ProxyFrame_Copy),\
	EDITIONF(ProxyFrame_Paste),\
	EDITIONF(ProxyFrame_Delete),\
	EDITIONF(ProxyFrame_SelectAll),\
	EDITIONF(ProxyFrame_ViewSource),\
	EDITIONF(ProxyFrame_GetSource),\
	EDITIONF(ProxyFrame_GetText),\
	EDITIONF(ProxyFrame_LoadRequest),\
	EDITIONF(ProxyFrame_LoadURL),\
	EDITIONF(ProxyFrame_ExecuteJavaScript),\
	EDITIONF(ProxyFrame_ExecuteJavaScriptEx),\
	EDITIONF(ProxyFrame_IsMain),\
	EDITIONF(ProxyFrame_IsFocused),\
	EDITIONF(ProxyFrame_GetName),\
	EDITIONF(ProxyFrame_GetParent),\
	EDITIONF(ProxyFrame_GetURL),\
	EDITIONF(ProxyFrame_GetBrowser),\
	EDITIONF(ProxyFrame_GetIdentifier),\


//==========================================

extern "C"
void EDITIONF(ProxyFrame_Constructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyFrame_Destructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyFrame_CopyConstructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyFrame_IsValid) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyFrame_Undo) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyFrame_Redo) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyFrame_Cut) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyFrame_Copy) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyFrame_Paste) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyFrame_Delete) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyFrame_SelectAll) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyFrame_ViewSource) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyFrame_GetSource) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyFrame_GetText) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyFrame_LoadRequest) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyFrame_LoadURL) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyFrame_ExecuteJavaScript) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyFrame_ExecuteJavaScriptEx) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyFrame_IsMain) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyFrame_IsFocused) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyFrame_GetName) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyFrame_GetParent) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyFrame_GetURL) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyFrame_GetBrowser) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyFrame_GetIdentifier) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);


//==========================================

