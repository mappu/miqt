#ifndef GEN_QFORMLAYOUT_H
#define GEN_QFORMLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QFormLayout;
class QLayout;
class QLayoutItem;
class QMetaObject;
class QRect;
class QSize;
class QWidget;
#else
typedef struct QFormLayout QFormLayout;
typedef struct QLayout QLayout;
typedef struct QLayoutItem QLayoutItem;
typedef struct QMetaObject QMetaObject;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QFormLayout* QFormLayout_new();
QFormLayout* QFormLayout_new2(QWidget* parent);
QMetaObject* QFormLayout_MetaObject(QFormLayout* self);
void QFormLayout_Tr(char* s, char** _out, int* _out_Strlen);
void QFormLayout_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QFormLayout_SetHorizontalSpacing(QFormLayout* self, int spacing);
int QFormLayout_HorizontalSpacing(QFormLayout* self);
void QFormLayout_SetVerticalSpacing(QFormLayout* self, int spacing);
int QFormLayout_VerticalSpacing(QFormLayout* self);
int QFormLayout_Spacing(QFormLayout* self);
void QFormLayout_SetSpacing(QFormLayout* self, int spacing);
void QFormLayout_AddRow(QFormLayout* self, QWidget* label, QWidget* field);
void QFormLayout_AddRow2(QFormLayout* self, QWidget* label, QLayout* field);
void QFormLayout_AddRow3(QFormLayout* self, const char* labelText, size_t labelText_Strlen, QWidget* field);
void QFormLayout_AddRow4(QFormLayout* self, const char* labelText, size_t labelText_Strlen, QLayout* field);
void QFormLayout_AddRowWithWidget(QFormLayout* self, QWidget* widget);
void QFormLayout_AddRowWithLayout(QFormLayout* self, QLayout* layout);
void QFormLayout_InsertRow(QFormLayout* self, int row, QWidget* label, QWidget* field);
void QFormLayout_InsertRow2(QFormLayout* self, int row, QWidget* label, QLayout* field);
void QFormLayout_InsertRow3(QFormLayout* self, int row, const char* labelText, size_t labelText_Strlen, QWidget* field);
void QFormLayout_InsertRow4(QFormLayout* self, int row, const char* labelText, size_t labelText_Strlen, QLayout* field);
void QFormLayout_InsertRow5(QFormLayout* self, int row, QWidget* widget);
void QFormLayout_InsertRow6(QFormLayout* self, int row, QLayout* layout);
void QFormLayout_RemoveRow(QFormLayout* self, int row);
void QFormLayout_RemoveRowWithWidget(QFormLayout* self, QWidget* widget);
void QFormLayout_RemoveRowWithLayout(QFormLayout* self, QLayout* layout);
QWidget* QFormLayout_LabelForField(QFormLayout* self, QWidget* field);
QWidget* QFormLayout_LabelForFieldWithField(QFormLayout* self, QLayout* field);
void QFormLayout_AddItem(QFormLayout* self, QLayoutItem* item);
QLayoutItem* QFormLayout_ItemAt(QFormLayout* self, int index);
QLayoutItem* QFormLayout_TakeAt(QFormLayout* self, int index);
void QFormLayout_SetGeometry(QFormLayout* self, QRect* rect);
QSize* QFormLayout_MinimumSize(QFormLayout* self);
QSize* QFormLayout_SizeHint(QFormLayout* self);
void QFormLayout_Invalidate(QFormLayout* self);
bool QFormLayout_HasHeightForWidth(QFormLayout* self);
int QFormLayout_HeightForWidth(QFormLayout* self, int width);
int QFormLayout_Count(QFormLayout* self);
int QFormLayout_RowCount(QFormLayout* self);
void QFormLayout_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QFormLayout_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QFormLayout_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QFormLayout_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QFormLayout_Delete(QFormLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
