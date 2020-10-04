#pragma once

#include "stdafx.h"
#include "lib2.h"


#define DECL_DATA_TYPE_ProxyBrowserHost \
	{ /*5*/ \
		/*m_szName*/		 _WT("Chromium���������"), \
		/*m_szEgName*/		 _WT("ProxyBrowserHost"), \
		/*m_szExplain*/		 _WT("���ڱ�ʾ��������ڹ��̷�����ࡣ���෽��ֻ��������������е��á�"), \
		/*m_nCmdCount*/		 38, \
		/*m_pnCmdsIndex*/		 s_nProxyBrowserHostElementCmdIndex, \
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

#define DECL_DATA_TYPE_ProxyBrowserHost_ARGINFO \
	{ /****** ProxyBrowserHost::CloseBrowser ** 0 **/ \
		/*name*/	 _WT("ǿ�ƹر�"), \
		/*explain*/	 _WT("�Ƿ�Ҫ�������ǿ�ƹرա� ����Ϊ��ʱ, ���ᷢ��\"����ر�\"�¼�, �ڸ��¼��пɽ�һ�������Ƿ���Ȼ�رո������, ������鿴���¼�˵��������Ϊ��ʱ, ��������ᱻҪ��رղ��Ҳ��ᷢ��\"����ر�\"�¼���"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBrowserHost::SetFocus ** 1 **/ \
		/*name*/	 _WT("��ȡ����"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBrowserHost::SetZoomLevel ** 2 **/ \
		/*name*/	 _WT("���ű���"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_DOUBLE, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBrowserHost::StartDownload ** 3 **/ \
		/*name*/	 _WT("url"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBrowserHost::SetMouseCursorChangeDisabled ** 4 **/ \
		/*name*/	 _WT("��ֹ"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBrowserHost::ReplaceMisspelling ** 5 **/ \
		/*name*/	 _WT("word"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBrowserHost::AddWordToDictionary ** 6 **/ \
		/*name*/	 _WT("word"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBrowserHost::WasHidden ** 7 **/ \
		/*name*/	 _WT("hidden"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBrowserHost::SendKeyEvent ** 8 **/ \
		/*name*/	 _WT("�����¼�"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(18,0),  /*shrewd_ptr<ProxyKeyEvent>*/ \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBrowserHost::SendMouseClickEvent ** 9 **/ \
		/*name*/	 _WT("����¼�"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(21,0),  /*shrewd_ptr<ProxyMouseEvent>*/ \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBrowserHost::SendMouseClickEvent ** 10 **/ \
		/*name*/	 _WT("�������"), \
		/*explain*/	 _WT("����ֵΪö�ٳ���: #����¼�.* "), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBrowserHost::SendMouseClickEvent ** 11 **/ \
		/*name*/	 _WT("�Ƿ���"), \
		/*explain*/	 _WT("�Ƿ��𰴼�"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBrowserHost::SendMouseClickEvent ** 12 **/ \
		/*name*/	 _WT("�������"), \
		/*explain*/	 _WT("�������"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBrowserHost::SendMouseMoveEvent ** 13 **/ \
		/*name*/	 _WT("�ƶ��¼�"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(21,0),  /*shrewd_ptr<ProxyMouseEvent>*/ \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBrowserHost::SendMouseMoveEvent ** 14 **/ \
		/*name*/	 _WT("�Ƿ��뿪"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBrowserHost::SendMouseWheelEvent ** 15 **/ \
		/*name*/	 _WT("�����¼�"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(21,0),  /*shrewd_ptr<ProxyMouseEvent>*/ \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBrowserHost::SendMouseWheelEvent ** 16 **/ \
		/*name*/	 _WT("��������"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBrowserHost::SendMouseWheelEvent ** 17 **/ \
		/*name*/	 _WT("��������"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBrowserHost::SendTouchEvent ** 18 **/ \
		/*name*/	 _WT("�����¼�"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(35,0),  /*shrewd_ptr<ProxyTouchEvent>*/ \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBrowserHost::SendFocusEvent ** 19 **/ \
		/*name*/	 _WT("���ý���"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBrowserHost::SetWindowlessFrameRate ** 20 **/ \
		/*name*/	 _WT("frame_rate"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBrowserHost::SetAudioMuted ** 21 **/ \
		/*name*/	 _WT("����"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBrowserHost::ShowDevTools ** 22 **/ \
		/*name*/	 _WT("windowInfo"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(37,0),  /*shrewd_ptr<ProxyWindowInfo>*/ \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBrowserHost::ShowDevTools ** 23 **/ \
		/*name*/	 _WT("settings"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(7,0),  /*shrewd_ptr<ProxyBrowserSettings>*/ \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBrowserHost::ShowDevTools ** 24 **/ \
		/*name*/	 _WT("inspect_element_at_x"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyBrowserHost::ShowDevTools ** 25 **/ \
		/*name*/	 _WT("inspect_element_at_y"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyBrowserHost_CMDINFO(BeginIndex) \
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
		/*ccname*/	_WT("ȡ�����"),\
		/*egname*/	_WT("GetBrowser"), \
		/*explain*/	_WT("���ر�ʵ���е����������ʵ����"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(5,0),  /*shrewd_ptr<ProxyBrowser>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*5*/ \
		/*ccname*/	_WT("�ر������"),\
		/*egname*/	_WT("CloseBrowser"), \
		/*explain*/	_WT("���ʵ���е���������͹ر����󡣷��ʹ������JavaScript��\"onbeforeunload\"�¼�����������"), \
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
		/*ccname*/	_WT("TryCloseBrowser"),\
		/*egname*/	_WT("TryCloseBrowser"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+1] \
	},\
	{ /*7*/ \
		/*ccname*/	_WT("��ȡ����"),\
		/*egname*/	_WT("SetFocus"), \
		/*explain*/	_WT("����������Ƿ���ȡ���㡣"), \
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
	{ /*8*/ \
		/*ccname*/	_WT("ȡ���ھ��"),\
		/*egname*/	_WT("GetWindowHandle"), \
		/*explain*/	_WT("��ȡ��������ھ����"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_INT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+2] \
	},\
	{ /*9*/ \
		/*ccname*/	_WT("ȡ�����ߴ��ھ��"),\
		/*egname*/	_WT("GetOpenerWindowHandle"), \
		/*explain*/	_WT("��ȡ��������������ڵĴ��ھ����"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_INT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+2] \
	},\
	{ /*10*/ \
		/*ccname*/	_WT("ȡ�Ự����"),\
		/*egname*/	_WT("GetRequestContext"), \
		/*explain*/	_WT("����������ĻỰ�����Ự��������ʵ����"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(27,0),  /*shrewd_ptr<ProxyRequestContext>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+2] \
	},\
	{ /*11*/ \
		/*ccname*/	_WT("ȡ���ű���"),\
		/*egname*/	_WT("GetZoomLevel"), \
		/*explain*/	_WT("�������ǰ�����ҳ�����ű�����Ĭ��ֵΪ: 0.0f"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_DOUBLE, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+2] \
	},\
	{ /*12*/ \
		/*ccname*/	_WT("�������ű���"),\
		/*egname*/	_WT("SetZoomLevel"), \
		/*explain*/	_WT("���õ�ǰ�����ҳ�����ű���, ����Ϊ0.0fʱ�������ű�����"), \
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
	{ /*13*/ \
		/*ccname*/	_WT("��������"),\
		/*egname*/	_WT("StartDownload"), \
		/*explain*/	_WT("����ָ��URL��Դ��"), \
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
	{ /*14*/ \
		/*ccname*/	_WT("��ӡҳ��"),\
		/*egname*/	_WT("Print"), \
		/*explain*/	_WT("��ӡ��ǰҳ�档"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+4] \
	},\
	{ /*15*/ \
		/*ccname*/	_WT("���ý�ֹ���Ĺ��"),\
		/*egname*/	_WT("SetMouseCursorChangeDisabled"), \
		/*explain*/	_WT("���õ�ǰ������Ƿ��ֹ��������ꡣ"), \
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
	{ /*16*/ \
		/*ccname*/	_WT("�ɷ���Ĺ��"),\
		/*egname*/	_WT("IsMouseCursorChangeDisabled"), \
		/*explain*/	_WT("�����ǰ����������������귵���档"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+5] \
	},\
	{ /*17*/ \
		/*ccname*/	_WT("ReplaceMisspelling"),\
		/*egname*/	_WT("ReplaceMisspelling"), \
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
	{ /*18*/ \
		/*ccname*/	_WT("AddWordToDictionary"),\
		/*egname*/	_WT("AddWordToDictionary"), \
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
	{ /*19*/ \
		/*ccname*/	_WT("IsWindowRenderingDisabled"),\
		/*egname*/	_WT("IsWindowRenderingDisabled"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+7] \
	},\
	{ /*20*/ \
		/*ccname*/	_WT("WasResized"),\
		/*egname*/	_WT("WasResized"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+7] \
	},\
	{ /*21*/ \
		/*ccname*/	_WT("WasHidden"),\
		/*egname*/	_WT("WasHidden"), \
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
	{ /*22*/ \
		/*ccname*/	_WT("NotifyScreenInfoChanged"),\
		/*egname*/	_WT("NotifyScreenInfoChanged"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+8] \
	},\
	{ /*23*/ \
		/*ccname*/	_WT("���ͼ����¼�"),\
		/*egname*/	_WT("SendKeyEvent"), \
		/*explain*/	_WT("��ǰ���������ָ���ļ����¼���"), \
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
	{ /*24*/ \
		/*ccname*/	_WT("����������¼�"),\
		/*egname*/	_WT("SendMouseClickEvent"), \
		/*explain*/	_WT("��ǰ���������������¼���"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	4, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+9] \
	},\
	{ /*25*/ \
		/*ccname*/	_WT("��������ƶ��¼�"),\
		/*egname*/	_WT("SendMouseMoveEvent"), \
		/*explain*/	_WT("��ǰ�������������ƶ��¼���"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+13] \
	},\
	{ /*26*/ \
		/*ccname*/	_WT("�����������¼�"),\
		/*egname*/	_WT("SendMouseWheelEvent"), \
		/*explain*/	_WT("��ǰ����������������¼���"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	3, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+15] \
	},\
	{ /*27*/ \
		/*ccname*/	_WT("���ʹ����¼�"),\
		/*egname*/	_WT("SendTouchEvent"), \
		/*explain*/	_WT("��ǰ��������ʹ����¼���"), \
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
	{ /*28*/ \
		/*ccname*/	_WT("���ͽ����¼�"),\
		/*egname*/	_WT("SendFocusEvent"), \
		/*explain*/	_WT("��ǰ��������ͽ����¼�"), \
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
	{ /*29*/ \
		/*ccname*/	_WT("���Ͳ���ʧ�¼�"),\
		/*egname*/	_WT("SendCaptureLostEvent"), \
		/*explain*/	_WT("����������Ͳ���ʧ�¼���"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+20] \
	},\
	{ /*30*/ \
		/*ccname*/	_WT("NotifyMoveOrResizeStarted"),\
		/*egname*/	_WT("NotifyMoveOrResizeStarted"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+20] \
	},\
	{ /*31*/ \
		/*ccname*/	_WT("GetWindowlessFrameRate"),\
		/*egname*/	_WT("GetWindowlessFrameRate"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_INT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+20] \
	},\
	{ /*32*/ \
		/*ccname*/	_WT("SetWindowlessFrameRate"),\
		/*egname*/	_WT("SetWindowlessFrameRate"), \
		/*explain*/	_WT(""), \
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
	{ /*33*/ \
		/*ccname*/	_WT("���þ���ģʽ"),\
		/*egname*/	_WT("SetAudioMuted"), \
		/*explain*/	_WT("���õ�ǰ������Ƿ����þ���ģʽ��"), \
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
	{ /*34*/ \
		/*ccname*/	_WT("�Ƿ�Ϊ����ģʽ"),\
		/*egname*/	_WT("IsAudioMuted"), \
		/*explain*/	_WT("�����ǰ�����������Ϊ����ģʽ�����档"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+22] \
	},\
	{ /*35*/ \
		/*ccname*/	_WT("ShowDevTools"),\
		/*egname*/	_WT("ShowDevTools"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	4, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+22] \
	},\
	{ /*36*/ \
		/*ccname*/	_WT("CloseDevTools"),\
		/*egname*/	_WT("CloseDevTools"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+26] \
	},\
	{ /*37*/ \
		/*ccname*/	_WT("HasDevTools"),\
		/*egname*/	_WT("HasDevTools"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+26] \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyBrowserHost_FUN_NAMES \
	EDITIONS("ProxyBrowserHost_Constructor"),\
	EDITIONS("ProxyBrowserHost_Destructor"),\
	EDITIONS("ProxyBrowserHost_CopyConstructor"),\
	EDITIONS("ProxyBrowserHost_IsValid"),\
	EDITIONS("ProxyBrowserHost_GetBrowser"),\
	EDITIONS("ProxyBrowserHost_CloseBrowser"),\
	EDITIONS("ProxyBrowserHost_TryCloseBrowser"),\
	EDITIONS("ProxyBrowserHost_SetFocus"),\
	EDITIONS("ProxyBrowserHost_GetWindowHandle"),\
	EDITIONS("ProxyBrowserHost_GetOpenerWindowHandle"),\
	EDITIONS("ProxyBrowserHost_GetRequestContext"),\
	EDITIONS("ProxyBrowserHost_GetZoomLevel"),\
	EDITIONS("ProxyBrowserHost_SetZoomLevel"),\
	EDITIONS("ProxyBrowserHost_StartDownload"),\
	EDITIONS("ProxyBrowserHost_Print"),\
	EDITIONS("ProxyBrowserHost_SetMouseCursorChangeDisabled"),\
	EDITIONS("ProxyBrowserHost_IsMouseCursorChangeDisabled"),\
	EDITIONS("ProxyBrowserHost_ReplaceMisspelling"),\
	EDITIONS("ProxyBrowserHost_AddWordToDictionary"),\
	EDITIONS("ProxyBrowserHost_IsWindowRenderingDisabled"),\
	EDITIONS("ProxyBrowserHost_WasResized"),\
	EDITIONS("ProxyBrowserHost_WasHidden"),\
	EDITIONS("ProxyBrowserHost_NotifyScreenInfoChanged"),\
	EDITIONS("ProxyBrowserHost_SendKeyEvent"),\
	EDITIONS("ProxyBrowserHost_SendMouseClickEvent"),\
	EDITIONS("ProxyBrowserHost_SendMouseMoveEvent"),\
	EDITIONS("ProxyBrowserHost_SendMouseWheelEvent"),\
	EDITIONS("ProxyBrowserHost_SendTouchEvent"),\
	EDITIONS("ProxyBrowserHost_SendFocusEvent"),\
	EDITIONS("ProxyBrowserHost_SendCaptureLostEvent"),\
	EDITIONS("ProxyBrowserHost_NotifyMoveOrResizeStarted"),\
	EDITIONS("ProxyBrowserHost_GetWindowlessFrameRate"),\
	EDITIONS("ProxyBrowserHost_SetWindowlessFrameRate"),\
	EDITIONS("ProxyBrowserHost_SetAudioMuted"),\
	EDITIONS("ProxyBrowserHost_IsAudioMuted"),\
	EDITIONS("ProxyBrowserHost_ShowDevTools"),\
	EDITIONS("ProxyBrowserHost_CloseDevTools"),\
	EDITIONS("ProxyBrowserHost_HasDevTools"),\


//==========================================

#define DECL_DATA_TYPE_ProxyBrowserHost_FUN_CALLS \
	EDITIONF(ProxyBrowserHost_Constructor),\
	EDITIONF(ProxyBrowserHost_Destructor),\
	EDITIONF(ProxyBrowserHost_CopyConstructor),\
	EDITIONF(ProxyBrowserHost_IsValid),\
	EDITIONF(ProxyBrowserHost_GetBrowser),\
	EDITIONF(ProxyBrowserHost_CloseBrowser),\
	EDITIONF(ProxyBrowserHost_TryCloseBrowser),\
	EDITIONF(ProxyBrowserHost_SetFocus),\
	EDITIONF(ProxyBrowserHost_GetWindowHandle),\
	EDITIONF(ProxyBrowserHost_GetOpenerWindowHandle),\
	EDITIONF(ProxyBrowserHost_GetRequestContext),\
	EDITIONF(ProxyBrowserHost_GetZoomLevel),\
	EDITIONF(ProxyBrowserHost_SetZoomLevel),\
	EDITIONF(ProxyBrowserHost_StartDownload),\
	EDITIONF(ProxyBrowserHost_Print),\
	EDITIONF(ProxyBrowserHost_SetMouseCursorChangeDisabled),\
	EDITIONF(ProxyBrowserHost_IsMouseCursorChangeDisabled),\
	EDITIONF(ProxyBrowserHost_ReplaceMisspelling),\
	EDITIONF(ProxyBrowserHost_AddWordToDictionary),\
	EDITIONF(ProxyBrowserHost_IsWindowRenderingDisabled),\
	EDITIONF(ProxyBrowserHost_WasResized),\
	EDITIONF(ProxyBrowserHost_WasHidden),\
	EDITIONF(ProxyBrowserHost_NotifyScreenInfoChanged),\
	EDITIONF(ProxyBrowserHost_SendKeyEvent),\
	EDITIONF(ProxyBrowserHost_SendMouseClickEvent),\
	EDITIONF(ProxyBrowserHost_SendMouseMoveEvent),\
	EDITIONF(ProxyBrowserHost_SendMouseWheelEvent),\
	EDITIONF(ProxyBrowserHost_SendTouchEvent),\
	EDITIONF(ProxyBrowserHost_SendFocusEvent),\
	EDITIONF(ProxyBrowserHost_SendCaptureLostEvent),\
	EDITIONF(ProxyBrowserHost_NotifyMoveOrResizeStarted),\
	EDITIONF(ProxyBrowserHost_GetWindowlessFrameRate),\
	EDITIONF(ProxyBrowserHost_SetWindowlessFrameRate),\
	EDITIONF(ProxyBrowserHost_SetAudioMuted),\
	EDITIONF(ProxyBrowserHost_IsAudioMuted),\
	EDITIONF(ProxyBrowserHost_ShowDevTools),\
	EDITIONF(ProxyBrowserHost_CloseDevTools),\
	EDITIONF(ProxyBrowserHost_HasDevTools),\


//==========================================

extern "C"
void EDITIONF(ProxyBrowserHost_Constructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_Destructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_CopyConstructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_IsValid) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_GetBrowser) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_CloseBrowser) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_TryCloseBrowser) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_SetFocus) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_GetWindowHandle) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_GetOpenerWindowHandle) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_GetRequestContext) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_GetZoomLevel) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_SetZoomLevel) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_StartDownload) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_Print) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_SetMouseCursorChangeDisabled) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_IsMouseCursorChangeDisabled) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_ReplaceMisspelling) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_AddWordToDictionary) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_IsWindowRenderingDisabled) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_WasResized) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_WasHidden) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_NotifyScreenInfoChanged) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_SendKeyEvent) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_SendMouseClickEvent) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_SendMouseMoveEvent) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_SendMouseWheelEvent) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_SendTouchEvent) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_SendFocusEvent) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_SendCaptureLostEvent) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_NotifyMoveOrResizeStarted) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_GetWindowlessFrameRate) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_SetWindowlessFrameRate) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_SetAudioMuted) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_IsAudioMuted) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_ShowDevTools) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_CloseDevTools) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowserHost_HasDevTools) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);


//==========================================

