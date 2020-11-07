#pragma once

#include "stdafx.h"
#include "lib2.h"


#define DECL_DATA_TYPE_ProxyURLRequest \
	{ /*30*/ \
		/*m_szName*/		 _WT("ˮ��URL����"), \
		/*m_szEgName*/		 _WT("ProxyURLRequest"), \
		/*m_szExplain*/		 _WT("��ʾHTTP������ࡣ"), \
		/*m_nCmdCount*/		 12, \
		/*m_pnCmdsIndex*/		 s_nProxyURLRequestElementCmdIndex, \
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

#define DECL_DATA_TYPE_ProxyURLRequest_ARGINFO \


//==========================================

#define DECL_DATA_TYPE_ProxyURLRequest_CMDINFO(BeginIndex) \
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
		/*egname*/	_WT("GetRequest"), \
		/*explain*/	_WT("��ȡ������HTTP����"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(24,0),  /*shrewd_ptr<ProxyRequest>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*5*/ \
		/*ccname*/	_WT("ȡ��Ӧ"),\
		/*egname*/	_WT("GetResponse"), \
		/*explain*/	_WT("��ȡ�յ���HTTP��Ӧ��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(25,0),  /*shrewd_ptr<ProxyResponse>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*6*/ \
		/*ccname*/	_WT("ȡ����״̬"),\
		/*egname*/	_WT("GetRequestStatus"), \
		/*explain*/	_WT("��ȡ���������ִ��״̬������ֵΪö�ٳ���: #����״̬.* ��"), \
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
	{ /*7*/ \
		/*ccname*/	_WT("ȡ�������"),\
		/*egname*/	_WT("GetRequestError"), \
		/*explain*/	_WT("��ȡִ������ʧ��ʱ�Ĵ�����롣"), \
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
	{ /*8*/ \
		/*ccname*/	_WT("�Ƿ�ӻ������"),\
		/*egname*/	_WT("ResponseWasCached"), \
		/*explain*/	_WT("�����Ӧ�����Ǵӻ����ṩ�ķ����档"), \
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
		/*ccname*/	_WT("ȡ��Ӧ���ݳ���"),\
		/*egname*/	_WT("GetResponseDataBytes"), \
		/*explain*/	_WT("��ȡ��Ӧ�����ֽڳ��ȡ�"), \
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
	{ /*10*/ \
		/*ccname*/	_WT("ȡ��Ӧ����"),\
		/*egname*/	_WT("GetResponseData"), \
		/*explain*/	_WT("��ȡ���յ�����Ӧ����   "), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BIN, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*11*/ \
		/*ccname*/	_WT("ȡ�Ự������"),\
		/*egname*/	_WT("GetCookieManager"), \
		/*explain*/	_WT("��ȡ������ʹ�õĻỰƾ֤(Cookie)�������� δ��������ģʽʱ��������ʹ��ȫ�ֵĻỰƾ֤��������"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(10,0),  /*shrewd_ptr<ProxyCookieManager>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyURLRequest_FUN_NAMES \
	EDITIONS("ProxyURLRequest_Constructor"),\
	EDITIONS("ProxyURLRequest_Destructor"),\
	EDITIONS("ProxyURLRequest_CopyConstructor"),\
	EDITIONS("ProxyURLRequest_IsValid"),\
	EDITIONS("ProxyURLRequest_GetRequest"),\
	EDITIONS("ProxyURLRequest_GetResponse"),\
	EDITIONS("ProxyURLRequest_GetRequestStatus"),\
	EDITIONS("ProxyURLRequest_GetRequestError"),\
	EDITIONS("ProxyURLRequest_ResponseWasCached"),\
	EDITIONS("ProxyURLRequest_GetResponseDataBytes"),\
	EDITIONS("ProxyURLRequest_GetResponseData"),\
	EDITIONS("ProxyURLRequest_GetCookieManager"),\


//==========================================

#define DECL_DATA_TYPE_ProxyURLRequest_FUN_CALLS \
	EDITIONF(ProxyURLRequest_Constructor),\
	EDITIONF(ProxyURLRequest_Destructor),\
	EDITIONF(ProxyURLRequest_CopyConstructor),\
	EDITIONF(ProxyURLRequest_IsValid),\
	EDITIONF(ProxyURLRequest_GetRequest),\
	EDITIONF(ProxyURLRequest_GetResponse),\
	EDITIONF(ProxyURLRequest_GetRequestStatus),\
	EDITIONF(ProxyURLRequest_GetRequestError),\
	EDITIONF(ProxyURLRequest_ResponseWasCached),\
	EDITIONF(ProxyURLRequest_GetResponseDataBytes),\
	EDITIONF(ProxyURLRequest_GetResponseData),\
	EDITIONF(ProxyURLRequest_GetCookieManager),\


//==========================================

extern "C"
void EDITIONF(ProxyURLRequest_Constructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyURLRequest_Destructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyURLRequest_CopyConstructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyURLRequest_IsValid) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyURLRequest_GetRequest) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyURLRequest_GetResponse) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyURLRequest_GetRequestStatus) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyURLRequest_GetRequestError) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyURLRequest_ResponseWasCached) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyURLRequest_GetResponseDataBytes) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyURLRequest_GetResponseData) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyURLRequest_GetCookieManager) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);


//==========================================

