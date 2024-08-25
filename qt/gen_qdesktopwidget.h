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
QMetaObject* QDesktopWidget_MetaObject(QDesktopWidget* self);
void QDesktopWidget_Tr(char* s, char** _out, int* _out_Strlen);
void QDesktopWidget_TrUtf8(char* s, char** _out, int* _out_Strlen);
int QDesktopWidget_ScreenNumber(QDesktopWidget* self);
QRect* QDesktopWidget_ScreenGeometry(QDesktopWidget* self, QWidget* widget);
QRect* QDesktopWidget_AvailableGeometry(QDesktopWidget* self, QWidget* widget);
bool QDesktopWidget_IsVirtualDesktop(QDesktopWidget* self);
int QDesktopWidget_NumScreens(QDesktopWidget* self);
int QDesktopWidget_ScreenCount(QDesktopWidget* self);
int QDesktopWidget_PrimaryScreen(QDesktopWidget* self);
int QDesktopWidget_ScreenNumberWithQPoint(QDesktopWidget* self, QPoint* param1);
QWidget* QDesktopWidget_Screen(QDesktopWidget* self);
QRect* QDesktopWidget_ScreenGeometry2(QDesktopWidget* self);
QRect* QDesktopWidget_ScreenGeometryWithPoint(QDesktopWidget* self, QPoint* point);
QRect* QDesktopWidget_AvailableGeometry2(QDesktopWidget* self);
QRect* QDesktopWidget_AvailableGeometryWithPoint(QDesktopWidget* self, QPoint* point);
void QDesktopWidget_Resized(QDesktopWidget* self, int param1);
void QDesktopWidget_connect_Resized(QDesktopWidget* self, void* slot);
void QDesktopWidget_WorkAreaResized(QDesktopWidget* self, int param1);
void QDesktopWidget_connect_WorkAreaResized(QDesktopWidget* self, void* slot);
void QDesktopWidget_ScreenCountChanged(QDesktopWidget* self, int param1);
void QDesktopWidget_connect_ScreenCountChanged(QDesktopWidget* self, void* slot);
void QDesktopWidget_PrimaryScreenChanged(QDesktopWidget* self);
void QDesktopWidget_connect_PrimaryScreenChanged(QDesktopWidget* self, void* slot);
void QDesktopWidget_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QDesktopWidget_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QDesktopWidget_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QDesktopWidget_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
int QDesktopWidget_ScreenNumber1(QDesktopWidget* self, QWidget* widget);
QWidget* QDesktopWidget_Screen1(QDesktopWidget* self, int screen);
QRect* QDesktopWidget_ScreenGeometry1(QDesktopWidget* self, int screen);
QRect* QDesktopWidget_AvailableGeometry1(QDesktopWidget* self, int screen);
void QDesktopWidget_Delete(QDesktopWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
