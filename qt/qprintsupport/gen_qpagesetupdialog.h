#ifndef GEN_QPAGESETUPDIALOG_H
#define GEN_QPAGESETUPDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QPageSetupDialog;
class QPrinter;
class QWidget;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QPageSetupDialog QPageSetupDialog;
typedef struct QPrinter QPrinter;
typedef struct QWidget QWidget;
#endif

QPageSetupDialog* QPageSetupDialog_new(QPrinter* printer);
QPageSetupDialog* QPageSetupDialog_new2();
QPageSetupDialog* QPageSetupDialog_new3(QPrinter* printer, QWidget* parent);
QPageSetupDialog* QPageSetupDialog_new4(QWidget* parent);
QMetaObject* QPageSetupDialog_MetaObject(const QPageSetupDialog* self);
void* QPageSetupDialog_Metacast(QPageSetupDialog* self, const char* param1);
struct miqt_string* QPageSetupDialog_Tr(const char* s);
struct miqt_string* QPageSetupDialog_TrUtf8(const char* s);
int QPageSetupDialog_Exec(QPageSetupDialog* self);
void QPageSetupDialog_Done(QPageSetupDialog* self, int result);
QPrinter* QPageSetupDialog_Printer(QPageSetupDialog* self);
struct miqt_string* QPageSetupDialog_Tr2(const char* s, const char* c);
struct miqt_string* QPageSetupDialog_Tr3(const char* s, const char* c, int n);
struct miqt_string* QPageSetupDialog_TrUtf82(const char* s, const char* c);
struct miqt_string* QPageSetupDialog_TrUtf83(const char* s, const char* c, int n);
void QPageSetupDialog_Delete(QPageSetupDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
