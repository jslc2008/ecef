#pragma once

#include "stdafx.h"
#include "lib2.h"


#define DECL_DATA_TYPE_ProxyRequest \
	{ /*24*/ \
		/*m_szName*/		 _WT("Chromium����"), \
		/*m_szEgName*/		 _WT("ProxyRequest"), \
		/*m_szExplain*/		 _WT("���ڱ�ʾ Web ������ࡣ"), \
		/*m_nCmdCount*/		 27, \
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
		/*state*/	 NULL\
	},\
	{ /****** ProxyRequest::SetMethod ** 1 **/ \
		/*name*/	 _WT("���󷽷�"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyRequest::SetReferrer ** 2 **/ \
		/*name*/	 _WT("������Դ"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyRequest::SetReferrer ** 3 **/ \
		/*name*/	 _WT("��Դ���ò���"), \
		/*explain*/	 _WT("��Դ���ò���, ����ֵΪö�ٳ���: #��Դ����.*"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyRequest::SetPostData ** 4 **/ \
		/*name*/	 _WT("�ύ����"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(23,0),  /*shrewd_ptr<ProxyPostData>*/ \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyRequest::SetHeaderMap ** 5 **/ \
		/*name*/	 _WT("��ͷ�б�"), \
		/*explain*/	 _WT("(�ַ�������), ʹ��\"#���з�\"�ָ�"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyRequest::GetHeaderByName ** 6 **/ \
		/*name*/	 _WT("��ͷ����"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyRequest::SetHeaderByName ** 7 **/ \
		/*name*/	 _WT("��ͷ����"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyRequest::SetHeaderByName ** 8 **/ \
		/*name*/	 _WT("ֵ"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyRequest::SetHeaderByName ** 9 **/ \
		/*name*/	 _WT("�Ƿ񸲸�"), \
		/*explain*/	 _WT("���Ŀ���ͷ�Ѵ���ֵ,�Ƿ񸲸�д��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyRequest::Set ** 10 **/ \
		/*name*/	 _WT("�����ַ"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyRequest::Set ** 11 **/ \
		/*name*/	 _WT("���󷽷�"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyRequest::Set ** 12 **/ \
		/*name*/	 _WT("�ύ����"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(23,0),  /*shrewd_ptr<ProxyPostData>*/ \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyRequest::Set ** 13 **/ \
		/*name*/	 _WT("��ͷ�б�"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyRequest::SetFlags ** 14 **/ \
		/*name*/	 _WT("flags"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyRequest::SetFirstPartyForCookies ** 15 **/ \
		/*name*/	 _WT("url"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
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
		/*ccname*/	_WT("��������"),\
		/*egname*/	_WT("Create"), \
		/*explain*/	_WT("��������ʵ��, �Ǿ�̬����, ��Ҫ���ô˺�������ܹ���Ч���ʡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(25,0),  /*shrewd_ptr<ProxyRequest>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*5*/ \
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
	{ /*6*/ \
		/*ccname*/	_WT("ȡRUL"),\
		/*egname*/	_WT("GetURL"), \
		/*explain*/	_WT("��ȡ�������URL��"), \
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
	{ /*7*/ \
		/*ccname*/	_WT("����URL"),\
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
	{ /*8*/ \
		/*ccname*/	_WT("ȡ���󷽷�"),\
		/*egname*/	_WT("GetMethod"), \
		/*explain*/	_WT("��ȡ����������󷽷���"), \
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
	{ /*9*/ \
		/*ccname*/	_WT("�������󷽷�"),\
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
	{ /*10*/ \
		/*ccname*/	_WT("������Դ��ַ"),\
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
	{ /*11*/ \
		/*ccname*/	_WT("ȡ��Դ��ַ"),\
		/*egname*/	_WT("GetReferrerURL"), \
		/*explain*/	_WT("��ȡ���������Դ(Referrer)��ַ��"), \
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
	{ /*12*/ \
		/*ccname*/	_WT("ȡ��Դ����"),\
		/*egname*/	_WT("GetReferrerPolicy"), \
		/*explain*/	_WT("��ȡ���������Դ����(ReferrerPolicy)��"), \
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
		/*ccname*/	_WT("ȡ�ύ����"),\
		/*egname*/	_WT("GetPostData"), \
		/*explain*/	_WT("��ȡ��������ύ����(PostData)��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(23,0),  /*shrewd_ptr<ProxyPostData>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+4] \
	},\
	{ /*14*/ \
		/*ccname*/	_WT("�����ύ����"),\
		/*egname*/	_WT("SetPostData"), \
		/*explain*/	_WT("���ø�������ύ����(PostData)��"), \
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
		/*ccname*/	_WT("ȡ��ͷ�б�"),\
		/*egname*/	_WT("GetHeaderMap"), \
		/*explain*/	_WT("��ȡ�������HTTP��ͷ�б�"), \
		/*category*/	-1, \
		/*state*/	CT_RETRUN_ARY_TYPE_DATA, \
		/*ret*/	SDT_TEXT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+5] \
	},\
	{ /*16*/ \
		/*ccname*/	_WT("���ñ�ͷ�б�"),\
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
		/*arg lp*/	&s_ArgInfo[BeginIndex+5] \
	},\
	{ /*17*/ \
		/*ccname*/	_WT("ȡ��ͷ"),\
		/*egname*/	_WT("GetHeaderByName"), \
		/*explain*/	_WT("��ȡָ��HTTP��ͷֵ��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_TEXT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+6] \
	},\
	{ /*18*/ \
		/*ccname*/	_WT("���ñ�ͷ"),\
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
		/*arg lp*/	&s_ArgInfo[BeginIndex+7] \
	},\
	{ /*19*/ \
		/*ccname*/	_WT("����"),\
		/*egname*/	_WT("Set"), \
		/*explain*/	_WT("���ø�����"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	4, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+10] \
	},\
	{ /*20*/ \
		/*ccname*/	_WT("GetFlags"),\
		/*egname*/	_WT("GetFlags"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_INT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+14] \
	},\
	{ /*21*/ \
		/*ccname*/	_WT("SetFlags"),\
		/*egname*/	_WT("SetFlags"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+14] \
	},\
	{ /*22*/ \
		/*ccname*/	_WT("GetFirstPartyForCookies"),\
		/*egname*/	_WT("GetFirstPartyForCookies"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_TEXT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+15] \
	},\
	{ /*23*/ \
		/*ccname*/	_WT("SetFirstPartyForCookies"),\
		/*egname*/	_WT("SetFirstPartyForCookies"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+15] \
	},\
	{ /*24*/ \
		/*ccname*/	_WT("ȡ��Դ����"),\
		/*egname*/	_WT("GetResourceType"), \
		/*explain*/	_WT("��ȡ������Դ����, ����ֵΪö�ٳ���: #��Դ����.*"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_INT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+16] \
	},\
	{ /*25*/ \
		/*ccname*/	_WT("GetTransitionType"),\
		/*egname*/	_WT("GetTransitionType"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_INT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+16] \
	},\
	{ /*26*/ \
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
		/*arg lp*/	&s_ArgInfo[BeginIndex+16] \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyRequest_FUN_NAMES \
	EDITIONS("ProxyRequest_Constructor"),\
	EDITIONS("ProxyRequest_Destructor"),\
	EDITIONS("ProxyRequest_CopyConstructor"),\
	EDITIONS("ProxyRequest_IsValid"),\
	EDITIONS("ProxyRequest_Create"),\
	EDITIONS("ProxyRequest_IsReadOnly"),\
	EDITIONS("ProxyRequest_GetURL"),\
	EDITIONS("ProxyRequest_SetURL"),\
	EDITIONS("ProxyRequest_GetMethod"),\
	EDITIONS("ProxyRequest_SetMethod"),\
	EDITIONS("ProxyRequest_SetReferrer"),\
	EDITIONS("ProxyRequest_GetReferrerURL"),\
	EDITIONS("ProxyRequest_GetReferrerPolicy"),\
	EDITIONS("ProxyRequest_GetPostData"),\
	EDITIONS("ProxyRequest_SetPostData"),\
	EDITIONS("ProxyRequest_GetHeaderMap"),\
	EDITIONS("ProxyRequest_SetHeaderMap"),\
	EDITIONS("ProxyRequest_GetHeaderByName"),\
	EDITIONS("ProxyRequest_SetHeaderByName"),\
	EDITIONS("ProxyRequest_Set"),\
	EDITIONS("ProxyRequest_GetFlags"),\
	EDITIONS("ProxyRequest_SetFlags"),\
	EDITIONS("ProxyRequest_GetFirstPartyForCookies"),\
	EDITIONS("ProxyRequest_SetFirstPartyForCookies"),\
	EDITIONS("ProxyRequest_GetResourceType"),\
	EDITIONS("ProxyRequest_GetTransitionType"),\
	EDITIONS("ProxyRequest_GetIdentifier"),\


//==========================================

#define DECL_DATA_TYPE_ProxyRequest_FUN_CALLS \
	EDITIONF(ProxyRequest_Constructor),\
	EDITIONF(ProxyRequest_Destructor),\
	EDITIONF(ProxyRequest_CopyConstructor),\
	EDITIONF(ProxyRequest_IsValid),\
	EDITIONF(ProxyRequest_Create),\
	EDITIONF(ProxyRequest_IsReadOnly),\
	EDITIONF(ProxyRequest_GetURL),\
	EDITIONF(ProxyRequest_SetURL),\
	EDITIONF(ProxyRequest_GetMethod),\
	EDITIONF(ProxyRequest_SetMethod),\
	EDITIONF(ProxyRequest_SetReferrer),\
	EDITIONF(ProxyRequest_GetReferrerURL),\
	EDITIONF(ProxyRequest_GetReferrerPolicy),\
	EDITIONF(ProxyRequest_GetPostData),\
	EDITIONF(ProxyRequest_SetPostData),\
	EDITIONF(ProxyRequest_GetHeaderMap),\
	EDITIONF(ProxyRequest_SetHeaderMap),\
	EDITIONF(ProxyRequest_GetHeaderByName),\
	EDITIONF(ProxyRequest_SetHeaderByName),\
	EDITIONF(ProxyRequest_Set),\
	EDITIONF(ProxyRequest_GetFlags),\
	EDITIONF(ProxyRequest_SetFlags),\
	EDITIONF(ProxyRequest_GetFirstPartyForCookies),\
	EDITIONF(ProxyRequest_SetFirstPartyForCookies),\
	EDITIONF(ProxyRequest_GetResourceType),\
	EDITIONF(ProxyRequest_GetTransitionType),\
	EDITIONF(ProxyRequest_GetIdentifier),\


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
void EDITIONF(ProxyRequest_Create) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
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
void EDITIONF(ProxyRequest_GetPostData) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_SetPostData) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_GetHeaderMap) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_SetHeaderMap) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_GetHeaderByName) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_SetHeaderByName) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_Set) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_GetFlags) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_SetFlags) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_GetFirstPartyForCookies) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_SetFirstPartyForCookies) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_GetResourceType) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_GetTransitionType) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyRequest_GetIdentifier) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);


//==========================================

