#pragma once
#ifndef MIQT_QT6_GEN_QBOXLAYOUT_H
#define MIQT_QT6_GEN_QBOXLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBoxLayout;
class QChildEvent;
class QHBoxLayout;
class QLayout;
class QLayoutItem;
class QMetaObject;
class QObject;
class QRect;
class QSize;
class QSpacerItem;
class QVBoxLayout;
class QWidget;
#else
typedef struct QBoxLayout QBoxLayout;
typedef struct QChildEvent QChildEvent;
typedef struct QHBoxLayout QHBoxLayout;
typedef struct QLayout QLayout;
typedef struct QLayoutItem QLayoutItem;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QSpacerItem QSpacerItem;
typedef struct QVBoxLayout QVBoxLayout;
typedef struct QWidget QWidget;
#endif

QBoxLayout* QBoxLayout_new(int param1);
QBoxLayout* QBoxLayout_new2(int param1, QWidget* parent);
void QBoxLayout_virtbase(QBoxLayout* src, QLayout** outptr_QLayout);
QMetaObject* QBoxLayout_MetaObject(const QBoxLayout* self);
void* QBoxLayout_Metacast(QBoxLayout* self, const char* param1);
struct miqt_string QBoxLayout_Tr(const char* s);
int QBoxLayout_Direction(const QBoxLayout* self);
void QBoxLayout_SetDirection(QBoxLayout* self, int direction);
void QBoxLayout_AddSpacing(QBoxLayout* self, int size);
void QBoxLayout_AddStretch(QBoxLayout* self);
void QBoxLayout_AddSpacerItem(QBoxLayout* self, QSpacerItem* spacerItem);
void QBoxLayout_AddWidget(QBoxLayout* self, QWidget* param1);
void QBoxLayout_AddLayout(QBoxLayout* self, QLayout* layout);
void QBoxLayout_AddStrut(QBoxLayout* self, int param1);
void QBoxLayout_AddItem(QBoxLayout* self, QLayoutItem* param1);
void QBoxLayout_InsertSpacing(QBoxLayout* self, int index, int size);
void QBoxLayout_InsertStretch(QBoxLayout* self, int index);
void QBoxLayout_InsertSpacerItem(QBoxLayout* self, int index, QSpacerItem* spacerItem);
void QBoxLayout_InsertWidget(QBoxLayout* self, int index, QWidget* widget);
void QBoxLayout_InsertLayout(QBoxLayout* self, int index, QLayout* layout);
void QBoxLayout_InsertItem(QBoxLayout* self, int index, QLayoutItem* param2);
int QBoxLayout_Spacing(const QBoxLayout* self);
void QBoxLayout_SetSpacing(QBoxLayout* self, int spacing);
bool QBoxLayout_SetStretchFactor(QBoxLayout* self, QWidget* w, int stretch);
bool QBoxLayout_SetStretchFactor2(QBoxLayout* self, QLayout* l, int stretch);
void QBoxLayout_SetStretch(QBoxLayout* self, int index, int stretch);
int QBoxLayout_Stretch(const QBoxLayout* self, int index);
QSize* QBoxLayout_SizeHint(const QBoxLayout* self);
QSize* QBoxLayout_MinimumSize(const QBoxLayout* self);
QSize* QBoxLayout_MaximumSize(const QBoxLayout* self);
bool QBoxLayout_HasHeightForWidth(const QBoxLayout* self);
int QBoxLayout_HeightForWidth(const QBoxLayout* self, int param1);
int QBoxLayout_MinimumHeightForWidth(const QBoxLayout* self, int param1);
int QBoxLayout_ExpandingDirections(const QBoxLayout* self);
void QBoxLayout_Invalidate(QBoxLayout* self);
QLayoutItem* QBoxLayout_ItemAt(const QBoxLayout* self, int param1);
QLayoutItem* QBoxLayout_TakeAt(QBoxLayout* self, int param1);
int QBoxLayout_Count(const QBoxLayout* self);
void QBoxLayout_SetGeometry(QBoxLayout* self, QRect* geometry);
struct miqt_string QBoxLayout_Tr2(const char* s, const char* c);
struct miqt_string QBoxLayout_Tr3(const char* s, const char* c, int n);
void QBoxLayout_AddStretch1(QBoxLayout* self, int stretch);
void QBoxLayout_AddWidget2(QBoxLayout* self, QWidget* param1, int stretch);
void QBoxLayout_AddWidget3(QBoxLayout* self, QWidget* param1, int stretch, int alignment);
void QBoxLayout_AddLayout2(QBoxLayout* self, QLayout* layout, int stretch);
void QBoxLayout_InsertStretch2(QBoxLayout* self, int index, int stretch);
void QBoxLayout_InsertWidget3(QBoxLayout* self, int index, QWidget* widget, int stretch);
void QBoxLayout_InsertWidget4(QBoxLayout* self, int index, QWidget* widget, int stretch, int alignment);
void QBoxLayout_InsertLayout3(QBoxLayout* self, int index, QLayout* layout, int stretch);
void QBoxLayout_override_virtual_AddItem(void* self, intptr_t slot);
void QBoxLayout_virtualbase_AddItem(void* self, QLayoutItem* param1);
void QBoxLayout_override_virtual_Spacing(void* self, intptr_t slot);
int QBoxLayout_virtualbase_Spacing(const void* self);
void QBoxLayout_override_virtual_SetSpacing(void* self, intptr_t slot);
void QBoxLayout_virtualbase_SetSpacing(void* self, int spacing);
void QBoxLayout_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QBoxLayout_virtualbase_SizeHint(const void* self);
void QBoxLayout_override_virtual_MinimumSize(void* self, intptr_t slot);
QSize* QBoxLayout_virtualbase_MinimumSize(const void* self);
void QBoxLayout_override_virtual_MaximumSize(void* self, intptr_t slot);
QSize* QBoxLayout_virtualbase_MaximumSize(const void* self);
void QBoxLayout_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QBoxLayout_virtualbase_HasHeightForWidth(const void* self);
void QBoxLayout_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QBoxLayout_virtualbase_HeightForWidth(const void* self, int param1);
void QBoxLayout_override_virtual_MinimumHeightForWidth(void* self, intptr_t slot);
int QBoxLayout_virtualbase_MinimumHeightForWidth(const void* self, int param1);
void QBoxLayout_override_virtual_ExpandingDirections(void* self, intptr_t slot);
int QBoxLayout_virtualbase_ExpandingDirections(const void* self);
void QBoxLayout_override_virtual_Invalidate(void* self, intptr_t slot);
void QBoxLayout_virtualbase_Invalidate(void* self);
void QBoxLayout_override_virtual_ItemAt(void* self, intptr_t slot);
QLayoutItem* QBoxLayout_virtualbase_ItemAt(const void* self, int param1);
void QBoxLayout_override_virtual_TakeAt(void* self, intptr_t slot);
QLayoutItem* QBoxLayout_virtualbase_TakeAt(void* self, int param1);
void QBoxLayout_override_virtual_Count(void* self, intptr_t slot);
int QBoxLayout_virtualbase_Count(const void* self);
void QBoxLayout_override_virtual_SetGeometry(void* self, intptr_t slot);
void QBoxLayout_virtualbase_SetGeometry(void* self, QRect* geometry);
void QBoxLayout_override_virtual_Geometry(void* self, intptr_t slot);
QRect* QBoxLayout_virtualbase_Geometry(const void* self);
void QBoxLayout_override_virtual_IndexOf(void* self, intptr_t slot);
int QBoxLayout_virtualbase_IndexOf(const void* self, QWidget* param1);
void QBoxLayout_override_virtual_IsEmpty(void* self, intptr_t slot);
bool QBoxLayout_virtualbase_IsEmpty(const void* self);
void QBoxLayout_override_virtual_ControlTypes(void* self, intptr_t slot);
int QBoxLayout_virtualbase_ControlTypes(const void* self);
void QBoxLayout_override_virtual_ReplaceWidget(void* self, intptr_t slot);
QLayoutItem* QBoxLayout_virtualbase_ReplaceWidget(void* self, QWidget* from, QWidget* to, int options);
void QBoxLayout_override_virtual_Layout(void* self, intptr_t slot);
QLayout* QBoxLayout_virtualbase_Layout(void* self);
void QBoxLayout_override_virtual_ChildEvent(void* self, intptr_t slot);
void QBoxLayout_virtualbase_ChildEvent(void* self, QChildEvent* e);
void QBoxLayout_Delete(QBoxLayout* self);

