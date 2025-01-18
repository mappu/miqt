#pragma once
#ifndef MIQT_QT6_GEN_QSTYLE_H
#define MIQT_QT6_GEN_QSTYLE_H

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
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QStyle QStyle;
typedef struct QStyleHintReturn QStyleHintReturn;
typedef struct QStyleOption QStyleOption;
typedef struct QStyleOptionComplex QStyleOptionComplex;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QStyle* QStyle_new();
void QStyle_virtbase(QStyle* src, QObject** outptr_QObject);
QMetaObject* QStyle_MetaObject(const QStyle* self);
void* QStyle_Metacast(QStyle* self, const char* param1);
struct miqt_string QStyle_Tr(const char* s);
struct miqt_string QStyle_Name(const QStyle* self);
void QStyle_Polish(QStyle* self, QWidget* widget);
void QStyle_Unpolish(QStyle* self, QWidget* widget);
void QStyle_PolishWithApplication(QStyle* self, QApplication* application);
void QStyle_UnpolishWithApplication(QStyle* self, QApplication* application);
void QStyle_PolishWithPalette(QStyle* self, QPalette* palette);
QRect* QStyle_ItemTextRect(const QStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, struct miqt_string text);
QRect* QStyle_ItemPixmapRect(const QStyle* self, QRect* r, int flags, QPixmap* pixmap);
void QStyle_DrawItemText(const QStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, struct miqt_string text, int textRole);
void QStyle_DrawItemPixmap(const QStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap);
QPalette* QStyle_StandardPalette(const QStyle* self);
void QStyle_DrawPrimitive(const QStyle* self, int pe, QStyleOption* opt, QPainter* p, QWidget* w);
void QStyle_DrawControl(const QStyle* self, int element, QStyleOption* opt, QPainter* p, QWidget* w);
QRect* QStyle_SubElementRect(const QStyle* self, int subElement, QStyleOption* option, QWidget* widget);
void QStyle_DrawComplexControl(const QStyle* self, int cc, QStyleOptionComplex* opt, QPainter* p, QWidget* widget);
int QStyle_HitTestComplexControl(const QStyle* self, int cc, QStyleOptionComplex* opt, QPoint* pt, QWidget* widget);
QRect* QStyle_SubControlRect(const QStyle* self, int cc, QStyleOptionComplex* opt, int sc, QWidget* widget);
int QStyle_PixelMetric(const QStyle* self, int metric, QStyleOption* option, QWidget* widget);
QSize* QStyle_SizeFromContents(const QStyle* self, int ct, QStyleOption* opt, QSize* contentsSize, QWidget* w);
int QStyle_StyleHint(const QStyle* self, int stylehint, QStyleOption* opt, QWidget* widget, QStyleHintReturn* returnData);
QPixmap* QStyle_StandardPixmap(const QStyle* self, int standardPixmap, QStyleOption* opt, QWidget* widget);
QIcon* QStyle_StandardIcon(const QStyle* self, int standardIcon, QStyleOption* option, QWidget* widget);
QPixmap* QStyle_GeneratedIconPixmap(const QStyle* self, int iconMode, QPixmap* pixmap, QStyleOption* opt);
QRect* QStyle_VisualRect(int direction, QRect* boundingRect, QRect* logicalRect);
QPoint* QStyle_VisualPos(int direction, QRect* boundingRect, QPoint* logicalPos);
int QStyle_SliderPositionFromValue(int min, int max, int val, int space);
int QStyle_SliderValueFromPosition(int min, int max, int pos, int space);
int QStyle_VisualAlignment(int direction, int alignment);
QRect* QStyle_AlignedRect(int direction, int alignment, QSize* size, QRect* rectangle);
int QStyle_LayoutSpacing(const QStyle* self, int control1, int control2, int orientation, QStyleOption* option, QWidget* widget);
int QStyle_CombinedLayoutSpacing(const QStyle* self, int controls1, int controls2, int orientation);
QStyle* QStyle_Proxy(const QStyle* self);
struct miqt_string QStyle_Tr2(const char* s, const char* c);
struct miqt_string QStyle_Tr3(const char* s, const char* c, int n);
int QStyle_SliderPositionFromValue5(int min, int max, int val, int space, bool upsideDown);
int QStyle_SliderValueFromPosition5(int min, int max, int pos, int space, bool upsideDown);
int QStyle_CombinedLayoutSpacing4(const QStyle* self, int controls1, int controls2, int orientation, QStyleOption* option);
int QStyle_CombinedLayoutSpacing5(const QStyle* self, int controls1, int controls2, int orientation, QStyleOption* option, QWidget* widget);
bool QStyle_override_virtual_Polish(void* self, intptr_t slot);
void QStyle_virtualbase_Polish(void* self, QWidget* widget);
bool QStyle_override_virtual_Unpolish(void* self, intptr_t slot);
void QStyle_virtualbase_Unpolish(void* self, QWidget* widget);
bool QStyle_override_virtual_PolishWithApplication(void* self, intptr_t slot);
void QStyle_virtualbase_PolishWithApplication(void* self, QApplication* application);
bool QStyle_override_virtual_UnpolishWithApplication(void* self, intptr_t slot);
void QStyle_virtualbase_UnpolishWithApplication(void* self, QApplication* application);
bool QStyle_override_virtual_PolishWithPalette(void* self, intptr_t slot);
void QStyle_virtualbase_PolishWithPalette(void* self, QPalette* palette);
bool QStyle_override_virtual_ItemTextRect(void* self, intptr_t slot);
QRect* QStyle_virtualbase_ItemTextRect(const void* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, struct miqt_string text);
bool QStyle_override_virtual_ItemPixmapRect(void* self, intptr_t slot);
QRect* QStyle_virtualbase_ItemPixmapRect(const void* self, QRect* r, int flags, QPixmap* pixmap);
bool QStyle_override_virtual_DrawItemText(void* self, intptr_t slot);
void QStyle_virtualbase_DrawItemText(const void* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, struct miqt_string text, int textRole);
bool QStyle_override_virtual_DrawItemPixmap(void* self, intptr_t slot);
void QStyle_virtualbase_DrawItemPixmap(const void* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap);
bool QStyle_override_virtual_StandardPalette(void* self, intptr_t slot);
QPalette* QStyle_virtualbase_StandardPalette(const void* self);
bool QStyle_override_virtual_DrawPrimitive(void* self, intptr_t slot);
void QStyle_virtualbase_DrawPrimitive(const void* self, int pe, QStyleOption* opt, QPainter* p, QWidget* w);
bool QStyle_override_virtual_DrawControl(void* self, intptr_t slot);
void QStyle_virtualbase_DrawControl(const void* self, int element, QStyleOption* opt, QPainter* p, QWidget* w);
bool QStyle_override_virtual_SubElementRect(void* self, intptr_t slot);
QRect* QStyle_virtualbase_SubElementRect(const void* self, int subElement, QStyleOption* option, QWidget* widget);
bool QStyle_override_virtual_DrawComplexControl(void* self, intptr_t slot);
void QStyle_virtualbase_DrawComplexControl(const void* self, int cc, QStyleOptionComplex* opt, QPainter* p, QWidget* widget);
bool QStyle_override_virtual_HitTestComplexControl(void* self, intptr_t slot);
int QStyle_virtualbase_HitTestComplexControl(const void* self, int cc, QStyleOptionComplex* opt, QPoint* pt, QWidget* widget);
bool QStyle_override_virtual_SubControlRect(void* self, intptr_t slot);
QRect* QStyle_virtualbase_SubControlRect(const void* self, int cc, QStyleOptionComplex* opt, int sc, QWidget* widget);
bool QStyle_override_virtual_PixelMetric(void* self, intptr_t slot);
int QStyle_virtualbase_PixelMetric(const void* self, int metric, QStyleOption* option, QWidget* widget);
bool QStyle_override_virtual_SizeFromContents(void* self, intptr_t slot);
QSize* QStyle_virtualbase_SizeFromContents(const void* self, int ct, QStyleOption* opt, QSize* contentsSize, QWidget* w);
bool QStyle_override_virtual_StyleHint(void* self, intptr_t slot);
int QStyle_virtualbase_StyleHint(const void* self, int stylehint, QStyleOption* opt, QWidget* widget, QStyleHintReturn* returnData);
bool QStyle_override_virtual_StandardPixmap(void* self, intptr_t slot);
QPixmap* QStyle_virtualbase_StandardPixmap(const void* self, int standardPixmap, QStyleOption* opt, QWidget* widget);
bool QStyle_override_virtual_StandardIcon(void* self, intptr_t slot);
QIcon* QStyle_virtualbase_StandardIcon(const void* self, int standardIcon, QStyleOption* option, QWidget* widget);
bool QStyle_override_virtual_GeneratedIconPixmap(void* self, intptr_t slot);
QPixmap* QStyle_virtualbase_GeneratedIconPixmap(const void* self, int iconMode, QPixmap* pixmap, QStyleOption* opt);
bool QStyle_override_virtual_LayoutSpacing(void* self, intptr_t slot);
int QStyle_virtualbase_LayoutSpacing(const void* self, int control1, int control2, int orientation, QStyleOption* option, QWidget* widget);
bool QStyle_override_virtual_Event(void* self, intptr_t slot);
bool QStyle_virtualbase_Event(void* self, QEvent* event);
bool QStyle_override_virtual_EventFilter(void* self, intptr_t slot);
bool QStyle_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QStyle_override_virtual_TimerEvent(void* self, intptr_t slot);
void QStyle_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QStyle_override_virtual_ChildEvent(void* self, intptr_t slot);
void QStyle_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QStyle_override_virtual_CustomEvent(void* self, intptr_t slot);
void QStyle_virtualbase_CustomEvent(void* self, QEvent* event);
bool QStyle_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QStyle_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QStyle_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QStyle_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QStyle_Delete(QStyle* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
