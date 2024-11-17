#pragma once
#ifndef MIQT_QT6_GEN_QTABBAR_H
#define MIQT_QT6_GEN_QTABBAR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QColor;
class QIcon;
class QMetaObject;
class QPoint;
class QRect;
class QSize;
class QTabBar;
class QVariant;
class QWidget;
#else
typedef struct QColor QColor;
typedef struct QIcon QIcon;
typedef struct QMetaObject QMetaObject;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QTabBar QTabBar;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QTabBar* QTabBar_new(QWidget* parent);
QTabBar* QTabBar_new2();
QMetaObject* QTabBar_MetaObject(const QTabBar* self);
void* QTabBar_Metacast(QTabBar* self, const char* param1);
struct miqt_string QTabBar_Tr(const char* s);
int QTabBar_Shape(const QTabBar* self);
void QTabBar_SetShape(QTabBar* self, int shape);
int QTabBar_AddTab(QTabBar* self, struct miqt_string text);
int QTabBar_AddTab2(QTabBar* self, QIcon* icon, struct miqt_string text);
int QTabBar_InsertTab(QTabBar* self, int index, struct miqt_string text);
int QTabBar_InsertTab2(QTabBar* self, int index, QIcon* icon, struct miqt_string text);
void QTabBar_RemoveTab(QTabBar* self, int index);
void QTabBar_MoveTab(QTabBar* self, int from, int to);
bool QTabBar_IsTabEnabled(const QTabBar* self, int index);
void QTabBar_SetTabEnabled(QTabBar* self, int index, bool enabled);
bool QTabBar_IsTabVisible(const QTabBar* self, int index);
void QTabBar_SetTabVisible(QTabBar* self, int index, bool visible);
struct miqt_string QTabBar_TabText(const QTabBar* self, int index);
void QTabBar_SetTabText(QTabBar* self, int index, struct miqt_string text);
QColor* QTabBar_TabTextColor(const QTabBar* self, int index);
void QTabBar_SetTabTextColor(QTabBar* self, int index, QColor* color);
QIcon* QTabBar_TabIcon(const QTabBar* self, int index);
void QTabBar_SetTabIcon(QTabBar* self, int index, QIcon* icon);
int QTabBar_ElideMode(const QTabBar* self);
void QTabBar_SetElideMode(QTabBar* self, int mode);
void QTabBar_SetTabToolTip(QTabBar* self, int index, struct miqt_string tip);
struct miqt_string QTabBar_TabToolTip(const QTabBar* self, int index);
void QTabBar_SetTabWhatsThis(QTabBar* self, int index, struct miqt_string text);
struct miqt_string QTabBar_TabWhatsThis(const QTabBar* self, int index);
void QTabBar_SetTabData(QTabBar* self, int index, QVariant* data);
QVariant* QTabBar_TabData(const QTabBar* self, int index);
QRect* QTabBar_TabRect(const QTabBar* self, int index);
int QTabBar_TabAt(const QTabBar* self, QPoint* pos);
int QTabBar_CurrentIndex(const QTabBar* self);
int QTabBar_Count(const QTabBar* self);
QSize* QTabBar_SizeHint(const QTabBar* self);
QSize* QTabBar_MinimumSizeHint(const QTabBar* self);
void QTabBar_SetDrawBase(QTabBar* self, bool drawTheBase);
bool QTabBar_DrawBase(const QTabBar* self);
QSize* QTabBar_IconSize(const QTabBar* self);
void QTabBar_SetIconSize(QTabBar* self, QSize* size);
bool QTabBar_UsesScrollButtons(const QTabBar* self);
void QTabBar_SetUsesScrollButtons(QTabBar* self, bool useButtons);
bool QTabBar_TabsClosable(const QTabBar* self);
void QTabBar_SetTabsClosable(QTabBar* self, bool closable);
void QTabBar_SetTabButton(QTabBar* self, int index, int position, QWidget* widget);
QWidget* QTabBar_TabButton(const QTabBar* self, int index, int position);
int QTabBar_SelectionBehaviorOnRemove(const QTabBar* self);
void QTabBar_SetSelectionBehaviorOnRemove(QTabBar* self, int behavior);
bool QTabBar_Expanding(const QTabBar* self);
void QTabBar_SetExpanding(QTabBar* self, bool enabled);
bool QTabBar_IsMovable(const QTabBar* self);
void QTabBar_SetMovable(QTabBar* self, bool movable);
bool QTabBar_DocumentMode(const QTabBar* self);
void QTabBar_SetDocumentMode(QTabBar* self, bool set);
bool QTabBar_AutoHide(const QTabBar* self);
void QTabBar_SetAutoHide(QTabBar* self, bool hide);
bool QTabBar_ChangeCurrentOnDrag(const QTabBar* self);
void QTabBar_SetChangeCurrentOnDrag(QTabBar* self, bool change);
struct miqt_string QTabBar_AccessibleTabName(const QTabBar* self, int index);
void QTabBar_SetAccessibleTabName(QTabBar* self, int index, struct miqt_string name);
void QTabBar_SetCurrentIndex(QTabBar* self, int index);
void QTabBar_CurrentChanged(QTabBar* self, int index);
void QTabBar_connect_CurrentChanged(QTabBar* self, intptr_t slot);
void QTabBar_TabCloseRequested(QTabBar* self, int index);
void QTabBar_connect_TabCloseRequested(QTabBar* self, intptr_t slot);
void QTabBar_TabMoved(QTabBar* self, int from, int to);
void QTabBar_connect_TabMoved(QTabBar* self, intptr_t slot);
void QTabBar_TabBarClicked(QTabBar* self, int index);
void QTabBar_connect_TabBarClicked(QTabBar* self, intptr_t slot);
void QTabBar_TabBarDoubleClicked(QTabBar* self, int index);
void QTabBar_connect_TabBarDoubleClicked(QTabBar* self, intptr_t slot);
struct miqt_string QTabBar_Tr2(const char* s, const char* c);
struct miqt_string QTabBar_Tr3(const char* s, const char* c, int n);
void QTabBar_Delete(QTabBar* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
