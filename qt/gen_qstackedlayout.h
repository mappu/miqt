#pragma once
#ifndef MIQT_QT_GEN_QSTACKEDLAYOUT_H
#define MIQT_QT_GEN_QSTACKEDLAYOUT_H

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
class QLayout;
class QLayoutItem;
class QMetaObject;
class QObject;
class QRect;
class QSize;
class QStackedLayout;
class QWidget;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QLayout QLayout;
typedef struct QLayoutItem QLayoutItem;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QStackedLayout QStackedLayout;
typedef struct QWidget QWidget;
#endif

void QStackedLayout_new(QWidget* parent, QStackedLayout** outptr_QStackedLayout, QLayout** outptr_QLayout, QObject** outptr_QObject, QLayoutItem** outptr_QLayoutItem);
void QStackedLayout_new2(QStackedLayout** outptr_QStackedLayout, QLayout** outptr_QLayout, QObject** outptr_QObject, QLayoutItem** outptr_QLayoutItem);
void QStackedLayout_new3(QLayout* parentLayout, QStackedLayout** outptr_QStackedLayout, QLayout** outptr_QLayout, QObject** outptr_QObject, QLayoutItem** outptr_QLayoutItem);
QMetaObject* QStackedLayout_MetaObject(const QStackedLayout* self);
void* QStackedLayout_Metacast(QStackedLayout* self, const char* param1);
struct miqt_string QStackedLayout_Tr(const char* s);
struct miqt_string QStackedLayout_TrUtf8(const char* s);
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
struct miqt_string QStackedLayout_TrUtf82(const char* s, const char* c);
struct miqt_string QStackedLayout_TrUtf83(const char* s, const char* c, int n);
void QStackedLayout_override_virtual_Count(void* self, intptr_t slot);
int QStackedLayout_virtualbase_Count(const void* self);
void QStackedLayout_override_virtual_AddItem(void* self, intptr_t slot);
void QStackedLayout_virtualbase_AddItem(void* self, QLayoutItem* item);
void QStackedLayout_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QStackedLayout_virtualbase_SizeHint(const void* self);
void QStackedLayout_override_virtual_MinimumSize(void* self, intptr_t slot);
QSize* QStackedLayout_virtualbase_MinimumSize(const void* self);
void QStackedLayout_override_virtual_ItemAt(void* self, intptr_t slot);
QLayoutItem* QStackedLayout_virtualbase_ItemAt(const void* self, int param1);
void QStackedLayout_override_virtual_TakeAt(void* self, intptr_t slot);
QLayoutItem* QStackedLayout_virtualbase_TakeAt(void* self, int param1);
void QStackedLayout_override_virtual_SetGeometry(void* self, intptr_t slot);
void QStackedLayout_virtualbase_SetGeometry(void* self, QRect* rect);
void QStackedLayout_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QStackedLayout_virtualbase_HasHeightForWidth(const void* self);
void QStackedLayout_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QStackedLayout_virtualbase_HeightForWidth(const void* self, int width);
void QStackedLayout_override_virtual_Invalidate(void* self, intptr_t slot);
void QStackedLayout_virtualbase_Invalidate(void* self);
void QStackedLayout_override_virtual_Geometry(void* self, intptr_t slot);
QRect* QStackedLayout_virtualbase_Geometry(const void* self);
void QStackedLayout_override_virtual_ExpandingDirections(void* self, intptr_t slot);
int QStackedLayout_virtualbase_ExpandingDirections(const void* self);
void QStackedLayout_override_virtual_MaximumSize(void* self, intptr_t slot);
QSize* QStackedLayout_virtualbase_MaximumSize(const void* self);
void QStackedLayout_override_virtual_IndexOf(void* self, intptr_t slot);
int QStackedLayout_virtualbase_IndexOf(const void* self, QWidget* param1);
void QStackedLayout_override_virtual_IsEmpty(void* self, intptr_t slot);
bool QStackedLayout_virtualbase_IsEmpty(const void* self);
void QStackedLayout_override_virtual_ControlTypes(void* self, intptr_t slot);
int QStackedLayout_virtualbase_ControlTypes(const void* self);
void QStackedLayout_override_virtual_Layout(void* self, intptr_t slot);
QLayout* QStackedLayout_virtualbase_Layout(void* self);
void QStackedLayout_override_virtual_ChildEvent(void* self, intptr_t slot);
void QStackedLayout_virtualbase_ChildEvent(void* self, QChildEvent* e);
void QStackedLayout_Delete(QStackedLayout* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
