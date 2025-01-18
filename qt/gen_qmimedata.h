#pragma once
#ifndef MIQT_QT_GEN_QMIMEDATA_H
#define MIQT_QT_GEN_QMIMEDATA_H

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
class QMimeData;
class QObject;
class QTimerEvent;
class QUrl;
class QVariant;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

QMimeData* QMimeData_new();
void QMimeData_virtbase(QMimeData* src, QObject** outptr_QObject);
QMetaObject* QMimeData_MetaObject(const QMimeData* self);
void* QMimeData_Metacast(QMimeData* self, const char* param1);
struct miqt_string QMimeData_Tr(const char* s);
struct miqt_string QMimeData_TrUtf8(const char* s);
struct miqt_array /* of QUrl* */  QMimeData_Urls(const QMimeData* self);
void QMimeData_SetUrls(QMimeData* self, struct miqt_array /* of QUrl* */  urls);
bool QMimeData_HasUrls(const QMimeData* self);
struct miqt_string QMimeData_Text(const QMimeData* self);
void QMimeData_SetText(QMimeData* self, struct miqt_string text);
bool QMimeData_HasText(const QMimeData* self);
struct miqt_string QMimeData_Html(const QMimeData* self);
void QMimeData_SetHtml(QMimeData* self, struct miqt_string html);
bool QMimeData_HasHtml(const QMimeData* self);
QVariant* QMimeData_ImageData(const QMimeData* self);
void QMimeData_SetImageData(QMimeData* self, QVariant* image);
bool QMimeData_HasImage(const QMimeData* self);
QVariant* QMimeData_ColorData(const QMimeData* self);
void QMimeData_SetColorData(QMimeData* self, QVariant* color);
bool QMimeData_HasColor(const QMimeData* self);
struct miqt_string QMimeData_Data(const QMimeData* self, struct miqt_string mimetype);
void QMimeData_SetData(QMimeData* self, struct miqt_string mimetype, struct miqt_string data);
void QMimeData_RemoveFormat(QMimeData* self, struct miqt_string mimetype);
bool QMimeData_HasFormat(const QMimeData* self, struct miqt_string mimetype);
struct miqt_array /* of struct miqt_string */  QMimeData_Formats(const QMimeData* self);
void QMimeData_Clear(QMimeData* self);
QVariant* QMimeData_RetrieveData(const QMimeData* self, struct miqt_string mimetype, int preferredType);
struct miqt_string QMimeData_Tr2(const char* s, const char* c);
struct miqt_string QMimeData_Tr3(const char* s, const char* c, int n);
struct miqt_string QMimeData_TrUtf82(const char* s, const char* c);
struct miqt_string QMimeData_TrUtf83(const char* s, const char* c, int n);
bool QMimeData_override_virtual_HasFormat(void* self, intptr_t slot);
bool QMimeData_virtualbase_HasFormat(const void* self, struct miqt_string mimetype);
bool QMimeData_override_virtual_Formats(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QMimeData_virtualbase_Formats(const void* self);
bool QMimeData_override_virtual_RetrieveData(void* self, intptr_t slot);
QVariant* QMimeData_virtualbase_RetrieveData(const void* self, struct miqt_string mimetype, int preferredType);
bool QMimeData_override_virtual_Event(void* self, intptr_t slot);
bool QMimeData_virtualbase_Event(void* self, QEvent* event);
bool QMimeData_override_virtual_EventFilter(void* self, intptr_t slot);
bool QMimeData_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QMimeData_override_virtual_TimerEvent(void* self, intptr_t slot);
void QMimeData_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QMimeData_override_virtual_ChildEvent(void* self, intptr_t slot);
void QMimeData_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QMimeData_override_virtual_CustomEvent(void* self, intptr_t slot);
void QMimeData_virtualbase_CustomEvent(void* self, QEvent* event);
bool QMimeData_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QMimeData_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QMimeData_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QMimeData_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QMimeData_Delete(QMimeData* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
