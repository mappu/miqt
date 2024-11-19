#pragma once
#ifndef MIQT_QT_GEN_QSETTINGS_H
#define MIQT_QT_GEN_QSETTINGS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QSettings;
class QTextCodec;
class QTimerEvent;
class QVariant;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSettings QSettings;
typedef struct QTextCodec QTextCodec;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

void QSettings_new(struct miqt_string organization, QSettings** outptr_QSettings, QObject** outptr_QObject);
void QSettings_new2(int scope, struct miqt_string organization, QSettings** outptr_QSettings, QObject** outptr_QObject);
void QSettings_new3(int format, int scope, struct miqt_string organization, QSettings** outptr_QSettings, QObject** outptr_QObject);
void QSettings_new4(struct miqt_string fileName, int format, QSettings** outptr_QSettings, QObject** outptr_QObject);
void QSettings_new5(QSettings** outptr_QSettings, QObject** outptr_QObject);
void QSettings_new6(int scope, QSettings** outptr_QSettings, QObject** outptr_QObject);
void QSettings_new7(struct miqt_string organization, struct miqt_string application, QSettings** outptr_QSettings, QObject** outptr_QObject);
void QSettings_new8(struct miqt_string organization, struct miqt_string application, QObject* parent, QSettings** outptr_QSettings, QObject** outptr_QObject);
void QSettings_new9(int scope, struct miqt_string organization, struct miqt_string application, QSettings** outptr_QSettings, QObject** outptr_QObject);
void QSettings_new10(int scope, struct miqt_string organization, struct miqt_string application, QObject* parent, QSettings** outptr_QSettings, QObject** outptr_QObject);
void QSettings_new11(int format, int scope, struct miqt_string organization, struct miqt_string application, QSettings** outptr_QSettings, QObject** outptr_QObject);
void QSettings_new12(int format, int scope, struct miqt_string organization, struct miqt_string application, QObject* parent, QSettings** outptr_QSettings, QObject** outptr_QObject);
void QSettings_new13(struct miqt_string fileName, int format, QObject* parent, QSettings** outptr_QSettings, QObject** outptr_QObject);
void QSettings_new14(QObject* parent, QSettings** outptr_QSettings, QObject** outptr_QObject);
void QSettings_new15(int scope, QObject* parent, QSettings** outptr_QSettings, QObject** outptr_QObject);
QMetaObject* QSettings_MetaObject(const QSettings* self);
void* QSettings_Metacast(QSettings* self, const char* param1);
struct miqt_string QSettings_Tr(const char* s);
struct miqt_string QSettings_TrUtf8(const char* s);
void QSettings_Clear(QSettings* self);
void QSettings_Sync(QSettings* self);
int QSettings_Status(const QSettings* self);
bool QSettings_IsAtomicSyncRequired(const QSettings* self);
void QSettings_SetAtomicSyncRequired(QSettings* self, bool enable);
void QSettings_BeginGroup(QSettings* self, struct miqt_string prefix);
void QSettings_EndGroup(QSettings* self);
struct miqt_string QSettings_Group(const QSettings* self);
int QSettings_BeginReadArray(QSettings* self, struct miqt_string prefix);
void QSettings_BeginWriteArray(QSettings* self, struct miqt_string prefix);
void QSettings_EndArray(QSettings* self);
void QSettings_SetArrayIndex(QSettings* self, int i);
struct miqt_array /* of struct miqt_string */  QSettings_AllKeys(const QSettings* self);
struct miqt_array /* of struct miqt_string */  QSettings_ChildKeys(const QSettings* self);
struct miqt_array /* of struct miqt_string */  QSettings_ChildGroups(const QSettings* self);
bool QSettings_IsWritable(const QSettings* self);
void QSettings_SetValue(QSettings* self, struct miqt_string key, QVariant* value);
QVariant* QSettings_Value(const QSettings* self, struct miqt_string key);
void QSettings_Remove(QSettings* self, struct miqt_string key);
bool QSettings_Contains(const QSettings* self, struct miqt_string key);
void QSettings_SetFallbacksEnabled(QSettings* self, bool b);
bool QSettings_FallbacksEnabled(const QSettings* self);
struct miqt_string QSettings_FileName(const QSettings* self);
int QSettings_Format(const QSettings* self);
int QSettings_Scope(const QSettings* self);
struct miqt_string QSettings_OrganizationName(const QSettings* self);
struct miqt_string QSettings_ApplicationName(const QSettings* self);
void QSettings_SetIniCodec(QSettings* self, QTextCodec* codec);
void QSettings_SetIniCodecWithCodecName(QSettings* self, const char* codecName);
QTextCodec* QSettings_IniCodec(const QSettings* self);
void QSettings_SetDefaultFormat(int format);
int QSettings_DefaultFormat();
void QSettings_SetSystemIniPath(struct miqt_string dir);
void QSettings_SetUserIniPath(struct miqt_string dir);
void QSettings_SetPath(int format, int scope, struct miqt_string path);
bool QSettings_Event(QSettings* self, QEvent* event);
struct miqt_string QSettings_Tr2(const char* s, const char* c);
struct miqt_string QSettings_Tr3(const char* s, const char* c, int n);
struct miqt_string QSettings_TrUtf82(const char* s, const char* c);
struct miqt_string QSettings_TrUtf83(const char* s, const char* c, int n);
void QSettings_BeginWriteArray2(QSettings* self, struct miqt_string prefix, int size);
QVariant* QSettings_Value2(const QSettings* self, struct miqt_string key, QVariant* defaultValue);
void QSettings_override_virtual_Event(void* self, intptr_t slot);
bool QSettings_virtualbase_Event(void* self, QEvent* event);
void QSettings_override_virtual_EventFilter(void* self, intptr_t slot);
bool QSettings_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QSettings_override_virtual_TimerEvent(void* self, intptr_t slot);
void QSettings_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QSettings_override_virtual_ChildEvent(void* self, intptr_t slot);
void QSettings_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QSettings_override_virtual_CustomEvent(void* self, intptr_t slot);
void QSettings_virtualbase_CustomEvent(void* self, QEvent* event);
void QSettings_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QSettings_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QSettings_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QSettings_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QSettings_Delete(QSettings* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
