#ifndef GEN_QLAYOUTITEM_H
#define GEN_QLAYOUTITEM_H

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
QWidget* QLayoutItem_Widget(const QLayoutItem* self);
QLayout* QLayoutItem_Layout(QLayoutItem* self);
QSpacerItem* QLayoutItem_SpacerItem(QLayoutItem* self);
int QLayoutItem_Alignment(const QLayoutItem* self);
void QLayoutItem_SetAlignment(QLayoutItem* self, int a);
int QLayoutItem_ControlTypes(const QLayoutItem* self);
void QLayoutItem_Delete(QLayoutItem* self);

QSpacerItem* QSpacerItem_new(int w, int h);
QSpacerItem* QSpacerItem_new2(QSpacerItem* param1);
QSpacerItem* QSpacerItem_new3(int w, int h, int hData);
QSpacerItem* QSpacerItem_new4(int w, int h, int hData, int vData);
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
void QSpacerItem_Delete(QSpacerItem* self);

QWidgetItem* QWidgetItem_new(QWidget* w);
QSize* QWidgetItem_SizeHint(const QWidgetItem* self);
QSize* QWidgetItem_MinimumSize(const QWidgetItem* self);
QSize* QWidgetItem_MaximumSize(const QWidgetItem* self);
int QWidgetItem_ExpandingDirections(const QWidgetItem* self);
bool QWidgetItem_IsEmpty(const QWidgetItem* self);
void QWidgetItem_SetGeometry(QWidgetItem* self, QRect* geometry);
QRect* QWidgetItem_Geometry(const QWidgetItem* self);
QWidget* QWidgetItem_Widget(const QWidgetItem* self);
bool QWidgetItem_HasHeightForWidth(const QWidgetItem* self);
int QWidgetItem_HeightForWidth(const QWidgetItem* self, int param1);
int QWidgetItem_MinimumHeightForWidth(const QWidgetItem* self, int param1);
int QWidgetItem_ControlTypes(const QWidgetItem* self);
void QWidgetItem_Delete(QWidgetItem* self);

QWidgetItemV2* QWidgetItemV2_new(QWidget* widget);
QSize* QWidgetItemV2_SizeHint(const QWidgetItemV2* self);
QSize* QWidgetItemV2_MinimumSize(const QWidgetItemV2* self);
QSize* QWidgetItemV2_MaximumSize(const QWidgetItemV2* self);
int QWidgetItemV2_HeightForWidth(const QWidgetItemV2* self, int width);
void QWidgetItemV2_Delete(QWidgetItemV2* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
