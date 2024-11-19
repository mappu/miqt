#pragma once
#ifndef MIQT_QT_GEN_QLAYOUTITEM_H
#define MIQT_QT_GEN_QLAYOUTITEM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QLayout;
class QLayoutItem;
class QRect;
class QSize;
class QSizePolicy;
class QSpacerItem;
class QWidget;
class QWidgetItem;
class QWidgetItemV2;
#else
typedef struct QLayout QLayout;
typedef struct QLayoutItem QLayoutItem;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QSizePolicy QSizePolicy;
typedef struct QSpacerItem QSpacerItem;
typedef struct QWidget QWidget;
typedef struct QWidgetItem QWidgetItem;
typedef struct QWidgetItemV2 QWidgetItemV2;
#endif

QSize* QLayoutItem_SizeHint(const QLayoutItem* self);
QSize* QLayoutItem_MinimumSize(const QLayoutItem* self);
QSize* QLayoutItem_MaximumSize(const QLayoutItem* self);
int QLayoutItem_ExpandingDirections(const QLayoutItem* self);
void QLayoutItem_SetGeometry(QLayoutItem* self, QRect* geometry);
QRect* QLayoutItem_Geometry(const QLayoutItem* self);
bool QLayoutItem_IsEmpty(const QLayoutItem* self);
bool QLayoutItem_HasHeightForWidth(const QLayoutItem* self);
int QLayoutItem_HeightForWidth(const QLayoutItem* self, int param1);
int QLayoutItem_MinimumHeightForWidth(const QLayoutItem* self, int param1);
void QLayoutItem_Invalidate(QLayoutItem* self);
QWidget* QLayoutItem_Widget(QLayoutItem* self);
QLayout* QLayoutItem_Layout(QLayoutItem* self);
QSpacerItem* QLayoutItem_SpacerItem(QLayoutItem* self);
int QLayoutItem_Alignment(const QLayoutItem* self);
void QLayoutItem_SetAlignment(QLayoutItem* self, int a);
int QLayoutItem_ControlTypes(const QLayoutItem* self);
void QLayoutItem_Delete(QLayoutItem* self, bool isSubclass);

