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
class QPdfWriter;
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
typedef struct QPdfWriter QPdfWriter;
typedef struct QSizeF QSizeF;
typedef struct QTimerEvent QTimerEvent;
#endif

QPdfWriter* QPdfWriter_new(struct miqt_string filename);
QPdfWriter* QPdfWriter_new2(QIODevice* device);
void QPdfWriter_virtbase(QPdfWriter* src, QObject** outptr_QObject, QPagedPaintDevice** outptr_QPagedPaintDevice);
QMetaObject* QPdfWriter_MetaObject(const QPdfWriter* self);
void* QPdfWriter_Metacast(QPdfWriter* self, const char* param1);
struct miqt_string QPdfWriter_Tr(const char* s);
struct miqt_string QPdfWriter_TrUtf8(const char* s);
void QPdfWriter_SetPdfVersion(QPdfWriter* self, int version);
int QPdfWriter_PdfVersion(const QPdfWriter* self);
struct miqt_string QPdfWriter_Title(const QPdfWriter* self);
void QPdfWriter_SetTitle(QPdfWriter* self, struct miqt_string title);
struct miqt_string QPdfWriter_Creator(const QPdfWriter* self);
void QPdfWriter_SetCreator(QPdfWriter* self, struct miqt_string creator);
bool QPdfWriter_NewPage(QPdfWriter* self);
void QPdfWriter_SetResolution(QPdfWriter* self, int resolution);
int QPdfWriter_Resolution(const QPdfWriter* self);
void QPdfWriter_SetDocumentXmpMetadata(QPdfWriter* self, struct miqt_string xmpMetadata);
struct miqt_string QPdfWriter_DocumentXmpMetadata(const QPdfWriter* self);
void QPdfWriter_AddFileAttachment(QPdfWriter* self, struct miqt_string fileName, struct miqt_string data);
void QPdfWriter_SetPageSize(QPdfWriter* self, int size);
void QPdfWriter_SetPageSizeMM(QPdfWriter* self, QSizeF* size);
void QPdfWriter_SetMargins(QPdfWriter* self, QPagedPaintDevice__Margins* m);
QPaintEngine* QPdfWriter_PaintEngine(const QPdfWriter* self);
int QPdfWriter_Metric(const QPdfWriter* self, int id);
struct miqt_string QPdfWriter_Tr2(const char* s, const char* c);
struct miqt_string QPdfWriter_Tr3(const char* s, const char* c, int n);
struct miqt_string QPdfWriter_TrUtf82(const char* s, const char* c);
struct miqt_string QPdfWriter_TrUtf83(const char* s, const char* c, int n);
void QPdfWriter_AddFileAttachment3(QPdfWriter* self, struct miqt_string fileName, struct miqt_string data, struct miqt_string mimeType);
void QPdfWriter_override_virtual_NewPage(void* self, intptr_t slot);
bool QPdfWriter_virtualbase_NewPage(void* self);
void QPdfWriter_override_virtual_SetPageSize(void* self, intptr_t slot);
void QPdfWriter_virtualbase_SetPageSize(void* self, int size);
void QPdfWriter_override_virtual_SetPageSizeMM(void* self, intptr_t slot);
void QPdfWriter_virtualbase_SetPageSizeMM(void* self, QSizeF* size);
void QPdfWriter_override_virtual_SetMargins(void* self, intptr_t slot);
void QPdfWriter_virtualbase_SetMargins(void* self, QPagedPaintDevice__Margins* m);
void QPdfWriter_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QPdfWriter_virtualbase_PaintEngine(const void* self);
void QPdfWriter_override_virtual_Metric(void* self, intptr_t slot);
int QPdfWriter_virtualbase_Metric(const void* self, int id);
void QPdfWriter_override_virtual_Event(void* self, intptr_t slot);
bool QPdfWriter_virtualbase_Event(void* self, QEvent* event);
void QPdfWriter_override_virtual_EventFilter(void* self, intptr_t slot);
bool QPdfWriter_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QPdfWriter_override_virtual_TimerEvent(void* self, intptr_t slot);
void QPdfWriter_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QPdfWriter_override_virtual_ChildEvent(void* self, intptr_t slot);
void QPdfWriter_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QPdfWriter_override_virtual_CustomEvent(void* self, intptr_t slot);
void QPdfWriter_virtualbase_CustomEvent(void* self, QEvent* event);
void QPdfWriter_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QPdfWriter_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QPdfWriter_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QPdfWriter_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QPdfWriter_Delete(QPdfWriter* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
