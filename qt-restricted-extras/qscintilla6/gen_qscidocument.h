#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCIDOCUMENT_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCIDOCUMENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QsciDocument;
#else
typedef struct QsciDocument QsciDocument;
#endif

QsciDocument* QsciDocument_new();
QsciDocument* QsciDocument_new2(QsciDocument* param1);
void QsciDocument_OperatorAssign(QsciDocument* self, QsciDocument* param1);
void QsciDocument_Delete(QsciDocument* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
