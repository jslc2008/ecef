#pragma once

#include "stdafx.h"
#include "lib2.h"


#define DECL_DATA_TYPE_ProxyDOMNode \
	{ /*13*/ \
		/*m_szName*/		 _WT("ˮ����ҳ�ĵ�Ԫ��"), \
		/*m_szEgName*/		 _WT("ProxyDOMNode"), \
		/*m_szExplain*/		 _WT("���ڱ�ʾ DOM �ڵ�����͡�"), \
		/*m_nCmdCount*/		 34, \
		/*m_pnCmdsIndex*/		 s_nProxyDOMNodeElementCmdIndex, \
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

#define DECL_DATA_TYPE_ProxyDOMNode_ARGINFO \
	{ /****** ProxyDOMNode::SetValue ** 0 **/ \
		/*name*/	 _WT("ֵ"), \
		/*explain*/	 _WT("Ԫ�ص�ֵ"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyDOMNode::HasElementAttribute ** 1 **/ \
		/*name*/	 _WT("��������"), \
		/*explain*/	 _WT("Ԫ����������"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyDOMNode::GetElementAttribute ** 2 **/ \
		/*name*/	 _WT("��������"), \
		/*explain*/	 _WT("Ԫ����������"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyDOMNode::SetElementAttribute ** 3 **/ \
		/*name*/	 _WT("��������"), \
		/*explain*/	 _WT("Ԫ����������"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyDOMNode::SetElementAttribute ** 4 **/ \
		/*name*/	 _WT("����ֵ"), \
		/*explain*/	 _WT("Ԫ������ֵ"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyDOMNode::SendEvent ** 5 **/ \
		/*name*/	 _WT("������"), \
		/*explain*/	 _WT("��������"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyDOMNode::SendEvent ** 6 **/ \
		/*name*/	 _WT("����"), \
		/*explain*/	 _WT("��������, ��֧�ֻ�������������ֵ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 _SDT_ALL, \
		/*default*/	 0,\
		/*state*/	 AS_DEFAULT_VALUE_IS_EMPTY \
	},\
	{ /****** ProxyDOMNode::QuerySelector ** 7 **/ \
		/*name*/	 _WT("ѡ����"), \
		/*explain*/	 _WT("CSS ѡ����"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyDOMNode::QuerySelectorAll ** 8 **/ \
		/*name*/	 _WT("ѡ����"), \
		/*explain*/	 _WT("CSS ѡ����"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyDOMNode_CMDINFO(BeginIndex) \
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
		/*ccname*/	_WT("ȡ����"),\
		/*egname*/	_WT("GetType"), \
		/*explain*/	_WT("�����ĵ�Ԫ�ص����͡�����ֵΪö�ٳ���: #��ҳ�ĵ�Ԫ��.* ��"), \
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
		/*ccname*/	_WT("�Ƿ�Ϊ�ı�"),\
		/*egname*/	_WT("IsText"), \
		/*explain*/	_WT("������ĵ�Ԫ��Ϊ�ı������档"), \
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
		/*ccname*/	_WT("�Ƿ�ΪԪ��"),\
		/*egname*/	_WT("IsElement"), \
		/*explain*/	_WT("�����Ԫ��Ϊ�ĵ�Ԫ�ط����档"), \
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
		/*ccname*/	_WT("�Ƿ�ɱ༭"),\
		/*egname*/	_WT("IsEditable"), \
		/*explain*/	_WT("�����Ԫ��������ķ����档"), \
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
	{ /*8*/ \
		/*ccname*/	_WT("�Ƿ�Ϊ��Ԫ��"),\
		/*egname*/	_WT("IsFormControlElement"), \
		/*explain*/	_WT("�����Ԫ��Ϊ���ؼ�Ԫ�ط����档"), \
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
	{ /*9*/ \
		/*ccname*/	_WT("ȡ��Ԫ������"),\
		/*egname*/	_WT("GetFormControlElementType"), \
		/*explain*/	_WT("���ش˱�Ԫ�ص����͡�"), \
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
	{ /*10*/ \
		/*ccname*/	_WT("ȡ����"),\
		/*egname*/	_WT("GetName"), \
		/*explain*/	_WT("���ش��ĵ�Ԫ�ص�����(name)��"), \
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
	{ /*11*/ \
		/*ccname*/	_WT("ȡֵ"),\
		/*egname*/	_WT("GetValue"), \
		/*explain*/	_WT("���ش��ĵ�Ԫ�ص�ֵ(value)��"), \
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
	{ /*12*/ \
		/*ccname*/	_WT("��ֵ"),\
		/*egname*/	_WT("SetValue"), \
		/*explain*/	_WT("���ô��ĵ�Ԫ�ص�ֵ(value)."), \
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
	{ /*13*/ \
		/*ccname*/	_WT("ȡ����ı�"),\
		/*egname*/	_WT("GetAsMarkup"), \
		/*explain*/	_WT("��ȡ��Ԫ�صı���ı�(HTML)��"), \
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
	{ /*14*/ \
		/*ccname*/	_WT("ȡ�ĵ�����"),\
		/*egname*/	_WT("GetDocument"), \
		/*explain*/	_WT("�������Ԫ�ع������ĵ�����"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(12,0),  /*shrewd_ptr<ProxyDOMDocument>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+1] \
	},\
	{ /*15*/ \
		/*ccname*/	_WT("ȡ��Ԫ��"),\
		/*egname*/	_WT("GetParent"), \
		/*explain*/	_WT("���ش�Ԫ�صĸ�Ԫ�ض���"), \
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
	{ /*16*/ \
		/*ccname*/	_WT("ȡ��һ�ֵ�Ԫ��"),\
		/*egname*/	_WT("GetPreviousSibling"), \
		/*explain*/	_WT("���ش�Ԫ�ص���һ���ֵ�Ԫ��(previous sibling)��"), \
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
	{ /*17*/ \
		/*ccname*/	_WT("ȡ��һ�ֵ�Ԫ��"),\
		/*egname*/	_WT("GetNextSibling"), \
		/*explain*/	_WT("���ش�Ԫ�ص���һ���ֵ�Ԫ��(next sibling)��"), \
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
	{ /*18*/ \
		/*ccname*/	_WT("�Ƿ�����Ԫ��"),\
		/*egname*/	_WT("HasChildren"), \
		/*explain*/	_WT("�����Ԫ�ؾ�����Ԫ�ض��󷵻��档"), \
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
	{ /*19*/ \
		/*ccname*/	_WT("ȡ�׸���Ԫ��"),\
		/*egname*/	_WT("GetFirstChild"), \
		/*explain*/	_WT("���ش�Ԫ�صĵ�һ����Ԫ�ض���"), \
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
	{ /*20*/ \
		/*ccname*/	_WT("ȡ���һ����Ԫ��"),\
		/*egname*/	_WT("GetLastChild"), \
		/*explain*/	_WT("���ش�Ԫ�ص����һ����Ԫ�ض���"), \
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
	{ /*21*/ \
		/*ccname*/	_WT("ȡ��ǩ����"),\
		/*egname*/	_WT("GetElementTagName"), \
		/*explain*/	_WT("���ش�Ԫ�صı�ǩ����(tag)���˷�������Ԫ�����Ͷ�����Ч��"), \
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
	{ /*22*/ \
		/*ccname*/	_WT("�Ƿ�������"),\
		/*egname*/	_WT("HasElementAttributes"), \
		/*explain*/	_WT("�����Ԫ�ؾ�������(attributes)�����档�˷�������Ԫ�����Ͷ�����Ч��"), \
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
	{ /*23*/ \
		/*ccname*/	_WT("�Ƿ��������"),\
		/*egname*/	_WT("HasElementAttribute"), \
		/*explain*/	_WT("�����Ԫ�ؾ��з���ָ�����Ƶ����Է����档"), \
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
	{ /*24*/ \
		/*ccname*/	_WT("ȡ����"),\
		/*egname*/	_WT("GetElementAttribute"), \
		/*explain*/	_WT("���ش�Ԫ���з���ָ�����Ƶ�����ֵ��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_TEXT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+2] \
	},\
	{ /*25*/ \
		/*ccname*/	_WT("ȡ��������"),\
		/*egname*/	_WT("GetElementAttributes"), \
		/*explain*/	_WT("���ش�Ԫ���е��������ԡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(11,0),  /*shrewd_ptr<ProxyDictionaryValue>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+3] \
	},\
	{ /*26*/ \
		/*ccname*/	_WT("������"),\
		/*egname*/	_WT("SetElementAttribute"), \
		/*explain*/	_WT("����ָ�����Ե�Ԫ���С�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+3] \
	},\
	{ /*27*/ \
		/*ccname*/	_WT("ȡ�ڲ��ı�"),\
		/*egname*/	_WT("GetElementInnerText"), \
		/*explain*/	_WT("���ش�Ԫ�ص��ڲ�(inner)�ı���"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_TEXT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+5] \
	},\
	{ /*28*/ \
		/*ccname*/	_WT("ȡ��Χ��"),\
		/*egname*/	_WT("GetElementBounds"), \
		/*explain*/	_WT("���ش�Ԫ�صİ�Χ��(bounding box)�߽硣"), \
		/*category*/	-1, \
		/*state*/	CT_RETRUN_ARY_TYPE_DATA, \
		/*ret*/	SDT_INT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+5] \
	},\
	{ /*29*/ \
		/*ccname*/	_WT("ִ�з���"),\
		/*egname*/	_WT("SendEvent"), \
		/*explain*/	_WT("ִ��Ԫ�ط�����"), \
		/*category*/	-1, \
		/*state*/	 CT_ALLOW_APPEND_NEW_ARG, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+5] \
	},\
	{ /*30*/ \
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
		/*arg lp*/	&s_ArgInfo[BeginIndex+7] \
	},\
	{ /*31*/ \
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
		/*arg lp*/	&s_ArgInfo[BeginIndex+8] \
	},\
	{ /*32*/ \
		/*ccname*/	_WT("ȡ��Ԫ������"),\
		/*egname*/	_WT("GetChildCount"), \
		/*explain*/	_WT("���ش��ĵ�Ԫ��ӵ�е���Ԫ��������"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_INT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+9] \
	},\
	{ /*33*/ \
		/*ccname*/	_WT("ȡѡ����"),\
		/*egname*/	_WT("GetSelector"), \
		/*explain*/	_WT("���ش��ĵ�Ԫ�ص�CSSѡ�����ַ�����"), \
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


//==========================================

#define DECL_DATA_TYPE_ProxyDOMNode_FUN_NAMES \
	EDITIONS("ProxyDOMNode_Constructor"),\
	EDITIONS("ProxyDOMNode_Destructor"),\
	EDITIONS("ProxyDOMNode_CopyConstructor"),\
	EDITIONS("ProxyDOMNode_IsValid"),\
	EDITIONS("ProxyDOMNode_GetType"),\
	EDITIONS("ProxyDOMNode_IsText"),\
	EDITIONS("ProxyDOMNode_IsElement"),\
	EDITIONS("ProxyDOMNode_IsEditable"),\
	EDITIONS("ProxyDOMNode_IsFormControlElement"),\
	EDITIONS("ProxyDOMNode_GetFormControlElementType"),\
	EDITIONS("ProxyDOMNode_GetName"),\
	EDITIONS("ProxyDOMNode_GetValue"),\
	EDITIONS("ProxyDOMNode_SetValue"),\
	EDITIONS("ProxyDOMNode_GetAsMarkup"),\
	EDITIONS("ProxyDOMNode_GetDocument"),\
	EDITIONS("ProxyDOMNode_GetParent"),\
	EDITIONS("ProxyDOMNode_GetPreviousSibling"),\
	EDITIONS("ProxyDOMNode_GetNextSibling"),\
	EDITIONS("ProxyDOMNode_HasChildren"),\
	EDITIONS("ProxyDOMNode_GetFirstChild"),\
	EDITIONS("ProxyDOMNode_GetLastChild"),\
	EDITIONS("ProxyDOMNode_GetElementTagName"),\
	EDITIONS("ProxyDOMNode_HasElementAttributes"),\
	EDITIONS("ProxyDOMNode_HasElementAttribute"),\
	EDITIONS("ProxyDOMNode_GetElementAttribute"),\
	EDITIONS("ProxyDOMNode_GetElementAttributes"),\
	EDITIONS("ProxyDOMNode_SetElementAttribute"),\
	EDITIONS("ProxyDOMNode_GetElementInnerText"),\
	EDITIONS("ProxyDOMNode_GetElementBounds"),\
	EDITIONS("ProxyDOMNode_SendEvent"),\
	EDITIONS("ProxyDOMNode_QuerySelector"),\
	EDITIONS("ProxyDOMNode_QuerySelectorAll"),\
	EDITIONS("ProxyDOMNode_GetChildCount"),\
	EDITIONS("ProxyDOMNode_GetSelector"),\


//==========================================

#define DECL_DATA_TYPE_ProxyDOMNode_FUN_CALLS \
	EDITIONF(ProxyDOMNode_Constructor),\
	EDITIONF(ProxyDOMNode_Destructor),\
	EDITIONF(ProxyDOMNode_CopyConstructor),\
	EDITIONF(ProxyDOMNode_IsValid),\
	EDITIONF(ProxyDOMNode_GetType),\
	EDITIONF(ProxyDOMNode_IsText),\
	EDITIONF(ProxyDOMNode_IsElement),\
	EDITIONF(ProxyDOMNode_IsEditable),\
	EDITIONF(ProxyDOMNode_IsFormControlElement),\
	EDITIONF(ProxyDOMNode_GetFormControlElementType),\
	EDITIONF(ProxyDOMNode_GetName),\
	EDITIONF(ProxyDOMNode_GetValue),\
	EDITIONF(ProxyDOMNode_SetValue),\
	EDITIONF(ProxyDOMNode_GetAsMarkup),\
	EDITIONF(ProxyDOMNode_GetDocument),\
	EDITIONF(ProxyDOMNode_GetParent),\
	EDITIONF(ProxyDOMNode_GetPreviousSibling),\
	EDITIONF(ProxyDOMNode_GetNextSibling),\
	EDITIONF(ProxyDOMNode_HasChildren),\
	EDITIONF(ProxyDOMNode_GetFirstChild),\
	EDITIONF(ProxyDOMNode_GetLastChild),\
	EDITIONF(ProxyDOMNode_GetElementTagName),\
	EDITIONF(ProxyDOMNode_HasElementAttributes),\
	EDITIONF(ProxyDOMNode_HasElementAttribute),\
	EDITIONF(ProxyDOMNode_GetElementAttribute),\
	EDITIONF(ProxyDOMNode_GetElementAttributes),\
	EDITIONF(ProxyDOMNode_SetElementAttribute),\
	EDITIONF(ProxyDOMNode_GetElementInnerText),\
	EDITIONF(ProxyDOMNode_GetElementBounds),\
	EDITIONF(ProxyDOMNode_SendEvent),\
	EDITIONF(ProxyDOMNode_QuerySelector),\
	EDITIONF(ProxyDOMNode_QuerySelectorAll),\
	EDITIONF(ProxyDOMNode_GetChildCount),\
	EDITIONF(ProxyDOMNode_GetSelector),\


//==========================================

extern "C"
void EDITIONF(ProxyDOMNode_Constructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMNode_Destructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMNode_CopyConstructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMNode_IsValid) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMNode_GetType) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMNode_IsText) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMNode_IsElement) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMNode_IsEditable) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMNode_IsFormControlElement) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMNode_GetFormControlElementType) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMNode_GetName) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMNode_GetValue) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMNode_SetValue) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMNode_GetAsMarkup) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMNode_GetDocument) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMNode_GetParent) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMNode_GetPreviousSibling) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMNode_GetNextSibling) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMNode_HasChildren) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMNode_GetFirstChild) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMNode_GetLastChild) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMNode_GetElementTagName) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMNode_HasElementAttributes) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMNode_HasElementAttribute) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMNode_GetElementAttribute) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMNode_GetElementAttributes) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMNode_SetElementAttribute) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMNode_GetElementInnerText) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMNode_GetElementBounds) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMNode_SendEvent) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMNode_QuerySelector) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMNode_QuerySelectorAll) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMNode_GetChildCount) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyDOMNode_GetSelector) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);


//==========================================

