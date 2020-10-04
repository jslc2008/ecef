#pragma once

//��������
#ifdef AQUARIUS_SRC
#define AQUADLL __declspec(dllexport)
#else
#define AQUADLL __declspec(dllimport)
#endif

//���߳��������ڹ�����
#define PRIME_DLL	AQUADLL
#include "refcounted.h"
using namespace prime;

//����APIԼ��
#define WEBAPI			__cdecl
#define WEBCALLBACK		__stdcall

///////////////////////////////////////////////////////
///////////////////////////////////////////////////////

//������Proxy����Զ����캯��
#define AQUA_PROXY_AUTO_CONSTRUCTOR(ClassName,OriginClass) \
	ClassName::ClassName(void* ptr):_rawptr(ptr){ \
		if(_rawptr) reinterpret_cast<OriginClass*>(_rawptr)->AddRef(); \
	} \
	ClassName::~##ClassName(){ \
		if(_rawptr){ \
			reinterpret_cast<OriginClass*>(_rawptr)->Release(); \
			_rawptr = NULL; \
		} \
	}

#define AQUA_DECL_PUBLIC_ORIGIN \
	public: \
		void* OriginPointer(void) { return _rawptr; }

//������д��
#define ASSERTQ(ret) if(!_rawptr) return ret
#define ASSERTN() if(!_rawptr) return 
#define FORWARD(ClassName) reinterpret_cast<ClassName*>(_rawptr)
#define ORIGIN(ClassName, wrap) reinterpret_cast<ClassName*>(wrap->OriginPointer())

//Լ���ڴ�������Լ��ͷŽӿڶ���
typedef void*(WEBCALLBACK* LPFN_MEMORY_ALLOCATE)(size_t size);
typedef void(WEBCALLBACK* LPFN_MEMORY_RELEASE)(void* ptr);

//////////////////////////////////////////////////////////

/**
 *  ����һ���µ��ڴ滺�������÷��亯���ɵ������ṩ��
 *  
 *  @param size ���䳤��
 *  @return ���ط��䵽���ڴ滺����ָ�롣
*/
extern AQUADLL LPFN_MEMORY_ALLOCATE NewBuffer;

/**
 *  �ͷ���NewBuffer����������ڴ滺����ָ��, ���ͷź����ɵ������ṩ��
 *
 *  @param ptr ������ָ��, ���ô˺�����, ��ָ�벻�ٿ��á�
*/
extern AQUADLL LPFN_MEMORY_RELEASE	DeleteBuffer;


/**
 *  ����һ���µ��ڴ滺����, �û����������飬�÷��亯���ɵ������ṩ��
 *
 *  @param size ���䳤��
 *  @return ���ط��䵽���ڴ滺����ָ�롣
*/
extern AQUADLL LPFN_MEMORY_ALLOCATE NewBufferInArray;

/**
 *  �ͷ���NewBufferInArray����������ڴ滺����ָ��, ���ͷź����ɵ������ṩ��
 *
 *  @param ptr ������ָ��, ���ô˺�����, ��ָ�벻�ٿ��á�
*/
extern AQUADLL LPFN_MEMORY_RELEASE	DeleteBufferInArray;

///////////////////////////////////////////////
///////////////////////////////////////////////

/**
 *  ת�����ֽ�(MBCS/ANSI)�ַ����������ֽ�(Unicode)�ַ�������
 *  
 *  @param str �ַ���������
 *  @param length �ַ�������
 *  @return ����ת����Ŀ��ֽ�(Unicode)�ַ�������
*/
AQUADLL wchar_t* WEBAPI ToUnicode(const char* str, size_t length);

/**
 *  ת�����ֽ�(Unicode)�ַ����������ֽ�(MBCS/ANSI)�ַ�������
 *
 *  @param str �ַ���������
 *  @param length �ַ�������
 *  @return ����ת����Ķ��ֽ�(MBCS/ANSI)�ַ�������
*/
AQUADLL char* WEBAPI ToAnsi(const wchar_t* str, size_t length);

//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////

