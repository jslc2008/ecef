#pragma once

#include "stdafx.h"
#include "lib2.h"


#define DECL_DATA_TYPE_ProxyBrowser \
	{ /*4*/ \
		/*m_szName*/		 _WT("ˮ�������"), \
		/*m_szEgName*/		 _WT("ProxyBrowser"), \
		/*m_szExplain*/		 _WT("���ڴ�����������ࡣ������������п������κ��߳��ϵ��ô��෽��, ����ע��������˵����"), \
		/*m_nCmdCount*/		 70, \
		/*m_pnCmdsIndex*/		 s_nProxyBrowserElementCmdIndex, \
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

#define DECL_DATA_TYPE_ProxyBrowser_ARGINFO \
	{ /****** ProxyBrowser::GetFrame ** 0 **/ \
		/*name*/	 _WT("�������"), \
		/*explain*/	 _WT("�������"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::GetFrameWithIdentity ** 1 **/ \
		/*name*/	 _WT("��ʶ��"), \
		/*explain*/	 _WT("ָ����ܵı�ʶ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT64, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::CloseBrowser ** 2 **/ \
		/*name*/	 _WT("ǿ�ƹر�"), \
		/*explain*/	 _WT("�Ƿ�Ҫ�������ǿ�ƹرա� ����Ϊ��ʱ, ���ᷢ��\"����ر�\"�¼�, �ڸ��¼��пɽ�һ�������Ƿ���Ȼ�رո������, ������鿴���¼�˵��������Ϊ��ʱ, ��������ᱻҪ��رղ��Ҳ��ᷢ��\"����ر�\"�¼���"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SetFocus ** 3 **/ \
		/*name*/	 _WT("����"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SetZoomLevel ** 4 **/ \
		/*name*/	 _WT("���ű���"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_DOUBLE, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::StartDownload ** 5 **/ \
		/*name*/	 _WT("url"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendKeyDownEvent ** 6 **/ \
		/*name*/	 _WT("������"), \
		/*explain*/	 _WT("windows ���������ֵ�롣"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendKeyDownEvent ** 7 **/ \
		/*name*/	 _WT("�Ƿ�Ϊϵͳ��"), \
		/*explain*/	 _WT("ָʾ�Ƿ񽫸��¼���Ϊ\"system key\"�¼�(�й���ϸ��Ϣ, ��μ�: http://msdn.microsoft.com/en-us/library/ms646286(VS.85).aspx)��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendKeyDownEvent ** 8 **/ \
		/*name*/	 _WT("�¼���־"), \
		/*explain*/	 _WT("�¼���־, �����������ܼ��İ���״̬, ����ֵλö�ٳ���: #�¼���־.* ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendKeyUpEvent ** 9 **/ \
		/*name*/	 _WT("������"), \
		/*explain*/	 _WT("windows ���������ֵ�롣"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendKeyUpEvent ** 10 **/ \
		/*name*/	 _WT("�Ƿ�Ϊϵͳ��"), \
		/*explain*/	 _WT("ָʾ�Ƿ񽫸��¼���Ϊ\"system key\"�¼�(�й���ϸ��Ϣ, ��μ�: http://msdn.microsoft.com/en-us/library/ms646286(VS.85).aspx)��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendKeyUpEvent ** 11 **/ \
		/*name*/	 _WT("�¼���־"), \
		/*explain*/	 _WT("�¼���־, �����������ܼ��İ���״̬, ����ֵλö�ٳ���: #�¼���־.* ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendKeyPressEvent ** 12 **/ \
		/*name*/	 _WT("������"), \
		/*explain*/	 _WT("windows ���������ֵ�롣"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendKeyPressEvent ** 13 **/ \
		/*name*/	 _WT("�Ƿ�Ϊϵͳ��"), \
		/*explain*/	 _WT("ָʾ�Ƿ񽫸��¼���Ϊ\"system key\"�¼�(�й���ϸ��Ϣ, ��μ�: http://msdn.microsoft.com/en-us/library/ms646286(VS.85).aspx)��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendKeyPressEvent ** 14 **/ \
		/*name*/	 _WT("����ʱ��"), \
		/*explain*/	 _WT("�Ӱ��µ�����ĺ������ʱ�䡣Ĭ��ֵ: 0 , ��ʾ���º���������"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendKeyPressEvent ** 15 **/ \
		/*name*/	 _WT("�¼���־"), \
		/*explain*/	 _WT("�¼���־, �����������ܼ��İ���״̬, ����ֵλö�ٳ���: #�¼���־.* ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendCharEvent ** 16 **/ \
		/*name*/	 _WT("�ַ�"), \
		/*explain*/	 _WT("�����ַ�, �����ַ�ӦΪ��׼ascii��ֵ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BYTE, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendCharArrayEvent ** 17 **/ \
		/*name*/	 _WT("�ַ�����"), \
		/*explain*/	 _WT("�����ַ�����, �����ַ�ӦΪ��׼acsii��ֵ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendCharArrayEvent ** 18 **/ \
		/*name*/	 _WT("���ʱ��"), \
		/*explain*/	 _WT("ÿ����һ���ַ�������ĺ���ʱ�䡣"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendMouseClickEvent ** 19 **/ \
		/*name*/	 _WT("��ʼλ��X"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendMouseClickEvent ** 20 **/ \
		/*name*/	 _WT("��ʼλ��Y"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendMouseClickEvent ** 21 **/ \
		/*name*/	 _WT("�������"), \
		/*explain*/	 _WT("����ֵΪö�ٳ���: #����¼�.* "), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendMouseClickEvent ** 22 **/ \
		/*name*/	 _WT("�Ƿ���"), \
		/*explain*/	 _WT("�Ƿ��𰴼�"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendMouseClickEvent ** 23 **/ \
		/*name*/	 _WT("�������"), \
		/*explain*/	 _WT("�������"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendMouseClickEvent ** 24 **/ \
		/*name*/	 _WT("�¼���־"), \
		/*explain*/	 _WT("�¼���־, �����������ܼ��İ���״̬, ����ֵλö�ٳ���: #�¼���־.* ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendMouseMoveEvent ** 25 **/ \
		/*name*/	 _WT("��ʼλ��X"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendMouseMoveEvent ** 26 **/ \
		/*name*/	 _WT("��ʼλ��Y"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendMouseMoveEvent ** 27 **/ \
		/*name*/	 _WT("�Ƿ��뿪"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendMouseMoveEvent ** 28 **/ \
		/*name*/	 _WT("�¼���־"), \
		/*explain*/	 _WT("�¼���־, �����������ܼ��İ���״̬, ����ֵλö�ٳ���: #�¼���־.* ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendMouseWheelEvent ** 29 **/ \
		/*name*/	 _WT("��ʼλ��X"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendMouseWheelEvent ** 30 **/ \
		/*name*/	 _WT("��ʼλ��Y"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendMouseWheelEvent ** 31 **/ \
		/*name*/	 _WT("����X"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendMouseWheelEvent ** 32 **/ \
		/*name*/	 _WT("����Y"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendMouseWheelEvent ** 33 **/ \
		/*name*/	 _WT("�¼���־"), \
		/*explain*/	 _WT("�¼���־, �����������ܼ��İ���״̬, ����ֵλö�ٳ���: #�¼���־.* ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendTouchEvent ** 34 **/ \
		/*name*/	 _WT("��ʶ��"), \
		/*explain*/	 _WT("���ڱ�ʶ�Ӵ���ı�ʶ��(ID), ��ֵ��ÿһ�δ����¼��б���Ψһ, ������-1������κ����顣��ע��, �����Ը���16�����������¼����������ֽ������ԡ�"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendTouchEvent ** 35 **/ \
		/*name*/	 _WT("����λ��X"), \
		/*explain*/	 _WT("�������ͼ��ߵ�X����"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_FLOAT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendTouchEvent ** 36 **/ \
		/*name*/	 _WT("����λ��Y"), \
		/*explain*/	 _WT("�������ͼ���ߵ�Y����"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_FLOAT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendTouchEvent ** 37 **/ \
		/*name*/	 _WT("�뾶X"), \
		/*explain*/	 _WT("�Դ���ΪԲ�ĵ�X�뾶ֵ, ������Ϊ��λ, ���������, ������Ϊ0."), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_FLOAT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendTouchEvent ** 38 **/ \
		/*name*/	 _WT("�뾶Y"), \
		/*explain*/	 _WT("�Դ���ΪԲ�ĵ�Y�뾶ֵ, ������Ϊ��λ, ���������, ������Ϊ0."), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_FLOAT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendTouchEvent ** 39 **/ \
		/*name*/	 _WT("��ת�Ƕ�"), \
		/*explain*/	 _WT("��ת�Ƕ�, �Ի���Ϊ��λ�����������, ������Ϊ0."), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_FLOAT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendTouchEvent ** 40 **/ \
		/*name*/	 _WT("����ѹ��"), \
		/*explain*/	 _WT("ָ������ı�׼��ѹ��, ��[0, 1]�ķ�Χ�ڡ� ���������, ������Ϊ0."), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_FLOAT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendTouchEvent ** 41 **/ \
		/*name*/	 _WT("����״̬"), \
		/*explain*/	 _WT("�Ӵ���״̬��������һ�� #����״̬.PRESSED �¼���ʼ, Ȼ����������� #����״̬.MOVED �¼�, ���һ���� #����״̬.CANCELLED �¼��� �����ش�˳����¼��������ԡ� "), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendTouchEvent ** 42 **/ \
		/*name*/	 _WT("�¼���־"), \
		/*explain*/	 _WT("�¼���־, �����������ܼ��İ���״̬, ����ֵλö�ٳ���: #�¼���־.* ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendTouchEvent ** 43 **/ \
		/*name*/	 _WT("ָ������"), \
		/*explain*/	 _WT("���������¼����豸���͡�����ֵΪö�ٳ���: #�豸ָ������.* ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SendFocusEvent ** 44 **/ \
		/*name*/	 _WT("����"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SetAudioMuted ** 45 **/ \
		/*name*/	 _WT("����"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::ShowDevTools ** 46 **/ \
		/*name*/	 _WT("�������X"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::ShowDevTools ** 47 **/ \
		/*name*/	 _WT("�������Y"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::AddFirstScriptOnNewDocument ** 48 **/ \
		/*name*/	 _WT("�ű�����"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SetUserAgentOverride ** 49 **/ \
		/*name*/	 _WT("�û������ʶ"), \
		/*explain*/	 _WT("user-agent, �û������ʶ"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SetUserAgentOverride ** 50 **/ \
		/*name*/	 _WT("Ӧ�ó���汾"), \
		/*explain*/	 _WT("app-version, Ӧ�ó���汾��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SetTouchEventEmulationEnabled ** 51 **/ \
		/*name*/	 _WT("����"), \
		/*explain*/	 _WT("�Ƿ����ô����¼��ķ���ģ�⡣"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SetTouchEventEmulationEnabled ** 52 **/ \
		/*name*/	 _WT("��󴥵���"), \
		/*explain*/	 _WT("֧�ֵ����Ӵ�����, Ĭ��ֵ: 1"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SetGeolocationOverride ** 53 **/ \
		/*name*/	 _WT("γ��"), \
		/*explain*/	 _WT("latitude, ģ��γ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_FLOAT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SetGeolocationOverride ** 54 **/ \
		/*name*/	 _WT("����"), \
		/*explain*/	 _WT("longitude, ģ�⾭��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_FLOAT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SetGeolocationOverride ** 55 **/ \
		/*name*/	 _WT("����"), \
		/*explain*/	 _WT("accuracy, ģ�⾫��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_FLOAT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SetEmulatedMedia ** 56 **/ \
		/*name*/	 _WT("ý������"), \
		/*explain*/	 _WT("Ҫģ���ý�����͡�����Ϊ��ʱȡ��ģ�⡣"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SetEmulatedMedia ** 57 **/ \
		/*name*/	 _WT("����"), \
		/*explain*/	 _WT("Ҫģ��Ķ�ý�幦�ܡ�"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(11,0),  /*shrewd_ptr<ProxyDictionaryValue>*/ \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::EnableDeviceEmulation ** 58 **/ \
		/*name*/	 _WT("�������"), \
		/*explain*/	 _WT("�豸�������"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(11,0),  /*shrewd_ptr<ProxyDictionaryValue>*/ \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SetEmitTouchEventsForMouse ** 59 **/ \
		/*name*/	 _WT("����"), \
		/*explain*/	 _WT("�Ƿ����ô���ģ�⴫����"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SetEmitTouchEventsForMouse ** 60 **/ \
		/*name*/	 _WT("���ò���"), \
		/*explain*/	 _WT("�������������ò���, ����ֵΪö�ٳ���: #��������������.* ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::LoadExtension ** 61 **/ \
		/*name*/	 _WT("����Ŀ¼"), \
		/*explain*/	 _WT("��չ���������Ŀ¼��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::LoadExtension ** 62 **/ \
		/*name*/	 _WT("�嵥����"), \
		/*explain*/	 _WT("��չ�����嵥����(Ӧ��manifest.json�ļ��ж�ȡ)��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(11,0),  /*shrewd_ptr<ProxyDictionaryValue>*/ \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::DidLoadExtension ** 63 **/ \
		/*name*/	 _WT("��չ�����ʶ��"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::HasExtension ** 64 **/ \
		/*name*/	 _WT("��չ�����ʶ��"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::GetExtension ** 65 **/ \
		/*name*/	 _WT("��չ�����ʶ��"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::HasPreference ** 66 **/ \
		/*name*/	 _WT("��ѡ��"), \
		/*explain*/	 _WT("��ѡ������"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::GetPreference ** 67 **/ \
		/*name*/	 _WT("��ѡ��"), \
		/*explain*/	 _WT("��ѡ�����ơ�"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::GetAllPreferences ** 68 **/ \
		/*name*/	 _WT("����Ĭ����ѡ��"), \
		/*explain*/	 _WT("�Ƿ������ǰ����Ĭ��ֵ����ѡ�"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::CanSetPreference ** 69 **/ \
		/*name*/	 _WT("��ѡ��"), \
		/*explain*/	 _WT("��ѡ������"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SetPreference ** 70 **/ \
		/*name*/	 _WT("��ѡ��"), \
		/*explain*/	 _WT("��ѡ������"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\
	{ /****** ProxyBrowser::SetPreference ** 71 **/ \
		/*name*/	 _WT("ֵ"), \
		/*explain*/	 _WT("��ѡ��ֵ"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 MAKELONG(31,0),  /*shrewd_ptr<ProxyValue>*/ \
		/*default*/	 0,\
		/*state*/	 NULL \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyBrowser_CMDINFO(BeginIndex) \
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
		/*ccname*/	_WT("ȡ���ھ��"),\
		/*egname*/	_WT("GetWindowHandle"), \
		/*explain*/	_WT("ȡ��������ھ����"), \
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
	{ /*5*/ \
		/*ccname*/	_WT("�ɷ����"),\
		/*egname*/	_WT("CanGoBack"), \
		/*explain*/	_WT("�����ǰ������ɻ�������һ���ҳ�淵����, ���򷵻ؼ١�"), \
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
		/*ccname*/	_WT("����"),\
		/*egname*/	_WT("GoBack"), \
		/*explain*/	_WT("������������˵���һ���ҳ�档"), \
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
	{ /*7*/ \
		/*ccname*/	_WT("�ɷ�ǰ��"),\
		/*egname*/	_WT("CanGoForward"), \
		/*explain*/	_WT("�����ǰ�������ǰ������һ���ҳ�淵����, ���򷵻ؼ�"), \
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
	{ /*8*/ \
		/*ccname*/	_WT("ǰ��"),\
		/*egname*/	_WT("GoForward"), \
		/*explain*/	_WT("���������ǰ������һ���ҳ�档"), \
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
	{ /*9*/ \
		/*ccname*/	_WT("�Ƿ����ڼ���"),\
		/*egname*/	_WT("IsLoading"), \
		/*explain*/	_WT("�����ǰ��������ڼ����з����档"), \
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
	{ /*10*/ \
		/*ccname*/	_WT("���¼���"),\
		/*egname*/	_WT("Reload"), \
		/*explain*/	_WT("���¼��ش�ҳ�档"), \
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
	{ /*11*/ \
		/*ccname*/	_WT("���¼��غ��Ի���"),\
		/*egname*/	_WT("ReloadIgnoreCache"), \
		/*explain*/	_WT("���¼��ش�ҳ��, ���ӻ����ж�ȡ��"), \
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
	{ /*12*/ \
		/*ccname*/	_WT("ֹͣ����"),\
		/*egname*/	_WT("StopLoad"), \
		/*explain*/	_WT("ֹͣ����ҳ�档"), \
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
	{ /*13*/ \
		/*ccname*/	_WT("ȡ��ʶ��"),\
		/*egname*/	_WT("GetIdentifier"), \
		/*explain*/	_WT("���ش�������ı�ʶ��"), \
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
	{ /*14*/ \
		/*ccname*/	_WT("�Ƿ�Ϊ����ʽ����"),\
		/*egname*/	_WT("IsPopup"), \
		/*explain*/	_WT("�����ǰ�����Ϊ����ʽ���ڷ����档"), \
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
	{ /*15*/ \
		/*ccname*/	_WT("�Ƿ��Ѽ����ĵ�"),\
		/*egname*/	_WT("HasDocument"), \
		/*explain*/	_WT("����ĵ��Ѽ��ص�������з����档"), \
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
	{ /*16*/ \
		/*ccname*/	_WT("ȡ�����"),\
		/*egname*/	_WT("GetMainFrame"), \
		/*explain*/	_WT("ȡ��һ�����ص�(Top-Level)��ܡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(17,0),  /*shrewd_ptr<ProxyFrame>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*17*/ \
		/*ccname*/	_WT("ȡ������"),\
		/*egname*/	_WT("GetFocusedFrame"), \
		/*explain*/	_WT("ȡ��ǰӵ�н���Ŀ�ܡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(17,0),  /*shrewd_ptr<ProxyFrame>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*18*/ \
		/*ccname*/	_WT("������ȡ���"),\
		/*egname*/	_WT("GetFrame"), \
		/*explain*/	_WT("ʹ�����Ƽ���������е�ָ�����, �����ɹ����ض���ʵ��, ����ʧ�ܷ��ؿն���, �ɵ���IsValid() ������������Ч�ԡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(17,0),  /*shrewd_ptr<ProxyFrame>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*19*/ \
		/*ccname*/	_WT("�ӱ�ʶ��ȡ���"),\
		/*egname*/	_WT("GetFrameWithIdentity"), \
		/*explain*/	_WT("ʹ�ñ�ʶ������������е�ָ�����, �����ɹ����ض���ʵ��, ����ʧ�ܷ��ؿն���, �ɵ���IsValid() ������������Ч�ԡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(17,0),  /*shrewd_ptr<ProxyFrame>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+1] \
	},\
	{ /*20*/ \
		/*ccname*/	_WT("ȡ�������"),\
		/*egname*/	_WT("GetFrameCount"), \
		/*explain*/	_WT("ȡ��������Ѽ��صĿ��������"), \
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
	{ /*21*/ \
		/*ccname*/	_WT("ȡ���п������"),\
		/*egname*/	_WT("GetFrameNames"), \
		/*explain*/	_WT("ȡ������������Ѽ��ؿ�ܵ����ơ�"), \
		/*category*/	-1, \
		/*state*/	CT_RETRUN_ARY_TYPE_DATA, \
		/*ret*/	SDT_TEXT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+2] \
	},\
	{ /*22*/ \
		/*ccname*/	_WT("ȡ���п�ܱ�ʶ��"),\
		/*egname*/	_WT("GetFrameIdentifiers"), \
		/*explain*/	_WT("ȡ������������Ѽ��ؿ�ܵı�ʶ����"), \
		/*category*/	-1, \
		/*state*/	CT_RETRUN_ARY_TYPE_DATA, \
		/*ret*/	SDT_INT64, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+2] \
	},\
	{ /*23*/ \
		/*ccname*/	_WT("ȡ���п��"),\
		/*egname*/	_WT("GetFrames"), \
		/*explain*/	_WT("ȡ������������Ѽ��صĿ�ܡ�"), \
		/*category*/	-1, \
		/*state*/	CT_RETRUN_ARY_TYPE_DATA, \
		/*ret*/	MAKELONG(17,0),  /*shrewd_ptr<ProxyFrame>***/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+2] \
	},\
	{ /*24*/ \
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
		/*arg lp*/	&s_ArgInfo[BeginIndex+2] \
	},\
	{ /*25*/ \
		/*ccname*/	_WT("�ý���"),\
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
		/*arg lp*/	&s_ArgInfo[BeginIndex+3] \
	},\
	{ /*26*/ \
		/*ccname*/	_WT("ȡ�����ߴ��ھ��"),\
		/*egname*/	_WT("GetOpenerWindowHandle"), \
		/*explain*/	_WT("ȡ��������������ڵĴ��ھ����"), \
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
	{ /*27*/ \
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
		/*arg lp*/	&s_ArgInfo[BeginIndex+4] \
	},\
	{ /*28*/ \
		/*ccname*/	_WT("�����ű���"),\
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
		/*arg lp*/	&s_ArgInfo[BeginIndex+4] \
	},\
	{ /*29*/ \
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
		/*arg lp*/	&s_ArgInfo[BeginIndex+5] \
	},\
	{ /*30*/ \
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
		/*arg lp*/	&s_ArgInfo[BeginIndex+6] \
	},\
	{ /*31*/ \
		/*ccname*/	_WT("����ĳ��"),\
		/*egname*/	_WT("SendKeyDownEvent"), \
		/*explain*/	_WT("�����������һ�μ��������¼���ʾĳ�������ѱ����¡�"), \
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
	{ /*32*/ \
		/*ccname*/	_WT("����ĳ��"),\
		/*egname*/	_WT("SendKeyUpEvent"), \
		/*explain*/	_WT("�����������һ�μ��������¼���ʾĳ�������ѵ���"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	3, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+9] \
	},\
	{ /*33*/ \
		/*ccname*/	_WT("ĳ������"),\
		/*egname*/	_WT("SendKeyPressEvent"), \
		/*explain*/	_WT("�����������һ�μ��������¼�����ĳ�������İ����Լ�������̡�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	4, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+12] \
	},\
	{ /*34*/ \
		/*ccname*/	_WT("�ַ�����"),\
		/*egname*/	_WT("SendCharEvent"), \
		/*explain*/	_WT("�����������һ�μ��������¼���ʾĳ���ַ��ѱ����롣"), \
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
	{ /*35*/ \
		/*ccname*/	_WT("�ַ�������"),\
		/*egname*/	_WT("SendCharArrayEvent"), \
		/*explain*/	_WT("�����������һ�μ��������¼�����һ���ַ������������Ϣ��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+17] \
	},\
	{ /*36*/ \
		/*ccname*/	_WT("�����"),\
		/*egname*/	_WT("SendMouseClickEvent"), \
		/*explain*/	_WT("��ǰ���������������¼���"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	6, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+19] \
	},\
	{ /*37*/ \
		/*ccname*/	_WT("����ƶ�"),\
		/*egname*/	_WT("SendMouseMoveEvent"), \
		/*explain*/	_WT("��ǰ�������������ƶ��¼���"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	4, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+25] \
	},\
	{ /*38*/ \
		/*ccname*/	_WT("�����ֻ���"),\
		/*egname*/	_WT("SendMouseWheelEvent"), \
		/*explain*/	_WT("��ǰ����������������¼���"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	5, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+29] \
	},\
	{ /*39*/ \
		/*ccname*/	_WT("����"),\
		/*egname*/	_WT("SendTouchEvent"), \
		/*explain*/	_WT("��ǰ��������ʹ����¼���"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	10, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+34] \
	},\
	{ /*40*/ \
		/*ccname*/	_WT("�ý����¼�"),\
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
		/*arg lp*/	&s_ArgInfo[BeginIndex+44] \
	},\
	{ /*41*/ \
		/*ccname*/	_WT("�ò���ʧ�¼�"),\
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
		/*arg lp*/	&s_ArgInfo[BeginIndex+45] \
	},\
	{ /*42*/ \
		/*ccname*/	_WT("֪ͨλ�óߴ��Ѹı�"),\
		/*egname*/	_WT("NotifyMoveOrResizeStarted"), \
		/*explain*/	_WT("֪ͨ���������λ���Լ��ߴ��ѱ����"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+45] \
	},\
	{ /*43*/ \
		/*ccname*/	_WT("�þ���ģʽ"),\
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
		/*arg lp*/	&s_ArgInfo[BeginIndex+45] \
	},\
	{ /*44*/ \
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
		/*arg lp*/	&s_ArgInfo[BeginIndex+46] \
	},\
	{ /*45*/ \
		/*ccname*/	_WT("�򿪿����߹���"),\
		/*egname*/	_WT("ShowDevTools"), \
		/*explain*/	_WT("�ڴ�����������п����߹��ߡ��ɹ����ؿ����߹���������������ھ����"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_INT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+46] \
	},\
	{ /*46*/ \
		/*ccname*/	_WT("�رտ����߹���"),\
		/*egname*/	_WT("CloseDevTools"), \
		/*explain*/	_WT("�ر����еĿ����߹��ߡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+48] \
	},\
	{ /*47*/ \
		/*ccname*/	_WT("�Ƿ��Ѵ򿪿����߹���"),\
		/*egname*/	_WT("HasDevTools"), \
		/*explain*/	_WT("�������������п����߹��������з����档"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+48] \
	},\
	{ /*48*/ \
		/*ccname*/	_WT("ȡ�Ự������"),\
		/*egname*/	_WT("GetCookieManager"), \
		/*explain*/	_WT("��ȡ�������ʹ�õĻỰƾ֤(Cookie)�������� δ��������ģʽʱ���������ʹ��ȫ�ֵĻỰƾ֤��������"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(10,0),  /*shrewd_ptr<ProxyCookieManager>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+48] \
	},\
	{ /*49*/ \
		/*ccname*/	_WT("������ִ�нű�"),\
		/*egname*/	_WT("AddFirstScriptOnNewDocument"), \
		/*explain*/	_WT("���������DOM�ṹ���غ��һ��ִ�еĽű���"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+48] \
	},\
	{ /*50*/ \
		/*ccname*/	_WT("���û������ʶ"),\
		/*egname*/	_WT("SetUserAgentOverride"), \
		/*explain*/	_WT("ʹ���µ��û������ʶ�Ը���Ĭ��ֵ��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+49] \
	},\
	{ /*51*/ \
		/*ccname*/	_WT("���ô����¼�ģ��"),\
		/*egname*/	_WT("SetTouchEventEmulationEnabled"), \
		/*explain*/	_WT("�ڲ�֧�ֵ�ƽ̨�����ô����¼�ģ�⡣"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+51] \
	},\
	{ /*52*/ \
		/*ccname*/	_WT("�õ���λ��"),\
		/*egname*/	_WT("SetGeolocationOverride"), \
		/*explain*/	_WT("���õ���λ����Ϣ�����еĲ�����������ʡ�ԡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	3, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+53] \
	},\
	{ /*53*/ \
		/*ccname*/	_WT("���ö�ý��ģ��"),\
		/*egname*/	_WT("SetEmulatedMedia"), \
		/*explain*/	_WT("ģ��CSSý���ѯ�ĸ���ý�����ͻ�ý�幦�ܡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+56] \
	},\
	{ /*54*/ \
		/*ccname*/	_WT("�����ý��ģ�⹦��"),\
		/*egname*/	_WT("ClearMediaFeatureOverrides"), \
		/*explain*/	_WT("���ģ��Ķ�ý�幦�ܡ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+58] \
	},\
	{ /*55*/ \
		/*ccname*/	_WT("�����豸����ģ��"),\
		/*egname*/	_WT("EnableDeviceEmulation"), \
		/*explain*/	_WT("ʹ��ָ���Ĳ��������豸���档"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+58] \
	},\
	{ /*56*/ \
		/*ccname*/	_WT("�ر��豸����ģ��"),\
		/*egname*/	_WT("DisableDeviceEmulation"), \
		/*explain*/	_WT("�ر�ָ���������豸����ģ��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+59] \
	},\
	{ /*57*/ \
		/*ccname*/	_WT("���ô���ģ�⴫����"),\
		/*egname*/	_WT("SetEmitTouchEventsForMouse"), \
		/*explain*/	_WT("���ô���ģ�⴫����, ���������е�����¼�����ת��Ϊ�����¼���"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+59] \
	},\
	{ /*58*/ \
		/*ccname*/	_WT("������չ����"),\
		/*egname*/	_WT("LoadExtension"), \
		/*explain*/	_WT("���� chrome extension ��չ����"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	_SDT_NULL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+61] \
	},\
	{ /*59*/ \
		/*ccname*/	_WT("�ӱ�ʶ��������չ����"),\
		/*egname*/	_WT("DidLoadExtension"), \
		/*explain*/	_WT("���� chrome extension ��չ����"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+63] \
	},\
	{ /*60*/ \
		/*ccname*/	_WT("�Ƿ������չ����"),\
		/*egname*/	_WT("HasExtension"), \
		/*explain*/	_WT("����ڴ�������������д���Ŀ����չ���򷵻���"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+64] \
	},\
	{ /*61*/ \
		/*ccname*/	_WT("ȡ������չ�����ʶ��"),\
		/*egname*/	_WT("GetExtensions"), \
		/*explain*/	_WT("���ش�����������������д��ڵ���չ�����ʶ����"), \
		/*category*/	-1, \
		/*state*/	CT_RETRUN_ARY_TYPE_DATA, \
		/*ret*/	SDT_TEXT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+65] \
	},\
	{ /*62*/ \
		/*ccname*/	_WT("ȡ��չ����"),\
		/*egname*/	_WT("GetExtension"), \
		/*explain*/	_WT("���ط���ָ����ʶ������չ�������"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(15,0),  /*shrewd_ptr<ProxyExtension>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+65] \
	},\
	{ /*63*/ \
		/*ccname*/	_WT("�Ƿ�Ϊ��չ���������"),\
		/*egname*/	_WT("IsBackgroundHost"), \
		/*explain*/	_WT("����������Ϊװ����չ���������(host)����������档"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+66] \
	},\
	{ /*64*/ \
		/*ccname*/	_WT("ȡ�û�����"),\
		/*egname*/	_WT("GetUserData"), \
		/*explain*/	_WT("��������������������������û��Զ���������Ϣ��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(20,0),  /*shrewd_ptr<ProxyListValue>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+66] \
	},\
	{ /*65*/ \
		/*ccname*/	_WT("�Ƿ������ѡ��"),\
		/*egname*/	_WT("HasPreference"), \
		/*explain*/	_WT("������з���ָ�����Ƶ���ѡ������򷵻��档"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+66] \
	},\
	{ /*66*/ \
		/*ccname*/	_WT("ȡ��ѡ��"),\
		/*egname*/	_WT("GetPreference"), \
		/*explain*/	_WT("���ؾ��з���ָ�����Ƶ���ѡ���ֵ�������ѡ������򷵻ؿն���"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(31,0),  /*shrewd_ptr<ProxyValue>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+67] \
	},\
	{ /*67*/ \
		/*ccname*/	_WT("ȡ������ѡ��"),\
		/*egname*/	_WT("GetAllPreferences"), \
		/*explain*/	_WT("����������ѡ����Ϣ�������ֵ���������, ��ѡ������Ϊ\"key\", ��ѡ��ֵΪ\"value\"��"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(11,0),  /*shrewd_ptr<ProxyDictionaryValue>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+68] \
	},\
	{ /*68*/ \
		/*ccname*/	_WT("�ɷ�������ѡ��"),\
		/*egname*/	_WT("CanSetPreference"), \
		/*explain*/	_WT("�������ָ�����Ƶ���ѡ���򷵻���, ����ʹ�� ����ѡ��ֵ ���������޸ġ�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+69] \
	},\
	{ /*69*/ \
		/*ccname*/	_WT("����ѡ��ֵ"),\
		/*egname*/	_WT("SetPreference"), \
		/*explain*/	_WT("���÷���ָ�����Ƶ���ѡ���ֵ��������óɹ�������, ���򷵻ؼ١�"), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+70] \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyBrowser_FUN_NAMES \
	EDITIONS("ProxyBrowser_Constructor"),\
	EDITIONS("ProxyBrowser_Destructor"),\
	EDITIONS("ProxyBrowser_CopyConstructor"),\
	EDITIONS("ProxyBrowser_IsValid"),\
	EDITIONS("ProxyBrowser_GetWindowHandle"),\
	EDITIONS("ProxyBrowser_CanGoBack"),\
	EDITIONS("ProxyBrowser_GoBack"),\
	EDITIONS("ProxyBrowser_CanGoForward"),\
	EDITIONS("ProxyBrowser_GoForward"),\
	EDITIONS("ProxyBrowser_IsLoading"),\
	EDITIONS("ProxyBrowser_Reload"),\
	EDITIONS("ProxyBrowser_ReloadIgnoreCache"),\
	EDITIONS("ProxyBrowser_StopLoad"),\
	EDITIONS("ProxyBrowser_GetIdentifier"),\
	EDITIONS("ProxyBrowser_IsPopup"),\
	EDITIONS("ProxyBrowser_HasDocument"),\
	EDITIONS("ProxyBrowser_GetMainFrame"),\
	EDITIONS("ProxyBrowser_GetFocusedFrame"),\
	EDITIONS("ProxyBrowser_GetFrame"),\
	EDITIONS("ProxyBrowser_GetFrameWithIdentity"),\
	EDITIONS("ProxyBrowser_GetFrameCount"),\
	EDITIONS("ProxyBrowser_GetFrameNames"),\
	EDITIONS("ProxyBrowser_GetFrameIdentifiers"),\
	EDITIONS("ProxyBrowser_GetFrames"),\
	EDITIONS("ProxyBrowser_CloseBrowser"),\
	EDITIONS("ProxyBrowser_SetFocus"),\
	EDITIONS("ProxyBrowser_GetOpenerWindowHandle"),\
	EDITIONS("ProxyBrowser_GetZoomLevel"),\
	EDITIONS("ProxyBrowser_SetZoomLevel"),\
	EDITIONS("ProxyBrowser_StartDownload"),\
	EDITIONS("ProxyBrowser_Print"),\
	EDITIONS("ProxyBrowser_SendKeyDownEvent"),\
	EDITIONS("ProxyBrowser_SendKeyUpEvent"),\
	EDITIONS("ProxyBrowser_SendKeyPressEvent"),\
	EDITIONS("ProxyBrowser_SendCharEvent"),\
	EDITIONS("ProxyBrowser_SendCharArrayEvent"),\
	EDITIONS("ProxyBrowser_SendMouseClickEvent"),\
	EDITIONS("ProxyBrowser_SendMouseMoveEvent"),\
	EDITIONS("ProxyBrowser_SendMouseWheelEvent"),\
	EDITIONS("ProxyBrowser_SendTouchEvent"),\
	EDITIONS("ProxyBrowser_SendFocusEvent"),\
	EDITIONS("ProxyBrowser_SendCaptureLostEvent"),\
	EDITIONS("ProxyBrowser_NotifyMoveOrResizeStarted"),\
	EDITIONS("ProxyBrowser_SetAudioMuted"),\
	EDITIONS("ProxyBrowser_IsAudioMuted"),\
	EDITIONS("ProxyBrowser_ShowDevTools"),\
	EDITIONS("ProxyBrowser_CloseDevTools"),\
	EDITIONS("ProxyBrowser_HasDevTools"),\
	EDITIONS("ProxyBrowser_GetCookieManager"),\
	EDITIONS("ProxyBrowser_AddFirstScriptOnNewDocument"),\
	EDITIONS("ProxyBrowser_SetUserAgentOverride"),\
	EDITIONS("ProxyBrowser_SetTouchEventEmulationEnabled"),\
	EDITIONS("ProxyBrowser_SetGeolocationOverride"),\
	EDITIONS("ProxyBrowser_SetEmulatedMedia"),\
	EDITIONS("ProxyBrowser_ClearMediaFeatureOverrides"),\
	EDITIONS("ProxyBrowser_EnableDeviceEmulation"),\
	EDITIONS("ProxyBrowser_DisableDeviceEmulation"),\
	EDITIONS("ProxyBrowser_SetEmitTouchEventsForMouse"),\
	EDITIONS("ProxyBrowser_LoadExtension"),\
	EDITIONS("ProxyBrowser_DidLoadExtension"),\
	EDITIONS("ProxyBrowser_HasExtension"),\
	EDITIONS("ProxyBrowser_GetExtensions"),\
	EDITIONS("ProxyBrowser_GetExtension"),\
	EDITIONS("ProxyBrowser_IsBackgroundHost"),\
	EDITIONS("ProxyBrowser_GetUserData"),\
	EDITIONS("ProxyBrowser_HasPreference"),\
	EDITIONS("ProxyBrowser_GetPreference"),\
	EDITIONS("ProxyBrowser_GetAllPreferences"),\
	EDITIONS("ProxyBrowser_CanSetPreference"),\
	EDITIONS("ProxyBrowser_SetPreference"),\


//==========================================

#define DECL_DATA_TYPE_ProxyBrowser_FUN_CALLS \
	EDITIONF(ProxyBrowser_Constructor),\
	EDITIONF(ProxyBrowser_Destructor),\
	EDITIONF(ProxyBrowser_CopyConstructor),\
	EDITIONF(ProxyBrowser_IsValid),\
	EDITIONF(ProxyBrowser_GetWindowHandle),\
	EDITIONF(ProxyBrowser_CanGoBack),\
	EDITIONF(ProxyBrowser_GoBack),\
	EDITIONF(ProxyBrowser_CanGoForward),\
	EDITIONF(ProxyBrowser_GoForward),\
	EDITIONF(ProxyBrowser_IsLoading),\
	EDITIONF(ProxyBrowser_Reload),\
	EDITIONF(ProxyBrowser_ReloadIgnoreCache),\
	EDITIONF(ProxyBrowser_StopLoad),\
	EDITIONF(ProxyBrowser_GetIdentifier),\
	EDITIONF(ProxyBrowser_IsPopup),\
	EDITIONF(ProxyBrowser_HasDocument),\
	EDITIONF(ProxyBrowser_GetMainFrame),\
	EDITIONF(ProxyBrowser_GetFocusedFrame),\
	EDITIONF(ProxyBrowser_GetFrame),\
	EDITIONF(ProxyBrowser_GetFrameWithIdentity),\
	EDITIONF(ProxyBrowser_GetFrameCount),\
	EDITIONF(ProxyBrowser_GetFrameNames),\
	EDITIONF(ProxyBrowser_GetFrameIdentifiers),\
	EDITIONF(ProxyBrowser_GetFrames),\
	EDITIONF(ProxyBrowser_CloseBrowser),\
	EDITIONF(ProxyBrowser_SetFocus),\
	EDITIONF(ProxyBrowser_GetOpenerWindowHandle),\
	EDITIONF(ProxyBrowser_GetZoomLevel),\
	EDITIONF(ProxyBrowser_SetZoomLevel),\
	EDITIONF(ProxyBrowser_StartDownload),\
	EDITIONF(ProxyBrowser_Print),\
	EDITIONF(ProxyBrowser_SendKeyDownEvent),\
	EDITIONF(ProxyBrowser_SendKeyUpEvent),\
	EDITIONF(ProxyBrowser_SendKeyPressEvent),\
	EDITIONF(ProxyBrowser_SendCharEvent),\
	EDITIONF(ProxyBrowser_SendCharArrayEvent),\
	EDITIONF(ProxyBrowser_SendMouseClickEvent),\
	EDITIONF(ProxyBrowser_SendMouseMoveEvent),\
	EDITIONF(ProxyBrowser_SendMouseWheelEvent),\
	EDITIONF(ProxyBrowser_SendTouchEvent),\
	EDITIONF(ProxyBrowser_SendFocusEvent),\
	EDITIONF(ProxyBrowser_SendCaptureLostEvent),\
	EDITIONF(ProxyBrowser_NotifyMoveOrResizeStarted),\
	EDITIONF(ProxyBrowser_SetAudioMuted),\
	EDITIONF(ProxyBrowser_IsAudioMuted),\
	EDITIONF(ProxyBrowser_ShowDevTools),\
	EDITIONF(ProxyBrowser_CloseDevTools),\
	EDITIONF(ProxyBrowser_HasDevTools),\
	EDITIONF(ProxyBrowser_GetCookieManager),\
	EDITIONF(ProxyBrowser_AddFirstScriptOnNewDocument),\
	EDITIONF(ProxyBrowser_SetUserAgentOverride),\
	EDITIONF(ProxyBrowser_SetTouchEventEmulationEnabled),\
	EDITIONF(ProxyBrowser_SetGeolocationOverride),\
	EDITIONF(ProxyBrowser_SetEmulatedMedia),\
	EDITIONF(ProxyBrowser_ClearMediaFeatureOverrides),\
	EDITIONF(ProxyBrowser_EnableDeviceEmulation),\
	EDITIONF(ProxyBrowser_DisableDeviceEmulation),\
	EDITIONF(ProxyBrowser_SetEmitTouchEventsForMouse),\
	EDITIONF(ProxyBrowser_LoadExtension),\
	EDITIONF(ProxyBrowser_DidLoadExtension),\
	EDITIONF(ProxyBrowser_HasExtension),\
	EDITIONF(ProxyBrowser_GetExtensions),\
	EDITIONF(ProxyBrowser_GetExtension),\
	EDITIONF(ProxyBrowser_IsBackgroundHost),\
	EDITIONF(ProxyBrowser_GetUserData),\
	EDITIONF(ProxyBrowser_HasPreference),\
	EDITIONF(ProxyBrowser_GetPreference),\
	EDITIONF(ProxyBrowser_GetAllPreferences),\
	EDITIONF(ProxyBrowser_CanSetPreference),\
	EDITIONF(ProxyBrowser_SetPreference),\


//==========================================

extern "C"
void EDITIONF(ProxyBrowser_Constructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_Destructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_CopyConstructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_IsValid) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_GetWindowHandle) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_CanGoBack) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_GoBack) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_CanGoForward) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_GoForward) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_IsLoading) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_Reload) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_ReloadIgnoreCache) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_StopLoad) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_GetIdentifier) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_IsPopup) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_HasDocument) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_GetMainFrame) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_GetFocusedFrame) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_GetFrame) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_GetFrameWithIdentity) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_GetFrameCount) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_GetFrameNames) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_GetFrameIdentifiers) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_GetFrames) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_CloseBrowser) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_SetFocus) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_GetOpenerWindowHandle) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_GetZoomLevel) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_SetZoomLevel) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_StartDownload) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_Print) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_SendKeyDownEvent) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_SendKeyUpEvent) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_SendKeyPressEvent) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_SendCharEvent) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_SendCharArrayEvent) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_SendMouseClickEvent) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_SendMouseMoveEvent) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_SendMouseWheelEvent) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_SendTouchEvent) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_SendFocusEvent) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_SendCaptureLostEvent) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_NotifyMoveOrResizeStarted) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_SetAudioMuted) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_IsAudioMuted) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_ShowDevTools) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_CloseDevTools) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_HasDevTools) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_GetCookieManager) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_AddFirstScriptOnNewDocument) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_SetUserAgentOverride) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_SetTouchEventEmulationEnabled) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_SetGeolocationOverride) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_SetEmulatedMedia) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_ClearMediaFeatureOverrides) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_EnableDeviceEmulation) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_DisableDeviceEmulation) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_SetEmitTouchEventsForMouse) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_LoadExtension) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_DidLoadExtension) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_HasExtension) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_GetExtensions) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_GetExtension) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_IsBackgroundHost) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_GetUserData) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_HasPreference) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_GetPreference) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_GetAllPreferences) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_CanSetPreference) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyBrowser_SetPreference) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);


//==========================================

