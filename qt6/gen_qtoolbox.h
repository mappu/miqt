#pragma once
#ifndef MIQT_QT6_GEN_QTOOLBOX_H
#define MIQT_QT6_GEN_QTOOLBOX_H

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
class QIcon;
class QMetaObject;
class QObject;
class QPaintDevice;
class QPaintEvent;
class QShowEvent;
class QSize;
class QStyleOptionFrame;
class QToolBox;
class QWidget;
#else
typedef struct QEvent QEvent;
typedef struct QFrame QFrame;
typedef struct QIcon QIcon;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEvent QPaintEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QToolBox QToolBox;
typedef struct QWidget QWidget;
#endif

QToolBox* QToolBox_new(QWidget* parent);
QToolBox* QToolBox_new2();
QToolBox* QToolBox_new3(QWidget* parent, int f);
void QToolBox_virtbase(QToolBox* src, QFrame** outptr_QFrame);
QMetaObject* QToolBox_MetaObject(const QToolBox* self);
void* QToolBox_Metacast(QToolBox* self, const char* param1);
struct miqt_string QToolBox_Tr(const char* s);
int QToolBox_AddItem(QToolBox* self, QWidget* widget, struct miqt_string text);
int QToolBox_AddItem2(QToolBox* self, QWidget* widget, QIcon* icon, struct miqt_string text);
int QToolBox_InsertItem(QToolBox* self, int index, QWidget* widget, struct miqt_string text);
int QToolBox_InsertItem2(QToolBox* self, int index, QWidget* widget, QIcon* icon, struct miqt_string text);
void QToolBox_RemoveItem(QToolBox* self, int index);
void QToolBox_SetItemEnabled(QToolBox* self, int index, bool enabled);
bool QToolBox_IsItemEnabled(const QToolBox* self, int index);
void QToolBox_SetItemText(QToolBox* self, int index, struct miqt_string text);
struct miqt_string QToolBox_ItemText(const QToolBox* self, int index);
void QToolBox_SetItemIcon(QToolBox* self, int index, QIcon* icon);
QIcon* QToolBox_ItemIcon(const QToolBox* self, int index);
void QToolBox_SetItemToolTip(QToolBox* self, int index, struct miqt_string toolTip);
struct miqt_string QToolBox_ItemToolTip(const QToolBox* self, int index);
int QToolBox_CurrentIndex(const QToolBox* self);
QWidget* QToolBox_CurrentWidget(const QToolBox* self);
QWidget* QToolBox_Widget(const QToolBox* self, int index);
int QToolBox_IndexOf(const QToolBox* self, QWidget* widget);
int QToolBox_Count(const QToolBox* self);
void QToolBox_SetCurrentIndex(QToolBox* self, int index);
void QToolBox_SetCurrentWidget(QToolBox* self, QWidget* widget);
void QToolBox_CurrentChanged(QToolBox* self, int index);
void QToolBox_connect_CurrentChanged(QToolBox* self, intptr_t slot);
bool QToolBox_Event(QToolBox* self, QEvent* e);
void QToolBox_ItemInserted(QToolBox* self, int index);
void QToolBox_ItemRemoved(QToolBox* self, int index);
void QToolBox_ShowEvent(QToolBox* self, QShowEvent* e);
void QToolBox_ChangeEvent(QToolBox* self, QEvent* param1);
struct miqt_string QToolBox_Tr2(const char* s, const char* c);
struct miqt_string QToolBox_Tr3(const char* s, const char* c, int n);
void QToolBox_override_virtual_Event(void* self, intptr_t slot);
bool QToolBox_virtualbase_Event(void* self, QEvent* e);
void QToolBox_override_virtual_ItemInserted(void* self, intptr_t slot);
void QToolBox_virtualbase_ItemInserted(void* self, int index);
void QToolBox_override_virtual_ItemRemoved(void* self, intptr_t slot);
void QToolBox_virtualbase_ItemRemoved(void* self, int index);
void QToolBox_override_virtual_ShowEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_ShowEvent(void* self, QShowEvent* e);
void QToolBox_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_ChangeEvent(void* self, QEvent* param1);
void QToolBox_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QToolBox_virtualbase_SizeHint(const void* self);
void QToolBox_override_virtual_PaintEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
void QToolBox_override_virtual_InitStyleOption(void* self, intptr_t slot);
void QToolBox_virtualbase_InitStyleOption(const void* self, QStyleOptionFrame* option);
void QToolBox_Delete(QToolBox* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
