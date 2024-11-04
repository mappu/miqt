#ifndef GEN_QPRINTDIALOG_H
#define GEN_QPRINTDIALOG_H

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
class QPrintDialog;
class QPrinter;
class QWidget;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QPrintDialog QPrintDialog;
typedef struct QPrinter QPrinter;
typedef struct QWidget QWidget;
#endif

QPrintDialog* QPrintDialog_new(QWidget* parent);
QPrintDialog* QPrintDialog_new2(QPrinter* printer);
QPrintDialog* QPrintDialog_new3();
QPrintDialog* QPrintDialog_new4(QPrinter* printer, QWidget* parent);
QMetaObject* QPrintDialog_MetaObject(const QPrintDialog* self);
void* QPrintDialog_Metacast(QPrintDialog* self, const char* param1);
struct miqt_string QPrintDialog_Tr(const char* s);
int QPrintDialog_Exec(QPrintDialog* self);
void QPrintDialog_Accept(QPrintDialog* self);
void QPrintDialog_Done(QPrintDialog* self, int result);
void QPrintDialog_SetOption(QPrintDialog* self, int option);
bool QPrintDialog_TestOption(const QPrintDialog* self, int option);
void QPrintDialog_SetOptions(QPrintDialog* self, int options);
int QPrintDialog_Options(const QPrintDialog* self);
void QPrintDialog_SetVisible(QPrintDialog* self, bool visible);
void QPrintDialog_Accepted(QPrintDialog* self, QPrinter* printer);
void QPrintDialog_connect_Accepted(QPrintDialog* self, intptr_t slot);
struct miqt_string QPrintDialog_Tr2(const char* s, const char* c);
struct miqt_string QPrintDialog_Tr3(const char* s, const char* c, int n);
void QPrintDialog_SetOption2(QPrintDialog* self, int option, bool on);
void QPrintDialog_Delete(QPrintDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
