#pragma once
#ifndef MIQT_QT_GEN_QSTACKEDWIDGET_H
#define MIQT_QT_GEN_QSTACKEDWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QEvent;
class QFrame;
class QMetaObject;
class QObject;
class QPaintDevice;
class QPaintEvent;
class QSize;
class QStackedWidget;
class QWidget;
#else
typedef struct QEvent QEvent;
typedef struct QFrame QFrame;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEvent QPaintEvent;
typedef struct QSize QSize;
typedef struct QStackedWidget QStackedWidget;
typedef struct QWidget QWidget;
#endif

void QStackedWidget_new(QWidget* parent, QStackedWidget** outptr_QStackedWidget, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QStackedWidget_new2(QStackedWidget** outptr_QStackedWidget, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
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
bool QStackedWidget_Event(QStackedWidget* self, QEvent* e);
struct miqt_string QStackedWidget_Tr2(const char* s, const char* c);
struct miqt_string QStackedWidget_Tr3(const char* s, const char* c, int n);
struct miqt_string QStackedWidget_TrUtf82(const char* s, const char* c);
struct miqt_string QStackedWidget_TrUtf83(const char* s, const char* c, int n);
void QStackedWidget_override_virtual_Event(void* self, intptr_t slot);
bool QStackedWidget_virtualbase_Event(void* self, QEvent* e);
void QStackedWidget_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QStackedWidget_virtualbase_SizeHint(const void* self);
void QStackedWidget_override_virtual_PaintEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
void QStackedWidget_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_ChangeEvent(void* self, QEvent* param1);
void QStackedWidget_Delete(QStackedWidget* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
