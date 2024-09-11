#ifndef GEN_QDESKTOPWIDGET_H
#define GEN_QDESKTOPWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDesktopWidget;
class QMetaObject;
class QPoint;
class QRect;
class QWidget;
#else
typedef struct QDesktopWidget QDesktopWidget;
typedef struct QMetaObject QMetaObject;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QWidget QWidget;
#endif

QDesktopWidget* QDesktopWidget_new();
QMetaObject* QDesktopWidget_MetaObject(const QDesktopWidget* self);
void QDesktopWidget_Tr(const char* s, char** _out, int* _out_Strlen);
void QDesktopWidget_TrUtf8(const char* s, char** _out, int* _out_Strlen);
int QDesktopWidget_ScreenNumber(const QDesktopWidget* self);
QRect* QDesktopWidget_ScreenGeometry(const QDesktopWidget* self, QWidget* widget);
QRect* QDesktopWidget_AvailableGeometry(const QDesktopWidget* self, QWidget* widget);
bool QDesktopWidget_IsVirtualDesktop(const QDesktopWidget* self);
int QDesktopWidget_NumScreens(const QDesktopWidget* self);
int QDesktopWidget_ScreenCount(const QDesktopWidget* self);
int QDesktopWidget_PrimaryScreen(const QDesktopWidget* self);
int QDesktopWidget_ScreenNumberWithQPoint(const QDesktopWidget* self, QPoint* param1);
QWidget* QDesktopWidget_Screen(QDesktopWidget* self);
QRect* QDesktopWidget_ScreenGeometry2(const QDesktopWidget* self);
QRect* QDesktopWidget_ScreenGeometryWithPoint(const QDesktopWidget* self, QPoint* point);
QRect* QDesktopWidget_AvailableGeometry2(const QDesktopWidget* self);
QRect* QDesktopWidget_AvailableGeometryWithPoint(const QDesktopWidget* self, QPoint* point);
void QDesktopWidget_Resized(QDesktopWidget* self, int param1);
void QDesktopWidget_connect_Resized(QDesktopWidget* self, void* slot);
void QDesktopWidget_WorkAreaResized(QDesktopWidget* self, int param1);
void QDesktopWidget_connect_WorkAreaResized(QDesktopWidget* self, void* slot);
void QDesktopWidget_ScreenCountChanged(QDesktopWidget* self, int param1);
void QDesktopWidget_connect_ScreenCountChanged(QDesktopWidget* self, void* slot);
void QDesktopWidget_PrimaryScreenChanged(QDesktopWidget* self);
void QDesktopWidget_connect_PrimaryScreenChanged(QDesktopWidget* self, void* slot);
void QDesktopWidget_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QDesktopWidget_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QDesktopWidget_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QDesktopWidget_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
int QDesktopWidget_ScreenNumber1(const QDesktopWidget* self, QWidget* widget);
QWidget* QDesktopWidget_Screen1(QDesktopWidget* self, int screen);
QRect* QDesktopWidget_ScreenGeometry1(const QDesktopWidget* self, int screen);
QRect* QDesktopWidget_AvailableGeometry1(const QDesktopWidget* self, int screen);
void QDesktopWidget_Delete(QDesktopWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
