#ifndef GEN_QTABWIDGET_H
#define GEN_QTABWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QIcon;
class QMetaObject;
class QSize;
class QTabBar;
class QTabWidget;
class QWidget;
#else
typedef struct QIcon QIcon;
typedef struct QMetaObject QMetaObject;
typedef struct QSize QSize;
typedef struct QTabBar QTabBar;
typedef struct QTabWidget QTabWidget;
typedef struct QWidget QWidget;
#endif

QTabWidget* QTabWidget_new();
QTabWidget* QTabWidget_new2(QWidget* parent);
QMetaObject* QTabWidget_MetaObject(const QTabWidget* self);
void* QTabWidget_Metacast(QTabWidget* self, const char* param1);
struct miqt_string* QTabWidget_Tr(const char* s);
struct miqt_string* QTabWidget_TrUtf8(const char* s);
int QTabWidget_AddTab(QTabWidget* self, QWidget* widget, struct miqt_string* param2);
int QTabWidget_AddTab2(QTabWidget* self, QWidget* widget, QIcon* icon, struct miqt_string* label);
int QTabWidget_InsertTab(QTabWidget* self, int index, QWidget* widget, struct miqt_string* param3);
int QTabWidget_InsertTab2(QTabWidget* self, int index, QWidget* widget, QIcon* icon, struct miqt_string* label);
void QTabWidget_RemoveTab(QTabWidget* self, int index);
bool QTabWidget_IsTabEnabled(const QTabWidget* self, int index);
void QTabWidget_SetTabEnabled(QTabWidget* self, int index, bool enabled);
bool QTabWidget_IsTabVisible(const QTabWidget* self, int index);
void QTabWidget_SetTabVisible(QTabWidget* self, int index, bool visible);
struct miqt_string* QTabWidget_TabText(const QTabWidget* self, int index);
void QTabWidget_SetTabText(QTabWidget* self, int index, struct miqt_string* text);
QIcon* QTabWidget_TabIcon(const QTabWidget* self, int index);
void QTabWidget_SetTabIcon(QTabWidget* self, int index, QIcon* icon);
void QTabWidget_SetTabToolTip(QTabWidget* self, int index, struct miqt_string* tip);
struct miqt_string* QTabWidget_TabToolTip(const QTabWidget* self, int index);
void QTabWidget_SetTabWhatsThis(QTabWidget* self, int index, struct miqt_string* text);
struct miqt_string* QTabWidget_TabWhatsThis(const QTabWidget* self, int index);
int QTabWidget_CurrentIndex(const QTabWidget* self);
QWidget* QTabWidget_CurrentWidget(const QTabWidget* self);
QWidget* QTabWidget_Widget(const QTabWidget* self, int index);
int QTabWidget_IndexOf(const QTabWidget* self, QWidget* widget);
int QTabWidget_Count(const QTabWidget* self);
int QTabWidget_TabPosition(const QTabWidget* self);
void QTabWidget_SetTabPosition(QTabWidget* self, int position);
bool QTabWidget_TabsClosable(const QTabWidget* self);
void QTabWidget_SetTabsClosable(QTabWidget* self, bool closeable);
bool QTabWidget_IsMovable(const QTabWidget* self);
void QTabWidget_SetMovable(QTabWidget* self, bool movable);
int QTabWidget_TabShape(const QTabWidget* self);
void QTabWidget_SetTabShape(QTabWidget* self, int s);
QSize* QTabWidget_SizeHint(const QTabWidget* self);
QSize* QTabWidget_MinimumSizeHint(const QTabWidget* self);
int QTabWidget_HeightForWidth(const QTabWidget* self, int width);
bool QTabWidget_HasHeightForWidth(const QTabWidget* self);
void QTabWidget_SetCornerWidget(QTabWidget* self, QWidget* w);
QWidget* QTabWidget_CornerWidget(const QTabWidget* self);
int QTabWidget_ElideMode(const QTabWidget* self);
void QTabWidget_SetElideMode(QTabWidget* self, int mode);
QSize* QTabWidget_IconSize(const QTabWidget* self);
void QTabWidget_SetIconSize(QTabWidget* self, QSize* size);
bool QTabWidget_UsesScrollButtons(const QTabWidget* self);
void QTabWidget_SetUsesScrollButtons(QTabWidget* self, bool useButtons);
bool QTabWidget_DocumentMode(const QTabWidget* self);
void QTabWidget_SetDocumentMode(QTabWidget* self, bool set);
bool QTabWidget_TabBarAutoHide(const QTabWidget* self);
void QTabWidget_SetTabBarAutoHide(QTabWidget* self, bool enabled);
void QTabWidget_Clear(QTabWidget* self);
QTabBar* QTabWidget_TabBar(const QTabWidget* self);
void QTabWidget_SetCurrentIndex(QTabWidget* self, int index);
void QTabWidget_SetCurrentWidget(QTabWidget* self, QWidget* widget);
void QTabWidget_CurrentChanged(QTabWidget* self, int index);
void QTabWidget_connect_CurrentChanged(QTabWidget* self, intptr_t slot);
void QTabWidget_TabCloseRequested(QTabWidget* self, int index);
void QTabWidget_connect_TabCloseRequested(QTabWidget* self, intptr_t slot);
void QTabWidget_TabBarClicked(QTabWidget* self, int index);
void QTabWidget_connect_TabBarClicked(QTabWidget* self, intptr_t slot);
void QTabWidget_TabBarDoubleClicked(QTabWidget* self, int index);
void QTabWidget_connect_TabBarDoubleClicked(QTabWidget* self, intptr_t slot);
struct miqt_string* QTabWidget_Tr2(const char* s, const char* c);
struct miqt_string* QTabWidget_Tr3(const char* s, const char* c, int n);
struct miqt_string* QTabWidget_TrUtf82(const char* s, const char* c);
struct miqt_string* QTabWidget_TrUtf83(const char* s, const char* c, int n);
void QTabWidget_SetCornerWidget2(QTabWidget* self, QWidget* w, int corner);
QWidget* QTabWidget_CornerWidget1(const QTabWidget* self, int corner);
void QTabWidget_Delete(QTabWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
