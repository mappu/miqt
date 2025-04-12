#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QABSTRACTAXIS_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QABSTRACTAXIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractAxis;
class QBrush;
class QColor;
class QFont;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPen;
class QVariant;
#else
typedef struct QAbstractAxis QAbstractAxis;
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPen QPen;
typedef struct QVariant QVariant;
#endif

void QAbstractAxis_virtbase(QAbstractAxis* src, QObject** outptr_QObject);
QMetaObject* QAbstractAxis_metaObject(const QAbstractAxis* self);
void* QAbstractAxis_metacast(QAbstractAxis* self, const char* param1);
struct miqt_string QAbstractAxis_tr(const char* s);
int QAbstractAxis_type(const QAbstractAxis* self);
bool QAbstractAxis_isVisible(const QAbstractAxis* self);
void QAbstractAxis_setVisible(QAbstractAxis* self);
void QAbstractAxis_show(QAbstractAxis* self);
void QAbstractAxis_hide(QAbstractAxis* self);
bool QAbstractAxis_isLineVisible(const QAbstractAxis* self);
void QAbstractAxis_setLineVisible(QAbstractAxis* self);
void QAbstractAxis_setLinePen(QAbstractAxis* self, QPen* pen);
QPen* QAbstractAxis_linePen(const QAbstractAxis* self);
void QAbstractAxis_setLinePenColor(QAbstractAxis* self, QColor* color);
QColor* QAbstractAxis_linePenColor(const QAbstractAxis* self);
bool QAbstractAxis_isGridLineVisible(const QAbstractAxis* self);
void QAbstractAxis_setGridLineVisible(QAbstractAxis* self);
void QAbstractAxis_setGridLinePen(QAbstractAxis* self, QPen* pen);
QPen* QAbstractAxis_gridLinePen(const QAbstractAxis* self);
bool QAbstractAxis_isMinorGridLineVisible(const QAbstractAxis* self);
void QAbstractAxis_setMinorGridLineVisible(QAbstractAxis* self);
void QAbstractAxis_setMinorGridLinePen(QAbstractAxis* self, QPen* pen);
QPen* QAbstractAxis_minorGridLinePen(const QAbstractAxis* self);
void QAbstractAxis_setGridLineColor(QAbstractAxis* self, QColor* color);
QColor* QAbstractAxis_gridLineColor(QAbstractAxis* self);
void QAbstractAxis_setMinorGridLineColor(QAbstractAxis* self, QColor* color);
QColor* QAbstractAxis_minorGridLineColor(QAbstractAxis* self);
bool QAbstractAxis_labelsVisible(const QAbstractAxis* self);
void QAbstractAxis_setLabelsVisible(QAbstractAxis* self);
void QAbstractAxis_setLabelsBrush(QAbstractAxis* self, QBrush* brush);
QBrush* QAbstractAxis_labelsBrush(const QAbstractAxis* self);
void QAbstractAxis_setLabelsFont(QAbstractAxis* self, QFont* font);
QFont* QAbstractAxis_labelsFont(const QAbstractAxis* self);
void QAbstractAxis_setLabelsAngle(QAbstractAxis* self, int angle);
int QAbstractAxis_labelsAngle(const QAbstractAxis* self);
void QAbstractAxis_setLabelsColor(QAbstractAxis* self, QColor* color);
QColor* QAbstractAxis_labelsColor(const QAbstractAxis* self);
bool QAbstractAxis_isTitleVisible(const QAbstractAxis* self);
void QAbstractAxis_setTitleVisible(QAbstractAxis* self);
void QAbstractAxis_setTitleBrush(QAbstractAxis* self, QBrush* brush);
QBrush* QAbstractAxis_titleBrush(const QAbstractAxis* self);
void QAbstractAxis_setTitleFont(QAbstractAxis* self, QFont* font);
QFont* QAbstractAxis_titleFont(const QAbstractAxis* self);
void QAbstractAxis_setTitleText(QAbstractAxis* self, struct miqt_string title);
struct miqt_string QAbstractAxis_titleText(const QAbstractAxis* self);
bool QAbstractAxis_shadesVisible(const QAbstractAxis* self);
void QAbstractAxis_setShadesVisible(QAbstractAxis* self);
void QAbstractAxis_setShadesPen(QAbstractAxis* self, QPen* pen);
QPen* QAbstractAxis_shadesPen(const QAbstractAxis* self);
void QAbstractAxis_setShadesBrush(QAbstractAxis* self, QBrush* brush);
QBrush* QAbstractAxis_shadesBrush(const QAbstractAxis* self);
void QAbstractAxis_setShadesColor(QAbstractAxis* self, QColor* color);
QColor* QAbstractAxis_shadesColor(const QAbstractAxis* self);
void QAbstractAxis_setShadesBorderColor(QAbstractAxis* self, QColor* color);
QColor* QAbstractAxis_shadesBorderColor(const QAbstractAxis* self);
int QAbstractAxis_orientation(const QAbstractAxis* self);
int QAbstractAxis_alignment(const QAbstractAxis* self);
void QAbstractAxis_setMin(QAbstractAxis* self, QVariant* min);
void QAbstractAxis_setMax(QAbstractAxis* self, QVariant* max);
void QAbstractAxis_setRange(QAbstractAxis* self, QVariant* min, QVariant* max);
void QAbstractAxis_setReverse(QAbstractAxis* self);
bool QAbstractAxis_isReverse(const QAbstractAxis* self);
void QAbstractAxis_setLabelsEditable(QAbstractAxis* self);
bool QAbstractAxis_labelsEditable(const QAbstractAxis* self);
bool QAbstractAxis_labelsTruncated(const QAbstractAxis* self);
void QAbstractAxis_setTruncateLabels(QAbstractAxis* self);
bool QAbstractAxis_truncateLabels(const QAbstractAxis* self);
void QAbstractAxis_visibleChanged(QAbstractAxis* self, bool visible);
void QAbstractAxis_connect_visibleChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_linePenChanged(QAbstractAxis* self, QPen* pen);
void QAbstractAxis_connect_linePenChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_lineVisibleChanged(QAbstractAxis* self, bool visible);
void QAbstractAxis_connect_lineVisibleChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_labelsVisibleChanged(QAbstractAxis* self, bool visible);
void QAbstractAxis_connect_labelsVisibleChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_labelsBrushChanged(QAbstractAxis* self, QBrush* brush);
void QAbstractAxis_connect_labelsBrushChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_labelsFontChanged(QAbstractAxis* self, QFont* pen);
void QAbstractAxis_connect_labelsFontChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_labelsAngleChanged(QAbstractAxis* self, int angle);
void QAbstractAxis_connect_labelsAngleChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_gridLinePenChanged(QAbstractAxis* self, QPen* pen);
void QAbstractAxis_connect_gridLinePenChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_gridVisibleChanged(QAbstractAxis* self, bool visible);
void QAbstractAxis_connect_gridVisibleChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_minorGridVisibleChanged(QAbstractAxis* self, bool visible);
void QAbstractAxis_connect_minorGridVisibleChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_minorGridLinePenChanged(QAbstractAxis* self, QPen* pen);
void QAbstractAxis_connect_minorGridLinePenChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_gridLineColorChanged(QAbstractAxis* self, QColor* color);
void QAbstractAxis_connect_gridLineColorChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_minorGridLineColorChanged(QAbstractAxis* self, QColor* color);
void QAbstractAxis_connect_minorGridLineColorChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_colorChanged(QAbstractAxis* self, QColor* color);
void QAbstractAxis_connect_colorChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_labelsColorChanged(QAbstractAxis* self, QColor* color);
void QAbstractAxis_connect_labelsColorChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_titleTextChanged(QAbstractAxis* self, struct miqt_string title);
void QAbstractAxis_connect_titleTextChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_titleBrushChanged(QAbstractAxis* self, QBrush* brush);
void QAbstractAxis_connect_titleBrushChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_titleVisibleChanged(QAbstractAxis* self, bool visible);
void QAbstractAxis_connect_titleVisibleChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_titleFontChanged(QAbstractAxis* self, QFont* font);
void QAbstractAxis_connect_titleFontChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_shadesVisibleChanged(QAbstractAxis* self, bool visible);
void QAbstractAxis_connect_shadesVisibleChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_shadesColorChanged(QAbstractAxis* self, QColor* color);
void QAbstractAxis_connect_shadesColorChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_shadesBorderColorChanged(QAbstractAxis* self, QColor* color);
void QAbstractAxis_connect_shadesBorderColorChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_shadesPenChanged(QAbstractAxis* self, QPen* pen);
void QAbstractAxis_connect_shadesPenChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_shadesBrushChanged(QAbstractAxis* self, QBrush* brush);
void QAbstractAxis_connect_shadesBrushChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_reverseChanged(QAbstractAxis* self, bool reverse);
void QAbstractAxis_connect_reverseChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_labelsEditableChanged(QAbstractAxis* self, bool editable);
void QAbstractAxis_connect_labelsEditableChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_labelsTruncatedChanged(QAbstractAxis* self, bool labelsTruncated);
void QAbstractAxis_connect_labelsTruncatedChanged(QAbstractAxis* self, intptr_t slot);
void QAbstractAxis_truncateLabelsChanged(QAbstractAxis* self, bool truncateLabels);
void QAbstractAxis_connect_truncateLabelsChanged(QAbstractAxis* self, intptr_t slot);
struct miqt_string QAbstractAxis_tr2(const char* s, const char* c);
struct miqt_string QAbstractAxis_tr3(const char* s, const char* c, int n);
void QAbstractAxis_setVisibleWithVisible(QAbstractAxis* self, bool visible);
void QAbstractAxis_setLineVisibleWithVisible(QAbstractAxis* self, bool visible);
void QAbstractAxis_setGridLineVisibleWithVisible(QAbstractAxis* self, bool visible);
void QAbstractAxis_setMinorGridLineVisibleWithVisible(QAbstractAxis* self, bool visible);
void QAbstractAxis_setLabelsVisibleWithVisible(QAbstractAxis* self, bool visible);
void QAbstractAxis_setTitleVisibleWithVisible(QAbstractAxis* self, bool visible);
void QAbstractAxis_setShadesVisibleWithVisible(QAbstractAxis* self, bool visible);
void QAbstractAxis_setReverseWithReverse(QAbstractAxis* self, bool reverse);
void QAbstractAxis_setLabelsEditableWithEditable(QAbstractAxis* self, bool editable);
void QAbstractAxis_setTruncateLabelsWithTruncateLabels(QAbstractAxis* self, bool truncateLabels);
void QAbstractAxis_delete(QAbstractAxis* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
