#pragma once
#ifndef MIQT_QT_GEN_QCOMMONSTYLE_H
#define MIQT_QT_GEN_QCOMMONSTYLE_H

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
class QCommonStyle;
class QFontMetrics;
class QIcon;
class QMetaObject;
class QObject;
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
typedef struct QCommonStyle QCommonStyle;
typedef struct QFontMetrics QFontMetrics;
typedef struct QIcon QIcon;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
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

QCommonStyle* QCommonStyle_new();
void QCommonStyle_virtbase(QCommonStyle* src, QStyle** outptr_QStyle);
QMetaObject* QCommonStyle_MetaObject(const QCommonStyle* self);
void* QCommonStyle_Metacast(QCommonStyle* self, const char* param1);
struct miqt_string QCommonStyle_Tr(const char* s);
struct miqt_string QCommonStyle_TrUtf8(const char* s);
void QCommonStyle_DrawPrimitive(const QCommonStyle* self, int pe, QStyleOption* opt, QPainter* p, QWidget* w);
void QCommonStyle_DrawControl(const QCommonStyle* self, int element, QStyleOption* opt, QPainter* p, QWidget* w);
QRect* QCommonStyle_SubElementRect(const QCommonStyle* self, int r, QStyleOption* opt, QWidget* widget);
void QCommonStyle_DrawComplexControl(const QCommonStyle* self, int cc, QStyleOptionComplex* opt, QPainter* p, QWidget* w);
int QCommonStyle_HitTestComplexControl(const QCommonStyle* self, int cc, QStyleOptionComplex* opt, QPoint* pt, QWidget* w);
QRect* QCommonStyle_SubControlRect(const QCommonStyle* self, int cc, QStyleOptionComplex* opt, int sc, QWidget* w);
QSize* QCommonStyle_SizeFromContents(const QCommonStyle* self, int ct, QStyleOption* opt, QSize* contentsSize, QWidget* widget);
int QCommonStyle_PixelMetric(const QCommonStyle* self, int m, QStyleOption* opt, QWidget* widget);
int QCommonStyle_StyleHint(const QCommonStyle* self, int sh, QStyleOption* opt, QWidget* w, QStyleHintReturn* shret);
QIcon* QCommonStyle_StandardIcon(const QCommonStyle* self, int standardIcon, QStyleOption* opt, QWidget* widget);
QPixmap* QCommonStyle_StandardPixmap(const QCommonStyle* self, int sp, QStyleOption* opt, QWidget* widget);
QPixmap* QCommonStyle_GeneratedIconPixmap(const QCommonStyle* self, int iconMode, QPixmap* pixmap, QStyleOption* opt);
int QCommonStyle_LayoutSpacing(const QCommonStyle* self, int control1, int control2, int orientation, QStyleOption* option, QWidget* widget);
void QCommonStyle_Polish(QCommonStyle* self, QPalette* param1);
void QCommonStyle_PolishWithApp(QCommonStyle* self, QApplication* app);
void QCommonStyle_PolishWithWidget(QCommonStyle* self, QWidget* widget);
void QCommonStyle_Unpolish(QCommonStyle* self, QWidget* widget);
void QCommonStyle_UnpolishWithApplication(QCommonStyle* self, QApplication* application);
struct miqt_string QCommonStyle_Tr2(const char* s, const char* c);
struct miqt_string QCommonStyle_Tr3(const char* s, const char* c, int n);
struct miqt_string QCommonStyle_TrUtf82(const char* s, const char* c);
struct miqt_string QCommonStyle_TrUtf83(const char* s, const char* c, int n);
void QCommonStyle_override_virtual_DrawPrimitive(void* self, intptr_t slot);
void QCommonStyle_virtualbase_DrawPrimitive(const void* self, int pe, QStyleOption* opt, QPainter* p, QWidget* w);
void QCommonStyle_override_virtual_DrawControl(void* self, intptr_t slot);
void QCommonStyle_virtualbase_DrawControl(const void* self, int element, QStyleOption* opt, QPainter* p, QWidget* w);
void QCommonStyle_override_virtual_SubElementRect(void* self, intptr_t slot);
QRect* QCommonStyle_virtualbase_SubElementRect(const void* self, int r, QStyleOption* opt, QWidget* widget);
void QCommonStyle_override_virtual_DrawComplexControl(void* self, intptr_t slot);
void QCommonStyle_virtualbase_DrawComplexControl(const void* self, int cc, QStyleOptionComplex* opt, QPainter* p, QWidget* w);
void QCommonStyle_override_virtual_HitTestComplexControl(void* self, intptr_t slot);
int QCommonStyle_virtualbase_HitTestComplexControl(const void* self, int cc, QStyleOptionComplex* opt, QPoint* pt, QWidget* w);
void QCommonStyle_override_virtual_SubControlRect(void* self, intptr_t slot);
QRect* QCommonStyle_virtualbase_SubControlRect(const void* self, int cc, QStyleOptionComplex* opt, int sc, QWidget* w);
void QCommonStyle_override_virtual_SizeFromContents(void* self, intptr_t slot);
QSize* QCommonStyle_virtualbase_SizeFromContents(const void* self, int ct, QStyleOption* opt, QSize* contentsSize, QWidget* widget);
void QCommonStyle_override_virtual_PixelMetric(void* self, intptr_t slot);
int QCommonStyle_virtualbase_PixelMetric(const void* self, int m, QStyleOption* opt, QWidget* widget);
void QCommonStyle_override_virtual_StyleHint(void* self, intptr_t slot);
int QCommonStyle_virtualbase_StyleHint(const void* self, int sh, QStyleOption* opt, QWidget* w, QStyleHintReturn* shret);
void QCommonStyle_override_virtual_StandardIcon(void* self, intptr_t slot);
QIcon* QCommonStyle_virtualbase_StandardIcon(const void* self, int standardIcon, QStyleOption* opt, QWidget* widget);
void QCommonStyle_override_virtual_StandardPixmap(void* self, intptr_t slot);
QPixmap* QCommonStyle_virtualbase_StandardPixmap(const void* self, int sp, QStyleOption* opt, QWidget* widget);
void QCommonStyle_override_virtual_GeneratedIconPixmap(void* self, intptr_t slot);
QPixmap* QCommonStyle_virtualbase_GeneratedIconPixmap(const void* self, int iconMode, QPixmap* pixmap, QStyleOption* opt);
void QCommonStyle_override_virtual_LayoutSpacing(void* self, intptr_t slot);
int QCommonStyle_virtualbase_LayoutSpacing(const void* self, int control1, int control2, int orientation, QStyleOption* option, QWidget* widget);
void QCommonStyle_override_virtual_Polish(void* self, intptr_t slot);
void QCommonStyle_virtualbase_Polish(void* self, QPalette* param1);
void QCommonStyle_override_virtual_PolishWithApp(void* self, intptr_t slot);
void QCommonStyle_virtualbase_PolishWithApp(void* self, QApplication* app);
void QCommonStyle_override_virtual_PolishWithWidget(void* self, intptr_t slot);
void QCommonStyle_virtualbase_PolishWithWidget(void* self, QWidget* widget);
void QCommonStyle_override_virtual_Unpolish(void* self, intptr_t slot);
void QCommonStyle_virtualbase_Unpolish(void* self, QWidget* widget);
void QCommonStyle_override_virtual_UnpolishWithApplication(void* self, intptr_t slot);
void QCommonStyle_virtualbase_UnpolishWithApplication(void* self, QApplication* application);
void QCommonStyle_override_virtual_ItemTextRect(void* self, intptr_t slot);
QRect* QCommonStyle_virtualbase_ItemTextRect(const void* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, struct miqt_string text);
void QCommonStyle_override_virtual_ItemPixmapRect(void* self, intptr_t slot);
QRect* QCommonStyle_virtualbase_ItemPixmapRect(const void* self, QRect* r, int flags, QPixmap* pixmap);
void QCommonStyle_override_virtual_DrawItemText(void* self, intptr_t slot);
void QCommonStyle_virtualbase_DrawItemText(const void* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, struct miqt_string text, int textRole);
void QCommonStyle_override_virtual_DrawItemPixmap(void* self, intptr_t slot);
void QCommonStyle_virtualbase_DrawItemPixmap(const void* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap);
void QCommonStyle_override_virtual_StandardPalette(void* self, intptr_t slot);
QPalette* QCommonStyle_virtualbase_StandardPalette(const void* self);
void QCommonStyle_Delete(QCommonStyle* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
