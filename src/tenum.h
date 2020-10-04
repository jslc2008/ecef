#pragma once
#include "stdafx.h"
#include "lib2.h"


#define DATA_TYPE_ENUM_DEFINITION(Name, EgName, Explain, Elem) \
	{ \
		/*m_szName*/			_WT(Name), \
		/*m_szEgName*/			_WT(EgName), \
		/*m_szExplain*/			_WT(Explain), \
		/*m_nCmdCount*/			0, \
		/*m_pnCmdsIndex*/ 		NULL, \
		/*m_dwState*/			_DT_OS (__OS_WIN) | LDT_ENUM, \
		/*m_dwUnitBmpID*/		NULL, \
		/*m_nEventCount*/		0, \
		/*m_pEventBegin*/		NULL, \
		/*m_nPropertyCount*/	0, \
		/*m_pPropertyBegin*/	NULL, \
		/*m_pfnGetInterface*/	NULL, \
		/*m_nElementCount*/		sizeof(Elem)/sizeof(Elem[0]), \
		/*m_pElementBegin*/		Elem \
	}, \



LIB_DATA_TYPE_ELEMENT s_ChromiumMouseEventEnumList[] = {
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("������"), 
		/*szEgName*/	_WT("MBT_LEFT"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	0 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("����м�"), 
		/*szEgName*/	_WT("MBT_LEFT"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	1 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("����Ҽ�"), 
		/*szEgName*/	_WT("MBT_LEFT"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	2 
	},
};
#define ENUM_MOUSE_EVENT_EXPLAIN	"������¼�����ö�ٳ�����"


LIB_DATA_TYPE_ELEMENT s_RequestReferrerPolicyEnumList[] = {
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("Ĭ��"), 
		/*szEgName*/	_WT("default"), 
		/*szExplain*/	_WT("��û��ָ���κβ��Ե�������û������Ĭ����Ϊ����ͬ�Ȱ�ȫ���������£���Դҳ��ĵ�ַ�ᱻ����(HTTPS->HTTPS)�������ڽ���������²��ᱻ���� (HTTPS->HTTP)��"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	0 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("ͬԴ����һ"), 
		/*szEgName*/	_WT("reduct_referrer_granularity_on_transition_cross_origin"), 
		/*szExplain*/	_WT("����ͬԴ�����󣬻ᷢ��������URL��Ϊ��Դ��ַ�����Ƕ��ڷ�ͬԴ�������Ŀ����HTTP,�����HTTPS��Դ��ַ�����Ŀ���ַ����Դ��ַ�ǿ�Դ��(��������),������ͼ򻯺����Դ��ַ��"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	1 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("ͬԴ���Ͷ�"), 
		/*szEgName*/	_WT("origin_only_on_transition_cross_origin"), 
		/*szExplain*/	_WT("����ͬԴ�����󣬻ᷢ��������URL��Ϊ��Դ��ַ�����Ƕ��ڷ�ͬԴ����������ļ���Դ��"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	2
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("�Ӳ�����"), 
		/*szEgName*/	_WT("never_clear_referrer"), 
		/*szExplain*/	_WT("�Ӳ�������Դ��ַ��"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	3
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("�򻯵�ַ"), 
		/*szEgName*/	_WT("origin"), 
		/*szExplain*/	_WT("�����ض���λ�����, ������Դ��ַ����Ϊԭʼ��ַ��"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	4
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("�������"), 
		/*szEgName*/	_WT("clear_referrer_on_transition_cross_rogin"), 
		/*szExplain*/	_WT("���������Դ��ַ������Ŀ����Դ�໥����ʱ, �����Դ��ַ��"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	5
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("�򻯷���"), 
		/*szEgName*/	_WT("clear_on_transition_from_secure_to_insecure"), 
		/*szExplain*/	_WT("����Դ��ַ��Ϊԭʼ��ַ, ���������Դ��ַ��ֵΪHTTPS����Ŀ���ַΪHTTP, ������ȫ�����"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	6
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("�Ӳ�����"), 
		/*szEgName*/	_WT("no_referrer"), 
		/*szExplain*/	_WT("����Ŀ���ַ��Σ�ʼ�������Դ��ַ��"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	7
	},
};
#define ENUM_REFERRER_POLICY_EXPLAIN	"ͬԴ����ö�ٳ���"


LIB_DATA_TYPE_ELEMENT s_ResourceTypeEnumList[] = {
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("MAIN_FRAME"), 
		/*szEgName*/	_WT("MAIN_FRAME"), 
		/*szExplain*/	_WT("Top level page."), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	0 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("SUB_FRAME"), 
		/*szEgName*/	_WT("SUB_FRAME"), 
		/*szExplain*/	_WT("Frame or iframe."), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	1 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("STYLESHEET"), 
		/*szEgName*/	_WT("STYLESHEET"), 
		/*szExplain*/	_WT("CSS stylesheet."), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	2 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("SCRIPT"), 
		/*szEgName*/	_WT("SCRIPT"), 
		/*szExplain*/	_WT("External script."), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	3 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("IMAGE"), 
		/*szEgName*/	_WT("IMAGE"), 
		/*szExplain*/	_WT("Image (jpg/gif/png/etc)."), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	4
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("FONT_RESOURCE"), 
		/*szEgName*/	_WT("FONT_RESOURCE"), 
		/*szExplain*/	_WT("font"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	5
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("SUB_RESOURCE"), 
		/*szEgName*/	_WT("SUB_RESOURCE"), 
		/*szExplain*/	_WT("Some other subresource."), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	6
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("OBJECT"), 
		/*szEgName*/	_WT("OBJECT"), 
		/*szExplain*/	_WT("Object (or embed) tag for a plugin, or a resource that a plugin requested."), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	7 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("MEDIA"), 
		/*szEgName*/	_WT("MEDIA"), 
		/*szExplain*/	_WT("Media resource."), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	8
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("WORKER"), 
		/*szEgName*/	_WT("WORKER"), 
		/*szExplain*/	_WT("Main resource of a dedicated worker."), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	9 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("SHARED_WORKER"), 
		/*szEgName*/	_WT("SHARED_WORKER"), 
		/*szExplain*/	_WT("Main resource of a shared worker."), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	10 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("PREFETCH"), 
		/*szEgName*/	_WT("PREFETCH"), 
		/*szExplain*/	_WT("Explicitly requested prefetch."), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	11 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("FAVICON"), 
		/*szEgName*/	_WT("FAVICON"), 
		/*szExplain*/	_WT("Favicon."), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	12 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("XHR"), 
		/*szEgName*/	_WT("XHR"), 
		/*szExplain*/	_WT("XMLHttpRequest."), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	13 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("PING"), 
		/*szEgName*/	_WT("PING"), 
		/*szExplain*/	_WT("A request for a <ping>"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	14 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("SERVICE_WORKER"), 
		/*szEgName*/	_WT("SERVICE_WORKER"), 
		/*szExplain*/	_WT("Main resource of a service worker."), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	15 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("CSP_REPORT"), 
		/*szEgName*/	_WT("CSP_REPORT"), 
		/*szExplain*/	_WT("A report of Content Security Policy violations."), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	16
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("PLUGIN_RESOURCE"), 
		/*szEgName*/	_WT("PLUGIN_RESOURCE"), 
		/*szExplain*/	_WT("A resource that a plugin requested."), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	17
	},
};
#define ENUM_RESOURCE_TYPE_EXPLAIN	"��Դ����ö�ٳ�����"


LIB_DATA_TYPE_ELEMENT s_JavaScriptDialogTypeEnumList[] = {
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("ALERT"), 
		/*szEgName*/	_WT("ALERT"), 
		/*szExplain*/	_WT("Alert"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	0 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("CONFIRM"), 
		/*szEgName*/	_WT("CONFIRM"), 
		/*szExplain*/	_WT("CONFIRM"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	1
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("PROMPT"), 
		/*szEgName*/	_WT("PROMPT"), 
		/*szExplain*/	_WT("PROMPT"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	2
	}
};

#define ENUM_JAVASCRIPTDIALOG_TYPE_EXPLAIN	"�ű��Ի�������ö�ٳ���"


LIB_DATA_TYPE_ELEMENT s_ResourceRetValueEnumList[] = {
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("����ȡ��"), 
		/*szEgName*/	_WT("Cancel"), 
		/*szExplain*/	_WT("����ȡ��������Դ����"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	0 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("����ͨ��"), 
		/*szEgName*/	_WT("Continue"), 
		/*szExplain*/	_WT("����ͨ��������Դ����"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	1 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("������"), 
		/*szEgName*/	_WT("Continue_async"), 
		/*szExplain*/	_WT("�첽����ִ�б�����Դ����, ͨ�������ص��ӿڿ����ں����ٴ���������״̬��"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	2 
	},
};
#define ENUM_RESOURCE_RETVALUE_TYPE_EXPLAIN	"��Դ����ö�ٳ���"


LIB_DATA_TYPE_ELEMENT s_ThreadIdEnumList[] = {
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("THREAD_UI"), 
		/*szEgName*/	_WT("THREAD_UI"), 
		/*szExplain*/	_WT("�����UI�߳�"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	0 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("THREAD_PROCESS_LAUNCHER"), 
		/*szEgName*/	_WT("THREAD_PROCESS_LAUNCHER"), 
		/*szExplain*/	_WT("����������ػ��߳�"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	4 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("THREAD_IO"), 
		/*szEgName*/	_WT("THREAD_IO"), 
		/*szExplain*/	_WT("�����IO�߳�"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	5 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("THREAD_RENDERER"), 
		/*szEgName*/	_WT("THREAD_RENDERER"), 
		/*szExplain*/	_WT("�������Ⱦ�߳�"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	6
	},
};
#define ENUM_THREAD_TYPE_EXPLAIN	"������߳�ö�ٳ���"


LIB_DATA_TYPE_ELEMENT s_FileModeEnumList[] = {
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("���ļ�"), 
		/*szEgName*/	_WT("FILE_DIALOG_OPEN"), 
		/*szExplain*/	_WT("Requires that the file exists before allowing the user to pick it."), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	0 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("���ļ�_����ѡ��"), 
		/*szEgName*/	_WT("FILE_DIALOG_OPEN_MULTIPLE"), 
		/*szExplain*/	_WT("Like Open, but allows picking multiple files to open."), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	1 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("���ļ���"), 
		/*szEgName*/	_WT("FILE_DIALOG_OPEN_FOLDER"), 
		/*szExplain*/	_WT("Like Open, but selects a folder to open."), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	2 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("�����ļ�"), 
		/*szEgName*/	_WT("FILE_DIALOG_SAVE"), 
		/*szExplain*/	_WT("Allows picking a nonexistent file, and prompts to overwrite if the file already exists."), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	3
	}
};
#define ENUM_FILEMODE_TYPE_EXPLAIN	"������ļ��Ի���ö�ٳ���"

LIB_DATA_TYPE_ELEMENT s_EventFlagsEnumList[] = {
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("NONE"), 
		/*szEgName*/	_WT("NONE"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	0 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("CAPS_LOCK_ON"), 
		/*szEgName*/	_WT("CAPS_LOCK_ON"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	1 << 0
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("SHIFT_DOWN"), 
		/*szEgName*/	_WT("SHIFT_DOWN"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	1 << 1
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("CONTROL_DOWN"), 
		/*szEgName*/	_WT("CONTROL_DOWN"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	1 << 2
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("ALT_DOWN"), 
		/*szEgName*/	_WT("ALT_DOWN"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	1 << 3
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("LEFT_MOUSE_BUTTON"), 
		/*szEgName*/	_WT("LEFT_MOUSE_BUTTON"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	1 << 4
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("MIDDLE_MOUSE_BUTTON"), 
		/*szEgName*/	_WT("MIDDLE_MOUSE_BUTTON"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	1 << 5
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("RIGHT_MOUSE_BUTTON"), 
		/*szEgName*/	_WT("RIGHT_MOUSE_BUTTON"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	1 << 6
	},
};
#define ENUM_EVENTFLAGS_EXPLAIN	"�˵��¼���־ö�ٳ���"

LIB_DATA_TYPE_ELEMENT s_CommandSwitchEnumList[] = {
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("Ĭ��"), 
		/*szEgName*/	_WT("STATE_DEFAULT"), 
		/*szExplain*/	_WT("Use the default state for the setting."), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	0 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("����"), 
		/*szEgName*/	_WT("STATE_ENABLED"), 
		/*szExplain*/	_WT("Enable or allow the setting."), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	1 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("��ֹ"), 
		/*szEgName*/	_WT("STATE_DISABLED"), 
		/*szExplain*/	_WT("Disable or disallow the setting."), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	2 
	},
};
#define ENUM_COMMANDSWITCH_EXPLAIN	"�����״̬����ö�ٳ���"

LIB_DATA_TYPE_ELEMENT s_TransitionTypeEnumList[] = {
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("LINK"), 
		/*szEgName*/	_WT("LINK"), 
		/*szExplain*/	_WT("Source is a link click or the JavaScript window.open function. This is also the default value for requests like sub-resource loads that are not navigations."), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	0 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("EXPLICIT"), 
		/*szEgName*/	_WT("EXPLICIT"), 
		/*szExplain*/	_WT("Source is some other \\\"explicit\\\" navigation. This is the default value for.navigations where the actual type is unknown. See also TT_DIRECT_LOAD_FLAG."), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	1
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("AUTO_SUBFRAME"), 
		/*szEgName*/	_WT("AUTO_SUBFRAME"), 
		/*szExplain*/	_WT("Source is a subframe navigation. This is any content that is automatically loaded in a non-toplevel frame. For example, if a page consists of several frames containing ads, those ad URLs will have this transition type.The user may not even realize the content in these pages is a separate frame, so may not care about the URL."), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	3
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("MANUAL_SUBFRAME"), 
		/*szEgName*/	_WT("MANUAL_SUBFRAME"), 
		/*szExplain*/	_WT("Source is a subframe navigation explicitly requested by the user that will generate new navigation entries in the back/forward list. These are probably more important than frames that were automatically loaded in the background because the user probably cares about the fact that this link was loaded."), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	4
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("FORM_SUBMIT"), 
		/*szEgName*/	_WT("FORM_SUBMIT"), 
		/*szExplain*/	_WT("Source is a form submission by the user. NOTE: In some situations submitting a form does not result in this transition type. This can happen if the form uses a script to submit the contents."), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	7
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("RELOAD"), 
		/*szEgName*/	_WT("RELOAD"), 
		/*szExplain*/	_WT("Source is a \"reload\" of the page via the Reload function or by re-visiting the same URL. NOTE: This is distinct from the concept of whether a particular load uses \"reload semantics\" (i.e. bypasses cached data)."), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	8
	},
};
#define ENUM_TRANSITION_TYPE_EXPLAIN	"ָʾ�����������Դ��ö�ٳ���"


LIB_DATA_TYPE_ELEMENT s_ValueTypeEnumList[] = {
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("INVALID"), 
		/*szEgName*/	_WT("INVALID"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	0 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("NULL"), 
		/*szEgName*/	_WT("NULL"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	1 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("BOOL"), 
		/*szEgName*/	_WT("BOOL"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	2
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("INT"), 
		/*szEgName*/	_WT("INT"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	3
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("DOUBLE"), 
		/*szEgName*/	_WT("DOUBLE"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	4
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("STRING"), 
		/*szEgName*/	_WT("STRING"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	5 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("BINARY"), 
		/*szEgName*/	_WT("BINARY"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	6 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("DICTIONARY"), 
		/*szEgName*/	_WT("DICTIONARY"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	7 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("LIST"), 
		/*szEgName*/	_WT("LIST"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	8 
	},
};
#define ENUM_VALUE_TYPE_EXPLAIN	"�����ֵ����ö�ٳ���"


LIB_DATA_TYPE_ELEMENT s_WindowOpenDispositionEnumList[] = {
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("UNKNOWN"), 
		/*szEgName*/	_WT("UNKNOWN"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	0 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("CURRENT_TAB"), 
		/*szEgName*/	_WT("CURRENT_TAB"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	1 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("SINGLETON_TAB"), 
		/*szEgName*/	_WT("SINGLETON_TAB"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	2 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("NEW_FOREGROUND_TAB"), 
		/*szEgName*/	_WT("NEW_FOREGROUND_TAB"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	3 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("NEW_BACKGROUND_TAB"), 
		/*szEgName*/	_WT("NEW_BACKGROUND_TAB"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	4 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("NEW_POPUP"), 
		/*szEgName*/	_WT("NEW_POPUP"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	5 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("NEW_WINDOW"), 
		/*szEgName*/	_WT("NEW_WINDOW"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	6
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("SAVE_TO_DISK"), 
		/*szEgName*/	_WT("SAVE_TO_DISK"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	7 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("OFF_THE_RECORD"), 
		/*szEgName*/	_WT("OFF_THE_RECORD"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	8 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("IGNORE_ACTION"), 
		/*szEgName*/	_WT("IGNORE_ACTION"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	9 
	},
};
#define ENUM_WINDOW_OPEN_DISPOSITION_EXPLAIN 	"��������ӵ���Ĵ򿪷�ʽ��"

LIB_DATA_TYPE_ELEMENT s_MessageLevelEnumList[] = {
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("DEFAULT"), 
		/*szEgName*/	_WT("DEFAULT"), 
		/*szExplain*/	_WT("Ĭ����־��¼����ǰΪINFO��־��¼����"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	0 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("VERBOSE"), 
		/*szEgName*/	_WT("VERBOSE"), 
		/*szExplain*/	_WT("��ϸ��¼��"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	1
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("DEBUG"), 
		/*szEgName*/	_WT("DEBUG"), 
		/*szExplain*/	_WT("Debug��¼��"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	1 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("INFO"), 
		/*szEgName*/	_WT("INFO"), 
		/*szExplain*/	_WT("��Ϣ��¼��"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	2 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("WARNING"), 
		/*szEgName*/	_WT("WARNING"), 
		/*szExplain*/	_WT("�����¼��"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	3 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("ERROR"), 
		/*szEgName*/	_WT("ERROR"), 
		/*szExplain*/	_WT("�����¼��"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	4
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("FATAL"), 
		/*szEgName*/	_WT("FATAL"), 
		/*szExplain*/	_WT("���������¼��"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	5 
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("DISABLE"), 
		/*szEgName*/	_WT("DISABLE"), 
		/*szExplain*/	_WT("��������Ϣ������־��¼���ļ�������������С��FATAL����Ϣ����stderr��"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	99
	},
};

#define ENUM_MESSAGE_LEVEL_EXPLAIN 	"��¼����̨��Ϣ�����Եȼ���ö�ٳ�����"

LIB_DATA_TYPE_ELEMENT s_SystemMenuIdEnumList[] = {
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("BACK"), 
		/*szEgName*/	_WT("BACK"), 
		/*szExplain*/	_WT("������ء�"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	100
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("FORWARD"), 
		/*szEgName*/	_WT("FORWARD"), 
		/*szExplain*/	_WT("������ء�"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	101
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("RELOAD"), 
		/*szEgName*/	_WT("RELOAD"), 
		/*szExplain*/	_WT("������ء�"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	102
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("RELOAD_NOCACHE"), 
		/*szEgName*/	_WT("RELOAD_NOCACHE"), 
		/*szExplain*/	_WT("������ء�"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	103
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("STOPLOAD"), 
		/*szEgName*/	_WT("STOPLOAD"), 
		/*szExplain*/	_WT("������ء�"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	104
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("UNDO"), 
		/*szEgName*/	_WT("UNDO"), 
		/*szExplain*/	_WT("�༭��ء�"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	110
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("REDO"), 
		/*szEgName*/	_WT("REDO"), 
		/*szExplain*/	_WT("�༭��ء�"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	111
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("CUT"), 
		/*szEgName*/	_WT("CUT"), 
		/*szExplain*/	_WT("�༭��ء�"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	112
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("COPY"), 
		/*szEgName*/	_WT("COPY"), 
		/*szExplain*/	_WT("�༭��ء�"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	113
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("PASTE"), 
		/*szEgName*/	_WT("PASTE"), 
		/*szExplain*/	_WT("�༭��ء�"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	114
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("DELETE"), 
		/*szEgName*/	_WT("DELETE"), 
		/*szExplain*/	_WT("�༭��ء�"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	115
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("SELECT_ALL"), 
		/*szEgName*/	_WT("SELECT_ALL"), 
		/*szExplain*/	_WT("�༭��ء�"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	116
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("FIND"), 
		/*szEgName*/	_WT("FIND"), 
		/*szExplain*/	_WT("���"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	130
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("PRINT"), 
		/*szEgName*/	_WT("PRINT"), 
		/*szExplain*/	_WT("���"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	131
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("VIEW_SOURCE"), 
		/*szEgName*/	_WT("PRINT"), 
		/*szExplain*/	_WT("���"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	132
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("SPELLCHECK_SUGGESTION_0"), 
		/*szEgName*/	_WT("SPELLCHECK_SUGGESTION_0"), 
		/*szExplain*/	_WT("ƴд��鵥�ʸ������顣"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	200
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("SPELLCHECK_SUGGESTION_1"), 
		/*szEgName*/	_WT("SPELLCHECK_SUGGESTION_1"), 
		/*szExplain*/	_WT("ƴд��鵥�ʸ������顣"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	201
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("SPELLCHECK_SUGGESTION_2"), 
		/*szEgName*/	_WT("SPELLCHECK_SUGGESTION_2"), 
		/*szExplain*/	_WT("ƴд��鵥�ʸ������顣"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	202
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("SPELLCHECK_SUGGESTION_3"), 
		/*szEgName*/	_WT("SPELLCHECK_SUGGESTION_3"), 
		/*szExplain*/	_WT("ƴд��鵥�ʸ������顣"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	203
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("SPELLCHECK_SUGGESTION_4"), 
		/*szEgName*/	_WT("SPELLCHECK_SUGGESTION_4"), 
		/*szExplain*/	_WT("ƴд��鵥�ʸ������顣"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	204
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("SPELLCHECK_SUGGESTION_LAST"), 
		/*szEgName*/	_WT("SPELLCHECK_SUGGESTION_LAST"), 
		/*szExplain*/	_WT("ƴд��鵥�ʸ������顣"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	204
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("SPELLCHECK_SUGGESTION_SUGGESTIONS"), 
		/*szEgName*/	_WT("SPELLCHECK_SUGGESTION_SUGGESTIONS"), 
		/*szExplain*/	_WT("ƴд��鵥�ʸ������顣"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	205
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("ADD_TO_DICTIONARY"), 
		/*szEgName*/	_WT("ADD_TO_DICTIONARY"), 
		/*szExplain*/	_WT("ƴд��鵥�ʸ������顣"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	206
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("CUSTOM_FIRST"), 
		/*szEgName*/	_WT("CUSTOM_FIRST"), 
		/*szExplain*/	_WT("������Ⱦ�����̵��Զ���˵�� ���磬���ռλ���˵����Flash�˵��"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	220
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("CUSTOM_LAST"), 
		/*szEgName*/	_WT("CUSTOM_LAST"), 
		/*szExplain*/	_WT("������Ⱦ�����̵��Զ���˵�� ���磬���ռλ���˵����Flash�˵��"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	250
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("USER_FIRST"), 
		/*szEgName*/	_WT("USER_FIRST"), 
		/*szExplain*/	_WT("�����û�����Ĳ˵�ID��Ӧ����USER_FIRST��USER_LAST֮��, �Ա�����ϵͳ�����˵�ID������ͻ��"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	26500
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("USER_FIRST"), 
		/*szEgName*/	_WT("USER_FIRST"), 
		/*szExplain*/	_WT("�����û�����Ĳ˵�ID��Ӧ����USER_FIRST��USER_LAST֮��, �Ա�����ϵͳ�����˵�ID������ͻ��"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	28500
	},
};
#define ENUM_SYSTEM_MENU_ID_EXPLAIN		"��������ò˵�IDö�ٳ�����"

LIB_DATA_TYPE_ELEMENT s_V8PropertyAttriEnumList[] = {
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("NONE"), 
		/*szEgName*/	_WT("NONE"), 
		/*szExplain*/	_WT("Ŀ�����Կ�д��д����ö�١������õġ�"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	0
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("READONLY"), 
		/*szEgName*/	_WT("READONLY"), 
		/*szExplain*/	_WT("Ŀ�����Խ��ṩֻ������, ����д�롣"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	1<<0
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("DOTTENUM"), 
		/*szEgName*/	_WT("DOTTENUM"), 
		/*szExplain*/	_WT("Ŀ�����Կɶ���д, ������ö�١�"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	1<<1
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("DONTDELETE"), 
		/*szEgName*/	_WT("DONTDELETE"), 
		/*szExplain*/	_WT("Ŀ�����Կɶ���д, ��ö��, �����������á�"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	1<<2
	},
};

#define ENUM_V8_PROPERTY_ATTRI_EXPLAIN		"����������ö�ٳ�����"

LIB_DATA_TYPE_ELEMENT s_KeyEventEnumList[] = {
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("RAWKEYDOWN"), 
		/*szEgName*/	_WT("RAWKEYDOWN"), 
		/*szExplain*/	_WT("���°�����"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	0
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("KEYDOWN"), 
		/*szEgName*/	_WT("KEYDOWN"), 
		/*szExplain*/	_WT("֪ͨ�Ѱ��¼������ݼ���������Ի���, ��ֵ��һ�����������ַ�һһ��Ӧ���ַ�Ӧ��ʹ�� CHAR ���ͽ������롣"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	1
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("KEYUP"), 
		/*szEgName*/	_WT("KEYUP"), 
		/*szExplain*/	_WT("֪ͨ���ѵ���"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	2
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("CHAR"), 
		/*szEgName*/	_WT("CHAR"), 
		/*szExplain*/	_WT("���������ַ���֪ͨ������ʹ�ô����ͽ����ַ��ı����롣�����¼����ܻ����0����1�����߸�����ַ��¼�, ����ȡ���ڰ���, ���Ի����Ͳ���ϵͳ��"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	3
	},
};
#define ENUM_KEY_EVENT_EXPLAIN		"�����¼�����ö�ٳ�����"

LIB_DATA_TYPE_ELEMENT s_TouchEventTypeEnumList[] = {
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("TET_RELEASED"), 
		/*szEgName*/	_WT("TET_RELEASED"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	0
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("TET_PRESSED"), 
		/*szEgName*/	_WT("TET_PRESSED"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	1
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("TET_MOVED"), 
		/*szEgName*/	_WT("TET_MOVED"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	2
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("TET_CANCELLED"), 
		/*szEgName*/	_WT("TET_CANCELLED"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	3
	},
};
#define ENUM_TOUCH_EVENT_TYPE_EXPLAIN		"����״̬����ö�ٳ���"

LIB_DATA_TYPE_ELEMENT s_TouchPointerTypeEnumList[] = {
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("TYPE_TOUCH"), 
		/*szEgName*/	_WT("TYPE_TOUCH"), 
		/*szExplain*/	_WT("������"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	0
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("TYPE_MOUSE"), 
		/*szEgName*/	_WT("TYPE_MOUSE"), 
		/*szExplain*/	_WT("���"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	1
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("TYPE_PEN"), 
		/*szEgName*/	_WT("TYPE_PEN"), 
		/*szExplain*/	_WT("����"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	2
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("TYPE_ERASER"), 
		/*szEgName*/	_WT("TYPE_ERASER"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	3
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("TYPE_UNKNOWN"), 
		/*szEgName*/	_WT("TYPE_UNKNOWN"), 
		/*szExplain*/	_WT(""), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	4
	},
};
#define ENUM_TOUCH_POINTER_TYPE_EXPLAIN		"�����豸ָ������ö�ٳ���"

LIB_DATA_TYPE_ELEMENT s_PostDataElementTypeEnumList[] = {
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("EMPTY"), 
		/*szEgName*/	_WT("EMPTY"), 
		/*szExplain*/	_WT("��"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	0
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("BYTES"), 
		/*szEgName*/	_WT("BYTES"), 
		/*szExplain*/	_WT("�ֽ���"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	1
	},
	{ 
		/*dtType*/ 		SDT_INT, 
		/*pArySpec*/	NULL, 
		/*szName*/		_WT("FILE"), 
		/*szEgName*/	_WT("FILE"), 
		/*szExplain*/	_WT("�ļ�"), 
		/*dwState*/		LES_HAS_DEFAULT_VALUE, 
		/*nDefault*/	2
	},
};
#define ENUM_POST_DATA_ELEMENT_TYPE_EXPLAIN		"�ύ����Ԫ������"