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

QMetaObject* QMdiSubWindow_MetaObject(QMdiSubWindow* self);
void QMdiSubWindow_Tr(char* s, char** _out, int* _out_Strlen);
void QMdiSubWindow_TrUtf8(char* s, char** _out, int* _out_Strlen);
QSize* QMdiSubWindow_SizeHint(QMdiSubWindow* self);
QSize* QMdiSubWindow_MinimumSizeHint(QMdiSubWindow* self);
void QMdiSubWindow_SetWidget(QMdiSubWindow* self, QWidget* widget);
QWidget* QMdiSubWindow_Widget(QMdiSubWindow* self);
QWidget* QMdiSubWindow_MaximizedButtonsWidget(QMdiSubWindow* self);
QWidget* QMdiSubWindow_MaximizedSystemMenuIconWidget(QMdiSubWindow* self);
bool QMdiSubWindow_IsShaded(QMdiSubWindow* self);
void QMdiSubWindow_SetKeyboardSingleStep(QMdiSubWindow* self, int step);
int QMdiSubWindow_KeyboardSingleStep(QMdiSubWindow* self);
void QMdiSubWindow_SetKeyboardPageStep(QMdiSubWindow* self, int step);
int QMdiSubWindow_KeyboardPageStep(QMdiSubWindow* self);
void QMdiSubWindow_SetSystemMenu(QMdiSubWindow* self, QMenu* systemMenu);
QMenu* QMdiSubWindow_SystemMenu(QMdiSubWindow* self);
QMdiArea* QMdiSubWindow_MdiArea(QMdiSubWindow* self);
void QMdiSubWindow_AboutToActivate(QMdiSubWindow* self);
void QMdiSubWindow_connect_AboutToActivate(QMdiSubWindow* self, void* slot);
void QMdiSubWindow_ShowSystemMenu(QMdiSubWindow* self);
void QMdiSubWindow_ShowShaded(QMdiSubWindow* self);
void QMdiSubWindow_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QMdiSubWindow_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QMdiSubWindow_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QMdiSubWindow_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QMdiSubWindow_Delete(QMdiSubWindow* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
