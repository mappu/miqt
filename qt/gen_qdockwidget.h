#ifndef GEN_QDOCKWIDGET_H
#define GEN_QDOCKWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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

QDockWidget* QDockWidget_new(QWidget* parent);
QDockWidget* QDockWidget_new2(struct miqt_string title);
QDockWidget* QDockWidget_new3();
QDockWidget* QDockWidget_new4(struct miqt_string title, QWidget* parent);
QDockWidget* QDockWidget_new5(struct miqt_string title, QWidget* parent, int flags);
QDockWidget* QDockWidget_new6(QWidget* parent, int flags);
QMetaObject* QDockWidget_MetaObject(const QDockWidget* self);
void* QDockWidget_Metacast(QDockWidget* self, const char* param1);
struct miqt_string QDockWidget_Tr(const char* s);
struct miqt_string QDockWidget_TrUtf8(const char* s);
QWidget* QDockWidget_Widget(const QDockWidget* self);
void QDockWidget_SetWidget(QDockWidget* self, QWidget* widget);
void QDockWidget_SetFeatures(QDockWidget* self, int features);
int QDockWidget_Features(const QDockWidget* self);
void QDockWidget_SetFloating(QDockWidget* self, bool floating);
bool QDockWidget_IsFloating(const QDockWidget* self);
void QDockWidget_SetAllowedAreas(QDockWidget* self, int areas);
int QDockWidget_AllowedAreas(const QDockWidget* self);
void QDockWidget_SetTitleBarWidget(QDockWidget* self, QWidget* widget);
QWidget* QDockWidget_TitleBarWidget(const QDockWidget* self);
bool QDockWidget_IsAreaAllowed(const QDockWidget* self, int area);
QAction* QDockWidget_ToggleViewAction(const QDockWidget* self);
void QDockWidget_FeaturesChanged(QDockWidget* self, int features);
void QDockWidget_connect_FeaturesChanged(QDockWidget* self, intptr_t slot);
void QDockWidget_TopLevelChanged(QDockWidget* self, bool topLevel);
void QDockWidget_connect_TopLevelChanged(QDockWidget* self, intptr_t slot);
void QDockWidget_AllowedAreasChanged(QDockWidget* self, int allowedAreas);
void QDockWidget_connect_AllowedAreasChanged(QDockWidget* self, intptr_t slot);
void QDockWidget_VisibilityChanged(QDockWidget* self, bool visible);
void QDockWidget_connect_VisibilityChanged(QDockWidget* self, intptr_t slot);
void QDockWidget_DockLocationChanged(QDockWidget* self, int area);
void QDockWidget_connect_DockLocationChanged(QDockWidget* self, intptr_t slot);
struct miqt_string QDockWidget_Tr2(const char* s, const char* c);
struct miqt_string QDockWidget_Tr3(const char* s, const char* c, int n);
struct miqt_string QDockWidget_TrUtf82(const char* s, const char* c);
struct miqt_string QDockWidget_TrUtf83(const char* s, const char* c, int n);
void QDockWidget_Delete(QDockWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
