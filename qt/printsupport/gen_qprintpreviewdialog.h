#pragma once
#ifndef MIQT_QT_PRINTSUPPORT_GEN_QPRINTPREVIEWDIALOG_H
#define MIQT_QT_PRINTSUPPORT_GEN_QPRINTPREVIEWDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCloseEvent;
class QContextMenuEvent;
class QDialog;
class QEvent;
class QKeyEvent;
class QMetaObject;
class QObject;
class QPaintDevice;
class QPrintPreviewDialog;
class QPrinter;
class QResizeEvent;
class QShowEvent;
class QSize;
class QWidget;
#else
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDialog QDialog;
typedef struct QEvent QEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPrintPreviewDialog QPrintPreviewDialog;
typedef struct QPrinter QPrinter;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

void QPrintPreviewDialog_new(QWidget* parent, QPrintPreviewDialog** outptr_QPrintPreviewDialog, QDialog** outptr_QDialog, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QPrintPreviewDialog_new2(QPrintPreviewDialog** outptr_QPrintPreviewDialog, QDialog** outptr_QDialog, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QPrintPreviewDialog_new3(QPrinter* printer, QPrintPreviewDialog** outptr_QPrintPreviewDialog, QDialog** outptr_QDialog, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QPrintPreviewDialog_new4(QWidget* parent, int flags, QPrintPreviewDialog** outptr_QPrintPreviewDialog, QDialog** outptr_QDialog, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QPrintPreviewDialog_new5(QPrinter* printer, QWidget* parent, QPrintPreviewDialog** outptr_QPrintPreviewDialog, QDialog** outptr_QDialog, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QPrintPreviewDialog_new6(QPrinter* printer, QWidget* parent, int flags, QPrintPreviewDialog** outptr_QPrintPreviewDialog, QDialog** outptr_QDialog, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
QMetaObject* QPrintPreviewDialog_MetaObject(const QPrintPreviewDialog* self);
void* QPrintPreviewDialog_Metacast(QPrintPreviewDialog* self, const char* param1);
struct miqt_string QPrintPreviewDialog_Tr(const char* s);
struct miqt_string QPrintPreviewDialog_TrUtf8(const char* s);
QPrinter* QPrintPreviewDialog_Printer(QPrintPreviewDialog* self);
void QPrintPreviewDialog_SetVisible(QPrintPreviewDialog* self, bool visible);
void QPrintPreviewDialog_Done(QPrintPreviewDialog* self, int result);
void QPrintPreviewDialog_PaintRequested(QPrintPreviewDialog* self, QPrinter* printer);
void QPrintPreviewDialog_connect_PaintRequested(QPrintPreviewDialog* self, intptr_t slot);
struct miqt_string QPrintPreviewDialog_Tr2(const char* s, const char* c);
struct miqt_string QPrintPreviewDialog_Tr3(const char* s, const char* c, int n);
struct miqt_string QPrintPreviewDialog_TrUtf82(const char* s, const char* c);
struct miqt_string QPrintPreviewDialog_TrUtf83(const char* s, const char* c, int n);
void QPrintPreviewDialog_override_virtual_SetVisible(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_SetVisible(void* self, bool visible);
void QPrintPreviewDialog_override_virtual_Done(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_Done(void* self, int result);
void QPrintPreviewDialog_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QPrintPreviewDialog_virtualbase_SizeHint(const void* self);
void QPrintPreviewDialog_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QPrintPreviewDialog_virtualbase_MinimumSizeHint(const void* self);
void QPrintPreviewDialog_override_virtual_Open(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_Open(void* self);
void QPrintPreviewDialog_override_virtual_Exec(void* self, intptr_t slot);
int QPrintPreviewDialog_virtualbase_Exec(void* self);
void QPrintPreviewDialog_override_virtual_Accept(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_Accept(void* self);
void QPrintPreviewDialog_override_virtual_Reject(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_Reject(void* self);
void QPrintPreviewDialog_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1);
void QPrintPreviewDialog_override_virtual_CloseEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_CloseEvent(void* self, QCloseEvent* param1);
void QPrintPreviewDialog_override_virtual_ShowEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_ShowEvent(void* self, QShowEvent* param1);
void QPrintPreviewDialog_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_ResizeEvent(void* self, QResizeEvent* param1);
void QPrintPreviewDialog_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QPrintPreviewDialog_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1);
void QPrintPreviewDialog_override_virtual_EventFilter(void* self, intptr_t slot);
bool QPrintPreviewDialog_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2);
void QPrintPreviewDialog_Delete(QPrintPreviewDialog* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
