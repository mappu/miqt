#ifndef GEN_QTOOLBOX_H
#define GEN_QTOOLBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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

QMetaObject* QToolBox_MetaObject(QToolBox* self);
void QToolBox_Tr(char* s, char** _out, int* _out_Strlen);
void QToolBox_TrUtf8(char* s, char** _out, int* _out_Strlen);
int QToolBox_AddItem(QToolBox* self, QWidget* widget, const char* text, size_t text_Strlen);
int QToolBox_AddItem2(QToolBox* self, QWidget* widget, QIcon* icon, const char* text, size_t text_Strlen);
int QToolBox_InsertItem(QToolBox* self, int index, QWidget* widget, const char* text, size_t text_Strlen);
int QToolBox_InsertItem2(QToolBox* self, int index, QWidget* widget, QIcon* icon, const char* text, size_t text_Strlen);
void QToolBox_RemoveItem(QToolBox* self, int index);
void QToolBox_SetItemEnabled(QToolBox* self, int index, bool enabled);
bool QToolBox_IsItemEnabled(QToolBox* self, int index);
void QToolBox_SetItemText(QToolBox* self, int index, const char* text, size_t text_Strlen);
void QToolBox_ItemText(QToolBox* self, int index, char** _out, int* _out_Strlen);
void QToolBox_SetItemIcon(QToolBox* self, int index, QIcon* icon);
QIcon* QToolBox_ItemIcon(QToolBox* self, int index);
void QToolBox_SetItemToolTip(QToolBox* self, int index, const char* toolTip, size_t toolTip_Strlen);
void QToolBox_ItemToolTip(QToolBox* self, int index, char** _out, int* _out_Strlen);
int QToolBox_CurrentIndex(QToolBox* self);
QWidget* QToolBox_CurrentWidget(QToolBox* self);
QWidget* QToolBox_Widget(QToolBox* self, int index);
int QToolBox_IndexOf(QToolBox* self, QWidget* widget);
int QToolBox_Count(QToolBox* self);
void QToolBox_SetCurrentIndex(QToolBox* self, int index);
void QToolBox_SetCurrentWidget(QToolBox* self, QWidget* widget);
void QToolBox_CurrentChanged(QToolBox* self, int index);
void QToolBox_connect_CurrentChanged(QToolBox* self, void* slot);
void QToolBox_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QToolBox_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QToolBox_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QToolBox_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QToolBox_Delete(QToolBox* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
