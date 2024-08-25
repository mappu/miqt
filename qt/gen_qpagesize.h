#ifndef GEN_QPAGESIZE_H
#define GEN_QPAGESIZE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPageSize;
class QRect;
class QSize;
class QSizeF;
#else
typedef struct QPageSize QPageSize;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
#endif

QPageSize* QPageSize_new();
QPageSize* QPageSize_new2(QPageSize* other);
void QPageSize_OperatorAssign(QPageSize* self, QPageSize* other);
void QPageSize_Swap(QPageSize* self, QPageSize* other);
bool QPageSize_IsEquivalentTo(QPageSize* self, QPageSize* other);
bool QPageSize_IsValid(QPageSize* self);
void QPageSize_Key(QPageSize* self, char** _out, int* _out_Strlen);
void QPageSize_Name(QPageSize* self, char** _out, int* _out_Strlen);
int QPageSize_WindowsId(QPageSize* self);
QSizeF* QPageSize_DefinitionSize(QPageSize* self);
QSize* QPageSize_SizePoints(QPageSize* self);
QSize* QPageSize_SizePixels(QPageSize* self, int resolution);
QRect* QPageSize_RectPoints(QPageSize* self);
QRect* QPageSize_RectPixels(QPageSize* self, int resolution);
void QPageSize_Delete(QPageSize* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
