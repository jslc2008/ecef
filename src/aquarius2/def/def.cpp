#include "def.h"
#include <malloc.h>
#include <assert.h>

/**
 *  ����һ���µ��ڴ滺�������÷��亯���ɵ������ṩ��
 *
 *  @param size ���䳤��
 *  @return ���ط��䵽���ڴ滺����ָ�롣
*/
AQUADLL LPFN_MEMORY_ALLOCATE NewBuffer = nullptr;

/**
 *  �ͷ���NewBuffer����������ڴ滺����ָ��, ���ͷź����ɵ������ṩ��
 *
 *  @param ptr ������ָ��, ���ô˺�����, ��ָ�벻�ٿ��á�
*/
AQUADLL LPFN_MEMORY_RELEASE	DeleteBuffer = nullptr;

/**
 *  ����һ���µ��ڴ滺����, �û����������飬�÷��亯���ɵ������ṩ��
 *
 *  @param size ���䳤��
 *  @return ���ط��䵽���ڴ滺����ָ�롣
*/
AQUADLL LPFN_MEMORY_ALLOCATE NewBufferInArray = nullptr;

/**
 *  �ͷ���NewBufferInArray����������ڴ滺����ָ��, ���ͷź����ɵ������ṩ��
 *
 *  @param ptr ������ָ��, ���ô˺�����, ��ָ�벻�ٿ��á�
*/
AQUADLL LPFN_MEMORY_RELEASE	DeleteBufferInArray = nullptr;


/**
 *  ת�����ֽ�(MBCS/ANSI)�ַ����������ֽ�(Unicode)�ַ�������
 *
 *  @param str �ַ���������
 *  @param length �ַ�������
 *  @return ����ת����Ŀ��ֽ�(Unicode)�ַ�������
*/
AQUADLL wchar_t* WEBAPI ToUnicode(const char* str, size_t length) {
	assert(NewBuffer);
	if (!str || length <= 0) return NULL;
	size_t bLength = MultiByteToWideChar(CP_ACP, NULL, str, length, NULL, NULL);
	wchar_t* buf = (wchar_t*)NewBuffer(bLength* sizeof(wchar_t) + sizeof(wchar_t));
	MultiByteToWideChar(CP_ACP, NULL, str, length, buf, bLength);
	buf[bLength] = 0;
	return buf;
}

/**
 *  ת�����ֽ�(Unicode)�ַ����������ֽ�(MBCS/ANSI)�ַ�������
 *
 *  @param str �ַ���������
 *  @param length �ַ�������
 *  @return ����ת����Ķ��ֽ�(MBCS/ANSI)�ַ�������
*/
AQUADLL char* WEBAPI ToAnsi(const wchar_t* str, size_t length) {
	assert(NewBuffer);
	if (!str || length <= 0) return NULL;
	size_t bLength = WideCharToMultiByte(CP_ACP, NULL, str, length, NULL, NULL,NULL,NULL);
	char* buf = (char*)NewBuffer(bLength * sizeof(char*) + sizeof(char));
	WideCharToMultiByte(CP_ACP, NULL, str, length, buf, bLength, NULL, NULL);
	buf[bLength] = 0;
	return buf;
}