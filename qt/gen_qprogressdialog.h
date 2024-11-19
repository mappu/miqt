#pragma once
#ifndef MIQT_QT_GEN_QPROGRESSDIALOG_H
#define MIQT_QT_GEN_QPROGRESSDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCloseEvent;
class QContextMenuEvent;
class QDialog;
class QEvent;
class QKeyEvent;
class QLabel;
class QMetaObject;
class QObject;
class QPaintDevice;
class QProgressBar;
class QProgressDialog;
class QPushButton;
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
typedef struct QLabel QLabel;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QProgressBar QProgressBar;
typedef struct QProgressDialog QProgressDialog;
typedef struct QPushButton QPushButton;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

void QProgressDialog_new(QWidget* parent, QProgressDialog** outptr_QProgressDialog, QDialog** outptr_QDialog, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QProgressDialog_new2(QProgressDialog** outptr_QProgressDialog, QDialog** outptr_QDialog, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QProgressDialog_new3(struct miqt_string labelText, struct miqt_string cancelButtonText, int minimum, int maximum, QProgressDialog** outptr_QProgressDialog, QDialog** outptr_QDialog, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QProgressDialog_new4(QWidget* parent, int flags, QProgressDialog** outptr_QProgressDialog, QDialog** outptr_QDialog, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QProgressDialog_new5(struct miqt_string labelText, struct miqt_string cancelButtonText, int minimum, int maximum, QWidget* parent, QProgressDialog** outptr_QProgressDialog, QDialog** outptr_QDialog, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QProgressDialog_new6(struct miqt_string labelText, struct miqt_string cancelButtonText, int minimum, int maximum, QWidget* parent, int flags, QProgressDialog** outptr_QProgressDialog, QDialog** outptr_QDialog, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
QMetaObject* QProgressDialog_MetaObject(const QProgressDialog* self);
void* QProgressDialog_Metacast(QProgressDialog* self, const char* param1);
struct miqt_string QProgressDialog_Tr(const char* s);
struct miqt_string QProgressDialog_TrUtf8(const char* s);
void QProgressDialog_SetLabel(QProgressDialog* self, QLabel* label);
void QProgressDialog_SetCancelButton(QProgressDialog* self, QPushButton* button);
void QProgressDialog_SetBar(QProgressDialog* self, QProgressBar* bar);
bool QProgressDialog_WasCanceled(const QProgressDialog* self);
int QProgressDialog_Minimum(const QProgressDialog* self);
int QProgressDialog_Maximum(const QProgressDialog* self);
int QProgressDialog_Value(const QProgressDialog* self);
QSize* QProgressDialog_SizeHint(const QProgressDialog* self);
struct miqt_string QProgressDialog_LabelText(const QProgressDialog* self);
int QProgressDialog_MinimumDuration(const QProgressDialog* self);
void QProgressDialog_SetAutoReset(QProgressDialog* self, bool reset);
bool QProgressDialog_AutoReset(const QProgressDialog* self);
void QProgressDialog_SetAutoClose(QProgressDialog* self, bool close);
bool QProgressDialog_AutoClose(const QProgressDialog* self);
void QProgressDialog_Cancel(QProgressDialog* self);
void QProgressDialog_Reset(QProgressDialog* self);
void QProgressDialog_SetMaximum(QProgressDialog* self, int maximum);
void QProgressDialog_SetMinimum(QProgressDialog* self, int minimum);
void QProgressDialog_SetRange(QProgressDialog* self, int minimum, int maximum);
void QProgressDialog_SetValue(QProgressDialog* self, int progress);
void QProgressDialog_SetLabelText(QProgressDialog* self, struct miqt_string text);
void QProgressDialog_SetCancelButtonText(QProgressDialog* self, struct miqt_string text);
void QProgressDialog_SetMinimumDuration(QProgressDialog* self, int ms);
void QProgressDialog_Canceled(QProgressDialog* self);
void QProgressDialog_connect_Canceled(QProgressDialog* self, intptr_t slot);
void QProgressDialog_ResizeEvent(QProgressDialog* self, QResizeEvent* event);
void QProgressDialog_CloseEvent(QProgressDialog* self, QCloseEvent* event);
void QProgressDialog_ChangeEvent(QProgressDialog* self, QEvent* event);
void QProgressDialog_ShowEvent(QProgressDialog* self, QShowEvent* event);
struct miqt_string QProgressDialog_Tr2(const char* s, const char* c);
struct miqt_string QProgressDialog_Tr3(const char* s, const char* c, int n);
struct miqt_string QProgressDialog_TrUtf82(const char* s, const char* c);
struct miqt_string QProgressDialog_TrUtf83(const char* s, const char* c, int n);
void QProgressDialog_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QProgressDialog_virtualbase_SizeHint(const void* self);
void QProgressDialog_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
void QProgressDialog_override_virtual_CloseEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_CloseEvent(void* self, QCloseEvent* event);
void QProgressDialog_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_ChangeEvent(void* self, QEvent* event);
void QProgressDialog_override_virtual_ShowEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_ShowEvent(void* self, QShowEvent* event);
void QProgressDialog_override_virtual_SetVisible(void* self, intptr_t slot);
void QProgressDialog_virtualbase_SetVisible(void* self, bool visible);
void QProgressDialog_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QProgressDialog_virtualbase_MinimumSizeHint(const void* self);
void QProgressDialog_override_virtual_Open(void* self, intptr_t slot);
void QProgressDialog_virtualbase_Open(void* self);
void QProgressDialog_override_virtual_Exec(void* self, intptr_t slot);
int QProgressDialog_virtualbase_Exec(void* self);
void QProgressDialog_override_virtual_Done(void* self, intptr_t slot);
void QProgressDialog_virtualbase_Done(void* self, int param1);
void QProgressDialog_override_virtual_Accept(void* self, intptr_t slot);
void QProgressDialog_virtualbase_Accept(void* self);
void QProgressDialog_override_virtual_Reject(void* self, intptr_t slot);
void QProgressDialog_virtualbase_Reject(void* self);
void QProgressDialog_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1);
void QProgressDialog_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1);
void QProgressDialog_override_virtual_EventFilter(void* self, intptr_t slot);
bool QProgressDialog_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2);
void QProgressDialog_Delete(QProgressDialog* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
