#ifndef GEN_QINPUTDIALOG_H
#define GEN_QINPUTDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QInputDialog;
class QMetaObject;
class QSize;
#else
typedef struct QInputDialog QInputDialog;
typedef struct QMetaObject QMetaObject;
typedef struct QSize QSize;
#endif

QMetaObject* QInputDialog_MetaObject(QInputDialog* self);
void QInputDialog_Tr(char* s, char** _out, int* _out_Strlen);
void QInputDialog_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QInputDialog_SetLabelText(QInputDialog* self, const char* text, size_t text_Strlen);
void QInputDialog_LabelText(QInputDialog* self, char** _out, int* _out_Strlen);
void QInputDialog_SetTextValue(QInputDialog* self, const char* text, size_t text_Strlen);
void QInputDialog_TextValue(QInputDialog* self, char** _out, int* _out_Strlen);
void QInputDialog_SetComboBoxEditable(QInputDialog* self, bool editable);
bool QInputDialog_IsComboBoxEditable(QInputDialog* self);
void QInputDialog_SetComboBoxItems(QInputDialog* self, char** items, uint64_t* items_Lengths, size_t items_len);
void QInputDialog_ComboBoxItems(QInputDialog* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QInputDialog_SetIntValue(QInputDialog* self, int value);
int QInputDialog_IntValue(QInputDialog* self);
void QInputDialog_SetIntMinimum(QInputDialog* self, int min);
int QInputDialog_IntMinimum(QInputDialog* self);
void QInputDialog_SetIntMaximum(QInputDialog* self, int max);
int QInputDialog_IntMaximum(QInputDialog* self);
void QInputDialog_SetIntRange(QInputDialog* self, int min, int max);
void QInputDialog_SetIntStep(QInputDialog* self, int step);
int QInputDialog_IntStep(QInputDialog* self);
void QInputDialog_SetDoubleValue(QInputDialog* self, double value);
double QInputDialog_DoubleValue(QInputDialog* self);
void QInputDialog_SetDoubleMinimum(QInputDialog* self, double min);
double QInputDialog_DoubleMinimum(QInputDialog* self);
void QInputDialog_SetDoubleMaximum(QInputDialog* self, double max);
double QInputDialog_DoubleMaximum(QInputDialog* self);
void QInputDialog_SetDoubleRange(QInputDialog* self, double min, double max);
void QInputDialog_SetDoubleDecimals(QInputDialog* self, int decimals);
int QInputDialog_DoubleDecimals(QInputDialog* self);
void QInputDialog_SetOkButtonText(QInputDialog* self, const char* text, size_t text_Strlen);
void QInputDialog_OkButtonText(QInputDialog* self, char** _out, int* _out_Strlen);
void QInputDialog_SetCancelButtonText(QInputDialog* self, const char* text, size_t text_Strlen);
void QInputDialog_CancelButtonText(QInputDialog* self, char** _out, int* _out_Strlen);
QSize* QInputDialog_MinimumSizeHint(QInputDialog* self);
QSize* QInputDialog_SizeHint(QInputDialog* self);
void QInputDialog_SetVisible(QInputDialog* self, bool visible);
void QInputDialog_SetDoubleStep(QInputDialog* self, double step);
double QInputDialog_DoubleStep(QInputDialog* self);
void QInputDialog_TextValueChanged(QInputDialog* self, const char* text, size_t text_Strlen);
void QInputDialog_connect_TextValueChanged(QInputDialog* self, void* slot);
void QInputDialog_TextValueSelected(QInputDialog* self, const char* text, size_t text_Strlen);
void QInputDialog_connect_TextValueSelected(QInputDialog* self, void* slot);
void QInputDialog_IntValueChanged(QInputDialog* self, int value);
void QInputDialog_connect_IntValueChanged(QInputDialog* self, void* slot);
void QInputDialog_IntValueSelected(QInputDialog* self, int value);
void QInputDialog_connect_IntValueSelected(QInputDialog* self, void* slot);
void QInputDialog_DoubleValueChanged(QInputDialog* self, double value);
void QInputDialog_connect_DoubleValueChanged(QInputDialog* self, void* slot);
void QInputDialog_DoubleValueSelected(QInputDialog* self, double value);
void QInputDialog_connect_DoubleValueSelected(QInputDialog* self, void* slot);
void QInputDialog_Done(QInputDialog* self, int result);
void QInputDialog_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QInputDialog_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QInputDialog_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QInputDialog_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QInputDialog_Delete(QInputDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
