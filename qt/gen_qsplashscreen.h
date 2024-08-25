#ifndef GEN_QSPLASHSCREEN_H
#define GEN_QSPLASHSCREEN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QColor;
class QMetaObject;
class QPixmap;
class QSplashScreen;
class QWidget;
#else
typedef struct QColor QColor;
typedef struct QMetaObject QMetaObject;
typedef struct QPixmap QPixmap;
typedef struct QSplashScreen QSplashScreen;
typedef struct QWidget QWidget;
#endif

QMetaObject* QSplashScreen_MetaObject(QSplashScreen* self);
void QSplashScreen_Tr(char* s, char** _out, int* _out_Strlen);
void QSplashScreen_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QSplashScreen_SetPixmap(QSplashScreen* self, QPixmap* pixmap);
QPixmap* QSplashScreen_Pixmap(QSplashScreen* self);
void QSplashScreen_Finish(QSplashScreen* self, QWidget* w);
void QSplashScreen_Repaint(QSplashScreen* self);
void QSplashScreen_Message(QSplashScreen* self, char** _out, int* _out_Strlen);
void QSplashScreen_ShowMessage(QSplashScreen* self, const char* message, size_t message_Strlen);
void QSplashScreen_ClearMessage(QSplashScreen* self);
void QSplashScreen_MessageChanged(QSplashScreen* self, const char* message, size_t message_Strlen);
void QSplashScreen_connect_MessageChanged(QSplashScreen* self, void* slot);
void QSplashScreen_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QSplashScreen_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QSplashScreen_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QSplashScreen_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QSplashScreen_ShowMessage2(QSplashScreen* self, const char* message, size_t message_Strlen, int alignment);
void QSplashScreen_ShowMessage3(QSplashScreen* self, const char* message, size_t message_Strlen, int alignment, QColor* color);
void QSplashScreen_Delete(QSplashScreen* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
