#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PICKER_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PICKER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QFont;
class QKeyEvent;
class QMetaMethod;
class QMetaObject;
class QMouseEvent;
class QObject;
class QPainter;
class QPainterPath;
class QPen;
class QPoint;
class QRect;
class QRegion;
class QSize;
class QTimerEvent;
class QWheelEvent;
class QWidget;
class QwtEventPattern;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QwtEventPattern__KeyPattern)
typedef QwtEventPattern::KeyPattern QwtEventPattern__KeyPattern;
#else
class QwtEventPattern__KeyPattern;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QwtEventPattern__MousePattern)
typedef QwtEventPattern::MousePattern QwtEventPattern__MousePattern;
#else
class QwtEventPattern__MousePattern;
#endif
class QwtPicker;
class QwtPickerMachine;
class QwtText;
class QwtWidgetOverlay;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QPainterPath QPainterPath;
typedef struct QPen QPen;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QwtEventPattern QwtEventPattern;
typedef struct QwtEventPattern__KeyPattern QwtEventPattern__KeyPattern;
typedef struct QwtEventPattern__MousePattern QwtEventPattern__MousePattern;
typedef struct QwtPicker QwtPicker;
typedef struct QwtPickerMachine QwtPickerMachine;
typedef struct QwtText QwtText;
typedef struct QwtWidgetOverlay QwtWidgetOverlay;
#endif

QwtPicker* QwtPicker_new(QWidget* parent);
QwtPicker* QwtPicker_new2(int rubberBand, int trackerMode, QWidget* param3);
void QwtPicker_virtbase(QwtPicker* src, QObject** outptr_QObject, QwtEventPattern** outptr_QwtEventPattern);
QMetaObject* QwtPicker_metaObject(const QwtPicker* self);
void* QwtPicker_metacast(QwtPicker* self, const char* param1);
struct miqt_string QwtPicker_tr(const char* s);
struct miqt_string QwtPicker_trUtf8(const char* s);
void QwtPicker_setStateMachine(QwtPicker* self, QwtPickerMachine* stateMachine);
QwtPickerMachine* QwtPicker_stateMachine(const QwtPicker* self);
QwtPickerMachine* QwtPicker_stateMachine2(QwtPicker* self);
void QwtPicker_setRubberBand(QwtPicker* self, int rubberBand);
int QwtPicker_rubberBand(const QwtPicker* self);
void QwtPicker_setTrackerMode(QwtPicker* self, int trackerMode);
int QwtPicker_trackerMode(const QwtPicker* self);
void QwtPicker_setResizeMode(QwtPicker* self, int resizeMode);
int QwtPicker_resizeMode(const QwtPicker* self);
void QwtPicker_setRubberBandPen(QwtPicker* self, QPen* rubberBandPen);
QPen* QwtPicker_rubberBandPen(const QwtPicker* self);
void QwtPicker_setTrackerPen(QwtPicker* self, QPen* trackerPen);
QPen* QwtPicker_trackerPen(const QwtPicker* self);
void QwtPicker_setTrackerFont(QwtPicker* self, QFont* trackerFont);
QFont* QwtPicker_trackerFont(const QwtPicker* self);
bool QwtPicker_isEnabled(const QwtPicker* self);
bool QwtPicker_isActive(const QwtPicker* self);
bool QwtPicker_eventFilter(QwtPicker* self, QObject* param1, QEvent* param2);
QWidget* QwtPicker_parentWidget(QwtPicker* self);
QWidget* QwtPicker_parentWidget2(const QwtPicker* self);
QPainterPath* QwtPicker_pickArea(const QwtPicker* self);
void QwtPicker_drawRubberBand(const QwtPicker* self, QPainter* param1);
void QwtPicker_drawTracker(const QwtPicker* self, QPainter* param1);
QRegion* QwtPicker_rubberBandMask(const QwtPicker* self);
QwtText* QwtPicker_trackerText(const QwtPicker* self, QPoint* pos);
QPoint* QwtPicker_trackerPosition(const QwtPicker* self);
QRect* QwtPicker_trackerRect(const QwtPicker* self, QFont* param1);
void QwtPicker_setEnabled(QwtPicker* self, bool enabled);
void QwtPicker_activated(QwtPicker* self, bool on);
void QwtPicker_connect_activated(QwtPicker* self, intptr_t slot);
void QwtPicker_appended(QwtPicker* self, QPoint* pos);
void QwtPicker_connect_appended(QwtPicker* self, intptr_t slot);
void QwtPicker_moved(QwtPicker* self, QPoint* pos);
void QwtPicker_connect_moved(QwtPicker* self, intptr_t slot);
void QwtPicker_removed(QwtPicker* self, QPoint* pos);
void QwtPicker_connect_removed(QwtPicker* self, intptr_t slot);
void QwtPicker_transition(QwtPicker* self, QEvent* param1);
void QwtPicker_begin(QwtPicker* self);
void QwtPicker_append(QwtPicker* self, QPoint* param1);
void QwtPicker_move(QwtPicker* self, QPoint* param1);
void QwtPicker_remove(QwtPicker* self);
bool QwtPicker_end(QwtPicker* self, bool ok);
void QwtPicker_reset(QwtPicker* self);
void QwtPicker_widgetMousePressEvent(QwtPicker* self, QMouseEvent* param1);
void QwtPicker_widgetMouseReleaseEvent(QwtPicker* self, QMouseEvent* param1);
void QwtPicker_widgetMouseDoubleClickEvent(QwtPicker* self, QMouseEvent* param1);
void QwtPicker_widgetMouseMoveEvent(QwtPicker* self, QMouseEvent* param1);
void QwtPicker_widgetWheelEvent(QwtPicker* self, QWheelEvent* param1);
void QwtPicker_widgetKeyPressEvent(QwtPicker* self, QKeyEvent* param1);
void QwtPicker_widgetKeyReleaseEvent(QwtPicker* self, QKeyEvent* param1);
void QwtPicker_widgetEnterEvent(QwtPicker* self, QEvent* param1);
void QwtPicker_widgetLeaveEvent(QwtPicker* self, QEvent* param1);
void QwtPicker_stretchSelection(QwtPicker* self, QSize* oldSize, QSize* newSize);
void QwtPicker_updateDisplay(QwtPicker* self);
struct miqt_string QwtPicker_tr2(const char* s, const char* c);
struct miqt_string QwtPicker_tr3(const char* s, const char* c, int n);
struct miqt_string QwtPicker_trUtf82(const char* s, const char* c);
struct miqt_string QwtPicker_trUtf83(const char* s, const char* c, int n);

