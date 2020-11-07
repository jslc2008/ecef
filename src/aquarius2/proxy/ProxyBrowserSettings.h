#pragma once
#include "../def/def.h"
#include <functional>

/** ˮ�����������, �ṩ�������ʼ�����á� */
class AQUADLL ProxyBrowserSettings : public refcounted {
public:
    ProxyBrowserSettings(void* ptr);
    ~ProxyBrowserSettings();

public:

    /** �Ƿ���Ч, ��鱾���ͳ��ж���ʵ���Ƿ���Ч�� */
    bool IsValid();

    /**
     *  �ñ�׼����, ���ñ�׼���塣
     *
     *  @param font_family,�������� �����������ơ�
    */
    void SetStandardFontFamily(const char* font_family);

    /**
     *  �õȿ�����, ���õȿ����塣
     *
     *  @param font_family,�������� �����������ơ�
    */
    void SetFixedFontFamily(const char* font_family);

    /**
     *  �ó�������, ���ó������塣
     *
     *  @param font_family,�������� �����������ơ�
    */
    void SetSerifFontFamily(const char* font_family);

    /**
     *  ���޳�������, �����޳������塣
     *
     *  @param font_family,�������� �����������ơ�
    */
    void SetSansSerifFontFamily(const char* font_family);

    /**
     *  ����д����, ������д�����塣
     *
     *  @param font_family,�������� �����������ơ�
    */
    void SetCursiveFontFamily(const char* font_family);

    /**
     *  ����������, �����������塣
     *
     *  @param font_family,�������� �����������ơ�
    */
    void SetFantasyFontFamily(const char* font_family);

    /**
     *  ��Ĭ�������С, ����Ĭ�������С��
     *
     *  @param default_font_size,�����С Ĭ�ϵ������С��
    */
    void SetDefaultFontSize(int default_font_size);

    /**
     *  ��Ĭ�ϵȿ������С, ����Ĭ�ϵȿ������С��
     *
     *  @param default_fixed_font_size,�����С Ĭ�ϵ������С��
    */
    void SetDefaultFixedFontSize(int default_fixed_font_size);

    /**
     *  ��������С��С, ����������С��С��
     *
     *  @param minimum_font_size,��С��С ������С��С��
    */
    void SetMinimumFontSize(int minimum_font_size);

    /**
     *  ��������С�����С, ����������С�����С��
     *
     *  @param minimum_logical_font_size,��С�����С ������С�����С��
    */
    void SetMinimumLogicalFontSize(int minimum_logical_font_size);

    /**
     *  ��Ĭ�ϱ���, ��������Ĭ�ϱ��롣Ĭ��ȱʡֵΪ: \\\"ISO-8859-1\\\", Ҳ����ʹ��\\\"default-encoding\\\"�����п��ؽ������á�
     *
     *  @param default_encoding,�������� ����������ơ�
    */
    void SetDefaultEncoding(const char* default_encoding);

    /**
     *  �������Զ������Դ, �����Ƿ������Զ������Դ�������塣
     *
     *  @param remote_fonts,״ֵ̬  0 = ʹ��Ĭ������, 1 = �������, 2 = ��ֹ���ء�
    */
    void SetRemoteFonts(int remote_fonts);

    void SetJavascript(int value);
    void SetJavascriptCloseWindow(int value);
    void SetJavascriptAccessClipboard(int value);
    void SetJavascriptDomPaste(int value);
    void SetPlugins(int value);
    void SetUniversalAccessFromFileUrls(int value);
    void SetFileAccessFromFileUrls(int value);
    void SetWebSecurity(int value);
    void SetImageLoading(int value);
    void SetImageShrinkStandaloneToFit(int value);
    void SetTextAreaResize(int value);
    void SetTabToLinks(int value);
    void SetLocalStorage(int value);
    void SetDataBase(int value);
    void SetApplicationCache(int value);
    void SetWebGL(int value);
    void SetBackgroundColor(int color);
    void SetAcceptLanguageList(const char* values);

public:
    PRIME_IMPLEMENT_REFCOUNTING(ProxyBrowserSettings);
    AQUA_DECL_PUBLIC_ORIGIN;

private:
    void* _rawptr;
};