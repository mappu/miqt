#ifndef GEN_QTRANSLATOR_H
#define GEN_QTRANSLATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QLocale;
class QMetaObject;
class QObject;
class QTranslator;
#else
typedef struct QLocale QLocale;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTranslator QTranslator;
#endif

QTranslator* QTranslator_new();
QTranslator* QTranslator_new2(QObject* parent);
QMetaObject* QTranslator_MetaObject(QTranslator* self);
void QTranslator_Tr(char* s, char** _out, int* _out_Strlen);
void QTranslator_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QTranslator_Translate(QTranslator* self, char* context, char* sourceText, char** _out, int* _out_Strlen);
bool QTranslator_IsEmpty(QTranslator* self);
void QTranslator_Language(QTranslator* self, char** _out, int* _out_Strlen);
void QTranslator_FilePath(QTranslator* self, char** _out, int* _out_Strlen);
bool QTranslator_Load(QTranslator* self, const char* filename, size_t filename_Strlen);
bool QTranslator_Load2(QTranslator* self, QLocale* locale, const char* filename, size_t filename_Strlen);
bool QTranslator_Load3(QTranslator* self, unsigned char* data, int lenVal);
void QTranslator_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QTranslator_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QTranslator_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QTranslator_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QTranslator_Translate3(QTranslator* self, char* context, char* sourceText, char* disambiguation, char** _out, int* _out_Strlen);
void QTranslator_Translate4(QTranslator* self, char* context, char* sourceText, char* disambiguation, int n, char** _out, int* _out_Strlen);
bool QTranslator_Load22(QTranslator* self, const char* filename, size_t filename_Strlen, const char* directory, size_t directory_Strlen);
bool QTranslator_Load32(QTranslator* self, const char* filename, size_t filename_Strlen, const char* directory, size_t directory_Strlen, const char* search_delimiters, size_t search_delimiters_Strlen);
bool QTranslator_Load4(QTranslator* self, const char* filename, size_t filename_Strlen, const char* directory, size_t directory_Strlen, const char* search_delimiters, size_t search_delimiters_Strlen, const char* suffix, size_t suffix_Strlen);
bool QTranslator_Load33(QTranslator* self, QLocale* locale, const char* filename, size_t filename_Strlen, const char* prefix, size_t prefix_Strlen);
bool QTranslator_Load42(QTranslator* self, QLocale* locale, const char* filename, size_t filename_Strlen, const char* prefix, size_t prefix_Strlen, const char* directory, size_t directory_Strlen);
bool QTranslator_Load5(QTranslator* self, QLocale* locale, const char* filename, size_t filename_Strlen, const char* prefix, size_t prefix_Strlen, const char* directory, size_t directory_Strlen, const char* suffix, size_t suffix_Strlen);
bool QTranslator_Load34(QTranslator* self, unsigned char* data, int lenVal, const char* directory, size_t directory_Strlen);
void QTranslator_Delete(QTranslator* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