void QSpacerItem_new(int w, int h, QSpacerItem** outptr_QSpacerItem, QLayoutItem** outptr_QLayoutItem);
void QSpacerItem_new2(QSpacerItem* param1, QSpacerItem** outptr_QSpacerItem, QLayoutItem** outptr_QLayoutItem);
void QSpacerItem_new3(int w, int h, int hData, QSpacerItem** outptr_QSpacerItem, QLayoutItem** outptr_QLayoutItem);
void QSpacerItem_new4(int w, int h, int hData, int vData, QSpacerItem** outptr_QSpacerItem, QLayoutItem** outptr_QLayoutItem);
void QSpacerItem_ChangeSize(QSpacerItem* self, int w, int h);
QSize* QSpacerItem_SizeHint(const QSpacerItem* self);
QSize* QSpacerItem_MinimumSize(const QSpacerItem* self);
QSize* QSpacerItem_MaximumSize(const QSpacerItem* self);
int QSpacerItem_ExpandingDirections(const QSpacerItem* self);
bool QSpacerItem_IsEmpty(const QSpacerItem* self);
void QSpacerItem_SetGeometry(QSpacerItem* self, QRect* geometry);
QRect* QSpacerItem_Geometry(const QSpacerItem* self);
QSpacerItem* QSpacerItem_SpacerItem(QSpacerItem* self);
QSizePolicy* QSpacerItem_SizePolicy(const QSpacerItem* self);
void QSpacerItem_ChangeSize3(QSpacerItem* self, int w, int h, int hData);
void QSpacerItem_ChangeSize4(QSpacerItem* self, int w, int h, int hData, int vData);
void QSpacerItem_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QSpacerItem_virtualbase_SizeHint(const void* self);
void QSpacerItem_override_virtual_MinimumSize(void* self, intptr_t slot);
QSize* QSpacerItem_virtualbase_MinimumSize(const void* self);
void QSpacerItem_override_virtual_MaximumSize(void* self, intptr_t slot);
QSize* QSpacerItem_virtualbase_MaximumSize(const void* self);
void QSpacerItem_override_virtual_ExpandingDirections(void* self, intptr_t slot);
int QSpacerItem_virtualbase_ExpandingDirections(const void* self);
void QSpacerItem_override_virtual_IsEmpty(void* self, intptr_t slot);
bool QSpacerItem_virtualbase_IsEmpty(const void* self);
void QSpacerItem_override_virtual_SetGeometry(void* self, intptr_t slot);
void QSpacerItem_virtualbase_SetGeometry(void* self, QRect* geometry);
void QSpacerItem_override_virtual_Geometry(void* self, intptr_t slot);
QRect* QSpacerItem_virtualbase_Geometry(const void* self);
void QSpacerItem_override_virtual_SpacerItem(void* self, intptr_t slot);
QSpacerItem* QSpacerItem_virtualbase_SpacerItem(void* self);
void QSpacerItem_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QSpacerItem_virtualbase_HasHeightForWidth(const void* self);
void QSpacerItem_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QSpacerItem_virtualbase_HeightForWidth(const void* self, int param1);
void QSpacerItem_override_virtual_MinimumHeightForWidth(void* self, intptr_t slot);
int QSpacerItem_virtualbase_MinimumHeightForWidth(const void* self, int param1);
void QSpacerItem_override_virtual_Invalidate(void* self, intptr_t slot);
void QSpacerItem_virtualbase_Invalidate(void* self);
void QSpacerItem_override_virtual_Widget(void* self, intptr_t slot);
QWidget* QSpacerItem_virtualbase_Widget(void* self);
void QSpacerItem_override_virtual_Layout(void* self, intptr_t slot);
QLayout* QSpacerItem_virtualbase_Layout(void* self);
void QSpacerItem_override_virtual_ControlTypes(void* self, intptr_t slot);
int QSpacerItem_virtualbase_ControlTypes(const void* self);
void QSpacerItem_Delete(QSpacerItem* self, bool isSubclass);

void QWidgetItem_new(QWidget* w, QWidgetItem** outptr_QWidgetItem, QLayoutItem** outptr_QLayoutItem);
QSize* QWidgetItem_SizeHint(const QWidgetItem* self);
QSize* QWidgetItem_MinimumSize(const QWidgetItem* self);
QSize* QWidgetItem_MaximumSize(const QWidgetItem* self);
int QWidgetItem_ExpandingDirections(const QWidgetItem* self);
bool QWidgetItem_IsEmpty(const QWidgetItem* self);
void QWidgetItem_SetGeometry(QWidgetItem* self, QRect* geometry);
QRect* QWidgetItem_Geometry(const QWidgetItem* self);
QWidget* QWidgetItem_Widget(QWidgetItem* self);
bool QWidgetItem_HasHeightForWidth(const QWidgetItem* self);
int QWidgetItem_HeightForWidth(const QWidgetItem* self, int param1);
int QWidgetItem_ControlTypes(const QWidgetItem* self);
void QWidgetItem_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QWidgetItem_virtualbase_SizeHint(const void* self);
void QWidgetItem_override_virtual_MinimumSize(void* self, intptr_t slot);
QSize* QWidgetItem_virtualbase_MinimumSize(const void* self);
void QWidgetItem_override_virtual_MaximumSize(void* self, intptr_t slot);
QSize* QWidgetItem_virtualbase_MaximumSize(const void* self);
void QWidgetItem_override_virtual_ExpandingDirections(void* self, intptr_t slot);
int QWidgetItem_virtualbase_ExpandingDirections(const void* self);
void QWidgetItem_override_virtual_IsEmpty(void* self, intptr_t slot);
bool QWidgetItem_virtualbase_IsEmpty(const void* self);
void QWidgetItem_override_virtual_SetGeometry(void* self, intptr_t slot);
void QWidgetItem_virtualbase_SetGeometry(void* self, QRect* geometry);
void QWidgetItem_override_virtual_Geometry(void* self, intptr_t slot);
QRect* QWidgetItem_virtualbase_Geometry(const void* self);
void QWidgetItem_override_virtual_Widget(void* self, intptr_t slot);
QWidget* QWidgetItem_virtualbase_Widget(void* self);
void QWidgetItem_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QWidgetItem_virtualbase_HasHeightForWidth(const void* self);
void QWidgetItem_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QWidgetItem_virtualbase_HeightForWidth(const void* self, int param1);
void QWidgetItem_override_virtual_ControlTypes(void* self, intptr_t slot);
int QWidgetItem_virtualbase_ControlTypes(const void* self);
void QWidgetItem_override_virtual_MinimumHeightForWidth(void* self, intptr_t slot);
int QWidgetItem_virtualbase_MinimumHeightForWidth(const void* self, int param1);
void QWidgetItem_override_virtual_Invalidate(void* self, intptr_t slot);
void QWidgetItem_virtualbase_Invalidate(void* self);
void QWidgetItem_override_virtual_Layout(void* self, intptr_t slot);
QLayout* QWidgetItem_virtualbase_Layout(void* self);
void QWidgetItem_override_virtual_SpacerItem(void* self, intptr_t slot);
QSpacerItem* QWidgetItem_virtualbase_SpacerItem(void* self);
void QWidgetItem_Delete(QWidgetItem* self, bool isSubclass);

