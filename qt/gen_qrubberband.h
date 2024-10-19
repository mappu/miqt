#ifndef GEN_QRUBBERBAND_H
#define GEN_QRUBBERBAND_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QPoint;
class QRect;
class QRubberBand;
class QSize;
class QWidget;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QRubberBand QRubberBand;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QRubberBand* QRubberBand_new(int param1);
QRubberBand* QRubberBand_new2(int param1, QWidget* param2);
QMetaObject* QRubberBand_MetaObject(const QRubberBand* self);
void* QRubberBand_Metacast(QRubberBand* self, const char* param1);
struct miqt_string QRubberBand_Tr(const char* s);
struct miqt_string QRubberBand_TrUtf8(const char* s);
int QRubberBand_Shape(const QRubberBand* self);
void QRubberBand_SetGeometry(QRubberBand* self, QRect* r);
void QRubberBand_SetGeometry2(QRubberBand* self, int x, int y, int w, int h);
void QRubberBand_Move(QRubberBand* self, int x, int y);
void QRubberBand_MoveWithQPoint(QRubberBand* self, QPoint* p);
void QRubberBand_Resize(QRubberBand* self, int w, int h);
void QRubberBand_ResizeWithQSize(QRubberBand* self, QSize* s);
struct miqt_string QRubberBand_Tr2(const char* s, const char* c);
struct miqt_string QRubberBand_Tr3(const char* s, const char* c, int n);
struct miqt_string QRubberBand_TrUtf82(const char* s, const char* c);
struct miqt_string QRubberBand_TrUtf83(const char* s, const char* c, int n);
void QRubberBand_Delete(QRubberBand* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
