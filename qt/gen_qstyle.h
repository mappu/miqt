#ifndef GEN_QSTYLE_H
#define GEN_QSTYLE_H

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
typedef struct QRect QRect;
typedef struct QStyle QStyle;
typedef struct QWidget QWidget;
#endif

QMetaObject* QStyle_MetaObject(QStyle* self);
void QStyle_Tr(char* s, char** _out, int* _out_Strlen);
void QStyle_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QStyle_Polish(QStyle* self, QWidget* widget);
void QStyle_Unpolish(QStyle* self, QWidget* widget);
void QStyle_PolishWithApplication(QStyle* self, QApplication* application);
void QStyle_UnpolishWithApplication(QStyle* self, QApplication* application);
void QStyle_PolishWithPalette(QStyle* self, QPalette* palette);
QRect* QStyle_ItemTextRect(QStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, const char* text, size_t text_Strlen);
QRect* QStyle_ItemPixmapRect(QStyle* self, QRect* r, int flags, QPixmap* pixmap);
void QStyle_DrawItemPixmap(QStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap);
QPalette* QStyle_StandardPalette(QStyle* self);
int QStyle_SliderPositionFromValue(int min, int max, int val, int space);
int QStyle_SliderValueFromPosition(int min, int max, int pos, int space);
QStyle* QStyle_Proxy(QStyle* self);
void QStyle_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QStyle_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QStyle_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QStyle_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
int QStyle_SliderPositionFromValue5(int min, int max, int val, int space, bool upsideDown);
int QStyle_SliderValueFromPosition5(int min, int max, int pos, int space, bool upsideDown);
void QStyle_Delete(QStyle* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
