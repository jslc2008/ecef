#pragma once

#include "stdafx.h"
#include "lib2.h"


#define DECL_DATA_TYPE_ProxyWebSocket \
	{ /*33*/ \
		/*m_szName*/		 _WT("ˮ����ҳ�׽���"), \
		/*m_szEgName*/		 _WT("ProxyWebSocket"), \
		/*m_szExplain*/		 _WT("��ʾһ��Websocket���ӵ��ࡣ"), \
		/*m_nCmdCount*/		 12, \
		/*m_pnCmdsIndex*/		 s_nProxyWebSocketElementCmdIndex, \
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

#define DECL_DATA_TYPE_ProxyWebSocket_ARGINFO \
	{ /****** ProxyWebSocket::SetProxy ** 0 **/ \
		/*name*/	 _WT("��������Ϣ"), \
		/*explain*/	 _WT("������URI, �����ʽ: http://username:passweord@proxy-server:proxy-port"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyWebSocket::SetUserAgent ** 1 **/ \
		/*name*/	 _WT("�û������ʶ"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyWebSocket::SetHeaderByName ** 2 **/ \
		/*name*/	 _WT("����"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyWebSocket::SetHeaderByName ** 3 **/ \
		/*name*/	 _WT("ֵ"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyWebSocket::AddSubProtocol ** 4 **/ \
		/*name*/	 _WT("Э����"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyWebSocket::Connect ** 5 **/ \
		/*name*/	 _WT("��ַ"), \
		/*explain*/	 _WT("��������ַ"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyWebSocket::Send ** 6 **/ \
		/*name*/	 _WT("������"), \
		/*explain*/	 _WT("���͵����������͡�����ֵΪö�ٳ���: #���ı�������.* ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyWebSocket::Send ** 7 **/ \
		/*name*/	 _WT("������"), \
		/*explain*/	 _WT("�����͵��ֽ�������"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BIN, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyWebSocket::Send ** 8 **/ \
		/*name*/	 _WT("������"), \
		/*explain*/	 _WT("�����ݵ��ֽڳ���"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyWebSocket_CMDINFO(BeginIndex) \
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
		/*ccname*/	_WT("�ô���"),\
		/*egname*/	_WT("SetProxy"), \
		/*explain*/	_WT("���ô����������"), \
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
	{ /*4*/ \
		/*ccname*/	_WT("���û������ʶ"),\
		/*egname*/	_WT("SetUserAgent"), \
		/*explain*/	_WT("�����û������ʶ(user-agent)�ַ�����"), \
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
	{ /*5*/ \
		/*ccname*/	_WT("�ñ�ͷ"),\
		/*egname*/	_WT("SetHeaderByName"), \
		/*explain*/	_WT("����HTTP��ͷ��Ϣ��"), \
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
	{ /*6*/ \
		/*ccname*/	_WT("����Э��"),\
		/*egname*/	_WT("AddSubProtocol"), \
		/*explain*/	_WT("����websocket��Э��(sub-protocol)��"), \
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
	{ /*7*/ \
		/*ccname*/	_WT("����"),\
		/*egname*/	_WT("Connect"), \
		/*explain*/	_WT("���ӵ�websocket-server��"), \
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
	{ /*8*/ \
		/*ccname*/	_WT("����"),\
		/*egname*/	_WT("Send"), \
		/*explain*/	_WT("��������������������"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	3, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+6] \
	},\
	{ /*9*/ \
		/*ccname*/	_WT("�ر�"),\
		/*egname*/	_WT("Close"), \
		/*explain*/	_WT("�ر���websocket-server�����ӡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+9] \
	},\
	{ /*10*/ \
		/*ccname*/	_WT("�����Ƿ���Ч"),\
		/*egname*/	_WT("IsConnected"), \
		/*explain*/	_WT("�������û�б��Ͽ������档"), \
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
	{ /*11*/ \
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
		/*arg lp*/	&s_ArgInfo[BeginIndex+9] \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyWebSocket_FUN_NAMES \
	EDITIONS("ProxyWebSocket_Constructor"),\
	EDITIONS("ProxyWebSocket_Destructor"),\
	EDITIONS("ProxyWebSocket_CopyConstructor"),\
	EDITIONS("ProxyWebSocket_SetProxy"),\
	EDITIONS("ProxyWebSocket_SetUserAgent"),\
	EDITIONS("ProxyWebSocket_SetHeaderByName"),\
	EDITIONS("ProxyWebSocket_AddSubProtocol"),\
	EDITIONS("ProxyWebSocket_Connect"),\
	EDITIONS("ProxyWebSocket_Send"),\
	EDITIONS("ProxyWebSocket_Close"),\
	EDITIONS("ProxyWebSocket_IsConnected"),\
	EDITIONS("ProxyWebSocket_IsValid"),\


//==========================================

#define DECL_DATA_TYPE_ProxyWebSocket_FUN_CALLS \
	EDITIONF(ProxyWebSocket_Constructor),\
	EDITIONF(ProxyWebSocket_Destructor),\
	EDITIONF(ProxyWebSocket_CopyConstructor),\
	EDITIONF(ProxyWebSocket_SetProxy),\
	EDITIONF(ProxyWebSocket_SetUserAgent),\
	EDITIONF(ProxyWebSocket_SetHeaderByName),\
	EDITIONF(ProxyWebSocket_AddSubProtocol),\
	EDITIONF(ProxyWebSocket_Connect),\
	EDITIONF(ProxyWebSocket_Send),\
	EDITIONF(ProxyWebSocket_Close),\
	EDITIONF(ProxyWebSocket_IsConnected),\
	EDITIONF(ProxyWebSocket_IsValid),\


//==========================================

extern "C"
void EDITIONF(ProxyWebSocket_Constructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyWebSocket_Destructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyWebSocket_CopyConstructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyWebSocket_SetProxy) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyWebSocket_SetUserAgent) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyWebSocket_SetHeaderByName) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyWebSocket_AddSubProtocol) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyWebSocket_Connect) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyWebSocket_Send) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyWebSocket_Close) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyWebSocket_IsConnected) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyWebSocket_IsValid) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);


//==========================================

