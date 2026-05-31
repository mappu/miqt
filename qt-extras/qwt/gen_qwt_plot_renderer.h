#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_RENDERER_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_RENDERER_H

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
class QMetaObject;
class QObject;
class QPaintDevice;
class QPainter;
class QPrinter;
class QRectF;
class QSizeF;
class QSvgGenerator;
class QTimerEvent;
class QwtPlot;
class QwtPlotRenderer;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPainter QPainter;
typedef struct QPrinter QPrinter;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
typedef struct QSvgGenerator QSvgGenerator;
typedef struct QTimerEvent QTimerEvent;
typedef struct QwtPlot QwtPlot;
typedef struct QwtPlotRenderer QwtPlotRenderer;
#endif

QwtPlotRenderer* QwtPlotRenderer_new();
QwtPlotRenderer* QwtPlotRenderer_new2(QObject* param1);
void QwtPlotRenderer_virtbase(QwtPlotRenderer* src, QObject** outptr_QObject);
QMetaObject* QwtPlotRenderer_metaObject(const QwtPlotRenderer* self);
void* QwtPlotRenderer_metacast(QwtPlotRenderer* self, const char* param1);
struct miqt_string QwtPlotRenderer_tr(const char* s);
struct miqt_string QwtPlotRenderer_trUtf8(const char* s);
void QwtPlotRenderer_setDiscardFlag(QwtPlotRenderer* self, int flag);
bool QwtPlotRenderer_testDiscardFlag(const QwtPlotRenderer* self, int flag);
void QwtPlotRenderer_setDiscardFlags(QwtPlotRenderer* self, int flags);
int QwtPlotRenderer_discardFlags(const QwtPlotRenderer* self);
void QwtPlotRenderer_setLayoutFlag(QwtPlotRenderer* self, int flag);
bool QwtPlotRenderer_testLayoutFlag(const QwtPlotRenderer* self, int flag);
void QwtPlotRenderer_setLayoutFlags(QwtPlotRenderer* self, int flags);
int QwtPlotRenderer_layoutFlags(const QwtPlotRenderer* self);
void QwtPlotRenderer_renderDocument(QwtPlotRenderer* self, QwtPlot* param1, struct miqt_string fileName, QSizeF* sizeMM);
void QwtPlotRenderer_renderDocument2(QwtPlotRenderer* self, QwtPlot* param1, struct miqt_string fileName, struct miqt_string format, QSizeF* sizeMM);
void QwtPlotRenderer_renderTo(const QwtPlotRenderer* self, QwtPlot* param1, QSvgGenerator* param2);
void QwtPlotRenderer_renderTo2(const QwtPlotRenderer* self, QwtPlot* param1, QPrinter* param2);
void QwtPlotRenderer_renderTo3(const QwtPlotRenderer* self, QwtPlot* param1, QPaintDevice* param2);
void QwtPlotRenderer_render(const QwtPlotRenderer* self, QwtPlot* param1, QPainter* param2, QRectF* plotRect);
void QwtPlotRenderer_renderTitle(const QwtPlotRenderer* self, QwtPlot* param1, QPainter* param2, QRectF* titleRect);
void QwtPlotRenderer_renderFooter(const QwtPlotRenderer* self, QwtPlot* param1, QPainter* param2, QRectF* footerRect);
void QwtPlotRenderer_renderScale(const QwtPlotRenderer* self, QwtPlot* param1, QPainter* param2, int axisId, int startDist, int endDist, int baseDist, QRectF* scaleRect);
void QwtPlotRenderer_renderLegend(const QwtPlotRenderer* self, QwtPlot* param1, QPainter* param2, QRectF* legendRect);
bool QwtPlotRenderer_exportTo(QwtPlotRenderer* self, QwtPlot* param1, struct miqt_string documentName);
struct miqt_string QwtPlotRenderer_tr2(const char* s, const char* c);
struct miqt_string QwtPlotRenderer_tr3(const char* s, const char* c, int n);
struct miqt_string QwtPlotRenderer_trUtf82(const char* s, const char* c);
struct miqt_string QwtPlotRenderer_trUtf83(const char* s, const char* c, int n);
void QwtPlotRenderer_setDiscardFlag2(QwtPlotRenderer* self, int flag, bool on);
void QwtPlotRenderer_setLayoutFlag2(QwtPlotRenderer* self, int flag, bool on);
void QwtPlotRenderer_renderDocument3(QwtPlotRenderer* self, QwtPlot* param1, struct miqt_string fileName, QSizeF* sizeMM, int resolution);
void QwtPlotRenderer_renderDocument4(QwtPlotRenderer* self, QwtPlot* param1, struct miqt_string fileName, struct miqt_string format, QSizeF* sizeMM, int resolution);
bool QwtPlotRenderer_exportTo2(QwtPlotRenderer* self, QwtPlot* param1, struct miqt_string documentName, QSizeF* sizeMM);
bool QwtPlotRenderer_exportTo3(QwtPlotRenderer* self, QwtPlot* param1, struct miqt_string documentName, QSizeF* sizeMM, int resolution);

bool QwtPlotRenderer_override_virtual_render(void* self, intptr_t slot);
void QwtPlotRenderer_virtualbase_render(const void* self, QwtPlot* param1, QPainter* param2, QRectF* plotRect);
bool QwtPlotRenderer_override_virtual_renderTitle(void* self, intptr_t slot);
void QwtPlotRenderer_virtualbase_renderTitle(const void* self, QwtPlot* param1, QPainter* param2, QRectF* titleRect);
bool QwtPlotRenderer_override_virtual_renderFooter(void* self, intptr_t slot);
void QwtPlotRenderer_virtualbase_renderFooter(const void* self, QwtPlot* param1, QPainter* param2, QRectF* footerRect);
bool QwtPlotRenderer_override_virtual_renderScale(void* self, intptr_t slot);
void QwtPlotRenderer_virtualbase_renderScale(const void* self, QwtPlot* param1, QPainter* param2, int axisId, int startDist, int endDist, int baseDist, QRectF* scaleRect);
bool QwtPlotRenderer_override_virtual_renderLegend(void* self, intptr_t slot);
void QwtPlotRenderer_virtualbase_renderLegend(const void* self, QwtPlot* param1, QPainter* param2, QRectF* legendRect);
bool QwtPlotRenderer_override_virtual_event(void* self, intptr_t slot);
bool QwtPlotRenderer_virtualbase_event(void* self, QEvent* event);
bool QwtPlotRenderer_override_virtual_eventFilter(void* self, intptr_t slot);
bool QwtPlotRenderer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QwtPlotRenderer_override_virtual_timerEvent(void* self, intptr_t slot);
void QwtPlotRenderer_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QwtPlotRenderer_override_virtual_childEvent(void* self, intptr_t slot);
void QwtPlotRenderer_virtualbase_childEvent(void* self, QChildEvent* event);
bool QwtPlotRenderer_override_virtual_customEvent(void* self, intptr_t slot);
void QwtPlotRenderer_virtualbase_customEvent(void* self, QEvent* event);
bool QwtPlotRenderer_override_virtual_connectNotify(void* self, intptr_t slot);
void QwtPlotRenderer_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QwtPlotRenderer_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QwtPlotRenderer_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QwtPlotRenderer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QwtPlotRenderer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QwtPlotRenderer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QwtPlotRenderer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QwtPlotRenderer_delete(QwtPlotRenderer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
