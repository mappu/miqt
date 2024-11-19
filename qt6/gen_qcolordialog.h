#pragma once
#ifndef MIQT_QT6_GEN_QCOLORDIALOG_H
#define MIQT_QT6_GEN_QCOLORDIALOG_H

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
class QColor;
class QColorDialog;
class QContextMenuEvent;
class QDialog;
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
typedef struct QColor QColor;
typedef struct QColorDialog QColorDialog;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDialog QDialog;
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

void QColorDialog_new(QWidget* parent, QColorDialog** outptr_QColorDialog, QDialog** outptr_QDialog, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QColorDialog_new2(QColorDialog** outptr_QColorDialog, QDialog** outptr_QDialog, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QColorDialog_new3(QColor* initial, QColorDialog** outptr_QColorDialog, QDialog** outptr_QDialog, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QColorDialog_new4(QColor* initial, QWidget* parent, QColorDialog** outptr_QColorDialog, QDialog** outptr_QDialog, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
QMetaObject* QColorDialog_MetaObject(const QColorDialog* self);
void* QColorDialog_Metacast(QColorDialog* self, const char* param1);
struct miqt_string QColorDialog_Tr(const char* s);
void QColorDialog_SetCurrentColor(QColorDialog* self, QColor* color);
QColor* QColorDialog_CurrentColor(const QColorDialog* self);
QColor* QColorDialog_SelectedColor(const QColorDialog* self);
void QColorDialog_SetOption(QColorDialog* self, int option);
bool QColorDialog_TestOption(const QColorDialog* self, int option);
void QColorDialog_SetOptions(QColorDialog* self, int options);
int QColorDialog_Options(const QColorDialog* self);
void QColorDialog_SetVisible(QColorDialog* self, bool visible);
QColor* QColorDialog_GetColor();
int QColorDialog_CustomCount();
QColor* QColorDialog_CustomColor(int index);
void QColorDialog_SetCustomColor(int index, QColor* color);
QColor* QColorDialog_StandardColor(int index);
void QColorDialog_SetStandardColor(int index, QColor* color);
void QColorDialog_CurrentColorChanged(QColorDialog* self, QColor* color);
void QColorDialog_connect_CurrentColorChanged(QColorDialog* self, intptr_t slot);
void QColorDialog_ColorSelected(QColorDialog* self, QColor* color);
void QColorDialog_connect_ColorSelected(QColorDialog* self, intptr_t slot);
void QColorDialog_ChangeEvent(QColorDialog* self, QEvent* event);
void QColorDialog_Done(QColorDialog* self, int result);
struct miqt_string QColorDialog_Tr2(const char* s, const char* c);
struct miqt_string QColorDialog_Tr3(const char* s, const char* c, int n);
void QColorDialog_SetOption2(QColorDialog* self, int option, bool on);
QColor* QColorDialog_GetColor1(QColor* initial);
QColor* QColorDialog_GetColor2(QColor* initial, QWidget* parent);
QColor* QColorDialog_GetColor3(QColor* initial, QWidget* parent, struct miqt_string title);
QColor* QColorDialog_GetColor4(QColor* initial, QWidget* parent, struct miqt_string title, int options);
void QColorDialog_override_virtual_SetVisible(void* self, intptr_t slot);
void QColorDialog_virtualbase_SetVisible(void* self, bool visible);
void QColorDialog_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_ChangeEvent(void* self, QEvent* event);
void QColorDialog_override_virtual_Done(void* self, intptr_t slot);
void QColorDialog_virtualbase_Done(void* self, int result);
void QColorDialog_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QColorDialog_virtualbase_SizeHint(const void* self);
void QColorDialog_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QColorDialog_virtualbase_MinimumSizeHint(const void* self);
void QColorDialog_override_virtual_Open(void* self, intptr_t slot);
void QColorDialog_virtualbase_Open(void* self);
void QColorDialog_override_virtual_Exec(void* self, intptr_t slot);
int QColorDialog_virtualbase_Exec(void* self);
void QColorDialog_override_virtual_Accept(void* self, intptr_t slot);
void QColorDialog_virtualbase_Accept(void* self);
void QColorDialog_override_virtual_Reject(void* self, intptr_t slot);
void QColorDialog_virtualbase_Reject(void* self);
void QColorDialog_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1);
void QColorDialog_override_virtual_CloseEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_CloseEvent(void* self, QCloseEvent* param1);
void QColorDialog_override_virtual_ShowEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_ShowEvent(void* self, QShowEvent* param1);
void QColorDialog_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_ResizeEvent(void* self, QResizeEvent* param1);
void QColorDialog_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1);
void QColorDialog_override_virtual_EventFilter(void* self, intptr_t slot);
bool QColorDialog_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2);
void QColorDialog_Delete(QColorDialog* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
