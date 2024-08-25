#ifndef GEN_QPROXYSTYLE_H
#define GEN_QPROXYSTYLE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QApplication;
class QFontMetrics;
class QMetaObject;
class QPainter;
class QPalette;
class QPixmap;
class QProxyStyle;
class QRect;
class QStyle;
class QWidget;
#else
typedef struct QApplication QApplication;
typedef struct QFontMetrics QFontMetrics;
typedef struct QMetaObject QMetaObject;
typedef struct QPainter QPainter;
typedef struct QPalette QPalette;
typedef struct QPixmap QPixmap;
typedef struct QProxyStyle QProxyStyle;
typedef struct QRect QRect;
typedef struct QStyle QStyle;
typedef struct QWidget QWidget;
#endif

QProxyStyle* QProxyStyle_new();
QProxyStyle* QProxyStyle_new2(const char* key, size_t key_Strlen);
QProxyStyle* QProxyStyle_new3(QStyle* style);
QMetaObject* QProxyStyle_MetaObject(QProxyStyle* self);
void QProxyStyle_Tr(char* s, char** _out, int* _out_Strlen);
void QProxyStyle_TrUtf8(char* s, char** _out, int* _out_Strlen);
QStyle* QProxyStyle_BaseStyle(QProxyStyle* self);
void QProxyStyle_SetBaseStyle(QProxyStyle* self, QStyle* style);
void QProxyStyle_DrawItemPixmap(QProxyStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap);
QRect* QProxyStyle_ItemTextRect(QProxyStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, const char* text, size_t text_Strlen);
QRect* QProxyStyle_ItemPixmapRect(QProxyStyle* self, QRect* r, int flags, QPixmap* pixmap);
QPalette* QProxyStyle_StandardPalette(QProxyStyle* self);
void QProxyStyle_Polish(QProxyStyle* self, QWidget* widget);
void QProxyStyle_PolishWithPal(QProxyStyle* self, QPalette* pal);
void QProxyStyle_PolishWithApp(QProxyStyle* self, QApplication* app);
void QProxyStyle_Unpolish(QProxyStyle* self, QWidget* widget);
void QProxyStyle_UnpolishWithApp(QProxyStyle* self, QApplication* app);
void QProxyStyle_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QProxyStyle_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QProxyStyle_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QProxyStyle_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QProxyStyle_Delete(QProxyStyle* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
