#ifndef GEN_QPIXMAP_H
#define GEN_QPIXMAP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBitmap;
class QColor;
class QIODevice;
class QImage;
class QMatrix;
class QObject;
class QPaintDevice;
class QPaintEngine;
class QPixmap;
class QPoint;
class QRect;
class QRegion;
class QSize;
class QTransform;
#else
typedef struct QBitmap QBitmap;
typedef struct QColor QColor;
typedef struct QIODevice QIODevice;
typedef struct QImage QImage;
typedef struct QMatrix QMatrix;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QSize QSize;
typedef struct QTransform QTransform;
#endif

QPixmap* QPixmap_new();
QPixmap* QPixmap_new2(int w, int h);
QPixmap* QPixmap_new3(QSize* param1);
QPixmap* QPixmap_new4(char* xpm);
QPixmap* QPixmap_new5(QPixmap* param1);
void QPixmap_OperatorAssign(QPixmap* self, QPixmap* param1);
void QPixmap_Swap(QPixmap* self, QPixmap* other);
bool QPixmap_IsNull(QPixmap* self);
int QPixmap_DevType(QPixmap* self);
int QPixmap_Width(QPixmap* self);
int QPixmap_Height(QPixmap* self);
QSize* QPixmap_Size(QPixmap* self);
QRect* QPixmap_Rect(QPixmap* self);
int QPixmap_Depth(QPixmap* self);
int QPixmap_DefaultDepth();
void QPixmap_Fill(QPixmap* self);
void QPixmap_Fill2(QPixmap* self, QPaintDevice* device, QPoint* ofs);
void QPixmap_Fill3(QPixmap* self, QPaintDevice* device, int xofs, int yofs);
QBitmap* QPixmap_Mask(QPixmap* self);
void QPixmap_SetMask(QPixmap* self, QBitmap* mask);
double QPixmap_DevicePixelRatio(QPixmap* self);
void QPixmap_SetDevicePixelRatio(QPixmap* self, double scaleFactor);
bool QPixmap_HasAlpha(QPixmap* self);
bool QPixmap_HasAlphaChannel(QPixmap* self);
QBitmap* QPixmap_CreateHeuristicMask(QPixmap* self);
QPixmap* QPixmap_GrabWindow(uintptr_t param1);
QPixmap* QPixmap_GrabWidget(QObject* widget, QRect* rect);
QPixmap* QPixmap_GrabWidgetWithWidget(QObject* widget);
QMatrix* QPixmap_TrueMatrix(QMatrix* m, int w, int h);
QTransform* QPixmap_TrueMatrix2(QTransform* m, int w, int h);
QImage* QPixmap_ToImage(QPixmap* self);
bool QPixmap_Save(QPixmap* self, const char* fileName, size_t fileName_Strlen);
bool QPixmap_SaveWithDevice(QPixmap* self, QIODevice* device);
QPixmap* QPixmap_Copy(QPixmap* self, int x, int y, int width, int height);
QPixmap* QPixmap_Copy2(QPixmap* self);
void QPixmap_Scroll(QPixmap* self, int dx, int dy, int x, int y, int width, int height);
void QPixmap_Scroll2(QPixmap* self, int dx, int dy, QRect* rect);
int64_t QPixmap_CacheKey(QPixmap* self);
bool QPixmap_IsDetached(QPixmap* self);
void QPixmap_Detach(QPixmap* self);
bool QPixmap_IsQBitmap(QPixmap* self);
QPaintEngine* QPixmap_PaintEngine(QPixmap* self);
bool QPixmap_OperatorNot(QPixmap* self);
void QPixmap_Fill1(QPixmap* self, QColor* fillColor);
QBitmap* QPixmap_CreateHeuristicMask1(QPixmap* self, bool clipTight);
QPixmap* QPixmap_GrabWindow2(uintptr_t param1, int x);
QPixmap* QPixmap_GrabWindow3(uintptr_t param1, int x, int y);
QPixmap* QPixmap_GrabWindow4(uintptr_t param1, int x, int y, int w);
QPixmap* QPixmap_GrabWindow5(uintptr_t param1, int x, int y, int w, int h);
QPixmap* QPixmap_GrabWidget2(QObject* widget, int x);
QPixmap* QPixmap_GrabWidget3(QObject* widget, int x, int y);
QPixmap* QPixmap_GrabWidget4(QObject* widget, int x, int y, int w);
QPixmap* QPixmap_GrabWidget5(QObject* widget, int x, int y, int w, int h);
bool QPixmap_Save2(QPixmap* self, const char* fileName, size_t fileName_Strlen, char* format);
bool QPixmap_Save3(QPixmap* self, const char* fileName, size_t fileName_Strlen, char* format, int quality);
bool QPixmap_Save22(QPixmap* self, QIODevice* device, char* format);
bool QPixmap_Save32(QPixmap* self, QIODevice* device, char* format, int quality);
QPixmap* QPixmap_Copy1(QPixmap* self, QRect* rect);
void QPixmap_Scroll7(QPixmap* self, int dx, int dy, int x, int y, int width, int height, QRegion* exposed);
void QPixmap_Scroll4(QPixmap* self, int dx, int dy, QRect* rect, QRegion* exposed);
void QPixmap_Delete(QPixmap* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
