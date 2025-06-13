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
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QStyle QStyle;
typedef struct QStyleHintReturn QStyleHintReturn;
typedef struct QStyleOption QStyleOption;
typedef struct QStyleOptionComplex QStyleOptionComplex;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QCommonStyle* QCommonStyle_new();
void QCommonStyle_virtbase(QCommonStyle* src, QStyle** outptr_QStyle);
QMetaObject* QCommonStyle_metaObject(const QCommonStyle* self);
void* QCommonStyle_metacast(QCommonStyle* self, const char* param1);
struct miqt_string QCommonStyle_tr(const char* s);
struct miqt_string QCommonStyle_trUtf8(const char* s);
void QCommonStyle_drawPrimitive(const QCommonStyle* self, int pe, QStyleOption* opt, QPainter* p, QWidget* w);
void QCommonStyle_drawControl(const QCommonStyle* self, int element, QStyleOption* opt, QPainter* p, QWidget* w);
QRect* QCommonStyle_subElementRect(const QCommonStyle* self, int r, QStyleOption* opt, QWidget* widget);
void QCommonStyle_drawComplexControl(const QCommonStyle* self, int cc, QStyleOptionComplex* opt, QPainter* p, QWidget* w);
int QCommonStyle_hitTestComplexControl(const QCommonStyle* self, int cc, QStyleOptionComplex* opt, QPoint* pt, QWidget* w);
QRect* QCommonStyle_subControlRect(const QCommonStyle* self, int cc, QStyleOptionComplex* opt, int sc, QWidget* w);
QSize* QCommonStyle_sizeFromContents(const QCommonStyle* self, int ct, QStyleOption* opt, QSize* contentsSize, QWidget* widget);
int QCommonStyle_pixelMetric(const QCommonStyle* self, int m, QStyleOption* opt, QWidget* widget);
int QCommonStyle_styleHint(const QCommonStyle* self, int sh, QStyleOption* opt, QWidget* w, QStyleHintReturn* shret);
QIcon* QCommonStyle_standardIcon(const QCommonStyle* self, int standardIcon, QStyleOption* opt, QWidget* widget);
QPixmap* QCommonStyle_standardPixmap(const QCommonStyle* self, int sp, QStyleOption* opt, QWidget* widget);
QPixmap* QCommonStyle_generatedIconPixmap(const QCommonStyle* self, int iconMode, QPixmap* pixmap, QStyleOption* opt);
int QCommonStyle_layoutSpacing(const QCommonStyle* self, int control1, int control2, int orientation, QStyleOption* option, QWidget* widget);
void QCommonStyle_polish(QCommonStyle* self, QPalette* param1);
void QCommonStyle_polishWithApp(QCommonStyle* self, QApplication* app);
void QCommonStyle_polishWithWidget(QCommonStyle* self, QWidget* widget);
void QCommonStyle_unpolish(QCommonStyle* self, QWidget* widget);
void QCommonStyle_unpolishWithApplication(QCommonStyle* self, QApplication* application);
struct miqt_string QCommonStyle_tr2(const char* s, const char* c);
struct miqt_string QCommonStyle_tr3(const char* s, const char* c, int n);
struct miqt_string QCommonStyle_trUtf82(const char* s, const char* c);
struct miqt_string QCommonStyle_trUtf83(const char* s, const char* c, int n);

