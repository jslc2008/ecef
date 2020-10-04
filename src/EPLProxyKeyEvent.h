#pragma once

#include "stdafx.h"
#include "lib2.h"


#define DECL_DATA_TYPE_ProxyKeyEvent \
	{ /*17*/ \
		/*m_szName*/		 _WT("Chromium�����¼�"), \
		/*m_szEgName*/		 _WT("ProxyKeyEvent"), \
		/*m_szExplain*/		 _WT("��ʾ�����¼����ࡣ"), \
		/*m_nCmdCount*/		 13, \
		/*m_pnCmdsIndex*/		 s_nProxyKeyEventElementCmdIndex, \
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

#define DECL_DATA_TYPE_ProxyKeyEvent_ARGINFO \
	{ /****** ProxyKeyEvent::SetType ** 0 **/ \
		/*name*/	 _WT("�¼�����"), \
		/*explain*/	 _WT("�˼����¼�������"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyKeyEvent::SetModifiers ** 1 **/ \
		/*name*/	 _WT("��λ��־"), \
		/*explain*/	 _WT("��λ��־, �����������ܼ��İ���״̬, ����ֵλö�ٳ���: #�¼���־.* ��"), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyKeyEvent::SetWindowsKeyCode ** 2 **/ \
		/*name*/	 _WT("������"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyKeyEvent::SetNativeKeyCode ** 3 **/ \
		/*name*/	 _WT("����������"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyKeyEvent::SetIsSystemKey ** 4 **/ \
		/*name*/	 _WT("ϵͳ��"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyKeyEvent::SetCharacter ** 5 **/ \
		/*name*/	 _WT("�ַ�����"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyKeyEvent::SetUnmodifiedCharacter ** 6 **/ \
		/*name*/	 _WT("ԭʼ�ַ�����"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\
	{ /****** ProxyKeyEvent::SetFocusOnEditableField ** 7 **/ \
		/*name*/	 _WT("focus_on_editable_field"), \
		/*explain*/	 _WT(""), \
		/*bmp inx*/	 0, \
		/*bmp num*/	 0, \
		/*type*/	 SDT_INT, \
		/*default*/	 0,\
		/*state*/	 NULL\
	},\


//==========================================

#define DECL_DATA_TYPE_ProxyKeyEvent_CMDINFO(BeginIndex) \
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
		/*ret*/	MAKELONG(18,0),  /*shrewd_ptr<ProxyKeyEvent>*/ \
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
		/*ccname*/	_WT("�����¼�����"),\
		/*egname*/	_WT("SetType"), \
		/*explain*/	_WT("���ü����¼����͡�����ֵΪö�ٳ���: #�����¼�����.* ��"), \
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
		/*ccname*/	_WT("���ü�λ��־"),\
		/*egname*/	_WT("SetModifiers"), \
		/*explain*/	_WT("���ü�λ��־ֵ��"), \
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
		/*ccname*/	_WT("����WINDOWS������"),\
		/*egname*/	_WT("SetWindowsKeyCode"), \
		/*explain*/	_WT("���ð����¼���Windows�������롣DOM�淶ʹ�ô�ֵ����ʱ��ֱ�������¼�(����: ��windows��), ��ʱ��ʹ��ӳ�亯��ȷ���� �й�ֵ�б�, �μ�: WebCore/platform/chromium/KeyboardCodes.h"), \
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
		/*ccname*/	_WT("���ñ���������"),\
		/*egname*/	_WT("SetNativeKeyCode"), \
		/*explain*/	_WT("���ñ�������ϵͳ��ʹ�õ�ʵ�ʼ����롣"), \
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
		/*ccname*/	_WT("�Ƿ�Ϊϵͳ��"),\
		/*egname*/	_WT("SetIsSystemKey"), \
		/*explain*/	_WT("ָʾ���¼��Ƿ���Ϊ\"ϵͳ��\"�¼����й���ϸ��Ϣ, ��μ�: http://msdn.microsoft.com/en-us/library/ms646286(VS.85).aspx  ���ڷ�windowsƽ̨��, ��ֵʼ��δfalse��"), \
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
		/*ccname*/	_WT("���������ַ�"),\
		/*egname*/	_WT("SetCharacter"), \
		/*explain*/	_WT("���ð��¼��������ɵ��ַ���"), \
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
		/*ccname*/	_WT("����ԭʼ�ַ�����"),\
		/*egname*/	_WT("SetUnmodifiedCharacter"), \
		/*explain*/	_WT("��|�ַ�����|��ͬ��Ӧ�ò������κ��޸�(shift������)�������ȷ����ݼ������á�"), \
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
		/*ccname*/	_WT("SetFocusOnEditableField"),\
		/*egname*/	_WT("SetFocusOnEditableField"), \
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


//==========================================

#define DECL_DATA_TYPE_ProxyKeyEvent_FUN_NAMES \
	EDITIONS("ProxyKeyEvent_Constructor"),\
	EDITIONS("ProxyKeyEvent_Destructor"),\
	EDITIONS("ProxyKeyEvent_CopyConstructor"),\
	EDITIONS("ProxyKeyEvent_Create"),\
	EDITIONS("ProxyKeyEvent_IsValid"),\
	EDITIONS("ProxyKeyEvent_SetType"),\
	EDITIONS("ProxyKeyEvent_SetModifiers"),\
	EDITIONS("ProxyKeyEvent_SetWindowsKeyCode"),\
	EDITIONS("ProxyKeyEvent_SetNativeKeyCode"),\
	EDITIONS("ProxyKeyEvent_SetIsSystemKey"),\
	EDITIONS("ProxyKeyEvent_SetCharacter"),\
	EDITIONS("ProxyKeyEvent_SetUnmodifiedCharacter"),\
	EDITIONS("ProxyKeyEvent_SetFocusOnEditableField"),\


//==========================================

#define DECL_DATA_TYPE_ProxyKeyEvent_FUN_CALLS \
	EDITIONF(ProxyKeyEvent_Constructor),\
	EDITIONF(ProxyKeyEvent_Destructor),\
	EDITIONF(ProxyKeyEvent_CopyConstructor),\
	EDITIONF(ProxyKeyEvent_Create),\
	EDITIONF(ProxyKeyEvent_IsValid),\
	EDITIONF(ProxyKeyEvent_SetType),\
	EDITIONF(ProxyKeyEvent_SetModifiers),\
	EDITIONF(ProxyKeyEvent_SetWindowsKeyCode),\
	EDITIONF(ProxyKeyEvent_SetNativeKeyCode),\
	EDITIONF(ProxyKeyEvent_SetIsSystemKey),\
	EDITIONF(ProxyKeyEvent_SetCharacter),\
	EDITIONF(ProxyKeyEvent_SetUnmodifiedCharacter),\
	EDITIONF(ProxyKeyEvent_SetFocusOnEditableField),\


//==========================================

extern "C"
void EDITIONF(ProxyKeyEvent_Constructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyKeyEvent_Destructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyKeyEvent_CopyConstructor)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyKeyEvent_Create) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyKeyEvent_IsValid) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyKeyEvent_SetType) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyKeyEvent_SetModifiers) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyKeyEvent_SetWindowsKeyCode) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyKeyEvent_SetNativeKeyCode) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyKeyEvent_SetIsSystemKey) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyKeyEvent_SetCharacter) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyKeyEvent_SetUnmodifiedCharacter) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
extern "C"
void EDITIONF(ProxyKeyEvent_SetFocusOnEditableField) (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);


//==========================================

