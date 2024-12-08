#pragma once
#ifndef MIQT_QT_GEN_QFILESELECTOR_H
#define MIQT_QT_GEN_QFILESELECTOR_H

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
class QFileSelector;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QUrl;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QFileSelector QFileSelector;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

QFileSelector* QFileSelector_new();
QFileSelector* QFileSelector_new2(QObject* parent);
void QFileSelector_virtbase(QFileSelector* src, QObject** outptr_QObject);
QMetaObject* QFileSelector_MetaObject(const QFileSelector* self);
void* QFileSelector_Metacast(QFileSelector* self, const char* param1);
struct miqt_string QFileSelector_Tr(const char* s);
struct miqt_string QFileSelector_TrUtf8(const char* s);
struct miqt_string QFileSelector_Select(const QFileSelector* self, struct miqt_string filePath);
QUrl* QFileSelector_SelectWithFilePath(const QFileSelector* self, QUrl* filePath);
struct miqt_array /* of struct miqt_string */  QFileSelector_ExtraSelectors(const QFileSelector* self);
void QFileSelector_SetExtraSelectors(QFileSelector* self, struct miqt_array /* of struct miqt_string */  list);
struct miqt_array /* of struct miqt_string */  QFileSelector_AllSelectors(const QFileSelector* self);
struct miqt_string QFileSelector_Tr2(const char* s, const char* c);
struct miqt_string QFileSelector_Tr3(const char* s, const char* c, int n);
struct miqt_string QFileSelector_TrUtf82(const char* s, const char* c);
struct miqt_string QFileSelector_TrUtf83(const char* s, const char* c, int n);
void QFileSelector_override_virtual_Event(void* self, intptr_t slot);
bool QFileSelector_virtualbase_Event(void* self, QEvent* event);
void QFileSelector_override_virtual_EventFilter(void* self, intptr_t slot);
bool QFileSelector_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QFileSelector_override_virtual_TimerEvent(void* self, intptr_t slot);
void QFileSelector_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QFileSelector_override_virtual_ChildEvent(void* self, intptr_t slot);
void QFileSelector_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QFileSelector_override_virtual_CustomEvent(void* self, intptr_t slot);
void QFileSelector_virtualbase_CustomEvent(void* self, QEvent* event);
void QFileSelector_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QFileSelector_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QFileSelector_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QFileSelector_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QFileSelector_Delete(QFileSelector* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
