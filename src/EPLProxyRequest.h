#pragma once

#include "stdafx.h"
#include "lib2.h"


#define DECL_DATA_TYPE_ProxyRequest \
	{ /*24*/ \
		/*m_szName*/		 _WT("ˮ������"), \
		/*m_szEgName*/		 _WT("ProxyRequest"), \
		/*m_szExplain*/		 _WT("���ڱ�ʾ Web ������ࡣ"), \
		/*m_nCmdCount*/		 28, \
		/*m_pnCmdsIndex*/		 s_nProxyRequestElementCmdIndex, \
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

#define DECL_DATA_TYPE_ProxyRequest_ARGINFO \
	{ /****** ProxyRequest::SetURL ** 0 **/ \
		/*name*/	 _WT("url"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyRequest::SetMethod ** 1 **/ \
		/*name*/	 _WT("���󷽷�"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyRequest::SetReferrer ** 2 **/ \
		/*name*/	 _WT("������Դ"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyRequest::SetReferrer ** 3 **/ \
		/*name*/	 _WT("��Դ���ò���"), \
		/*explain*/	 _WT("��Դ���ò���, ����ֵΪö�ٳ���: #��Դ����.*"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyRequest::AddPostDataElement ** 4 **/ \
		/*name*/	 _WT("�ύԪ��"), \
		/*explain*/	 _WT("�ύԪ��(Post Data Element)��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(22,0),  /*shrewd_ptr<ProxyPostDataElement>*/ \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyRequest::RemovePostDataElement ** 5 **/ \
		/*name*/	 _WT("�ύԪ��"), \
		/*explain*/	 _WT("�ύԪ��(Post Data Element)��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(22,0),  /*shrewd_ptr<ProxyPostDataElement>*/ \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyRequest::SetHeaderMap ** 6 **/ \
		/*name*/	 _WT("��ͷ�б�"), \
		/*explain*/	 _WT("(�ַ�������), ʹ��\"#���з�\"�ָ�"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyRequest::GetHeaderByName ** 7 **/ \
		/*name*/	 _WT("��ͷ����"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyRequest::SetHeaderByName ** 8 **/ \
		/*name*/	 _WT("��ͷ����"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyRequest::SetHeaderByName ** 9 **/ \
		/*name*/	 _WT("ֵ"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyRequest::SetHeaderByName ** 10 **/ \
		/*name*/	 _WT("�Ƿ񸲸�"), \
		/*explain*/	 _WT("���Ŀ���ͷ�Ѵ���ֵ,�Ƿ񸲸�д��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyRequest::SetFlags ** 11 **/ \
		/*name*/	 _WT("��־ֵ"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyRequest::SetFirstPartyForCookies ** 12 **/ \
		/*name*/	 _WT("url"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyRequest_CMDINFO(BeginIndex) \
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
		/*ccname*/	_WT("�Ƿ�Ϊֻ��"),\
		/*egname*/	_WT("IsReadOnly"), \
		/*explain*/	_WT("�����ǰ�����ֹ��д�����档"), \
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
		/*ccname*/	_WT("ȡURL"),\
		/*egname*/	_WT("GetURL"), \
		/*explain*/	_WT("ȡ�������URL��"), \
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
	{ /*6*/ \
		/*ccname*/	_WT("��URL"),\
		/*egname*/	_WT("SetURL"), \
		/*explain*/	_WT("���ø������URL��"), \
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
	{ /*7*/ \
		/*ccname*/	_WT("ȡ����"),\
		/*egname*/	_WT("GetMethod"), \
		/*explain*/	_WT("ȡ����������󷽷���"), \
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
	{ /*8*/ \
		/*ccname*/	_WT("�÷���"),\
		/*egname*/	_WT("SetMethod"), \
		/*explain*/	_WT("���ø���������󷽷���"), \
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
	{ /*9*/ \
		/*ccname*/	_WT("����Դ"),\
		/*egname*/	_WT("SetReferrer"), \
		/*explain*/	_WT("���ø��������Դ(Referrer)��ַ��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+2] \
	},\
	{ /*10*/ \
		/*ccname*/	_WT("ȡ��Դ"),\
		/*egname*/	_WT("GetReferrerURL"), \
		/*explain*/	_WT("ȡ���������Դ(Referrer)��ַ��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_TEXT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+4] \
	},\
	{ /*11*/ \
		/*ccname*/	_WT("ȡ��Դ����"),\
		/*egname*/	_WT("GetReferrerPolicy"), \
		/*explain*/	_WT("ȡ���������Դ����(ReferrerPolicy)��"), \
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
	{ /*12*/ \
		/*ccname*/	_WT("ȡ�ύԪ������"),\
		/*egname*/	_WT("GetPostDataElementCount"), \
		/*explain*/	_WT("��������������ύԪ��(Post Data Element)������"), \
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
		/*ccname*/	_WT("ȡ�����ύԪ��"),\
		/*egname*/	_WT("GetPostDataElements"), \
		/*explain*/	_WT("������������������ύԪ��(Post Data Element)��"), \
		/*category*/	-1, \
		/*state*/	CT_RETRUN_ARY_TYPE_DATA, \
		/*ret*/	MAKELONG(22,0),  /*shrewd_ptr<ProxyPostDataElement>***/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+4] \
	},\
	{ /*14*/ \
		/*ccname*/	_WT("����ύԪ��"),\
		/*egname*/	_WT("AddPostDataElement"), \
		/*explain*/	_WT("���һ���ύԪ��(Post Data Element)�������С�"), \
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
	{ /*15*/ \
		/*ccname*/	_WT("�Ƴ��ύԪ��"),\
		/*egname*/	_WT("RemovePostDataElement"), \
		/*explain*/	_WT("���������Ƴ�һ���ύԪ��(Post Data Element)��"), \
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
		/*ccname*/	_WT("����ύԪ��"),\
		/*egname*/	_WT("ClearPostDataElements"), \
		/*explain*/	_WT("���������е������ύԪ��(Post Data Element)�����"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+6] \
	},\
	{ /*17*/ \
		/*ccname*/	_WT("ȡ��ͷ�б�"),\
		/*egname*/	_WT("GetHeaderMap"), \
		/*explain*/	_WT("ȡ�������HTTP��ͷ�б�"), \
		/*category*/	-1, \
		/*state*/	CT_RETRUN_ARY_TYPE_DATA, \
		/*ret*/	SDT_TEXT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+6] \
	},\
	{ /*18*/ \
		/*ccname*/	_WT("�ñ�ͷ�б�"),\
		/*egname*/	_WT("SetHeaderMap"), \
		/*explain*/	_WT("���ø������HTTP��ͷ��"), \
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
	{ /*19*/ \
		/*ccname*/	_WT("ȡ��ͷ"),\
		/*egname*/	_WT("GetHeaderByName"), \
		/*explain*/	_WT("ȡָ��HTTP��ͷֵ��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_TEXT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+7] \
	},\
	{ /*20*/ \
		/*ccname*/	_WT("�ñ�ͷ"),\
		/*egname*/	_WT("SetHeaderByName"), \
		/*explain*/	_WT("����ָ��HTTP��ͷֵ��"), \
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
	{ /*21*/ \
		/*ccname*/	_WT("ȡ��Դ����"),\
		/*egname*/	_WT("GetResourceType"), \
		/*explain*/	_WT("ȡ������Դ����, ����ֵΪö�ٳ���: #��Դ����.*"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_INT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+11] \
	},\
	{ /*22*/ \
		/*ccname*/	_WT("ȡ��ʶ��"),\
		/*egname*/	_WT("GetIdentifier"), \
		/*explain*/	_WT("���ش�����ı�ʶ����"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_INT64, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+11] \
	},\
	{ /*23*/ \
		/*ccname*/	_WT("ȡ��־ֵ"),\
		/*egname*/	_WT("GetFlags"), \
		/*explain*/	_WT("��ȡ�� URL������ʹ�õı�־������ ����ֵΪö�ٳ���: #�����־.* ��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_INT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+11] \
	},\
	{ /*24*/ \
		/*ccname*/	_WT("�ñ�־ֵ"),\
		/*egname*/	_WT("SetFlags"), \
		/*explain*/	_WT("������ URL������ʹ�õı�־������ ����ֵΪö�ٳ���: #�����־.* , �����־ֵ����ʹ��λ����ӡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+11] \
	},\
	{ /*25*/ \
		/*ccname*/	_WT("ȡ��Ҫ����URL"),\
		/*egname*/	_WT("GetFirstPartyForCookies"), \
		/*explain*/	_WT("��ȡ�� URL������ʹ�õ�cookie��URL��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_TEXT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+12] \
	},\
	{ /*26*/ \
		/*ccname*/	_WT("����Ҫ����URL"),\
		/*egname*/	_WT("SetFirstPartyForCookies"), \
		/*explain*/	_WT("������ URL������ʹ�õ�cookie��URL��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+12] \
	},\
	{ /*27*/ \
		/*ccname*/	_WT("ȡ��������"),\
		/*egname*/	_WT("GetTransitionType"), \
		/*explain*/	_WT("��ȡ����Ĵ������͡���һ��Դֵ��0�������޶�����ɡ��μ�ö�ٳ���: #����������.* ��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_INT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+13] \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyRequest_FUN_NAMES \
	EDITIONS("ProxyRequest_Constructor"),\
	EDITIONS("ProxyRequest_Destructor"),\
	EDITIONS("ProxyRequest_CopyConstructor"),\
	EDITIONS("ProxyRequest_IsValid"),\
	EDITIONS("ProxyRequest_IsReadOnly"),\
	EDITIONS("ProxyRequest_GetURL"),\
	EDITIONS("ProxyRequest_SetURL"),\
	EDITIONS("ProxyRequest_GetMethod"),\
	EDITIONS("ProxyRequest_SetMethod"),\
	EDITIONS("ProxyRequest_SetReferrer"),\
	EDITIONS("ProxyRequest_GetReferrerURL"),\
	EDITIONS("ProxyRequest_GetReferrerPolicy"),\
	EDITIONS("ProxyRequest_GetPostDataElementCount"),\
	EDITIONS("ProxyRequest_GetPostDataElements"),\
	EDITIONS("ProxyRequest_AddPostDataElement"),\
	EDITIONS("ProxyRequest_RemovePostDataElement"),\
	EDITIONS("ProxyRequest_ClearPostDataElements"),\
	EDITIONS("ProxyRequest_GetHeaderMap"),\
	EDITIONS("ProxyRequest_SetHeaderMap"),\
	EDITIONS("ProxyRequest_GetHeaderByName"),\
	EDITIONS("ProxyRequest_SetHeaderByName"),\
	EDITIONS("ProxyRequest_GetResourceType"),\
	EDITIONS("ProxyRequest_GetIdentifier"),\
	EDITIONS("ProxyRequest_GetFlags"),\
	EDITIONS("ProxyRequest_SetFlags"),\
	EDITIONS("ProxyRequest_GetFirstPartyForCookies"),\
	EDITIONS("ProxyRequest_SetFirstPartyForCookies"),\
	EDITIONS("ProxyRequest_GetTransitionType"),\


//==========================================

#define DECL_DATA_TYPE_ProxyRequest_FUN_CALLS \
	EDITIONF(ProxyRequest_Constructor),\
	EDITIONF(ProxyRequest_Destructor),\
	EDITIONF(ProxyRequest_CopyConstructor),\
	EDITIONF(ProxyRequest_IsValid),\
	EDITIONF(ProxyRequest_IsReadOnly),\
	EDITIONF(ProxyRequest_GetURL),\
	EDITIONF(ProxyRequest_SetURL),\
	EDITIONF(ProxyRequest_GetMethod),\
	EDITIONF(ProxyRequest_SetMethod),\
	EDITIONF(ProxyRequest_SetReferrer),\
	EDITIONF(ProxyRequest_GetReferrerURL),\
	EDITIONF(ProxyRequest_GetReferrerPolicy),\
	EDITIONF(ProxyRequest_GetPostDataElementCount),\
	EDITIONF(ProxyRequest_GetPostDataElements),\
	EDITIONF(ProxyRequest_AddPostDataElement),\
	EDITIONF(ProxyRequest_RemovePostDataElement),\
	EDITIONF(ProxyRequest_ClearPostDataElements),\
	EDITIONF(ProxyRequest_GetHeaderMap),\
	EDITIONF(ProxyRequest_SetHeaderMap),\
	EDITIONF(ProxyRequest_GetHeaderByName),\
	EDITIONF(ProxyRequest_SetHeaderByName),\
	EDITIONF(ProxyRequest_GetResourceType),\
	EDITIONF(ProxyRequest_GetIdentifier),\
	EDITIONF(ProxyRequest_GetFlags),\
	EDITIONF(ProxyRequest_SetFlags),\
	EDITIONF(ProxyRequest_GetFirstPartyForCookies),\
	EDITIONF(ProxyRequest_SetFirstPartyForCookies),\
	EDITIONF(ProxyRequest_GetTransitionType),\


//==========================================

extern "C"
void EDITIONF(ProxyRequest_Constructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_Destructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_CopyConstructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_IsValid) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_IsReadOnly) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_GetURL) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_SetURL) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_GetMethod) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_SetMethod) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_SetReferrer) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_GetReferrerURL) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_GetReferrerPolicy) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_GetPostDataElementCount) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_GetPostDataElements) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_AddPostDataElement) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_RemovePostDataElement) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_ClearPostDataElements) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_GetHeaderMap) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_SetHeaderMap) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_GetHeaderByName) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_SetHeaderByName) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_GetResourceType) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_GetIdentifier) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_GetFlags) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_SetFlags) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_GetFirstPartyForCookies) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_SetFirstPartyForCookies) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_GetTransitionType) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);


//==========================================

