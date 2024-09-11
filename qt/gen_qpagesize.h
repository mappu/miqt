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

QPageSize* QPageSize_new();
QPageSize* QPageSize_new2(uintptr_t pageSizeId);
QPageSize* QPageSize_new3(QSize* pointSize);
QPageSize* QPageSize_new4(QSizeF* size, uintptr_t units);
QPageSize* QPageSize_new5(QPageSize* other);
QPageSize* QPageSize_new6(QSize* pointSize, const char* name, size_t name_Strlen);
QPageSize* QPageSize_new7(QSize* pointSize, const char* name, size_t name_Strlen, uintptr_t matchPolicy);
QPageSize* QPageSize_new8(QSizeF* size, uintptr_t units, const char* name, size_t name_Strlen);
QPageSize* QPageSize_new9(QSizeF* size, uintptr_t units, const char* name, size_t name_Strlen, uintptr_t matchPolicy);
void QPageSize_OperatorAssign(QPageSize* self, QPageSize* other);
void QPageSize_Swap(QPageSize* self, QPageSize* other);
bool QPageSize_IsEquivalentTo(const QPageSize* self, QPageSize* other);
bool QPageSize_IsValid(const QPageSize* self);
void QPageSize_Key(const QPageSize* self, char** _out, int* _out_Strlen);
void QPageSize_Name(const QPageSize* self, char** _out, int* _out_Strlen);
uintptr_t QPageSize_Id(const QPageSize* self);
int QPageSize_WindowsId(const QPageSize* self);
QSizeF* QPageSize_DefinitionSize(const QPageSize* self);
uintptr_t QPageSize_DefinitionUnits(const QPageSize* self);
QSizeF* QPageSize_Size(const QPageSize* self, uintptr_t units);
QSize* QPageSize_SizePoints(const QPageSize* self);
QSize* QPageSize_SizePixels(const QPageSize* self, int resolution);
QRectF* QPageSize_Rect(const QPageSize* self, uintptr_t units);
QRect* QPageSize_RectPoints(const QPageSize* self);
QRect* QPageSize_RectPixels(const QPageSize* self, int resolution);
void QPageSize_KeyWithPageSizeId(uintptr_t pageSizeId, char** _out, int* _out_Strlen);
void QPageSize_NameWithPageSizeId(uintptr_t pageSizeId, char** _out, int* _out_Strlen);
uintptr_t QPageSize_IdWithPointSize(QSize* pointSize);
uintptr_t QPageSize_Id2(QSizeF* size, uintptr_t units);
uintptr_t QPageSize_IdWithWindowsId(int windowsId);
int QPageSize_WindowsIdWithPageSizeId(uintptr_t pageSizeId);
QSizeF* QPageSize_DefinitionSizeWithPageSizeId(uintptr_t pageSizeId);
uintptr_t QPageSize_DefinitionUnitsWithPageSizeId(uintptr_t pageSizeId);
QSizeF* QPageSize_Size2(uintptr_t pageSizeId, uintptr_t units);
QSize* QPageSize_SizePointsWithPageSizeId(uintptr_t pageSizeId);
QSize* QPageSize_SizePixels2(uintptr_t pageSizeId, int resolution);
uintptr_t QPageSize_Id22(QSize* pointSize, uintptr_t matchPolicy);
uintptr_t QPageSize_Id3(QSizeF* size, uintptr_t units, uintptr_t matchPolicy);
void QPageSize_Delete(QPageSize* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
