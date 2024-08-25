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
class QPixmap;
class QRect;
class QStyle;
class QStylePainter;
class QWidget;
#else
typedef struct QPaintDevice QPaintDevice;
typedef struct QPixmap QPixmap;
typedef struct QRect QRect;
typedef struct QStyle QStyle;
typedef struct QStylePainter QStylePainter;
typedef struct QWidget QWidget;
#endif

QStylePainter* QStylePainter_new();
QStylePainter* QStylePainter_new2(QWidget* w);
QStylePainter* QStylePainter_new3(QPaintDevice* pd, QWidget* w);
bool QStylePainter_Begin(QStylePainter* self, QWidget* w);
bool QStylePainter_Begin2(QStylePainter* self, QPaintDevice* pd, QWidget* w);
void QStylePainter_DrawItemPixmap(QStylePainter* self, QRect* r, int flags, QPixmap* pixmap);
QStyle* QStylePainter_Style(QStylePainter* self);
void QStylePainter_Delete(QStylePainter* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
