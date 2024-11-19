#pragma once
#ifndef MIQT_QT6_GEN_QLIBRARY_H
#define MIQT_QT6_GEN_QLIBRARY_H

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

void QLibrary_new(QLibrary** outptr_QLibrary, QObject** outptr_QObject);
void QLibrary_new2(struct miqt_string fileName, QLibrary** outptr_QLibrary, QObject** outptr_QObject);
void QLibrary_new3(struct miqt_string fileName, int verNum, QLibrary** outptr_QLibrary, QObject** outptr_QObject);
void QLibrary_new4(struct miqt_string fileName, struct miqt_string version, QLibrary** outptr_QLibrary, QObject** outptr_QObject);
void QLibrary_new5(QObject* parent, QLibrary** outptr_QLibrary, QObject** outptr_QObject);
void QLibrary_new6(struct miqt_string fileName, QObject* parent, QLibrary** outptr_QLibrary, QObject** outptr_QObject);
void QLibrary_new7(struct miqt_string fileName, int verNum, QObject* parent, QLibrary** outptr_QLibrary, QObject** outptr_QObject);
void QLibrary_new8(struct miqt_string fileName, struct miqt_string version, QObject* parent, QLibrary** outptr_QLibrary, QObject** outptr_QObject);
QMetaObject* QLibrary_MetaObject(const QLibrary* self);
void* QLibrary_Metacast(QLibrary* self, const char* param1);
struct miqt_string QLibrary_Tr(const char* s);
bool QLibrary_Load(QLibrary* self);
bool QLibrary_Unload(QLibrary* self);
bool QLibrary_IsLoaded(const QLibrary* self);
bool QLibrary_IsLibrary(struct miqt_string fileName);
void QLibrary_SetFileName(QLibrary* self, struct miqt_string fileName);
struct miqt_string QLibrary_FileName(const QLibrary* self);
void QLibrary_SetFileNameAndVersion(QLibrary* self, struct miqt_string fileName, int verNum);
void QLibrary_SetFileNameAndVersion2(QLibrary* self, struct miqt_string fileName, struct miqt_string version);
struct miqt_string QLibrary_ErrorString(const QLibrary* self);
void QLibrary_SetLoadHints(QLibrary* self, int hints);
int QLibrary_LoadHints(const QLibrary* self);
struct miqt_string QLibrary_Tr2(const char* s, const char* c);
struct miqt_string QLibrary_Tr3(const char* s, const char* c, int n);
void QLibrary_override_virtual_Event(void* self, intptr_t slot);
bool QLibrary_virtualbase_Event(void* self, QEvent* event);
void QLibrary_override_virtual_EventFilter(void* self, intptr_t slot);
bool QLibrary_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QLibrary_override_virtual_TimerEvent(void* self, intptr_t slot);
void QLibrary_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QLibrary_override_virtual_ChildEvent(void* self, intptr_t slot);
void QLibrary_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QLibrary_override_virtual_CustomEvent(void* self, intptr_t slot);
void QLibrary_virtualbase_CustomEvent(void* self, QEvent* event);
void QLibrary_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QLibrary_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QLibrary_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QLibrary_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QLibrary_Delete(QLibrary* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
