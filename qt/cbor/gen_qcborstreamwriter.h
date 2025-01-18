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
void QCborStreamWriter_SetDevice(QCborStreamWriter* self, QIODevice* device);
QIODevice* QCborStreamWriter_Device(const QCborStreamWriter* self);
void QCborStreamWriter_Append(QCborStreamWriter* self, unsigned long long u);
void QCborStreamWriter_AppendWithQint64(QCborStreamWriter* self, long long i);
void QCborStreamWriter_AppendWithQCborNegativeInteger(QCborStreamWriter* self, uint64_t n);
void QCborStreamWriter_AppendWithBa(QCborStreamWriter* self, struct miqt_string ba);
void QCborStreamWriter_AppendWithTag(QCborStreamWriter* self, uint64_t tag);
void QCborStreamWriter_Append3(QCborStreamWriter* self, int tag);
void QCborStreamWriter_AppendWithSt(QCborStreamWriter* self, uint8_t st);
void QCborStreamWriter_AppendWithFloat(QCborStreamWriter* self, float f);
void QCborStreamWriter_AppendWithDouble(QCborStreamWriter* self, double d);
void QCborStreamWriter_AppendByteString(QCborStreamWriter* self, const char* data, ptrdiff_t lenVal);
void QCborStreamWriter_AppendTextString(QCborStreamWriter* self, const char* utf8, ptrdiff_t lenVal);
void QCborStreamWriter_AppendWithBool(QCborStreamWriter* self, bool b);
void QCborStreamWriter_AppendNull(QCborStreamWriter* self);
void QCborStreamWriter_AppendUndefined(QCborStreamWriter* self);
void QCborStreamWriter_AppendWithInt(QCborStreamWriter* self, int i);
void QCborStreamWriter_AppendWithUint(QCborStreamWriter* self, unsigned int u);
void QCborStreamWriter_Append4(QCborStreamWriter* self, const char* str);
void QCborStreamWriter_StartArray(QCborStreamWriter* self);
void QCborStreamWriter_StartArrayWithCount(QCborStreamWriter* self, unsigned long long count);
bool QCborStreamWriter_EndArray(QCborStreamWriter* self);
void QCborStreamWriter_StartMap(QCborStreamWriter* self);
void QCborStreamWriter_StartMapWithCount(QCborStreamWriter* self, unsigned long long count);
bool QCborStreamWriter_EndMap(QCborStreamWriter* self);
void QCborStreamWriter_Append22(QCborStreamWriter* self, const char* str, ptrdiff_t size);
void QCborStreamWriter_Delete(QCborStreamWriter* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
