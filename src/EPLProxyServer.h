#pragma once

#include "stdafx.h"
#include "lib2.h"


#define DECL_DATA_TYPE_ProxyServer \
	{ /*28*/ \
		/*m_szName*/		 _WT("ˮ�Ƿ�����"), \
		/*m_szEgName*/		 _WT("ProxyServer"), \
		/*m_szExplain*/		 _WT("��ʾ֧��HTTP/Websocket-Server�˵��ࡣ��������������, ����ֻ�ܴ���������ͬʱ���ӡ�"), \
		/*m_nCmdCount*/		 15, \
		/*m_pnCmdsIndex*/		 s_nProxyServerElementCmdIndex, \
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

#define DECL_DATA_TYPE_ProxyServer_ARGINFO \
	{ /****** ProxyServer::IsValidConnection ** 0 **/ \
		/*name*/	 _WT("�ͻ�ID"), \
		/*explain*/	 _WT("��ʾ�ͻ����ӵ�ID"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyServer::SendHttp200Response ** 1 **/ \
		/*name*/	 _WT("�ͻ�ID"), \
		/*explain*/	 _WT("��ʾ�ͻ����ӵ�ID"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyServer::SendHttp200Response ** 2 **/ \
		/*name*/	 _WT("��������"), \
		/*explain*/	 _WT("��ʾ��Ӧ���ݵ�����, ��Ϊ��ͷ: Content-Type ʹ��, ����: text/html"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyServer::SendHttp200Response ** 3 **/ \
		/*name*/	 _WT("��Ӧ����"), \
		/*explain*/	 _WT("������ӦЯ������������"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BIN, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyServer::SendHttp200Response ** 4 **/ \
		/*name*/	 _WT("���ݳ���"), \
		/*explain*/	 _WT("��Ӧ���ݵ��ֽڳ��ȡ�"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyServer::SendHttp404Response ** 5 **/ \
		/*name*/	 _WT("�ͻ�ID"), \
		/*explain*/	 _WT("��ʾ�ͻ����ӵ�ID"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyServer::SendHttp500Response ** 6 **/ \
		/*name*/	 _WT("�ͻ�ID"), \
		/*explain*/	 _WT("��ʾ�ͻ����ӵ�ID"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyServer::SendHttp500Response ** 7 **/ \
		/*name*/	 _WT("������Ϣ"), \
		/*explain*/	 _WT("��صĴ�����Ϣ"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyServer::SendHttpResponse ** 8 **/ \
		/*name*/	 _WT("�ͻ�ID"), \
		/*explain*/	 _WT("��ʾ�ͻ����ӵ�ID"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyServer::SendHttpResponse ** 9 **/ \
		/*name*/	 _WT("��Ӧ״̬��"), \
		/*explain*/	 _WT("״̬��, ����: 200"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyServer::SendHttpResponse ** 10 **/ \
		/*name*/	 _WT("��������"), \
		/*explain*/	 _WT("��ʾ��Ӧ���ݵ�����, ��Ϊ��ͷ: Content-Type ʹ��, ����: text/html"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyServer::SendHttpResponse ** 11 **/ \
		/*name*/	 _WT("���ݳ���"), \
		/*explain*/	 _WT("��Ӧ�����ֽڳ���"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT64, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyServer::SendHttpResponse ** 12 **/ \
		/*name*/	 _WT("���ӱ�ͷ"), \
		/*explain*/	 _WT("���ö���ı�ͷ��Ϣ"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 AS_DEFAULT_VALUE_IS_EMPTY \
	},\
	{ /****** ProxyServer::SendRawData ** 13 **/ \
		/*name*/	 _WT("�ͻ�ID"), \
		/*explain*/	 _WT("��ʾ�ͻ����ӵ�ID"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyServer::SendRawData ** 14 **/ \
		/*name*/	 _WT("��������"), \
		/*explain*/	 _WT("�����͵��ֽ������ݡ�"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BIN, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyServer::SendRawData ** 15 **/ \
		/*name*/	 _WT("���ͳ���"), \
		/*explain*/	 _WT("ָʾ���ݵ��ֽڳ���"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyServer::CloseConnection ** 16 **/ \
		/*name*/	 _WT("�ͻ�ID"), \
		/*explain*/	 _WT("��ʾ�ͻ����ӵ�ID"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyServer::SendWebSocketMessage ** 17 **/ \
		/*name*/	 _WT("�ͻ�ID"), \
		/*explain*/	 _WT("��ʾ�ͻ����ӵ�ID"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyServer::SendWebSocketMessage ** 18 **/ \
		/*name*/	 _WT("��������"), \
		/*explain*/	 _WT("�����͵��ֽ������ݡ�"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BIN, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyServer::SendWebSocketMessage ** 19 **/ \
		/*name*/	 _WT("���ͳ���"), \
		/*explain*/	 _WT("ָʾ���ݵ��ֽڳ���"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyServer_CMDINFO(BeginIndex) \
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
		/*ccname*/	_WT("ֹͣ����"),\
		/*egname*/	_WT("Shutdown"), \
		/*explain*/	_WT("ֹͣ�����������в��ر�ר���̡߳�"), \
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
	{ /*4*/ \
		/*ccname*/	_WT("�Ƿ���������"),\
		/*egname*/	_WT("IsRunning"), \
		/*explain*/	_WT("�����������ǰ�������в��ҽ��ܿͻ����뷵���档"), \
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
		/*ccname*/	_WT("ȡ��ַ"),\
		/*egname*/	_WT("GetAddress"), \
		/*explain*/	_WT("��ȡ��������ַ, �����˿ںš�"), \
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
		/*ccname*/	_WT("�Ƿ�������"),\
		/*egname*/	_WT("HasConnection"), \
		/*explain*/	_WT("�����������ǰӵ�����ӷ����档"), \
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
		/*ccname*/	_WT("�Ƿ��пͻ�"),\
		/*egname*/	_WT("IsValidConnection"), \
		/*explain*/	_WT("���ָ���ͻ�������Ч�����档"), \
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
	{ /*8*/ \
		/*ccname*/	_WT("����200��Ӧ"),\
		/*egname*/	_WT("SendHttp200Response"), \
		/*explain*/	_WT("����HTTP 200 \"OK\"��Ӧ��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	4, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+1] \
	},\
	{ /*9*/ \
		/*ccname*/	_WT("����404��Ӧ"),\
		/*egname*/	_WT("SendHttp404Response"), \
		/*explain*/	_WT("����HTTP 404 \"Not Found\"��Ӧ�����ӽ��ڴ˺�رա�"), \
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
	{ /*10*/ \
		/*ccname*/	_WT("����500��Ӧ"),\
		/*egname*/	_WT("SendHttp500Response"), \
		/*explain*/	_WT("����HTTP 500 \"Internal Server Error\"��Ӧ�����ӽ��ڴ˺�رա�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+6] \
	},\
	{ /*11*/ \
		/*ccname*/	_WT("�����Զ�����Ӧ"),\
		/*egname*/	_WT("SendHttpResponse"), \
		/*explain*/	_WT("�����Զ����HTTP��Ӧ���ڴ���Ӧ���ͺ����ӽ��رա�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	5, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+8] \
	},\
	{ /*12*/ \
		/*ccname*/	_WT("����ԭʼ����"),\
		/*egname*/	_WT("SendRawData"), \
		/*explain*/	_WT("��ָ���ֽ������ݷ��͵��ͻ����ӡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	3, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+13] \
	},\
	{ /*13*/ \
		/*ccname*/	_WT("�ر�����"),\
		/*egname*/	_WT("CloseConnection"), \
		/*explain*/	_WT("�ر�ָ���ͻ����ӡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+16] \
	},\
	{ /*14*/ \
		/*ccname*/	_WT("�����׽�����Ϣ"),\
		/*egname*/	_WT("SendWebSocketMessage"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	3, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+17] \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyServer_FUN_NAMES \
	EDITIONS("ProxyServer_Constructor"),\
	EDITIONS("ProxyServer_Destructor"),\
	EDITIONS("ProxyServer_CopyConstructor"),\
	EDITIONS("ProxyServer_Shutdown"),\
	EDITIONS("ProxyServer_IsRunning"),\
	EDITIONS("ProxyServer_GetAddress"),\
	EDITIONS("ProxyServer_HasConnection"),\
	EDITIONS("ProxyServer_IsValidConnection"),\
	EDITIONS("ProxyServer_SendHttp200Response"),\
	EDITIONS("ProxyServer_SendHttp404Response"),\
	EDITIONS("ProxyServer_SendHttp500Response"),\
	EDITIONS("ProxyServer_SendHttpResponse"),\
	EDITIONS("ProxyServer_SendRawData"),\
	EDITIONS("ProxyServer_CloseConnection"),\
	EDITIONS("ProxyServer_SendWebSocketMessage"),\


//==========================================

#define DECL_DATA_TYPE_ProxyServer_FUN_CALLS \
	EDITIONF(ProxyServer_Constructor),\
	EDITIONF(ProxyServer_Destructor),\
	EDITIONF(ProxyServer_CopyConstructor),\
	EDITIONF(ProxyServer_Shutdown),\
	EDITIONF(ProxyServer_IsRunning),\
	EDITIONF(ProxyServer_GetAddress),\
	EDITIONF(ProxyServer_HasConnection),\
	EDITIONF(ProxyServer_IsValidConnection),\
	EDITIONF(ProxyServer_SendHttp200Response),\
	EDITIONF(ProxyServer_SendHttp404Response),\
	EDITIONF(ProxyServer_SendHttp500Response),\
	EDITIONF(ProxyServer_SendHttpResponse),\
	EDITIONF(ProxyServer_SendRawData),\
	EDITIONF(ProxyServer_CloseConnection),\
	EDITIONF(ProxyServer_SendWebSocketMessage),\


//==========================================

extern "C"
void EDITIONF(ProxyServer_Constructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyServer_Destructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyServer_CopyConstructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyServer_Shutdown) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyServer_IsRunning) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyServer_GetAddress) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyServer_HasConnection) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyServer_IsValidConnection) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyServer_SendHttp200Response) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyServer_SendHttp404Response) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyServer_SendHttp500Response) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyServer_SendHttpResponse) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyServer_SendRawData) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyServer_CloseConnection) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyServer_SendWebSocketMessage) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);


//==========================================

