#pragma once
#ifndef MIQT_QT_CBOR_GEN_QCBORSTREAMWRITER_H
#define MIQT_QT_CBOR_GEN_QCBORSTREAMWRITER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCborStreamWriter;
class QIODevice;
#else
typedef struct QCborStreamWriter QCborStreamWriter;
typedef struct QIODevice QIODevice;
#endif

QCborStreamWriter* QCborStreamWriter_new(QIODevice* device);
void QCborStreamWriter_setDevice(QCborStreamWriter* self, QIODevice* device);
QIODevice* QCborStreamWriter_device(const QCborStreamWriter* self);
void QCborStreamWriter_append(QCborStreamWriter* self, unsigned long long u);
void QCborStreamWriter_appendWithQint64(QCborStreamWriter* self, long long i);
void QCborStreamWriter_appendWithQCborNegativeInteger(QCborStreamWriter* self, uint64_t n);
void QCborStreamWriter_appendWithBa(QCborStreamWriter* self, struct miqt_string ba);
void QCborStreamWriter_appendWithTag(QCborStreamWriter* self, uint64_t tag);
void QCborStreamWriter_append3(QCborStreamWriter* self, int tag);
void QCborStreamWriter_appendWithSt(QCborStreamWriter* self, uint8_t st);
void QCborStreamWriter_appendWithFloat(QCborStreamWriter* self, float f);
void QCborStreamWriter_appendWithDouble(QCborStreamWriter* self, double d);
void QCborStreamWriter_appendByteString(QCborStreamWriter* self, const char* data, ptrdiff_t len);
void QCborStreamWriter_appendTextString(QCborStreamWriter* self, const char* utf8, ptrdiff_t len);
void QCborStreamWriter_appendWithBool(QCborStreamWriter* self, bool b);
void QCborStreamWriter_appendNull(QCborStreamWriter* self);
void QCborStreamWriter_appendUndefined(QCborStreamWriter* self);
void QCborStreamWriter_appendWithInt(QCborStreamWriter* self, int i);
void QCborStreamWriter_appendWithUint(QCborStreamWriter* self, unsigned int u);
void QCborStreamWriter_append4(QCborStreamWriter* self, const char* str);
void QCborStreamWriter_startArray(QCborStreamWriter* self);
void QCborStreamWriter_startArrayWithCount(QCborStreamWriter* self, unsigned long long count);
bool QCborStreamWriter_endArray(QCborStreamWriter* self);
void QCborStreamWriter_startMap(QCborStreamWriter* self);
void QCborStreamWriter_startMapWithCount(QCborStreamWriter* self, unsigned long long count);
bool QCborStreamWriter_endMap(QCborStreamWriter* self);
void QCborStreamWriter_append22(QCborStreamWriter* self, const char* str, ptrdiff_t size);
void QCborStreamWriter_delete(QCborStreamWriter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
