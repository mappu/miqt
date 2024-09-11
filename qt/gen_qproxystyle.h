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
QMetaObject* QProxyStyle_MetaObject(const QProxyStyle* self);
void QProxyStyle_Tr(const char* s, char** _out, int* _out_Strlen);
void QProxyStyle_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QStyle* QProxyStyle_BaseStyle(const QProxyStyle* self);
void QProxyStyle_SetBaseStyle(QProxyStyle* self, QStyle* style);
void QProxyStyle_DrawPrimitive(const QProxyStyle* self, uintptr_t element, QStyleOption* option, QPainter* painter);
void QProxyStyle_DrawControl(const QProxyStyle* self, uintptr_t element, QStyleOption* option, QPainter* painter);
void QProxyStyle_DrawComplexControl(const QProxyStyle* self, uintptr_t control, QStyleOptionComplex* option, QPainter* painter);
void QProxyStyle_DrawItemText(const QProxyStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, const char* text, size_t text_Strlen);
void QProxyStyle_DrawItemPixmap(const QProxyStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap);
QSize* QProxyStyle_SizeFromContents(const QProxyStyle* self, uintptr_t typeVal, QStyleOption* option, QSize* size, QWidget* widget);
QRect* QProxyStyle_SubElementRect(const QProxyStyle* self, uintptr_t element, QStyleOption* option, QWidget* widget);
QRect* QProxyStyle_SubControlRect(const QProxyStyle* self, uintptr_t cc, QStyleOptionComplex* opt, uintptr_t sc, QWidget* widget);
QRect* QProxyStyle_ItemTextRect(const QProxyStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, const char* text, size_t text_Strlen);
QRect* QProxyStyle_ItemPixmapRect(const QProxyStyle* self, QRect* r, int flags, QPixmap* pixmap);
uintptr_t QProxyStyle_HitTestComplexControl(const QProxyStyle* self, uintptr_t control, QStyleOptionComplex* option, QPoint* pos);
int QProxyStyle_StyleHint(const QProxyStyle* self, uintptr_t hint);
int QProxyStyle_PixelMetric(const QProxyStyle* self, uintptr_t metric);
int QProxyStyle_LayoutSpacing(const QProxyStyle* self, uintptr_t control1, uintptr_t control2, uintptr_t orientation);
QIcon* QProxyStyle_StandardIcon(const QProxyStyle* self, uintptr_t standardIcon);
QPixmap* QProxyStyle_StandardPixmap(const QProxyStyle* self, uintptr_t standardPixmap, QStyleOption* opt);
QPixmap* QProxyStyle_GeneratedIconPixmap(const QProxyStyle* self, uintptr_t iconMode, QPixmap* pixmap, QStyleOption* opt);
QPalette* QProxyStyle_StandardPalette(const QProxyStyle* self);
void QProxyStyle_Polish(QProxyStyle* self, QWidget* widget);
void QProxyStyle_PolishWithPal(QProxyStyle* self, QPalette* pal);
void QProxyStyle_PolishWithApp(QProxyStyle* self, QApplication* app);
void QProxyStyle_Unpolish(QProxyStyle* self, QWidget* widget);
void QProxyStyle_UnpolishWithApp(QProxyStyle* self, QApplication* app);
void QProxyStyle_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QProxyStyle_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QProxyStyle_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QProxyStyle_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QProxyStyle_DrawPrimitive4(const QProxyStyle* self, uintptr_t element, QStyleOption* option, QPainter* painter, QWidget* widget);
void QProxyStyle_DrawControl4(const QProxyStyle* self, uintptr_t element, QStyleOption* option, QPainter* painter, QWidget* widget);
void QProxyStyle_DrawComplexControl4(const QProxyStyle* self, uintptr_t control, QStyleOptionComplex* option, QPainter* painter, QWidget* widget);
void QProxyStyle_DrawItemText7(const QProxyStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, const char* text, size_t text_Strlen, uintptr_t textRole);
uintptr_t QProxyStyle_HitTestComplexControl4(const QProxyStyle* self, uintptr_t control, QStyleOptionComplex* option, QPoint* pos, QWidget* widget);
int QProxyStyle_StyleHint2(const QProxyStyle* self, uintptr_t hint, QStyleOption* option);
int QProxyStyle_StyleHint3(const QProxyStyle* self, uintptr_t hint, QStyleOption* option, QWidget* widget);
int QProxyStyle_StyleHint4(const QProxyStyle* self, uintptr_t hint, QStyleOption* option, QWidget* widget, QStyleHintReturn* returnData);
int QProxyStyle_PixelMetric2(const QProxyStyle* self, uintptr_t metric, QStyleOption* option);
int QProxyStyle_PixelMetric3(const QProxyStyle* self, uintptr_t metric, QStyleOption* option, QWidget* widget);
int QProxyStyle_LayoutSpacing4(const QProxyStyle* self, uintptr_t control1, uintptr_t control2, uintptr_t orientation, QStyleOption* option);
int QProxyStyle_LayoutSpacing5(const QProxyStyle* self, uintptr_t control1, uintptr_t control2, uintptr_t orientation, QStyleOption* option, QWidget* widget);
QIcon* QProxyStyle_StandardIcon2(const QProxyStyle* self, uintptr_t standardIcon, QStyleOption* option);
QIcon* QProxyStyle_StandardIcon3(const QProxyStyle* self, uintptr_t standardIcon, QStyleOption* option, QWidget* widget);
QPixmap* QProxyStyle_StandardPixmap3(const QProxyStyle* self, uintptr_t standardPixmap, QStyleOption* opt, QWidget* widget);
void QProxyStyle_Delete(QProxyStyle* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
