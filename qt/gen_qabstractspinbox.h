#ifndef GEN_QABSTRACTSPINBOX_H
#define GEN_QABSTRACTSPINBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractSpinBox;
class QEvent;
class QMetaObject;
class QSize;
class QVariant;
class QWidget;
#else
typedef struct QAbstractSpinBox QAbstractSpinBox;
typedef struct QEvent QEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QSize QSize;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QAbstractSpinBox* QAbstractSpinBox_new();
QAbstractSpinBox* QAbstractSpinBox_new2(QWidget* parent);
QMetaObject* QAbstractSpinBox_MetaObject(const QAbstractSpinBox* self);
void QAbstractSpinBox_Tr(const char* s, char** _out, int* _out_Strlen);
void QAbstractSpinBox_TrUtf8(const char* s, char** _out, int* _out_Strlen);
uintptr_t QAbstractSpinBox_ButtonSymbols(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetButtonSymbols(QAbstractSpinBox* self, uintptr_t bs);
void QAbstractSpinBox_SetCorrectionMode(QAbstractSpinBox* self, uintptr_t cm);
uintptr_t QAbstractSpinBox_CorrectionMode(const QAbstractSpinBox* self);
bool QAbstractSpinBox_HasAcceptableInput(const QAbstractSpinBox* self);
void QAbstractSpinBox_Text(const QAbstractSpinBox* self, char** _out, int* _out_Strlen);
void QAbstractSpinBox_SpecialValueText(const QAbstractSpinBox* self, char** _out, int* _out_Strlen);
void QAbstractSpinBox_SetSpecialValueText(QAbstractSpinBox* self, const char* txt, size_t txt_Strlen);
bool QAbstractSpinBox_Wrapping(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetWrapping(QAbstractSpinBox* self, bool w);
void QAbstractSpinBox_SetReadOnly(QAbstractSpinBox* self, bool r);
bool QAbstractSpinBox_IsReadOnly(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetKeyboardTracking(QAbstractSpinBox* self, bool kt);
bool QAbstractSpinBox_KeyboardTracking(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetAlignment(QAbstractSpinBox* self, int flag);
int QAbstractSpinBox_Alignment(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetFrame(QAbstractSpinBox* self, bool frame);
bool QAbstractSpinBox_HasFrame(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetAccelerated(QAbstractSpinBox* self, bool on);
bool QAbstractSpinBox_IsAccelerated(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetGroupSeparatorShown(QAbstractSpinBox* self, bool shown);
bool QAbstractSpinBox_IsGroupSeparatorShown(const QAbstractSpinBox* self);
QSize* QAbstractSpinBox_SizeHint(const QAbstractSpinBox* self);
QSize* QAbstractSpinBox_MinimumSizeHint(const QAbstractSpinBox* self);
void QAbstractSpinBox_InterpretText(QAbstractSpinBox* self);
bool QAbstractSpinBox_Event(QAbstractSpinBox* self, QEvent* event);
QVariant* QAbstractSpinBox_InputMethodQuery(const QAbstractSpinBox* self, uintptr_t param1);
uintptr_t QAbstractSpinBox_Validate(const QAbstractSpinBox* self, const char* input, size_t input_Strlen, int* pos);
void QAbstractSpinBox_Fixup(const QAbstractSpinBox* self, const char* input, size_t input_Strlen);
void QAbstractSpinBox_StepBy(QAbstractSpinBox* self, int steps);
void QAbstractSpinBox_StepUp(QAbstractSpinBox* self);
void QAbstractSpinBox_StepDown(QAbstractSpinBox* self);
void QAbstractSpinBox_SelectAll(QAbstractSpinBox* self);
void QAbstractSpinBox_Clear(QAbstractSpinBox* self);
void QAbstractSpinBox_EditingFinished(QAbstractSpinBox* self);
void QAbstractSpinBox_connect_EditingFinished(QAbstractSpinBox* self, void* slot);
void QAbstractSpinBox_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QAbstractSpinBox_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QAbstractSpinBox_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QAbstractSpinBox_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QAbstractSpinBox_Delete(QAbstractSpinBox* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
