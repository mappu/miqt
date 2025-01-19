#pragma once
#ifndef MIQT_QT6_GEN_QSTACKEDLAYOUT_H
#define MIQT_QT6_GEN_QSTACKEDLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QLayout;
class QLayoutItem;
class QMetaMethod;
class QMetaObject;
class QObject;
class QRect;
class QSize;
class QSpacerItem;
class QStackedLayout;
class QTimerEvent;
class QWidget;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QLayout QLayout;
typedef struct QLayoutItem QLayoutItem;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QSpacerItem QSpacerItem;
typedef struct QStackedLayout QStackedLayout;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QStackedLayout* QStackedLayout_new(QWidget* parent);
QStackedLayout* QStackedLayout_new2();
QStackedLayout* QStackedLayout_new3(QLayout* parentLayout);
void QStackedLayout_virtbase(QStackedLayout* src, QLayout** outptr_QLayout);
QMetaObject* QStackedLayout_MetaObject(const QStackedLayout* self);
void* QStackedLayout_Metacast(QStackedLayout* self, const char* param1);
struct miqt_string QStackedLayout_Tr(const char* s);
int QStackedLayout_AddWidget(QStackedLayout* self, QWidget* w);
int QStackedLayout_InsertWidget(QStackedLayout* self, int index, QWidget* w);
QWidget* QStackedLayout_CurrentWidget(const QStackedLayout* self);
int QStackedLayout_CurrentIndex(const QStackedLayout* self);
QWidget* QStackedLayout_Widget(const QStackedLayout* self, int param1);
int QStackedLayout_Count(const QStackedLayout* self);
int QStackedLayout_StackingMode(const QStackedLayout* self);
void QStackedLayout_SetStackingMode(QStackedLayout* self, int stackingMode);
void QStackedLayout_AddItem(QStackedLayout* self, QLayoutItem* item);
QSize* QStackedLayout_SizeHint(const QStackedLayout* self);
QSize* QStackedLayout_MinimumSize(const QStackedLayout* self);
QLayoutItem* QStackedLayout_ItemAt(const QStackedLayout* self, int param1);
QLayoutItem* QStackedLayout_TakeAt(QStackedLayout* self, int param1);
void QStackedLayout_SetGeometry(QStackedLayout* self, QRect* rect);
bool QStackedLayout_HasHeightForWidth(const QStackedLayout* self);
int QStackedLayout_HeightForWidth(const QStackedLayout* self, int width);
void QStackedLayout_WidgetRemoved(QStackedLayout* self, int index);
void QStackedLayout_connect_WidgetRemoved(QStackedLayout* self, intptr_t slot);
void QStackedLayout_CurrentChanged(QStackedLayout* self, int index);
void QStackedLayout_connect_CurrentChanged(QStackedLayout* self, intptr_t slot);
void QStackedLayout_SetCurrentIndex(QStackedLayout* self, int index);
void QStackedLayout_SetCurrentWidget(QStackedLayout* self, QWidget* w);
struct miqt_string QStackedLayout_Tr2(const char* s, const char* c);
struct miqt_string QStackedLayout_Tr3(const char* s, const char* c, int n);
bool QStackedLayout_override_virtual_Count(void* self, intptr_t slot);
int QStackedLayout_virtualbase_Count(const void* self);
bool QStackedLayout_override_virtual_AddItem(void* self, intptr_t slot);
void QStackedLayout_virtualbase_AddItem(void* self, QLayoutItem* item);
bool QStackedLayout_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QStackedLayout_virtualbase_SizeHint(const void* self);
bool QStackedLayout_override_virtual_MinimumSize(void* self, intptr_t slot);
QSize* QStackedLayout_virtualbase_MinimumSize(const void* self);
bool QStackedLayout_override_virtual_ItemAt(void* self, intptr_t slot);
QLayoutItem* QStackedLayout_virtualbase_ItemAt(const void* self, int param1);
bool QStackedLayout_override_virtual_TakeAt(void* self, intptr_t slot);
QLayoutItem* QStackedLayout_virtualbase_TakeAt(void* self, int param1);
bool QStackedLayout_override_virtual_SetGeometry(void* self, intptr_t slot);
void QStackedLayout_virtualbase_SetGeometry(void* self, QRect* rect);
bool QStackedLayout_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QStackedLayout_virtualbase_HasHeightForWidth(const void* self);
bool QStackedLayout_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QStackedLayout_virtualbase_HeightForWidth(const void* self, int width);
bool QStackedLayout_override_virtual_Spacing(void* self, intptr_t slot);
int QStackedLayout_virtualbase_Spacing(const void* self);
bool QStackedLayout_override_virtual_SetSpacing(void* self, intptr_t slot);
void QStackedLayout_virtualbase_SetSpacing(void* self, int spacing);
bool QStackedLayout_override_virtual_Invalidate(void* self, intptr_t slot);
void QStackedLayout_virtualbase_Invalidate(void* self);
bool QStackedLayout_override_virtual_Geometry(void* self, intptr_t slot);
QRect* QStackedLayout_virtualbase_Geometry(const void* self);
bool QStackedLayout_override_virtual_ExpandingDirections(void* self, intptr_t slot);
int QStackedLayout_virtualbase_ExpandingDirections(const void* self);
bool QStackedLayout_override_virtual_MaximumSize(void* self, intptr_t slot);
QSize* QStackedLayout_virtualbase_MaximumSize(const void* self);
bool QStackedLayout_override_virtual_IndexOf(void* self, intptr_t slot);
int QStackedLayout_virtualbase_IndexOf(const void* self, QWidget* param1);
bool QStackedLayout_override_virtual_IsEmpty(void* self, intptr_t slot);
bool QStackedLayout_virtualbase_IsEmpty(const void* self);
bool QStackedLayout_override_virtual_ControlTypes(void* self, intptr_t slot);
int QStackedLayout_virtualbase_ControlTypes(const void* self);
bool QStackedLayout_override_virtual_ReplaceWidget(void* self, intptr_t slot);
QLayoutItem* QStackedLayout_virtualbase_ReplaceWidget(void* self, QWidget* from, QWidget* to, int options);
bool QStackedLayout_override_virtual_Layout(void* self, intptr_t slot);
QLayout* QStackedLayout_virtualbase_Layout(void* self);
bool QStackedLayout_override_virtual_ChildEvent(void* self, intptr_t slot);
void QStackedLayout_virtualbase_ChildEvent(void* self, QChildEvent* e);
bool QStackedLayout_override_virtual_Event(void* self, intptr_t slot);
bool QStackedLayout_virtualbase_Event(void* self, QEvent* event);
bool QStackedLayout_override_virtual_EventFilter(void* self, intptr_t slot);
bool QStackedLayout_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QStackedLayout_override_virtual_TimerEvent(void* self, intptr_t slot);
void QStackedLayout_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QStackedLayout_override_virtual_CustomEvent(void* self, intptr_t slot);
void QStackedLayout_virtualbase_CustomEvent(void* self, QEvent* event);
bool QStackedLayout_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QStackedLayout_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QStackedLayout_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QStackedLayout_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
bool QStackedLayout_override_virtual_MinimumHeightForWidth(void* self, intptr_t slot);
int QStackedLayout_virtualbase_MinimumHeightForWidth(const void* self, int param1);
bool QStackedLayout_override_virtual_Widget(void* self, intptr_t slot);
QWidget* QStackedLayout_virtualbase_Widget(const void* self);
bool QStackedLayout_override_virtual_SpacerItem(void* self, intptr_t slot);
QSpacerItem* QStackedLayout_virtualbase_SpacerItem(void* self);
void QStackedLayout_Delete(QStackedLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