bool QwtPicker_override_virtual_eventFilter(void* self, intptr_t slot);
bool QwtPicker_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);
bool QwtPicker_override_virtual_pickArea(void* self, intptr_t slot);
QPainterPath* QwtPicker_virtualbase_pickArea(const void* self);
bool QwtPicker_override_virtual_drawRubberBand(void* self, intptr_t slot);
void QwtPicker_virtualbase_drawRubberBand(const void* self, QPainter* param1);
bool QwtPicker_override_virtual_drawTracker(void* self, intptr_t slot);
void QwtPicker_virtualbase_drawTracker(const void* self, QPainter* param1);
bool QwtPicker_override_virtual_rubberBandMask(void* self, intptr_t slot);
QRegion* QwtPicker_virtualbase_rubberBandMask(const void* self);
bool QwtPicker_override_virtual_trackerText(void* self, intptr_t slot);
QwtText* QwtPicker_virtualbase_trackerText(const void* self, QPoint* pos);
bool QwtPicker_override_virtual_trackerRect(void* self, intptr_t slot);
QRect* QwtPicker_virtualbase_trackerRect(const void* self, QFont* param1);
bool QwtPicker_override_virtual_transition(void* self, intptr_t slot);
void QwtPicker_virtualbase_transition(void* self, QEvent* param1);
bool QwtPicker_override_virtual_begin(void* self, intptr_t slot);
void QwtPicker_virtualbase_begin(void* self);
bool QwtPicker_override_virtual_append(void* self, intptr_t slot);
void QwtPicker_virtualbase_append(void* self, QPoint* param1);
bool QwtPicker_override_virtual_move(void* self, intptr_t slot);
void QwtPicker_virtualbase_move(void* self, QPoint* param1);
bool QwtPicker_override_virtual_remove(void* self, intptr_t slot);
void QwtPicker_virtualbase_remove(void* self);
bool QwtPicker_override_virtual_end(void* self, intptr_t slot);
bool QwtPicker_virtualbase_end(void* self, bool ok);
bool QwtPicker_override_virtual_reset(void* self, intptr_t slot);
void QwtPicker_virtualbase_reset(void* self);
bool QwtPicker_override_virtual_widgetMousePressEvent(void* self, intptr_t slot);
void QwtPicker_virtualbase_widgetMousePressEvent(void* self, QMouseEvent* param1);
bool QwtPicker_override_virtual_widgetMouseReleaseEvent(void* self, intptr_t slot);
void QwtPicker_virtualbase_widgetMouseReleaseEvent(void* self, QMouseEvent* param1);
bool QwtPicker_override_virtual_widgetMouseDoubleClickEvent(void* self, intptr_t slot);
void QwtPicker_virtualbase_widgetMouseDoubleClickEvent(void* self, QMouseEvent* param1);
bool QwtPicker_override_virtual_widgetMouseMoveEvent(void* self, intptr_t slot);
void QwtPicker_virtualbase_widgetMouseMoveEvent(void* self, QMouseEvent* param1);
bool QwtPicker_override_virtual_widgetWheelEvent(void* self, intptr_t slot);
void QwtPicker_virtualbase_widgetWheelEvent(void* self, QWheelEvent* param1);
bool QwtPicker_override_virtual_widgetKeyPressEvent(void* self, intptr_t slot);
void QwtPicker_virtualbase_widgetKeyPressEvent(void* self, QKeyEvent* param1);
bool QwtPicker_override_virtual_widgetKeyReleaseEvent(void* self, intptr_t slot);
void QwtPicker_virtualbase_widgetKeyReleaseEvent(void* self, QKeyEvent* param1);
bool QwtPicker_override_virtual_widgetEnterEvent(void* self, intptr_t slot);
void QwtPicker_virtualbase_widgetEnterEvent(void* self, QEvent* param1);
bool QwtPicker_override_virtual_widgetLeaveEvent(void* self, intptr_t slot);
void QwtPicker_virtualbase_widgetLeaveEvent(void* self, QEvent* param1);
bool QwtPicker_override_virtual_stretchSelection(void* self, intptr_t slot);
void QwtPicker_virtualbase_stretchSelection(void* self, QSize* oldSize, QSize* newSize);
bool QwtPicker_override_virtual_updateDisplay(void* self, intptr_t slot);
void QwtPicker_virtualbase_updateDisplay(void* self);
bool QwtPicker_override_virtual_event(void* self, intptr_t slot);
bool QwtPicker_virtualbase_event(void* self, QEvent* event);
bool QwtPicker_override_virtual_timerEvent(void* self, intptr_t slot);
void QwtPicker_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QwtPicker_override_virtual_childEvent(void* self, intptr_t slot);
void QwtPicker_virtualbase_childEvent(void* self, QChildEvent* event);
bool QwtPicker_override_virtual_customEvent(void* self, intptr_t slot);
void QwtPicker_virtualbase_customEvent(void* self, QEvent* event);
bool QwtPicker_override_virtual_connectNotify(void* self, intptr_t slot);
void QwtPicker_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QwtPicker_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QwtPicker_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
bool QwtPicker_override_virtual_mouseMatch2(void* self, intptr_t slot);
bool QwtPicker_virtualbase_mouseMatch2(const void* self, QwtEventPattern__MousePattern* param1, QMouseEvent* param2);
bool QwtPicker_override_virtual_keyMatch2(void* self, intptr_t slot);
bool QwtPicker_virtualbase_keyMatch2(const void* self, QwtEventPattern__KeyPattern* param1, QKeyEvent* param2);

QwtWidgetOverlay* QwtPicker_protectedbase_rubberBandOverlay(bool* _dynamic_cast_ok, const void* self);
QwtWidgetOverlay* QwtPicker_protectedbase_trackerOverlay(bool* _dynamic_cast_ok, const void* self);
QObject* QwtPicker_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QwtPicker_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QwtPicker_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QwtPicker_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QwtPicker_delete(QwtPicker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
