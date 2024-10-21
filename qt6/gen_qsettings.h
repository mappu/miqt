#ifndef GEN_QSETTINGS_H
#define GEN_QSETTINGS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAnyStringView;
class QMetaObject;
class QObject;
class QSettings;
class QVariant;
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSettings QSettings;
typedef struct QVariant QVariant;
#endif

QSettings* QSettings_new(struct miqt_string organization);
QSettings* QSettings_new2(int scope, struct miqt_string organization);
QSettings* QSettings_new3(int format, int scope, struct miqt_string organization);
QSettings* QSettings_new4(struct miqt_string fileName, int format);
QSettings* QSettings_new5();
QSettings* QSettings_new6(int scope);
QSettings* QSettings_new7(struct miqt_string organization, struct miqt_string application);
QSettings* QSettings_new8(struct miqt_string organization, struct miqt_string application, QObject* parent);
QSettings* QSettings_new9(int scope, struct miqt_string organization, struct miqt_string application);
QSettings* QSettings_new10(int scope, struct miqt_string organization, struct miqt_string application, QObject* parent);
QSettings* QSettings_new11(int format, int scope, struct miqt_string organization, struct miqt_string application);
QSettings* QSettings_new12(int format, int scope, struct miqt_string organization, struct miqt_string application, QObject* parent);
QSettings* QSettings_new13(struct miqt_string fileName, int format, QObject* parent);
QSettings* QSettings_new14(QObject* parent);
QSettings* QSettings_new15(int scope, QObject* parent);
QMetaObject* QSettings_MetaObject(const QSettings* self);
void* QSettings_Metacast(QSettings* self, const char* param1);
struct miqt_string QSettings_Tr(const char* s);
void QSettings_Clear(QSettings* self);
void QSettings_Sync(QSettings* self);
int QSettings_Status(const QSettings* self);
bool QSettings_IsAtomicSyncRequired(const QSettings* self);
void QSettings_SetAtomicSyncRequired(QSettings* self, bool enable);
void QSettings_BeginGroup(QSettings* self, QAnyStringView* prefix);
void QSettings_EndGroup(QSettings* self);
struct miqt_string QSettings_Group(const QSettings* self);
int QSettings_BeginReadArray(QSettings* self, QAnyStringView* prefix);
void QSettings_BeginWriteArray(QSettings* self, QAnyStringView* prefix);
void QSettings_EndArray(QSettings* self);
void QSettings_SetArrayIndex(QSettings* self, int i);
struct miqt_array* QSettings_AllKeys(const QSettings* self);
struct miqt_array* QSettings_ChildKeys(const QSettings* self);
struct miqt_array* QSettings_ChildGroups(const QSettings* self);
bool QSettings_IsWritable(const QSettings* self);
void QSettings_SetValue(QSettings* self, QAnyStringView* key, QVariant* value);
QVariant* QSettings_Value(const QSettings* self, QAnyStringView* key, QVariant* defaultValue);
QVariant* QSettings_ValueWithKey(const QSettings* self, QAnyStringView* key);
void QSettings_Remove(QSettings* self, QAnyStringView* key);
bool QSettings_Contains(const QSettings* self, QAnyStringView* key);
void QSettings_SetFallbacksEnabled(QSettings* self, bool b);
bool QSettings_FallbacksEnabled(const QSettings* self);
struct miqt_string QSettings_FileName(const QSettings* self);
int QSettings_Format(const QSettings* self);
int QSettings_Scope(const QSettings* self);
struct miqt_string QSettings_OrganizationName(const QSettings* self);
struct miqt_string QSettings_ApplicationName(const QSettings* self);
void QSettings_SetDefaultFormat(int format);
int QSettings_DefaultFormat();
void QSettings_SetPath(int format, int scope, struct miqt_string path);
struct miqt_string QSettings_Tr2(const char* s, const char* c);
struct miqt_string QSettings_Tr3(const char* s, const char* c, int n);
void QSettings_BeginWriteArray2(QSettings* self, QAnyStringView* prefix, int size);
void QSettings_Delete(QSettings* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
