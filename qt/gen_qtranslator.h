#ifndef GEN_QTRANSLATOR_H
#define GEN_QTRANSLATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

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
QMetaObject* QTranslator_MetaObject(const QTranslator* self);
void* QTranslator_Metacast(QTranslator* self, const char* param1);
struct miqt_string* QTranslator_Tr(const char* s);
struct miqt_string* QTranslator_TrUtf8(const char* s);
struct miqt_string* QTranslator_Translate(const QTranslator* self, const char* context, const char* sourceText);
bool QTranslator_IsEmpty(const QTranslator* self);
struct miqt_string* QTranslator_Language(const QTranslator* self);
struct miqt_string* QTranslator_FilePath(const QTranslator* self);
bool QTranslator_Load(QTranslator* self, struct miqt_string* filename);
bool QTranslator_Load2(QTranslator* self, QLocale* locale, struct miqt_string* filename);
bool QTranslator_Load3(QTranslator* self, const unsigned char* data, int lenVal);
struct miqt_string* QTranslator_Tr2(const char* s, const char* c);
struct miqt_string* QTranslator_Tr3(const char* s, const char* c, int n);
struct miqt_string* QTranslator_TrUtf82(const char* s, const char* c);
struct miqt_string* QTranslator_TrUtf83(const char* s, const char* c, int n);
struct miqt_string* QTranslator_Translate3(const QTranslator* self, const char* context, const char* sourceText, const char* disambiguation);
struct miqt_string* QTranslator_Translate4(const QTranslator* self, const char* context, const char* sourceText, const char* disambiguation, int n);
bool QTranslator_Load22(QTranslator* self, struct miqt_string* filename, struct miqt_string* directory);
bool QTranslator_Load32(QTranslator* self, struct miqt_string* filename, struct miqt_string* directory, struct miqt_string* search_delimiters);
bool QTranslator_Load4(QTranslator* self, struct miqt_string* filename, struct miqt_string* directory, struct miqt_string* search_delimiters, struct miqt_string* suffix);
bool QTranslator_Load33(QTranslator* self, QLocale* locale, struct miqt_string* filename, struct miqt_string* prefix);
bool QTranslator_Load42(QTranslator* self, QLocale* locale, struct miqt_string* filename, struct miqt_string* prefix, struct miqt_string* directory);
bool QTranslator_Load5(QTranslator* self, QLocale* locale, struct miqt_string* filename, struct miqt_string* prefix, struct miqt_string* directory, struct miqt_string* suffix);
bool QTranslator_Load34(QTranslator* self, const unsigned char* data, int lenVal, struct miqt_string* directory);
void QTranslator_Delete(QTranslator* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
