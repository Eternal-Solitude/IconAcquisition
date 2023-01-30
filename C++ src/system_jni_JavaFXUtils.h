/* DO NOT EDIT THIS FILE - it is machine generated */
#include "jni.h"
#include <windows.h>
#include <shellapi.h>
#include <ShObjIdl.h>
#include <gdiplus.h>
#include <tchar.h>
#include <iostream>
#include "screen_creator_util_SystemTools.h"
using namespace std;

#pragma comment(lib, "gdiplus.lib")

#ifndef _Included_system_jni_JavaFXUtils
#define _Included_system_jni_JavaFXUtils
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     system_jni_JavaFXUtils
 * Method:    getIconForPng
 * Signature: ([BI)[B
 */
JNIEXPORT jbyteArray JNICALL Java_system_jni_JavaFXUtils_getIconForPng(JNIEnv *env, jclass clasz, jbyteArray bytes, jint pixel);
/* Header for class system_jni_JavaFXUtils */
TCHAR* CharToTchar(const char* str);
char* ByteToChar(jbyte* bytes, int len);
WCHAR* CharToWchar(const char* str);
int GetEncoderClsid(const WCHAR* format, CLSID* pClsid);
BYTE* SaveHIconToPngBytes(HICON hIcon, int& size);
BYTE* SaveIconToPngBytes(SHFILEINFO shFileInfo, int w, int h, int& size);
#ifdef __cplusplus
}
#endif
#endif