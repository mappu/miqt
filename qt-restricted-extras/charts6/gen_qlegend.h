#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QLEGEND_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QLEGEND_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractSeries;
class QBrush;
class QColor;
class QFont;
class QGraphicsItem;
class QGraphicsLayoutItem;
class QGraphicsObject;
class QGraphicsWidget;
class QHideEvent;
class QLegend;
class QLegendMarker;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPainter;
class QPen;
class QShowEvent;
class QStyleOptionGraphicsItem;
class QWidget;
#else
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsLayoutItem QGraphicsLayoutItem;
typedef struct QGraphicsObject QGraphicsObject;
typedef struct QGraphicsWidget QGraphicsWidget;
typedef struct QHideEvent QHideEvent;
typedef struct QLegend QLegend;
typedef struct QLegendMarker QLegendMarker;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QPen QPen;
typedef struct QShowEvent QShowEvent;
typedef struct QStyleOptionGraphicsItem QStyleOptionGraphicsItem;
typedef struct QWidget QWidget;
#endif

void QLegend_virtbase(QLegend* src, QGraphicsWidget** outptr_QGraphicsWidget);
QMetaObject* QLegend_metaObject(const QLegend* self);
void* QLegend_metacast(QLegend* self, const char* param1);
struct miqt_string QLegend_tr(const char* s);
void QLegend_paint(QLegend* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
void QLegend_setBrush(QLegend* self, QBrush* brush);
QBrush* QLegend_brush(const QLegend* self);
void QLegend_setColor(QLegend* self, QColor* color);
QColor* QLegend_color(QLegend* self);
void QLegend_setPen(QLegend* self, QPen* pen);
QPen* QLegend_pen(const QLegend* self);
void QLegend_setBorderColor(QLegend* self, QColor* color);
QColor* QLegend_borderColor(QLegend* self);
void QLegend_setFont(QLegend* self, QFont* font);
QFont* QLegend_font(const QLegend* self);
void QLegend_setLabelBrush(QLegend* self, QBrush* brush);
QBrush* QLegend_labelBrush(const QLegend* self);
void QLegend_setLabelColor(QLegend* self, QColor* color);
QColor* QLegend_labelColor(const QLegend* self);
void QLegend_setAlignment(QLegend* self, int alignment);
int QLegend_alignment(const QLegend* self);
void QLegend_detachFromChart(QLegend* self);
void QLegend_attachToChart(QLegend* self);
bool QLegend_isAttachedToChart(QLegend* self);
void QLegend_setBackgroundVisible(QLegend* self);
bool QLegend_isBackgroundVisible(const QLegend* self);
struct miqt_array /* of QLegendMarker* */  QLegend_markers(const QLegend* self);
bool QLegend_reverseMarkers(QLegend* self);
void QLegend_setReverseMarkers(QLegend* self);
bool QLegend_showToolTips(const QLegend* self);
void QLegend_setShowToolTips(QLegend* self, bool show);
bool QLegend_isInteractive(const QLegend* self);
void QLegend_setInteractive(QLegend* self, bool interactive);
int QLegend_markerShape(const QLegend* self);
void QLegend_setMarkerShape(QLegend* self, int shape);
void QLegend_hideEvent(QLegend* self, QHideEvent* event);
void QLegend_showEvent(QLegend* self, QShowEvent* event);
void QLegend_backgroundVisibleChanged(QLegend* self, bool visible);
void QLegend_connect_backgroundVisibleChanged(QLegend* self, intptr_t slot);
void QLegend_colorChanged(QLegend* self, QColor* color);
void QLegend_connect_colorChanged(QLegend* self, intptr_t slot);
void QLegend_borderColorChanged(QLegend* self, QColor* color);
void QLegend_connect_borderColorChanged(QLegend* self, intptr_t slot);
void QLegend_fontChanged(QLegend* self, QFont* font);
void QLegend_connect_fontChanged(QLegend* self, intptr_t slot);
void QLegend_labelColorChanged(QLegend* self, QColor* color);
void QLegend_connect_labelColorChanged(QLegend* self, intptr_t slot);
void QLegend_reverseMarkersChanged(QLegend* self, bool reverseMarkers);
void QLegend_connect_reverseMarkersChanged(QLegend* self, intptr_t slot);
void QLegend_showToolTipsChanged(QLegend* self, bool showToolTips);
void QLegend_connect_showToolTipsChanged(QLegend* self, intptr_t slot);
void QLegend_markerShapeChanged(QLegend* self, int shape);
void QLegend_connect_markerShapeChanged(QLegend* self, intptr_t slot);
void QLegend_attachedToChartChanged(QLegend* self, bool attachedToChart);
void QLegend_connect_attachedToChartChanged(QLegend* self, intptr_t slot);
void QLegend_interactiveChanged(QLegend* self, bool interactive);
void QLegend_connect_interactiveChanged(QLegend* self, intptr_t slot);
struct miqt_string QLegend_tr2(const char* s, const char* c);
struct miqt_string QLegend_tr3(const char* s, const char* c, int n);
void QLegend_setBackgroundVisible1(QLegend* self, bool visible);
struct miqt_array /* of QLegendMarker* */  QLegend_markers1(const QLegend* self, QAbstractSeries* series);
void QLegend_setReverseMarkers1(QLegend* self, bool reverseMarkers);
void QLegend_delete(QLegend* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
