#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QABSTRACTBARSERIES_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QABSTRACTBARSERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractBarSeries;
class QAbstractSeries;
class QBarSet;
class QMetaMethod;
class QMetaObject;
class QObject;
#else
typedef struct QAbstractBarSeries QAbstractBarSeries;
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QBarSet QBarSet;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

void QAbstractBarSeries_virtbase(QAbstractBarSeries* src, QAbstractSeries** outptr_QAbstractSeries);
QMetaObject* QAbstractBarSeries_metaObject(const QAbstractBarSeries* self);
void* QAbstractBarSeries_metacast(QAbstractBarSeries* self, const char* param1);
struct miqt_string QAbstractBarSeries_tr(const char* s);
void QAbstractBarSeries_setBarWidth(QAbstractBarSeries* self, double width);
double QAbstractBarSeries_barWidth(const QAbstractBarSeries* self);
bool QAbstractBarSeries_append(QAbstractBarSeries* self, QBarSet* set);
bool QAbstractBarSeries_remove(QAbstractBarSeries* self, QBarSet* set);
bool QAbstractBarSeries_take(QAbstractBarSeries* self, QBarSet* set);
bool QAbstractBarSeries_appendWithSets(QAbstractBarSeries* self, struct miqt_array /* of QBarSet* */  sets);
bool QAbstractBarSeries_insert(QAbstractBarSeries* self, int index, QBarSet* set);
int QAbstractBarSeries_count(const QAbstractBarSeries* self);
struct miqt_array /* of QBarSet* */  QAbstractBarSeries_barSets(const QAbstractBarSeries* self);
void QAbstractBarSeries_clear(QAbstractBarSeries* self);
void QAbstractBarSeries_setLabelsVisible(QAbstractBarSeries* self);
bool QAbstractBarSeries_isLabelsVisible(const QAbstractBarSeries* self);
void QAbstractBarSeries_setLabelsFormat(QAbstractBarSeries* self, struct miqt_string format);
struct miqt_string QAbstractBarSeries_labelsFormat(const QAbstractBarSeries* self);
void QAbstractBarSeries_setLabelsAngle(QAbstractBarSeries* self, double angle);
double QAbstractBarSeries_labelsAngle(const QAbstractBarSeries* self);
void QAbstractBarSeries_setLabelsPosition(QAbstractBarSeries* self, int position);
int QAbstractBarSeries_labelsPosition(const QAbstractBarSeries* self);
void QAbstractBarSeries_setLabelsPrecision(QAbstractBarSeries* self, int precision);
int QAbstractBarSeries_labelsPrecision(const QAbstractBarSeries* self);
void QAbstractBarSeries_clicked(QAbstractBarSeries* self, int index, QBarSet* barset);
void QAbstractBarSeries_connect_clicked(QAbstractBarSeries* self, intptr_t slot);
void QAbstractBarSeries_hovered(QAbstractBarSeries* self, bool status, int index, QBarSet* barset);
void QAbstractBarSeries_connect_hovered(QAbstractBarSeries* self, intptr_t slot);
void QAbstractBarSeries_pressed(QAbstractBarSeries* self, int index, QBarSet* barset);
void QAbstractBarSeries_connect_pressed(QAbstractBarSeries* self, intptr_t slot);
void QAbstractBarSeries_released(QAbstractBarSeries* self, int index, QBarSet* barset);
void QAbstractBarSeries_connect_released(QAbstractBarSeries* self, intptr_t slot);
void QAbstractBarSeries_doubleClicked(QAbstractBarSeries* self, int index, QBarSet* barset);
void QAbstractBarSeries_connect_doubleClicked(QAbstractBarSeries* self, intptr_t slot);
void QAbstractBarSeries_countChanged(QAbstractBarSeries* self);
void QAbstractBarSeries_connect_countChanged(QAbstractBarSeries* self, intptr_t slot);
void QAbstractBarSeries_labelsVisibleChanged(QAbstractBarSeries* self);
void QAbstractBarSeries_connect_labelsVisibleChanged(QAbstractBarSeries* self, intptr_t slot);
void QAbstractBarSeries_labelsFormatChanged(QAbstractBarSeries* self, struct miqt_string format);
void QAbstractBarSeries_connect_labelsFormatChanged(QAbstractBarSeries* self, intptr_t slot);
void QAbstractBarSeries_labelsPositionChanged(QAbstractBarSeries* self, int position);
void QAbstractBarSeries_connect_labelsPositionChanged(QAbstractBarSeries* self, intptr_t slot);
void QAbstractBarSeries_labelsAngleChanged(QAbstractBarSeries* self, double angle);
void QAbstractBarSeries_connect_labelsAngleChanged(QAbstractBarSeries* self, intptr_t slot);
void QAbstractBarSeries_labelsPrecisionChanged(QAbstractBarSeries* self, int precision);
void QAbstractBarSeries_connect_labelsPrecisionChanged(QAbstractBarSeries* self, intptr_t slot);
void QAbstractBarSeries_barsetsAdded(QAbstractBarSeries* self, struct miqt_array /* of QBarSet* */  sets);
void QAbstractBarSeries_connect_barsetsAdded(QAbstractBarSeries* self, intptr_t slot);
void QAbstractBarSeries_barsetsRemoved(QAbstractBarSeries* self, struct miqt_array /* of QBarSet* */  sets);
void QAbstractBarSeries_connect_barsetsRemoved(QAbstractBarSeries* self, intptr_t slot);
struct miqt_string QAbstractBarSeries_tr2(const char* s, const char* c);
struct miqt_string QAbstractBarSeries_tr3(const char* s, const char* c, int n);
void QAbstractBarSeries_setLabelsVisibleWithVisible(QAbstractBarSeries* self, bool visible);

void QAbstractBarSeries_delete(QAbstractBarSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
