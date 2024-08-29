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
class QIcon;
class QMetaObject;
class QPainter;
class QPalette;
class QPixmap;
class QPoint;
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
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QStyle QStyle;
typedef struct QStyleHintReturn QStyleHintReturn;
typedef struct QStyleOption QStyleOption;
typedef struct QStyleOptionComplex QStyleOptionComplex;
typedef struct QWidget QWidget;
#endif

QMetaObject* QStyle_MetaObject(QStyle* self);
void QStyle_Tr(const char* s, char** _out, int* _out_Strlen);
void QStyle_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QStyle_Polish(QStyle* self, QWidget* widget);
void QStyle_Unpolish(QStyle* self, QWidget* widget);
void QStyle_PolishWithApplication(QStyle* self, QApplication* application);
void QStyle_UnpolishWithApplication(QStyle* self, QApplication* application);
void QStyle_PolishWithPalette(QStyle* self, QPalette* palette);
QRect* QStyle_ItemTextRect(QStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, const char* text, size_t text_Strlen);
QRect* QStyle_ItemPixmapRect(QStyle* self, QRect* r, int flags, QPixmap* pixmap);
void QStyle_DrawItemText(QStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, const char* text, size_t text_Strlen);
void QStyle_DrawItemPixmap(QStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap);
QPalette* QStyle_StandardPalette(QStyle* self);
void QStyle_DrawPrimitive(QStyle* self, uintptr_t pe, QStyleOption* opt, QPainter* p);
void QStyle_DrawControl(QStyle* self, uintptr_t element, QStyleOption* opt, QPainter* p);
QRect* QStyle_SubElementRect(QStyle* self, uintptr_t subElement, QStyleOption* option);
void QStyle_DrawComplexControl(QStyle* self, uintptr_t cc, QStyleOptionComplex* opt, QPainter* p);
uintptr_t QStyle_HitTestComplexControl(QStyle* self, uintptr_t cc, QStyleOptionComplex* opt, QPoint* pt);
QRect* QStyle_SubControlRect(QStyle* self, uintptr_t cc, QStyleOptionComplex* opt, uintptr_t sc);
int QStyle_PixelMetric(QStyle* self, uintptr_t metric);
QSize* QStyle_SizeFromContents(QStyle* self, uintptr_t ct, QStyleOption* opt, QSize* contentsSize);
int QStyle_StyleHint(QStyle* self, uintptr_t stylehint);
QPixmap* QStyle_StandardPixmap(QStyle* self, uintptr_t standardPixmap);
QIcon* QStyle_StandardIcon(QStyle* self, uintptr_t standardIcon);
QPixmap* QStyle_GeneratedIconPixmap(QStyle* self, uintptr_t iconMode, QPixmap* pixmap, QStyleOption* opt);
QRect* QStyle_VisualRect(uintptr_t direction, QRect* boundingRect, QRect* logicalRect);
QPoint* QStyle_VisualPos(uintptr_t direction, QRect* boundingRect, QPoint* logicalPos);
int QStyle_SliderPositionFromValue(int min, int max, int val, int space);
int QStyle_SliderValueFromPosition(int min, int max, int pos, int space);
int QStyle_VisualAlignment(uintptr_t direction, int alignment);
QRect* QStyle_AlignedRect(uintptr_t direction, int alignment, QSize* size, QRect* rectangle);
int QStyle_LayoutSpacing(QStyle* self, uintptr_t control1, uintptr_t control2, uintptr_t orientation);
int QStyle_CombinedLayoutSpacing(QStyle* self, int controls1, int controls2, uintptr_t orientation);
QStyle* QStyle_Proxy(QStyle* self);
void QStyle_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QStyle_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QStyle_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QStyle_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QStyle_DrawItemText7(QStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, const char* text, size_t text_Strlen, uintptr_t textRole);
void QStyle_DrawPrimitive4(QStyle* self, uintptr_t pe, QStyleOption* opt, QPainter* p, QWidget* w);
void QStyle_DrawControl4(QStyle* self, uintptr_t element, QStyleOption* opt, QPainter* p, QWidget* w);
QRect* QStyle_SubElementRect3(QStyle* self, uintptr_t subElement, QStyleOption* option, QWidget* widget);
void QStyle_DrawComplexControl4(QStyle* self, uintptr_t cc, QStyleOptionComplex* opt, QPainter* p, QWidget* widget);
uintptr_t QStyle_HitTestComplexControl4(QStyle* self, uintptr_t cc, QStyleOptionComplex* opt, QPoint* pt, QWidget* widget);
QRect* QStyle_SubControlRect4(QStyle* self, uintptr_t cc, QStyleOptionComplex* opt, uintptr_t sc, QWidget* widget);
int QStyle_PixelMetric2(QStyle* self, uintptr_t metric, QStyleOption* option);
int QStyle_PixelMetric3(QStyle* self, uintptr_t metric, QStyleOption* option, QWidget* widget);
QSize* QStyle_SizeFromContents4(QStyle* self, uintptr_t ct, QStyleOption* opt, QSize* contentsSize, QWidget* w);
int QStyle_StyleHint2(QStyle* self, uintptr_t stylehint, QStyleOption* opt);
int QStyle_StyleHint3(QStyle* self, uintptr_t stylehint, QStyleOption* opt, QWidget* widget);
int QStyle_StyleHint4(QStyle* self, uintptr_t stylehint, QStyleOption* opt, QWidget* widget, QStyleHintReturn* returnData);
QPixmap* QStyle_StandardPixmap2(QStyle* self, uintptr_t standardPixmap, QStyleOption* opt);
QPixmap* QStyle_StandardPixmap3(QStyle* self, uintptr_t standardPixmap, QStyleOption* opt, QWidget* widget);
QIcon* QStyle_StandardIcon2(QStyle* self, uintptr_t standardIcon, QStyleOption* option);
QIcon* QStyle_StandardIcon3(QStyle* self, uintptr_t standardIcon, QStyleOption* option, QWidget* widget);
int QStyle_SliderPositionFromValue5(int min, int max, int val, int space, bool upsideDown);
int QStyle_SliderValueFromPosition5(int min, int max, int pos, int space, bool upsideDown);
int QStyle_LayoutSpacing4(QStyle* self, uintptr_t control1, uintptr_t control2, uintptr_t orientation, QStyleOption* option);
int QStyle_LayoutSpacing5(QStyle* self, uintptr_t control1, uintptr_t control2, uintptr_t orientation, QStyleOption* option, QWidget* widget);
int QStyle_CombinedLayoutSpacing4(QStyle* self, int controls1, int controls2, uintptr_t orientation, QStyleOption* option);
int QStyle_CombinedLayoutSpacing5(QStyle* self, int controls1, int controls2, uintptr_t orientation, QStyleOption* option, QWidget* widget);
void QStyle_Delete(QStyle* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
