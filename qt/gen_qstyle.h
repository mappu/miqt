#ifndef GEN_QSTYLE_H
#define GEN_QSTYLE_H

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

QMetaObject* QStyle_MetaObject(const QStyle* self);
void* QStyle_Metacast(QStyle* self, const char* param1);
struct miqt_string* QStyle_Tr(const char* s);
struct miqt_string* QStyle_TrUtf8(const char* s);
void QStyle_Polish(QStyle* self, QWidget* widget);
void QStyle_Unpolish(QStyle* self, QWidget* widget);
void QStyle_PolishWithApplication(QStyle* self, QApplication* application);
void QStyle_UnpolishWithApplication(QStyle* self, QApplication* application);
void QStyle_PolishWithPalette(QStyle* self, QPalette* palette);
QRect* QStyle_ItemTextRect(const QStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, struct miqt_string* text);
QRect* QStyle_ItemPixmapRect(const QStyle* self, QRect* r, int flags, QPixmap* pixmap);
void QStyle_DrawItemText(const QStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, struct miqt_string* text);
void QStyle_DrawItemPixmap(const QStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap);
QPalette* QStyle_StandardPalette(const QStyle* self);
void QStyle_DrawPrimitive(const QStyle* self, int pe, QStyleOption* opt, QPainter* p);
void QStyle_DrawControl(const QStyle* self, int element, QStyleOption* opt, QPainter* p);
QRect* QStyle_SubElementRect(const QStyle* self, int subElement, QStyleOption* option);
void QStyle_DrawComplexControl(const QStyle* self, int cc, QStyleOptionComplex* opt, QPainter* p);
int QStyle_HitTestComplexControl(const QStyle* self, int cc, QStyleOptionComplex* opt, QPoint* pt);
QRect* QStyle_SubControlRect(const QStyle* self, int cc, QStyleOptionComplex* opt, int sc);
int QStyle_PixelMetric(const QStyle* self, int metric);
QSize* QStyle_SizeFromContents(const QStyle* self, int ct, QStyleOption* opt, QSize* contentsSize);
int QStyle_StyleHint(const QStyle* self, int stylehint);
QPixmap* QStyle_StandardPixmap(const QStyle* self, int standardPixmap);
QIcon* QStyle_StandardIcon(const QStyle* self, int standardIcon);
QPixmap* QStyle_GeneratedIconPixmap(const QStyle* self, int iconMode, QPixmap* pixmap, QStyleOption* opt);
QRect* QStyle_VisualRect(int direction, QRect* boundingRect, QRect* logicalRect);
QPoint* QStyle_VisualPos(int direction, QRect* boundingRect, QPoint* logicalPos);
int QStyle_SliderPositionFromValue(int min, int max, int val, int space);
int QStyle_SliderValueFromPosition(int min, int max, int pos, int space);
int QStyle_VisualAlignment(int direction, int alignment);
QRect* QStyle_AlignedRect(int direction, int alignment, QSize* size, QRect* rectangle);
int QStyle_LayoutSpacing(const QStyle* self, int control1, int control2, int orientation);
int QStyle_CombinedLayoutSpacing(const QStyle* self, int controls1, int controls2, int orientation);
QStyle* QStyle_Proxy(const QStyle* self);
struct miqt_string* QStyle_Tr2(const char* s, const char* c);
struct miqt_string* QStyle_Tr3(const char* s, const char* c, int n);
struct miqt_string* QStyle_TrUtf82(const char* s, const char* c);
struct miqt_string* QStyle_TrUtf83(const char* s, const char* c, int n);
void QStyle_DrawItemText7(const QStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, struct miqt_string* text, int textRole);
void QStyle_DrawPrimitive4(const QStyle* self, int pe, QStyleOption* opt, QPainter* p, QWidget* w);
void QStyle_DrawControl4(const QStyle* self, int element, QStyleOption* opt, QPainter* p, QWidget* w);
QRect* QStyle_SubElementRect3(const QStyle* self, int subElement, QStyleOption* option, QWidget* widget);
void QStyle_DrawComplexControl4(const QStyle* self, int cc, QStyleOptionComplex* opt, QPainter* p, QWidget* widget);
int QStyle_HitTestComplexControl4(const QStyle* self, int cc, QStyleOptionComplex* opt, QPoint* pt, QWidget* widget);
QRect* QStyle_SubControlRect4(const QStyle* self, int cc, QStyleOptionComplex* opt, int sc, QWidget* widget);
int QStyle_PixelMetric2(const QStyle* self, int metric, QStyleOption* option);
int QStyle_PixelMetric3(const QStyle* self, int metric, QStyleOption* option, QWidget* widget);
QSize* QStyle_SizeFromContents4(const QStyle* self, int ct, QStyleOption* opt, QSize* contentsSize, QWidget* w);
int QStyle_StyleHint2(const QStyle* self, int stylehint, QStyleOption* opt);
int QStyle_StyleHint3(const QStyle* self, int stylehint, QStyleOption* opt, QWidget* widget);
int QStyle_StyleHint4(const QStyle* self, int stylehint, QStyleOption* opt, QWidget* widget, QStyleHintReturn* returnData);
QPixmap* QStyle_StandardPixmap2(const QStyle* self, int standardPixmap, QStyleOption* opt);
QPixmap* QStyle_StandardPixmap3(const QStyle* self, int standardPixmap, QStyleOption* opt, QWidget* widget);
QIcon* QStyle_StandardIcon2(const QStyle* self, int standardIcon, QStyleOption* option);
QIcon* QStyle_StandardIcon3(const QStyle* self, int standardIcon, QStyleOption* option, QWidget* widget);
int QStyle_SliderPositionFromValue5(int min, int max, int val, int space, bool upsideDown);
int QStyle_SliderValueFromPosition5(int min, int max, int pos, int space, bool upsideDown);
int QStyle_LayoutSpacing4(const QStyle* self, int control1, int control2, int orientation, QStyleOption* option);
int QStyle_LayoutSpacing5(const QStyle* self, int control1, int control2, int orientation, QStyleOption* option, QWidget* widget);
int QStyle_CombinedLayoutSpacing4(const QStyle* self, int controls1, int controls2, int orientation, QStyleOption* option);
int QStyle_CombinedLayoutSpacing5(const QStyle* self, int controls1, int controls2, int orientation, QStyleOption* option, QWidget* widget);
void QStyle_Delete(QStyle* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
