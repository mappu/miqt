#pragma once
#ifndef MIQT_QT6_GEN_QSIGNALMAPPER_H
#define MIQT_QT6_GEN_QSIGNALMAPPER_H

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
class QSignalMapper;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSignalMapper QSignalMapper;
typedef struct QTimerEvent QTimerEvent;
#endif

QSignalMapper* QSignalMapper_new();
QSignalMapper* QSignalMapper_new2(QObject* parent);
void QSignalMapper_virtbase(QSignalMapper* src, QObject** outptr_QObject);
QMetaObject* QSignalMapper_MetaObject(const QSignalMapper* self);
void* QSignalMapper_Metacast(QSignalMapper* self, const char* param1);
struct miqt_string QSignalMapper_Tr(const char* s);
void QSignalMapper_SetMapping(QSignalMapper* self, QObject* sender, int id);
void QSignalMapper_SetMapping2(QSignalMapper* self, QObject* sender, struct miqt_string text);
void QSignalMapper_SetMapping3(QSignalMapper* self, QObject* sender, QObject* object);
void QSignalMapper_RemoveMappings(QSignalMapper* self, QObject* sender);
QObject* QSignalMapper_Mapping(const QSignalMapper* self, int id);
QObject* QSignalMapper_MappingWithText(const QSignalMapper* self, struct miqt_string text);
QObject* QSignalMapper_MappingWithObject(const QSignalMapper* self, QObject* object);
void QSignalMapper_MappedInt(QSignalMapper* self, int param1);
void QSignalMapper_connect_MappedInt(QSignalMapper* self, intptr_t slot);
void QSignalMapper_MappedString(QSignalMapper* self, struct miqt_string param1);
void QSignalMapper_connect_MappedString(QSignalMapper* self, intptr_t slot);
void QSignalMapper_MappedObject(QSignalMapper* self, QObject* param1);
void QSignalMapper_connect_MappedObject(QSignalMapper* self, intptr_t slot);
void QSignalMapper_Map(QSignalMapper* self);
void QSignalMapper_MapWithSender(QSignalMapper* self, QObject* sender);
struct miqt_string QSignalMapper_Tr2(const char* s, const char* c);
struct miqt_string QSignalMapper_Tr3(const char* s, const char* c, int n);
bool QSignalMapper_override_virtual_Event(void* self, intptr_t slot);
bool QSignalMapper_virtualbase_Event(void* self, QEvent* event);
bool QSignalMapper_override_virtual_EventFilter(void* self, intptr_t slot);
bool QSignalMapper_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QSignalMapper_override_virtual_TimerEvent(void* self, intptr_t slot);
void QSignalMapper_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QSignalMapper_override_virtual_ChildEvent(void* self, intptr_t slot);
void QSignalMapper_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QSignalMapper_override_virtual_CustomEvent(void* self, intptr_t slot);
void QSignalMapper_virtualbase_CustomEvent(void* self, QEvent* event);
bool QSignalMapper_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QSignalMapper_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QSignalMapper_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QSignalMapper_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QSignalMapper_Delete(QSignalMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
