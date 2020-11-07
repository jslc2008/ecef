#pragma once
#include "def.h"
#include "include/cef_app.h"
#include <vector>
#include <string>
#include "include/cef_waitable_event.h"
#include <windows.h>

//  ʹ��ҳ������ڴ����ݿ�
struct MEMORY_DATA_BUFFER {
	unsigned char* pointer;
	size_t	size;
	size_t	offset;

	MEMORY_DATA_BUFFER(size_t length) :
		pointer(nullptr),
		size(0),
		offset(0) {
		if (length > 0) {
			Initialized(length);
		}
	}

	~MEMORY_DATA_BUFFER() {
		Clear();
	}

	void Initialized(size_t length) {
		this->Clear();
		pointer = (unsigned char*)VirtualAlloc(nullptr, length, MEM_COMMIT, PAGE_READWRITE);
		this->size = length;
		this->offset = 0;
	}

	void Clear() {
		if (pointer) {
			VirtualFree(pointer, 0, MEM_RELEASE);
			this->size = 0;
			this->offset = 0;
		}
	}
};

///
//	�ֽ���
///
class ByteBuffer {
public:
	ByteBuffer(size_t block_size);
	~ByteBuffer();

public:
	//д����
	void WriteBuffer(const void* in_data, size_t length);

	//������
	void ReadBuffer(void* out_data, size_t length);

	//��д�볤��
	size_t GetTotalBytes(void);

	void Clear();
private:
	std::vector<MEMORY_DATA_BUFFER> _bufferData;
	int _blockSize;
};

////////////////////////////////////////////////////

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

void WaitTimeout(float timeout);

/**
 *  �߳�ͬ���ȴ�
 *
 *  @param waitable �ȴ�����
*/
void WaitAwaking(CefRefPtr<CefWaitableEvent> waitable);

/**
 *  �߳�ͬ���ȴ�
 *
 *  @param waitable �ȴ�����
*/
void DomWaitAwaking(CefRefPtr<CefFrame> frame, CefRefPtr<CefWaitableEvent> waitable);


/**
 *  �߳�ͬ���ȴ�, ��ʱ����
 *
 *  @param waitable �ȴ�����
 *	@param timeout �ȴ�ʱ��
 *	@return ����true��ʾ�յ��ź�, false���ѳ���ʱ��
*/
bool WaitAwakingTimeout(CefRefPtr<CefWaitableEvent> waitable, float timeout);

/**
 *	�������ַ�������
*/
char** CreateEPLStringArray(const std::vector<CefString>& strings);