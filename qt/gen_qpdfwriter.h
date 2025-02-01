#pragma once
#ifndef MIQT_QT_GEN_QPDFWRITER_H
#define MIQT_QT_GEN_QPDFWRITER_H

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
class QIODevice;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPagedPaintDevice;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QPagedPaintDevice__Margins)
typedef QPagedPaintDevice::Margins QPagedPaintDevice__Margins;
#else
class QPagedPaintDevice__Margins;
#endif
class QPaintDevice;
class QPaintEngine;
class QPainter;
class QPdfWriter;
class QPoint;
class QSizeF;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPagedPaintDevice QPagedPaintDevice;
typedef struct QPagedPaintDevice__Margins QPagedPaintDevice__Margins;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPainter QPainter;
typedef struct QPdfWriter QPdfWriter;
typedef struct QPoint QPoint;
typedef struct QSizeF QSizeF;
typedef struct QTimerEvent QTimerEvent;
#endif

QPdfWriter* QPdfWriter_new(struct miqt_string filename);
QPdfWriter* QPdfWriter_new2(QIODevice* device);
void QPdfWriter_virtbase(QPdfWriter* src, QObject** outptr_QObject, QPagedPaintDevice** outptr_QPagedPaintDevice);
QMetaObject* QPdfWriter_metaObject(const QPdfWriter* self);
void* QPdfWriter_metacast(QPdfWriter* self, const char* param1);
struct miqt_string QPdfWriter_tr(const char* s);
struct miqt_string QPdfWriter_trUtf8(const char* s);
void QPdfWriter_setPdfVersion(QPdfWriter* self, int version);
int QPdfWriter_pdfVersion(const QPdfWriter* self);
struct miqt_string QPdfWriter_title(const QPdfWriter* self);
void QPdfWriter_setTitle(QPdfWriter* self, struct miqt_string title);
struct miqt_string QPdfWriter_creator(const QPdfWriter* self);
void QPdfWriter_setCreator(QPdfWriter* self, struct miqt_string creator);
bool QPdfWriter_newPage(QPdfWriter* self);
void QPdfWriter_setResolution(QPdfWriter* self, int resolution);
int QPdfWriter_resolution(const QPdfWriter* self);
void QPdfWriter_setDocumentXmpMetadata(QPdfWriter* self, struct miqt_string xmpMetadata);
struct miqt_string QPdfWriter_documentXmpMetadata(const QPdfWriter* self);
void QPdfWriter_addFileAttachment(QPdfWriter* self, struct miqt_string fileName, struct miqt_string data);
void QPdfWriter_setPageSize(QPdfWriter* self, int size);
void QPdfWriter_setPageSizeMM(QPdfWriter* self, QSizeF* size);
void QPdfWriter_setMargins(QPdfWriter* self, QPagedPaintDevice__Margins* m);
QPaintEngine* QPdfWriter_paintEngine(const QPdfWriter* self);
int QPdfWriter_metric(const QPdfWriter* self, int id);
struct miqt_string QPdfWriter_tr2(const char* s, const char* c);
struct miqt_string QPdfWriter_tr3(const char* s, const char* c, int n);
struct miqt_string QPdfWriter_trUtf82(const char* s, const char* c);
struct miqt_string QPdfWriter_trUtf83(const char* s, const char* c, int n);
void QPdfWriter_addFileAttachment3(QPdfWriter* self, struct miqt_string fileName, struct miqt_string data, struct miqt_string mimeType);
bool QPdfWriter_override_virtual_newPage(void* self, intptr_t slot);
bool QPdfWriter_virtualbase_newPage(void* self);
bool QPdfWriter_override_virtual_setPageSize(void* self, intptr_t slot);
void QPdfWriter_virtualbase_setPageSize(void* self, int size);
bool QPdfWriter_override_virtual_setPageSizeMM(void* self, intptr_t slot);
void QPdfWriter_virtualbase_setPageSizeMM(void* self, QSizeF* size);
bool QPdfWriter_override_virtual_setMargins(void* self, intptr_t slot);
void QPdfWriter_virtualbase_setMargins(void* self, QPagedPaintDevice__Margins* m);
bool QPdfWriter_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QPdfWriter_virtualbase_paintEngine(const void* self);
bool QPdfWriter_override_virtual_metric(void* self, intptr_t slot);
int QPdfWriter_virtualbase_metric(const void* self, int id);
bool QPdfWriter_override_virtual_event(void* self, intptr_t slot);
bool QPdfWriter_virtualbase_event(void* self, QEvent* event);
bool QPdfWriter_override_virtual_eventFilter(void* self, intptr_t slot);
bool QPdfWriter_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QPdfWriter_override_virtual_timerEvent(void* self, intptr_t slot);
void QPdfWriter_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QPdfWriter_override_virtual_childEvent(void* self, intptr_t slot);
void QPdfWriter_virtualbase_childEvent(void* self, QChildEvent* event);
bool QPdfWriter_override_virtual_customEvent(void* self, intptr_t slot);
void QPdfWriter_virtualbase_customEvent(void* self, QEvent* event);
bool QPdfWriter_override_virtual_connectNotify(void* self, intptr_t slot);
void QPdfWriter_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QPdfWriter_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QPdfWriter_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
bool QPdfWriter_override_virtual_devType(void* self, intptr_t slot);
int QPdfWriter_virtualbase_devType(const void* self);
bool QPdfWriter_override_virtual_initPainter(void* self, intptr_t slot);
void QPdfWriter_virtualbase_initPainter(const void* self, QPainter* painter);
bool QPdfWriter_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QPdfWriter_virtualbase_redirected(const void* self, QPoint* offset);
bool QPdfWriter_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QPdfWriter_virtualbase_sharedPainter(const void* self);
void QPdfWriter_delete(QPdfWriter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
