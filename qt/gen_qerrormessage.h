#pragma once
#ifndef MIQT_QT_GEN_QERRORMESSAGE_H
#define MIQT_QT_GEN_QERRORMESSAGE_H

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
class QErrorMessage;
class QEvent;
class QKeyEvent;
class QMetaObject;
class QObject;
class QPaintDevice;
class QResizeEvent;
class QShowEvent;
class QSize;
class QWidget;
#else
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDialog QDialog;
typedef struct QErrorMessage QErrorMessage;
typedef struct QEvent QEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QErrorMessage* QErrorMessage_new(QWidget* parent);
QErrorMessage* QErrorMessage_new2();
void QErrorMessage_virtbase(QErrorMessage* src, QDialog** outptr_QDialog);
QMetaObject* QErrorMessage_MetaObject(const QErrorMessage* self);
void* QErrorMessage_Metacast(QErrorMessage* self, const char* param1);
struct miqt_string QErrorMessage_Tr(const char* s);
struct miqt_string QErrorMessage_TrUtf8(const char* s);
QErrorMessage* QErrorMessage_QtHandler();
void QErrorMessage_ShowMessage(QErrorMessage* self, struct miqt_string message);
void QErrorMessage_ShowMessage2(QErrorMessage* self, struct miqt_string message, struct miqt_string typeVal);
void QErrorMessage_Done(QErrorMessage* self, int param1);
void QErrorMessage_ChangeEvent(QErrorMessage* self, QEvent* e);
struct miqt_string QErrorMessage_Tr2(const char* s, const char* c);
struct miqt_string QErrorMessage_Tr3(const char* s, const char* c, int n);
struct miqt_string QErrorMessage_TrUtf82(const char* s, const char* c);
struct miqt_string QErrorMessage_TrUtf83(const char* s, const char* c, int n);
void QErrorMessage_override_virtual_Done(void* self, intptr_t slot);
void QErrorMessage_virtualbase_Done(void* self, int param1);
void QErrorMessage_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_ChangeEvent(void* self, QEvent* e);
void QErrorMessage_override_virtual_SetVisible(void* self, intptr_t slot);
void QErrorMessage_virtualbase_SetVisible(void* self, bool visible);
void QErrorMessage_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QErrorMessage_virtualbase_SizeHint(const void* self);
void QErrorMessage_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QErrorMessage_virtualbase_MinimumSizeHint(const void* self);
void QErrorMessage_override_virtual_Open(void* self, intptr_t slot);
void QErrorMessage_virtualbase_Open(void* self);
void QErrorMessage_override_virtual_Exec(void* self, intptr_t slot);
int QErrorMessage_virtualbase_Exec(void* self);
void QErrorMessage_override_virtual_Accept(void* self, intptr_t slot);
void QErrorMessage_virtualbase_Accept(void* self);
void QErrorMessage_override_virtual_Reject(void* self, intptr_t slot);
void QErrorMessage_virtualbase_Reject(void* self);
void QErrorMessage_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1);
void QErrorMessage_override_virtual_CloseEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_CloseEvent(void* self, QCloseEvent* param1);
void QErrorMessage_override_virtual_ShowEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_ShowEvent(void* self, QShowEvent* param1);
void QErrorMessage_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_ResizeEvent(void* self, QResizeEvent* param1);
void QErrorMessage_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QErrorMessage_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1);
void QErrorMessage_override_virtual_EventFilter(void* self, intptr_t slot);
bool QErrorMessage_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2);
void QErrorMessage_Delete(QErrorMessage* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
