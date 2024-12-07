#pragma once
#ifndef MIQT_QT_GEN_QLAYOUT_H
#define MIQT_QT_GEN_QLAYOUT_H

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
class QMargins;
class QMetaMethod;
class QMetaObject;
class QObject;
class QRect;
class QSize;
class QSpacerItem;
class QTimerEvent;
class QWidget;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QLayout QLayout;
typedef struct QLayoutItem QLayoutItem;
typedef struct QMargins QMargins;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QSpacerItem QSpacerItem;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QLayout* QLayout_new(QWidget* parent);
QLayout* QLayout_new2();
void QLayout_virtbase(QLayout* src, QObject** outptr_QObject, QLayoutItem** outptr_QLayoutItem);
QMetaObject* QLayout_MetaObject(const QLayout* self);
void* QLayout_Metacast(QLayout* self, const char* param1);
struct miqt_string QLayout_Tr(const char* s);
struct miqt_string QLayout_TrUtf8(const char* s);
int QLayout_Margin(const QLayout* self);
void QLayout_SetMargin(QLayout* self, int margin);
int QLayout_Spacing(const QLayout* self);
void QLayout_SetSpacing(QLayout* self, int spacing);
void QLayout_SetContentsMargins(QLayout* self, int left, int top, int right, int bottom);
void QLayout_SetContentsMarginsWithMargins(QLayout* self, QMargins* margins);
void QLayout_GetContentsMargins(const QLayout* self, int* left, int* top, int* right, int* bottom);
QMargins* QLayout_ContentsMargins(const QLayout* self);
QRect* QLayout_ContentsRect(const QLayout* self);
bool QLayout_SetAlignment(QLayout* self, QWidget* w, int alignment);
bool QLayout_SetAlignment2(QLayout* self, QLayout* l, int alignment);
void QLayout_SetSizeConstraint(QLayout* self, int sizeConstraint);
int QLayout_SizeConstraint(const QLayout* self);
void QLayout_SetMenuBar(QLayout* self, QWidget* w);
QWidget* QLayout_MenuBar(const QLayout* self);
QWidget* QLayout_ParentWidget(const QLayout* self);
void QLayout_Invalidate(QLayout* self);
QRect* QLayout_Geometry(const QLayout* self);
bool QLayout_Activate(QLayout* self);
void QLayout_Update(QLayout* self);
void QLayout_AddWidget(QLayout* self, QWidget* w);
void QLayout_AddItem(QLayout* self, QLayoutItem* param1);
void QLayout_RemoveWidget(QLayout* self, QWidget* w);
void QLayout_RemoveItem(QLayout* self, QLayoutItem* param1);
int QLayout_ExpandingDirections(const QLayout* self);
QSize* QLayout_MinimumSize(const QLayout* self);
QSize* QLayout_MaximumSize(const QLayout* self);
void QLayout_SetGeometry(QLayout* self, QRect* geometry);
QLayoutItem* QLayout_ItemAt(const QLayout* self, int index);
QLayoutItem* QLayout_TakeAt(QLayout* self, int index);
int QLayout_IndexOf(const QLayout* self, QWidget* param1);
int QLayout_IndexOfWithQLayoutItem(const QLayout* self, QLayoutItem* param1);
int QLayout_Count(const QLayout* self);
bool QLayout_IsEmpty(const QLayout* self);
int QLayout_ControlTypes(const QLayout* self);
QLayoutItem* QLayout_ReplaceWidget(QLayout* self, QWidget* from, QWidget* to);
int QLayout_TotalHeightForWidth(const QLayout* self, int w);
QSize* QLayout_TotalMinimumSize(const QLayout* self);
QSize* QLayout_TotalMaximumSize(const QLayout* self);
QSize* QLayout_TotalSizeHint(const QLayout* self);
QLayout* QLayout_Layout(QLayout* self);
void QLayout_SetEnabled(QLayout* self, bool enabled);
bool QLayout_IsEnabled(const QLayout* self);
QSize* QLayout_ClosestAcceptableSize(QWidget* w, QSize* s);
void QLayout_ChildEvent(QLayout* self, QChildEvent* e);
struct miqt_string QLayout_Tr2(const char* s, const char* c);
struct miqt_string QLayout_Tr3(const char* s, const char* c, int n);
struct miqt_string QLayout_TrUtf82(const char* s, const char* c);
struct miqt_string QLayout_TrUtf83(const char* s, const char* c, int n);
QLayoutItem* QLayout_ReplaceWidget3(QLayout* self, QWidget* from, QWidget* to, int options);
void QLayout_override_virtual_Invalidate(void* self, intptr_t slot);
void QLayout_virtualbase_Invalidate(void* self);
void QLayout_override_virtual_Geometry(void* self, intptr_t slot);
QRect* QLayout_virtualbase_Geometry(const void* self);
void QLayout_override_virtual_AddItem(void* self, intptr_t slot);
void QLayout_virtualbase_AddItem(void* self, QLayoutItem* param1);
void QLayout_override_virtual_ExpandingDirections(void* self, intptr_t slot);
int QLayout_virtualbase_ExpandingDirections(const void* self);
void QLayout_override_virtual_MinimumSize(void* self, intptr_t slot);
QSize* QLayout_virtualbase_MinimumSize(const void* self);
void QLayout_override_virtual_MaximumSize(void* self, intptr_t slot);
QSize* QLayout_virtualbase_MaximumSize(const void* self);
void QLayout_override_virtual_SetGeometry(void* self, intptr_t slot);
void QLayout_virtualbase_SetGeometry(void* self, QRect* geometry);
void QLayout_override_virtual_ItemAt(void* self, intptr_t slot);
QLayoutItem* QLayout_virtualbase_ItemAt(const void* self, int index);
void QLayout_override_virtual_TakeAt(void* self, intptr_t slot);
QLayoutItem* QLayout_virtualbase_TakeAt(void* self, int index);
void QLayout_override_virtual_IndexOf(void* self, intptr_t slot);
int QLayout_virtualbase_IndexOf(const void* self, QWidget* param1);
void QLayout_override_virtual_Count(void* self, intptr_t slot);
int QLayout_virtualbase_Count(const void* self);
void QLayout_override_virtual_IsEmpty(void* self, intptr_t slot);
bool QLayout_virtualbase_IsEmpty(const void* self);
void QLayout_override_virtual_ControlTypes(void* self, intptr_t slot);
int QLayout_virtualbase_ControlTypes(const void* self);
void QLayout_override_virtual_Layout(void* self, intptr_t slot);
QLayout* QLayout_virtualbase_Layout(void* self);
void QLayout_override_virtual_ChildEvent(void* self, intptr_t slot);
void QLayout_virtualbase_ChildEvent(void* self, QChildEvent* e);
void QLayout_override_virtual_Event(void* self, intptr_t slot);
bool QLayout_virtualbase_Event(void* self, QEvent* event);
void QLayout_override_virtual_EventFilter(void* self, intptr_t slot);
bool QLayout_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QLayout_override_virtual_TimerEvent(void* self, intptr_t slot);
void QLayout_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QLayout_override_virtual_CustomEvent(void* self, intptr_t slot);
void QLayout_virtualbase_CustomEvent(void* self, QEvent* event);
void QLayout_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QLayout_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QLayout_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QLayout_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QLayout_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QLayout_virtualbase_SizeHint(const void* self);
void QLayout_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QLayout_virtualbase_HasHeightForWidth(const void* self);
void QLayout_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QLayout_virtualbase_HeightForWidth(const void* self, int param1);
void QLayout_override_virtual_MinimumHeightForWidth(void* self, intptr_t slot);
int QLayout_virtualbase_MinimumHeightForWidth(const void* self, int param1);
void QLayout_override_virtual_Widget(void* self, intptr_t slot);
QWidget* QLayout_virtualbase_Widget(void* self);
void QLayout_override_virtual_SpacerItem(void* self, intptr_t slot);
QSpacerItem* QLayout_virtualbase_SpacerItem(void* self);
void QLayout_Delete(QLayout* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
