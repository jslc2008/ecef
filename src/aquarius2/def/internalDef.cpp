#include "internalDef.h"
#include <sstream>
#include <codecvt>
#include <atlconv.h>
#include <string.h>
#include <tchar.h>
#include "include/cef_waitable_event.h"
#include <Windows.h>
#include <thread>

/**
 *  �����Unicode�ַ����ϲ���һ���ַ��������
 *
 *  @param stringArray �ַ�������
 *  @param spaceString �ָ��ַ���
 *  @return ���غϲ����ANSI�ַ�����
*/
char* StringArrayToBuffer(const std::vector<CefString>& stringArray, const wchar_t* spaceString) {
	std::wstringstream strbuf;
	for (size_t i = 0; i < stringArray.size(); i++)
	{
        if (!stringArray[i].empty()) {
            strbuf << stringArray[i].c_str() << spaceString;
        }
	}
	const auto& s = strbuf.str();
	if (!s.empty()) {
		return ToAnsi(s.c_str(), s.length());
	}
	return NULL;
}

/**
 *  �ָ�һ������ַ�����
 *
 *  @param stringBuffer ���ָ���ַ���
 *  @param spaceString �����ָ���ַ���
 *  @return ���طָ�����ַ�������
*/
int SplitString(const char* stringBuffer, const char* spaceString, std::vector<std::wstring>& stringArrays) {
    if (!stringBuffer) {
        return 0;
    }
    std::size_t length = strlen(stringBuffer);
    wchar_t* buffer = nullptr;
    bool useMemory = false;
    USES_CONVERSION;

    if (length < 0x200) {
        buffer = A2W(stringBuffer);
        length = lstrlenW(buffer);
    }
    else {
        useMemory = true;
        buffer = ToUnicode(stringBuffer, length);
        length = lstrlenW(buffer);
    }

    if (!spaceString) {
        stringArrays.push_back(buffer);
        if (useMemory) DeleteBuffer(buffer);
        return 1;
    }

    wchar_t* space = A2W(spaceString);
    std::size_t spaceLength = lstrlenW(space);
    std::size_t pointer = 0;
    while (pointer < length) {
        const wchar_t* end = wcsstr(&buffer[pointer], space);
        if (!end) {
            stringArrays.push_back(buffer);
            break;
        }
        stringArrays.emplace_back(&buffer[pointer], end - &buffer[pointer]);
        pointer += (end - &buffer[pointer]) + spaceLength;
    }

    if (useMemory) DeleteBuffer(buffer);
    return stringArrays.size();
}

/**
 *  �ָ�һ������ַ�����
 *
 *  @param stringBuffer ���ָ���ַ���
 *  @param spaceString �����ָ���ַ���
 *  @return ���طָ�����ַ�������
*/
int SplitString(const char* stringBuffer, const char* spaceString, std::vector<CefString>& stringArrays) {
    if (!stringBuffer) {
        return 0;
    }
    std::size_t length = strlen(stringBuffer);
    wchar_t* buffer = nullptr;
    bool useMemory = false;
    USES_CONVERSION;

    if (length < 0x200) {
        buffer = A2W(stringBuffer);
        length = lstrlenW(buffer);
    }
    else {
        useMemory = true;
        buffer = ToUnicode(stringBuffer, length);
        length = lstrlenW(buffer);
    }

    if (!spaceString) {
        stringArrays.push_back(buffer);
        if (useMemory) DeleteBuffer(buffer);
        return 1;
    }

    wchar_t* space = A2W(spaceString);
    std::size_t spaceLength = lstrlenW(space);
    std::size_t pointer = 0;
    std::wstring temp;
    while (pointer < length) {
        const wchar_t* end = wcsstr(&buffer[pointer], space);
        if (!end) {
            stringArrays.push_back(buffer);
            break;
        }
        temp.assign(&buffer[pointer], end - &buffer[pointer]);
        stringArrays.emplace_back(temp);
        pointer += (end - &buffer[pointer]) + spaceLength;
    }

    if (useMemory) DeleteBuffer(buffer);
    return stringArrays.size();
}


/**
 *  �ָ�һ������ַ�����
 *
 *  @param stringBuffer ���ָ���ַ���
 *  @param spaceString �����ָ���ַ���
 *  @return ���طָ�����ַ�������
*/
int SplitString(const char* stringBuffer, const char* spaceString, std::vector<std::string>& stringArrays) {
    if (!stringBuffer) {
        return 0;
    }
    if (!spaceString) {
        stringArrays.push_back(stringBuffer);
        return 1;
    }
    std::size_t length = strlen(stringBuffer);
    std::size_t spaceLength = strlen(spaceString);
    std::size_t pointer = 0;
    while (pointer < length) {
        const char* end = strstr(&stringBuffer[pointer], spaceString);
        if (!end) {
            stringArrays.push_back(stringBuffer);
            break;
        }
        stringArrays.emplace_back(&stringBuffer[pointer], end - &stringBuffer[pointer]);
        pointer += (end - &stringBuffer[pointer]) + spaceLength;
    }
    return stringArrays.size();
}

/**
 *  �߳�ͬ���ȴ�
 *
 *  @param �ȴ�����
*/
void WaitAwaking(CefRefPtr<CefWaitableEvent> waitable) {
    MSG uiMsg;
    if (!waitable) {
        return;
    }
    while (true) {
        if (PeekMessage(&uiMsg, NULL, 0, 0, PM_REMOVE)) {
            TranslateMessage(&uiMsg);
            DispatchMessage(&uiMsg);
            if (uiMsg.message == WM_QUIT) {
                break;
            }
        }
        if (waitable->IsSignaled()) {
            break;
        }
        std::this_thread::yield();
    }
}

char** CreateEPLStringArray(const std::vector<CefString>& strings) {
    if (strings.empty()) {
        return NULL;
    }
    int count = strings.size();
    DWORD* pointer = (DWORD*)NewBuffer(sizeof(INT) * (2 + count));
    *(pointer + 0) = 1;
    *(pointer + 1) = count;
    for (size_t i = 0; i <= count; i++) {
        *(pointer + i + 2) = (DWORD)ToAnsi(strings[i].c_str(), strings[i].length());
    }
    return (char**)pointer;
}