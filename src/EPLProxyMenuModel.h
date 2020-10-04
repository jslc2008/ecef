#pragma once

#include "stdafx.h"
#include "lib2.h"


#define DECL_DATA_TYPE_ProxyMenuModel \
	{ /*19*/ \
		/*m_szName*/		 _WT("Chromium�˵�"), \
		/*m_szEgName*/		 _WT("ProxyMenuModel"), \
		/*m_szExplain*/		 _WT("֧�ִ������޸Ĳ˵����ࡣ�йؾ���Ĭ��ʵ�ֵ�����ID, �μ�ö�ٳ���: #ϵͳ���ò˵�.* ��"), \
		/*m_nCmdCount*/		 56, \
		/*m_pnCmdsIndex*/		 s_nProxyMenuModelElementCmdIndex, \
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

#define DECL_DATA_TYPE_ProxyMenuModel_ARGINFO \
	{ /****** ProxyMenuModel::AddItem ** 0 **/ \
		/*name*/	 _WT("command_id"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::AddItem ** 1 **/ \
		/*name*/	 _WT("label"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::AddCheckItem ** 2 **/ \
		/*name*/	 _WT("command_id"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::AddCheckItem ** 3 **/ \
		/*name*/	 _WT("label"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::AddRadioItem ** 4 **/ \
		/*name*/	 _WT("command_id"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::AddRadioItem ** 5 **/ \
		/*name*/	 _WT("label"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::AddRadioItem ** 6 **/ \
		/*name*/	 _WT("group_id"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::AddSubMenu ** 7 **/ \
		/*name*/	 _WT("command_id"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::AddSubMenu ** 8 **/ \
		/*name*/	 _WT("label"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::InsertSeparatorAt ** 9 **/ \
		/*name*/	 _WT("index"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::InsertItemAt ** 10 **/ \
		/*name*/	 _WT("index"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::InsertItemAt ** 11 **/ \
		/*name*/	 _WT("command_id"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::InsertItemAt ** 12 **/ \
		/*name*/	 _WT("label"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::InsertCheckItemAt ** 13 **/ \
		/*name*/	 _WT("index"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::InsertCheckItemAt ** 14 **/ \
		/*name*/	 _WT("command_id"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::InsertCheckItemAt ** 15 **/ \
		/*name*/	 _WT("label"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::InsertRadioItemAt ** 16 **/ \
		/*name*/	 _WT("index"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::InsertRadioItemAt ** 17 **/ \
		/*name*/	 _WT("command_id"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::InsertRadioItemAt ** 18 **/ \
		/*name*/	 _WT("label"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::InsertRadioItemAt ** 19 **/ \
		/*name*/	 _WT("group_id"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::InsertSubMenuAt ** 20 **/ \
		/*name*/	 _WT("index"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::InsertSubMenuAt ** 21 **/ \
		/*name*/	 _WT("command_id"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::InsertSubMenuAt ** 22 **/ \
		/*name*/	 _WT("label"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::Remove ** 23 **/ \
		/*name*/	 _WT("command_id"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::RemoveAt ** 24 **/ \
		/*name*/	 _WT("index"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::GetIndexOf ** 25 **/ \
		/*name*/	 _WT("command_id"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::GetCommandIdAt ** 26 **/ \
		/*name*/	 _WT("index"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetCommandIdAt ** 27 **/ \
		/*name*/	 _WT("index"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetCommandIdAt ** 28 **/ \
		/*name*/	 _WT("command_id"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::GetLabel ** 29 **/ \
		/*name*/	 _WT("command_id"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::GetLabelAt ** 30 **/ \
		/*name*/	 _WT("index"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetLabel ** 31 **/ \
		/*name*/	 _WT("command_id"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetLabel ** 32 **/ \
		/*name*/	 _WT("label"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetLabelAt ** 33 **/ \
		/*name*/	 _WT("index"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetLabelAt ** 34 **/ \
		/*name*/	 _WT("label"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::GetType ** 35 **/ \
		/*name*/	 _WT("command_id"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::GetTypeAt ** 36 **/ \
		/*name*/	 _WT("index"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::GetGroupId ** 37 **/ \
		/*name*/	 _WT("command_id"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::GetGroupIdAt ** 38 **/ \
		/*name*/	 _WT("index"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetGroupId ** 39 **/ \
		/*name*/	 _WT("command_id"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetGroupId ** 40 **/ \
		/*name*/	 _WT("group_id"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetGroupIdAt ** 41 **/ \
		/*name*/	 _WT("index"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetGroupIdAt ** 42 **/ \
		/*name*/	 _WT("group_id"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::GetSubMenu ** 43 **/ \
		/*name*/	 _WT("command_id"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::GetSubMenuAt ** 44 **/ \
		/*name*/	 _WT("index"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::IsVisible ** 45 **/ \
		/*name*/	 _WT("command_id"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::IsVisibleAt ** 46 **/ \
		/*name*/	 _WT("index"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetVisible ** 47 **/ \
		/*name*/	 _WT("command_id"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetVisible ** 48 **/ \
		/*name*/	 _WT("visible"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetVisibleAt ** 49 **/ \
		/*name*/	 _WT("index"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetVisibleAt ** 50 **/ \
		/*name*/	 _WT("visible"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::IsEnabled ** 51 **/ \
		/*name*/	 _WT("command_id"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::IsEnabledAt ** 52 **/ \
		/*name*/	 _WT("index"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetEnabled ** 53 **/ \
		/*name*/	 _WT("command_id"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetEnabled ** 54 **/ \
		/*name*/	 _WT("enabled"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetEnabledAt ** 55 **/ \
		/*name*/	 _WT("index"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetEnabledAt ** 56 **/ \
		/*name*/	 _WT("enabled"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::IsChecked ** 57 **/ \
		/*name*/	 _WT("command_id"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::IsCheckedAt ** 58 **/ \
		/*name*/	 _WT("index"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetChecked ** 59 **/ \
		/*name*/	 _WT("command_id"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetChecked ** 60 **/ \
		/*name*/	 _WT("checked"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetCheckedAt ** 61 **/ \
		/*name*/	 _WT("index"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetCheckedAt ** 62 **/ \
		/*name*/	 _WT("checked"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::HasAccelerator ** 63 **/ \
		/*name*/	 _WT("command_id"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::HasAcceleratorAt ** 64 **/ \
		/*name*/	 _WT("index"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetAccelerator ** 65 **/ \
		/*name*/	 _WT("command_id"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetAccelerator ** 66 **/ \
		/*name*/	 _WT("key_code"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetAccelerator ** 67 **/ \
		/*name*/	 _WT("shift_pressed"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetAccelerator ** 68 **/ \
		/*name*/	 _WT("ctrl_pressed"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetAccelerator ** 69 **/ \
		/*name*/	 _WT("alt_pressed"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetAcceleratorAt ** 70 **/ \
		/*name*/	 _WT("index"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetAcceleratorAt ** 71 **/ \
		/*name*/	 _WT("key_code"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetAcceleratorAt ** 72 **/ \
		/*name*/	 _WT("shift_pressed"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetAcceleratorAt ** 73 **/ \
		/*name*/	 _WT("ctrl_pressed"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetAcceleratorAt ** 74 **/ \
		/*name*/	 _WT("alt_pressed"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_BOOL, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::RemoveAccelerator ** 75 **/ \
		/*name*/	 _WT("command_id"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::RemoveAcceleratorAt ** 76 **/ \
		/*name*/	 _WT("index"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetColor ** 77 **/ \
		/*name*/	 _WT("command_id"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetColor ** 78 **/ \
		/*name*/	 _WT("color_type"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetColor ** 79 **/ \
		/*name*/	 _WT("color"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetColorAt ** 80 **/ \
		/*name*/	 _WT("index"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetColorAt ** 81 **/ \
		/*name*/	 _WT("color_type"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetColorAt ** 82 **/ \
		/*name*/	 _WT("color"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetFontList ** 83 **/ \
		/*name*/	 _WT("command_id"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetFontList ** 84 **/ \
		/*name*/	 _WT("font_list"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetFontListAt ** 85 **/ \
		/*name*/	 _WT("index"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyMenuModel::SetFontListAt ** 86 **/ \
		/*name*/	 _WT("font_list"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_TEXT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyMenuModel_CMDINFO(BeginIndex) \
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
		/*ccname*/	_WT("CreateMenuModel"),\
		/*egname*/	_WT("CreateMenuModel"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(20,0),  /*shrewd_ptr<ProxyMenuModel>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	0, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*4*/ \
		/*ccname*/	_WT("IsSubMenu"),\
		/*egname*/	_WT("IsSubMenu"), \
		/*explain*/	_WT(""), \
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
		/*ccname*/	_WT("Clear"),\
		/*egname*/	_WT("Clear"), \
		/*explain*/	_WT(""), \
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
		/*ccname*/	_WT("GetCount"),\
		/*egname*/	_WT("GetCount"), \
		/*explain*/	_WT(""), \
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
		/*ccname*/	_WT("AddSeparator"),\
		/*egname*/	_WT("AddSeparator"), \
		/*explain*/	_WT(""), \
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
		/*ccname*/	_WT("AddItem"),\
		/*egname*/	_WT("AddItem"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+0] \
	},\
	{ /*9*/ \
		/*ccname*/	_WT("AddCheckItem"),\
		/*egname*/	_WT("AddCheckItem"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+2] \
	},\
	{ /*10*/ \
		/*ccname*/	_WT("AddRadioItem"),\
		/*egname*/	_WT("AddRadioItem"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	3, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+4] \
	},\
	{ /*11*/ \
		/*ccname*/	_WT("AddSubMenu"),\
		/*egname*/	_WT("AddSubMenu"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(20,0),  /*shrewd_ptr<ProxyMenuModel>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+7] \
	},\
	{ /*12*/ \
		/*ccname*/	_WT("InsertSeparatorAt"),\
		/*egname*/	_WT("InsertSeparatorAt"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+9] \
	},\
	{ /*13*/ \
		/*ccname*/	_WT("InsertItemAt"),\
		/*egname*/	_WT("InsertItemAt"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	3, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+10] \
	},\
	{ /*14*/ \
		/*ccname*/	_WT("InsertCheckItemAt"),\
		/*egname*/	_WT("InsertCheckItemAt"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	3, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+13] \
	},\
	{ /*15*/ \
		/*ccname*/	_WT("InsertRadioItemAt"),\
		/*egname*/	_WT("InsertRadioItemAt"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	4, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+16] \
	},\
	{ /*16*/ \
		/*ccname*/	_WT("InsertSubMenuAt"),\
		/*egname*/	_WT("InsertSubMenuAt"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(20,0),  /*shrewd_ptr<ProxyMenuModel>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	3, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+20] \
	},\
	{ /*17*/ \
		/*ccname*/	_WT("Remove"),\
		/*egname*/	_WT("Remove"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+23] \
	},\
	{ /*18*/ \
		/*ccname*/	_WT("RemoveAt"),\
		/*egname*/	_WT("RemoveAt"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+24] \
	},\
	{ /*19*/ \
		/*ccname*/	_WT("GetIndexOf"),\
		/*egname*/	_WT("GetIndexOf"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_INT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+25] \
	},\
	{ /*20*/ \
		/*ccname*/	_WT("GetCommandIdAt"),\
		/*egname*/	_WT("GetCommandIdAt"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_INT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+26] \
	},\
	{ /*21*/ \
		/*ccname*/	_WT("SetCommandIdAt"),\
		/*egname*/	_WT("SetCommandIdAt"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+27] \
	},\
	{ /*22*/ \
		/*ccname*/	_WT("GetLabel"),\
		/*egname*/	_WT("GetLabel"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_TEXT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+29] \
	},\
	{ /*23*/ \
		/*ccname*/	_WT("GetLabelAt"),\
		/*egname*/	_WT("GetLabelAt"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_TEXT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+30] \
	},\
	{ /*24*/ \
		/*ccname*/	_WT("SetLabel"),\
		/*egname*/	_WT("SetLabel"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+31] \
	},\
	{ /*25*/ \
		/*ccname*/	_WT("SetLabelAt"),\
		/*egname*/	_WT("SetLabelAt"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+33] \
	},\
	{ /*26*/ \
		/*ccname*/	_WT("GetType"),\
		/*egname*/	_WT("GetType"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_INT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+35] \
	},\
	{ /*27*/ \
		/*ccname*/	_WT("GetTypeAt"),\
		/*egname*/	_WT("GetTypeAt"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_INT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+36] \
	},\
	{ /*28*/ \
		/*ccname*/	_WT("GetGroupId"),\
		/*egname*/	_WT("GetGroupId"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_INT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+37] \
	},\
	{ /*29*/ \
		/*ccname*/	_WT("GetGroupIdAt"),\
		/*egname*/	_WT("GetGroupIdAt"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_INT, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+38] \
	},\
	{ /*30*/ \
		/*ccname*/	_WT("SetGroupId"),\
		/*egname*/	_WT("SetGroupId"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+39] \
	},\
	{ /*31*/ \
		/*ccname*/	_WT("SetGroupIdAt"),\
		/*egname*/	_WT("SetGroupIdAt"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+41] \
	},\
	{ /*32*/ \
		/*ccname*/	_WT("GetSubMenu"),\
		/*egname*/	_WT("GetSubMenu"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(20,0),  /*shrewd_ptr<ProxyMenuModel>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+43] \
	},\
	{ /*33*/ \
		/*ccname*/	_WT("GetSubMenuAt"),\
		/*egname*/	_WT("GetSubMenuAt"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	MAKELONG(20,0),  /*shrewd_ptr<ProxyMenuModel>*/ \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+44] \
	},\
	{ /*34*/ \
		/*ccname*/	_WT("IsVisible"),\
		/*egname*/	_WT("IsVisible"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+45] \
	},\
	{ /*35*/ \
		/*ccname*/	_WT("IsVisibleAt"),\
		/*egname*/	_WT("IsVisibleAt"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+46] \
	},\
	{ /*36*/ \
		/*ccname*/	_WT("SetVisible"),\
		/*egname*/	_WT("SetVisible"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+47] \
	},\
	{ /*37*/ \
		/*ccname*/	_WT("SetVisibleAt"),\
		/*egname*/	_WT("SetVisibleAt"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+49] \
	},\
	{ /*38*/ \
		/*ccname*/	_WT("IsEnabled"),\
		/*egname*/	_WT("IsEnabled"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+51] \
	},\
	{ /*39*/ \
		/*ccname*/	_WT("IsEnabledAt"),\
		/*egname*/	_WT("IsEnabledAt"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+52] \
	},\
	{ /*40*/ \
		/*ccname*/	_WT("SetEnabled"),\
		/*egname*/	_WT("SetEnabled"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+53] \
	},\
	{ /*41*/ \
		/*ccname*/	_WT("SetEnabledAt"),\
		/*egname*/	_WT("SetEnabledAt"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+55] \
	},\
	{ /*42*/ \
		/*ccname*/	_WT("IsChecked"),\
		/*egname*/	_WT("IsChecked"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+57] \
	},\
	{ /*43*/ \
		/*ccname*/	_WT("IsCheckedAt"),\
		/*egname*/	_WT("IsCheckedAt"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+58] \
	},\
	{ /*44*/ \
		/*ccname*/	_WT("SetChecked"),\
		/*egname*/	_WT("SetChecked"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+59] \
	},\
	{ /*45*/ \
		/*ccname*/	_WT("SetCheckedAt"),\
		/*egname*/	_WT("SetCheckedAt"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+61] \
	},\
	{ /*46*/ \
		/*ccname*/	_WT("HasAccelerator"),\
		/*egname*/	_WT("HasAccelerator"), \
		/*explain*/	_WT(""), \
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
	{ /*47*/ \
		/*ccname*/	_WT("HasAcceleratorAt"),\
		/*egname*/	_WT("HasAcceleratorAt"), \
		/*explain*/	_WT(""), \
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
	{ /*48*/ \
		/*ccname*/	_WT("SetAccelerator"),\
		/*egname*/	_WT("SetAccelerator"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	5, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+65] \
	},\
	{ /*49*/ \
		/*ccname*/	_WT("SetAcceleratorAt"),\
		/*egname*/	_WT("SetAcceleratorAt"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	5, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+70] \
	},\
	{ /*50*/ \
		/*ccname*/	_WT("RemoveAccelerator"),\
		/*egname*/	_WT("RemoveAccelerator"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+75] \
	},\
	{ /*51*/ \
		/*ccname*/	_WT("RemoveAcceleratorAt"),\
		/*egname*/	_WT("RemoveAcceleratorAt"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	1, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+76] \
	},\
	{ /*52*/ \
		/*ccname*/	_WT("SetColor"),\
		/*egname*/	_WT("SetColor"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	3, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+77] \
	},\
	{ /*53*/ \
		/*ccname*/	_WT("SetColorAt"),\
		/*egname*/	_WT("SetColorAt"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	3, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+80] \
	},\
	{ /*54*/ \
		/*ccname*/	_WT("SetFontList"),\
		/*egname*/	_WT("SetFontList"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+83] \
	},\
	{ /*55*/ \
		/*ccname*/	_WT("SetFontListAt"),\
		/*egname*/	_WT("SetFontListAt"), \
		/*explain*/	_WT(""), \
		/*category*/	-1, \
		/*state*/	NULL, \
		/*ret*/	SDT_BOOL, \
		/*reserved*/	0, \
		/*level*/	LVL_SIMPLE, \
		/*bmp inx*/	0, \
		/*bmp num*/	0, \
		/*argcount*/	2, \
		/*arg lp*/	&s_ArgInfo[BeginIndex+85] \
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyMenuModel_FUN_NAMES \
	EDITIONS("ProxyMenuModel_Constructor"),\
	EDITIONS("ProxyMenuModel_Destructor"),\
	EDITIONS("ProxyMenuModel_CopyConstructor"),\
	EDITIONS("ProxyMenuModel_CreateMenuModel"),\
	EDITIONS("ProxyMenuModel_IsSubMenu"),\
	EDITIONS("ProxyMenuModel_Clear"),\
	EDITIONS("ProxyMenuModel_GetCount"),\
	EDITIONS("ProxyMenuModel_AddSeparator"),\
	EDITIONS("ProxyMenuModel_AddItem"),\
	EDITIONS("ProxyMenuModel_AddCheckItem"),\
	EDITIONS("ProxyMenuModel_AddRadioItem"),\
	EDITIONS("ProxyMenuModel_AddSubMenu"),\
	EDITIONS("ProxyMenuModel_InsertSeparatorAt"),\
	EDITIONS("ProxyMenuModel_InsertItemAt"),\
	EDITIONS("ProxyMenuModel_InsertCheckItemAt"),\
	EDITIONS("ProxyMenuModel_InsertRadioItemAt"),\
	EDITIONS("ProxyMenuModel_InsertSubMenuAt"),\
	EDITIONS("ProxyMenuModel_Remove"),\
	EDITIONS("ProxyMenuModel_RemoveAt"),\
	EDITIONS("ProxyMenuModel_GetIndexOf"),\
	EDITIONS("ProxyMenuModel_GetCommandIdAt"),\
	EDITIONS("ProxyMenuModel_SetCommandIdAt"),\
	EDITIONS("ProxyMenuModel_GetLabel"),\
	EDITIONS("ProxyMenuModel_GetLabelAt"),\
	EDITIONS("ProxyMenuModel_SetLabel"),\
	EDITIONS("ProxyMenuModel_SetLabelAt"),\
	EDITIONS("ProxyMenuModel_GetType"),\
	EDITIONS("ProxyMenuModel_GetTypeAt"),\
	EDITIONS("ProxyMenuModel_GetGroupId"),\
	EDITIONS("ProxyMenuModel_GetGroupIdAt"),\
	EDITIONS("ProxyMenuModel_SetGroupId"),\
	EDITIONS("ProxyMenuModel_SetGroupIdAt"),\
	EDITIONS("ProxyMenuModel_GetSubMenu"),\
	EDITIONS("ProxyMenuModel_GetSubMenuAt"),\
	EDITIONS("ProxyMenuModel_IsVisible"),\
	EDITIONS("ProxyMenuModel_IsVisibleAt"),\
	EDITIONS("ProxyMenuModel_SetVisible"),\
	EDITIONS("ProxyMenuModel_SetVisibleAt"),\
	EDITIONS("ProxyMenuModel_IsEnabled"),\
	EDITIONS("ProxyMenuModel_IsEnabledAt"),\
	EDITIONS("ProxyMenuModel_SetEnabled"),\
	EDITIONS("ProxyMenuModel_SetEnabledAt"),\
	EDITIONS("ProxyMenuModel_IsChecked"),\
	EDITIONS("ProxyMenuModel_IsCheckedAt"),\
	EDITIONS("ProxyMenuModel_SetChecked"),\
	EDITIONS("ProxyMenuModel_SetCheckedAt"),\
	EDITIONS("ProxyMenuModel_HasAccelerator"),\
	EDITIONS("ProxyMenuModel_HasAcceleratorAt"),\
	EDITIONS("ProxyMenuModel_SetAccelerator"),\
	EDITIONS("ProxyMenuModel_SetAcceleratorAt"),\
	EDITIONS("ProxyMenuModel_RemoveAccelerator"),\
	EDITIONS("ProxyMenuModel_RemoveAcceleratorAt"),\
	EDITIONS("ProxyMenuModel_SetColor"),\
	EDITIONS("ProxyMenuModel_SetColorAt"),\
	EDITIONS("ProxyMenuModel_SetFontList"),\
	EDITIONS("ProxyMenuModel_SetFontListAt"),\


//==========================================

#define DECL_DATA_TYPE_ProxyMenuModel_FUN_CALLS \
	EDITIONF(ProxyMenuModel_Constructor),\
	EDITIONF(ProxyMenuModel_Destructor),\
	EDITIONF(ProxyMenuModel_CopyConstructor),\
	EDITIONF(ProxyMenuModel_CreateMenuModel),\
	EDITIONF(ProxyMenuModel_IsSubMenu),\
	EDITIONF(ProxyMenuModel_Clear),\
	EDITIONF(ProxyMenuModel_GetCount),\
	EDITIONF(ProxyMenuModel_AddSeparator),\
	EDITIONF(ProxyMenuModel_AddItem),\
	EDITIONF(ProxyMenuModel_AddCheckItem),\
	EDITIONF(ProxyMenuModel_AddRadioItem),\
	EDITIONF(ProxyMenuModel_AddSubMenu),\
	EDITIONF(ProxyMenuModel_InsertSeparatorAt),\
	EDITIONF(ProxyMenuModel_InsertItemAt),\
	EDITIONF(ProxyMenuModel_InsertCheckItemAt),\
	EDITIONF(ProxyMenuModel_InsertRadioItemAt),\
	EDITIONF(ProxyMenuModel_InsertSubMenuAt),\
	EDITIONF(ProxyMenuModel_Remove),\
	EDITIONF(ProxyMenuModel_RemoveAt),\
	EDITIONF(ProxyMenuModel_GetIndexOf),\
	EDITIONF(ProxyMenuModel_GetCommandIdAt),\
	EDITIONF(ProxyMenuModel_SetCommandIdAt),\
	EDITIONF(ProxyMenuModel_GetLabel),\
	EDITIONF(ProxyMenuModel_GetLabelAt),\
	EDITIONF(ProxyMenuModel_SetLabel),\
	EDITIONF(ProxyMenuModel_SetLabelAt),\
	EDITIONF(ProxyMenuModel_GetType),\
	EDITIONF(ProxyMenuModel_GetTypeAt),\
	EDITIONF(ProxyMenuModel_GetGroupId),\
	EDITIONF(ProxyMenuModel_GetGroupIdAt),\
	EDITIONF(ProxyMenuModel_SetGroupId),\
	EDITIONF(ProxyMenuModel_SetGroupIdAt),\
	EDITIONF(ProxyMenuModel_GetSubMenu),\
	EDITIONF(ProxyMenuModel_GetSubMenuAt),\
	EDITIONF(ProxyMenuModel_IsVisible),\
	EDITIONF(ProxyMenuModel_IsVisibleAt),\
	EDITIONF(ProxyMenuModel_SetVisible),\
	EDITIONF(ProxyMenuModel_SetVisibleAt),\
	EDITIONF(ProxyMenuModel_IsEnabled),\
	EDITIONF(ProxyMenuModel_IsEnabledAt),\
	EDITIONF(ProxyMenuModel_SetEnabled),\
	EDITIONF(ProxyMenuModel_SetEnabledAt),\
	EDITIONF(ProxyMenuModel_IsChecked),\
	EDITIONF(ProxyMenuModel_IsCheckedAt),\
	EDITIONF(ProxyMenuModel_SetChecked),\
	EDITIONF(ProxyMenuModel_SetCheckedAt),\
	EDITIONF(ProxyMenuModel_HasAccelerator),\
	EDITIONF(ProxyMenuModel_HasAcceleratorAt),\
	EDITIONF(ProxyMenuModel_SetAccelerator),\
	EDITIONF(ProxyMenuModel_SetAcceleratorAt),\
	EDITIONF(ProxyMenuModel_RemoveAccelerator),\
	EDITIONF(ProxyMenuModel_RemoveAcceleratorAt),\
	EDITIONF(ProxyMenuModel_SetColor),\
	EDITIONF(ProxyMenuModel_SetColorAt),\
	EDITIONF(ProxyMenuModel_SetFontList),\
	EDITIONF(ProxyMenuModel_SetFontListAt),\


//==========================================

extern "C"
void EDITIONF(ProxyMenuModel_Constructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_Destructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_CopyConstructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_CreateMenuModel) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_IsSubMenu) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_Clear) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_GetCount) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_AddSeparator) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_AddItem) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_AddCheckItem) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_AddRadioItem) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_AddSubMenu) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_InsertSeparatorAt) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_InsertItemAt) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_InsertCheckItemAt) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_InsertRadioItemAt) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_InsertSubMenuAt) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_Remove) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_RemoveAt) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_GetIndexOf) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_GetCommandIdAt) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_SetCommandIdAt) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_GetLabel) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_GetLabelAt) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_SetLabel) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_SetLabelAt) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_GetType) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_GetTypeAt) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_GetGroupId) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_GetGroupIdAt) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_SetGroupId) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_SetGroupIdAt) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_GetSubMenu) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_GetSubMenuAt) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_IsVisible) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_IsVisibleAt) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_SetVisible) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_SetVisibleAt) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_IsEnabled) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_IsEnabledAt) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_SetEnabled) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_SetEnabledAt) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_IsChecked) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_IsCheckedAt) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_SetChecked) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_SetCheckedAt) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_HasAccelerator) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_HasAcceleratorAt) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_SetAccelerator) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_SetAcceleratorAt) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_RemoveAccelerator) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_RemoveAcceleratorAt) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_SetColor) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_SetColorAt) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_SetFontList) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyMenuModel_SetFontListAt) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);


//==========================================

