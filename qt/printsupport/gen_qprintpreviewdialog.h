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
class QMetaObject;
class QPrintPreviewDialog;
class QPrinter;
class QWidget;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QPrintPreviewDialog QPrintPreviewDialog;
typedef struct QPrinter QPrinter;
typedef struct QWidget QWidget;
#endif

QPrintPreviewDialog* QPrintPreviewDialog_new(QWidget* parent);
QPrintPreviewDialog* QPrintPreviewDialog_new2();
QPrintPreviewDialog* QPrintPreviewDialog_new3(QPrinter* printer);
QPrintPreviewDialog* QPrintPreviewDialog_new4(QWidget* parent, int flags);
QPrintPreviewDialog* QPrintPreviewDialog_new5(QPrinter* printer, QWidget* parent);
QPrintPreviewDialog* QPrintPreviewDialog_new6(QPrinter* printer, QWidget* parent, int flags);
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
void QPrintPreviewDialog_Delete(QPrintPreviewDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
