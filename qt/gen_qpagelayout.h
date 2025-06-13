#pragma once
#ifndef MIQT_QT_GEN_QPAGELAYOUT_H
#define MIQT_QT_GEN_QPAGELAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMargins;
class QMarginsF;
class QPageLayout;
class QPageSize;
class QRect;
class QRectF;
#else
typedef struct QMargins QMargins;
typedef struct QMarginsF QMarginsF;
typedef struct QPageLayout QPageLayout;
typedef struct QPageSize QPageSize;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
#endif

QPageLayout* QPageLayout_new();
QPageLayout* QPageLayout_new2(QPageSize* pageSize, int orientation, QMarginsF* margins);
QPageLayout* QPageLayout_new3(QPageLayout* other);
QPageLayout* QPageLayout_new4(QPageSize* pageSize, int orientation, QMarginsF* margins, int units);
QPageLayout* QPageLayout_new5(QPageSize* pageSize, int orientation, QMarginsF* margins, int units, QMarginsF* minMargins);
void QPageLayout_operatorAssign(QPageLayout* self, QPageLayout* other);
void QPageLayout_swap(QPageLayout* self, QPageLayout* other);
bool QPageLayout_isEquivalentTo(const QPageLayout* self, QPageLayout* other);
bool QPageLayout_isValid(const QPageLayout* self);
void QPageLayout_setMode(QPageLayout* self, int mode);
int QPageLayout_mode(const QPageLayout* self);
void QPageLayout_setPageSize(QPageLayout* self, QPageSize* pageSize);
QPageSize* QPageLayout_pageSize(const QPageLayout* self);
void QPageLayout_setOrientation(QPageLayout* self, int orientation);
int QPageLayout_orientation(const QPageLayout* self);
void QPageLayout_setUnits(QPageLayout* self, int units);
int QPageLayout_units(const QPageLayout* self);
bool QPageLayout_setMargins(QPageLayout* self, QMarginsF* margins);
bool QPageLayout_setLeftMargin(QPageLayout* self, double leftMargin);
bool QPageLayout_setRightMargin(QPageLayout* self, double rightMargin);
bool QPageLayout_setTopMargin(QPageLayout* self, double topMargin);
bool QPageLayout_setBottomMargin(QPageLayout* self, double bottomMargin);
QMarginsF* QPageLayout_margins(const QPageLayout* self);
QMarginsF* QPageLayout_marginsWithUnits(const QPageLayout* self, int units);
QMargins* QPageLayout_marginsPoints(const QPageLayout* self);
QMargins* QPageLayout_marginsPixels(const QPageLayout* self, int resolution);
void QPageLayout_setMinimumMargins(QPageLayout* self, QMarginsF* minMargins);
QMarginsF* QPageLayout_minimumMargins(const QPageLayout* self);
QMarginsF* QPageLayout_maximumMargins(const QPageLayout* self);
QRectF* QPageLayout_fullRect(const QPageLayout* self);
QRectF* QPageLayout_fullRectWithUnits(const QPageLayout* self, int units);
QRect* QPageLayout_fullRectPoints(const QPageLayout* self);
QRect* QPageLayout_fullRectPixels(const QPageLayout* self, int resolution);
QRectF* QPageLayout_paintRect(const QPageLayout* self);
QRectF* QPageLayout_paintRectWithUnits(const QPageLayout* self, int units);
QRect* QPageLayout_paintRectPoints(const QPageLayout* self);
QRect* QPageLayout_paintRectPixels(const QPageLayout* self, int resolution);
void QPageLayout_setPageSize2(QPageLayout* self, QPageSize* pageSize, QMarginsF* minMargins);

void QPageLayout_delete(QPageLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
