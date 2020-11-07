#pragma once

#include "stdafx.h"
#include "lib2.h"


#define DECL_DATA_TYPE_ProxyPostDataElement \
	{ /*22*/ \
		/*m_szName*/		 _WT("ˮ���ύԪ��"), \
		/*m_szEgName*/		 _WT("ProxyPostDataElement"), \
		/*m_szExplain*/		 _WT("���ڱ�ʾ Web �����ύ����(PostData)�еĵ���Ԫ�صĵ��ࡣ"), \
		/*m_nCmdCount*/		 12, \
		/*m_pnCmdsIndex*/		 s_nProxyPostDataElementElementCmdIndex, \
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

#define DECL_DATA_TYPE_ProxyPostDataElement_ARGINFO \
	{ /****** ProxyPostDataElement::SetToFile ** 0 **/ \
		/*name*/	 _WT("�ļ���"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyPostDataElement::SetToBytes ** 1 **/ \
		/*name*/	 _WT("�ֽڳ���"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyPostDataElement::SetToBytes ** 2 **/ \
		/*name*/	 _WT("�ֽ�����"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BIN, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyPostDataElement_CMDINFO(BeginIndex) \
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
		/*ccname*/	_WT("�Ƿ�ֻ��"),\
		/*egname*/	_WT("IsReadOnly"), \
		/*explain*/	_WT("���������ֻ���ķ����档"), \
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
		/*ccname*/	_WT("�ÿ�Ԫ��"),\
		/*egname*/	_WT("SetToEmpty"), \
		/*explain*/	_WT("���ύ����Ԫ����ɾ����������"), \
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
		/*ccname*/	_WT("���ļ�"),\
		/*egname*/	_WT("SetToFile"), \
		/*explain*/	_WT("���ô��ύ����Ԫ�ش���Ϊһ���ļ���"), \
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
		/*ccname*/	_WT("���ֽڼ�"),\
		/*egname*/	_WT("SetToBytes"), \
		/*explain*/	_WT("���ô��ύ����Ԫ�ش���Ϊһ���ֽ�����������ֽ����ᱻ���ơ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+1] \
	},\
	{ /*8*/ \
		/*ccname*/	_WT("ȡԪ������"),\
		/*egname*/	_WT("GetType"), \
		/*explain*/	_WT("���ش��ύ����Ԫ�ص����͡�����ֵΪö�ٳ����� #�ύԪ������.* ��"), \
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
	{ /*9*/ \
		/*ccname*/	_WT("ȡ�ļ���"),\
		/*egname*/	_WT("GetFile"), \
		/*explain*/	_WT("���ش��ύԪ�ش�����ļ�����"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_TEXT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+3] \
	},\
	{ /*10*/ \
		/*ccname*/	_WT("ȡ�ֽڳ���"),\
		/*egname*/	_WT("GetBytesCount"), \
		/*explain*/	_WT("���ش��ύԪ�ش�����ֽ������ȡ�"), \
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
		/*ccname*/	_WT("ȡ�ֽڼ�"),\
		/*egname*/	_WT("GetBytes"), \
		/*explain*/	_WT("��ȡ|��ȡ����|���ֽ�������д�뵽�ֽ���������, ����ֵΪʵ��д����ֽ�����"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BIN, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+3] \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyPostDataElement_FUN_NAMES \
	EDITIONS("ProxyPostDataElement_Constructor"),\
	EDITIONS("ProxyPostDataElement_Destructor"),\
	EDITIONS("ProxyPostDataElement_CopyConstructor"),\
	EDITIONS("ProxyPostDataElement_IsValid"),\
	EDITIONS("ProxyPostDataElement_IsReadOnly"),\
	EDITIONS("ProxyPostDataElement_SetToEmpty"),\
	EDITIONS("ProxyPostDataElement_SetToFile"),\
	EDITIONS("ProxyPostDataElement_SetToBytes"),\
	EDITIONS("ProxyPostDataElement_GetType"),\
	EDITIONS("ProxyPostDataElement_GetFile"),\
	EDITIONS("ProxyPostDataElement_GetBytesCount"),\
	EDITIONS("ProxyPostDataElement_GetBytes"),\


//==========================================

#define DECL_DATA_TYPE_ProxyPostDataElement_FUN_CALLS \
	EDITIONF(ProxyPostDataElement_Constructor),\
	EDITIONF(ProxyPostDataElement_Destructor),\
	EDITIONF(ProxyPostDataElement_CopyConstructor),\
	EDITIONF(ProxyPostDataElement_IsValid),\
	EDITIONF(ProxyPostDataElement_IsReadOnly),\
	EDITIONF(ProxyPostDataElement_SetToEmpty),\
	EDITIONF(ProxyPostDataElement_SetToFile),\
	EDITIONF(ProxyPostDataElement_SetToBytes),\
	EDITIONF(ProxyPostDataElement_GetType),\
	EDITIONF(ProxyPostDataElement_GetFile),\
	EDITIONF(ProxyPostDataElement_GetBytesCount),\
	EDITIONF(ProxyPostDataElement_GetBytes),\


//==========================================

extern "C"
void EDITIONF(ProxyPostDataElement_Constructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyPostDataElement_Destructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyPostDataElement_CopyConstructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyPostDataElement_IsValid) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyPostDataElement_IsReadOnly) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyPostDataElement_SetToEmpty) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyPostDataElement_SetToFile) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyPostDataElement_SetToBytes) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyPostDataElement_GetType) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyPostDataElement_GetFile) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyPostDataElement_GetBytesCount) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyPostDataElement_GetBytes) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);


//==========================================

