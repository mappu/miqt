#pragma once
#ifndef MIQT_QT6_GEN_QSTRINGCONVERTER_H
#define MIQT_QT6_GEN_QSTRINGCONVERTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArrayView;
class QChar;
class QStringConverter;
class QStringConverterBase;
class QStringDecoder;
class QStringEncoder;
#else
typedef struct QByteArrayView QByteArrayView;
typedef struct QChar QChar;
typedef struct QStringConverter QStringConverter;
typedef struct QStringConverterBase QStringConverterBase;
typedef struct QStringDecoder QStringDecoder;
typedef struct QStringEncoder QStringEncoder;
#endif

void QStringEncoder_new(QStringEncoder** outptr_QStringEncoder, QStringConverter** outptr_QStringConverter, QStringConverterBase** outptr_QStringConverterBase);
void QStringEncoder_new2(int encoding, QStringEncoder** outptr_QStringEncoder, QStringConverter** outptr_QStringConverter, QStringConverterBase** outptr_QStringConverterBase);
void QStringEncoder_new3(const char* name, QStringEncoder** outptr_QStringEncoder, QStringConverter** outptr_QStringConverter, QStringConverterBase** outptr_QStringConverterBase);
void QStringEncoder_new4(int encoding, int flags, QStringEncoder** outptr_QStringEncoder, QStringConverter** outptr_QStringConverter, QStringConverterBase** outptr_QStringConverterBase);
void QStringEncoder_new5(const char* name, int flags, QStringEncoder** outptr_QStringEncoder, QStringConverter** outptr_QStringConverter, QStringConverterBase** outptr_QStringConverterBase);
ptrdiff_t QStringEncoder_RequiredSpace(const QStringEncoder* self, ptrdiff_t inputLength);
void QStringEncoder_Delete(QStringEncoder* self, bool isSubclass);

void QStringDecoder_new(int encoding, QStringDecoder** outptr_QStringDecoder, QStringConverter** outptr_QStringConverter, QStringConverterBase** outptr_QStringConverterBase);
void QStringDecoder_new2(QStringDecoder** outptr_QStringDecoder, QStringConverter** outptr_QStringConverter, QStringConverterBase** outptr_QStringConverterBase);
void QStringDecoder_new3(const char* name, QStringDecoder** outptr_QStringDecoder, QStringConverter** outptr_QStringConverter, QStringConverterBase** outptr_QStringConverterBase);
void QStringDecoder_new4(int encoding, int flags, QStringDecoder** outptr_QStringDecoder, QStringConverter** outptr_QStringConverter, QStringConverterBase** outptr_QStringConverterBase);
void QStringDecoder_new5(const char* name, int f, QStringDecoder** outptr_QStringDecoder, QStringConverter** outptr_QStringConverter, QStringConverterBase** outptr_QStringConverterBase);
ptrdiff_t QStringDecoder_RequiredSpace(const QStringDecoder* self, ptrdiff_t inputLength);
QChar* QStringDecoder_AppendToBuffer(QStringDecoder* self, QChar* out, QByteArrayView* ba);
QStringDecoder* QStringDecoder_DecoderForHtml(QByteArrayView* data);
void QStringDecoder_Delete(QStringDecoder* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
