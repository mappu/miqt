#pragma once
#ifndef MIQT_QT6_GEN_QBYTEARRAYALGORITHMS_H
#define MIQT_QT6_GEN_QBYTEARRAYALGORITHMS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArrayView;
#else
typedef struct QByteArrayView QByteArrayView;
#endif

char* miqt_QstrdupWithChar(const char* param1);
size_t miqt_QstrlenWithStr(const char* str);
size_t miqt_Qstrnlen2(const char* str, size_t maxlen);
char* miqt_Qstrcpy2(char* dst, const char* src);
char* miqt_Qstrncpy2(char* dst, const char* src, size_t len);
int miqt_Qstrcmp2(const char* str1, const char* str2);
int miqt_Qstrncmp2(const char* str1, const char* str2, size_t len);
int miqt_Qstricmp2(const char* param1, const char* param2);
int miqt_Qstrnicmp2(const char* param1, const char* param2, size_t len);
int miqt_Qstrnicmp3(const char* param1, ptrdiff_t param2, const char* param3, ptrdiff_t param4);
unsigned short miqt_QChecksum2(QByteArrayView* data, int standard);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
