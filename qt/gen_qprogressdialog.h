#ifndef GEN_QPROGRESSDIALOG_H
#define GEN_QPROGRESSDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QLabel;
class QMetaObject;
class QProgressBar;
class QProgressDialog;
class QPushButton;
class QSize;
class QWidget;
#else
typedef struct QLabel QLabel;
typedef struct QMetaObject QMetaObject;
typedef struct QProgressBar QProgressBar;
typedef struct QProgressDialog QProgressDialog;
typedef struct QPushButton QPushButton;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QProgressDialog* QProgressDialog_new();
QProgressDialog* QProgressDialog_new2(const char* labelText, size_t labelText_Strlen, const char* cancelButtonText, size_t cancelButtonText_Strlen, int minimum, int maximum);
QProgressDialog* QProgressDialog_new3(QWidget* parent);
QProgressDialog* QProgressDialog_new4(QWidget* parent, int flags);
QProgressDialog* QProgressDialog_new5(const char* labelText, size_t labelText_Strlen, const char* cancelButtonText, size_t cancelButtonText_Strlen, int minimum, int maximum, QWidget* parent);
QProgressDialog* QProgressDialog_new6(const char* labelText, size_t labelText_Strlen, const char* cancelButtonText, size_t cancelButtonText_Strlen, int minimum, int maximum, QWidget* parent, int flags);
QMetaObject* QProgressDialog_MetaObject(QProgressDialog* self);
void QProgressDialog_Tr(const char* s, char** _out, int* _out_Strlen);
void QProgressDialog_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QProgressDialog_SetLabel(QProgressDialog* self, QLabel* label);
void QProgressDialog_SetCancelButton(QProgressDialog* self, QPushButton* button);
void QProgressDialog_SetBar(QProgressDialog* self, QProgressBar* bar);
bool QProgressDialog_WasCanceled(QProgressDialog* self);
int QProgressDialog_Minimum(QProgressDialog* self);
int QProgressDialog_Maximum(QProgressDialog* self);
int QProgressDialog_Value(QProgressDialog* self);
QSize* QProgressDialog_SizeHint(QProgressDialog* self);
void QProgressDialog_LabelText(QProgressDialog* self, char** _out, int* _out_Strlen);
int QProgressDialog_MinimumDuration(QProgressDialog* self);
void QProgressDialog_SetAutoReset(QProgressDialog* self, bool reset);
bool QProgressDialog_AutoReset(QProgressDialog* self);
void QProgressDialog_SetAutoClose(QProgressDialog* self, bool close);
bool QProgressDialog_AutoClose(QProgressDialog* self);
void QProgressDialog_Cancel(QProgressDialog* self);
void QProgressDialog_Reset(QProgressDialog* self);
void QProgressDialog_SetMaximum(QProgressDialog* self, int maximum);
void QProgressDialog_SetMinimum(QProgressDialog* self, int minimum);
void QProgressDialog_SetRange(QProgressDialog* self, int minimum, int maximum);
void QProgressDialog_SetValue(QProgressDialog* self, int progress);
void QProgressDialog_SetLabelText(QProgressDialog* self, const char* text, size_t text_Strlen);
void QProgressDialog_SetCancelButtonText(QProgressDialog* self, const char* text, size_t text_Strlen);
void QProgressDialog_SetMinimumDuration(QProgressDialog* self, int ms);
void QProgressDialog_Canceled(QProgressDialog* self);
void QProgressDialog_connect_Canceled(QProgressDialog* self, void* slot);
void QProgressDialog_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QProgressDialog_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QProgressDialog_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QProgressDialog_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QProgressDialog_Delete(QProgressDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
