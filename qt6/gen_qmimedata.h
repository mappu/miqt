#pragma once
#ifndef MIQT_QT6_GEN_QMIMEDATA_H
#define MIQT_QT6_GEN_QMIMEDATA_H

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
class QMetaType;
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
typedef struct QMetaType QMetaType;
typedef struct QMimeData QMimeData;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

QMimeData* QMimeData_new();
void QMimeData_virtbase(QMimeData* src, QObject** outptr_QObject);
QMetaObject* QMimeData_metaObject(const QMimeData* self);
void* QMimeData_metacast(QMimeData* self, const char* param1);
struct miqt_string QMimeData_tr(const char* s);
struct miqt_array /* of QUrl* */  QMimeData_urls(const QMimeData* self);
void QMimeData_setUrls(QMimeData* self, struct miqt_array /* of QUrl* */  urls);
bool QMimeData_hasUrls(const QMimeData* self);
struct miqt_string QMimeData_text(const QMimeData* self);
void QMimeData_setText(QMimeData* self, struct miqt_string text);
bool QMimeData_hasText(const QMimeData* self);
struct miqt_string QMimeData_html(const QMimeData* self);
void QMimeData_setHtml(QMimeData* self, struct miqt_string html);
bool QMimeData_hasHtml(const QMimeData* self);
QVariant* QMimeData_imageData(const QMimeData* self);
void QMimeData_setImageData(QMimeData* self, QVariant* image);
bool QMimeData_hasImage(const QMimeData* self);
QVariant* QMimeData_colorData(const QMimeData* self);
void QMimeData_setColorData(QMimeData* self, QVariant* color);
bool QMimeData_hasColor(const QMimeData* self);
struct miqt_string QMimeData_data(const QMimeData* self, struct miqt_string mimetype);
void QMimeData_setData(QMimeData* self, struct miqt_string mimetype, struct miqt_string data);
void QMimeData_removeFormat(QMimeData* self, struct miqt_string mimetype);
bool QMimeData_hasFormat(const QMimeData* self, struct miqt_string mimetype);
struct miqt_array /* of struct miqt_string */  QMimeData_formats(const QMimeData* self);
void QMimeData_clear(QMimeData* self);
QVariant* QMimeData_retrieveData(const QMimeData* self, struct miqt_string mimetype, QMetaType* preferredType);
struct miqt_string QMimeData_tr2(const char* s, const char* c);
struct miqt_string QMimeData_tr3(const char* s, const char* c, int n);
bool QMimeData_override_virtual_hasFormat(void* self, intptr_t slot);
bool QMimeData_virtualbase_hasFormat(const void* self, struct miqt_string mimetype);
bool QMimeData_override_virtual_formats(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QMimeData_virtualbase_formats(const void* self);
bool QMimeData_override_virtual_retrieveData(void* self, intptr_t slot);
QVariant* QMimeData_virtualbase_retrieveData(const void* self, struct miqt_string mimetype, QMetaType* preferredType);
bool QMimeData_override_virtual_event(void* self, intptr_t slot);
bool QMimeData_virtualbase_event(void* self, QEvent* event);
bool QMimeData_override_virtual_eventFilter(void* self, intptr_t slot);
bool QMimeData_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QMimeData_override_virtual_timerEvent(void* self, intptr_t slot);
void QMimeData_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QMimeData_override_virtual_childEvent(void* self, intptr_t slot);
void QMimeData_virtualbase_childEvent(void* self, QChildEvent* event);
bool QMimeData_override_virtual_customEvent(void* self, intptr_t slot);
void QMimeData_virtualbase_customEvent(void* self, QEvent* event);
bool QMimeData_override_virtual_connectNotify(void* self, intptr_t slot);
void QMimeData_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QMimeData_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QMimeData_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QMimeData_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QMimeData_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QMimeData_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QMimeData_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QMimeData_delete(QMimeData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
