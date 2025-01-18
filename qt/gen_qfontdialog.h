#pragma once
#ifndef MIQT_QT_GEN_QFONTDIALOG_H
#define MIQT_QT_GEN_QFONTDIALOG_H

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
class QFont;
class QFontDialog;
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
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QFontDialog QFontDialog;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QFontDialog* QFontDialog_new(QWidget* parent);
QFontDialog* QFontDialog_new2();
QFontDialog* QFontDialog_new3(QFont* initial);
QFontDialog* QFontDialog_new4(QFont* initial, QWidget* parent);
void QFontDialog_virtbase(QFontDialog* src, QDialog** outptr_QDialog);
QMetaObject* QFontDialog_MetaObject(const QFontDialog* self);
void* QFontDialog_Metacast(QFontDialog* self, const char* param1);
struct miqt_string QFontDialog_Tr(const char* s);
struct miqt_string QFontDialog_TrUtf8(const char* s);
void QFontDialog_SetCurrentFont(QFontDialog* self, QFont* font);
QFont* QFontDialog_CurrentFont(const QFontDialog* self);
QFont* QFontDialog_SelectedFont(const QFontDialog* self);
void QFontDialog_SetOption(QFontDialog* self, int option);
bool QFontDialog_TestOption(const QFontDialog* self, int option);
void QFontDialog_SetOptions(QFontDialog* self, int options);
int QFontDialog_Options(const QFontDialog* self);
void QFontDialog_SetVisible(QFontDialog* self, bool visible);
QFont* QFontDialog_GetFont(bool* ok);
QFont* QFontDialog_GetFont2(bool* ok, QFont* initial);
void QFontDialog_CurrentFontChanged(QFontDialog* self, QFont* font);
void QFontDialog_connect_CurrentFontChanged(QFontDialog* self, intptr_t slot);
void QFontDialog_FontSelected(QFontDialog* self, QFont* font);
void QFontDialog_connect_FontSelected(QFontDialog* self, intptr_t slot);
void QFontDialog_ChangeEvent(QFontDialog* self, QEvent* event);
void QFontDialog_Done(QFontDialog* self, int result);
bool QFontDialog_EventFilter(QFontDialog* self, QObject* object, QEvent* event);
struct miqt_string QFontDialog_Tr2(const char* s, const char* c);
struct miqt_string QFontDialog_Tr3(const char* s, const char* c, int n);
struct miqt_string QFontDialog_TrUtf82(const char* s, const char* c);
struct miqt_string QFontDialog_TrUtf83(const char* s, const char* c, int n);
void QFontDialog_SetOption2(QFontDialog* self, int option, bool on);
QFont* QFontDialog_GetFont22(bool* ok, QWidget* parent);
QFont* QFontDialog_GetFont3(bool* ok, QFont* initial, QWidget* parent);
QFont* QFontDialog_GetFont4(bool* ok, QFont* initial, QWidget* parent, struct miqt_string title);
QFont* QFontDialog_GetFont5(bool* ok, QFont* initial, QWidget* parent, struct miqt_string title, int options);
void QFontDialog_override_virtual_SetVisible(void* self, intptr_t slot);
void QFontDialog_virtualbase_SetVisible(void* self, bool visible);
void QFontDialog_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_ChangeEvent(void* self, QEvent* event);
void QFontDialog_override_virtual_Done(void* self, intptr_t slot);
void QFontDialog_virtualbase_Done(void* self, int result);
void QFontDialog_override_virtual_EventFilter(void* self, intptr_t slot);
bool QFontDialog_virtualbase_EventFilter(void* self, QObject* object, QEvent* event);
void QFontDialog_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QFontDialog_virtualbase_SizeHint(const void* self);
void QFontDialog_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QFontDialog_virtualbase_MinimumSizeHint(const void* self);
void QFontDialog_override_virtual_Open(void* self, intptr_t slot);
void QFontDialog_virtualbase_Open(void* self);
void QFontDialog_override_virtual_Exec(void* self, intptr_t slot);
int QFontDialog_virtualbase_Exec(void* self);
void QFontDialog_override_virtual_Accept(void* self, intptr_t slot);
void QFontDialog_virtualbase_Accept(void* self);
void QFontDialog_override_virtual_Reject(void* self, intptr_t slot);
void QFontDialog_virtualbase_Reject(void* self);
void QFontDialog_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1);
void QFontDialog_override_virtual_CloseEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_CloseEvent(void* self, QCloseEvent* param1);
void QFontDialog_override_virtual_ShowEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_ShowEvent(void* self, QShowEvent* param1);
void QFontDialog_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_ResizeEvent(void* self, QResizeEvent* param1);
void QFontDialog_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1);
void QFontDialog_Delete(QFontDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
