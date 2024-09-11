#ifndef GEN_QSTYLEPAINTER_H
#define GEN_QSTYLEPAINTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPaintDevice;
class QPalette;
class QPixmap;
class QRect;
class QStyle;
class QStyleOption;
class QStyleOptionComplex;
class QStylePainter;
class QWidget;
#else
typedef struct QPaintDevice QPaintDevice;
typedef struct QPalette QPalette;
typedef struct QPixmap QPixmap;
typedef struct QRect QRect;
typedef struct QStyle QStyle;
typedef struct QStyleOption QStyleOption;
typedef struct QStyleOptionComplex QStyleOptionComplex;
typedef struct QStylePainter QStylePainter;
typedef struct QWidget QWidget;
#endif

QStylePainter* QStylePainter_new();
QStylePainter* QStylePainter_new2(QWidget* w);
QStylePainter* QStylePainter_new3(QPaintDevice* pd, QWidget* w);
bool QStylePainter_Begin(QStylePainter* self, QWidget* w);
bool QStylePainter_Begin2(QStylePainter* self, QPaintDevice* pd, QWidget* w);
void QStylePainter_DrawPrimitive(QStylePainter* self, uintptr_t pe, QStyleOption* opt);
void QStylePainter_DrawControl(QStylePainter* self, uintptr_t ce, QStyleOption* opt);
void QStylePainter_DrawComplexControl(QStylePainter* self, uintptr_t cc, QStyleOptionComplex* opt);
void QStylePainter_DrawItemText(QStylePainter* self, QRect* r, int flags, QPalette* pal, bool enabled, const char* text, size_t text_Strlen);
void QStylePainter_DrawItemPixmap(QStylePainter* self, QRect* r, int flags, QPixmap* pixmap);
QStyle* QStylePainter_Style(const QStylePainter* self);
void QStylePainter_DrawItemText6(QStylePainter* self, QRect* r, int flags, QPalette* pal, bool enabled, const char* text, size_t text_Strlen, uintptr_t textRole);
void QStylePainter_Delete(QStylePainter* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
