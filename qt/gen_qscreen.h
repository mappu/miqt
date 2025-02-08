#pragma once
#ifndef MIQT_QT_GEN_QSCREEN_H
#define MIQT_QT_GEN_QSCREEN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaMethod;
class QMetaObject;
class QObject;
class QPixmap;
class QPoint;
class QRect;
class QScreen;
class QSize;
class QSizeF;
class QTransform;
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QScreen QScreen;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
typedef struct QTransform QTransform;
#endif

void QScreen_virtbase(QScreen* src, QObject** outptr_QObject);
QMetaObject* QScreen_metaObject(const QScreen* self);
void* QScreen_metacast(QScreen* self, const char* param1);
struct miqt_string QScreen_tr(const char* s);
struct miqt_string QScreen_trUtf8(const char* s);
struct miqt_string QScreen_name(const QScreen* self);
struct miqt_string QScreen_manufacturer(const QScreen* self);
struct miqt_string QScreen_model(const QScreen* self);
struct miqt_string QScreen_serialNumber(const QScreen* self);
int QScreen_depth(const QScreen* self);
QSize* QScreen_size(const QScreen* self);
QRect* QScreen_geometry(const QScreen* self);
QSizeF* QScreen_physicalSize(const QScreen* self);
double QScreen_physicalDotsPerInchX(const QScreen* self);
double QScreen_physicalDotsPerInchY(const QScreen* self);
double QScreen_physicalDotsPerInch(const QScreen* self);
double QScreen_logicalDotsPerInchX(const QScreen* self);
double QScreen_logicalDotsPerInchY(const QScreen* self);
double QScreen_logicalDotsPerInch(const QScreen* self);
double QScreen_devicePixelRatio(const QScreen* self);
QSize* QScreen_availableSize(const QScreen* self);
QRect* QScreen_availableGeometry(const QScreen* self);
struct miqt_array /* of QScreen* */  QScreen_virtualSiblings(const QScreen* self);
QScreen* QScreen_virtualSiblingAt(QScreen* self, QPoint* point);
QSize* QScreen_virtualSize(const QScreen* self);
QRect* QScreen_virtualGeometry(const QScreen* self);
QSize* QScreen_availableVirtualSize(const QScreen* self);
QRect* QScreen_availableVirtualGeometry(const QScreen* self);
int QScreen_primaryOrientation(const QScreen* self);
int QScreen_orientation(const QScreen* self);
int QScreen_nativeOrientation(const QScreen* self);
int QScreen_orientationUpdateMask(const QScreen* self);
void QScreen_setOrientationUpdateMask(QScreen* self, int mask);
int QScreen_angleBetween(const QScreen* self, int a, int b);
QTransform* QScreen_transformBetween(const QScreen* self, int a, int b, QRect* target);
QRect* QScreen_mapBetween(const QScreen* self, int a, int b, QRect* rect);
bool QScreen_isPortrait(const QScreen* self, int orientation);
bool QScreen_isLandscape(const QScreen* self, int orientation);
QPixmap* QScreen_grabWindow(QScreen* self, uintptr_t window);
double QScreen_refreshRate(const QScreen* self);
void QScreen_geometryChanged(QScreen* self, QRect* geometry);
void QScreen_connect_geometryChanged(QScreen* self, intptr_t slot);
void QScreen_availableGeometryChanged(QScreen* self, QRect* geometry);
void QScreen_connect_availableGeometryChanged(QScreen* self, intptr_t slot);
void QScreen_physicalSizeChanged(QScreen* self, QSizeF* size);
void QScreen_connect_physicalSizeChanged(QScreen* self, intptr_t slot);
void QScreen_physicalDotsPerInchChanged(QScreen* self, double dpi);
void QScreen_connect_physicalDotsPerInchChanged(QScreen* self, intptr_t slot);
void QScreen_logicalDotsPerInchChanged(QScreen* self, double dpi);
void QScreen_connect_logicalDotsPerInchChanged(QScreen* self, intptr_t slot);
void QScreen_virtualGeometryChanged(QScreen* self, QRect* rect);
void QScreen_connect_virtualGeometryChanged(QScreen* self, intptr_t slot);
void QScreen_primaryOrientationChanged(QScreen* self, int orientation);
void QScreen_connect_primaryOrientationChanged(QScreen* self, intptr_t slot);
void QScreen_orientationChanged(QScreen* self, int orientation);
void QScreen_connect_orientationChanged(QScreen* self, intptr_t slot);
void QScreen_refreshRateChanged(QScreen* self, double refreshRate);
void QScreen_connect_refreshRateChanged(QScreen* self, intptr_t slot);
struct miqt_string QScreen_tr2(const char* s, const char* c);
struct miqt_string QScreen_tr3(const char* s, const char* c, int n);
struct miqt_string QScreen_trUtf82(const char* s, const char* c);
struct miqt_string QScreen_trUtf83(const char* s, const char* c, int n);
QPixmap* QScreen_grabWindow2(QScreen* self, uintptr_t window, int x);
QPixmap* QScreen_grabWindow3(QScreen* self, uintptr_t window, int x, int y);
QPixmap* QScreen_grabWindow4(QScreen* self, uintptr_t window, int x, int y, int w);
QPixmap* QScreen_grabWindow5(QScreen* self, uintptr_t window, int x, int y, int w, int h);
void QScreen_delete(QScreen* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
