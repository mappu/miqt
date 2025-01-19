#pragma once
#ifndef MIQT_QT6_GEN_QGRIDLAYOUT_H
#define MIQT_QT6_GEN_QGRIDLAYOUT_H

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
class QGridLayout;
class QLayout;
class QLayoutItem;
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
typedef struct QGridLayout QGridLayout;
typedef struct QLayout QLayout;
typedef struct QLayoutItem QLayoutItem;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QSpacerItem QSpacerItem;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QGridLayout* QGridLayout_new(QWidget* parent);
QGridLayout* QGridLayout_new2();
void QGridLayout_virtbase(QGridLayout* src, QLayout** outptr_QLayout);
QMetaObject* QGridLayout_MetaObject(const QGridLayout* self);
void* QGridLayout_Metacast(QGridLayout* self, const char* param1);
struct miqt_string QGridLayout_Tr(const char* s);
QSize* QGridLayout_SizeHint(const QGridLayout* self);
QSize* QGridLayout_MinimumSize(const QGridLayout* self);
QSize* QGridLayout_MaximumSize(const QGridLayout* self);
void QGridLayout_SetHorizontalSpacing(QGridLayout* self, int spacing);
int QGridLayout_HorizontalSpacing(const QGridLayout* self);
void QGridLayout_SetVerticalSpacing(QGridLayout* self, int spacing);
int QGridLayout_VerticalSpacing(const QGridLayout* self);
void QGridLayout_SetSpacing(QGridLayout* self, int spacing);
int QGridLayout_Spacing(const QGridLayout* self);
void QGridLayout_SetRowStretch(QGridLayout* self, int row, int stretch);
void QGridLayout_SetColumnStretch(QGridLayout* self, int column, int stretch);
int QGridLayout_RowStretch(const QGridLayout* self, int row);
int QGridLayout_ColumnStretch(const QGridLayout* self, int column);
void QGridLayout_SetRowMinimumHeight(QGridLayout* self, int row, int minSize);
void QGridLayout_SetColumnMinimumWidth(QGridLayout* self, int column, int minSize);
int QGridLayout_RowMinimumHeight(const QGridLayout* self, int row);
int QGridLayout_ColumnMinimumWidth(const QGridLayout* self, int column);
int QGridLayout_ColumnCount(const QGridLayout* self);
int QGridLayout_RowCount(const QGridLayout* self);
QRect* QGridLayout_CellRect(const QGridLayout* self, int row, int column);
bool QGridLayout_HasHeightForWidth(const QGridLayout* self);
int QGridLayout_HeightForWidth(const QGridLayout* self, int param1);
int QGridLayout_MinimumHeightForWidth(const QGridLayout* self, int param1);
int QGridLayout_ExpandingDirections(const QGridLayout* self);
void QGridLayout_Invalidate(QGridLayout* self);
void QGridLayout_AddWidget(QGridLayout* self, QWidget* w);
void QGridLayout_AddWidget2(QGridLayout* self, QWidget* param1, int row, int column);
void QGridLayout_AddWidget3(QGridLayout* self, QWidget* param1, int row, int column, int rowSpan, int columnSpan);
void QGridLayout_AddLayout(QGridLayout* self, QLayout* param1, int row, int column);
void QGridLayout_AddLayout2(QGridLayout* self, QLayout* param1, int row, int column, int rowSpan, int columnSpan);
void QGridLayout_SetOriginCorner(QGridLayout* self, int originCorner);
int QGridLayout_OriginCorner(const QGridLayout* self);
QLayoutItem* QGridLayout_ItemAt(const QGridLayout* self, int index);
QLayoutItem* QGridLayout_ItemAtPosition(const QGridLayout* self, int row, int column);
QLayoutItem* QGridLayout_TakeAt(QGridLayout* self, int index);
int QGridLayout_Count(const QGridLayout* self);
void QGridLayout_SetGeometry(QGridLayout* self, QRect* geometry);
void QGridLayout_AddItem(QGridLayout* self, QLayoutItem* item, int row, int column);
void QGridLayout_SetDefaultPositioning(QGridLayout* self, int n, int orient);
void QGridLayout_GetItemPosition(const QGridLayout* self, int idx, int* row, int* column, int* rowSpan, int* columnSpan);
void QGridLayout_AddItemWithQLayoutItem(QGridLayout* self, QLayoutItem* param1);
struct miqt_string QGridLayout_Tr2(const char* s, const char* c);
struct miqt_string QGridLayout_Tr3(const char* s, const char* c, int n);
void QGridLayout_AddWidget4(QGridLayout* self, QWidget* param1, int row, int column, int param4);
void QGridLayout_AddWidget6(QGridLayout* self, QWidget* param1, int row, int column, int rowSpan, int columnSpan, int param6);
void QGridLayout_AddLayout4(QGridLayout* self, QLayout* param1, int row, int column, int param4);
void QGridLayout_AddLayout6(QGridLayout* self, QLayout* param1, int row, int column, int rowSpan, int columnSpan, int param6);
void QGridLayout_AddItem4(QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan);
void QGridLayout_AddItem5(QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan, int columnSpan);
void QGridLayout_AddItem6(QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan, int columnSpan, int param6);
bool QGridLayout_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QGridLayout_virtualbase_SizeHint(const void* self);
bool QGridLayout_override_virtual_MinimumSize(void* self, intptr_t slot);
QSize* QGridLayout_virtualbase_MinimumSize(const void* self);
bool QGridLayout_override_virtual_MaximumSize(void* self, intptr_t slot);
QSize* QGridLayout_virtualbase_MaximumSize(const void* self);
bool QGridLayout_override_virtual_SetSpacing(void* self, intptr_t slot);
void QGridLayout_virtualbase_SetSpacing(void* self, int spacing);
bool QGridLayout_override_virtual_Spacing(void* self, intptr_t slot);
int QGridLayout_virtualbase_Spacing(const void* self);
bool QGridLayout_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QGridLayout_virtualbase_HasHeightForWidth(const void* self);
bool QGridLayout_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QGridLayout_virtualbase_HeightForWidth(const void* self, int param1);
bool QGridLayout_override_virtual_MinimumHeightForWidth(void* self, intptr_t slot);
int QGridLayout_virtualbase_MinimumHeightForWidth(const void* self, int param1);
bool QGridLayout_override_virtual_ExpandingDirections(void* self, intptr_t slot);
int QGridLayout_virtualbase_ExpandingDirections(const void* self);
bool QGridLayout_override_virtual_Invalidate(void* self, intptr_t slot);
void QGridLayout_virtualbase_Invalidate(void* self);
bool QGridLayout_override_virtual_ItemAt(void* self, intptr_t slot);
QLayoutItem* QGridLayout_virtualbase_ItemAt(const void* self, int index);
bool QGridLayout_override_virtual_TakeAt(void* self, intptr_t slot);
QLayoutItem* QGridLayout_virtualbase_TakeAt(void* self, int index);
bool QGridLayout_override_virtual_Count(void* self, intptr_t slot);
int QGridLayout_virtualbase_Count(const void* self);
bool QGridLayout_override_virtual_SetGeometry(void* self, intptr_t slot);
void QGridLayout_virtualbase_SetGeometry(void* self, QRect* geometry);
bool QGridLayout_override_virtual_AddItemWithQLayoutItem(void* self, intptr_t slot);
void QGridLayout_virtualbase_AddItemWithQLayoutItem(void* self, QLayoutItem* param1);
bool QGridLayout_override_virtual_Geometry(void* self, intptr_t slot);
QRect* QGridLayout_virtualbase_Geometry(const void* self);
bool QGridLayout_override_virtual_IndexOf(void* self, intptr_t slot);
int QGridLayout_virtualbase_IndexOf(const void* self, QWidget* param1);
bool QGridLayout_override_virtual_IsEmpty(void* self, intptr_t slot);
bool QGridLayout_virtualbase_IsEmpty(const void* self);
bool QGridLayout_override_virtual_ControlTypes(void* self, intptr_t slot);
int QGridLayout_virtualbase_ControlTypes(const void* self);
bool QGridLayout_override_virtual_ReplaceWidget(void* self, intptr_t slot);
QLayoutItem* QGridLayout_virtualbase_ReplaceWidget(void* self, QWidget* from, QWidget* to, int options);
bool QGridLayout_override_virtual_Layout(void* self, intptr_t slot);
QLayout* QGridLayout_virtualbase_Layout(void* self);
bool QGridLayout_override_virtual_ChildEvent(void* self, intptr_t slot);
void QGridLayout_virtualbase_ChildEvent(void* self, QChildEvent* e);
bool QGridLayout_override_virtual_Event(void* self, intptr_t slot);
bool QGridLayout_virtualbase_Event(void* self, QEvent* event);
bool QGridLayout_override_virtual_EventFilter(void* self, intptr_t slot);
bool QGridLayout_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QGridLayout_override_virtual_TimerEvent(void* self, intptr_t slot);
void QGridLayout_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QGridLayout_override_virtual_CustomEvent(void* self, intptr_t slot);
void QGridLayout_virtualbase_CustomEvent(void* self, QEvent* event);
bool QGridLayout_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QGridLayout_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QGridLayout_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QGridLayout_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
bool QGridLayout_override_virtual_Widget(void* self, intptr_t slot);
QWidget* QGridLayout_virtualbase_Widget(const void* self);
bool QGridLayout_override_virtual_SpacerItem(void* self, intptr_t slot);
QSpacerItem* QGridLayout_virtualbase_SpacerItem(void* self);
void QGridLayout_Delete(QGridLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
