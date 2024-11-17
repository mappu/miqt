#pragma once
#ifndef MIQT_QT6_GEN_QPROXYSTYLE_H
#define MIQT_QT6_GEN_QPROXYSTYLE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QApplication;
class QFontMetrics;
class QIcon;
class QMetaObject;
class QPainter;
class QPalette;
class QPixmap;
class QPoint;
class QProxyStyle;
class QRect;
class QSize;
class QStyle;
class QStyleHintReturn;
class QStyleOption;
class QStyleOptionComplex;
class QWidget;
#else
typedef struct QApplication QApplication;
typedef struct QFontMetrics QFontMetrics;
typedef struct QIcon QIcon;
typedef struct QMetaObject QMetaObject;
typedef struct QPainter QPainter;
typedef struct QPalette QPalette;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QProxyStyle QProxyStyle;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QStyle QStyle;
typedef struct QStyleHintReturn QStyleHintReturn;
typedef struct QStyleOption QStyleOption;
typedef struct QStyleOptionComplex QStyleOptionComplex;
typedef struct QWidget QWidget;
#endif

QProxyStyle* QProxyStyle_new();
QProxyStyle* QProxyStyle_new2(struct miqt_string key);
QProxyStyle* QProxyStyle_new3(QStyle* style);
QMetaObject* QProxyStyle_MetaObject(const QProxyStyle* self);
void* QProxyStyle_Metacast(QProxyStyle* self, const char* param1);
struct miqt_string QProxyStyle_Tr(const char* s);
QStyle* QProxyStyle_BaseStyle(const QProxyStyle* self);
void QProxyStyle_SetBaseStyle(QProxyStyle* self, QStyle* style);
void QProxyStyle_DrawPrimitive(const QProxyStyle* self, int element, QStyleOption* option, QPainter* painter);
void QProxyStyle_DrawControl(const QProxyStyle* self, int element, QStyleOption* option, QPainter* painter);
void QProxyStyle_DrawComplexControl(const QProxyStyle* self, int control, QStyleOptionComplex* option, QPainter* painter);
void QProxyStyle_DrawItemText(const QProxyStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, struct miqt_string text);
void QProxyStyle_DrawItemPixmap(const QProxyStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap);
QSize* QProxyStyle_SizeFromContents(const QProxyStyle* self, int typeVal, QStyleOption* option, QSize* size, QWidget* widget);
QRect* QProxyStyle_SubElementRect(const QProxyStyle* self, int element, QStyleOption* option, QWidget* widget);
QRect* QProxyStyle_SubControlRect(const QProxyStyle* self, int cc, QStyleOptionComplex* opt, int sc, QWidget* widget);
QRect* QProxyStyle_ItemTextRect(const QProxyStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, struct miqt_string text);
QRect* QProxyStyle_ItemPixmapRect(const QProxyStyle* self, QRect* r, int flags, QPixmap* pixmap);
int QProxyStyle_HitTestComplexControl(const QProxyStyle* self, int control, QStyleOptionComplex* option, QPoint* pos);
int QProxyStyle_StyleHint(const QProxyStyle* self, int hint);
int QProxyStyle_PixelMetric(const QProxyStyle* self, int metric);
int QProxyStyle_LayoutSpacing(const QProxyStyle* self, int control1, int control2, int orientation);
QIcon* QProxyStyle_StandardIcon(const QProxyStyle* self, int standardIcon);
QPixmap* QProxyStyle_StandardPixmap(const QProxyStyle* self, int standardPixmap, QStyleOption* opt);
QPixmap* QProxyStyle_GeneratedIconPixmap(const QProxyStyle* self, int iconMode, QPixmap* pixmap, QStyleOption* opt);
QPalette* QProxyStyle_StandardPalette(const QProxyStyle* self);
void QProxyStyle_Polish(QProxyStyle* self, QWidget* widget);
void QProxyStyle_PolishWithPal(QProxyStyle* self, QPalette* pal);
void QProxyStyle_PolishWithApp(QProxyStyle* self, QApplication* app);
void QProxyStyle_Unpolish(QProxyStyle* self, QWidget* widget);
void QProxyStyle_UnpolishWithApp(QProxyStyle* self, QApplication* app);
struct miqt_string QProxyStyle_Tr2(const char* s, const char* c);
struct miqt_string QProxyStyle_Tr3(const char* s, const char* c, int n);
void QProxyStyle_DrawPrimitive4(const QProxyStyle* self, int element, QStyleOption* option, QPainter* painter, QWidget* widget);
void QProxyStyle_DrawControl4(const QProxyStyle* self, int element, QStyleOption* option, QPainter* painter, QWidget* widget);
void QProxyStyle_DrawComplexControl4(const QProxyStyle* self, int control, QStyleOptionComplex* option, QPainter* painter, QWidget* widget);
void QProxyStyle_DrawItemText7(const QProxyStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, struct miqt_string text, int textRole);
int QProxyStyle_HitTestComplexControl4(const QProxyStyle* self, int control, QStyleOptionComplex* option, QPoint* pos, QWidget* widget);
int QProxyStyle_StyleHint2(const QProxyStyle* self, int hint, QStyleOption* option);
int QProxyStyle_StyleHint3(const QProxyStyle* self, int hint, QStyleOption* option, QWidget* widget);
int QProxyStyle_StyleHint4(const QProxyStyle* self, int hint, QStyleOption* option, QWidget* widget, QStyleHintReturn* returnData);
int QProxyStyle_PixelMetric2(const QProxyStyle* self, int metric, QStyleOption* option);
int QProxyStyle_PixelMetric3(const QProxyStyle* self, int metric, QStyleOption* option, QWidget* widget);
int QProxyStyle_LayoutSpacing4(const QProxyStyle* self, int control1, int control2, int orientation, QStyleOption* option);
int QProxyStyle_LayoutSpacing5(const QProxyStyle* self, int control1, int control2, int orientation, QStyleOption* option, QWidget* widget);
QIcon* QProxyStyle_StandardIcon2(const QProxyStyle* self, int standardIcon, QStyleOption* option);
QIcon* QProxyStyle_StandardIcon3(const QProxyStyle* self, int standardIcon, QStyleOption* option, QWidget* widget);
QPixmap* QProxyStyle_StandardPixmap3(const QProxyStyle* self, int standardPixmap, QStyleOption* opt, QWidget* widget);
void QProxyStyle_Delete(QProxyStyle* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
