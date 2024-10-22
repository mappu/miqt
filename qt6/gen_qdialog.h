#ifndef GEN_QDIALOG_H
#define GEN_QDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDialog;
class QMetaObject;
class QSize;
class QWidget;
#else
typedef struct QDialog QDialog;
typedef struct QMetaObject QMetaObject;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QDialog* QDialog_new();
QDialog* QDialog_new2(QWidget* parent);
QDialog* QDialog_new3(QWidget* parent, int f);
QMetaObject* QDialog_MetaObject(const QDialog* self);
void* QDialog_Metacast(QDialog* self, const char* param1);
struct miqt_string QDialog_Tr(const char* s);
int QDialog_Result(const QDialog* self);
void QDialog_SetVisible(QDialog* self, bool visible);
QSize* QDialog_SizeHint(const QDialog* self);
QSize* QDialog_MinimumSizeHint(const QDialog* self);
void QDialog_SetSizeGripEnabled(QDialog* self, bool sizeGripEnabled);
bool QDialog_IsSizeGripEnabled(const QDialog* self);
void QDialog_SetModal(QDialog* self, bool modal);
void QDialog_SetResult(QDialog* self, int r);
void QDialog_Finished(QDialog* self, int result);
void QDialog_connect_Finished(QDialog* self, intptr_t slot);
void QDialog_Accepted(QDialog* self);
void QDialog_connect_Accepted(QDialog* self, intptr_t slot);
void QDialog_Rejected(QDialog* self);
void QDialog_connect_Rejected(QDialog* self, intptr_t slot);
void QDialog_Open(QDialog* self);
int QDialog_Exec(QDialog* self);
void QDialog_Done(QDialog* self, int param1);
void QDialog_Accept(QDialog* self);
void QDialog_Reject(QDialog* self);
struct miqt_string QDialog_Tr2(const char* s, const char* c);
struct miqt_string QDialog_Tr3(const char* s, const char* c, int n);
void QDialog_Delete(QDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
