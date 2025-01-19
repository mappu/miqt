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
QMetaObject* QProxyStyle_MetaObject(const QProxyStyle* self);
void* QProxyStyle_Metacast(QProxyStyle* self, const char* param1);
struct miqt_string QProxyStyle_Tr(const char* s);
struct miqt_string QProxyStyle_TrUtf8(const char* s);
QStyle* QProxyStyle_BaseStyle(const QProxyStyle* self);
void QProxyStyle_SetBaseStyle(QProxyStyle* self, QStyle* style);
void QProxyStyle_DrawPrimitive(const QProxyStyle* self, int element, QStyleOption* option, QPainter* painter, QWidget* widget);
void QProxyStyle_DrawControl(const QProxyStyle* self, int element, QStyleOption* option, QPainter* painter, QWidget* widget);
void QProxyStyle_DrawComplexControl(const QProxyStyle* self, int control, QStyleOptionComplex* option, QPainter* painter, QWidget* widget);
void QProxyStyle_DrawItemText(const QProxyStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, struct miqt_string text, int textRole);
void QProxyStyle_DrawItemPixmap(const QProxyStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap);
QSize* QProxyStyle_SizeFromContents(const QProxyStyle* self, int typeVal, QStyleOption* option, QSize* size, QWidget* widget);
QRect* QProxyStyle_SubElementRect(const QProxyStyle* self, int element, QStyleOption* option, QWidget* widget);
QRect* QProxyStyle_SubControlRect(const QProxyStyle* self, int cc, QStyleOptionComplex* opt, int sc, QWidget* widget);
QRect* QProxyStyle_ItemTextRect(const QProxyStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, struct miqt_string text);
QRect* QProxyStyle_ItemPixmapRect(const QProxyStyle* self, QRect* r, int flags, QPixmap* pixmap);
int QProxyStyle_HitTestComplexControl(const QProxyStyle* self, int control, QStyleOptionComplex* option, QPoint* pos, QWidget* widget);
int QProxyStyle_StyleHint(const QProxyStyle* self, int hint, QStyleOption* option, QWidget* widget, QStyleHintReturn* returnData);
int QProxyStyle_PixelMetric(const QProxyStyle* self, int metric, QStyleOption* option, QWidget* widget);
int QProxyStyle_LayoutSpacing(const QProxyStyle* self, int control1, int control2, int orientation, QStyleOption* option, QWidget* widget);
QIcon* QProxyStyle_StandardIcon(const QProxyStyle* self, int standardIcon, QStyleOption* option, QWidget* widget);
QPixmap* QProxyStyle_StandardPixmap(const QProxyStyle* self, int standardPixmap, QStyleOption* opt, QWidget* widget);
QPixmap* QProxyStyle_GeneratedIconPixmap(const QProxyStyle* self, int iconMode, QPixmap* pixmap, QStyleOption* opt);
QPalette* QProxyStyle_StandardPalette(const QProxyStyle* self);
void QProxyStyle_Polish(QProxyStyle* self, QWidget* widget);
void QProxyStyle_PolishWithPal(QProxyStyle* self, QPalette* pal);
void QProxyStyle_PolishWithApp(QProxyStyle* self, QApplication* app);
void QProxyStyle_Unpolish(QProxyStyle* self, QWidget* widget);
void QProxyStyle_UnpolishWithApp(QProxyStyle* self, QApplication* app);
bool QProxyStyle_Event(QProxyStyle* self, QEvent* e);
struct miqt_string QProxyStyle_Tr2(const char* s, const char* c);
struct miqt_string QProxyStyle_Tr3(const char* s, const char* c, int n);
struct miqt_string QProxyStyle_TrUtf82(const char* s, const char* c);
struct miqt_string QProxyStyle_TrUtf83(const char* s, const char* c, int n);
bool QProxyStyle_override_virtual_DrawPrimitive(void* self, intptr_t slot);
void QProxyStyle_virtualbase_DrawPrimitive(const void* self, int element, QStyleOption* option, QPainter* painter, QWidget* widget);
bool QProxyStyle_override_virtual_DrawControl(void* self, intptr_t slot);
void QProxyStyle_virtualbase_DrawControl(const void* self, int element, QStyleOption* option, QPainter* painter, QWidget* widget);
bool QProxyStyle_override_virtual_DrawComplexControl(void* self, intptr_t slot);
void QProxyStyle_virtualbase_DrawComplexControl(const void* self, int control, QStyleOptionComplex* option, QPainter* painter, QWidget* widget);
bool QProxyStyle_override_virtual_DrawItemText(void* self, intptr_t slot);
void QProxyStyle_virtualbase_DrawItemText(const void* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, struct miqt_string text, int textRole);
bool QProxyStyle_override_virtual_DrawItemPixmap(void* self, intptr_t slot);
void QProxyStyle_virtualbase_DrawItemPixmap(const void* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap);
bool QProxyStyle_override_virtual_SizeFromContents(void* self, intptr_t slot);
QSize* QProxyStyle_virtualbase_SizeFromContents(const void* self, int typeVal, QStyleOption* option, QSize* size, QWidget* widget);
bool QProxyStyle_override_virtual_SubElementRect(void* self, intptr_t slot);
QRect* QProxyStyle_virtualbase_SubElementRect(const void* self, int element, QStyleOption* option, QWidget* widget);
bool QProxyStyle_override_virtual_SubControlRect(void* self, intptr_t slot);
QRect* QProxyStyle_virtualbase_SubControlRect(const void* self, int cc, QStyleOptionComplex* opt, int sc, QWidget* widget);
bool QProxyStyle_override_virtual_ItemTextRect(void* self, intptr_t slot);
QRect* QProxyStyle_virtualbase_ItemTextRect(const void* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, struct miqt_string text);
bool QProxyStyle_override_virtual_ItemPixmapRect(void* self, intptr_t slot);
QRect* QProxyStyle_virtualbase_ItemPixmapRect(const void* self, QRect* r, int flags, QPixmap* pixmap);
bool QProxyStyle_override_virtual_HitTestComplexControl(void* self, intptr_t slot);
int QProxyStyle_virtualbase_HitTestComplexControl(const void* self, int control, QStyleOptionComplex* option, QPoint* pos, QWidget* widget);
bool QProxyStyle_override_virtual_StyleHint(void* self, intptr_t slot);
int QProxyStyle_virtualbase_StyleHint(const void* self, int hint, QStyleOption* option, QWidget* widget, QStyleHintReturn* returnData);
bool QProxyStyle_override_virtual_PixelMetric(void* self, intptr_t slot);
int QProxyStyle_virtualbase_PixelMetric(const void* self, int metric, QStyleOption* option, QWidget* widget);
bool QProxyStyle_override_virtual_LayoutSpacing(void* self, intptr_t slot);
int QProxyStyle_virtualbase_LayoutSpacing(const void* self, int control1, int control2, int orientation, QStyleOption* option, QWidget* widget);
bool QProxyStyle_override_virtual_StandardIcon(void* self, intptr_t slot);
QIcon* QProxyStyle_virtualbase_StandardIcon(const void* self, int standardIcon, QStyleOption* option, QWidget* widget);
bool QProxyStyle_override_virtual_StandardPixmap(void* self, intptr_t slot);
QPixmap* QProxyStyle_virtualbase_StandardPixmap(const void* self, int standardPixmap, QStyleOption* opt, QWidget* widget);
bool QProxyStyle_override_virtual_GeneratedIconPixmap(void* self, intptr_t slot);
QPixmap* QProxyStyle_virtualbase_GeneratedIconPixmap(const void* self, int iconMode, QPixmap* pixmap, QStyleOption* opt);
bool QProxyStyle_override_virtual_StandardPalette(void* self, intptr_t slot);
QPalette* QProxyStyle_virtualbase_StandardPalette(const void* self);
bool QProxyStyle_override_virtual_Polish(void* self, intptr_t slot);
void QProxyStyle_virtualbase_Polish(void* self, QWidget* widget);
bool QProxyStyle_override_virtual_PolishWithPal(void* self, intptr_t slot);
void QProxyStyle_virtualbase_PolishWithPal(void* self, QPalette* pal);
bool QProxyStyle_override_virtual_PolishWithApp(void* self, intptr_t slot);
void QProxyStyle_virtualbase_PolishWithApp(void* self, QApplication* app);
bool QProxyStyle_override_virtual_Unpolish(void* self, intptr_t slot);
void QProxyStyle_virtualbase_Unpolish(void* self, QWidget* widget);
bool QProxyStyle_override_virtual_UnpolishWithApp(void* self, intptr_t slot);
void QProxyStyle_virtualbase_UnpolishWithApp(void* self, QApplication* app);
bool QProxyStyle_override_virtual_Event(void* self, intptr_t slot);
bool QProxyStyle_virtualbase_Event(void* self, QEvent* e);
bool QProxyStyle_override_virtual_EventFilter(void* self, intptr_t slot);
bool QProxyStyle_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QProxyStyle_override_virtual_TimerEvent(void* self, intptr_t slot);
void QProxyStyle_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QProxyStyle_override_virtual_ChildEvent(void* self, intptr_t slot);
void QProxyStyle_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QProxyStyle_override_virtual_CustomEvent(void* self, intptr_t slot);
void QProxyStyle_virtualbase_CustomEvent(void* self, QEvent* event);
bool QProxyStyle_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QProxyStyle_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QProxyStyle_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QProxyStyle_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QProxyStyle_Delete(QProxyStyle* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
