#pragma once
#ifndef MIQT_QT_GEN_QDIAL_H
#define MIQT_QT_GEN_QDIAL_H

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
class QDial;
class QEvent;
class QKeyEvent;
class QMetaObject;
class QMouseEvent;
class QObject;
class QPaintDevice;
class QPaintEvent;
class QResizeEvent;
class QSize;
class QTimerEvent;
class QWheelEvent;
class QWidget;
#else
typedef struct QAbstractSlider QAbstractSlider;
typedef struct QDial QDial;
typedef struct QEvent QEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEvent QPaintEvent;
typedef struct QResizeEvent QResizeEvent;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QDial* QDial_new(QWidget* parent);
QDial* QDial_new2();
void QDial_virtbase(QDial* src, QAbstractSlider** outptr_QAbstractSlider);
QMetaObject* QDial_MetaObject(const QDial* self);
void* QDial_Metacast(QDial* self, const char* param1);
struct miqt_string QDial_Tr(const char* s);
struct miqt_string QDial_TrUtf8(const char* s);
bool QDial_Wrapping(const QDial* self);
int QDial_NotchSize(const QDial* self);
void QDial_SetNotchTarget(QDial* self, double target);
double QDial_NotchTarget(const QDial* self);
bool QDial_NotchesVisible(const QDial* self);
QSize* QDial_SizeHint(const QDial* self);
QSize* QDial_MinimumSizeHint(const QDial* self);
void QDial_SetNotchesVisible(QDial* self, bool visible);
void QDial_SetWrapping(QDial* self, bool on);
bool QDial_Event(QDial* self, QEvent* e);
void QDial_ResizeEvent(QDial* self, QResizeEvent* re);
void QDial_PaintEvent(QDial* self, QPaintEvent* pe);
void QDial_MousePressEvent(QDial* self, QMouseEvent* me);
void QDial_MouseReleaseEvent(QDial* self, QMouseEvent* me);
void QDial_MouseMoveEvent(QDial* self, QMouseEvent* me);
void QDial_SliderChange(QDial* self, int change);
struct miqt_string QDial_Tr2(const char* s, const char* c);
struct miqt_string QDial_Tr3(const char* s, const char* c, int n);
struct miqt_string QDial_TrUtf82(const char* s, const char* c);
struct miqt_string QDial_TrUtf83(const char* s, const char* c, int n);
bool QDial_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QDial_virtualbase_SizeHint(const void* self);
bool QDial_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QDial_virtualbase_MinimumSizeHint(const void* self);
bool QDial_override_virtual_Event(void* self, intptr_t slot);
bool QDial_virtualbase_Event(void* self, QEvent* e);
bool QDial_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QDial_virtualbase_ResizeEvent(void* self, QResizeEvent* re);
bool QDial_override_virtual_PaintEvent(void* self, intptr_t slot);
void QDial_virtualbase_PaintEvent(void* self, QPaintEvent* pe);
bool QDial_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QDial_virtualbase_MousePressEvent(void* self, QMouseEvent* me);
bool QDial_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QDial_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* me);
bool QDial_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QDial_virtualbase_MouseMoveEvent(void* self, QMouseEvent* me);
bool QDial_override_virtual_SliderChange(void* self, intptr_t slot);
void QDial_virtualbase_SliderChange(void* self, int change);
bool QDial_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QDial_virtualbase_KeyPressEvent(void* self, QKeyEvent* ev);
bool QDial_override_virtual_TimerEvent(void* self, intptr_t slot);
void QDial_virtualbase_TimerEvent(void* self, QTimerEvent* param1);
bool QDial_override_virtual_WheelEvent(void* self, intptr_t slot);
void QDial_virtualbase_WheelEvent(void* self, QWheelEvent* e);
bool QDial_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QDial_virtualbase_ChangeEvent(void* self, QEvent* e);
void QDial_Delete(QDial* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
