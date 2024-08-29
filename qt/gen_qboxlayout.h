#ifndef GEN_QBOXLAYOUT_H
#define GEN_QBOXLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBoxLayout;
class QHBoxLayout;
class QLayout;
class QLayoutItem;
class QMetaObject;
class QRect;
class QSize;
class QSpacerItem;
class QVBoxLayout;
class QWidget;
#else
typedef struct QBoxLayout QBoxLayout;
typedef struct QHBoxLayout QHBoxLayout;
typedef struct QLayout QLayout;
typedef struct QLayoutItem QLayoutItem;
typedef struct QMetaObject QMetaObject;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QSpacerItem QSpacerItem;
typedef struct QVBoxLayout QVBoxLayout;
typedef struct QWidget QWidget;
#endif

QBoxLayout* QBoxLayout_new(uintptr_t param1);
QBoxLayout* QBoxLayout_new2(uintptr_t param1, QWidget* parent);
QMetaObject* QBoxLayout_MetaObject(QBoxLayout* self);
void QBoxLayout_Tr(const char* s, char** _out, int* _out_Strlen);
void QBoxLayout_TrUtf8(const char* s, char** _out, int* _out_Strlen);
uintptr_t QBoxLayout_Direction(QBoxLayout* self);
void QBoxLayout_SetDirection(QBoxLayout* self, uintptr_t direction);
void QBoxLayout_AddSpacing(QBoxLayout* self, int size);
void QBoxLayout_AddStretch(QBoxLayout* self);
void QBoxLayout_AddSpacerItem(QBoxLayout* self, QSpacerItem* spacerItem);
void QBoxLayout_AddWidget(QBoxLayout* self, QWidget* param1);
void QBoxLayout_AddLayout(QBoxLayout* self, QLayout* layout);
void QBoxLayout_AddStrut(QBoxLayout* self, int param1);
void QBoxLayout_AddItem(QBoxLayout* self, QLayoutItem* param1);
void QBoxLayout_InsertSpacing(QBoxLayout* self, int index, int size);
void QBoxLayout_InsertStretch(QBoxLayout* self, int index);
void QBoxLayout_InsertSpacerItem(QBoxLayout* self, int index, QSpacerItem* spacerItem);
void QBoxLayout_InsertWidget(QBoxLayout* self, int index, QWidget* widget);
void QBoxLayout_InsertLayout(QBoxLayout* self, int index, QLayout* layout);
void QBoxLayout_InsertItem(QBoxLayout* self, int index, QLayoutItem* param2);
int QBoxLayout_Spacing(QBoxLayout* self);
void QBoxLayout_SetSpacing(QBoxLayout* self, int spacing);
bool QBoxLayout_SetStretchFactor(QBoxLayout* self, QWidget* w, int stretch);
bool QBoxLayout_SetStretchFactor2(QBoxLayout* self, QLayout* l, int stretch);
void QBoxLayout_SetStretch(QBoxLayout* self, int index, int stretch);
int QBoxLayout_Stretch(QBoxLayout* self, int index);
QSize* QBoxLayout_SizeHint(QBoxLayout* self);
QSize* QBoxLayout_MinimumSize(QBoxLayout* self);
QSize* QBoxLayout_MaximumSize(QBoxLayout* self);
bool QBoxLayout_HasHeightForWidth(QBoxLayout* self);
int QBoxLayout_HeightForWidth(QBoxLayout* self, int param1);
int QBoxLayout_MinimumHeightForWidth(QBoxLayout* self, int param1);
int QBoxLayout_ExpandingDirections(QBoxLayout* self);
void QBoxLayout_Invalidate(QBoxLayout* self);
QLayoutItem* QBoxLayout_ItemAt(QBoxLayout* self, int param1);
QLayoutItem* QBoxLayout_TakeAt(QBoxLayout* self, int param1);
int QBoxLayout_Count(QBoxLayout* self);
void QBoxLayout_SetGeometry(QBoxLayout* self, QRect* geometry);
void QBoxLayout_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QBoxLayout_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QBoxLayout_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QBoxLayout_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QBoxLayout_AddStretch1(QBoxLayout* self, int stretch);
void QBoxLayout_AddWidget2(QBoxLayout* self, QWidget* param1, int stretch);
void QBoxLayout_AddWidget3(QBoxLayout* self, QWidget* param1, int stretch, int alignment);
void QBoxLayout_AddLayout2(QBoxLayout* self, QLayout* layout, int stretch);
void QBoxLayout_InsertStretch2(QBoxLayout* self, int index, int stretch);
void QBoxLayout_InsertWidget3(QBoxLayout* self, int index, QWidget* widget, int stretch);
void QBoxLayout_InsertWidget4(QBoxLayout* self, int index, QWidget* widget, int stretch, int alignment);
void QBoxLayout_InsertLayout3(QBoxLayout* self, int index, QLayout* layout, int stretch);
void QBoxLayout_Delete(QBoxLayout* self);

QHBoxLayout* QHBoxLayout_new();
QHBoxLayout* QHBoxLayout_new2(QWidget* parent);
QMetaObject* QHBoxLayout_MetaObject(QHBoxLayout* self);
void QHBoxLayout_Tr(const char* s, char** _out, int* _out_Strlen);
void QHBoxLayout_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QHBoxLayout_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QHBoxLayout_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QHBoxLayout_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QHBoxLayout_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QHBoxLayout_Delete(QHBoxLayout* self);

QVBoxLayout* QVBoxLayout_new();
QVBoxLayout* QVBoxLayout_new2(QWidget* parent);
QMetaObject* QVBoxLayout_MetaObject(QVBoxLayout* self);
void QVBoxLayout_Tr(const char* s, char** _out, int* _out_Strlen);
void QVBoxLayout_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QVBoxLayout_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QVBoxLayout_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QVBoxLayout_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QVBoxLayout_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QVBoxLayout_Delete(QVBoxLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
