#pragma once
#ifndef MIQT_QT_GEN_QRADIOBUTTON_H
#define MIQT_QT_GEN_QRADIOBUTTON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractButton;
class QEvent;
class QFocusEvent;
class QKeyEvent;
class QMetaObject;
class QMouseEvent;
class QObject;
class QPaintDevice;
class QPaintEvent;
class QPoint;
class QRadioButton;
class QSize;
class QTimerEvent;
class QWidget;
#else
typedef struct QAbstractButton QAbstractButton;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPoint QPoint;
typedef struct QRadioButton QRadioButton;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QRadioButton* QRadioButton_new(QWidget* parent);
QRadioButton* QRadioButton_new2();
QRadioButton* QRadioButton_new3(struct miqt_string text);
QRadioButton* QRadioButton_new4(struct miqt_string text, QWidget* parent);
void QRadioButton_virtbase(QRadioButton* src, QAbstractButton** outptr_QAbstractButton);
QMetaObject* QRadioButton_MetaObject(const QRadioButton* self);
void* QRadioButton_Metacast(QRadioButton* self, const char* param1);
struct miqt_string QRadioButton_Tr(const char* s);
struct miqt_string QRadioButton_TrUtf8(const char* s);
QSize* QRadioButton_SizeHint(const QRadioButton* self);
QSize* QRadioButton_MinimumSizeHint(const QRadioButton* self);
bool QRadioButton_Event(QRadioButton* self, QEvent* e);
bool QRadioButton_HitButton(const QRadioButton* self, QPoint* param1);
void QRadioButton_PaintEvent(QRadioButton* self, QPaintEvent* param1);
void QRadioButton_MouseMoveEvent(QRadioButton* self, QMouseEvent* param1);
struct miqt_string QRadioButton_Tr2(const char* s, const char* c);
struct miqt_string QRadioButton_Tr3(const char* s, const char* c, int n);
struct miqt_string QRadioButton_TrUtf82(const char* s, const char* c);
struct miqt_string QRadioButton_TrUtf83(const char* s, const char* c, int n);
void QRadioButton_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QRadioButton_virtualbase_SizeHint(const void* self);
void QRadioButton_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QRadioButton_virtualbase_MinimumSizeHint(const void* self);
void QRadioButton_override_virtual_Event(void* self, intptr_t slot);
bool QRadioButton_virtualbase_Event(void* self, QEvent* e);
void QRadioButton_override_virtual_HitButton(void* self, intptr_t slot);
bool QRadioButton_virtualbase_HitButton(const void* self, QPoint* param1);
void QRadioButton_override_virtual_PaintEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
void QRadioButton_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1);
void QRadioButton_override_virtual_CheckStateSet(void* self, intptr_t slot);
void QRadioButton_virtualbase_CheckStateSet(void* self);
void QRadioButton_override_virtual_NextCheckState(void* self, intptr_t slot);
void QRadioButton_virtualbase_NextCheckState(void* self);
void QRadioButton_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_KeyPressEvent(void* self, QKeyEvent* e);
void QRadioButton_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* e);
void QRadioButton_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_MousePressEvent(void* self, QMouseEvent* e);
void QRadioButton_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e);
void QRadioButton_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_FocusInEvent(void* self, QFocusEvent* e);
void QRadioButton_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_FocusOutEvent(void* self, QFocusEvent* e);
void QRadioButton_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_ChangeEvent(void* self, QEvent* e);
void QRadioButton_override_virtual_TimerEvent(void* self, intptr_t slot);
void QRadioButton_virtualbase_TimerEvent(void* self, QTimerEvent* e);
void QRadioButton_Delete(QRadioButton* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
