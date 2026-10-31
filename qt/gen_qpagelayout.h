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
QPageLayout* QPageLayout_new2(QPageSize* pageSize, int orientation, struct miqt_qmarginsf margins);
QPageLayout* QPageLayout_new3(QPageLayout* other);
QPageLayout* QPageLayout_new4(QPageSize* pageSize, int orientation, struct miqt_qmarginsf margins, int units);
QPageLayout* QPageLayout_new5(QPageSize* pageSize, int orientation, struct miqt_qmarginsf margins, int units, struct miqt_qmarginsf minMargins);
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
bool QPageLayout_setMargins(QPageLayout* self, struct miqt_qmarginsf margins);
bool QPageLayout_setLeftMargin(QPageLayout* self, double leftMargin);
bool QPageLayout_setRightMargin(QPageLayout* self, double rightMargin);
bool QPageLayout_setTopMargin(QPageLayout* self, double topMargin);
bool QPageLayout_setBottomMargin(QPageLayout* self, double bottomMargin);
struct miqt_qmarginsf QPageLayout_margins(const QPageLayout* self);
struct miqt_qmarginsf QPageLayout_marginsWithUnits(const QPageLayout* self, int units);
struct miqt_qmargins QPageLayout_marginsPoints(const QPageLayout* self);
struct miqt_qmargins QPageLayout_marginsPixels(const QPageLayout* self, int resolution);
void QPageLayout_setMinimumMargins(QPageLayout* self, struct miqt_qmarginsf minMargins);
struct miqt_qmarginsf QPageLayout_minimumMargins(const QPageLayout* self);
struct miqt_qmarginsf QPageLayout_maximumMargins(const QPageLayout* self);
struct miqt_qrectf QPageLayout_fullRect(const QPageLayout* self);
struct miqt_qrectf QPageLayout_fullRectWithUnits(const QPageLayout* self, int units);
struct miqt_qrect QPageLayout_fullRectPoints(const QPageLayout* self);
struct miqt_qrect QPageLayout_fullRectPixels(const QPageLayout* self, int resolution);
struct miqt_qrectf QPageLayout_paintRect(const QPageLayout* self);
struct miqt_qrectf QPageLayout_paintRectWithUnits(const QPageLayout* self, int units);
struct miqt_qrect QPageLayout_paintRectPoints(const QPageLayout* self);
struct miqt_qrect QPageLayout_paintRectPixels(const QPageLayout* self, int resolution);
void QPageLayout_setPageSize2(QPageLayout* self, QPageSize* pageSize, struct miqt_qmarginsf minMargins);

void QPageLayout_delete(QPageLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
