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
class QWidget;
#else
typedef struct QInputDialog QInputDialog;
typedef struct QMetaObject QMetaObject;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QInputDialog* QInputDialog_new();
QInputDialog* QInputDialog_new2(QWidget* parent);
QInputDialog* QInputDialog_new3(QWidget* parent, int flags);
QMetaObject* QInputDialog_MetaObject(QInputDialog* self);
void QInputDialog_Tr(const char* s, char** _out, int* _out_Strlen);
void QInputDialog_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QInputDialog_SetInputMode(QInputDialog* self, uintptr_t mode);
uintptr_t QInputDialog_InputMode(QInputDialog* self);
void QInputDialog_SetLabelText(QInputDialog* self, const char* text, size_t text_Strlen);
void QInputDialog_LabelText(QInputDialog* self, char** _out, int* _out_Strlen);
void QInputDialog_SetOption(QInputDialog* self, uintptr_t option);
bool QInputDialog_TestOption(QInputDialog* self, uintptr_t option);
void QInputDialog_SetOptions(QInputDialog* self, int options);
int QInputDialog_Options(QInputDialog* self);
void QInputDialog_SetTextValue(QInputDialog* self, const char* text, size_t text_Strlen);
void QInputDialog_TextValue(QInputDialog* self, char** _out, int* _out_Strlen);
void QInputDialog_SetTextEchoMode(QInputDialog* self, uintptr_t mode);
uintptr_t QInputDialog_TextEchoMode(QInputDialog* self);
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
void QInputDialog_GetText(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, char** _out, int* _out_Strlen);
void QInputDialog_GetMultiLineText(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, char** _out, int* _out_Strlen);
void QInputDialog_GetItem(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, char** items, uint64_t* items_Lengths, size_t items_len, char** _out, int* _out_Strlen);
int QInputDialog_GetInt(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen);
double QInputDialog_GetDouble(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen);
double QInputDialog_GetDouble2(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, double value, double minValue, double maxValue, int decimals, bool* ok, int flags, double step);
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
void QInputDialog_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QInputDialog_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QInputDialog_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QInputDialog_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QInputDialog_SetOption2(QInputDialog* self, uintptr_t option, bool on);
void QInputDialog_GetText4(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, uintptr_t echo, char** _out, int* _out_Strlen);
void QInputDialog_GetText5(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, uintptr_t echo, const char* text, size_t text_Strlen, char** _out, int* _out_Strlen);
void QInputDialog_GetText6(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, uintptr_t echo, const char* text, size_t text_Strlen, bool* ok, char** _out, int* _out_Strlen);
void QInputDialog_GetText7(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, uintptr_t echo, const char* text, size_t text_Strlen, bool* ok, int flags, char** _out, int* _out_Strlen);
void QInputDialog_GetText8(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, uintptr_t echo, const char* text, size_t text_Strlen, bool* ok, int flags, int inputMethodHints, char** _out, int* _out_Strlen);
void QInputDialog_GetMultiLineText4(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, const char* text, size_t text_Strlen, char** _out, int* _out_Strlen);
void QInputDialog_GetMultiLineText5(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, const char* text, size_t text_Strlen, bool* ok, char** _out, int* _out_Strlen);
void QInputDialog_GetMultiLineText6(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, const char* text, size_t text_Strlen, bool* ok, int flags, char** _out, int* _out_Strlen);
void QInputDialog_GetMultiLineText7(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, const char* text, size_t text_Strlen, bool* ok, int flags, int inputMethodHints, char** _out, int* _out_Strlen);
void QInputDialog_GetItem5(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, char** items, uint64_t* items_Lengths, size_t items_len, int current, char** _out, int* _out_Strlen);
void QInputDialog_GetItem6(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, char** items, uint64_t* items_Lengths, size_t items_len, int current, bool editable, char** _out, int* _out_Strlen);
void QInputDialog_GetItem7(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, char** items, uint64_t* items_Lengths, size_t items_len, int current, bool editable, bool* ok, char** _out, int* _out_Strlen);
void QInputDialog_GetItem8(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, char** items, uint64_t* items_Lengths, size_t items_len, int current, bool editable, bool* ok, int flags, char** _out, int* _out_Strlen);
void QInputDialog_GetItem9(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, char** items, uint64_t* items_Lengths, size_t items_len, int current, bool editable, bool* ok, int flags, int inputMethodHints, char** _out, int* _out_Strlen);
int QInputDialog_GetInt4(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, int value);
int QInputDialog_GetInt5(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, int value, int minValue);
int QInputDialog_GetInt6(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, int value, int minValue, int maxValue);
int QInputDialog_GetInt7(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, int value, int minValue, int maxValue, int step);
int QInputDialog_GetInt8(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, int value, int minValue, int maxValue, int step, bool* ok);
int QInputDialog_GetInt9(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, int value, int minValue, int maxValue, int step, bool* ok, int flags);
double QInputDialog_GetDouble4(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, double value);
double QInputDialog_GetDouble5(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, double value, double minValue);
double QInputDialog_GetDouble6(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, double value, double minValue, double maxValue);
double QInputDialog_GetDouble7(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, double value, double minValue, double maxValue, int decimals);
double QInputDialog_GetDouble8(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, double value, double minValue, double maxValue, int decimals, bool* ok);
double QInputDialog_GetDouble9(QWidget* parent, const char* title, size_t title_Strlen, const char* label, size_t label_Strlen, double value, double minValue, double maxValue, int decimals, bool* ok, int flags);
void QInputDialog_Delete(QInputDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
