#ifndef GEN_QMDIAREA_H
#define GEN_QMDIAREA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

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
QMetaObject* QMdiArea_MetaObject(const QMdiArea* self);
void* QMdiArea_Metacast(QMdiArea* self, const char* param1);
struct miqt_string* QMdiArea_Tr(const char* s);
struct miqt_string* QMdiArea_TrUtf8(const char* s);
QSize* QMdiArea_SizeHint(const QMdiArea* self);
QSize* QMdiArea_MinimumSizeHint(const QMdiArea* self);
QMdiSubWindow* QMdiArea_CurrentSubWindow(const QMdiArea* self);
QMdiSubWindow* QMdiArea_ActiveSubWindow(const QMdiArea* self);
struct miqt_array* QMdiArea_SubWindowList(const QMdiArea* self);
QMdiSubWindow* QMdiArea_AddSubWindow(QMdiArea* self, QWidget* widget);
void QMdiArea_RemoveSubWindow(QMdiArea* self, QWidget* widget);
QBrush* QMdiArea_Background(const QMdiArea* self);
void QMdiArea_SetBackground(QMdiArea* self, QBrush* background);
int QMdiArea_ActivationOrder(const QMdiArea* self);
void QMdiArea_SetActivationOrder(QMdiArea* self, int order);
void QMdiArea_SetOption(QMdiArea* self, int option);
bool QMdiArea_TestOption(const QMdiArea* self, int opton);
void QMdiArea_SetViewMode(QMdiArea* self, int mode);
int QMdiArea_ViewMode(const QMdiArea* self);
bool QMdiArea_DocumentMode(const QMdiArea* self);
void QMdiArea_SetDocumentMode(QMdiArea* self, bool enabled);
void QMdiArea_SetTabsClosable(QMdiArea* self, bool closable);
bool QMdiArea_TabsClosable(const QMdiArea* self);
void QMdiArea_SetTabsMovable(QMdiArea* self, bool movable);
bool QMdiArea_TabsMovable(const QMdiArea* self);
void QMdiArea_SetTabShape(QMdiArea* self, int shape);
int QMdiArea_TabShape(const QMdiArea* self);
void QMdiArea_SetTabPosition(QMdiArea* self, int position);
int QMdiArea_TabPosition(const QMdiArea* self);
void QMdiArea_SubWindowActivated(QMdiArea* self, QMdiSubWindow* param1);
void QMdiArea_connect_SubWindowActivated(QMdiArea* self, void* slot);
void QMdiArea_SetActiveSubWindow(QMdiArea* self, QMdiSubWindow* window);
void QMdiArea_TileSubWindows(QMdiArea* self);
void QMdiArea_CascadeSubWindows(QMdiArea* self);
void QMdiArea_CloseActiveSubWindow(QMdiArea* self);
void QMdiArea_CloseAllSubWindows(QMdiArea* self);
void QMdiArea_ActivateNextSubWindow(QMdiArea* self);
void QMdiArea_ActivatePreviousSubWindow(QMdiArea* self);
struct miqt_string* QMdiArea_Tr2(const char* s, const char* c);
struct miqt_string* QMdiArea_Tr3(const char* s, const char* c, int n);
struct miqt_string* QMdiArea_TrUtf82(const char* s, const char* c);
struct miqt_string* QMdiArea_TrUtf83(const char* s, const char* c, int n);
struct miqt_array* QMdiArea_SubWindowList1(const QMdiArea* self, int order);
QMdiSubWindow* QMdiArea_AddSubWindow2(QMdiArea* self, QWidget* widget, int flags);
void QMdiArea_SetOption2(QMdiArea* self, int option, bool on);
void QMdiArea_Delete(QMdiArea* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
