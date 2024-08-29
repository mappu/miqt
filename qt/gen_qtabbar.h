#ifndef GEN_QTABBAR_H
#define GEN_QTABBAR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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

QTabBar* QTabBar_new();
QTabBar* QTabBar_new2(QWidget* parent);
QMetaObject* QTabBar_MetaObject(QTabBar* self);
void QTabBar_Tr(const char* s, char** _out, int* _out_Strlen);
void QTabBar_TrUtf8(const char* s, char** _out, int* _out_Strlen);
uintptr_t QTabBar_Shape(QTabBar* self);
void QTabBar_SetShape(QTabBar* self, uintptr_t shape);
int QTabBar_AddTab(QTabBar* self, const char* text, size_t text_Strlen);
int QTabBar_AddTab2(QTabBar* self, QIcon* icon, const char* text, size_t text_Strlen);
int QTabBar_InsertTab(QTabBar* self, int index, const char* text, size_t text_Strlen);
int QTabBar_InsertTab2(QTabBar* self, int index, QIcon* icon, const char* text, size_t text_Strlen);
void QTabBar_RemoveTab(QTabBar* self, int index);
void QTabBar_MoveTab(QTabBar* self, int from, int to);
bool QTabBar_IsTabEnabled(QTabBar* self, int index);
void QTabBar_SetTabEnabled(QTabBar* self, int index, bool enabled);
bool QTabBar_IsTabVisible(QTabBar* self, int index);
void QTabBar_SetTabVisible(QTabBar* self, int index, bool visible);
void QTabBar_TabText(QTabBar* self, int index, char** _out, int* _out_Strlen);
void QTabBar_SetTabText(QTabBar* self, int index, const char* text, size_t text_Strlen);
QColor* QTabBar_TabTextColor(QTabBar* self, int index);
void QTabBar_SetTabTextColor(QTabBar* self, int index, QColor* color);
QIcon* QTabBar_TabIcon(QTabBar* self, int index);
void QTabBar_SetTabIcon(QTabBar* self, int index, QIcon* icon);
uintptr_t QTabBar_ElideMode(QTabBar* self);
void QTabBar_SetElideMode(QTabBar* self, uintptr_t mode);
void QTabBar_SetTabToolTip(QTabBar* self, int index, const char* tip, size_t tip_Strlen);
void QTabBar_TabToolTip(QTabBar* self, int index, char** _out, int* _out_Strlen);
void QTabBar_SetTabWhatsThis(QTabBar* self, int index, const char* text, size_t text_Strlen);
void QTabBar_TabWhatsThis(QTabBar* self, int index, char** _out, int* _out_Strlen);
void QTabBar_SetTabData(QTabBar* self, int index, QVariant* data);
QVariant* QTabBar_TabData(QTabBar* self, int index);
QRect* QTabBar_TabRect(QTabBar* self, int index);
int QTabBar_TabAt(QTabBar* self, QPoint* pos);
int QTabBar_CurrentIndex(QTabBar* self);
int QTabBar_Count(QTabBar* self);
QSize* QTabBar_SizeHint(QTabBar* self);
QSize* QTabBar_MinimumSizeHint(QTabBar* self);
void QTabBar_SetDrawBase(QTabBar* self, bool drawTheBase);
bool QTabBar_DrawBase(QTabBar* self);
QSize* QTabBar_IconSize(QTabBar* self);
void QTabBar_SetIconSize(QTabBar* self, QSize* size);
bool QTabBar_UsesScrollButtons(QTabBar* self);
void QTabBar_SetUsesScrollButtons(QTabBar* self, bool useButtons);
bool QTabBar_TabsClosable(QTabBar* self);
void QTabBar_SetTabsClosable(QTabBar* self, bool closable);
void QTabBar_SetTabButton(QTabBar* self, int index, uintptr_t position, QWidget* widget);
QWidget* QTabBar_TabButton(QTabBar* self, int index, uintptr_t position);
uintptr_t QTabBar_SelectionBehaviorOnRemove(QTabBar* self);
void QTabBar_SetSelectionBehaviorOnRemove(QTabBar* self, uintptr_t behavior);
bool QTabBar_Expanding(QTabBar* self);
void QTabBar_SetExpanding(QTabBar* self, bool enabled);
bool QTabBar_IsMovable(QTabBar* self);
void QTabBar_SetMovable(QTabBar* self, bool movable);
bool QTabBar_DocumentMode(QTabBar* self);
void QTabBar_SetDocumentMode(QTabBar* self, bool set);
bool QTabBar_AutoHide(QTabBar* self);
void QTabBar_SetAutoHide(QTabBar* self, bool hide);
bool QTabBar_ChangeCurrentOnDrag(QTabBar* self);
void QTabBar_SetChangeCurrentOnDrag(QTabBar* self, bool change);
void QTabBar_AccessibleTabName(QTabBar* self, int index, char** _out, int* _out_Strlen);
void QTabBar_SetAccessibleTabName(QTabBar* self, int index, const char* name, size_t name_Strlen);
void QTabBar_SetCurrentIndex(QTabBar* self, int index);
void QTabBar_CurrentChanged(QTabBar* self, int index);
void QTabBar_connect_CurrentChanged(QTabBar* self, void* slot);
void QTabBar_TabCloseRequested(QTabBar* self, int index);
void QTabBar_connect_TabCloseRequested(QTabBar* self, void* slot);
void QTabBar_TabMoved(QTabBar* self, int from, int to);
void QTabBar_connect_TabMoved(QTabBar* self, void* slot);
void QTabBar_TabBarClicked(QTabBar* self, int index);
void QTabBar_connect_TabBarClicked(QTabBar* self, void* slot);
void QTabBar_TabBarDoubleClicked(QTabBar* self, int index);
void QTabBar_connect_TabBarDoubleClicked(QTabBar* self, void* slot);
void QTabBar_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QTabBar_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QTabBar_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QTabBar_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QTabBar_Delete(QTabBar* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
