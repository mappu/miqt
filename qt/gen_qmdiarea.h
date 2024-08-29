#ifndef GEN_QMDIAREA_H
#define GEN_QMDIAREA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBrush;
class QMdiArea;
class QMdiSubWindow;
class QMetaObject;
class QSize;
class QWidget;
#else
typedef struct QBrush QBrush;
typedef struct QMdiArea QMdiArea;
typedef struct QMdiSubWindow QMdiSubWindow;
typedef struct QMetaObject QMetaObject;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QMdiArea* QMdiArea_new();
QMdiArea* QMdiArea_new2(QWidget* parent);
QMetaObject* QMdiArea_MetaObject(QMdiArea* self);
void QMdiArea_Tr(const char* s, char** _out, int* _out_Strlen);
void QMdiArea_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QSize* QMdiArea_SizeHint(QMdiArea* self);
QSize* QMdiArea_MinimumSizeHint(QMdiArea* self);
QMdiSubWindow* QMdiArea_CurrentSubWindow(QMdiArea* self);
QMdiSubWindow* QMdiArea_ActiveSubWindow(QMdiArea* self);
void QMdiArea_SubWindowList(QMdiArea* self, QMdiSubWindow*** _out, size_t* _out_len);
QMdiSubWindow* QMdiArea_AddSubWindow(QMdiArea* self, QWidget* widget);
void QMdiArea_RemoveSubWindow(QMdiArea* self, QWidget* widget);
QBrush* QMdiArea_Background(QMdiArea* self);
void QMdiArea_SetBackground(QMdiArea* self, QBrush* background);
uintptr_t QMdiArea_ActivationOrder(QMdiArea* self);
void QMdiArea_SetActivationOrder(QMdiArea* self, uintptr_t order);
void QMdiArea_SetOption(QMdiArea* self, uintptr_t option);
bool QMdiArea_TestOption(QMdiArea* self, uintptr_t opton);
void QMdiArea_SetViewMode(QMdiArea* self, uintptr_t mode);
uintptr_t QMdiArea_ViewMode(QMdiArea* self);
bool QMdiArea_DocumentMode(QMdiArea* self);
void QMdiArea_SetDocumentMode(QMdiArea* self, bool enabled);
void QMdiArea_SetTabsClosable(QMdiArea* self, bool closable);
bool QMdiArea_TabsClosable(QMdiArea* self);
void QMdiArea_SetTabsMovable(QMdiArea* self, bool movable);
bool QMdiArea_TabsMovable(QMdiArea* self);
void QMdiArea_SetTabShape(QMdiArea* self, uintptr_t shape);
uintptr_t QMdiArea_TabShape(QMdiArea* self);
void QMdiArea_SetTabPosition(QMdiArea* self, uintptr_t position);
uintptr_t QMdiArea_TabPosition(QMdiArea* self);
void QMdiArea_SubWindowActivated(QMdiArea* self, QMdiSubWindow* param1);
void QMdiArea_connect_SubWindowActivated(QMdiArea* self, void* slot);
void QMdiArea_SetActiveSubWindow(QMdiArea* self, QMdiSubWindow* window);
void QMdiArea_TileSubWindows(QMdiArea* self);
void QMdiArea_CascadeSubWindows(QMdiArea* self);
void QMdiArea_CloseActiveSubWindow(QMdiArea* self);
void QMdiArea_CloseAllSubWindows(QMdiArea* self);
void QMdiArea_ActivateNextSubWindow(QMdiArea* self);
void QMdiArea_ActivatePreviousSubWindow(QMdiArea* self);
void QMdiArea_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QMdiArea_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QMdiArea_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QMdiArea_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QMdiArea_SubWindowList1(QMdiArea* self, uintptr_t order, QMdiSubWindow*** _out, size_t* _out_len);
QMdiSubWindow* QMdiArea_AddSubWindow2(QMdiArea* self, QWidget* widget, int flags);
void QMdiArea_SetOption2(QMdiArea* self, uintptr_t option, bool on);
void QMdiArea_Delete(QMdiArea* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
