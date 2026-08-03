#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_DIRECTPAINTER_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_DIRECTPAINTER_H

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
class QRegion;
class QTimerEvent;
class QwtPlotDirectPainter;
class QwtPlotSeriesItem;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QObject QObject;
typedef struct QRegion QRegion;
typedef struct QTimerEvent QTimerEvent;
typedef struct QwtPlotDirectPainter QwtPlotDirectPainter;
typedef struct QwtPlotSeriesItem QwtPlotSeriesItem;
#endif

QwtPlotDirectPainter* QwtPlotDirectPainter_new();
QwtPlotDirectPainter* QwtPlotDirectPainter_new2(QObject* parent);
void QwtPlotDirectPainter_virtbase(QwtPlotDirectPainter* src, QObject** outptr_QObject);
void QwtPlotDirectPainter_setAttribute(QwtPlotDirectPainter* self, int param1, bool on);
bool QwtPlotDirectPainter_testAttribute(const QwtPlotDirectPainter* self, int param1);
void QwtPlotDirectPainter_setClipping(QwtPlotDirectPainter* self, bool clipping);
bool QwtPlotDirectPainter_hasClipping(const QwtPlotDirectPainter* self);
void QwtPlotDirectPainter_setClipRegion(QwtPlotDirectPainter* self, QRegion* clipRegion);
QRegion* QwtPlotDirectPainter_clipRegion(const QwtPlotDirectPainter* self);
void QwtPlotDirectPainter_drawSeries(QwtPlotDirectPainter* self, QwtPlotSeriesItem* param1, int from, int to);
void QwtPlotDirectPainter_reset(QwtPlotDirectPainter* self);
bool QwtPlotDirectPainter_eventFilter(QwtPlotDirectPainter* self, QObject* param1, QEvent* param2);

bool QwtPlotDirectPainter_override_virtual_eventFilter(void* self, intptr_t slot);
bool QwtPlotDirectPainter_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);
bool QwtPlotDirectPainter_override_virtual_event(void* self, intptr_t slot);
bool QwtPlotDirectPainter_virtualbase_event(void* self, QEvent* event);
bool QwtPlotDirectPainter_override_virtual_timerEvent(void* self, intptr_t slot);
void QwtPlotDirectPainter_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QwtPlotDirectPainter_override_virtual_childEvent(void* self, intptr_t slot);
void QwtPlotDirectPainter_virtualbase_childEvent(void* self, QChildEvent* event);
bool QwtPlotDirectPainter_override_virtual_customEvent(void* self, intptr_t slot);
void QwtPlotDirectPainter_virtualbase_customEvent(void* self, QEvent* event);
bool QwtPlotDirectPainter_override_virtual_connectNotify(void* self, intptr_t slot);
void QwtPlotDirectPainter_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QwtPlotDirectPainter_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QwtPlotDirectPainter_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QwtPlotDirectPainter_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QwtPlotDirectPainter_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QwtPlotDirectPainter_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QwtPlotDirectPainter_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QwtPlotDirectPainter_delete(QwtPlotDirectPainter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