QHBoxLayout* QHBoxLayout_new(QWidget* parent);
QHBoxLayout* QHBoxLayout_new2();
void QHBoxLayout_virtbase(QHBoxLayout* src, QBoxLayout** outptr_QBoxLayout);
QMetaObject* QHBoxLayout_MetaObject(const QHBoxLayout* self);
void* QHBoxLayout_Metacast(QHBoxLayout* self, const char* param1);
struct miqt_string QHBoxLayout_Tr(const char* s);
struct miqt_string QHBoxLayout_Tr2(const char* s, const char* c);
struct miqt_string QHBoxLayout_Tr3(const char* s, const char* c, int n);
void QHBoxLayout_override_virtual_AddItem(void* self, intptr_t slot);
void QHBoxLayout_virtualbase_AddItem(void* self, QLayoutItem* param1);
void QHBoxLayout_override_virtual_Spacing(void* self, intptr_t slot);
int QHBoxLayout_virtualbase_Spacing(const void* self);
void QHBoxLayout_override_virtual_SetSpacing(void* self, intptr_t slot);
void QHBoxLayout_virtualbase_SetSpacing(void* self, int spacing);
void QHBoxLayout_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QHBoxLayout_virtualbase_SizeHint(const void* self);
void QHBoxLayout_override_virtual_MinimumSize(void* self, intptr_t slot);
QSize* QHBoxLayout_virtualbase_MinimumSize(const void* self);
void QHBoxLayout_override_virtual_MaximumSize(void* self, intptr_t slot);
QSize* QHBoxLayout_virtualbase_MaximumSize(const void* self);
void QHBoxLayout_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QHBoxLayout_virtualbase_HasHeightForWidth(const void* self);
void QHBoxLayout_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QHBoxLayout_virtualbase_HeightForWidth(const void* self, int param1);
void QHBoxLayout_override_virtual_MinimumHeightForWidth(void* self, intptr_t slot);
int QHBoxLayout_virtualbase_MinimumHeightForWidth(const void* self, int param1);
void QHBoxLayout_override_virtual_ExpandingDirections(void* self, intptr_t slot);
int QHBoxLayout_virtualbase_ExpandingDirections(const void* self);
void QHBoxLayout_override_virtual_Invalidate(void* self, intptr_t slot);
void QHBoxLayout_virtualbase_Invalidate(void* self);
void QHBoxLayout_override_virtual_ItemAt(void* self, intptr_t slot);
QLayoutItem* QHBoxLayout_virtualbase_ItemAt(const void* self, int param1);
void QHBoxLayout_override_virtual_TakeAt(void* self, intptr_t slot);
QLayoutItem* QHBoxLayout_virtualbase_TakeAt(void* self, int param1);
void QHBoxLayout_override_virtual_Count(void* self, intptr_t slot);
int QHBoxLayout_virtualbase_Count(const void* self);
void QHBoxLayout_override_virtual_SetGeometry(void* self, intptr_t slot);
void QHBoxLayout_virtualbase_SetGeometry(void* self, QRect* geometry);
void QHBoxLayout_Delete(QHBoxLayout* self);

