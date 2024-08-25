#ifndef GEN_QLAYOUTITEM_H
#define GEN_QLAYOUTITEM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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

QSize* QLayoutItem_SizeHint(QLayoutItem* self);
QSize* QLayoutItem_MinimumSize(QLayoutItem* self);
QSize* QLayoutItem_MaximumSize(QLayoutItem* self);
void QLayoutItem_SetGeometry(QLayoutItem* self, QRect* geometry);
QRect* QLayoutItem_Geometry(QLayoutItem* self);
bool QLayoutItem_IsEmpty(QLayoutItem* self);
bool QLayoutItem_HasHeightForWidth(QLayoutItem* self);
int QLayoutItem_HeightForWidth(QLayoutItem* self, int param1);
int QLayoutItem_MinimumHeightForWidth(QLayoutItem* self, int param1);
void QLayoutItem_Invalidate(QLayoutItem* self);
QWidget* QLayoutItem_Widget(QLayoutItem* self);
QLayout* QLayoutItem_Layout(QLayoutItem* self);
QSpacerItem* QLayoutItem_SpacerItem(QLayoutItem* self);
void QLayoutItem_Delete(QLayoutItem* self);

QSpacerItem* QSpacerItem_new(QSpacerItem* param1);
QSize* QSpacerItem_SizeHint(QSpacerItem* self);
QSize* QSpacerItem_MinimumSize(QSpacerItem* self);
QSize* QSpacerItem_MaximumSize(QSpacerItem* self);
bool QSpacerItem_IsEmpty(QSpacerItem* self);
void QSpacerItem_SetGeometry(QSpacerItem* self, QRect* geometry);
QRect* QSpacerItem_Geometry(QSpacerItem* self);
QSpacerItem* QSpacerItem_SpacerItem(QSpacerItem* self);
QSizePolicy* QSpacerItem_SizePolicy(QSpacerItem* self);
void QSpacerItem_Delete(QSpacerItem* self);

QWidgetItem* QWidgetItem_new(QWidget* w);
QSize* QWidgetItem_SizeHint(QWidgetItem* self);
QSize* QWidgetItem_MinimumSize(QWidgetItem* self);
QSize* QWidgetItem_MaximumSize(QWidgetItem* self);
bool QWidgetItem_IsEmpty(QWidgetItem* self);
void QWidgetItem_SetGeometry(QWidgetItem* self, QRect* geometry);
QRect* QWidgetItem_Geometry(QWidgetItem* self);
QWidget* QWidgetItem_Widget(QWidgetItem* self);
bool QWidgetItem_HasHeightForWidth(QWidgetItem* self);
int QWidgetItem_HeightForWidth(QWidgetItem* self, int param1);
void QWidgetItem_Delete(QWidgetItem* self);

QWidgetItemV2* QWidgetItemV2_new(QWidget* widget);
QSize* QWidgetItemV2_SizeHint(QWidgetItemV2* self);
QSize* QWidgetItemV2_MinimumSize(QWidgetItemV2* self);
QSize* QWidgetItemV2_MaximumSize(QWidgetItemV2* self);
int QWidgetItemV2_HeightForWidth(QWidgetItemV2* self, int width);
void QWidgetItemV2_Delete(QWidgetItemV2* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
