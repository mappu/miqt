#pragma once
#ifndef MIQT_QT_GEN_QSPLASHSCREEN_H
#define MIQT_QT_GEN_QSPLASHSCREEN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QColor;
class QMetaObject;
class QPixmap;
class QScreen;
class QSplashScreen;
class QWidget;
#else
typedef struct QColor QColor;
typedef struct QMetaObject QMetaObject;
typedef struct QPixmap QPixmap;
typedef struct QScreen QScreen;
typedef struct QSplashScreen QSplashScreen;
typedef struct QWidget QWidget;
#endif

QSplashScreen* QSplashScreen_new(QWidget* parent);
QSplashScreen* QSplashScreen_new2();
QSplashScreen* QSplashScreen_new3(QScreen* screen);
QSplashScreen* QSplashScreen_new4(QPixmap* pixmap);
QSplashScreen* QSplashScreen_new5(QPixmap* pixmap, int f);
QSplashScreen* QSplashScreen_new6(QScreen* screen, QPixmap* pixmap);
QSplashScreen* QSplashScreen_new7(QScreen* screen, QPixmap* pixmap, int f);
QSplashScreen* QSplashScreen_new8(QWidget* parent, QPixmap* pixmap);
QSplashScreen* QSplashScreen_new9(QWidget* parent, QPixmap* pixmap, int f);
QMetaObject* QSplashScreen_MetaObject(const QSplashScreen* self);
void* QSplashScreen_Metacast(QSplashScreen* self, const char* param1);
struct miqt_string QSplashScreen_Tr(const char* s);
struct miqt_string QSplashScreen_TrUtf8(const char* s);
void QSplashScreen_SetPixmap(QSplashScreen* self, QPixmap* pixmap);
QPixmap* QSplashScreen_Pixmap(const QSplashScreen* self);
void QSplashScreen_Finish(QSplashScreen* self, QWidget* w);
void QSplashScreen_Repaint(QSplashScreen* self);
struct miqt_string QSplashScreen_Message(const QSplashScreen* self);
void QSplashScreen_ShowMessage(QSplashScreen* self, struct miqt_string message);
void QSplashScreen_ClearMessage(QSplashScreen* self);
void QSplashScreen_MessageChanged(QSplashScreen* self, struct miqt_string message);
void QSplashScreen_connect_MessageChanged(QSplashScreen* self, intptr_t slot);
struct miqt_string QSplashScreen_Tr2(const char* s, const char* c);
struct miqt_string QSplashScreen_Tr3(const char* s, const char* c, int n);
struct miqt_string QSplashScreen_TrUtf82(const char* s, const char* c);
struct miqt_string QSplashScreen_TrUtf83(const char* s, const char* c, int n);
void QSplashScreen_ShowMessage2(QSplashScreen* self, struct miqt_string message, int alignment);
void QSplashScreen_ShowMessage3(QSplashScreen* self, struct miqt_string message, int alignment, QColor* color);
void QSplashScreen_Delete(QSplashScreen* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
