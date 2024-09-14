#ifndef GEN_QLIBRARY_H
#define GEN_QLIBRARY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QLibrary;
class QMetaObject;
class QObject;
#else
typedef struct QLibrary QLibrary;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QLibrary* QLibrary_new();
QLibrary* QLibrary_new2(struct miqt_string* fileName);
QLibrary* QLibrary_new3(struct miqt_string* fileName, int verNum);
QLibrary* QLibrary_new4(struct miqt_string* fileName, struct miqt_string* version);
QLibrary* QLibrary_new5(QObject* parent);
QLibrary* QLibrary_new6(struct miqt_string* fileName, QObject* parent);
QLibrary* QLibrary_new7(struct miqt_string* fileName, int verNum, QObject* parent);
QLibrary* QLibrary_new8(struct miqt_string* fileName, struct miqt_string* version, QObject* parent);
QMetaObject* QLibrary_MetaObject(const QLibrary* self);
struct miqt_string* QLibrary_Tr(const char* s);
struct miqt_string* QLibrary_TrUtf8(const char* s);
bool QLibrary_Load(QLibrary* self);
bool QLibrary_Unload(QLibrary* self);
bool QLibrary_IsLoaded(const QLibrary* self);
bool QLibrary_IsLibrary(struct miqt_string* fileName);
void QLibrary_SetFileName(QLibrary* self, struct miqt_string* fileName);
struct miqt_string* QLibrary_FileName(const QLibrary* self);
void QLibrary_SetFileNameAndVersion(QLibrary* self, struct miqt_string* fileName, int verNum);
void QLibrary_SetFileNameAndVersion2(QLibrary* self, struct miqt_string* fileName, struct miqt_string* version);
struct miqt_string* QLibrary_ErrorString(const QLibrary* self);
void QLibrary_SetLoadHints(QLibrary* self, int hints);
int QLibrary_LoadHints(const QLibrary* self);
struct miqt_string* QLibrary_Tr2(const char* s, const char* c);
struct miqt_string* QLibrary_Tr3(const char* s, const char* c, int n);
struct miqt_string* QLibrary_TrUtf82(const char* s, const char* c);
struct miqt_string* QLibrary_TrUtf83(const char* s, const char* c, int n);
void QLibrary_Delete(QLibrary* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
