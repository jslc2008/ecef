#pragma once

#include "stdafx.h"
#include "lib2.h"


#define DECL_DATA_TYPE_ProxyBrowserSettings \
	{ /*5*/ \
		/*m_szName*/		 _WT("ˮ�����������"), \
		/*m_szEgName*/		 _WT("ProxyBrowserSettings"), \
		/*m_szExplain*/		 _WT("�ṩ�������ʼ�����á�"), \
		/*m_nCmdCount*/		 34, \
		/*m_pnCmdsIndex*/		 s_nProxyBrowserSettingsElementCmdIndex, \
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

#define DECL_DATA_TYPE_ProxyBrowserSettings_ARGINFO \
	{ /****** ProxyBrowserSettings::SetStandardFontFamily ** 0 **/ \
		/*name*/	 _WT("��������"), \
		/*explain*/	 _WT("������������"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowserSettings::SetFixedFontFamily ** 1 **/ \
		/*name*/	 _WT("��������"), \
		/*explain*/	 _WT("������������"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowserSettings::SetSerifFontFamily ** 2 **/ \
		/*name*/	 _WT("��������"), \
		/*explain*/	 _WT("������������"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowserSettings::SetSansSerifFontFamily ** 3 **/ \
		/*name*/	 _WT("��������"), \
		/*explain*/	 _WT("������������"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowserSettings::SetCursiveFontFamily ** 4 **/ \
		/*name*/	 _WT("��������"), \
		/*explain*/	 _WT("������������"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowserSettings::SetFantasyFontFamily ** 5 **/ \
		/*name*/	 _WT("��������"), \
		/*explain*/	 _WT("������������"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowserSettings::SetDefaultFontSize ** 6 **/ \
		/*name*/	 _WT("�����С"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowserSettings::SetDefaultFixedFontSize ** 7 **/ \
		/*name*/	 _WT("�����С"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowserSettings::SetMinimumFontSize ** 8 **/ \
		/*name*/	 _WT("��С��С"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowserSettings::SetMinimumLogicalFontSize ** 9 **/ \
		/*name*/	 _WT("��С�����С"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowserSettings::SetDefaultEncoding ** 10 **/ \
		/*name*/	 _WT("Ĭ�ϱ���"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowserSettings::SetRemoteFonts ** 11 **/ \
		/*name*/	 _WT("״̬����"), \
		/*explain*/	 _WT("����״̬���ض���ֵΪö�ٳ���: #״̬����.*"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowserSettings::SetJavascript ** 12 **/ \
		/*name*/	 _WT("״̬����"), \
		/*explain*/	 _WT("��������״̬, ����ֵΪö�ٳ���: #״̬����.* ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowserSettings::SetJavascriptCloseWindow ** 13 **/ \
		/*name*/	 _WT("״̬����"), \
		/*explain*/	 _WT("��������״̬, ����ֵΪö�ٳ���: #״̬����.* ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowserSettings::SetJavascriptAccessClipboard ** 14 **/ \
		/*name*/	 _WT("״̬����"), \
		/*explain*/	 _WT("��������״̬, ����ֵΪö�ٳ���: #״̬����.* ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowserSettings::SetJavascriptDomPaste ** 15 **/ \
		/*name*/	 _WT("״̬����"), \
		/*explain*/	 _WT("��������״̬, ����ֵΪö�ٳ���: #״̬����.* ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowserSettings::SetPlugins ** 16 **/ \
		/*name*/	 _WT("״̬����"), \
		/*explain*/	 _WT("��������״̬, ����ֵΪö�ٳ���: #״̬����.* ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowserSettings::SetUniversalAccessFromFileUrls ** 17 **/ \
		/*name*/	 _WT("״̬����"), \
		/*explain*/	 _WT("��������״̬, ����ֵΪö�ٳ���: #״̬����.* ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowserSettings::SetFileAccessFromFileUrls ** 18 **/ \
		/*name*/	 _WT("״̬����"), \
		/*explain*/	 _WT("��������״̬, ����ֵΪö�ٳ���: #״̬����.* ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowserSettings::SetWebSecurity ** 19 **/ \
		/*name*/	 _WT("״̬����"), \
		/*explain*/	 _WT("��������״̬, ����ֵΪö�ٳ���: #״̬����.* ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowserSettings::SetImageLoading ** 20 **/ \
		/*name*/	 _WT("״̬����"), \
		/*explain*/	 _WT("��������״̬, ����ֵΪö�ٳ���: #״̬����.* ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowserSettings::SetImageShrinkStandaloneToFit ** 21 **/ \
		/*name*/	 _WT("״̬����"), \
		/*explain*/	 _WT("��������״̬, ����ֵΪö�ٳ���: #״̬����.* ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowserSettings::SetTextAreaResize ** 22 **/ \
		/*name*/	 _WT("״̬����"), \
		/*explain*/	 _WT("��������״̬, ����ֵΪö�ٳ���: #״̬����.* ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowserSettings::SetTabToLinks ** 23 **/ \
		/*name*/	 _WT("״̬����"), \
		/*explain*/	 _WT("��������״̬, ����ֵΪö�ٳ���: #״̬����.* ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowserSettings::SetLocalStorage ** 24 **/ \
		/*name*/	 _WT("״̬����"), \
		/*explain*/	 _WT("��������״̬, ����ֵΪö�ٳ���: #״̬����.* ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowserSettings::SetDataBase ** 25 **/ \
		/*name*/	 _WT("����״̬"), \
		/*explain*/	 _WT("��������״̬, ����ֵΪö�ٳ���: #״̬����.* ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowserSettings::SetApplicationCache ** 26 **/ \
		/*name*/	 _WT("״̬����"), \
		/*explain*/	 _WT("��������״̬, ����ֵΪö�ٳ���: #״̬����.* ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowserSettings::SetWebGL ** 27 **/ \
		/*name*/	 _WT("״̬����"), \
		/*explain*/	 _WT("��������״̬, ����ֵΪö�ٳ���: #״̬����.* ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowserSettings::SetBackgroundColor ** 28 **/ \
		/*name*/	 _WT("��ɫ"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowserSettings::SetAcceptLanguageList ** 29 **/ \
		/*name*/	 _WT("�����ַ���"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyBrowserSettings_CMDINFO(BeginIndex) \
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
		/*ccname*/	_WT("��׼����"),\
		/*egname*/	_WT("SetStandardFontFamily"), \
		/*explain*/	_WT(""), \
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
	{ /*5*/ \
		/*ccname*/	_WT("�ȿ�����"),\
		/*egname*/	_WT("SetFixedFontFamily"), \
		/*explain*/	_WT(""), \
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
	{ /*6*/ \
		/*ccname*/	_WT("��������"),\
		/*egname*/	_WT("SetSerifFontFamily"), \
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
	{ /*7*/ \
		/*ccname*/	_WT("�޳�������"),\
		/*egname*/	_WT("SetSansSerifFontFamily"), \
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
	{ /*8*/ \
		/*ccname*/	_WT("��д����"),\
		/*egname*/	_WT("SetCursiveFontFamily"), \
		/*explain*/	_WT(""), \
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
	{ /*9*/ \
		/*ccname*/	_WT("��������"),\
		/*egname*/	_WT("SetFantasyFontFamily"), \
		/*explain*/	_WT(""), \
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
		/*ccname*/	_WT("Ĭ�������С"),\
		/*egname*/	_WT("SetDefaultFontSize"), \
		/*explain*/	_WT(""), \
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
	{ /*11*/ \
		/*ccname*/	_WT("Ĭ�ϵȿ������С"),\
		/*egname*/	_WT("SetDefaultFixedFontSize"), \
		/*explain*/	_WT(""), \
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
	{ /*12*/ \
		/*ccname*/	_WT("������С��С"),\
		/*egname*/	_WT("SetMinimumFontSize"), \
		/*explain*/	_WT(""), \
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
	{ /*13*/ \
		/*ccname*/	_WT("������С�����С"),\
		/*egname*/	_WT("SetMinimumLogicalFontSize"), \
		/*explain*/	_WT(""), \
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
	{ /*14*/ \
		/*ccname*/	_WT("ҳ��ȱʡ����"),\
		/*egname*/	_WT("SetDefaultEncoding"), \
		/*explain*/	_WT("Ĭ������Ϊ: \"ISO-8859-1\", Ҳ����ʹ��\"default-encoding\"�����п��ؽ������á�"), \
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
	{ /*15*/ \
		/*ccname*/	_WT("����Զ������Դ"),\
		/*egname*/	_WT("SetRemoteFonts"), \
		/*explain*/	_WT(""), \
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
	{ /*16*/ \
		/*ccname*/	_WT("�ű��ɷ�ִ��"),\
		/*egname*/	_WT("SetJavascript"), \
		/*explain*/	_WT("�����Ƿ����ִ��Javascript�ű���"), \
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
	{ /*17*/ \
		/*ccname*/	_WT("�ű��ɷ�رմ���"),\
		/*egname*/	_WT("SetJavascriptCloseWindow"), \
		/*explain*/	_WT("�����Ƿ����ʹ��JavaScript�ر�δͨ��JavaScript�򿪵Ĵ��ڡ�Javascript�Կ����ڹر�ͨ��Javascript�򿪵Ĵ��ڻ�û�к���/ǰ����ʷ��¼�Ĵ��ڡ�"), \
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
	{ /*18*/ \
		/*ccname*/	_WT("�ű��ɷ���ʼ�����"),\
		/*egname*/	_WT("SetJavascriptAccessClipboard"), \
		/*explain*/	_WT("����JavaScript�Ƿ���÷��ʼ����塣"), \
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
	{ /*19*/ \
		/*ccname*/	_WT("�ű��ɷ�ճ��DOM"),\
		/*egname*/	_WT("SetJavascriptDomPaste"), \
		/*explain*/	_WT("�����Ƿ�ͨ�� execCommand(\"paste\") �ڱ༭����֧��DOMճ���� Ҫʹ�ø�������Ҫ��ͬ �ű��ɷ���ʼ����� ����һ�����á�"), \
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
	{ /*20*/ \
		/*ccname*/	_WT("���ز��"),\
		/*egname*/	_WT("SetPlugins"), \
		/*explain*/	_WT("�����Ƿ�������ز��"), \
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
	{ /*21*/ \
		/*ccname*/	_WT("�ļ�URL���з���"),\
		/*egname*/	_WT("SetUniversalAccessFromFileUrls"), \
		/*explain*/	_WT("�����ļ�URL�Ƿ���Է�������URL��"), \
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
	{ /*22*/ \
		/*ccname*/	_WT("�ļ�URL���ط���"),\
		/*egname*/	_WT("SetFileAccessFromFileUrls"), \
		/*explain*/	_WT("�����ļ�URL�Ƿ���÷��������ļ�URL"), \
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
	{ /*23*/ \
		/*ccname*/	_WT("WEB��ȫ����"),\
		/*egname*/	_WT("SetWebSecurity"), \
		/*explain*/	_WT("�����Ƿ�Web��ȫ����(ͬԴ����)����Ϊǿ��ִ�С���������ô�����, ��Ϊ����������հ�ȫ��Ϊ, �����վ��ű�(XSS)��"), \
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
	{ /*24*/ \
		/*ccname*/	_WT("����ͼ��"),\
		/*egname*/	_WT("SetImageLoading"), \
		/*explain*/	_WT("�����Ƿ���������ͼ��URL�������Ҫ, �Խ���Ⱦ�����ͼ��"), \
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
	{ /*25*/ \
		/*ccname*/	_WT("ͼ������Ӧ����"),\
		/*egname*/	_WT("SetImageShrinkStandaloneToFit"), \
		/*explain*/	_WT("�����Ƿ񽫶���ͼ����С���ʺ�ҳ�档"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+21] \
	},\
	{ /*26*/ \
		/*ccname*/	_WT("�����ı�����ߴ�"),\
		/*egname*/	_WT("SetTextAreaResize"), \
		/*explain*/	_WT("�����Ƿ���õ����ı�����(Text Area)�Ĵ�С��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+22] \
	},\
	{ /*27*/ \
		/*ccname*/	_WT("ת�ƽ��㵽����"),\
		/*egname*/	_WT("SetTabToLinks"), \
		/*explain*/	_WT("����TAB���Ƿ���ý�����ת�Ƶ����ӡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+23] \
	},\
	{ /*28*/ \
		/*ccname*/	_WT("LocalStorage"),\
		/*egname*/	_WT("SetLocalStorage"), \
		/*explain*/	_WT("�����Ƿ����ʹ�ñ��ش洢(Local Storage)��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+24] \
	},\
	{ /*29*/ \
		/*ccname*/	_WT("Database"),\
		/*egname*/	_WT("SetDataBase"), \
		/*explain*/	_WT("�����Ƿ����ʹ�����ݿ�(Database)��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+25] \
	},\
	{ /*30*/ \
		/*ccname*/	_WT("ApplicationCache"),\
		/*egname*/	_WT("SetApplicationCache"), \
		/*explain*/	_WT("���ƿɷ�ʹ��Ӧ�û���(Application Cache)��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+26] \
	},\
	{ /*31*/ \
		/*ccname*/	_WT("WebGL"),\
		/*egname*/	_WT("SetWebGL"), \
		/*explain*/	_WT("�����Ƿ����ʹ��WebGL, ��ע��, WebGL ��ҪӲ��֧��, ��ʹ����, Ҳ�����޷�������ϵͳ�����С�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+27] \
	},\
	{ /*32*/ \
		/*ccname*/	_WT("������ɫ"),\
		/*egname*/	_WT("SetBackgroundColor"), \
		/*explain*/	_WT("�ڼ����ȶ�֮ǰ��δָ���ĵ���ɫʱ�����ʹ�õı�����ɫ��alpha����������ȫ��͸��(0xFF)����ȫ͸��(0x00).���Alpha������ȫ��͸��, ��RGB�����������ڱ���ɫ��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+28] \
	},\
	{ /*33*/ \
		/*ccname*/	_WT("���������ַ���"),\
		/*egname*/	_WT("SetAcceptLanguageList"), \
		/*explain*/	_WT("�����Զ��ŷָ������Դ���������б�, ���ܳ��ֿո�, ��Щ�ַ�������HTTP Accept-Language ��ͷ��ʹ�á�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+29] \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyBrowserSettings_FUN_NAMES \
	EDITIONS("ProxyBrowserSettings_Constructor"),\
	EDITIONS("ProxyBrowserSettings_Destructor"),\
	EDITIONS("ProxyBrowserSettings_CopyConstructor"),\
	EDITIONS("ProxyBrowserSettings_IsValid"),\
	EDITIONS("ProxyBrowserSettings_SetStandardFontFamily"),\
	EDITIONS("ProxyBrowserSettings_SetFixedFontFamily"),\
	EDITIONS("ProxyBrowserSettings_SetSerifFontFamily"),\
	EDITIONS("ProxyBrowserSettings_SetSansSerifFontFamily"),\
	EDITIONS("ProxyBrowserSettings_SetCursiveFontFamily"),\
	EDITIONS("ProxyBrowserSettings_SetFantasyFontFamily"),\
	EDITIONS("ProxyBrowserSettings_SetDefaultFontSize"),\
	EDITIONS("ProxyBrowserSettings_SetDefaultFixedFontSize"),\
	EDITIONS("ProxyBrowserSettings_SetMinimumFontSize"),\
	EDITIONS("ProxyBrowserSettings_SetMinimumLogicalFontSize"),\
	EDITIONS("ProxyBrowserSettings_SetDefaultEncoding"),\
	EDITIONS("ProxyBrowserSettings_SetRemoteFonts"),\
	EDITIONS("ProxyBrowserSettings_SetJavascript"),\
	EDITIONS("ProxyBrowserSettings_SetJavascriptCloseWindow"),\
	EDITIONS("ProxyBrowserSettings_SetJavascriptAccessClipboard"),\
	EDITIONS("ProxyBrowserSettings_SetJavascriptDomPaste"),\
	EDITIONS("ProxyBrowserSettings_SetPlugins"),\
	EDITIONS("ProxyBrowserSettings_SetUniversalAccessFromFileUrls"),\
	EDITIONS("ProxyBrowserSettings_SetFileAccessFromFileUrls"),\
	EDITIONS("ProxyBrowserSettings_SetWebSecurity"),\
	EDITIONS("ProxyBrowserSettings_SetImageLoading"),\
	EDITIONS("ProxyBrowserSettings_SetImageShrinkStandaloneToFit"),\
	EDITIONS("ProxyBrowserSettings_SetTextAreaResize"),\
	EDITIONS("ProxyBrowserSettings_SetTabToLinks"),\
	EDITIONS("ProxyBrowserSettings_SetLocalStorage"),\
	EDITIONS("ProxyBrowserSettings_SetDataBase"),\
	EDITIONS("ProxyBrowserSettings_SetApplicationCache"),\
	EDITIONS("ProxyBrowserSettings_SetWebGL"),\
	EDITIONS("ProxyBrowserSettings_SetBackgroundColor"),\
	EDITIONS("ProxyBrowserSettings_SetAcceptLanguageList"),\


//==========================================

#define DECL_DATA_TYPE_ProxyBrowserSettings_FUN_CALLS \
	EDITIONF(ProxyBrowserSettings_Constructor),\
	EDITIONF(ProxyBrowserSettings_Destructor),\
	EDITIONF(ProxyBrowserSettings_CopyConstructor),\
	EDITIONF(ProxyBrowserSettings_IsValid),\
	EDITIONF(ProxyBrowserSettings_SetStandardFontFamily),\
	EDITIONF(ProxyBrowserSettings_SetFixedFontFamily),\
	EDITIONF(ProxyBrowserSettings_SetSerifFontFamily),\
	EDITIONF(ProxyBrowserSettings_SetSansSerifFontFamily),\
	EDITIONF(ProxyBrowserSettings_SetCursiveFontFamily),\
	EDITIONF(ProxyBrowserSettings_SetFantasyFontFamily),\
	EDITIONF(ProxyBrowserSettings_SetDefaultFontSize),\
	EDITIONF(ProxyBrowserSettings_SetDefaultFixedFontSize),\
	EDITIONF(ProxyBrowserSettings_SetMinimumFontSize),\
	EDITIONF(ProxyBrowserSettings_SetMinimumLogicalFontSize),\
	EDITIONF(ProxyBrowserSettings_SetDefaultEncoding),\
	EDITIONF(ProxyBrowserSettings_SetRemoteFonts),\
	EDITIONF(ProxyBrowserSettings_SetJavascript),\
	EDITIONF(ProxyBrowserSettings_SetJavascriptCloseWindow),\
	EDITIONF(ProxyBrowserSettings_SetJavascriptAccessClipboard),\
	EDITIONF(ProxyBrowserSettings_SetJavascriptDomPaste),\
	EDITIONF(ProxyBrowserSettings_SetPlugins),\
	EDITIONF(ProxyBrowserSettings_SetUniversalAccessFromFileUrls),\
	EDITIONF(ProxyBrowserSettings_SetFileAccessFromFileUrls),\
	EDITIONF(ProxyBrowserSettings_SetWebSecurity),\
	EDITIONF(ProxyBrowserSettings_SetImageLoading),\
	EDITIONF(ProxyBrowserSettings_SetImageShrinkStandaloneToFit),\
	EDITIONF(ProxyBrowserSettings_SetTextAreaResize),\
	EDITIONF(ProxyBrowserSettings_SetTabToLinks),\
	EDITIONF(ProxyBrowserSettings_SetLocalStorage),\
	EDITIONF(ProxyBrowserSettings_SetDataBase),\
	EDITIONF(ProxyBrowserSettings_SetApplicationCache),\
	EDITIONF(ProxyBrowserSettings_SetWebGL),\
	EDITIONF(ProxyBrowserSettings_SetBackgroundColor),\
	EDITIONF(ProxyBrowserSettings_SetAcceptLanguageList),\


//==========================================

extern "C"
void EDITIONF(ProxyBrowserSettings_Constructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserSettings_Destructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserSettings_CopyConstructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserSettings_IsValid) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserSettings_SetStandardFontFamily) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserSettings_SetFixedFontFamily) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserSettings_SetSerifFontFamily) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserSettings_SetSansSerifFontFamily) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserSettings_SetCursiveFontFamily) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserSettings_SetFantasyFontFamily) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserSettings_SetDefaultFontSize) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserSettings_SetDefaultFixedFontSize) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserSettings_SetMinimumFontSize) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserSettings_SetMinimumLogicalFontSize) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserSettings_SetDefaultEncoding) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserSettings_SetRemoteFonts) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserSettings_SetJavascript) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserSettings_SetJavascriptCloseWindow) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserSettings_SetJavascriptAccessClipboard) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserSettings_SetJavascriptDomPaste) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserSettings_SetPlugins) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserSettings_SetUniversalAccessFromFileUrls) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserSettings_SetFileAccessFromFileUrls) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserSettings_SetWebSecurity) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserSettings_SetImageLoading) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserSettings_SetImageShrinkStandaloneToFit) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserSettings_SetTextAreaResize) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserSettings_SetTabToLinks) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserSettings_SetLocalStorage) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserSettings_SetDataBase) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserSettings_SetApplicationCache) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserSettings_SetWebGL) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserSettings_SetBackgroundColor) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserSettings_SetAcceptLanguageList) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);


//==========================================

