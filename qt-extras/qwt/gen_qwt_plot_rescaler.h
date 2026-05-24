#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_RESCALER_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_RESCALER_H

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
class QMetaMethod;
class QObject;
class QResizeEvent;
class QSize;
class QTimerEvent;
class QWidget;
class QwtInterval;
class QwtPlot;
class QwtPlotRescaler;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QObject QObject;
typedef struct QResizeEvent QResizeEvent;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
typedef struct QwtInterval QwtInterval;
typedef struct QwtPlot QwtPlot;
typedef struct QwtPlotRescaler QwtPlotRescaler;
#endif

QwtPlotRescaler* QwtPlotRescaler_new(QWidget* canvas);
QwtPlotRescaler* QwtPlotRescaler_new2(QWidget* canvas, int referenceAxis);
QwtPlotRescaler* QwtPlotRescaler_new3(QWidget* canvas, int referenceAxis, int param3);
void QwtPlotRescaler_virtbase(QwtPlotRescaler* src, QObject** outptr_QObject);
void QwtPlotRescaler_setEnabled(QwtPlotRescaler* self, bool enabled);
bool QwtPlotRescaler_isEnabled(const QwtPlotRescaler* self);
void QwtPlotRescaler_setRescalePolicy(QwtPlotRescaler* self, int rescalePolicy);
int QwtPlotRescaler_rescalePolicy(const QwtPlotRescaler* self);
void QwtPlotRescaler_setExpandingDirection(QwtPlotRescaler* self, int expandingDirection);
void QwtPlotRescaler_setExpandingDirection2(QwtPlotRescaler* self, int axis, int param2);
int QwtPlotRescaler_expandingDirection(const QwtPlotRescaler* self, int axis);
void QwtPlotRescaler_setReferenceAxis(QwtPlotRescaler* self, int axis);
int QwtPlotRescaler_referenceAxis(const QwtPlotRescaler* self);
void QwtPlotRescaler_setAspectRatio(QwtPlotRescaler* self, double ratio);
void QwtPlotRescaler_setAspectRatio2(QwtPlotRescaler* self, int axis, double ratio);
double QwtPlotRescaler_aspectRatio(const QwtPlotRescaler* self, int axis);
void QwtPlotRescaler_setIntervalHint(QwtPlotRescaler* self, int axis, QwtInterval* param2);
QwtInterval* QwtPlotRescaler_intervalHint(const QwtPlotRescaler* self, int axis);
QWidget* QwtPlotRescaler_canvas(QwtPlotRescaler* self);
QWidget* QwtPlotRescaler_canvas2(const QwtPlotRescaler* self);
QwtPlot* QwtPlotRescaler_plot(QwtPlotRescaler* self);
QwtPlot* QwtPlotRescaler_plot2(const QwtPlotRescaler* self);
bool QwtPlotRescaler_eventFilter(QwtPlotRescaler* self, QObject* param1, QEvent* param2);
void QwtPlotRescaler_rescale(const QwtPlotRescaler* self);
void QwtPlotRescaler_canvasResizeEvent(QwtPlotRescaler* self, QResizeEvent* param1);
void QwtPlotRescaler_rescale2(const QwtPlotRescaler* self, QSize* oldSize, QSize* newSize);
QwtInterval* QwtPlotRescaler_expandScale(const QwtPlotRescaler* self, int axis, QSize* oldSize, QSize* newSize);
QwtInterval* QwtPlotRescaler_syncScale(const QwtPlotRescaler* self, int axis, QwtInterval* reference, QSize* size);
void QwtPlotRescaler_updateScales(const QwtPlotRescaler* self, QwtInterval* intervals);

bool QwtPlotRescaler_override_virtual_eventFilter(void* self, intptr_t slot);
bool QwtPlotRescaler_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);
bool QwtPlotRescaler_override_virtual_canvasResizeEvent(void* self, intptr_t slot);
void QwtPlotRescaler_virtualbase_canvasResizeEvent(void* self, QResizeEvent* param1);
bool QwtPlotRescaler_override_virtual_rescale2(void* self, intptr_t slot);
void QwtPlotRescaler_virtualbase_rescale2(const void* self, QSize* oldSize, QSize* newSize);
bool QwtPlotRescaler_override_virtual_expandScale(void* self, intptr_t slot);
QwtInterval* QwtPlotRescaler_virtualbase_expandScale(const void* self, int axis, QSize* oldSize, QSize* newSize);
bool QwtPlotRescaler_override_virtual_syncScale(void* self, intptr_t slot);
QwtInterval* QwtPlotRescaler_virtualbase_syncScale(const void* self, int axis, QwtInterval* reference, QSize* size);
bool QwtPlotRescaler_override_virtual_updateScales(void* self, intptr_t slot);
void QwtPlotRescaler_virtualbase_updateScales(const void* self, QwtInterval* intervals);
bool QwtPlotRescaler_override_virtual_event(void* self, intptr_t slot);
bool QwtPlotRescaler_virtualbase_event(void* self, QEvent* event);
bool QwtPlotRescaler_override_virtual_timerEvent(void* self, intptr_t slot);
void QwtPlotRescaler_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QwtPlotRescaler_override_virtual_childEvent(void* self, intptr_t slot);
void QwtPlotRescaler_virtualbase_childEvent(void* self, QChildEvent* event);
bool QwtPlotRescaler_override_virtual_customEvent(void* self, intptr_t slot);
void QwtPlotRescaler_virtualbase_customEvent(void* self, QEvent* event);
bool QwtPlotRescaler_override_virtual_connectNotify(void* self, intptr_t slot);
void QwtPlotRescaler_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QwtPlotRescaler_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QwtPlotRescaler_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

int QwtPlotRescaler_protectedbase_orientation(bool* _dynamic_cast_ok, const void* self, int axis);
QwtInterval* QwtPlotRescaler_protectedbase_interval(bool* _dynamic_cast_ok, const void* self, int axis);
QwtInterval* QwtPlotRescaler_protectedbase_expandInterval(bool* _dynamic_cast_ok, const void* self, QwtInterval* param1, double width, int param3);
QObject* QwtPlotRescaler_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QwtPlotRescaler_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QwtPlotRescaler_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QwtPlotRescaler_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QwtPlotRescaler_delete(QwtPlotRescaler* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
