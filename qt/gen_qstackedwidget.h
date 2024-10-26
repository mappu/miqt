#ifndef GEN_QSTACKEDWIDGET_H
#define GEN_QSTACKEDWIDGET_H

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
class QStackedWidget;
class QWidget;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QStackedWidget QStackedWidget;
typedef struct QWidget QWidget;
#endif

QStackedWidget* QStackedWidget_new(QWidget* parent);
QStackedWidget* QStackedWidget_new2();
QMetaObject* QStackedWidget_MetaObject(const QStackedWidget* self);
void* QStackedWidget_Metacast(QStackedWidget* self, const char* param1);
struct miqt_string QStackedWidget_Tr(const char* s);
struct miqt_string QStackedWidget_TrUtf8(const char* s);
int QStackedWidget_AddWidget(QStackedWidget* self, QWidget* w);
int QStackedWidget_InsertWidget(QStackedWidget* self, int index, QWidget* w);
void QStackedWidget_RemoveWidget(QStackedWidget* self, QWidget* w);
QWidget* QStackedWidget_CurrentWidget(const QStackedWidget* self);
int QStackedWidget_CurrentIndex(const QStackedWidget* self);
int QStackedWidget_IndexOf(const QStackedWidget* self, QWidget* param1);
QWidget* QStackedWidget_Widget(const QStackedWidget* self, int param1);
int QStackedWidget_Count(const QStackedWidget* self);
void QStackedWidget_SetCurrentIndex(QStackedWidget* self, int index);
void QStackedWidget_SetCurrentWidget(QStackedWidget* self, QWidget* w);
void QStackedWidget_CurrentChanged(QStackedWidget* self, int param1);
void QStackedWidget_connect_CurrentChanged(QStackedWidget* self, intptr_t slot);
void QStackedWidget_WidgetRemoved(QStackedWidget* self, int index);
void QStackedWidget_connect_WidgetRemoved(QStackedWidget* self, intptr_t slot);
struct miqt_string QStackedWidget_Tr2(const char* s, const char* c);
struct miqt_string QStackedWidget_Tr3(const char* s, const char* c, int n);
struct miqt_string QStackedWidget_TrUtf82(const char* s, const char* c);
struct miqt_string QStackedWidget_TrUtf83(const char* s, const char* c, int n);
void QStackedWidget_Delete(QStackedWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
