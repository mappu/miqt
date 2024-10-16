#ifndef GEN_QABSTRACTPRINTDIALOG_H
#define GEN_QABSTRACTPRINTDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractPrintDialog;
class QMetaObject;
class QPrinter;
class QWidget;
#else
typedef struct QAbstractPrintDialog QAbstractPrintDialog;
typedef struct QMetaObject QMetaObject;
typedef struct QPrinter QPrinter;
typedef struct QWidget QWidget;
#endif

QAbstractPrintDialog* QAbstractPrintDialog_new(QPrinter* printer);
QAbstractPrintDialog* QAbstractPrintDialog_new2(QPrinter* printer, QWidget* parent);
QMetaObject* QAbstractPrintDialog_MetaObject(const QAbstractPrintDialog* self);
void* QAbstractPrintDialog_Metacast(QAbstractPrintDialog* self, const char* param1);
struct miqt_string* QAbstractPrintDialog_Tr(const char* s);
struct miqt_string* QAbstractPrintDialog_TrUtf8(const char* s);
void QAbstractPrintDialog_AddEnabledOption(QAbstractPrintDialog* self, int option);
void QAbstractPrintDialog_SetEnabledOptions(QAbstractPrintDialog* self, int options);
int QAbstractPrintDialog_EnabledOptions(const QAbstractPrintDialog* self);
bool QAbstractPrintDialog_IsOptionEnabled(const QAbstractPrintDialog* self, int option);
void QAbstractPrintDialog_SetOptionTabs(QAbstractPrintDialog* self, struct miqt_array* /* of QWidget* */ tabs);
void QAbstractPrintDialog_SetPrintRange(QAbstractPrintDialog* self, int rangeVal);
int QAbstractPrintDialog_PrintRange(const QAbstractPrintDialog* self);
void QAbstractPrintDialog_SetMinMax(QAbstractPrintDialog* self, int min, int max);
int QAbstractPrintDialog_MinPage(const QAbstractPrintDialog* self);
int QAbstractPrintDialog_MaxPage(const QAbstractPrintDialog* self);
void QAbstractPrintDialog_SetFromTo(QAbstractPrintDialog* self, int fromPage, int toPage);
int QAbstractPrintDialog_FromPage(const QAbstractPrintDialog* self);
int QAbstractPrintDialog_ToPage(const QAbstractPrintDialog* self);
QPrinter* QAbstractPrintDialog_Printer(const QAbstractPrintDialog* self);
struct miqt_string* QAbstractPrintDialog_Tr2(const char* s, const char* c);
struct miqt_string* QAbstractPrintDialog_Tr3(const char* s, const char* c, int n);
struct miqt_string* QAbstractPrintDialog_TrUtf82(const char* s, const char* c);
struct miqt_string* QAbstractPrintDialog_TrUtf83(const char* s, const char* c, int n);
void QAbstractPrintDialog_Delete(QAbstractPrintDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
