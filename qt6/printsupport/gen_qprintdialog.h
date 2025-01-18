#pragma once
#ifndef MIQT_QT6_PRINTSUPPORT_GEN_QPRINTDIALOG_H
#define MIQT_QT6_PRINTSUPPORT_GEN_QPRINTDIALOG_H

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
class QDialog;
class QMetaObject;
class QObject;
class QPaintDevice;
class QPrintDialog;
class QPrinter;
class QWidget;
#else
typedef struct QAbstractPrintDialog QAbstractPrintDialog;
typedef struct QDialog QDialog;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPrintDialog QPrintDialog;
typedef struct QPrinter QPrinter;
typedef struct QWidget QWidget;
#endif

QPrintDialog* QPrintDialog_new(QWidget* parent);
QPrintDialog* QPrintDialog_new2(QPrinter* printer);
QPrintDialog* QPrintDialog_new3();
QPrintDialog* QPrintDialog_new4(QPrinter* printer, QWidget* parent);
void QPrintDialog_virtbase(QPrintDialog* src, QAbstractPrintDialog** outptr_QAbstractPrintDialog);
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
bool QPrintDialog_override_virtual_Exec(void* self, intptr_t slot);
int QPrintDialog_virtualbase_Exec(void* self);
bool QPrintDialog_override_virtual_Accept(void* self, intptr_t slot);
void QPrintDialog_virtualbase_Accept(void* self);
bool QPrintDialog_override_virtual_Done(void* self, intptr_t slot);
void QPrintDialog_virtualbase_Done(void* self, int result);
bool QPrintDialog_override_virtual_SetVisible(void* self, intptr_t slot);
void QPrintDialog_virtualbase_SetVisible(void* self, bool visible);
void QPrintDialog_Delete(QPrintDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
