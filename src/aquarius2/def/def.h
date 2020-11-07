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

//���������͵���Լ��
typedef char	        EPL_BYTE;
typedef short	        EPL_SHORT;
typedef int		        EPL_INT;
typedef __int64	        EPL_INT64;
typedef float	        EPL_FLOAT;
typedef double	        EPL_DOUBLE;
typedef int		        EPL_BOOL;
typedef char*           EPL_TEXT;
typedef unsigned char*  EPL_BIN;
typedef void*           EPL_SUBPTR;
typedef void*           EPL_STATMENT;
typedef void*           EPL_ALL;

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

//�ڲ�������־, ʹ�ô˱�־����, ö��, �Լ�����������������������
#define INTERNAL_CALL

//�ɿձ�־, ʹ�ô˱�־�Ĳ�����ʾΪ���������Կ�ֵ����, ��־��������������ǰ, ��: void foo(EPL_EMPTY int value);
#define EPL_EMPTY

//�¼���־, ʹ�ô˱�־�ķ���Ϊһ���������¼���
#define EPL_EVENT

#define ASSERTARRAY(type) if(!_rawptr){ \
    DWORD* pointer = (DWORD*)NewBuffer(sizeof(INT) * (2)); \
    *(pointer + 0) = 1; \
    *(pointer + 1) = 0; \
    return (type**)pointer; \
}

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

