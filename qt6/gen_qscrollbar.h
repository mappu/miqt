#pragma once
#ifndef MIQT_QT6_GEN_QSCROLLBAR_H
#define MIQT_QT6_GEN_QSCROLLBAR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractSlider;
class QContextMenuEvent;
class QEvent;
class QHideEvent;
class QKeyEvent;
class QMetaObject;
class QMouseEvent;
class QObject;
class QPaintDevice;
class QPaintEvent;
class QScrollBar;
class QSize;
class QStyleOptionSlider;
class QTimerEvent;
class QWheelEvent;
class QWidget;
#else
typedef struct QAbstractSlider QAbstractSlider;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QEvent QEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEvent QPaintEvent;
typedef struct QScrollBar QScrollBar;
typedef struct QSize QSize;
typedef struct QStyleOptionSlider QStyleOptionSlider;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QScrollBar* QScrollBar_new(QWidget* parent);
QScrollBar* QScrollBar_new2();
QScrollBar* QScrollBar_new3(int param1);
QScrollBar* QScrollBar_new4(int param1, QWidget* parent);
void QScrollBar_virtbase(QScrollBar* src, QAbstractSlider** outptr_QAbstractSlider);
QMetaObject* QScrollBar_MetaObject(const QScrollBar* self);
void* QScrollBar_Metacast(QScrollBar* self, const char* param1);
struct miqt_string QScrollBar_Tr(const char* s);
QSize* QScrollBar_SizeHint(const QScrollBar* self);
bool QScrollBar_Event(QScrollBar* self, QEvent* event);
void QScrollBar_WheelEvent(QScrollBar* self, QWheelEvent* param1);
void QScrollBar_PaintEvent(QScrollBar* self, QPaintEvent* param1);
void QScrollBar_MousePressEvent(QScrollBar* self, QMouseEvent* param1);
void QScrollBar_MouseReleaseEvent(QScrollBar* self, QMouseEvent* param1);
void QScrollBar_MouseMoveEvent(QScrollBar* self, QMouseEvent* param1);
void QScrollBar_HideEvent(QScrollBar* self, QHideEvent* param1);
void QScrollBar_SliderChange(QScrollBar* self, int change);
void QScrollBar_ContextMenuEvent(QScrollBar* self, QContextMenuEvent* param1);
void QScrollBar_InitStyleOption(const QScrollBar* self, QStyleOptionSlider* option);
struct miqt_string QScrollBar_Tr2(const char* s, const char* c);
struct miqt_string QScrollBar_Tr3(const char* s, const char* c, int n);
void QScrollBar_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QScrollBar_virtualbase_SizeHint(const void* self);
void QScrollBar_override_virtual_Event(void* self, intptr_t slot);
bool QScrollBar_virtualbase_Event(void* self, QEvent* event);
void QScrollBar_override_virtual_WheelEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_WheelEvent(void* self, QWheelEvent* param1);
void QScrollBar_override_virtual_PaintEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
void QScrollBar_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_MousePressEvent(void* self, QMouseEvent* param1);
void QScrollBar_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* param1);
void QScrollBar_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1);
void QScrollBar_override_virtual_HideEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_HideEvent(void* self, QHideEvent* param1);
void QScrollBar_override_virtual_SliderChange(void* self, intptr_t slot);
void QScrollBar_virtualbase_SliderChange(void* self, int change);
void QScrollBar_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1);
void QScrollBar_override_virtual_InitStyleOption(void* self, intptr_t slot);
void QScrollBar_virtualbase_InitStyleOption(const void* self, QStyleOptionSlider* option);
void QScrollBar_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_KeyPressEvent(void* self, QKeyEvent* ev);
void QScrollBar_override_virtual_TimerEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_TimerEvent(void* self, QTimerEvent* param1);
void QScrollBar_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QScrollBar_virtualbase_ChangeEvent(void* self, QEvent* e);
void QScrollBar_Delete(QScrollBar* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
