#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QLEGENDMARKER_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QLEGENDMARKER_H

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
class QFont;
class QLegendMarker;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPen;
#else
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QBrush QBrush;
typedef struct QFont QFont;
typedef struct QLegendMarker QLegendMarker;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPen QPen;
#endif

void QLegendMarker_virtbase(QLegendMarker* src, QObject** outptr_QObject);
QMetaObject* QLegendMarker_metaObject(const QLegendMarker* self);
void* QLegendMarker_metacast(QLegendMarker* self, const char* param1);
struct miqt_string QLegendMarker_tr(const char* s);
int QLegendMarker_type(QLegendMarker* self);
struct miqt_string QLegendMarker_label(const QLegendMarker* self);
void QLegendMarker_setLabel(QLegendMarker* self, struct miqt_string label);
QBrush* QLegendMarker_labelBrush(const QLegendMarker* self);
void QLegendMarker_setLabelBrush(QLegendMarker* self, QBrush* brush);
QFont* QLegendMarker_font(const QLegendMarker* self);
void QLegendMarker_setFont(QLegendMarker* self, QFont* font);
QPen* QLegendMarker_pen(const QLegendMarker* self);
void QLegendMarker_setPen(QLegendMarker* self, QPen* pen);
QBrush* QLegendMarker_brush(const QLegendMarker* self);
void QLegendMarker_setBrush(QLegendMarker* self, QBrush* brush);
bool QLegendMarker_isVisible(const QLegendMarker* self);
void QLegendMarker_setVisible(QLegendMarker* self, bool visible);
int QLegendMarker_shape(const QLegendMarker* self);
void QLegendMarker_setShape(QLegendMarker* self, int shape);
QAbstractSeries* QLegendMarker_series(QLegendMarker* self);
void QLegendMarker_clicked(QLegendMarker* self);
void QLegendMarker_connect_clicked(QLegendMarker* self, intptr_t slot);
void QLegendMarker_hovered(QLegendMarker* self, bool status);
void QLegendMarker_connect_hovered(QLegendMarker* self, intptr_t slot);
void QLegendMarker_labelChanged(QLegendMarker* self);
void QLegendMarker_connect_labelChanged(QLegendMarker* self, intptr_t slot);
void QLegendMarker_labelBrushChanged(QLegendMarker* self);
void QLegendMarker_connect_labelBrushChanged(QLegendMarker* self, intptr_t slot);
void QLegendMarker_fontChanged(QLegendMarker* self);
void QLegendMarker_connect_fontChanged(QLegendMarker* self, intptr_t slot);
void QLegendMarker_penChanged(QLegendMarker* self);
void QLegendMarker_connect_penChanged(QLegendMarker* self, intptr_t slot);
void QLegendMarker_brushChanged(QLegendMarker* self);
void QLegendMarker_connect_brushChanged(QLegendMarker* self, intptr_t slot);
void QLegendMarker_visibleChanged(QLegendMarker* self);
void QLegendMarker_connect_visibleChanged(QLegendMarker* self, intptr_t slot);
void QLegendMarker_shapeChanged(QLegendMarker* self);
void QLegendMarker_connect_shapeChanged(QLegendMarker* self, intptr_t slot);
struct miqt_string QLegendMarker_tr2(const char* s, const char* c);
struct miqt_string QLegendMarker_tr3(const char* s, const char* c, int n);

void QLegendMarker_delete(QLegendMarker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
