#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QXYSERIES_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QXYSERIES_H

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
class QImage;
class QLinearGradient;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPen;
class QPointF;
class QVariant;
class QXYSeries;
#else
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QImage QImage;
typedef struct QLinearGradient QLinearGradient;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPen QPen;
typedef struct QPointF QPointF;
typedef struct QVariant QVariant;
typedef struct QXYSeries QXYSeries;
#endif

void QXYSeries_virtbase(QXYSeries* src, QAbstractSeries** outptr_QAbstractSeries);
QMetaObject* QXYSeries_metaObject(const QXYSeries* self);
void* QXYSeries_metacast(QXYSeries* self, const char* param1);
struct miqt_string QXYSeries_tr(const char* s);
void QXYSeries_append(QXYSeries* self, double x, double y);
void QXYSeries_appendWithPoint(QXYSeries* self, QPointF* point);
void QXYSeries_appendWithPoints(QXYSeries* self, struct miqt_array /* of QPointF* */  points);
void QXYSeries_replace(QXYSeries* self, double oldX, double oldY, double newX, double newY);
void QXYSeries_replace2(QXYSeries* self, QPointF* oldPoint, QPointF* newPoint);
void QXYSeries_replace3(QXYSeries* self, int index, double newX, double newY);
void QXYSeries_replace4(QXYSeries* self, int index, QPointF* newPoint);
void QXYSeries_remove(QXYSeries* self, double x, double y);
void QXYSeries_removeWithPoint(QXYSeries* self, QPointF* point);
void QXYSeries_removeWithIndex(QXYSeries* self, int index);
void QXYSeries_removePoints(QXYSeries* self, int index, int count);
void QXYSeries_insert(QXYSeries* self, int index, QPointF* point);
void QXYSeries_clear(QXYSeries* self);
int QXYSeries_count(const QXYSeries* self);
struct miqt_array /* of QPointF* */  QXYSeries_points(const QXYSeries* self);
struct miqt_array /* of QPointF* */  QXYSeries_pointsVector(const QXYSeries* self);
QPointF* QXYSeries_at(const QXYSeries* self, int index);
QXYSeries* QXYSeries_operatorShiftLeft(QXYSeries* self, QPointF* point);
QXYSeries* QXYSeries_operatorShiftLeftWithPoints(QXYSeries* self, struct miqt_array /* of QPointF* */  points);
void QXYSeries_setPen(QXYSeries* self, QPen* pen);
QPen* QXYSeries_pen(const QXYSeries* self);
void QXYSeries_setBrush(QXYSeries* self, QBrush* brush);
QBrush* QXYSeries_brush(const QXYSeries* self);
void QXYSeries_setColor(QXYSeries* self, QColor* color);
QColor* QXYSeries_color(const QXYSeries* self);
void QXYSeries_setSelectedColor(QXYSeries* self, QColor* color);
QColor* QXYSeries_selectedColor(const QXYSeries* self);
void QXYSeries_setPointsVisible(QXYSeries* self);
bool QXYSeries_pointsVisible(const QXYSeries* self);
void QXYSeries_setPointLabelsFormat(QXYSeries* self, struct miqt_string format);
struct miqt_string QXYSeries_pointLabelsFormat(const QXYSeries* self);
void QXYSeries_setPointLabelsVisible(QXYSeries* self);
bool QXYSeries_pointLabelsVisible(const QXYSeries* self);
void QXYSeries_setPointLabelsFont(QXYSeries* self, QFont* font);
QFont* QXYSeries_pointLabelsFont(const QXYSeries* self);
void QXYSeries_setPointLabelsColor(QXYSeries* self, QColor* color);
QColor* QXYSeries_pointLabelsColor(const QXYSeries* self);
void QXYSeries_setPointLabelsClipping(QXYSeries* self);
bool QXYSeries_pointLabelsClipping(const QXYSeries* self);
void QXYSeries_replaceWithPoints(QXYSeries* self, struct miqt_array /* of QPointF* */  points);
bool QXYSeries_isPointSelected(QXYSeries* self, int index);
void QXYSeries_selectPoint(QXYSeries* self, int index);
void QXYSeries_deselectPoint(QXYSeries* self, int index);
void QXYSeries_setPointSelected(QXYSeries* self, int index, bool selected);
void QXYSeries_selectAllPoints(QXYSeries* self);
void QXYSeries_deselectAllPoints(QXYSeries* self);
void QXYSeries_selectPoints(QXYSeries* self, struct miqt_array /* of int */  indexes);
void QXYSeries_deselectPoints(QXYSeries* self, struct miqt_array /* of int */  indexes);
void QXYSeries_toggleSelection(QXYSeries* self, struct miqt_array /* of int */  indexes);
struct miqt_array /* of int */  QXYSeries_selectedPoints(const QXYSeries* self);
void QXYSeries_setLightMarker(QXYSeries* self, QImage* lightMarker);
QImage* QXYSeries_lightMarker(const QXYSeries* self);
void QXYSeries_setSelectedLightMarker(QXYSeries* self, QImage* selectedLightMarker);
QImage* QXYSeries_selectedLightMarker(const QXYSeries* self);
void QXYSeries_setMarkerSize(QXYSeries* self, double size);
double QXYSeries_markerSize(const QXYSeries* self);
void QXYSeries_setBestFitLineVisible(QXYSeries* self);
bool QXYSeries_bestFitLineVisible(const QXYSeries* self);
struct miqt_map /* tuple of double and double */  QXYSeries_bestFitLineEquation(const QXYSeries* self, bool* ok);
void QXYSeries_setBestFitLinePen(QXYSeries* self, QPen* pen);
QPen* QXYSeries_bestFitLinePen(const QXYSeries* self);
void QXYSeries_setBestFitLineColor(QXYSeries* self, QColor* color);
QColor* QXYSeries_bestFitLineColor(const QXYSeries* self);
void QXYSeries_clearPointConfiguration(QXYSeries* self, const int index);
void QXYSeries_clearPointConfiguration2(QXYSeries* self, const int index, int key);
void QXYSeries_clearPointsConfiguration(QXYSeries* self);
void QXYSeries_clearPointsConfigurationWithKey(QXYSeries* self, int key);
void QXYSeries_setPointConfiguration(QXYSeries* self, const int index, struct miqt_map /* of int to QVariant* */  configuration);
void QXYSeries_setPointConfiguration2(QXYSeries* self, const int index, int key, QVariant* value);
void QXYSeries_setPointsConfiguration(QXYSeries* self, struct miqt_map /* of int to struct miqt_map  of int to QVariant*   */  pointsConfiguration);
struct miqt_map /* of int to QVariant* */  QXYSeries_pointConfiguration(const QXYSeries* self, const int index);
struct miqt_map /* of int to struct miqt_map  of int to QVariant*   */  QXYSeries_pointsConfiguration(const QXYSeries* self);
void QXYSeries_sizeBy(QXYSeries* self, struct miqt_array /* of double */  sourceData, const double minSize, const double maxSize);
void QXYSeries_colorBy(QXYSeries* self, struct miqt_array /* of double */  sourceData);
void QXYSeries_clicked(QXYSeries* self, QPointF* point);
void QXYSeries_connect_clicked(QXYSeries* self, intptr_t slot);
void QXYSeries_hovered(QXYSeries* self, QPointF* point, bool state);
void QXYSeries_connect_hovered(QXYSeries* self, intptr_t slot);
void QXYSeries_pressed(QXYSeries* self, QPointF* point);
void QXYSeries_connect_pressed(QXYSeries* self, intptr_t slot);
void QXYSeries_released(QXYSeries* self, QPointF* point);
void QXYSeries_connect_released(QXYSeries* self, intptr_t slot);
void QXYSeries_doubleClicked(QXYSeries* self, QPointF* point);
void QXYSeries_connect_doubleClicked(QXYSeries* self, intptr_t slot);
void QXYSeries_pointReplaced(QXYSeries* self, int index);
void QXYSeries_connect_pointReplaced(QXYSeries* self, intptr_t slot);
void QXYSeries_pointRemoved(QXYSeries* self, int index);
void QXYSeries_connect_pointRemoved(QXYSeries* self, intptr_t slot);
void QXYSeries_pointAdded(QXYSeries* self, int index);
void QXYSeries_connect_pointAdded(QXYSeries* self, intptr_t slot);
void QXYSeries_colorChanged(QXYSeries* self, QColor* color);
void QXYSeries_connect_colorChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_selectedColorChanged(QXYSeries* self, QColor* color);
void QXYSeries_connect_selectedColorChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_pointsReplaced(QXYSeries* self);
void QXYSeries_connect_pointsReplaced(QXYSeries* self, intptr_t slot);
void QXYSeries_pointLabelsFormatChanged(QXYSeries* self, struct miqt_string format);
void QXYSeries_connect_pointLabelsFormatChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_pointLabelsVisibilityChanged(QXYSeries* self, bool visible);
void QXYSeries_connect_pointLabelsVisibilityChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_pointLabelsFontChanged(QXYSeries* self, QFont* font);
void QXYSeries_connect_pointLabelsFontChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_pointLabelsColorChanged(QXYSeries* self, QColor* color);
void QXYSeries_connect_pointLabelsColorChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_pointLabelsClippingChanged(QXYSeries* self, bool clipping);
void QXYSeries_connect_pointLabelsClippingChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_pointsRemoved(QXYSeries* self, int index, int count);
void QXYSeries_connect_pointsRemoved(QXYSeries* self, intptr_t slot);
void QXYSeries_penChanged(QXYSeries* self, QPen* pen);
void QXYSeries_connect_penChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_selectedPointsChanged(QXYSeries* self);
void QXYSeries_connect_selectedPointsChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_lightMarkerChanged(QXYSeries* self, QImage* lightMarker);
void QXYSeries_connect_lightMarkerChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_selectedLightMarkerChanged(QXYSeries* self, QImage* selectedLightMarker);
void QXYSeries_connect_selectedLightMarkerChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_bestFitLineVisibilityChanged(QXYSeries* self, bool visible);
void QXYSeries_connect_bestFitLineVisibilityChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_bestFitLinePenChanged(QXYSeries* self, QPen* pen);
void QXYSeries_connect_bestFitLinePenChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_bestFitLineColorChanged(QXYSeries* self, QColor* color);
void QXYSeries_connect_bestFitLineColorChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_pointsConfigurationChanged(QXYSeries* self, struct miqt_map /* of int to struct miqt_map  of int to QVariant*   */  configuration);
void QXYSeries_connect_pointsConfigurationChanged(QXYSeries* self, intptr_t slot);
void QXYSeries_markerSizeChanged(QXYSeries* self, double size);
void QXYSeries_connect_markerSizeChanged(QXYSeries* self, intptr_t slot);
struct miqt_string QXYSeries_tr2(const char* s, const char* c);
struct miqt_string QXYSeries_tr3(const char* s, const char* c, int n);
void QXYSeries_setPointsVisible1(QXYSeries* self, bool visible);
void QXYSeries_setPointLabelsVisible1(QXYSeries* self, bool visible);
void QXYSeries_setPointLabelsClipping1(QXYSeries* self, bool enabled);
void QXYSeries_setBestFitLineVisible1(QXYSeries* self, bool visible);
void QXYSeries_colorBy2(QXYSeries* self, struct miqt_array /* of double */  sourceData, QLinearGradient* gradient);
void QXYSeries_delete(QXYSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
