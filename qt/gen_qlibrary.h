#pragma once
#ifndef MIQT_QT_GEN_QLIBRARY_H
#define MIQT_QT_GEN_QLIBRARY_H

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
class QLibrary;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QLibrary QLibrary;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QLibrary* QLibrary_new();
QLibrary* QLibrary_new2(struct miqt_string fileName);
QLibrary* QLibrary_new3(struct miqt_string fileName, int verNum);
QLibrary* QLibrary_new4(struct miqt_string fileName, struct miqt_string version);
QLibrary* QLibrary_new5(QObject* parent);
QLibrary* QLibrary_new6(struct miqt_string fileName, QObject* parent);
QLibrary* QLibrary_new7(struct miqt_string fileName, int verNum, QObject* parent);
QLibrary* QLibrary_new8(struct miqt_string fileName, struct miqt_string version, QObject* parent);
void QLibrary_virtbase(QLibrary* src, QObject** outptr_QObject);
QMetaObject* QLibrary_metaObject(const QLibrary* self);
void* QLibrary_metacast(QLibrary* self, const char* param1);
struct miqt_string QLibrary_tr(const char* s);
struct miqt_string QLibrary_trUtf8(const char* s);
bool QLibrary_load(QLibrary* self);
bool QLibrary_unload(QLibrary* self);
bool QLibrary_isLoaded(const QLibrary* self);
bool QLibrary_isLibrary(struct miqt_string fileName);
void QLibrary_setFileName(QLibrary* self, struct miqt_string fileName);
struct miqt_string QLibrary_fileName(const QLibrary* self);
void QLibrary_setFileNameAndVersion(QLibrary* self, struct miqt_string fileName, int verNum);
void QLibrary_setFileNameAndVersion2(QLibrary* self, struct miqt_string fileName, struct miqt_string version);
struct miqt_string QLibrary_errorString(const QLibrary* self);
void QLibrary_setLoadHints(QLibrary* self, int hints);
int QLibrary_loadHints(const QLibrary* self);
struct miqt_string QLibrary_tr2(const char* s, const char* c);
struct miqt_string QLibrary_tr3(const char* s, const char* c, int n);
struct miqt_string QLibrary_trUtf82(const char* s, const char* c);
struct miqt_string QLibrary_trUtf83(const char* s, const char* c, int n);
bool QLibrary_override_virtual_event(void* self, intptr_t slot);
bool QLibrary_virtualbase_event(void* self, QEvent* event);
bool QLibrary_override_virtual_eventFilter(void* self, intptr_t slot);
bool QLibrary_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QLibrary_override_virtual_timerEvent(void* self, intptr_t slot);
void QLibrary_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QLibrary_override_virtual_childEvent(void* self, intptr_t slot);
void QLibrary_virtualbase_childEvent(void* self, QChildEvent* event);
bool QLibrary_override_virtual_customEvent(void* self, intptr_t slot);
void QLibrary_virtualbase_customEvent(void* self, QEvent* event);
bool QLibrary_override_virtual_connectNotify(void* self, intptr_t slot);
void QLibrary_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QLibrary_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QLibrary_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QLibrary_delete(QLibrary* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
