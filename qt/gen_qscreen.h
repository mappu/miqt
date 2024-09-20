#ifndef GEN_QSCREEN_H
#define GEN_QSCREEN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QPixmap;
class QPoint;
class QRect;
class QScreen;
class QSize;
class QSizeF;
class QTransform;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QScreen QScreen;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
typedef struct QTransform QTransform;
#endif

QMetaObject* QScreen_MetaObject(const QScreen* self);
void* QScreen_Metacast(QScreen* self, const char* param1);
struct miqt_string* QScreen_Tr(const char* s);
struct miqt_string* QScreen_TrUtf8(const char* s);
struct miqt_string* QScreen_Name(const QScreen* self);
struct miqt_string* QScreen_Manufacturer(const QScreen* self);
struct miqt_string* QScreen_Model(const QScreen* self);
struct miqt_string* QScreen_SerialNumber(const QScreen* self);
int QScreen_Depth(const QScreen* self);
QSize* QScreen_Size(const QScreen* self);
QRect* QScreen_Geometry(const QScreen* self);
QSizeF* QScreen_PhysicalSize(const QScreen* self);
double QScreen_PhysicalDotsPerInchX(const QScreen* self);
double QScreen_PhysicalDotsPerInchY(const QScreen* self);
double QScreen_PhysicalDotsPerInch(const QScreen* self);
double QScreen_LogicalDotsPerInchX(const QScreen* self);
double QScreen_LogicalDotsPerInchY(const QScreen* self);
double QScreen_LogicalDotsPerInch(const QScreen* self);
double QScreen_DevicePixelRatio(const QScreen* self);
QSize* QScreen_AvailableSize(const QScreen* self);
QRect* QScreen_AvailableGeometry(const QScreen* self);
struct miqt_array* QScreen_VirtualSiblings(const QScreen* self);
QScreen* QScreen_VirtualSiblingAt(QScreen* self, QPoint* point);
QSize* QScreen_VirtualSize(const QScreen* self);
QRect* QScreen_VirtualGeometry(const QScreen* self);
QSize* QScreen_AvailableVirtualSize(const QScreen* self);
QRect* QScreen_AvailableVirtualGeometry(const QScreen* self);
int QScreen_PrimaryOrientation(const QScreen* self);
int QScreen_Orientation(const QScreen* self);
int QScreen_NativeOrientation(const QScreen* self);
int QScreen_OrientationUpdateMask(const QScreen* self);
void QScreen_SetOrientationUpdateMask(QScreen* self, int mask);
int QScreen_AngleBetween(const QScreen* self, int a, int b);
QTransform* QScreen_TransformBetween(const QScreen* self, int a, int b, QRect* target);
QRect* QScreen_MapBetween(const QScreen* self, int a, int b, QRect* rect);
bool QScreen_IsPortrait(const QScreen* self, int orientation);
bool QScreen_IsLandscape(const QScreen* self, int orientation);
QPixmap* QScreen_GrabWindow(QScreen* self, uintptr_t window);
double QScreen_RefreshRate(const QScreen* self);
void QScreen_GeometryChanged(QScreen* self, QRect* geometry);
void QScreen_connect_GeometryChanged(QScreen* self, void* slot);
void QScreen_AvailableGeometryChanged(QScreen* self, QRect* geometry);
void QScreen_connect_AvailableGeometryChanged(QScreen* self, void* slot);
void QScreen_PhysicalSizeChanged(QScreen* self, QSizeF* size);
void QScreen_connect_PhysicalSizeChanged(QScreen* self, void* slot);
void QScreen_PhysicalDotsPerInchChanged(QScreen* self, double dpi);
void QScreen_connect_PhysicalDotsPerInchChanged(QScreen* self, void* slot);
void QScreen_LogicalDotsPerInchChanged(QScreen* self, double dpi);
void QScreen_connect_LogicalDotsPerInchChanged(QScreen* self, void* slot);
void QScreen_VirtualGeometryChanged(QScreen* self, QRect* rect);
void QScreen_connect_VirtualGeometryChanged(QScreen* self, void* slot);
void QScreen_PrimaryOrientationChanged(QScreen* self, int orientation);
void QScreen_connect_PrimaryOrientationChanged(QScreen* self, void* slot);
void QScreen_OrientationChanged(QScreen* self, int orientation);
void QScreen_connect_OrientationChanged(QScreen* self, void* slot);
void QScreen_RefreshRateChanged(QScreen* self, double refreshRate);
void QScreen_connect_RefreshRateChanged(QScreen* self, void* slot);
struct miqt_string* QScreen_Tr2(const char* s, const char* c);
struct miqt_string* QScreen_Tr3(const char* s, const char* c, int n);
struct miqt_string* QScreen_TrUtf82(const char* s, const char* c);
struct miqt_string* QScreen_TrUtf83(const char* s, const char* c, int n);
QPixmap* QScreen_GrabWindow2(QScreen* self, uintptr_t window, int x);
QPixmap* QScreen_GrabWindow3(QScreen* self, uintptr_t window, int x, int y);
QPixmap* QScreen_GrabWindow4(QScreen* self, uintptr_t window, int x, int y, int w);
QPixmap* QScreen_GrabWindow5(QScreen* self, uintptr_t window, int x, int y, int w, int h);
void QScreen_Delete(QScreen* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
