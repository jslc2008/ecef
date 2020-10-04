#pragma once
#include "def.h"
#include "include/cef_app.h"
#include <vector>
#include <string>
#include "include/cef_waitable_event.h"

/**
 *  �����Unicode�ַ����ϲ���һ���ַ��������
 *
 *  @param stringArray �ַ�������
 *  @param spaceString �ָ��ַ���
 *  @return ���غϲ����ANSI�ַ�����
*/
char* StringArrayToBuffer(const std::vector<CefString>& stringArray, const wchar_t* spaceString);

/**
 *  �ָ�һ������ַ�����
 *
 *  @param stringBuffer ���ָ���ַ���
 *  @param spaceString �����ָ���ַ���
 *  @return ���طָ�����ַ�������
*/
int SplitString(const char* stringBuffer, const char* spaceString, std::vector<std::wstring>& stringArrays);


/**
 *  �ָ�һ������ַ�����
 *
 *  @param stringBuffer ���ָ���ַ���
 *  @param spaceString �����ָ���ַ���
 *  @return ���طָ�����ַ�������
*/
int SplitString(const char* stringBuffer, const char* spaceString, std::vector<CefString>& stringArrays);



/**
 *  �ָ�һ������ַ�����
 *
 *  @param stringBuffer ���ָ���ַ���
 *  @param spaceString �����ָ���ַ���
 *  @return ���طָ�����ַ�������
*/
int SplitString(const char* stringBuffer, const char* spaceString, std::vector<std::string>& stringArrays);

/**
 *  �߳�ͬ���ȴ�
 *
 *  @param �ȴ�����
*/
void WaitAwaking(CefRefPtr<CefWaitableEvent> waitable);

char** CreateEPLStringArray(const std::vector<CefString>& strings);