void QWidgetItemV2_new(QWidget* widget, QWidgetItemV2** outptr_QWidgetItemV2, QWidgetItem** outptr_QWidgetItem, QLayoutItem** outptr_QLayoutItem);
QSize* QWidgetItemV2_SizeHint(const QWidgetItemV2* self);
QSize* QWidgetItemV2_MinimumSize(const QWidgetItemV2* self);
QSize* QWidgetItemV2_MaximumSize(const QWidgetItemV2* self);
int QWidgetItemV2_HeightForWidth(const QWidgetItemV2* self, int width);
void QWidgetItemV2_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QWidgetItemV2_virtualbase_SizeHint(const void* self);
void QWidgetItemV2_override_virtual_MinimumSize(void* self, intptr_t slot);
QSize* QWidgetItemV2_virtualbase_MinimumSize(const void* self);
void QWidgetItemV2_override_virtual_MaximumSize(void* self, intptr_t slot);
QSize* QWidgetItemV2_virtualbase_MaximumSize(const void* self);
void QWidgetItemV2_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QWidgetItemV2_virtualbase_HeightForWidth(const void* self, int width);
void QWidgetItemV2_override_virtual_ExpandingDirections(void* self, intptr_t slot);
int QWidgetItemV2_virtualbase_ExpandingDirections(const void* self);
void QWidgetItemV2_override_virtual_IsEmpty(void* self, intptr_t slot);
bool QWidgetItemV2_virtualbase_IsEmpty(const void* self);
void QWidgetItemV2_override_virtual_SetGeometry(void* self, intptr_t slot);
void QWidgetItemV2_virtualbase_SetGeometry(void* self, QRect* geometry);
void QWidgetItemV2_override_virtual_Geometry(void* self, intptr_t slot);
QRect* QWidgetItemV2_virtualbase_Geometry(const void* self);
void QWidgetItemV2_override_virtual_Widget(void* self, intptr_t slot);
QWidget* QWidgetItemV2_virtualbase_Widget(void* self);
void QWidgetItemV2_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QWidgetItemV2_virtualbase_HasHeightForWidth(const void* self);
void QWidgetItemV2_override_virtual_ControlTypes(void* self, intptr_t slot);
int QWidgetItemV2_virtualbase_ControlTypes(const void* self);
void QWidgetItemV2_Delete(QWidgetItemV2* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
