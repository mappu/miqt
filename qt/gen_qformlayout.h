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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QFormLayout__TakeRowResult)
typedef QFormLayout::TakeRowResult QFormLayout__TakeRowResult;
#else
class QFormLayout__TakeRowResult;
#endif
class QLayout;
class QLayoutItem;
class QMetaObject;
class QRect;
class QSize;
class QWidget;
#else
typedef struct QFormLayout QFormLayout;
typedef struct QFormLayout__TakeRowResult QFormLayout__TakeRowResult;
typedef struct QLayout QLayout;
typedef struct QLayoutItem QLayoutItem;
typedef struct QMetaObject QMetaObject;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QFormLayout* QFormLayout_new();
QFormLayout* QFormLayout_new2(QWidget* parent);
QMetaObject* QFormLayout_MetaObject(const QFormLayout* self);
void QFormLayout_Tr(const char* s, char** _out, int* _out_Strlen);
void QFormLayout_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QFormLayout_SetFieldGrowthPolicy(QFormLayout* self, uintptr_t policy);
uintptr_t QFormLayout_FieldGrowthPolicy(const QFormLayout* self);
void QFormLayout_SetRowWrapPolicy(QFormLayout* self, int policy);
int QFormLayout_RowWrapPolicy(const QFormLayout* self);
void QFormLayout_SetLabelAlignment(QFormLayout* self, int alignment);
int QFormLayout_LabelAlignment(const QFormLayout* self);
void QFormLayout_SetFormAlignment(QFormLayout* self, int alignment);
int QFormLayout_FormAlignment(const QFormLayout* self);
void QFormLayout_SetHorizontalSpacing(QFormLayout* self, int spacing);
int QFormLayout_HorizontalSpacing(const QFormLayout* self);
void QFormLayout_SetVerticalSpacing(QFormLayout* self, int spacing);
int QFormLayout_VerticalSpacing(const QFormLayout* self);
int QFormLayout_Spacing(const QFormLayout* self);
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
QFormLayout__TakeRowResult* QFormLayout_TakeRow(QFormLayout* self, int row);
QFormLayout__TakeRowResult* QFormLayout_TakeRowWithWidget(QFormLayout* self, QWidget* widget);
QFormLayout__TakeRowResult* QFormLayout_TakeRowWithLayout(QFormLayout* self, QLayout* layout);
void QFormLayout_SetItem(QFormLayout* self, int row, int role, QLayoutItem* item);
void QFormLayout_SetWidget(QFormLayout* self, int row, int role, QWidget* widget);
void QFormLayout_SetLayout(QFormLayout* self, int row, int role, QLayout* layout);
QLayoutItem* QFormLayout_ItemAt(const QFormLayout* self, int row, int role);
QWidget* QFormLayout_LabelForField(const QFormLayout* self, QWidget* field);
QWidget* QFormLayout_LabelForFieldWithField(const QFormLayout* self, QLayout* field);
void QFormLayout_AddItem(QFormLayout* self, QLayoutItem* item);
QLayoutItem* QFormLayout_ItemAtWithIndex(const QFormLayout* self, int index);
QLayoutItem* QFormLayout_TakeAt(QFormLayout* self, int index);
void QFormLayout_SetGeometry(QFormLayout* self, QRect* rect);
QSize* QFormLayout_MinimumSize(const QFormLayout* self);
QSize* QFormLayout_SizeHint(const QFormLayout* self);
void QFormLayout_Invalidate(QFormLayout* self);
bool QFormLayout_HasHeightForWidth(const QFormLayout* self);
int QFormLayout_HeightForWidth(const QFormLayout* self, int width);
int QFormLayout_ExpandingDirections(const QFormLayout* self);
int QFormLayout_Count(const QFormLayout* self);
int QFormLayout_RowCount(const QFormLayout* self);
void QFormLayout_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QFormLayout_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QFormLayout_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QFormLayout_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QFormLayout_Delete(QFormLayout* self);

void QFormLayout__TakeRowResult_Delete(QFormLayout__TakeRowResult* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
