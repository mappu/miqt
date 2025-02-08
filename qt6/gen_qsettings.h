#pragma once
#ifndef MIQT_QT6_GEN_QSETTINGS_H
#define MIQT_QT6_GEN_QSETTINGS_H

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
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QSettings;
class QTimerEvent;
class QVariant;
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSettings QSettings;
typedef struct QTimerEvent QTimerEvent;
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
void QSettings_virtbase(QSettings* src, QObject** outptr_QObject);
QMetaObject* QSettings_metaObject(const QSettings* self);
void* QSettings_metacast(QSettings* self, const char* param1);
struct miqt_string QSettings_tr(const char* s);
void QSettings_clear(QSettings* self);
void QSettings_sync(QSettings* self);
int QSettings_status(const QSettings* self);
bool QSettings_isAtomicSyncRequired(const QSettings* self);
void QSettings_setAtomicSyncRequired(QSettings* self, bool enable);
void QSettings_beginGroup(QSettings* self, QAnyStringView* prefix);
void QSettings_endGroup(QSettings* self);
struct miqt_string QSettings_group(const QSettings* self);
int QSettings_beginReadArray(QSettings* self, QAnyStringView* prefix);
void QSettings_beginWriteArray(QSettings* self, QAnyStringView* prefix);
void QSettings_endArray(QSettings* self);
void QSettings_setArrayIndex(QSettings* self, int i);
struct miqt_array /* of struct miqt_string */  QSettings_allKeys(const QSettings* self);
struct miqt_array /* of struct miqt_string */  QSettings_childKeys(const QSettings* self);
struct miqt_array /* of struct miqt_string */  QSettings_childGroups(const QSettings* self);
bool QSettings_isWritable(const QSettings* self);
void QSettings_setValue(QSettings* self, QAnyStringView* key, QVariant* value);
QVariant* QSettings_value(const QSettings* self, QAnyStringView* key, QVariant* defaultValue);
QVariant* QSettings_valueWithKey(const QSettings* self, QAnyStringView* key);
void QSettings_remove(QSettings* self, QAnyStringView* key);
bool QSettings_contains(const QSettings* self, QAnyStringView* key);
void QSettings_setFallbacksEnabled(QSettings* self, bool b);
bool QSettings_fallbacksEnabled(const QSettings* self);
struct miqt_string QSettings_fileName(const QSettings* self);
int QSettings_format(const QSettings* self);
int QSettings_scope(const QSettings* self);
struct miqt_string QSettings_organizationName(const QSettings* self);
struct miqt_string QSettings_applicationName(const QSettings* self);
void QSettings_setDefaultFormat(int format);
int QSettings_defaultFormat();
void QSettings_setPath(int format, int scope, struct miqt_string path);
bool QSettings_event(QSettings* self, QEvent* event);
struct miqt_string QSettings_tr2(const char* s, const char* c);
struct miqt_string QSettings_tr3(const char* s, const char* c, int n);
void QSettings_beginWriteArray2(QSettings* self, QAnyStringView* prefix, int size);
bool QSettings_override_virtual_event(void* self, intptr_t slot);
bool QSettings_virtualbase_event(void* self, QEvent* event);
bool QSettings_override_virtual_eventFilter(void* self, intptr_t slot);
bool QSettings_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QSettings_override_virtual_timerEvent(void* self, intptr_t slot);
void QSettings_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QSettings_override_virtual_childEvent(void* self, intptr_t slot);
void QSettings_virtualbase_childEvent(void* self, QChildEvent* event);
bool QSettings_override_virtual_customEvent(void* self, intptr_t slot);
void QSettings_virtualbase_customEvent(void* self, QEvent* event);
bool QSettings_override_virtual_connectNotify(void* self, intptr_t slot);
void QSettings_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QSettings_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QSettings_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QSettings_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QSettings_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QSettings_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QSettings_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QSettings_delete(QSettings* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
