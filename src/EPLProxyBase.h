#pragma once

#include "stdafx.h"
#include "lib2.h"


#define DECL_DATA_TYPE_ProxyBase \
	{ /*3*/ \
		/*m_szName*/		 _WT("��̬����"), \
		/*m_szEgName*/		 _WT("ProxyBase"), \
		/*m_szExplain*/		 _WT("������ȫ�ֵľ�̬�������ϡ�"), \
		/*m_nCmdCount*/		 34, \
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
	{ /****** ProxyBase::Initialize ** 0 **/ \
		/*name*/	 _WT("��ʼ������"), \
		/*explain*/	 _WT("ȫ�ֳ�ʼ�����ò�����"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(29,0),  /*shrewd_ptr<ProxySettings>*/ \
		/*default*/	 0,\
		/*state*/	 AS_DEFAULT_VALUE_IS_EMPTY \
	},\
	{ /****** ProxyBase::Initialize ** 1 **/ \
		/*name*/	 _WT("����"), \
		/*explain*/	 _WT("������Ϊ0."), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 AS_DEFAULT_VALUE_IS_EMPTY \
	},\
	{ /****** ProxyBase::Base64Encode ** 2 **/ \
		/*name*/	 _WT("�����������"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BIN, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBase::Base64Encode ** 3 **/ \
		/*name*/	 _WT("���ݳ���"), \
		/*explain*/	 _WT("����������ݵ��ֽڳ���"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBase::Base64Decode ** 4 **/ \
		/*name*/	 _WT("�����ַ���"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBase::UriEncode ** 5 **/ \
		/*name*/	 _WT("ת����ַ���"), \
		/*explain*/	 _WT("ִ��URIת����ַ�����"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBase::UriEncode ** 6 **/ \
		/*name*/	 _WT("�ո�ת��Ϊ�Ӻ�"), \
		/*explain*/	 _WT("�������Ϊ��, ��ʹ��\"+\"ת��ո����"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBase::UriDecode ** 7 **/ \
		/*name*/	 _WT("��������ַ���"), \
		/*explain*/	 _WT("�������URIת���ַ���"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBase::UriDecode ** 8 **/ \
		/*name*/	 _WT("ת����UTF8"), \
		/*explain*/	 _WT("�Ƿ�ת���ַ���ԭΪUTF8�ַ�"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBase::UriDecode ** 9 **/ \
		/*name*/	 _WT("ת�����"), \
		/*explain*/	 _WT("ת���ַ��Ľ������, �����ö�ٳ�������ֵ: #ת�����.* , ʹ��λ��ɵ��Ӷ����־ֵ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBase::Utf8ToBytes ** 10 **/ \
		/*name*/	 _WT("��������ַ���"), \
		/*explain*/	 _WT("��������ַ���"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BIN, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBase::Utf8ToBytes ** 11 **/ \
		/*name*/	 _WT("�ֽڳ���"), \
		/*explain*/	 _WT("�������ַ������ֽڳ���"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBase::BytesToUtf8 ** 12 **/ \
		/*name*/	 _WT("��������ַ���"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBase::CreateListValue ** 13 **/ \
		/*name*/	 _WT("��ʼ��ֵ"), \
		/*explain*/	 _WT("��ʼ��ֵ, ����Ϊ������������ֵ: #�߼��͡�#�ֽ��͡�#�������͡������͡�С���͡�#˫����С���͡�#�ı��͡�#�ֽڼ��Լ�֧�ֿ����ֵ��װ����: #ˮ��ͨ���͡�#ˮ���б��͡�#ˮ���ֵ���"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 _SDT_ALL, \
		/*default*/	 0,\
		/*state*/	 AS_DEFAULT_VALUE_IS_EMPTY \
	},\
	{ /****** ProxyBase::CreatePostDataElementWithFile ** 14 **/ \
		/*name*/	 _WT("�ļ���"), \
		/*explain*/	 _WT("�����ύ���ļ�����"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBase::CreatePostDataElementWithData ** 15 **/ \
		/*name*/	 _WT("�ֽڼ�����"), \
		/*explain*/	 _WT("�����ύ���ֽڼ�����"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BIN, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBase::CreateRequest ** 16 **/ \
		/*name*/	 _WT("����"), \
		/*explain*/	 _WT("����(Request)�ķ���, GET / POST / PUT ..."), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 AS_DEFAULT_VALUE_IS_EMPTY \
	},\
	{ /****** ProxyBase::CreateRequest ** 17 **/ \
		/*name*/	 _WT("url"), \
		/*explain*/	 _WT("�����ַ"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 AS_DEFAULT_VALUE_IS_EMPTY \
	},\
	{ /****** ProxyBase::CreateRequest ** 18 **/ \
		/*name*/	 _WT("��Դ��ַ"), \
		/*explain*/	 _WT("������Դ(referrer)��Ϣ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 AS_DEFAULT_VALUE_IS_EMPTY \
	},\
	{ /****** ProxyBase::CreateRequest ** 19 **/ \
		/*name*/	 _WT("��ͷ�ַ���"), \
		/*explain*/	 _WT("���ñ�ͷ��Ϣ��HTTP Header��׼��ʽ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 AS_DEFAULT_VALUE_IS_EMPTY \
	},\
	{ /****** ProxyBase::CreateRequest ** 20 **/ \
		/*name*/	 _WT("�ύ����"), \
		/*explain*/	 _WT("���ý�Ҫ�ύ������"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(22,0),  /*shrewd_ptr<ProxyPostDataElement>*/ \
		/*default*/	 0,\
		/*state*/	 AS_DEFAULT_VALUE_IS_EMPTY \
	},\
	{ /****** ProxyBase::CreateValue ** 21 **/ \
		/*name*/	 _WT("��ʼ��ֵ"), \
		/*explain*/	 _WT("��ʼ��ֵ, ����Ϊ������������ֵ: #�߼��͡�#�ֽ��͡�#�������͡������͡�С���͡�#˫����С���͡�#�ı��͡�#�ֽڼ��Լ�֧�ֿ����ֵ��װ����: #ˮ��ͨ���͡�#ˮ���б��͡�#ˮ���ֵ���"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 _SDT_ALL, \
		/*default*/	 0,\
		/*state*/	 AS_DEFAULT_VALUE_IS_EMPTY \
	},\
	{ /****** ProxyBase::CreateAsChildWindow ** 22 **/ \
		/*name*/	 _WT("������"), \
		/*explain*/	 _WT("������"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBase::CreateAsChildWindow ** 23 **/ \
		/*name*/	 _WT("x"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBase::CreateAsChildWindow ** 24 **/ \
		/*name*/	 _WT("y"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBase::CreateAsChildWindow ** 25 **/ \
		/*name*/	 _WT("���"), \
		/*explain*/	 _WT("���ڿ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBase::CreateAsChildWindow ** 26 **/ \
		/*name*/	 _WT("�߶�"), \
		/*explain*/	 _WT("���ڸ߶�"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBase::CreateAsPopupWindow ** 27 **/ \
		/*name*/	 _WT("������"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBase::CreateAsPopupWindow ** 28 **/ \
		/*name*/	 _WT("����"), \
		/*explain*/	 _WT("���ڱ���"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBase::SendURLRequest ** 29 **/ \
		/*name*/	 _WT("����"), \
		/*explain*/	 _WT("��������"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(24,0),  /*shrewd_ptr<ProxyRequest>*/ \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBase::SendURLRequest ** 30 **/ \
		/*name*/	 _WT("����ģʽ"), \
		/*explain*/	 _WT("�Ƿ�ʹ������ģʽ, �������Ϊ�������ʹ�ö����ĻỰ����, ����ʹ��ȫ�ֵĻỰ������"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 AS_DEFAULT_VALUE_IS_EMPTY \
	},\
	{ /****** ProxyBase::SendURLRequest ** 31 **/ \
		/*name*/	 _WT("��֤�û���"), \
		/*explain*/	 _WT("�ṩ�����֤�����ƾ����Ϣ, ����еĻ���"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 AS_DEFAULT_VALUE_IS_EMPTY \
	},\
	{ /****** ProxyBase::SendURLRequest ** 32 **/ \
		/*name*/	 _WT("��֤����"), \
		/*explain*/	 _WT("�ṩ�����֤�����ƾ����Ϣ, ����еĻ���"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 AS_DEFAULT_VALUE_IS_EMPTY \
	},\
	{ /****** ProxyBase::CreateServer ** 33 **/ \
		/*name*/	 _WT("������ַ"), \
		/*explain*/	 _WT("���÷����������ĵ�ַ, ����Ϊ��Ч�� IPv4 �� IPv6��ַ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBase::CreateServer ** 34 **/ \
		/*name*/	 _WT("�˿ں�"), \
		/*explain*/	 _WT("0-65535"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBase::CreateServer ** 35 **/ \
		/*name*/	 _WT("������"), \
		/*explain*/	 _WT("��������������"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBase::Awaking ** 36 **/ \
		/*name*/	 _WT("�ȴ��¼�"), \
		/*explain*/	 _WT("�ȴ����¼�"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(32,0),  /*shrewd_ptr<ProxyWaitableEvent>*/ \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBase::TimedAwaking ** 37 **/ \
		/*name*/	 _WT("�ȴ��¼�"), \
		/*explain*/	 _WT("�ȴ����¼�"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(32,0),  /*shrewd_ptr<ProxyWaitableEvent>*/ \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBase::TimedAwaking ** 38 **/ \
		/*name*/	 _WT("��ʱʱ��"), \
		/*explain*/	 _WT("�ȴ��ĳ�ʱʱ��, ��λ: ����"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_FLOAT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBase::CreateCollection ** 39 **/ \
		/*name*/	 _WT("ʹ��ȫ�ֻ���"), \
		/*explain*/	 _WT("�Ƿ�ʹ��ȫ�ֵĻ��������Լ�cookies��������ʹ��ȫ�ֻ��潫�����־û������������cookies���ݡ�"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyBase_CMDINFO(BeginIndex) \
	{ /*3*/ \
		/*ccname*/	_WT("���̳�ʼ��"),\
		/*egname*/	_WT("Initialize"), \
		/*explain*/	_WT("�˺���Ӧ���ڳ�������λ�õ���, ��Ӧ���������������ִ��, ִ�д˺����Գ�ʼ��Chromium��������̡���ʼ���ɹ�������, ʧ�ܷ��ؼ١�"), \
		/*category*/	1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*4*/ \
		/*ccname*/	_WT("BASE64����"),\
		/*egname*/	_WT("Base64Encode"), \
		/*explain*/	_WT("���ֽڼ����ݱ���ΪBase64�ַ�����"), \
		/*category*/	1, \
		/*state*/	NULL, \
		/*ret*/	SDT_TEXT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+2] \
	},\
	{ /*5*/ \
		/*ccname*/	_WT("BASE64����"),\
		/*egname*/	_WT("Base64Decode"), \
		/*explain*/	_WT("��Base64�ַ�������Ϊ�ֽڼ�����"), \
		/*category*/	1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BIN, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+4] \
	},\
	{ /*6*/ \
		/*ccname*/	_WT("URI����"),\
		/*egname*/	_WT("UriEncode"), \
		/*explain*/	_WT("��ָ�����ַ���ִ��URI�ַ�ת�塣"), \
		/*category*/	1, \
		/*state*/	NULL, \
		/*ret*/	SDT_TEXT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+5] \
	},\
	{ /*7*/ \
		/*ccname*/	_WT("URI����"),\
		/*egname*/	_WT("UriDecode"), \
		/*explain*/	_WT("��ԭָ���ַ����е�URIת���ַ���"), \
		/*category*/	1, \
		/*state*/	NULL, \
		/*ret*/	SDT_TEXT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	3, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+7] \
	},\
	{ /*8*/ \
		/*ccname*/	_WT("UTF8����"),\
		/*egname*/	_WT("Utf8ToBytes"), \
		/*explain*/	_WT("��UTF-8�����ַ�������Ϊ���ֽڱ����ַ�����"), \
		/*category*/	1, \
		/*state*/	NULL, \
		/*ret*/	SDT_TEXT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+10] \
	},\
	{ /*9*/ \
		/*ccname*/	_WT("UTF8����"),\
		/*egname*/	_WT("BytesToUtf8"), \
		/*explain*/	_WT("�����ֽڱ����ַ�������ΪUTF-8�����ַ�����"), \
		/*category*/	1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BIN, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+12] \
	},\
	{ /*10*/ \
		/*ccname*/	_WT("�������������"),\
		/*egname*/	_WT("CreateBrowserSettings"), \
		/*explain*/	_WT("����������һ���µ��������������ʵ������"), \
		/*category*/	1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(5,0),  /*shrewd_ptr<ProxyBrowserSettings>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+13] \
	},\
	{ /*11*/ \
		/*ccname*/	_WT("����������"),\
		/*egname*/	_WT("CreateCommandLine"), \
		/*explain*/	_WT("����������һ���µ�����������ʵ������"), \
		/*category*/	1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(7,0),  /*shrewd_ptr<ProxyCommandLine>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+13] \
	},\
	{ /*12*/ \
		/*ccname*/	_WT("ȡȫ��������"),\
		/*egname*/	_WT("GetGlobalCommandLine"), \
		/*explain*/	_WT("��ȫ�ֻ�ȡ����������ʵ������"), \
		/*category*/	1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(7,0),  /*shrewd_ptr<ProxyCommandLine>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+13] \
	},\
	{ /*13*/ \
		/*ccname*/	_WT("ȡȫ�ֻỰƾ֤������"),\
		/*egname*/	_WT("GetGlobalCookieManager"), \
		/*explain*/	_WT("��ȫ�ֻ�ȡ�Ựƾ֤����������ʵ������"), \
		/*category*/	1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(10,0),  /*shrewd_ptr<ProxyCookieManager>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+13] \
	},\
	{ /*14*/ \
		/*ccname*/	_WT("�����ֵ�ֵ"),\
		/*egname*/	_WT("CreateDictionartyValue"), \
		/*explain*/	_WT("����������һ���µ��ֵ�����ʵ������"), \
		/*category*/	1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(11,0),  /*shrewd_ptr<ProxyDictionaryValue>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+13] \
	},\
	{ /*15*/ \
		/*ccname*/	_WT("�����б�ֵ"),\
		/*egname*/	_WT("CreateListValue"), \
		/*explain*/	_WT("����������һ���µ��б�����ʵ������"), \
		/*category*/	1, \
		/*state*/	 CT_ALLOW_APPEND_NEW_ARG, \
		/*ret*/	MAKELONG(20,0),  /*shrewd_ptr<ProxyListValue>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+13] \
	},\
	{ /*16*/ \
		/*ccname*/	_WT("�����ύԪ��"),\
		/*egname*/	_WT("CreatePostDataElement"), \
		/*explain*/	_WT("����һ���յ��ύ����Ԫ��(Post Data Element)��"), \
		/*category*/	1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(22,0),  /*shrewd_ptr<ProxyPostDataElement>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+14] \
	},\
	{ /*17*/ \
		/*ccname*/	_WT("�����ļ��ύԪ��"),\
		/*egname*/	_WT("CreatePostDataElementWithFile"), \
		/*explain*/	_WT("����һ�������ļ����ύ����Ԫ��(Post Data Element)��"), \
		/*category*/	1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(22,0),  /*shrewd_ptr<ProxyPostDataElement>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+14] \
	},\
	{ /*18*/ \
		/*ccname*/	_WT("�����ֽڼ��ύԪ��"),\
		/*egname*/	_WT("CreatePostDataElementWithData"), \
		/*explain*/	_WT("����һ�������ֽڼ����ύ����Ԫ��(Post Data Element)��"), \
		/*category*/	1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(22,0),  /*shrewd_ptr<ProxyPostDataElement>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+15] \
	},\
	{ /*19*/ \
		/*ccname*/	_WT("��������"),\
		/*egname*/	_WT("CreateRequest"), \
		/*explain*/	_WT("����������һ���µ���������ʵ������"), \
		/*category*/	1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(24,0),  /*shrewd_ptr<ProxyRequest>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	5, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+16] \
	},\
	{ /*20*/ \
		/*ccname*/	_WT("������Ӧ"),\
		/*egname*/	_WT("CreateResponse"), \
		/*explain*/	_WT("����������һ���µ���Ӧ����ʵ������"), \
		/*category*/	1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(25,0),  /*shrewd_ptr<ProxyResponse>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+21] \
	},\
	{ /*21*/ \
		/*ccname*/	_WT("������ʼ������"),\
		/*egname*/	_WT("CreateSetting"), \
		/*explain*/	_WT("����������һ���µĳ�ʼ����������ʵ������"), \
		/*category*/	1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(29,0),  /*shrewd_ptr<ProxySettings>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+21] \
	},\
	{ /*22*/ \
		/*ccname*/	_WT("����ͨ��ֵ"),\
		/*egname*/	_WT("CreateValue"), \
		/*explain*/	_WT("����������һ���µ�ͨ������ʵ������"), \
		/*category*/	1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(31,0),  /*shrewd_ptr<ProxyValue>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+21] \
	},\
	{ /*23*/ \
		/*ccname*/	_WT("������������"),\
		/*egname*/	_WT("CreateWindowInfo"), \
		/*explain*/	_WT("����������һ���µĴ�����������ʵ������"), \
		/*category*/	1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(34,0),  /*shrewd_ptr<ProxyWindowInfo>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+22] \
	},\
	{ /*24*/ \
		/*ccname*/	_WT("�����Ӵ�������"),\
		/*egname*/	_WT("CreateAsChildWindow"), \
		/*explain*/	_WT("����һ��������������ʵ��, �������ʼ��Ϊ�Ӵ���ģʽ��"), \
		/*category*/	1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(34,0),  /*shrewd_ptr<ProxyWindowInfo>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	5, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+22] \
	},\
	{ /*25*/ \
		/*ccname*/	_WT("����������������"),\
		/*egname*/	_WT("CreateAsPopupWindow"), \
		/*explain*/	_WT("����һ��������������ʵ��, �������ʼ��Ϊ��������ģʽ��"), \
		/*category*/	1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(34,0),  /*shrewd_ptr<ProxyWindowInfo>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+27] \
	},\
	{ /*26*/ \
		/*ccname*/	_WT("����URL����"),\
		/*egname*/	_WT("SendURLRequest"), \
		/*explain*/	_WT("����HTTP����"), \
		/*category*/	1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(30,0),  /*shrewd_ptr<ProxyURLRequest>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	4, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+29] \
	},\
	{ /*27*/ \
		/*ccname*/	_WT("����������"),\
		/*egname*/	_WT("CreateServer"), \
		/*explain*/	_WT("����һ���µ�HTTP��������"), \
		/*category*/	1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	3, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+33] \
	},\
	{ /*28*/ \
		/*ccname*/	_WT("������ҳ�׽���"),\
		/*egname*/	_WT("CreateWebSocket"), \
		/*explain*/	_WT("����һ���µ�Websocket�׽��֡�"), \
		/*category*/	1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(33,0),  /*shrewd_ptr<ProxyWebSocket>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+36] \
	},\
	{ /*29*/ \
		/*ccname*/	_WT("�����ȴ��¼�"),\
		/*egname*/	_WT("CreateWaitableEvent"), \
		/*explain*/	_WT("����һ���µĵȴ��¼��� �ȴ��¼�ͨ�������߳�ͬ��, ������һ���̵߳ȴ���һ���߳����ĳЩ�¼����ڼ���������"), \
		/*category*/	1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(32,0),  /*shrewd_ptr<ProxyWaitableEvent>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+36] \
	},\
	{ /*30*/ \
		/*ccname*/	_WT("�ȴ�����"),\
		/*egname*/	_WT("Awaking"), \
		/*explain*/	_WT("����һ���ȴ��¼�ֱ������Ϊ���ź�״̬����������������Ϣ���еĴ���������UI�̡߳�"), \
		/*category*/	1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+36] \
	},\
	{ /*31*/ \
		/*ccname*/	_WT("�ȴ�����2"),\
		/*egname*/	_WT("TimedAwaking"), \
		/*explain*/	_WT("����һ���ȴ��¼�ֱ������Ϊ���ź�״̬���߳�����ʱ�䡣��������������Ϣ���еĴ���������UI�̡߳��������ʾ�ȴ��¼�������, ���ؼٱ�ʾ�ѳ����ȴ�ʱ�䡣"), \
		/*category*/	1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+37] \
	},\
	{ /*32*/ \
		/*ccname*/	_WT("�����˵�"),\
		/*egname*/	_WT("CreateMenu"), \
		/*explain*/	_WT("����һ���µĲ˵���"), \
		/*category*/	1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(21,0),  /*shrewd_ptr<ProxyMenuModel>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+39] \
	},\
	{ /*33*/ \
		/*ccname*/	_WT("������ҳ������"),\
		/*egname*/	_WT("CreateCollection"), \
		/*explain*/	_WT("����һ���µ���ҳ��������"), \
		/*category*/	1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(6,0),  /*shrewd_ptr<ProxyCollection>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+39] \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyBase_FUN_NAMES \
	EDITIONS("ProxyBase_Initialize"),\
	EDITIONS("ProxyBase_Base64Encode"),\
	EDITIONS("ProxyBase_Base64Decode"),\
	EDITIONS("ProxyBase_UriEncode"),\
	EDITIONS("ProxyBase_UriDecode"),\
	EDITIONS("ProxyBase_Utf8ToBytes"),\
	EDITIONS("ProxyBase_BytesToUtf8"),\
	EDITIONS("ProxyBase_CreateBrowserSettings"),\
	EDITIONS("ProxyBase_CreateCommandLine"),\
	EDITIONS("ProxyBase_GetGlobalCommandLine"),\
	EDITIONS("ProxyBase_GetGlobalCookieManager"),\
	EDITIONS("ProxyBase_CreateDictionartyValue"),\
	EDITIONS("ProxyBase_CreateListValue"),\
	EDITIONS("ProxyBase_CreatePostDataElement"),\
	EDITIONS("ProxyBase_CreatePostDataElementWithFile"),\
	EDITIONS("ProxyBase_CreatePostDataElementWithData"),\
	EDITIONS("ProxyBase_CreateRequest"),\
	EDITIONS("ProxyBase_CreateResponse"),\
	EDITIONS("ProxyBase_CreateSetting"),\
	EDITIONS("ProxyBase_CreateValue"),\
	EDITIONS("ProxyBase_CreateWindowInfo"),\
	EDITIONS("ProxyBase_CreateAsChildWindow"),\
	EDITIONS("ProxyBase_CreateAsPopupWindow"),\
	EDITIONS("ProxyBase_SendURLRequest"),\
	EDITIONS("ProxyBase_CreateServer"),\
	EDITIONS("ProxyBase_CreateWebSocket"),\
	EDITIONS("ProxyBase_CreateWaitableEvent"),\
	EDITIONS("ProxyBase_Awaking"),\
	EDITIONS("ProxyBase_TimedAwaking"),\
	EDITIONS("ProxyBase_CreateMenu"),\
	EDITIONS("ProxyBase_CreateCollection"),\


//==========================================

#define DECL_DATA_TYPE_ProxyBase_FUN_CALLS \
	EDITIONF(ProxyBase_Initialize),\
	EDITIONF(ProxyBase_Base64Encode),\
	EDITIONF(ProxyBase_Base64Decode),\
	EDITIONF(ProxyBase_UriEncode),\
	EDITIONF(ProxyBase_UriDecode),\
	EDITIONF(ProxyBase_Utf8ToBytes),\
	EDITIONF(ProxyBase_BytesToUtf8),\
	EDITIONF(ProxyBase_CreateBrowserSettings),\
	EDITIONF(ProxyBase_CreateCommandLine),\
	EDITIONF(ProxyBase_GetGlobalCommandLine),\
	EDITIONF(ProxyBase_GetGlobalCookieManager),\
	EDITIONF(ProxyBase_CreateDictionartyValue),\
	EDITIONF(ProxyBase_CreateListValue),\
	EDITIONF(ProxyBase_CreatePostDataElement),\
	EDITIONF(ProxyBase_CreatePostDataElementWithFile),\
	EDITIONF(ProxyBase_CreatePostDataElementWithData),\
	EDITIONF(ProxyBase_CreateRequest),\
	EDITIONF(ProxyBase_CreateResponse),\
	EDITIONF(ProxyBase_CreateSetting),\
	EDITIONF(ProxyBase_CreateValue),\
	EDITIONF(ProxyBase_CreateWindowInfo),\
	EDITIONF(ProxyBase_CreateAsChildWindow),\
	EDITIONF(ProxyBase_CreateAsPopupWindow),\
	EDITIONF(ProxyBase_SendURLRequest),\
	EDITIONF(ProxyBase_CreateServer),\
	EDITIONF(ProxyBase_CreateWebSocket),\
	EDITIONF(ProxyBase_CreateWaitableEvent),\
	EDITIONF(ProxyBase_Awaking),\
	EDITIONF(ProxyBase_TimedAwaking),\
	EDITIONF(ProxyBase_CreateMenu),\
	EDITIONF(ProxyBase_CreateCollection),\


//==========================================

extern "C"
void EDITIONF(ProxyBase_Initialize) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_Base64Encode) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_Base64Decode) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_UriEncode) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_UriDecode) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_Utf8ToBytes) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_BytesToUtf8) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_CreateBrowserSettings) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_CreateCommandLine) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_GetGlobalCommandLine) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_GetGlobalCookieManager) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_CreateDictionartyValue) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_CreateListValue) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_CreatePostDataElement) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_CreatePostDataElementWithFile) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_CreatePostDataElementWithData) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_CreateRequest) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_CreateResponse) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_CreateSetting) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_CreateValue) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_CreateWindowInfo) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_CreateAsChildWindow) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_CreateAsPopupWindow) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_SendURLRequest) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_CreateServer) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_CreateWebSocket) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_CreateWaitableEvent) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_Awaking) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_TimedAwaking) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_CreateMenu) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBase_CreateCollection) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);


//==========================================

