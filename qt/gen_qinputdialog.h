#ifndef GEN_QINPUTDIALOG_H
#define GEN_QINPUTDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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

QInputDialog* QInputDialog_new(QWidget* parent);
QInputDialog* QInputDialog_new2();
QInputDialog* QInputDialog_new3(QWidget* parent, int flags);
QMetaObject* QInputDialog_MetaObject(const QInputDialog* self);
void* QInputDialog_Metacast(QInputDialog* self, const char* param1);
struct miqt_string QInputDialog_Tr(const char* s);
struct miqt_string QInputDialog_TrUtf8(const char* s);
void QInputDialog_SetInputMode(QInputDialog* self, int mode);
int QInputDialog_InputMode(const QInputDialog* self);
void QInputDialog_SetLabelText(QInputDialog* self, struct miqt_string text);
struct miqt_string QInputDialog_LabelText(const QInputDialog* self);
void QInputDialog_SetOption(QInputDialog* self, int option);
bool QInputDialog_TestOption(const QInputDialog* self, int option);
void QInputDialog_SetOptions(QInputDialog* self, int options);
int QInputDialog_Options(const QInputDialog* self);
void QInputDialog_SetTextValue(QInputDialog* self, struct miqt_string text);
struct miqt_string QInputDialog_TextValue(const QInputDialog* self);
void QInputDialog_SetTextEchoMode(QInputDialog* self, int mode);
int QInputDialog_TextEchoMode(const QInputDialog* self);
void QInputDialog_SetComboBoxEditable(QInputDialog* self, bool editable);
bool QInputDialog_IsComboBoxEditable(const QInputDialog* self);
void QInputDialog_SetComboBoxItems(QInputDialog* self, struct miqt_array /* of struct miqt_string */ items);
struct miqt_array QInputDialog_ComboBoxItems(const QInputDialog* self);
void QInputDialog_SetIntValue(QInputDialog* self, int value);
int QInputDialog_IntValue(const QInputDialog* self);
void QInputDialog_SetIntMinimum(QInputDialog* self, int min);
int QInputDialog_IntMinimum(const QInputDialog* self);
void QInputDialog_SetIntMaximum(QInputDialog* self, int max);
int QInputDialog_IntMaximum(const QInputDialog* self);
void QInputDialog_SetIntRange(QInputDialog* self, int min, int max);
void QInputDialog_SetIntStep(QInputDialog* self, int step);
int QInputDialog_IntStep(const QInputDialog* self);
void QInputDialog_SetDoubleValue(QInputDialog* self, double value);
double QInputDialog_DoubleValue(const QInputDialog* self);
void QInputDialog_SetDoubleMinimum(QInputDialog* self, double min);
double QInputDialog_DoubleMinimum(const QInputDialog* self);
void QInputDialog_SetDoubleMaximum(QInputDialog* self, double max);
double QInputDialog_DoubleMaximum(const QInputDialog* self);
void QInputDialog_SetDoubleRange(QInputDialog* self, double min, double max);
void QInputDialog_SetDoubleDecimals(QInputDialog* self, int decimals);
int QInputDialog_DoubleDecimals(const QInputDialog* self);
void QInputDialog_SetOkButtonText(QInputDialog* self, struct miqt_string text);
struct miqt_string QInputDialog_OkButtonText(const QInputDialog* self);
void QInputDialog_SetCancelButtonText(QInputDialog* self, struct miqt_string text);
struct miqt_string QInputDialog_CancelButtonText(const QInputDialog* self);
QSize* QInputDialog_MinimumSizeHint(const QInputDialog* self);
QSize* QInputDialog_SizeHint(const QInputDialog* self);
void QInputDialog_SetVisible(QInputDialog* self, bool visible);
struct miqt_string QInputDialog_GetText(QWidget* parent, struct miqt_string title, struct miqt_string label);
struct miqt_string QInputDialog_GetMultiLineText(QWidget* parent, struct miqt_string title, struct miqt_string label);
struct miqt_string QInputDialog_GetItem(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_array /* of struct miqt_string */ items);
int QInputDialog_GetInt(QWidget* parent, struct miqt_string title, struct miqt_string label);
double QInputDialog_GetDouble(QWidget* parent, struct miqt_string title, struct miqt_string label);
double QInputDialog_GetDouble2(QWidget* parent, struct miqt_string title, struct miqt_string label, double value, double minValue, double maxValue, int decimals, bool* ok, int flags, double step);
void QInputDialog_SetDoubleStep(QInputDialog* self, double step);
double QInputDialog_DoubleStep(const QInputDialog* self);
void QInputDialog_TextValueChanged(QInputDialog* self, struct miqt_string text);
void QInputDialog_connect_TextValueChanged(QInputDialog* self, intptr_t slot);
void QInputDialog_TextValueSelected(QInputDialog* self, struct miqt_string text);
void QInputDialog_connect_TextValueSelected(QInputDialog* self, intptr_t slot);
void QInputDialog_IntValueChanged(QInputDialog* self, int value);
void QInputDialog_connect_IntValueChanged(QInputDialog* self, intptr_t slot);
void QInputDialog_IntValueSelected(QInputDialog* self, int value);
void QInputDialog_connect_IntValueSelected(QInputDialog* self, intptr_t slot);
void QInputDialog_DoubleValueChanged(QInputDialog* self, double value);
void QInputDialog_connect_DoubleValueChanged(QInputDialog* self, intptr_t slot);
void QInputDialog_DoubleValueSelected(QInputDialog* self, double value);
void QInputDialog_connect_DoubleValueSelected(QInputDialog* self, intptr_t slot);
void QInputDialog_Done(QInputDialog* self, int result);
struct miqt_string QInputDialog_Tr2(const char* s, const char* c);
struct miqt_string QInputDialog_Tr3(const char* s, const char* c, int n);
struct miqt_string QInputDialog_TrUtf82(const char* s, const char* c);
struct miqt_string QInputDialog_TrUtf83(const char* s, const char* c, int n);
void QInputDialog_SetOption2(QInputDialog* self, int option, bool on);
struct miqt_string QInputDialog_GetText4(QWidget* parent, struct miqt_string title, struct miqt_string label, int echo);
struct miqt_string QInputDialog_GetText5(QWidget* parent, struct miqt_string title, struct miqt_string label, int echo, struct miqt_string text);
struct miqt_string QInputDialog_GetText6(QWidget* parent, struct miqt_string title, struct miqt_string label, int echo, struct miqt_string text, bool* ok);
struct miqt_string QInputDialog_GetText7(QWidget* parent, struct miqt_string title, struct miqt_string label, int echo, struct miqt_string text, bool* ok, int flags);
struct miqt_string QInputDialog_GetText8(QWidget* parent, struct miqt_string title, struct miqt_string label, int echo, struct miqt_string text, bool* ok, int flags, int inputMethodHints);
struct miqt_string QInputDialog_GetMultiLineText4(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_string text);
struct miqt_string QInputDialog_GetMultiLineText5(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_string text, bool* ok);
struct miqt_string QInputDialog_GetMultiLineText6(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_string text, bool* ok, int flags);
struct miqt_string QInputDialog_GetMultiLineText7(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_string text, bool* ok, int flags, int inputMethodHints);
struct miqt_string QInputDialog_GetItem5(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_array /* of struct miqt_string */ items, int current);
struct miqt_string QInputDialog_GetItem6(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_array /* of struct miqt_string */ items, int current, bool editable);
struct miqt_string QInputDialog_GetItem7(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_array /* of struct miqt_string */ items, int current, bool editable, bool* ok);
struct miqt_string QInputDialog_GetItem8(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_array /* of struct miqt_string */ items, int current, bool editable, bool* ok, int flags);
struct miqt_string QInputDialog_GetItem9(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_array /* of struct miqt_string */ items, int current, bool editable, bool* ok, int flags, int inputMethodHints);
int QInputDialog_GetInt4(QWidget* parent, struct miqt_string title, struct miqt_string label, int value);
int QInputDialog_GetInt5(QWidget* parent, struct miqt_string title, struct miqt_string label, int value, int minValue);
int QInputDialog_GetInt6(QWidget* parent, struct miqt_string title, struct miqt_string label, int value, int minValue, int maxValue);
int QInputDialog_GetInt7(QWidget* parent, struct miqt_string title, struct miqt_string label, int value, int minValue, int maxValue, int step);
int QInputDialog_GetInt8(QWidget* parent, struct miqt_string title, struct miqt_string label, int value, int minValue, int maxValue, int step, bool* ok);
int QInputDialog_GetInt9(QWidget* parent, struct miqt_string title, struct miqt_string label, int value, int minValue, int maxValue, int step, bool* ok, int flags);
double QInputDialog_GetDouble4(QWidget* parent, struct miqt_string title, struct miqt_string label, double value);
double QInputDialog_GetDouble5(QWidget* parent, struct miqt_string title, struct miqt_string label, double value, double minValue);
double QInputDialog_GetDouble6(QWidget* parent, struct miqt_string title, struct miqt_string label, double value, double minValue, double maxValue);
double QInputDialog_GetDouble7(QWidget* parent, struct miqt_string title, struct miqt_string label, double value, double minValue, double maxValue, int decimals);
double QInputDialog_GetDouble8(QWidget* parent, struct miqt_string title, struct miqt_string label, double value, double minValue, double maxValue, int decimals, bool* ok);
double QInputDialog_GetDouble9(QWidget* parent, struct miqt_string title, struct miqt_string label, double value, double minValue, double maxValue, int decimals, bool* ok, int flags);
void QInputDialog_Delete(QInputDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
