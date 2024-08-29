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
QProxyStyle* QProxyStyle_new2(const char* key, size_t key_Strlen);
QProxyStyle* QProxyStyle_new3(QStyle* style);
QMetaObject* QProxyStyle_MetaObject(QProxyStyle* self);
void QProxyStyle_Tr(const char* s, char** _out, int* _out_Strlen);
void QProxyStyle_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QStyle* QProxyStyle_BaseStyle(QProxyStyle* self);
void QProxyStyle_SetBaseStyle(QProxyStyle* self, QStyle* style);
void QProxyStyle_DrawPrimitive(QProxyStyle* self, uintptr_t element, QStyleOption* option, QPainter* painter);
void QProxyStyle_DrawControl(QProxyStyle* self, uintptr_t element, QStyleOption* option, QPainter* painter);
void QProxyStyle_DrawComplexControl(QProxyStyle* self, uintptr_t control, QStyleOptionComplex* option, QPainter* painter);
void QProxyStyle_DrawItemText(QProxyStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, const char* text, size_t text_Strlen);
void QProxyStyle_DrawItemPixmap(QProxyStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap);
QSize* QProxyStyle_SizeFromContents(QProxyStyle* self, uintptr_t typeVal, QStyleOption* option, QSize* size, QWidget* widget);
QRect* QProxyStyle_SubElementRect(QProxyStyle* self, uintptr_t element, QStyleOption* option, QWidget* widget);
QRect* QProxyStyle_SubControlRect(QProxyStyle* self, uintptr_t cc, QStyleOptionComplex* opt, uintptr_t sc, QWidget* widget);
QRect* QProxyStyle_ItemTextRect(QProxyStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, const char* text, size_t text_Strlen);
QRect* QProxyStyle_ItemPixmapRect(QProxyStyle* self, QRect* r, int flags, QPixmap* pixmap);
uintptr_t QProxyStyle_HitTestComplexControl(QProxyStyle* self, uintptr_t control, QStyleOptionComplex* option, QPoint* pos);
int QProxyStyle_StyleHint(QProxyStyle* self, uintptr_t hint);
int QProxyStyle_PixelMetric(QProxyStyle* self, uintptr_t metric);
int QProxyStyle_LayoutSpacing(QProxyStyle* self, uintptr_t control1, uintptr_t control2, uintptr_t orientation);
QIcon* QProxyStyle_StandardIcon(QProxyStyle* self, uintptr_t standardIcon);
QPixmap* QProxyStyle_StandardPixmap(QProxyStyle* self, uintptr_t standardPixmap, QStyleOption* opt);
QPixmap* QProxyStyle_GeneratedIconPixmap(QProxyStyle* self, uintptr_t iconMode, QPixmap* pixmap, QStyleOption* opt);
QPalette* QProxyStyle_StandardPalette(QProxyStyle* self);
void QProxyStyle_Polish(QProxyStyle* self, QWidget* widget);
void QProxyStyle_PolishWithPal(QProxyStyle* self, QPalette* pal);
void QProxyStyle_PolishWithApp(QProxyStyle* self, QApplication* app);
void QProxyStyle_Unpolish(QProxyStyle* self, QWidget* widget);
void QProxyStyle_UnpolishWithApp(QProxyStyle* self, QApplication* app);
void QProxyStyle_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QProxyStyle_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QProxyStyle_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QProxyStyle_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QProxyStyle_DrawPrimitive4(QProxyStyle* self, uintptr_t element, QStyleOption* option, QPainter* painter, QWidget* widget);
void QProxyStyle_DrawControl4(QProxyStyle* self, uintptr_t element, QStyleOption* option, QPainter* painter, QWidget* widget);
void QProxyStyle_DrawComplexControl4(QProxyStyle* self, uintptr_t control, QStyleOptionComplex* option, QPainter* painter, QWidget* widget);
void QProxyStyle_DrawItemText7(QProxyStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, const char* text, size_t text_Strlen, uintptr_t textRole);
uintptr_t QProxyStyle_HitTestComplexControl4(QProxyStyle* self, uintptr_t control, QStyleOptionComplex* option, QPoint* pos, QWidget* widget);
int QProxyStyle_StyleHint2(QProxyStyle* self, uintptr_t hint, QStyleOption* option);
int QProxyStyle_StyleHint3(QProxyStyle* self, uintptr_t hint, QStyleOption* option, QWidget* widget);
int QProxyStyle_StyleHint4(QProxyStyle* self, uintptr_t hint, QStyleOption* option, QWidget* widget, QStyleHintReturn* returnData);
int QProxyStyle_PixelMetric2(QProxyStyle* self, uintptr_t metric, QStyleOption* option);
int QProxyStyle_PixelMetric3(QProxyStyle* self, uintptr_t metric, QStyleOption* option, QWidget* widget);
int QProxyStyle_LayoutSpacing4(QProxyStyle* self, uintptr_t control1, uintptr_t control2, uintptr_t orientation, QStyleOption* option);
int QProxyStyle_LayoutSpacing5(QProxyStyle* self, uintptr_t control1, uintptr_t control2, uintptr_t orientation, QStyleOption* option, QWidget* widget);
QIcon* QProxyStyle_StandardIcon2(QProxyStyle* self, uintptr_t standardIcon, QStyleOption* option);
QIcon* QProxyStyle_StandardIcon3(QProxyStyle* self, uintptr_t standardIcon, QStyleOption* option, QWidget* widget);
QPixmap* QProxyStyle_StandardPixmap3(QProxyStyle* self, uintptr_t standardPixmap, QStyleOption* opt, QWidget* widget);
void QProxyStyle_Delete(QProxyStyle* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
