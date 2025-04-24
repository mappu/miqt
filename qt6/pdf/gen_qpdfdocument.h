#pragma once
#ifndef MIQT_QT6_PDF_GEN_QPDFDOCUMENT_H
#define MIQT_QT6_PDF_GEN_QPDFDOCUMENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractListModel;
class QChildEvent;
class QEvent;
class QIODevice;
class QImage;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPdfDocument;
class QPdfDocumentRenderOptions;
class QPdfSelection;
class QPointF;
class QSize;
class QSizeF;
class QTimerEvent;
class QVariant;
#else
typedef struct QAbstractListModel QAbstractListModel;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QImage QImage;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPdfDocument QPdfDocument;
typedef struct QPdfDocumentRenderOptions QPdfDocumentRenderOptions;
typedef struct QPdfSelection QPdfSelection;
typedef struct QPointF QPointF;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QPdfDocument* QPdfDocument_new();
QPdfDocument* QPdfDocument_new2(QObject* parent);
void QPdfDocument_virtbase(QPdfDocument* src, QObject** outptr_QObject);
QMetaObject* QPdfDocument_metaObject(const QPdfDocument* self);
void* QPdfDocument_metacast(QPdfDocument* self, const char* param1);
struct miqt_string QPdfDocument_tr(const char* s);
int QPdfDocument_load(QPdfDocument* self, struct miqt_string fileName);
int QPdfDocument_status(const QPdfDocument* self);
void QPdfDocument_loadWithDevice(QPdfDocument* self, QIODevice* device);
void QPdfDocument_setPassword(QPdfDocument* self, struct miqt_string password);
struct miqt_string QPdfDocument_password(const QPdfDocument* self);
QVariant* QPdfDocument_metaData(const QPdfDocument* self, int field);
int QPdfDocument_error(const QPdfDocument* self);
void QPdfDocument_close(QPdfDocument* self);
int QPdfDocument_pageCount(const QPdfDocument* self);
QSizeF* QPdfDocument_pagePointSize(const QPdfDocument* self, int page);
struct miqt_string QPdfDocument_pageLabel(QPdfDocument* self, int page);
QAbstractListModel* QPdfDocument_pageModel(QPdfDocument* self);
QImage* QPdfDocument_render(QPdfDocument* self, int page, QSize* imageSize);
QPdfSelection* QPdfDocument_getSelection(QPdfDocument* self, int page, QPointF* start, QPointF* end);
QPdfSelection* QPdfDocument_getSelectionAtIndex(QPdfDocument* self, int page, int startIndex, int maxLength);
QPdfSelection* QPdfDocument_getAllText(QPdfDocument* self, int page);
void QPdfDocument_passwordChanged(QPdfDocument* self);
void QPdfDocument_connect_passwordChanged(QPdfDocument* self, intptr_t slot);
void QPdfDocument_passwordRequired(QPdfDocument* self);
void QPdfDocument_connect_passwordRequired(QPdfDocument* self, intptr_t slot);
void QPdfDocument_statusChanged(QPdfDocument* self, int status);
void QPdfDocument_connect_statusChanged(QPdfDocument* self, intptr_t slot);
void QPdfDocument_pageCountChanged(QPdfDocument* self, int pageCount);
void QPdfDocument_connect_pageCountChanged(QPdfDocument* self, intptr_t slot);
void QPdfDocument_pageModelChanged(QPdfDocument* self);
void QPdfDocument_connect_pageModelChanged(QPdfDocument* self, intptr_t slot);
struct miqt_string QPdfDocument_tr2(const char* s, const char* c);
struct miqt_string QPdfDocument_tr3(const char* s, const char* c, int n);
QImage* QPdfDocument_render2(QPdfDocument* self, int page, QSize* imageSize, QPdfDocumentRenderOptions* options);
bool QPdfDocument_override_virtual_event(void* self, intptr_t slot);
bool QPdfDocument_virtualbase_event(void* self, QEvent* event);
bool QPdfDocument_override_virtual_eventFilter(void* self, intptr_t slot);
bool QPdfDocument_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QPdfDocument_override_virtual_timerEvent(void* self, intptr_t slot);
void QPdfDocument_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QPdfDocument_override_virtual_childEvent(void* self, intptr_t slot);
void QPdfDocument_virtualbase_childEvent(void* self, QChildEvent* event);
bool QPdfDocument_override_virtual_customEvent(void* self, intptr_t slot);
void QPdfDocument_virtualbase_customEvent(void* self, QEvent* event);
bool QPdfDocument_override_virtual_connectNotify(void* self, intptr_t slot);
void QPdfDocument_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QPdfDocument_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QPdfDocument_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QPdfDocument_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QPdfDocument_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QPdfDocument_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QPdfDocument_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QPdfDocument_delete(QPdfDocument* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
