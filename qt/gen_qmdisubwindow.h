#ifndef GEN_QMDISUBWINDOW_H
#define GEN_QMDISUBWINDOW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMdiArea;
class QMdiSubWindow;
class QMenu;
class QMetaObject;
class QSize;
class QWidget;
#else
typedef struct QMdiArea QMdiArea;
typedef struct QMdiSubWindow QMdiSubWindow;
typedef struct QMenu QMenu;
typedef struct QMetaObject QMetaObject;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QMdiSubWindow* QMdiSubWindow_new();
QMdiSubWindow* QMdiSubWindow_new2(QWidget* parent);
QMdiSubWindow* QMdiSubWindow_new3(QWidget* parent, int flags);
QMetaObject* QMdiSubWindow_MetaObject(const QMdiSubWindow* self);
void QMdiSubWindow_Tr(const char* s, char** _out, int* _out_Strlen);
void QMdiSubWindow_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QSize* QMdiSubWindow_SizeHint(const QMdiSubWindow* self);
QSize* QMdiSubWindow_MinimumSizeHint(const QMdiSubWindow* self);
void QMdiSubWindow_SetWidget(QMdiSubWindow* self, QWidget* widget);
QWidget* QMdiSubWindow_Widget(const QMdiSubWindow* self);
QWidget* QMdiSubWindow_MaximizedButtonsWidget(const QMdiSubWindow* self);
QWidget* QMdiSubWindow_MaximizedSystemMenuIconWidget(const QMdiSubWindow* self);
bool QMdiSubWindow_IsShaded(const QMdiSubWindow* self);
void QMdiSubWindow_SetOption(QMdiSubWindow* self, uintptr_t option);
bool QMdiSubWindow_TestOption(const QMdiSubWindow* self, uintptr_t param1);
void QMdiSubWindow_SetKeyboardSingleStep(QMdiSubWindow* self, int step);
int QMdiSubWindow_KeyboardSingleStep(const QMdiSubWindow* self);
void QMdiSubWindow_SetKeyboardPageStep(QMdiSubWindow* self, int step);
int QMdiSubWindow_KeyboardPageStep(const QMdiSubWindow* self);
void QMdiSubWindow_SetSystemMenu(QMdiSubWindow* self, QMenu* systemMenu);
QMenu* QMdiSubWindow_SystemMenu(const QMdiSubWindow* self);
QMdiArea* QMdiSubWindow_MdiArea(const QMdiSubWindow* self);
void QMdiSubWindow_WindowStateChanged(QMdiSubWindow* self, int oldState, int newState);
void QMdiSubWindow_connect_WindowStateChanged(QMdiSubWindow* self, void* slot);
void QMdiSubWindow_AboutToActivate(QMdiSubWindow* self);
void QMdiSubWindow_connect_AboutToActivate(QMdiSubWindow* self, void* slot);
void QMdiSubWindow_ShowSystemMenu(QMdiSubWindow* self);
void QMdiSubWindow_ShowShaded(QMdiSubWindow* self);
void QMdiSubWindow_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QMdiSubWindow_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QMdiSubWindow_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QMdiSubWindow_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QMdiSubWindow_SetOption2(QMdiSubWindow* self, uintptr_t option, bool on);
void QMdiSubWindow_Delete(QMdiSubWindow* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
