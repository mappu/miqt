#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_MAGNIFIER_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_MAGNIFIER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QKeyEvent;
class QMetaMethod;
class QMetaObject;
class QMouseEvent;
class QObject;
class QTimerEvent;
class QWheelEvent;
class QWidget;
class QwtMagnifier;
class QwtPlot;
class QwtPlotMagnifier;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QwtMagnifier QwtMagnifier;
typedef struct QwtPlot QwtPlot;
typedef struct QwtPlotMagnifier QwtPlotMagnifier;
#endif

QwtPlotMagnifier* QwtPlotMagnifier_new(QWidget* param1);
void QwtPlotMagnifier_virtbase(QwtPlotMagnifier* src, QwtMagnifier** outptr_QwtMagnifier);
QMetaObject* QwtPlotMagnifier_metaObject(const QwtPlotMagnifier* self);
void* QwtPlotMagnifier_metacast(QwtPlotMagnifier* self, const char* param1);
struct miqt_string QwtPlotMagnifier_tr(const char* s);
struct miqt_string QwtPlotMagnifier_trUtf8(const char* s);
void QwtPlotMagnifier_setAxisEnabled(QwtPlotMagnifier* self, int axis, bool on);
bool QwtPlotMagnifier_isAxisEnabled(const QwtPlotMagnifier* self, int axis);
QWidget* QwtPlotMagnifier_canvas(QwtPlotMagnifier* self);
QWidget* QwtPlotMagnifier_canvas2(const QwtPlotMagnifier* self);
QwtPlot* QwtPlotMagnifier_plot(QwtPlotMagnifier* self);
QwtPlot* QwtPlotMagnifier_plot2(const QwtPlotMagnifier* self);
void QwtPlotMagnifier_rescale(QwtPlotMagnifier* self, double factor);
struct miqt_string QwtPlotMagnifier_tr2(const char* s, const char* c);
struct miqt_string QwtPlotMagnifier_tr3(const char* s, const char* c, int n);
struct miqt_string QwtPlotMagnifier_trUtf82(const char* s, const char* c);
struct miqt_string QwtPlotMagnifier_trUtf83(const char* s, const char* c, int n);

bool QwtPlotMagnifier_override_virtual_rescale(void* self, intptr_t slot);
void QwtPlotMagnifier_virtualbase_rescale(void* self, double factor);
bool QwtPlotMagnifier_override_virtual_eventFilter(void* self, intptr_t slot);
bool QwtPlotMagnifier_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);
bool QwtPlotMagnifier_override_virtual_widgetMousePressEvent(void* self, intptr_t slot);
void QwtPlotMagnifier_virtualbase_widgetMousePressEvent(void* self, QMouseEvent* param1);
bool QwtPlotMagnifier_override_virtual_widgetMouseReleaseEvent(void* self, intptr_t slot);
void QwtPlotMagnifier_virtualbase_widgetMouseReleaseEvent(void* self, QMouseEvent* param1);
bool QwtPlotMagnifier_override_virtual_widgetMouseMoveEvent(void* self, intptr_t slot);
void QwtPlotMagnifier_virtualbase_widgetMouseMoveEvent(void* self, QMouseEvent* param1);
bool QwtPlotMagnifier_override_virtual_widgetWheelEvent(void* self, intptr_t slot);
void QwtPlotMagnifier_virtualbase_widgetWheelEvent(void* self, QWheelEvent* param1);
bool QwtPlotMagnifier_override_virtual_widgetKeyPressEvent(void* self, intptr_t slot);
void QwtPlotMagnifier_virtualbase_widgetKeyPressEvent(void* self, QKeyEvent* param1);
bool QwtPlotMagnifier_override_virtual_widgetKeyReleaseEvent(void* self, intptr_t slot);
void QwtPlotMagnifier_virtualbase_widgetKeyReleaseEvent(void* self, QKeyEvent* param1);
bool QwtPlotMagnifier_override_virtual_event(void* self, intptr_t slot);
bool QwtPlotMagnifier_virtualbase_event(void* self, QEvent* event);
bool QwtPlotMagnifier_override_virtual_timerEvent(void* self, intptr_t slot);
void QwtPlotMagnifier_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QwtPlotMagnifier_override_virtual_childEvent(void* self, intptr_t slot);
void QwtPlotMagnifier_virtualbase_childEvent(void* self, QChildEvent* event);
bool QwtPlotMagnifier_override_virtual_customEvent(void* self, intptr_t slot);
void QwtPlotMagnifier_virtualbase_customEvent(void* self, QEvent* event);
bool QwtPlotMagnifier_override_virtual_connectNotify(void* self, intptr_t slot);
void QwtPlotMagnifier_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QwtPlotMagnifier_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QwtPlotMagnifier_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QwtPlotMagnifier_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QwtPlotMagnifier_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QwtPlotMagnifier_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QwtPlotMagnifier_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QwtPlotMagnifier_delete(QwtPlotMagnifier* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
