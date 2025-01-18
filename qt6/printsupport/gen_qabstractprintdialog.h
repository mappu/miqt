#pragma once
#ifndef MIQT_QT6_PRINTSUPPORT_GEN_QABSTRACTPRINTDIALOG_H
#define MIQT_QT6_PRINTSUPPORT_GEN_QABSTRACTPRINTDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractPrintDialog;
class QCloseEvent;
class QContextMenuEvent;
class QDialog;
class QEvent;
class QKeyEvent;
class QMetaObject;
class QObject;
class QPaintDevice;
class QPrinter;
class QResizeEvent;
class QShowEvent;
class QSize;
class QWidget;
#else
typedef struct QAbstractPrintDialog QAbstractPrintDialog;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDialog QDialog;
typedef struct QEvent QEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPrinter QPrinter;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QAbstractPrintDialog* QAbstractPrintDialog_new(QPrinter* printer);
QAbstractPrintDialog* QAbstractPrintDialog_new2(QPrinter* printer, QWidget* parent);
void QAbstractPrintDialog_virtbase(QAbstractPrintDialog* src, QDialog** outptr_QDialog);
QMetaObject* QAbstractPrintDialog_MetaObject(const QAbstractPrintDialog* self);
void* QAbstractPrintDialog_Metacast(QAbstractPrintDialog* self, const char* param1);
struct miqt_string QAbstractPrintDialog_Tr(const char* s);
void QAbstractPrintDialog_SetOptionTabs(QAbstractPrintDialog* self, struct miqt_array /* of QWidget* */  tabs);
void QAbstractPrintDialog_SetPrintRange(QAbstractPrintDialog* self, int rangeVal);
int QAbstractPrintDialog_PrintRange(const QAbstractPrintDialog* self);
void QAbstractPrintDialog_SetMinMax(QAbstractPrintDialog* self, int min, int max);
int QAbstractPrintDialog_MinPage(const QAbstractPrintDialog* self);
int QAbstractPrintDialog_MaxPage(const QAbstractPrintDialog* self);
void QAbstractPrintDialog_SetFromTo(QAbstractPrintDialog* self, int fromPage, int toPage);
int QAbstractPrintDialog_FromPage(const QAbstractPrintDialog* self);
int QAbstractPrintDialog_ToPage(const QAbstractPrintDialog* self);
QPrinter* QAbstractPrintDialog_Printer(const QAbstractPrintDialog* self);
struct miqt_string QAbstractPrintDialog_Tr2(const char* s, const char* c);
struct miqt_string QAbstractPrintDialog_Tr3(const char* s, const char* c, int n);
void QAbstractPrintDialog_override_virtual_SetVisible(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_SetVisible(void* self, bool visible);
void QAbstractPrintDialog_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QAbstractPrintDialog_virtualbase_SizeHint(const void* self);
void QAbstractPrintDialog_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QAbstractPrintDialog_virtualbase_MinimumSizeHint(const void* self);
void QAbstractPrintDialog_override_virtual_Open(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_Open(void* self);
void QAbstractPrintDialog_override_virtual_Exec(void* self, intptr_t slot);
int QAbstractPrintDialog_virtualbase_Exec(void* self);
void QAbstractPrintDialog_override_virtual_Done(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_Done(void* self, int param1);
void QAbstractPrintDialog_override_virtual_Accept(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_Accept(void* self);
void QAbstractPrintDialog_override_virtual_Reject(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_Reject(void* self);
void QAbstractPrintDialog_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1);
void QAbstractPrintDialog_override_virtual_CloseEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_CloseEvent(void* self, QCloseEvent* param1);
void QAbstractPrintDialog_override_virtual_ShowEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_ShowEvent(void* self, QShowEvent* param1);
void QAbstractPrintDialog_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_ResizeEvent(void* self, QResizeEvent* param1);
void QAbstractPrintDialog_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1);
void QAbstractPrintDialog_override_virtual_EventFilter(void* self, intptr_t slot);
bool QAbstractPrintDialog_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2);
void QAbstractPrintDialog_Delete(QAbstractPrintDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
