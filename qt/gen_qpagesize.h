#pragma once
#ifndef MIQT_QT_GEN_QPAGESIZE_H
#define MIQT_QT_GEN_QPAGESIZE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPageSize;
class QRect;
class QRectF;
class QSize;
class QSizeF;
#else
typedef struct QPageSize QPageSize;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
#endif

void QPageSize_new(QPageSize** outptr_QPageSize);
void QPageSize_new2(int pageSizeId, QPageSize** outptr_QPageSize);
void QPageSize_new3(QSize* pointSize, QPageSize** outptr_QPageSize);
void QPageSize_new4(QSizeF* size, int units, QPageSize** outptr_QPageSize);
void QPageSize_new5(QPageSize* other, QPageSize** outptr_QPageSize);
void QPageSize_new6(QSize* pointSize, struct miqt_string name, QPageSize** outptr_QPageSize);
void QPageSize_new7(QSize* pointSize, struct miqt_string name, int matchPolicy, QPageSize** outptr_QPageSize);
void QPageSize_new8(QSizeF* size, int units, struct miqt_string name, QPageSize** outptr_QPageSize);
void QPageSize_new9(QSizeF* size, int units, struct miqt_string name, int matchPolicy, QPageSize** outptr_QPageSize);
void QPageSize_OperatorAssign(QPageSize* self, QPageSize* other);
void QPageSize_Swap(QPageSize* self, QPageSize* other);
bool QPageSize_IsEquivalentTo(const QPageSize* self, QPageSize* other);
bool QPageSize_IsValid(const QPageSize* self);
struct miqt_string QPageSize_Key(const QPageSize* self);
struct miqt_string QPageSize_Name(const QPageSize* self);
int QPageSize_Id(const QPageSize* self);
int QPageSize_WindowsId(const QPageSize* self);
QSizeF* QPageSize_DefinitionSize(const QPageSize* self);
int QPageSize_DefinitionUnits(const QPageSize* self);
QSizeF* QPageSize_Size(const QPageSize* self, int units);
QSize* QPageSize_SizePoints(const QPageSize* self);
QSize* QPageSize_SizePixels(const QPageSize* self, int resolution);
QRectF* QPageSize_Rect(const QPageSize* self, int units);
QRect* QPageSize_RectPoints(const QPageSize* self);
QRect* QPageSize_RectPixels(const QPageSize* self, int resolution);
struct miqt_string QPageSize_KeyWithPageSizeId(int pageSizeId);
struct miqt_string QPageSize_NameWithPageSizeId(int pageSizeId);
int QPageSize_IdWithPointSize(QSize* pointSize);
int QPageSize_Id2(QSizeF* size, int units);
int QPageSize_IdWithWindowsId(int windowsId);
int QPageSize_WindowsIdWithPageSizeId(int pageSizeId);
QSizeF* QPageSize_DefinitionSizeWithPageSizeId(int pageSizeId);
int QPageSize_DefinitionUnitsWithPageSizeId(int pageSizeId);
QSizeF* QPageSize_Size2(int pageSizeId, int units);
QSize* QPageSize_SizePointsWithPageSizeId(int pageSizeId);
QSize* QPageSize_SizePixels2(int pageSizeId, int resolution);
int QPageSize_Id22(QSize* pointSize, int matchPolicy);
int QPageSize_Id3(QSizeF* size, int units, int matchPolicy);
void QPageSize_Delete(QPageSize* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
