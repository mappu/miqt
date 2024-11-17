#pragma once
#ifndef MIQT_QT6_GEN_QLAYOUT_H
#define MIQT_QT6_GEN_QLAYOUT_H

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
class QMargins;
class QMetaObject;
class QRect;
class QSize;
class QWidget;
#else
typedef struct QLayout QLayout;
typedef struct QLayoutItem QLayoutItem;
typedef struct QMargins QMargins;
typedef struct QMetaObject QMetaObject;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QMetaObject* QLayout_MetaObject(const QLayout* self);
void* QLayout_Metacast(QLayout* self, const char* param1);
struct miqt_string QLayout_Tr(const char* s);
int QLayout_Spacing(const QLayout* self);
void QLayout_SetSpacing(QLayout* self, int spacing);
void QLayout_SetContentsMargins(QLayout* self, int left, int top, int right, int bottom);
void QLayout_SetContentsMarginsWithMargins(QLayout* self, QMargins* margins);
void QLayout_UnsetContentsMargins(QLayout* self);
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
int QLayout_TotalMinimumHeightForWidth(const QLayout* self, int w);
int QLayout_TotalHeightForWidth(const QLayout* self, int w);
QSize* QLayout_TotalMinimumSize(const QLayout* self);
QSize* QLayout_TotalMaximumSize(const QLayout* self);
QSize* QLayout_TotalSizeHint(const QLayout* self);
QLayout* QLayout_Layout(QLayout* self);
void QLayout_SetEnabled(QLayout* self, bool enabled);
bool QLayout_IsEnabled(const QLayout* self);
QSize* QLayout_ClosestAcceptableSize(QWidget* w, QSize* s);
struct miqt_string QLayout_Tr2(const char* s, const char* c);
struct miqt_string QLayout_Tr3(const char* s, const char* c, int n);
QLayoutItem* QLayout_ReplaceWidget3(QLayout* self, QWidget* from, QWidget* to, int options);
void QLayout_Delete(QLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
