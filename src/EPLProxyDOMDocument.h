#pragma once

#include "stdafx.h"
#include "lib2.h"


#define DECL_DATA_TYPE_ProxyDOMDocument \
	{ /*12*/ \
		/*m_szName*/		 _WT("ˮ����ҳ�ĵ�����"), \
		/*m_szEgName*/		 _WT("ProxyDOMDocument"), \
		/*m_szExplain*/		 _WT("��ʾDOM�ĵ������͡�"), \
		/*m_nCmdCount*/		 20, \
		/*m_pnCmdsIndex*/		 s_nProxyDOMDocumentElementCmdIndex, \
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

#define DECL_DATA_TYPE_ProxyDOMDocument_ARGINFO \
	{ /****** ProxyDOMDocument::GetElementById ** 0 **/ \
		/*name*/	 _WT("��ʶ��"), \
		/*explain*/	 _WT("Ԫ�ر�ʶ��(ID)"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyDOMDocument::GetCompleteURL ** 1 **/ \
		/*name*/	 _WT("�ֶ�URL"), \
		/*explain*/	 _WT("�ĵ��Ĳ���URL��ַ"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyDOMDocument::QuerySelector ** 2 **/ \
		/*name*/	 _WT("ѡ����"), \
		/*explain*/	 _WT("CSS ѡ������"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyDOMDocument::QuerySelectorAll ** 3 **/ \
		/*name*/	 _WT("ѡ����"), \
		/*explain*/	 _WT("CSS ѡ������"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyDOMDocument_CMDINFO(BeginIndex) \
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
		/*ccname*/	_WT("ȡ�ĵ�����"),\
		/*egname*/	_WT("GetType"), \
		/*explain*/	_WT("���ش���ҳ�ĵ������͡�����ֵΪö�ٳ���: #��ҳ�ĵ�����.* ��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_INT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*5*/ \
		/*ccname*/	_WT("ȡ��Ԫ��"),\
		/*egname*/	_WT("GetDocument"), \
		/*explain*/	_WT("�������ϲ���ĵ�Ԫ��(root document node)��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(13,0),  /*shrewd_ptr<ProxyDOMNode>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*6*/ \
		/*ccname*/	_WT("ȡBODYԪ��"),\
		/*egname*/	_WT("GetBody"), \
		/*explain*/	_WT("���� Body �ڵ��ĵ�Ԫ�ء�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(13,0),  /*shrewd_ptr<ProxyDOMNode>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*7*/ \
		/*ccname*/	_WT("ȡHEADԪ��"),\
		/*egname*/	_WT("GetHead"), \
		/*explain*/	_WT("���� Head �ڵ��ĵ�Ԫ�ء�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(13,0),  /*shrewd_ptr<ProxyDOMNode>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*8*/ \
		/*ccname*/	_WT("ȡ�ĵ�����"),\
		/*egname*/	_WT("GetTitle"), \
		/*explain*/	_WT("�����ĵ����⡣"), \
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
	{ /*9*/ \
		/*ccname*/	_WT("�ӱ�ʶ��ȡԪ��"),\
		/*egname*/	_WT("GetElementById"), \
		/*explain*/	_WT("���������ָ����ʶ��(ID)���ĵ�Ԫ�ء�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(13,0),  /*shrewd_ptr<ProxyDOMNode>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*10*/ \
		/*ccname*/	_WT("ȡ����Ԫ��"),\
		/*egname*/	_WT("GetFocusedNode"), \
		/*explain*/	_WT("���ص�ǰ���������ĵ�Ԫ�ء�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(13,0),  /*shrewd_ptr<ProxyDOMNode>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+1] \
	},\
	{ /*11*/ \
		/*ccname*/	_WT("�Ƿ���ѡ��"),\
		/*egname*/	_WT("HasSelection"), \
		/*explain*/	_WT("����ĵ��д���ѡ�����򷵻��档"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+1] \
	},\
	{ /*12*/ \
		/*ccname*/	_WT("ȡѡ����ʼλ��"),\
		/*egname*/	_WT("GetSelectionStartOffset"), \
		/*explain*/	_WT("�����ĵ�ѡ��������ʼλ�á�"), \
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
	{ /*13*/ \
		/*ccname*/	_WT("ȡѡ������λ��"),\
		/*egname*/	_WT("GetSelectionEndOffset"), \
		/*explain*/	_WT("�����ĵ�ѡ��������λ�á�"), \
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
	{ /*14*/ \
		/*ccname*/	_WT("ȡѡ������ı�"),\
		/*egname*/	_WT("GetSelectionAsMarkup"), \
		/*explain*/	_WT("�����ĵ�ѡ�������еı���ı�(HTML)��"), \
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
	{ /*15*/ \
		/*ccname*/	_WT("ȡѡ���ı�"),\
		/*egname*/	_WT("GetSelectionAsText"), \
		/*explain*/	_WT("�����ĵ�ѡ�������е��ı����ݡ�"), \
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
	{ /*16*/ \
		/*ccname*/	_WT("ȡ��URL"),\
		/*egname*/	_WT("GetBaseURL"), \
		/*explain*/	_WT("�����ĵ�����ʼURL��"), \
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
	{ /*17*/ \
		/*ccname*/	_WT("ȡ����URL"),\
		/*egname*/	_WT("GetCompleteURL"), \
		/*explain*/	_WT("�����ĵ�����ʼURL��ָ����URL����������URL��ַ��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_TEXT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+1] \
	},\
	{ /*18*/ \
		/*ccname*/	_WT("��ѯԪ��"),\
		/*egname*/	_WT("QuerySelector"), \
		/*explain*/	_WT("���Ҳ����ط���ָ��ѡ�����������ĵ�Ԫ�ء�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(13,0),  /*shrewd_ptr<ProxyDOMNode>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+2] \
	},\
	{ /*19*/ \
		/*ccname*/	_WT("��ѯ����Ԫ��"),\
		/*egname*/	_WT("QuerySelectorAll"), \
		/*explain*/	_WT("���Ҳ��������з���ָ��ѡ�����������ĵ�Ԫ�ء�"), \
		/*category*/	-1, \
		/*state*/	CT_RETRUN_ARY_TYPE_DATA, \
		/*ret*/	MAKELONG(13,0),  /*shrewd_ptr<ProxyDOMNode>***/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+3] \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyDOMDocument_FUN_NAMES \
	EDITIONS("ProxyDOMDocument_Constructor"),\
	EDITIONS("ProxyDOMDocument_Destructor"),\
	EDITIONS("ProxyDOMDocument_CopyConstructor"),\
	EDITIONS("ProxyDOMDocument_IsValid"),\
	EDITIONS("ProxyDOMDocument_GetType"),\
	EDITIONS("ProxyDOMDocument_GetDocument"),\
	EDITIONS("ProxyDOMDocument_GetBody"),\
	EDITIONS("ProxyDOMDocument_GetHead"),\
	EDITIONS("ProxyDOMDocument_GetTitle"),\
	EDITIONS("ProxyDOMDocument_GetElementById"),\
	EDITIONS("ProxyDOMDocument_GetFocusedNode"),\
	EDITIONS("ProxyDOMDocument_HasSelection"),\
	EDITIONS("ProxyDOMDocument_GetSelectionStartOffset"),\
	EDITIONS("ProxyDOMDocument_GetSelectionEndOffset"),\
	EDITIONS("ProxyDOMDocument_GetSelectionAsMarkup"),\
	EDITIONS("ProxyDOMDocument_GetSelectionAsText"),\
	EDITIONS("ProxyDOMDocument_GetBaseURL"),\
	EDITIONS("ProxyDOMDocument_GetCompleteURL"),\
	EDITIONS("ProxyDOMDocument_QuerySelector"),\
	EDITIONS("ProxyDOMDocument_QuerySelectorAll"),\


//==========================================

#define DECL_DATA_TYPE_ProxyDOMDocument_FUN_CALLS \
	EDITIONF(ProxyDOMDocument_Constructor),\
	EDITIONF(ProxyDOMDocument_Destructor),\
	EDITIONF(ProxyDOMDocument_CopyConstructor),\
	EDITIONF(ProxyDOMDocument_IsValid),\
	EDITIONF(ProxyDOMDocument_GetType),\
	EDITIONF(ProxyDOMDocument_GetDocument),\
	EDITIONF(ProxyDOMDocument_GetBody),\
	EDITIONF(ProxyDOMDocument_GetHead),\
	EDITIONF(ProxyDOMDocument_GetTitle),\
	EDITIONF(ProxyDOMDocument_GetElementById),\
	EDITIONF(ProxyDOMDocument_GetFocusedNode),\
	EDITIONF(ProxyDOMDocument_HasSelection),\
	EDITIONF(ProxyDOMDocument_GetSelectionStartOffset),\
	EDITIONF(ProxyDOMDocument_GetSelectionEndOffset),\
	EDITIONF(ProxyDOMDocument_GetSelectionAsMarkup),\
	EDITIONF(ProxyDOMDocument_GetSelectionAsText),\
	EDITIONF(ProxyDOMDocument_GetBaseURL),\
	EDITIONF(ProxyDOMDocument_GetCompleteURL),\
	EDITIONF(ProxyDOMDocument_QuerySelector),\
	EDITIONF(ProxyDOMDocument_QuerySelectorAll),\


//==========================================

extern "C"
void EDITIONF(ProxyDOMDocument_Constructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMDocument_Destructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMDocument_CopyConstructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMDocument_IsValid) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMDocument_GetType) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMDocument_GetDocument) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMDocument_GetBody) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMDocument_GetHead) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMDocument_GetTitle) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMDocument_GetElementById) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMDocument_GetFocusedNode) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMDocument_HasSelection) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMDocument_GetSelectionStartOffset) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMDocument_GetSelectionEndOffset) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMDocument_GetSelectionAsMarkup) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMDocument_GetSelectionAsText) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMDocument_GetBaseURL) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMDocument_GetCompleteURL) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMDocument_QuerySelector) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMDocument_QuerySelectorAll) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);


//==========================================

