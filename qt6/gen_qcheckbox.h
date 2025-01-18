#pragma once
#ifndef MIQT_QT6_GEN_QCHECKBOX_H
#define MIQT_QT6_GEN_QCHECKBOX_H

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
class QCheckBox;
class QEvent;
class QFocusEvent;
class QKeyEvent;
class QMetaObject;
class QMouseEvent;
class QObject;
class QPaintDevice;
class QPaintEvent;
class QPoint;
class QSize;
class QStyleOptionButton;
class QTimerEvent;
class QWidget;
#else
typedef struct QAbstractButton QAbstractButton;
typedef struct QCheckBox QCheckBox;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPoint QPoint;
typedef struct QSize QSize;
typedef struct QStyleOptionButton QStyleOptionButton;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QCheckBox* QCheckBox_new(QWidget* parent);
QCheckBox* QCheckBox_new2();
QCheckBox* QCheckBox_new3(struct miqt_string text);
QCheckBox* QCheckBox_new4(struct miqt_string text, QWidget* parent);
void QCheckBox_virtbase(QCheckBox* src, QAbstractButton** outptr_QAbstractButton);
QMetaObject* QCheckBox_MetaObject(const QCheckBox* self);
void* QCheckBox_Metacast(QCheckBox* self, const char* param1);
struct miqt_string QCheckBox_Tr(const char* s);
QSize* QCheckBox_SizeHint(const QCheckBox* self);
QSize* QCheckBox_MinimumSizeHint(const QCheckBox* self);
void QCheckBox_SetTristate(QCheckBox* self);
bool QCheckBox_IsTristate(const QCheckBox* self);
int QCheckBox_CheckState(const QCheckBox* self);
void QCheckBox_SetCheckState(QCheckBox* self, int state);
void QCheckBox_StateChanged(QCheckBox* self, int param1);
void QCheckBox_connect_StateChanged(QCheckBox* self, intptr_t slot);
bool QCheckBox_Event(QCheckBox* self, QEvent* e);
bool QCheckBox_HitButton(const QCheckBox* self, QPoint* pos);
void QCheckBox_CheckStateSet(QCheckBox* self);
void QCheckBox_NextCheckState(QCheckBox* self);
void QCheckBox_PaintEvent(QCheckBox* self, QPaintEvent* param1);
void QCheckBox_MouseMoveEvent(QCheckBox* self, QMouseEvent* param1);
void QCheckBox_InitStyleOption(const QCheckBox* self, QStyleOptionButton* option);
struct miqt_string QCheckBox_Tr2(const char* s, const char* c);
struct miqt_string QCheckBox_Tr3(const char* s, const char* c, int n);
void QCheckBox_SetTristate1(QCheckBox* self, bool y);
void QCheckBox_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QCheckBox_virtualbase_SizeHint(const void* self);
void QCheckBox_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QCheckBox_virtualbase_MinimumSizeHint(const void* self);
void QCheckBox_override_virtual_Event(void* self, intptr_t slot);
bool QCheckBox_virtualbase_Event(void* self, QEvent* e);
void QCheckBox_override_virtual_HitButton(void* self, intptr_t slot);
bool QCheckBox_virtualbase_HitButton(const void* self, QPoint* pos);
void QCheckBox_override_virtual_CheckStateSet(void* self, intptr_t slot);
void QCheckBox_virtualbase_CheckStateSet(void* self);
void QCheckBox_override_virtual_NextCheckState(void* self, intptr_t slot);
void QCheckBox_virtualbase_NextCheckState(void* self);
void QCheckBox_override_virtual_PaintEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
void QCheckBox_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1);
void QCheckBox_override_virtual_InitStyleOption(void* self, intptr_t slot);
void QCheckBox_virtualbase_InitStyleOption(const void* self, QStyleOptionButton* option);
void QCheckBox_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_KeyPressEvent(void* self, QKeyEvent* e);
void QCheckBox_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* e);
void QCheckBox_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_MousePressEvent(void* self, QMouseEvent* e);
void QCheckBox_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e);
void QCheckBox_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_FocusInEvent(void* self, QFocusEvent* e);
void QCheckBox_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_FocusOutEvent(void* self, QFocusEvent* e);
void QCheckBox_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_ChangeEvent(void* self, QEvent* e);
void QCheckBox_override_virtual_TimerEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_TimerEvent(void* self, QTimerEvent* e);
void QCheckBox_Delete(QCheckBox* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
