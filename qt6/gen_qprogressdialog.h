#ifndef GEN_QPROGRESSDIALOG_H
#define GEN_QPROGRESSDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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

QProgressDialog* QProgressDialog_new(QWidget* parent);
QProgressDialog* QProgressDialog_new2();
QProgressDialog* QProgressDialog_new3(struct miqt_string labelText, struct miqt_string cancelButtonText, int minimum, int maximum);
QProgressDialog* QProgressDialog_new4(QWidget* parent, int flags);
QProgressDialog* QProgressDialog_new5(struct miqt_string labelText, struct miqt_string cancelButtonText, int minimum, int maximum, QWidget* parent);
QProgressDialog* QProgressDialog_new6(struct miqt_string labelText, struct miqt_string cancelButtonText, int minimum, int maximum, QWidget* parent, int flags);
QMetaObject* QProgressDialog_MetaObject(const QProgressDialog* self);
void* QProgressDialog_Metacast(QProgressDialog* self, const char* param1);
struct miqt_string QProgressDialog_Tr(const char* s);
void QProgressDialog_SetLabel(QProgressDialog* self, QLabel* label);
void QProgressDialog_SetCancelButton(QProgressDialog* self, QPushButton* button);
void QProgressDialog_SetBar(QProgressDialog* self, QProgressBar* bar);
bool QProgressDialog_WasCanceled(const QProgressDialog* self);
int QProgressDialog_Minimum(const QProgressDialog* self);
int QProgressDialog_Maximum(const QProgressDialog* self);
int QProgressDialog_Value(const QProgressDialog* self);
QSize* QProgressDialog_SizeHint(const QProgressDialog* self);
struct miqt_string QProgressDialog_LabelText(const QProgressDialog* self);
int QProgressDialog_MinimumDuration(const QProgressDialog* self);
void QProgressDialog_SetAutoReset(QProgressDialog* self, bool reset);
bool QProgressDialog_AutoReset(const QProgressDialog* self);
void QProgressDialog_SetAutoClose(QProgressDialog* self, bool close);
bool QProgressDialog_AutoClose(const QProgressDialog* self);
void QProgressDialog_Cancel(QProgressDialog* self);
void QProgressDialog_Reset(QProgressDialog* self);
void QProgressDialog_SetMaximum(QProgressDialog* self, int maximum);
void QProgressDialog_SetMinimum(QProgressDialog* self, int minimum);
void QProgressDialog_SetRange(QProgressDialog* self, int minimum, int maximum);
void QProgressDialog_SetValue(QProgressDialog* self, int progress);
void QProgressDialog_SetLabelText(QProgressDialog* self, struct miqt_string text);
void QProgressDialog_SetCancelButtonText(QProgressDialog* self, struct miqt_string text);
void QProgressDialog_SetMinimumDuration(QProgressDialog* self, int ms);
void QProgressDialog_Canceled(QProgressDialog* self);
void QProgressDialog_connect_Canceled(QProgressDialog* self, intptr_t slot);
struct miqt_string QProgressDialog_Tr2(const char* s, const char* c);
struct miqt_string QProgressDialog_Tr3(const char* s, const char* c, int n);
void QProgressDialog_Delete(QProgressDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
