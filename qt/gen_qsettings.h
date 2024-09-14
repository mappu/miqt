#ifndef GEN_QSETTINGS_H
#define GEN_QSETTINGS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QObject;
class QSettings;
class QTextCodec;
class QVariant;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSettings QSettings;
typedef struct QTextCodec QTextCodec;
typedef struct QVariant QVariant;
#endif

QSettings* QSettings_new(struct miqt_string* organization);
QSettings* QSettings_new2(uintptr_t scope, struct miqt_string* organization);
QSettings* QSettings_new3(uintptr_t format, uintptr_t scope, struct miqt_string* organization);
QSettings* QSettings_new4(struct miqt_string* fileName, uintptr_t format);
QSettings* QSettings_new5();
QSettings* QSettings_new6(uintptr_t scope);
QSettings* QSettings_new7(struct miqt_string* organization, struct miqt_string* application);
QSettings* QSettings_new8(struct miqt_string* organization, struct miqt_string* application, QObject* parent);
QSettings* QSettings_new9(uintptr_t scope, struct miqt_string* organization, struct miqt_string* application);
QSettings* QSettings_new10(uintptr_t scope, struct miqt_string* organization, struct miqt_string* application, QObject* parent);
QSettings* QSettings_new11(uintptr_t format, uintptr_t scope, struct miqt_string* organization, struct miqt_string* application);
QSettings* QSettings_new12(uintptr_t format, uintptr_t scope, struct miqt_string* organization, struct miqt_string* application, QObject* parent);
QSettings* QSettings_new13(struct miqt_string* fileName, uintptr_t format, QObject* parent);
QSettings* QSettings_new14(QObject* parent);
QSettings* QSettings_new15(uintptr_t scope, QObject* parent);
QMetaObject* QSettings_MetaObject(const QSettings* self);
struct miqt_string* QSettings_Tr(const char* s);
struct miqt_string* QSettings_TrUtf8(const char* s);
void QSettings_Clear(QSettings* self);
void QSettings_Sync(QSettings* self);
uintptr_t QSettings_Status(const QSettings* self);
bool QSettings_IsAtomicSyncRequired(const QSettings* self);
void QSettings_SetAtomicSyncRequired(QSettings* self, bool enable);
void QSettings_BeginGroup(QSettings* self, struct miqt_string* prefix);
void QSettings_EndGroup(QSettings* self);
struct miqt_string* QSettings_Group(const QSettings* self);
int QSettings_BeginReadArray(QSettings* self, struct miqt_string* prefix);
void QSettings_BeginWriteArray(QSettings* self, struct miqt_string* prefix);
void QSettings_EndArray(QSettings* self);
void QSettings_SetArrayIndex(QSettings* self, int i);
struct miqt_array* QSettings_AllKeys(const QSettings* self);
struct miqt_array* QSettings_ChildKeys(const QSettings* self);
struct miqt_array* QSettings_ChildGroups(const QSettings* self);
bool QSettings_IsWritable(const QSettings* self);
void QSettings_SetValue(QSettings* self, struct miqt_string* key, QVariant* value);
QVariant* QSettings_Value(const QSettings* self, struct miqt_string* key);
void QSettings_Remove(QSettings* self, struct miqt_string* key);
bool QSettings_Contains(const QSettings* self, struct miqt_string* key);
void QSettings_SetFallbacksEnabled(QSettings* self, bool b);
bool QSettings_FallbacksEnabled(const QSettings* self);
struct miqt_string* QSettings_FileName(const QSettings* self);
uintptr_t QSettings_Format(const QSettings* self);
uintptr_t QSettings_Scope(const QSettings* self);
struct miqt_string* QSettings_OrganizationName(const QSettings* self);
struct miqt_string* QSettings_ApplicationName(const QSettings* self);
void QSettings_SetIniCodec(QSettings* self, QTextCodec* codec);
void QSettings_SetIniCodecWithCodecName(QSettings* self, const char* codecName);
QTextCodec* QSettings_IniCodec(const QSettings* self);
void QSettings_SetDefaultFormat(uintptr_t format);
uintptr_t QSettings_DefaultFormat();
void QSettings_SetSystemIniPath(struct miqt_string* dir);
void QSettings_SetUserIniPath(struct miqt_string* dir);
void QSettings_SetPath(uintptr_t format, uintptr_t scope, struct miqt_string* path);
struct miqt_string* QSettings_Tr2(const char* s, const char* c);
struct miqt_string* QSettings_Tr3(const char* s, const char* c, int n);
struct miqt_string* QSettings_TrUtf82(const char* s, const char* c);
struct miqt_string* QSettings_TrUtf83(const char* s, const char* c, int n);
void QSettings_BeginWriteArray2(QSettings* self, struct miqt_string* prefix, int size);
QVariant* QSettings_Value2(const QSettings* self, struct miqt_string* key, QVariant* defaultValue);
void QSettings_Delete(QSettings* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
