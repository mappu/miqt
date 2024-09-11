#ifndef GEN_QBACKINGSTORE_H
#define GEN_QBACKINGSTORE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBackingStore;
class QPaintDevice;
class QPoint;
class QRegion;
class QSize;
class QWindow;
#else
typedef struct QBackingStore QBackingStore;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPoint QPoint;
typedef struct QRegion QRegion;
typedef struct QSize QSize;
typedef struct QWindow QWindow;
#endif

QBackingStore* QBackingStore_new(QWindow* window);
QWindow* QBackingStore_Window(const QBackingStore* self);
QPaintDevice* QBackingStore_PaintDevice(QBackingStore* self);
void QBackingStore_Flush(QBackingStore* self, QRegion* region);
void QBackingStore_Resize(QBackingStore* self, QSize* size);
QSize* QBackingStore_Size(const QBackingStore* self);
bool QBackingStore_Scroll(QBackingStore* self, QRegion* area, int dx, int dy);
void QBackingStore_BeginPaint(QBackingStore* self, QRegion* param1);
void QBackingStore_EndPaint(QBackingStore* self);
void QBackingStore_SetStaticContents(QBackingStore* self, QRegion* region);
QRegion* QBackingStore_StaticContents(const QBackingStore* self);
bool QBackingStore_HasStaticContents(const QBackingStore* self);
void QBackingStore_Flush2(QBackingStore* self, QRegion* region, QWindow* window);
void QBackingStore_Flush3(QBackingStore* self, QRegion* region, QWindow* window, QPoint* offset);
void QBackingStore_Delete(QBackingStore* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