QVBoxLayout* QVBoxLayout_new(QWidget* parent);
QVBoxLayout* QVBoxLayout_new2();
void QVBoxLayout_virtbase(QVBoxLayout* src, QBoxLayout** outptr_QBoxLayout);
QMetaObject* QVBoxLayout_MetaObject(const QVBoxLayout* self);
void* QVBoxLayout_Metacast(QVBoxLayout* self, const char* param1);
struct miqt_string QVBoxLayout_Tr(const char* s);
struct miqt_string QVBoxLayout_Tr2(const char* s, const char* c);
struct miqt_string QVBoxLayout_Tr3(const char* s, const char* c, int n);
void QVBoxLayout_override_virtual_AddItem(void* self, intptr_t slot);
void QVBoxLayout_virtualbase_AddItem(void* self, QLayoutItem* param1);
void QVBoxLayout_override_virtual_Spacing(void* self, intptr_t slot);
int QVBoxLayout_virtualbase_Spacing(const void* self);
void QVBoxLayout_override_virtual_SetSpacing(void* self, intptr_t slot);
void QVBoxLayout_virtualbase_SetSpacing(void* self, int spacing);
void QVBoxLayout_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QVBoxLayout_virtualbase_SizeHint(const void* self);
void QVBoxLayout_override_virtual_MinimumSize(void* self, intptr_t slot);
QSize* QVBoxLayout_virtualbase_MinimumSize(const void* self);
void QVBoxLayout_override_virtual_MaximumSize(void* self, intptr_t slot);
QSize* QVBoxLayout_virtualbase_MaximumSize(const void* self);
void QVBoxLayout_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QVBoxLayout_virtualbase_HasHeightForWidth(const void* self);
void QVBoxLayout_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QVBoxLayout_virtualbase_HeightForWidth(const void* self, int param1);
void QVBoxLayout_override_virtual_MinimumHeightForWidth(void* self, intptr_t slot);
int QVBoxLayout_virtualbase_MinimumHeightForWidth(const void* self, int param1);
void QVBoxLayout_override_virtual_ExpandingDirections(void* self, intptr_t slot);
int QVBoxLayout_virtualbase_ExpandingDirections(const void* self);
void QVBoxLayout_override_virtual_Invalidate(void* self, intptr_t slot);
void QVBoxLayout_virtualbase_Invalidate(void* self);
void QVBoxLayout_override_virtual_ItemAt(void* self, intptr_t slot);
QLayoutItem* QVBoxLayout_virtualbase_ItemAt(const void* self, int param1);
void QVBoxLayout_override_virtual_TakeAt(void* self, intptr_t slot);
QLayoutItem* QVBoxLayout_virtualbase_TakeAt(void* self, int param1);
void QVBoxLayout_override_virtual_Count(void* self, intptr_t slot);
int QVBoxLayout_virtualbase_Count(const void* self);
void QVBoxLayout_override_virtual_SetGeometry(void* self, intptr_t slot);
void QVBoxLayout_virtualbase_SetGeometry(void* self, QRect* geometry);
void QVBoxLayout_Delete(QVBoxLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
