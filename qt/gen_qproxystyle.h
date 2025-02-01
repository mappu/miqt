#pragma once
#ifndef MIQT_QT_GEN_QPROXYSTYLE_H
#define MIQT_QT_GEN_QPROXYSTYLE_H

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
class QChildEvent;
class QCommonStyle;
class QEvent;
class QFontMetrics;
class QIcon;
class QMetaMethod;
class QMetaObject;
class QObject;
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
class QTimerEvent;
class QWidget;
#else
typedef struct QApplication QApplication;
typedef struct QChildEvent QChildEvent;
typedef struct QCommonStyle QCommonStyle;
typedef struct QEvent QEvent;
typedef struct QFontMetrics QFontMetrics;
typedef struct QIcon QIcon;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
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
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QProxyStyle* QProxyStyle_new();
QProxyStyle* QProxyStyle_new2(struct miqt_string key);
QProxyStyle* QProxyStyle_new3(QStyle* style);
void QProxyStyle_virtbase(QProxyStyle* src, QCommonStyle** outptr_QCommonStyle);
QMetaObject* QProxyStyle_metaObject(const QProxyStyle* self);
void* QProxyStyle_metacast(QProxyStyle* self, const char* param1);
struct miqt_string QProxyStyle_tr(const char* s);
struct miqt_string QProxyStyle_trUtf8(const char* s);
QStyle* QProxyStyle_baseStyle(const QProxyStyle* self);
void QProxyStyle_setBaseStyle(QProxyStyle* self, QStyle* style);
void QProxyStyle_drawPrimitive(const QProxyStyle* self, int element, QStyleOption* option, QPainter* painter, QWidget* widget);
void QProxyStyle_drawControl(const QProxyStyle* self, int element, QStyleOption* option, QPainter* painter, QWidget* widget);
void QProxyStyle_drawComplexControl(const QProxyStyle* self, int control, QStyleOptionComplex* option, QPainter* painter, QWidget* widget);
void QProxyStyle_drawItemText(const QProxyStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, struct miqt_string text, int textRole);
void QProxyStyle_drawItemPixmap(const QProxyStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap);
QSize* QProxyStyle_sizeFromContents(const QProxyStyle* self, int type, QStyleOption* option, QSize* size, QWidget* widget);
QRect* QProxyStyle_subElementRect(const QProxyStyle* self, int element, QStyleOption* option, QWidget* widget);
QRect* QProxyStyle_subControlRect(const QProxyStyle* self, int cc, QStyleOptionComplex* opt, int sc, QWidget* widget);
QRect* QProxyStyle_itemTextRect(const QProxyStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, struct miqt_string text);
QRect* QProxyStyle_itemPixmapRect(const QProxyStyle* self, QRect* r, int flags, QPixmap* pixmap);
int QProxyStyle_hitTestComplexControl(const QProxyStyle* self, int control, QStyleOptionComplex* option, QPoint* pos, QWidget* widget);
int QProxyStyle_styleHint(const QProxyStyle* self, int hint, QStyleOption* option, QWidget* widget, QStyleHintReturn* returnData);
int QProxyStyle_pixelMetric(const QProxyStyle* self, int metric, QStyleOption* option, QWidget* widget);
int QProxyStyle_layoutSpacing(const QProxyStyle* self, int control1, int control2, int orientation, QStyleOption* option, QWidget* widget);
QIcon* QProxyStyle_standardIcon(const QProxyStyle* self, int standardIcon, QStyleOption* option, QWidget* widget);
QPixmap* QProxyStyle_standardPixmap(const QProxyStyle* self, int standardPixmap, QStyleOption* opt, QWidget* widget);
QPixmap* QProxyStyle_generatedIconPixmap(const QProxyStyle* self, int iconMode, QPixmap* pixmap, QStyleOption* opt);
QPalette* QProxyStyle_standardPalette(const QProxyStyle* self);
void QProxyStyle_polish(QProxyStyle* self, QWidget* widget);
void QProxyStyle_polishWithPal(QProxyStyle* self, QPalette* pal);
void QProxyStyle_polishWithApp(QProxyStyle* self, QApplication* app);
void QProxyStyle_unpolish(QProxyStyle* self, QWidget* widget);
void QProxyStyle_unpolishWithApp(QProxyStyle* self, QApplication* app);
bool QProxyStyle_event(QProxyStyle* self, QEvent* e);
struct miqt_string QProxyStyle_tr2(const char* s, const char* c);
struct miqt_string QProxyStyle_tr3(const char* s, const char* c, int n);
struct miqt_string QProxyStyle_trUtf82(const char* s, const char* c);
struct miqt_string QProxyStyle_trUtf83(const char* s, const char* c, int n);
bool QProxyStyle_override_virtual_drawPrimitive(void* self, intptr_t slot);
void QProxyStyle_virtualbase_drawPrimitive(const void* self, int element, QStyleOption* option, QPainter* painter, QWidget* widget);
bool QProxyStyle_override_virtual_drawControl(void* self, intptr_t slot);
void QProxyStyle_virtualbase_drawControl(const void* self, int element, QStyleOption* option, QPainter* painter, QWidget* widget);
bool QProxyStyle_override_virtual_drawComplexControl(void* self, intptr_t slot);
void QProxyStyle_virtualbase_drawComplexControl(const void* self, int control, QStyleOptionComplex* option, QPainter* painter, QWidget* widget);
bool QProxyStyle_override_virtual_drawItemText(void* self, intptr_t slot);
void QProxyStyle_virtualbase_drawItemText(const void* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, struct miqt_string text, int textRole);
bool QProxyStyle_override_virtual_drawItemPixmap(void* self, intptr_t slot);
void QProxyStyle_virtualbase_drawItemPixmap(const void* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap);
bool QProxyStyle_override_virtual_sizeFromContents(void* self, intptr_t slot);
QSize* QProxyStyle_virtualbase_sizeFromContents(const void* self, int type, QStyleOption* option, QSize* size, QWidget* widget);
bool QProxyStyle_override_virtual_subElementRect(void* self, intptr_t slot);
QRect* QProxyStyle_virtualbase_subElementRect(const void* self, int element, QStyleOption* option, QWidget* widget);
bool QProxyStyle_override_virtual_subControlRect(void* self, intptr_t slot);
QRect* QProxyStyle_virtualbase_subControlRect(const void* self, int cc, QStyleOptionComplex* opt, int sc, QWidget* widget);
bool QProxyStyle_override_virtual_itemTextRect(void* self, intptr_t slot);
QRect* QProxyStyle_virtualbase_itemTextRect(const void* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, struct miqt_string text);
bool QProxyStyle_override_virtual_itemPixmapRect(void* self, intptr_t slot);
QRect* QProxyStyle_virtualbase_itemPixmapRect(const void* self, QRect* r, int flags, QPixmap* pixmap);
bool QProxyStyle_override_virtual_hitTestComplexControl(void* self, intptr_t slot);
int QProxyStyle_virtualbase_hitTestComplexControl(const void* self, int control, QStyleOptionComplex* option, QPoint* pos, QWidget* widget);
bool QProxyStyle_override_virtual_styleHint(void* self, intptr_t slot);
int QProxyStyle_virtualbase_styleHint(const void* self, int hint, QStyleOption* option, QWidget* widget, QStyleHintReturn* returnData);
bool QProxyStyle_override_virtual_pixelMetric(void* self, intptr_t slot);
int QProxyStyle_virtualbase_pixelMetric(const void* self, int metric, QStyleOption* option, QWidget* widget);
bool QProxyStyle_override_virtual_layoutSpacing(void* self, intptr_t slot);
int QProxyStyle_virtualbase_layoutSpacing(const void* self, int control1, int control2, int orientation, QStyleOption* option, QWidget* widget);
bool QProxyStyle_override_virtual_standardIcon(void* self, intptr_t slot);
QIcon* QProxyStyle_virtualbase_standardIcon(const void* self, int standardIcon, QStyleOption* option, QWidget* widget);
bool QProxyStyle_override_virtual_standardPixmap(void* self, intptr_t slot);
QPixmap* QProxyStyle_virtualbase_standardPixmap(const void* self, int standardPixmap, QStyleOption* opt, QWidget* widget);
bool QProxyStyle_override_virtual_generatedIconPixmap(void* self, intptr_t slot);
QPixmap* QProxyStyle_virtualbase_generatedIconPixmap(const void* self, int iconMode, QPixmap* pixmap, QStyleOption* opt);
bool QProxyStyle_override_virtual_standardPalette(void* self, intptr_t slot);
QPalette* QProxyStyle_virtualbase_standardPalette(const void* self);
bool QProxyStyle_override_virtual_polish(void* self, intptr_t slot);
void QProxyStyle_virtualbase_polish(void* self, QWidget* widget);
bool QProxyStyle_override_virtual_polishWithPal(void* self, intptr_t slot);
void QProxyStyle_virtualbase_polishWithPal(void* self, QPalette* pal);
bool QProxyStyle_override_virtual_polishWithApp(void* self, intptr_t slot);
void QProxyStyle_virtualbase_polishWithApp(void* self, QApplication* app);
bool QProxyStyle_override_virtual_unpolish(void* self, intptr_t slot);
void QProxyStyle_virtualbase_unpolish(void* self, QWidget* widget);
bool QProxyStyle_override_virtual_unpolishWithApp(void* self, intptr_t slot);
void QProxyStyle_virtualbase_unpolishWithApp(void* self, QApplication* app);
bool QProxyStyle_override_virtual_event(void* self, intptr_t slot);
bool QProxyStyle_virtualbase_event(void* self, QEvent* e);
bool QProxyStyle_override_virtual_eventFilter(void* self, intptr_t slot);
bool QProxyStyle_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QProxyStyle_override_virtual_timerEvent(void* self, intptr_t slot);
void QProxyStyle_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QProxyStyle_override_virtual_childEvent(void* self, intptr_t slot);
void QProxyStyle_virtualbase_childEvent(void* self, QChildEvent* event);
bool QProxyStyle_override_virtual_customEvent(void* self, intptr_t slot);
void QProxyStyle_virtualbase_customEvent(void* self, QEvent* event);
bool QProxyStyle_override_virtual_connectNotify(void* self, intptr_t slot);
void QProxyStyle_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QProxyStyle_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QProxyStyle_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QProxyStyle_delete(QProxyStyle* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
