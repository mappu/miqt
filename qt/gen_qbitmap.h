#ifndef GEN_QBITMAP_H
#define GEN_QBITMAP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBitmap;
class QImage;
class QMatrix;
class QPixmap;
class QSize;
class QTransform;
#else
typedef struct QBitmap QBitmap;
typedef struct QImage QImage;
typedef struct QMatrix QMatrix;
typedef struct QPixmap QPixmap;
typedef struct QSize QSize;
typedef struct QTransform QTransform;
#endif

QBitmap* QBitmap_new();
QBitmap* QBitmap_new2(QPixmap* param1);
QBitmap* QBitmap_new3(int w, int h);
QBitmap* QBitmap_new4(QSize* param1);
QBitmap* QBitmap_new5(const char* fileName, size_t fileName_Strlen);
QBitmap* QBitmap_new6(QBitmap* other);
QBitmap* QBitmap_new7(const char* fileName, size_t fileName_Strlen, const char* format);
void QBitmap_OperatorAssign(QBitmap* self, QBitmap* other);
void QBitmap_OperatorAssignWithQPixmap(QBitmap* self, QPixmap* param1);
void QBitmap_Swap(QBitmap* self, QBitmap* other);
void QBitmap_Clear(QBitmap* self);
QBitmap* QBitmap_FromImage(QImage* image);
QBitmap* QBitmap_FromData(QSize* size, const unsigned char* bits);
QBitmap* QBitmap_Transformed(QBitmap* self, QMatrix* param1);
QBitmap* QBitmap_TransformedWithMatrix(QBitmap* self, QTransform* matrix);
QBitmap* QBitmap_FromImage2(QImage* image, int flags);
QBitmap* QBitmap_FromData3(QSize* size, const unsigned char* bits, uintptr_t monoFormat);
void QBitmap_Delete(QBitmap* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