bool QCommonStyle_override_virtual_drawPrimitive(void* self, intptr_t slot);
void QCommonStyle_virtualbase_drawPrimitive(const void* self, int pe, QStyleOption* opt, QPainter* p, QWidget* w);
bool QCommonStyle_override_virtual_drawControl(void* self, intptr_t slot);
void QCommonStyle_virtualbase_drawControl(const void* self, int element, QStyleOption* opt, QPainter* p, QWidget* w);
bool QCommonStyle_override_virtual_subElementRect(void* self, intptr_t slot);
QRect* QCommonStyle_virtualbase_subElementRect(const void* self, int r, QStyleOption* opt, QWidget* widget);
bool QCommonStyle_override_virtual_drawComplexControl(void* self, intptr_t slot);
void QCommonStyle_virtualbase_drawComplexControl(const void* self, int cc, QStyleOptionComplex* opt, QPainter* p, QWidget* w);
bool QCommonStyle_override_virtual_hitTestComplexControl(void* self, intptr_t slot);
int QCommonStyle_virtualbase_hitTestComplexControl(const void* self, int cc, QStyleOptionComplex* opt, QPoint* pt, QWidget* w);
bool QCommonStyle_override_virtual_subControlRect(void* self, intptr_t slot);
QRect* QCommonStyle_virtualbase_subControlRect(const void* self, int cc, QStyleOptionComplex* opt, int sc, QWidget* w);
bool QCommonStyle_override_virtual_sizeFromContents(void* self, intptr_t slot);
QSize* QCommonStyle_virtualbase_sizeFromContents(const void* self, int ct, QStyleOption* opt, QSize* contentsSize, QWidget* widget);
bool QCommonStyle_override_virtual_pixelMetric(void* self, intptr_t slot);
int QCommonStyle_virtualbase_pixelMetric(const void* self, int m, QStyleOption* opt, QWidget* widget);
bool QCommonStyle_override_virtual_styleHint(void* self, intptr_t slot);
int QCommonStyle_virtualbase_styleHint(const void* self, int sh, QStyleOption* opt, QWidget* w, QStyleHintReturn* shret);
bool QCommonStyle_override_virtual_standardIcon(void* self, intptr_t slot);
QIcon* QCommonStyle_virtualbase_standardIcon(const void* self, int standardIcon, QStyleOption* opt, QWidget* widget);
bool QCommonStyle_override_virtual_standardPixmap(void* self, intptr_t slot);
QPixmap* QCommonStyle_virtualbase_standardPixmap(const void* self, int sp, QStyleOption* opt, QWidget* widget);
bool QCommonStyle_override_virtual_generatedIconPixmap(void* self, intptr_t slot);
QPixmap* QCommonStyle_virtualbase_generatedIconPixmap(const void* self, int iconMode, QPixmap* pixmap, QStyleOption* opt);
bool QCommonStyle_override_virtual_layoutSpacing(void* self, intptr_t slot);
int QCommonStyle_virtualbase_layoutSpacing(const void* self, int control1, int control2, int orientation, QStyleOption* option, QWidget* widget);
bool QCommonStyle_override_virtual_polish(void* self, intptr_t slot);
void QCommonStyle_virtualbase_polish(void* self, QPalette* param1);
bool QCommonStyle_override_virtual_polishWithApp(void* self, intptr_t slot);
void QCommonStyle_virtualbase_polishWithApp(void* self, QApplication* app);
bool QCommonStyle_override_virtual_polishWithWidget(void* self, intptr_t slot);
void QCommonStyle_virtualbase_polishWithWidget(void* self, QWidget* widget);
bool QCommonStyle_override_virtual_unpolish(void* self, intptr_t slot);
void QCommonStyle_virtualbase_unpolish(void* self, QWidget* widget);
bool QCommonStyle_override_virtual_unpolishWithApplication(void* self, intptr_t slot);
void QCommonStyle_virtualbase_unpolishWithApplication(void* self, QApplication* application);
bool QCommonStyle_override_virtual_itemTextRect(void* self, intptr_t slot);
QRect* QCommonStyle_virtualbase_itemTextRect(const void* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, struct miqt_string text);
bool QCommonStyle_override_virtual_itemPixmapRect(void* self, intptr_t slot);
QRect* QCommonStyle_virtualbase_itemPixmapRect(const void* self, QRect* r, int flags, QPixmap* pixmap);
bool QCommonStyle_override_virtual_drawItemText(void* self, intptr_t slot);
void QCommonStyle_virtualbase_drawItemText(const void* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, struct miqt_string text, int textRole);
bool QCommonStyle_override_virtual_drawItemPixmap(void* self, intptr_t slot);
void QCommonStyle_virtualbase_drawItemPixmap(const void* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap);
bool QCommonStyle_override_virtual_standardPalette(void* self, intptr_t slot);
QPalette* QCommonStyle_virtualbase_standardPalette(const void* self);
bool QCommonStyle_override_virtual_event(void* self, intptr_t slot);
bool QCommonStyle_virtualbase_event(void* self, QEvent* event);
bool QCommonStyle_override_virtual_eventFilter(void* self, intptr_t slot);
bool QCommonStyle_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QCommonStyle_override_virtual_timerEvent(void* self, intptr_t slot);
void QCommonStyle_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QCommonStyle_override_virtual_childEvent(void* self, intptr_t slot);
void QCommonStyle_virtualbase_childEvent(void* self, QChildEvent* event);
bool QCommonStyle_override_virtual_customEvent(void* self, intptr_t slot);
void QCommonStyle_virtualbase_customEvent(void* self, QEvent* event);
bool QCommonStyle_override_virtual_connectNotify(void* self, intptr_t slot);
void QCommonStyle_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QCommonStyle_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QCommonStyle_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QCommonStyle_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QCommonStyle_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QCommonStyle_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QCommonStyle_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QCommonStyle_delete(QCommonStyle* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
