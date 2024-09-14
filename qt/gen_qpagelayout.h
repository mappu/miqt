#ifndef GEN_QPAGELAYOUT_H
#define GEN_QPAGELAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

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
QPageLayout* QPageLayout_new2(QPageSize* pageSize, uintptr_t orientation, QMarginsF* margins);
QPageLayout* QPageLayout_new3(QPageLayout* other);
QPageLayout* QPageLayout_new4(QPageSize* pageSize, uintptr_t orientation, QMarginsF* margins, uintptr_t units);
QPageLayout* QPageLayout_new5(QPageSize* pageSize, uintptr_t orientation, QMarginsF* margins, uintptr_t units, QMarginsF* minMargins);
void QPageLayout_OperatorAssign(QPageLayout* self, QPageLayout* other);
void QPageLayout_Swap(QPageLayout* self, QPageLayout* other);
bool QPageLayout_IsEquivalentTo(const QPageLayout* self, QPageLayout* other);
bool QPageLayout_IsValid(const QPageLayout* self);
void QPageLayout_SetMode(QPageLayout* self, uintptr_t mode);
uintptr_t QPageLayout_Mode(const QPageLayout* self);
void QPageLayout_SetPageSize(QPageLayout* self, QPageSize* pageSize);
QPageSize* QPageLayout_PageSize(const QPageLayout* self);
void QPageLayout_SetOrientation(QPageLayout* self, uintptr_t orientation);
uintptr_t QPageLayout_Orientation(const QPageLayout* self);
void QPageLayout_SetUnits(QPageLayout* self, uintptr_t units);
uintptr_t QPageLayout_Units(const QPageLayout* self);
bool QPageLayout_SetMargins(QPageLayout* self, QMarginsF* margins);
bool QPageLayout_SetLeftMargin(QPageLayout* self, double leftMargin);
bool QPageLayout_SetRightMargin(QPageLayout* self, double rightMargin);
bool QPageLayout_SetTopMargin(QPageLayout* self, double topMargin);
bool QPageLayout_SetBottomMargin(QPageLayout* self, double bottomMargin);
QMarginsF* QPageLayout_Margins(const QPageLayout* self);
QMarginsF* QPageLayout_MarginsWithUnits(const QPageLayout* self, uintptr_t units);
QMargins* QPageLayout_MarginsPoints(const QPageLayout* self);
QMargins* QPageLayout_MarginsPixels(const QPageLayout* self, int resolution);
void QPageLayout_SetMinimumMargins(QPageLayout* self, QMarginsF* minMargins);
QMarginsF* QPageLayout_MinimumMargins(const QPageLayout* self);
QMarginsF* QPageLayout_MaximumMargins(const QPageLayout* self);
QRectF* QPageLayout_FullRect(const QPageLayout* self);
QRectF* QPageLayout_FullRectWithUnits(const QPageLayout* self, uintptr_t units);
QRect* QPageLayout_FullRectPoints(const QPageLayout* self);
QRect* QPageLayout_FullRectPixels(const QPageLayout* self, int resolution);
QRectF* QPageLayout_PaintRect(const QPageLayout* self);
QRectF* QPageLayout_PaintRectWithUnits(const QPageLayout* self, uintptr_t units);
QRect* QPageLayout_PaintRectPoints(const QPageLayout* self);
QRect* QPageLayout_PaintRectPixels(const QPageLayout* self, int resolution);
void QPageLayout_SetPageSize2(QPageLayout* self, QPageSize* pageSize, QMarginsF* minMargins);
void QPageLayout_Delete(QPageLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
