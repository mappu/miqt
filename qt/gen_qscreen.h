#ifndef GEN_QSCREEN_H
#define GEN_QSCREEN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
#else
typedef struct QMetaObject QMetaObject;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QScreen QScreen;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
#endif

QMetaObject* QScreen_MetaObject(QScreen* self);
void QScreen_Tr(char* s, char** _out, int* _out_Strlen);
void QScreen_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QScreen_Name(QScreen* self, char** _out, int* _out_Strlen);
void QScreen_Manufacturer(QScreen* self, char** _out, int* _out_Strlen);
void QScreen_Model(QScreen* self, char** _out, int* _out_Strlen);
void QScreen_SerialNumber(QScreen* self, char** _out, int* _out_Strlen);
int QScreen_Depth(QScreen* self);
QSize* QScreen_Size(QScreen* self);
QRect* QScreen_Geometry(QScreen* self);
QSizeF* QScreen_PhysicalSize(QScreen* self);
double QScreen_PhysicalDotsPerInchX(QScreen* self);
double QScreen_PhysicalDotsPerInchY(QScreen* self);
double QScreen_PhysicalDotsPerInch(QScreen* self);
double QScreen_LogicalDotsPerInchX(QScreen* self);
double QScreen_LogicalDotsPerInchY(QScreen* self);
double QScreen_LogicalDotsPerInch(QScreen* self);
double QScreen_DevicePixelRatio(QScreen* self);
QSize* QScreen_AvailableSize(QScreen* self);
QRect* QScreen_AvailableGeometry(QScreen* self);
void QScreen_VirtualSiblings(QScreen* self, QScreen*** _out, size_t* _out_len);
QScreen* QScreen_VirtualSiblingAt(QScreen* self, QPoint* point);
QSize* QScreen_VirtualSize(QScreen* self);
QRect* QScreen_VirtualGeometry(QScreen* self);
QSize* QScreen_AvailableVirtualSize(QScreen* self);
QRect* QScreen_AvailableVirtualGeometry(QScreen* self);
QPixmap* QScreen_GrabWindow(QScreen* self, uintptr_t window);
double QScreen_RefreshRate(QScreen* self);
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
void QScreen_RefreshRateChanged(QScreen* self, double refreshRate);
void QScreen_connect_RefreshRateChanged(QScreen* self, void* slot);
void QScreen_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QScreen_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QScreen_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QScreen_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
QPixmap* QScreen_GrabWindow2(QScreen* self, uintptr_t window, int x);
QPixmap* QScreen_GrabWindow3(QScreen* self, uintptr_t window, int x, int y);
QPixmap* QScreen_GrabWindow4(QScreen* self, uintptr_t window, int x, int y, int w);
QPixmap* QScreen_GrabWindow5(QScreen* self, uintptr_t window, int x, int y, int w, int h);
void QScreen_Delete(QScreen* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
