#ifndef GEN_QDOCKWIDGET_H
#define GEN_QDOCKWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAction;
class QDockWidget;
class QMetaObject;
class QWidget;
#else
typedef struct QAction QAction;
typedef struct QDockWidget QDockWidget;
typedef struct QMetaObject QMetaObject;
typedef struct QWidget QWidget;
#endif

QMetaObject* QDockWidget_MetaObject(QDockWidget* self);
void QDockWidget_Tr(char* s, char** _out, int* _out_Strlen);
void QDockWidget_TrUtf8(char* s, char** _out, int* _out_Strlen);
QWidget* QDockWidget_Widget(QDockWidget* self);
void QDockWidget_SetWidget(QDockWidget* self, QWidget* widget);
void QDockWidget_SetFloating(QDockWidget* self, bool floating);
bool QDockWidget_IsFloating(QDockWidget* self);
void QDockWidget_SetTitleBarWidget(QDockWidget* self, QWidget* widget);
QWidget* QDockWidget_TitleBarWidget(QDockWidget* self);
QAction* QDockWidget_ToggleViewAction(QDockWidget* self);
void QDockWidget_TopLevelChanged(QDockWidget* self, bool topLevel);
void QDockWidget_connect_TopLevelChanged(QDockWidget* self, void* slot);
void QDockWidget_VisibilityChanged(QDockWidget* self, bool visible);
void QDockWidget_connect_VisibilityChanged(QDockWidget* self, void* slot);
void QDockWidget_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QDockWidget_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QDockWidget_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QDockWidget_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QDockWidget_Delete(QDockWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
