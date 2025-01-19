#pragma once
#ifndef MIQT_QT_GEN_QLCDNUMBER_H
#define MIQT_QT_GEN_QLCDNUMBER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QActionEvent;
class QChildEvent;
class QCloseEvent;
class QContextMenuEvent;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFocusEvent;
class QFrame;
class QHideEvent;
class QInputMethodEvent;
class QKeyEvent;
class QLCDNumber;
class QMetaMethod;
class QMetaObject;
class QMouseEvent;
class QMoveEvent;
class QObject;
class QPaintDevice;
class QPaintEngine;
class QPaintEvent;
class QPainter;
class QPoint;
class QResizeEvent;
class QShowEvent;
class QSize;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFrame QFrame;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QLCDNumber QLCDNumber;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QLCDNumber* QLCDNumber_new(QWidget* parent);
QLCDNumber* QLCDNumber_new2();
QLCDNumber* QLCDNumber_new3(unsigned int numDigits);
QLCDNumber* QLCDNumber_new4(unsigned int numDigits, QWidget* parent);
void QLCDNumber_virtbase(QLCDNumber* src, QFrame** outptr_QFrame);
QMetaObject* QLCDNumber_MetaObject(const QLCDNumber* self);
void* QLCDNumber_Metacast(QLCDNumber* self, const char* param1);
struct miqt_string QLCDNumber_Tr(const char* s);
struct miqt_string QLCDNumber_TrUtf8(const char* s);
bool QLCDNumber_SmallDecimalPoint(const QLCDNumber* self);
int QLCDNumber_DigitCount(const QLCDNumber* self);
void QLCDNumber_SetDigitCount(QLCDNumber* self, int nDigits);
bool QLCDNumber_CheckOverflow(const QLCDNumber* self, double num);
bool QLCDNumber_CheckOverflowWithNum(const QLCDNumber* self, int num);
int QLCDNumber_Mode(const QLCDNumber* self);
void QLCDNumber_SetMode(QLCDNumber* self, int mode);
int QLCDNumber_SegmentStyle(const QLCDNumber* self);
void QLCDNumber_SetSegmentStyle(QLCDNumber* self, int segmentStyle);
double QLCDNumber_Value(const QLCDNumber* self);
int QLCDNumber_IntValue(const QLCDNumber* self);
QSize* QLCDNumber_SizeHint(const QLCDNumber* self);
void QLCDNumber_Display(QLCDNumber* self, struct miqt_string str);
void QLCDNumber_DisplayWithNum(QLCDNumber* self, int num);
void QLCDNumber_Display2(QLCDNumber* self, double num);
void QLCDNumber_SetHexMode(QLCDNumber* self);
void QLCDNumber_SetDecMode(QLCDNumber* self);
void QLCDNumber_SetOctMode(QLCDNumber* self);
void QLCDNumber_SetBinMode(QLCDNumber* self);
void QLCDNumber_SetSmallDecimalPoint(QLCDNumber* self, bool smallDecimalPoint);
void QLCDNumber_Overflow(QLCDNumber* self);
void QLCDNumber_connect_Overflow(QLCDNumber* self, intptr_t slot);
bool QLCDNumber_Event(QLCDNumber* self, QEvent* e);
void QLCDNumber_PaintEvent(QLCDNumber* self, QPaintEvent* param1);
struct miqt_string QLCDNumber_Tr2(const char* s, const char* c);
struct miqt_string QLCDNumber_Tr3(const char* s, const char* c, int n);
struct miqt_string QLCDNumber_TrUtf82(const char* s, const char* c);
struct miqt_string QLCDNumber_TrUtf83(const char* s, const char* c, int n);
bool QLCDNumber_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QLCDNumber_virtualbase_SizeHint(const void* self);
bool QLCDNumber_override_virtual_Event(void* self, intptr_t slot);
bool QLCDNumber_virtualbase_Event(void* self, QEvent* e);
bool QLCDNumber_override_virtual_PaintEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
bool QLCDNumber_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_ChangeEvent(void* self, QEvent* param1);
bool QLCDNumber_override_virtual_DevType(void* self, intptr_t slot);
int QLCDNumber_virtualbase_DevType(const void* self);
bool QLCDNumber_override_virtual_SetVisible(void* self, intptr_t slot);
void QLCDNumber_virtualbase_SetVisible(void* self, bool visible);
bool QLCDNumber_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QLCDNumber_virtualbase_MinimumSizeHint(const void* self);
bool QLCDNumber_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QLCDNumber_virtualbase_HeightForWidth(const void* self, int param1);
bool QLCDNumber_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QLCDNumber_virtualbase_HasHeightForWidth(const void* self);
bool QLCDNumber_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QLCDNumber_virtualbase_PaintEngine(const void* self);
bool QLCDNumber_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
bool QLCDNumber_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
bool QLCDNumber_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QLCDNumber_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
bool QLCDNumber_override_virtual_WheelEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_WheelEvent(void* self, QWheelEvent* event);
bool QLCDNumber_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
bool QLCDNumber_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
bool QLCDNumber_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
bool QLCDNumber_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
bool QLCDNumber_override_virtual_EnterEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_EnterEvent(void* self, QEvent* event);
bool QLCDNumber_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_LeaveEvent(void* self, QEvent* event);
bool QLCDNumber_override_virtual_MoveEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_MoveEvent(void* self, QMoveEvent* event);
bool QLCDNumber_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
bool QLCDNumber_override_virtual_CloseEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_CloseEvent(void* self, QCloseEvent* event);
bool QLCDNumber_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
bool QLCDNumber_override_virtual_TabletEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_TabletEvent(void* self, QTabletEvent* event);
bool QLCDNumber_override_virtual_ActionEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_ActionEvent(void* self, QActionEvent* event);
bool QLCDNumber_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
bool QLCDNumber_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
bool QLCDNumber_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QLCDNumber_override_virtual_DropEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_DropEvent(void* self, QDropEvent* event);
bool QLCDNumber_override_virtual_ShowEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_ShowEvent(void* self, QShowEvent* event);
bool QLCDNumber_override_virtual_HideEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_HideEvent(void* self, QHideEvent* event);
bool QLCDNumber_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QLCDNumber_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QLCDNumber_override_virtual_Metric(void* self, intptr_t slot);
int QLCDNumber_virtualbase_Metric(const void* self, int param1);
bool QLCDNumber_override_virtual_InitPainter(void* self, intptr_t slot);
void QLCDNumber_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QLCDNumber_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QLCDNumber_virtualbase_Redirected(const void* self, QPoint* offset);
bool QLCDNumber_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QLCDNumber_virtualbase_SharedPainter(const void* self);
bool QLCDNumber_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
bool QLCDNumber_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QLCDNumber_virtualbase_InputMethodQuery(const void* self, int param1);
bool QLCDNumber_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QLCDNumber_virtualbase_FocusNextPrevChild(void* self, bool next);
bool QLCDNumber_override_virtual_EventFilter(void* self, intptr_t slot);
bool QLCDNumber_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QLCDNumber_override_virtual_TimerEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QLCDNumber_override_virtual_ChildEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QLCDNumber_override_virtual_CustomEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_CustomEvent(void* self, QEvent* event);
bool QLCDNumber_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QLCDNumber_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QLCDNumber_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QLCDNumber_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QLCDNumber_Delete(QLCDNumber* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
