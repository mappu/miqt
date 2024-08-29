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

QDockWidget* QDockWidget_new(const char* title, size_t title_Strlen);
QDockWidget* QDockWidget_new2();
QDockWidget* QDockWidget_new3(const char* title, size_t title_Strlen, QWidget* parent);
QDockWidget* QDockWidget_new4(const char* title, size_t title_Strlen, QWidget* parent, int flags);
QDockWidget* QDockWidget_new5(QWidget* parent);
QDockWidget* QDockWidget_new6(QWidget* parent, int flags);
QMetaObject* QDockWidget_MetaObject(QDockWidget* self);
void QDockWidget_Tr(const char* s, char** _out, int* _out_Strlen);
void QDockWidget_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QWidget* QDockWidget_Widget(QDockWidget* self);
void QDockWidget_SetWidget(QDockWidget* self, QWidget* widget);
void QDockWidget_SetFeatures(QDockWidget* self, int features);
int QDockWidget_Features(QDockWidget* self);
void QDockWidget_SetFloating(QDockWidget* self, bool floating);
bool QDockWidget_IsFloating(QDockWidget* self);
void QDockWidget_SetAllowedAreas(QDockWidget* self, int areas);
int QDockWidget_AllowedAreas(QDockWidget* self);
void QDockWidget_SetTitleBarWidget(QDockWidget* self, QWidget* widget);
QWidget* QDockWidget_TitleBarWidget(QDockWidget* self);
bool QDockWidget_IsAreaAllowed(QDockWidget* self, uintptr_t area);
QAction* QDockWidget_ToggleViewAction(QDockWidget* self);
void QDockWidget_FeaturesChanged(QDockWidget* self, int features);
void QDockWidget_connect_FeaturesChanged(QDockWidget* self, void* slot);
void QDockWidget_TopLevelChanged(QDockWidget* self, bool topLevel);
void QDockWidget_connect_TopLevelChanged(QDockWidget* self, void* slot);
void QDockWidget_AllowedAreasChanged(QDockWidget* self, int allowedAreas);
void QDockWidget_connect_AllowedAreasChanged(QDockWidget* self, void* slot);
void QDockWidget_VisibilityChanged(QDockWidget* self, bool visible);
void QDockWidget_connect_VisibilityChanged(QDockWidget* self, void* slot);
void QDockWidget_DockLocationChanged(QDockWidget* self, uintptr_t area);
void QDockWidget_connect_DockLocationChanged(QDockWidget* self, void* slot);
void QDockWidget_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QDockWidget_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QDockWidget_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QDockWidget_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QDockWidget_Delete(QDockWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
