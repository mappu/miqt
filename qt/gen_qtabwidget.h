#ifndef GEN_QTABWIDGET_H
#define GEN_QTABWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QMetaObject* QTabWidget_MetaObject(QTabWidget* self);
void QTabWidget_Tr(const char* s, char** _out, int* _out_Strlen);
void QTabWidget_TrUtf8(const char* s, char** _out, int* _out_Strlen);
int QTabWidget_AddTab(QTabWidget* self, QWidget* widget, const char* param2, size_t param2_Strlen);
int QTabWidget_AddTab2(QTabWidget* self, QWidget* widget, QIcon* icon, const char* label, size_t label_Strlen);
int QTabWidget_InsertTab(QTabWidget* self, int index, QWidget* widget, const char* param3, size_t param3_Strlen);
int QTabWidget_InsertTab2(QTabWidget* self, int index, QWidget* widget, QIcon* icon, const char* label, size_t label_Strlen);
void QTabWidget_RemoveTab(QTabWidget* self, int index);
bool QTabWidget_IsTabEnabled(QTabWidget* self, int index);
void QTabWidget_SetTabEnabled(QTabWidget* self, int index, bool enabled);
bool QTabWidget_IsTabVisible(QTabWidget* self, int index);
void QTabWidget_SetTabVisible(QTabWidget* self, int index, bool visible);
void QTabWidget_TabText(QTabWidget* self, int index, char** _out, int* _out_Strlen);
void QTabWidget_SetTabText(QTabWidget* self, int index, const char* text, size_t text_Strlen);
QIcon* QTabWidget_TabIcon(QTabWidget* self, int index);
void QTabWidget_SetTabIcon(QTabWidget* self, int index, QIcon* icon);
void QTabWidget_SetTabToolTip(QTabWidget* self, int index, const char* tip, size_t tip_Strlen);
void QTabWidget_TabToolTip(QTabWidget* self, int index, char** _out, int* _out_Strlen);
void QTabWidget_SetTabWhatsThis(QTabWidget* self, int index, const char* text, size_t text_Strlen);
void QTabWidget_TabWhatsThis(QTabWidget* self, int index, char** _out, int* _out_Strlen);
int QTabWidget_CurrentIndex(QTabWidget* self);
QWidget* QTabWidget_CurrentWidget(QTabWidget* self);
QWidget* QTabWidget_Widget(QTabWidget* self, int index);
int QTabWidget_IndexOf(QTabWidget* self, QWidget* widget);
int QTabWidget_Count(QTabWidget* self);
uintptr_t QTabWidget_TabPosition(QTabWidget* self);
void QTabWidget_SetTabPosition(QTabWidget* self, uintptr_t position);
bool QTabWidget_TabsClosable(QTabWidget* self);
void QTabWidget_SetTabsClosable(QTabWidget* self, bool closeable);
bool QTabWidget_IsMovable(QTabWidget* self);
void QTabWidget_SetMovable(QTabWidget* self, bool movable);
uintptr_t QTabWidget_TabShape(QTabWidget* self);
void QTabWidget_SetTabShape(QTabWidget* self, uintptr_t s);
QSize* QTabWidget_SizeHint(QTabWidget* self);
QSize* QTabWidget_MinimumSizeHint(QTabWidget* self);
int QTabWidget_HeightForWidth(QTabWidget* self, int width);
bool QTabWidget_HasHeightForWidth(QTabWidget* self);
void QTabWidget_SetCornerWidget(QTabWidget* self, QWidget* w);
QWidget* QTabWidget_CornerWidget(QTabWidget* self);
uintptr_t QTabWidget_ElideMode(QTabWidget* self);
void QTabWidget_SetElideMode(QTabWidget* self, uintptr_t mode);
QSize* QTabWidget_IconSize(QTabWidget* self);
void QTabWidget_SetIconSize(QTabWidget* self, QSize* size);
bool QTabWidget_UsesScrollButtons(QTabWidget* self);
void QTabWidget_SetUsesScrollButtons(QTabWidget* self, bool useButtons);
bool QTabWidget_DocumentMode(QTabWidget* self);
void QTabWidget_SetDocumentMode(QTabWidget* self, bool set);
bool QTabWidget_TabBarAutoHide(QTabWidget* self);
void QTabWidget_SetTabBarAutoHide(QTabWidget* self, bool enabled);
void QTabWidget_Clear(QTabWidget* self);
QTabBar* QTabWidget_TabBar(QTabWidget* self);
void QTabWidget_SetCurrentIndex(QTabWidget* self, int index);
void QTabWidget_SetCurrentWidget(QTabWidget* self, QWidget* widget);
void QTabWidget_CurrentChanged(QTabWidget* self, int index);
void QTabWidget_connect_CurrentChanged(QTabWidget* self, void* slot);
void QTabWidget_TabCloseRequested(QTabWidget* self, int index);
void QTabWidget_connect_TabCloseRequested(QTabWidget* self, void* slot);
void QTabWidget_TabBarClicked(QTabWidget* self, int index);
void QTabWidget_connect_TabBarClicked(QTabWidget* self, void* slot);
void QTabWidget_TabBarDoubleClicked(QTabWidget* self, int index);
void QTabWidget_connect_TabBarDoubleClicked(QTabWidget* self, void* slot);
void QTabWidget_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QTabWidget_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QTabWidget_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QTabWidget_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QTabWidget_SetCornerWidget2(QTabWidget* self, QWidget* w, uintptr_t corner);
QWidget* QTabWidget_CornerWidget1(QTabWidget* self, uintptr_t corner);
void QTabWidget_Delete(QTabWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
