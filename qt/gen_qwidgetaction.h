#ifndef GEN_QWIDGETACTION_H
#define GEN_QWIDGETACTION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QObject;
class QWidget;
class QWidgetAction;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QWidget QWidget;
typedef struct QWidgetAction QWidgetAction;
#endif

QWidgetAction* QWidgetAction_new(QObject* parent);
QMetaObject* QWidgetAction_MetaObject(const QWidgetAction* self);
void* QWidgetAction_Metacast(QWidgetAction* self, const char* param1);
struct miqt_string QWidgetAction_Tr(const char* s);
struct miqt_string QWidgetAction_TrUtf8(const char* s);
void QWidgetAction_SetDefaultWidget(QWidgetAction* self, QWidget* w);
QWidget* QWidgetAction_DefaultWidget(const QWidgetAction* self);
QWidget* QWidgetAction_RequestWidget(QWidgetAction* self, QWidget* parent);
void QWidgetAction_ReleaseWidget(QWidgetAction* self, QWidget* widget);
struct miqt_string QWidgetAction_Tr2(const char* s, const char* c);
struct miqt_string QWidgetAction_Tr3(const char* s, const char* c, int n);
struct miqt_string QWidgetAction_TrUtf82(const char* s, const char* c);
struct miqt_string QWidgetAction_TrUtf83(const char* s, const char* c, int n);
void QWidgetAction_Delete(QWidgetAction* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
