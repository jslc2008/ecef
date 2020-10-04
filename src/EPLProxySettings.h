#pragma once

#include "stdafx.h"
#include "lib2.h"


#define DECL_DATA_TYPE_ProxySettings \
	{ /*31*/ \
		/*m_szName*/		 _WT("Chromium��������"), \
		/*m_szEgName*/		 _WT("ProxySettings"), \
		/*m_szExplain*/		 _WT("�ṩ��������̵ĳ�ʼ�����á���Щ������������Chromiumȫ�����в���, ����Ϊ0���ʱ����Ϊ�����Ĭ��ֵ, ��Щ����Ҳʹ�������п���(command-switch)�������á�"), \
		/*m_nCmdCount*/		 26, \
		/*m_pnCmdsIndex*/		 s_nProxySettingsElementCmdIndex, \
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

#define DECL_DATA_TYPE_ProxySettings_ARGINFO \
	{ /****** ProxySettings::SetBrowserSubProcessPath ** 0 **/ \
		/*name*/	 _WT("��������"), \
		/*explain*/	 _WT("����CEF/Chromium��������̵ķ�֧���̳��������˴˲������������ʹ�ô˲����ṩ�ĳ����������ӽ��̡�"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxySettings::SetMultiThreadedMessageLoop ** 1 **/ \
		/*name*/	 _WT("ֵ"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxySettings::SetExternalMessagePump ** 2 **/ \
		/*name*/	 _WT("value"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxySettings::SetWindowlessRenderingEnabled ** 3 **/ \
		/*name*/	 _WT("value"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxySettings::SetCommandLineArgsDisabled ** 4 **/ \
		/*name*/	 _WT("ֵ"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxySettings::SetCachePath ** 5 **/ \
		/*name*/	 _WT("����·��"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxySettings::SetRootCachePath ** 6 **/ \
		/*name*/	 _WT("·��"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxySettings::SetUserDataPath ** 7 **/ \
		/*name*/	 _WT("·��"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxySettings::SetPersistSessionCookies ** 8 **/ \
		/*name*/	 _WT("ֵ"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxySettings::SetPersistUserPreferences ** 9 **/ \
		/*name*/	 _WT("ֵ"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxySettings::SetUserAgent ** 10 **/ \
		/*name*/	 _WT("��ʶ�ַ���"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxySettings::SetProductVersion ** 11 **/ \
		/*name*/	 _WT("��Ʒ��ʶ"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxySettings::SetLocale ** 12 **/ \
		/*name*/	 _WT("���Ա�ʶ"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxySettings::SetJavascriptFlags ** 13 **/ \
		/*name*/	 _WT("�Զ����־"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxySettings::SetPackLoadingDisabled ** 14 **/ \
		/*name*/	 _WT("ֵ"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxySettings::SetRemoteDebuggingPort ** 15 **/ \
		/*name*/	 _WT("ֵ"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxySettings::SetUncaughtExceptionStackSize ** 16 **/ \
		/*name*/	 _WT("value"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxySettings::SetIgnoreCertificateErrors ** 17 **/ \
		/*name*/	 _WT("ֵ"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxySettings::SetBackgroundColor ** 18 **/ \
		/*name*/	 _WT("��ɫֵ"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxySettings::SetAcceptLanguageList ** 19 **/ \
		/*name*/	 _WT("�����ַ���"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxySettings::SetApplicationClientIdForFileScanning ** 20 **/ \
		/*name*/	 _WT("��ʶ"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\


//==========================================

#define DECL_DATA_TYPE_ProxySettings_CMDINFO(BeginIndex) \
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
		/*ccname*/	_WT("��������"),\
		/*egname*/	_WT("Create"), \
		/*explain*/	_WT("��������ʵ��, �Ǿ�̬����, ��Ҫ���ô˺�������ܹ���Ч���ʡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(32,0),  /*shrewd_ptr<ProxySettings>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*4*/ \
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
	{ /*5*/ \
		/*ccname*/	_WT("�����ӽ��̳���"),\
		/*egname*/	_WT("SetBrowserSubProcessPath"), \
		/*explain*/	_WT("���ö����ģʽ��, Chromium��ʹ�õķ�֧�ӽ���, ���ڱ�֧�ֽ�֧�ֶ����ģʽ, ���Դ����������������Чֵ��"), \
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
	{ /*6*/ \
		/*ccname*/	_WT("���ö��߳���Ϣѭ��"),\
		/*egname*/	_WT("SetMultiThreadedMessageLoop"), \
		/*explain*/	_WT("����Ϊ1ʱ����, ���߳���Ϣѭ����CEF / Chromium�����������Ϣѭ����һ��ģʽ����ʹ�����������Ϣѭ�������ڶ������߳���, ������������߳�(UI �߳�)��Ϣѭ��֮���໥Ӱ�졣����ģʽ��CEF/Chromium��Ϣѭ��ģʽ�в������Ч������,�����������Եļ����Էǳ���(���ʹ�����߳���Ϣѭ��ģʽ, �������߳̽����������Ϣѭ���̻߳���, �����Ե�ĳЩ�����Ϣ�ᱻ������̵�), �����Ƽ�ʹ�ø�ģʽ��"), \
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
	{ /*7*/ \
		/*ccname*/	_WT("SetExternalMessagePump"),\
		/*egname*/	_WT("SetExternalMessagePump"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+2] \
	},\
	{ /*8*/ \
		/*ccname*/	_WT("SetWindowlessRenderingEnabled"),\
		/*egname*/	_WT("SetWindowlessRenderingEnabled"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+3] \
	},\
	{ /*9*/ \
		/*ccname*/	_WT("���ý��������п���"),\
		/*egname*/	_WT("SetCommandLineArgsDisabled"), \
		/*explain*/	_WT("�˲�������Ϊ1ʱ, Chromium�����ٶ�ȡ�������е����ò�����"), \
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
	{ /*10*/ \
		/*ccname*/	_WT("����ȫ�ֻ���Ŀ¼"),\
		/*egname*/	_WT("SetCachePath"), \
		/*explain*/	_WT("���������ȫ�ֻ���Ŀ¼, ��ֵ��Ϊ�������������ʱʹ�õ�ȱʡֵ, ����ر�ָ��, ���е�����������Ṳ������á�����Ϊ��ʱ��Ĭ�ϲ��Ὣ���ݴ洢�������ϡ�"), \
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
	{ /*11*/ \
		/*ccname*/	_WT("���ø�Ŀ¼"),\
		/*egname*/	_WT("SetRootCachePath"), \
		/*explain*/	_WT("�������б��������ʹ�õĸ�Ŀ¼��"), \
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
	{ /*12*/ \
		/*ccname*/	_WT("�����û�����Ŀ¼"),\
		/*egname*/	_WT("SetUserDataPath"), \
		/*explain*/	_WT("�����û����ݴ洢(����ƴд����ֶ��ļ�)λ�á���ֵ��Ϊ�������������ʱʹ�õ�ȱʡֵ, ����ر�ָ��, ���е�����������Ṳ������á�����Ϊ��ʱ��Ĭ�ϲ��Ὣ���ݴ洢�������ϡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+7] \
	},\
	{ /*13*/ \
		/*ccname*/	_WT("���ñ��ֻỰCOOKIES"),\
		/*egname*/	_WT("SetPersistSessionCookies"), \
		/*explain*/	_WT("���ô�ֵΪ1, ��ȫ��COOKIE�������б����ỰCOOKIE(���ǽ�û����Ч��)��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+8] \
	},\
	{ /*14*/ \
		/*ccname*/	_WT("���ñ����û���ѡ��"),\
		/*egname*/	_WT("SetPersistUserPreferences"), \
		/*explain*/	_WT("���ô�ֵΪ1, �û���ѡ�����ݽ�ʹ��JSON�ļ�����������Ŀ¼�С�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+9] \
	},\
	{ /*15*/ \
		/*ccname*/	_WT("�����û������ʶ"),\
		/*egname*/	_WT("SetUserAgent"), \
		/*explain*/	_WT("���ô�ֵ��Ϊ: User-Agent HTTP ��ͷ�ķ���ֵ��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+10] \
	},\
	{ /*16*/ \
		/*ccname*/	_WT("���ò�Ʒ��ʶ"),\
		/*egname*/	_WT("SetProductVersion"), \
		/*explain*/	_WT("���ô�ֵ��ΪĬ�� User-Agent �ַ����Ĳ�Ʒ���ֲ����ֵ��"), \
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
	{ /*17*/ \
		/*ccname*/	_WT("�������Ի���"),\
		/*egname*/	_WT("SetLocale"), \
		/*explain*/	_WT("������������Ի����ַ�����"), \
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
	{ /*18*/ \
		/*ccname*/	_WT("�����Զ���JAVASCRIPT��־ֵ"),\
		/*egname*/	_WT("SetJavascriptFlags"), \
		/*explain*/	_WT("V8 JavaScript�����ʼ��ʱ��ʹ�ô��Զ����־ֵ��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+13] \
	},\
	{ /*19*/ \
		/*ccname*/	_WT("���ý�ֹ������Դ"),\
		/*egname*/	_WT("SetPackLoadingDisabled"), \
		/*explain*/	_WT("���ô�ֵΪ1, ����ֹ�����������Դ(�������Ի����Ĵ���ļ�)��"), \
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
	{ /*20*/ \
		/*ccname*/	_WT("����Զ�̵��Զ˿�"),\
		/*egname*/	_WT("SetRemoteDebuggingPort"), \
		/*explain*/	_WT("������������ŵ�Զ�̵��Զ˿�, �˿�ֵӦ����: 1024-65535 ֮�䡣"), \
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
	{ /*21*/ \
		/*ccname*/	_WT("SetUncaughtExceptionStackSize"),\
		/*egname*/	_WT("SetUncaughtExceptionStackSize"), \
		/*explain*/	_WT(""), \
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
	{ /*22*/ \
		/*ccname*/	_WT("���ú���SSL֤�����"),\
		/*egname*/	_WT("SetIgnoreCertificateErrors"), \
		/*explain*/	_WT("���ô�ֵΪ1, �ɺ�������ЧSSL֤���йصĴ���"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+17] \
	},\
	{ /*23*/ \
		/*ccname*/	_WT("���ñ�����ɫ"),\
		/*egname*/	_WT("SetBackgroundColor"), \
		/*explain*/	_WT("���ü����ĵ�֮ǰ��δָ���ĵ���ɫʱ�����ʹ�õı���ɫ��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+18] \
	},\
	{ /*24*/ \
		/*ccname*/	_WT("����HTTP���������ַ���"),\
		/*egname*/	_WT("SetAcceptLanguageList"), \
		/*explain*/	_WT("����ȫ�ֵ�HTTP���������ַ���,�Զ��ŷָ������Դ����ַ�������,������ʹ�ÿո�, ��Щ�ַ���ֵ����\"Accept-Language\" HTTP��ͷ��ʹ�á�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+19] \
	},\
	{ /*25*/ \
		/*ccname*/	_WT("����Ӧ�ó����ʶ"),\
		/*egname*/	_WT("SetApplicationClientIdForFileScanning"), \
		/*explain*/	_WT("�������ڱ�ʶӦ�ó����GUID�ַ�����"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+20] \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxySettings_FUN_NAMES \
	EDITIONS("ProxySettings_Constructor"),\
	EDITIONS("ProxySettings_Destructor"),\
	EDITIONS("ProxySettings_CopyConstructor"),\
	EDITIONS("ProxySettings_Create"),\
	EDITIONS("ProxySettings_IsValid"),\
	EDITIONS("ProxySettings_SetBrowserSubProcessPath"),\
	EDITIONS("ProxySettings_SetMultiThreadedMessageLoop"),\
	EDITIONS("ProxySettings_SetExternalMessagePump"),\
	EDITIONS("ProxySettings_SetWindowlessRenderingEnabled"),\
	EDITIONS("ProxySettings_SetCommandLineArgsDisabled"),\
	EDITIONS("ProxySettings_SetCachePath"),\
	EDITIONS("ProxySettings_SetRootCachePath"),\
	EDITIONS("ProxySettings_SetUserDataPath"),\
	EDITIONS("ProxySettings_SetPersistSessionCookies"),\
	EDITIONS("ProxySettings_SetPersistUserPreferences"),\
	EDITIONS("ProxySettings_SetUserAgent"),\
	EDITIONS("ProxySettings_SetProductVersion"),\
	EDITIONS("ProxySettings_SetLocale"),\
	EDITIONS("ProxySettings_SetJavascriptFlags"),\
	EDITIONS("ProxySettings_SetPackLoadingDisabled"),\
	EDITIONS("ProxySettings_SetRemoteDebuggingPort"),\
	EDITIONS("ProxySettings_SetUncaughtExceptionStackSize"),\
	EDITIONS("ProxySettings_SetIgnoreCertificateErrors"),\
	EDITIONS("ProxySettings_SetBackgroundColor"),\
	EDITIONS("ProxySettings_SetAcceptLanguageList"),\
	EDITIONS("ProxySettings_SetApplicationClientIdForFileScanning"),\


//==========================================

#define DECL_DATA_TYPE_ProxySettings_FUN_CALLS \
	EDITIONF(ProxySettings_Constructor),\
	EDITIONF(ProxySettings_Destructor),\
	EDITIONF(ProxySettings_CopyConstructor),\
	EDITIONF(ProxySettings_Create),\
	EDITIONF(ProxySettings_IsValid),\
	EDITIONF(ProxySettings_SetBrowserSubProcessPath),\
	EDITIONF(ProxySettings_SetMultiThreadedMessageLoop),\
	EDITIONF(ProxySettings_SetExternalMessagePump),\
	EDITIONF(ProxySettings_SetWindowlessRenderingEnabled),\
	EDITIONF(ProxySettings_SetCommandLineArgsDisabled),\
	EDITIONF(ProxySettings_SetCachePath),\
	EDITIONF(ProxySettings_SetRootCachePath),\
	EDITIONF(ProxySettings_SetUserDataPath),\
	EDITIONF(ProxySettings_SetPersistSessionCookies),\
	EDITIONF(ProxySettings_SetPersistUserPreferences),\
	EDITIONF(ProxySettings_SetUserAgent),\
	EDITIONF(ProxySettings_SetProductVersion),\
	EDITIONF(ProxySettings_SetLocale),\
	EDITIONF(ProxySettings_SetJavascriptFlags),\
	EDITIONF(ProxySettings_SetPackLoadingDisabled),\
	EDITIONF(ProxySettings_SetRemoteDebuggingPort),\
	EDITIONF(ProxySettings_SetUncaughtExceptionStackSize),\
	EDITIONF(ProxySettings_SetIgnoreCertificateErrors),\
	EDITIONF(ProxySettings_SetBackgroundColor),\
	EDITIONF(ProxySettings_SetAcceptLanguageList),\
	EDITIONF(ProxySettings_SetApplicationClientIdForFileScanning),\


//==========================================

extern "C"
void EDITIONF(ProxySettings_Constructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_Destructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_CopyConstructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_Create) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_IsValid) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_SetBrowserSubProcessPath) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_SetMultiThreadedMessageLoop) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_SetExternalMessagePump) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_SetWindowlessRenderingEnabled) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_SetCommandLineArgsDisabled) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_SetCachePath) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_SetRootCachePath) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_SetUserDataPath) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_SetPersistSessionCookies) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_SetPersistUserPreferences) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_SetUserAgent) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_SetProductVersion) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_SetLocale) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_SetJavascriptFlags) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_SetPackLoadingDisabled) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_SetRemoteDebuggingPort) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_SetUncaughtExceptionStackSize) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_SetIgnoreCertificateErrors) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_SetBackgroundColor) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_SetAcceptLanguageList) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxySettings_SetApplicationClientIdForFileScanning) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);


//==========================================

