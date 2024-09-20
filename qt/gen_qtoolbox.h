#ifndef GEN_QTOOLBOX_H
#define GEN_QTOOLBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QIcon;
class QMetaObject;
class QToolBox;
class QWidget;
#else
typedef struct QIcon QIcon;
typedef struct QMetaObject QMetaObject;
typedef struct QToolBox QToolBox;
typedef struct QWidget QWidget;
#endif

QToolBox* QToolBox_new();
QToolBox* QToolBox_new2(QWidget* parent);
QToolBox* QToolBox_new3(QWidget* parent, int f);
QMetaObject* QToolBox_MetaObject(const QToolBox* self);
void* QToolBox_Metacast(QToolBox* self, const char* param1);
struct miqt_string* QToolBox_Tr(const char* s);
struct miqt_string* QToolBox_TrUtf8(const char* s);
int QToolBox_AddItem(QToolBox* self, QWidget* widget, struct miqt_string* text);
int QToolBox_AddItem2(QToolBox* self, QWidget* widget, QIcon* icon, struct miqt_string* text);
int QToolBox_InsertItem(QToolBox* self, int index, QWidget* widget, struct miqt_string* text);
int QToolBox_InsertItem2(QToolBox* self, int index, QWidget* widget, QIcon* icon, struct miqt_string* text);
void QToolBox_RemoveItem(QToolBox* self, int index);
void QToolBox_SetItemEnabled(QToolBox* self, int index, bool enabled);
bool QToolBox_IsItemEnabled(const QToolBox* self, int index);
void QToolBox_SetItemText(QToolBox* self, int index, struct miqt_string* text);
struct miqt_string* QToolBox_ItemText(const QToolBox* self, int index);
void QToolBox_SetItemIcon(QToolBox* self, int index, QIcon* icon);
QIcon* QToolBox_ItemIcon(const QToolBox* self, int index);
void QToolBox_SetItemToolTip(QToolBox* self, int index, struct miqt_string* toolTip);
struct miqt_string* QToolBox_ItemToolTip(const QToolBox* self, int index);
int QToolBox_CurrentIndex(const QToolBox* self);
QWidget* QToolBox_CurrentWidget(const QToolBox* self);
QWidget* QToolBox_Widget(const QToolBox* self, int index);
int QToolBox_IndexOf(const QToolBox* self, QWidget* widget);
int QToolBox_Count(const QToolBox* self);
void QToolBox_SetCurrentIndex(QToolBox* self, int index);
void QToolBox_SetCurrentWidget(QToolBox* self, QWidget* widget);
void QToolBox_CurrentChanged(QToolBox* self, int index);
void QToolBox_connect_CurrentChanged(QToolBox* self, void* slot);
struct miqt_string* QToolBox_Tr2(const char* s, const char* c);
struct miqt_string* QToolBox_Tr3(const char* s, const char* c, int n);
struct miqt_string* QToolBox_TrUtf82(const char* s, const char* c);
struct miqt_string* QToolBox_TrUtf83(const char* s, const char* c, int n);
void QToolBox_Delete(QToolBox* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
