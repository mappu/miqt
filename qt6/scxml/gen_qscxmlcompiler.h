#pragma once
#ifndef MIQT_QT6_SCXML_GEN_QSCXMLCOMPILER_H
#define MIQT_QT6_SCXML_GEN_QSCXMLCOMPILER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QScxmlCompiler;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QScxmlCompiler__Loader)
typedef QScxmlCompiler::Loader QScxmlCompiler__Loader;
#else
class QScxmlCompiler__Loader;
#endif
class QScxmlError;
class QScxmlStateMachine;
class QXmlStreamReader;
#else
typedef struct QScxmlCompiler QScxmlCompiler;
typedef struct QScxmlCompiler__Loader QScxmlCompiler__Loader;
typedef struct QScxmlError QScxmlError;
typedef struct QScxmlStateMachine QScxmlStateMachine;
typedef struct QXmlStreamReader QXmlStreamReader;
#endif

QScxmlCompiler* QScxmlCompiler_new(QXmlStreamReader* xmlReader);
struct miqt_string QScxmlCompiler_fileName(const QScxmlCompiler* self);
void QScxmlCompiler_setFileName(QScxmlCompiler* self, struct miqt_string fileName);
QScxmlCompiler__Loader* QScxmlCompiler_loader(const QScxmlCompiler* self);
void QScxmlCompiler_setLoader(QScxmlCompiler* self, QScxmlCompiler__Loader* newLoader);
QScxmlStateMachine* QScxmlCompiler_compile(QScxmlCompiler* self);
struct miqt_array /* of QScxmlError* */  QScxmlCompiler_errors(const QScxmlCompiler* self);

void QScxmlCompiler_delete(QScxmlCompiler* self);

QScxmlCompiler__Loader* QScxmlCompiler__Loader_new();
struct miqt_string QScxmlCompiler__Loader_load(QScxmlCompiler__Loader* self, struct miqt_string name, struct miqt_string baseDir, struct miqt_array /* of struct miqt_string */  errors);
void QScxmlCompiler__Loader_operatorAssign(QScxmlCompiler__Loader* self, QScxmlCompiler__Loader* param1);

bool QScxmlCompiler__Loader_override_virtual_load(void* self, intptr_t slot);
struct miqt_string QScxmlCompiler__Loader_virtualbase_load(void* self, struct miqt_string name, struct miqt_string baseDir, struct miqt_array /* of struct miqt_string */  errors);

void QScxmlCompiler__Loader_delete(QScxmlCompiler__Loader* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
