#pragma once
#ifndef MIQT_QT_GEN_QTEXTCODEC_H
#define MIQT_QT_GEN_QTEXTCODEC_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChar;
class QTextCodec;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QTextCodec__ConverterState)
typedef QTextCodec::ConverterState QTextCodec__ConverterState;
#else
class QTextCodec__ConverterState;
#endif
class QTextDecoder;
class QTextEncoder;
#else
typedef struct QChar QChar;
typedef struct QTextCodec QTextCodec;
typedef struct QTextCodec__ConverterState QTextCodec__ConverterState;
typedef struct QTextDecoder QTextDecoder;
typedef struct QTextEncoder QTextEncoder;
#endif

QTextCodec* QTextCodec_CodecForName(struct miqt_string name);
QTextCodec* QTextCodec_CodecForNameWithName(const char* name);
QTextCodec* QTextCodec_CodecForMib(int mib);
struct miqt_array /* of struct miqt_string */  QTextCodec_AvailableCodecs();
struct miqt_array /* of int */  QTextCodec_AvailableMibs();
QTextCodec* QTextCodec_CodecForLocale();
void QTextCodec_SetCodecForLocale(QTextCodec* c);
QTextCodec* QTextCodec_CodecForHtml(struct miqt_string ba);
QTextCodec* QTextCodec_CodecForHtml2(struct miqt_string ba, QTextCodec* defaultCodec);
QTextCodec* QTextCodec_CodecForUtfText(struct miqt_string ba);
QTextCodec* QTextCodec_CodecForUtfText2(struct miqt_string ba, QTextCodec* defaultCodec);
bool QTextCodec_CanEncode(const QTextCodec* self, QChar* param1);
bool QTextCodec_CanEncodeWithQString(const QTextCodec* self, struct miqt_string param1);
struct miqt_string QTextCodec_ToUnicode(const QTextCodec* self, struct miqt_string param1);
struct miqt_string QTextCodec_ToUnicodeWithChars(const QTextCodec* self, const char* chars);
struct miqt_string QTextCodec_FromUnicode(const QTextCodec* self, struct miqt_string uc);
struct miqt_string QTextCodec_ToUnicode2(const QTextCodec* self, const char* in, int length);
struct miqt_string QTextCodec_FromUnicode2(const QTextCodec* self, QChar* in, int length);
QTextDecoder* QTextCodec_MakeDecoder(const QTextCodec* self);
QTextEncoder* QTextCodec_MakeEncoder(const QTextCodec* self);
struct miqt_string QTextCodec_Name(const QTextCodec* self);
struct miqt_array /* of struct miqt_string */  QTextCodec_Aliases(const QTextCodec* self);
int QTextCodec_MibEnum(const QTextCodec* self);
struct miqt_string QTextCodec_ConvertToUnicode(const QTextCodec* self, const char* in, int length, QTextCodec__ConverterState* state);
struct miqt_string QTextCodec_ConvertFromUnicode(const QTextCodec* self, QChar* in, int length, QTextCodec__ConverterState* state);
struct miqt_string QTextCodec_ToUnicode3(const QTextCodec* self, const char* in, int length, QTextCodec__ConverterState* state);
struct miqt_string QTextCodec_FromUnicode3(const QTextCodec* self, QChar* in, int length, QTextCodec__ConverterState* state);
QTextDecoder* QTextCodec_MakeDecoder1(const QTextCodec* self, int flags);
QTextEncoder* QTextCodec_MakeEncoder1(const QTextCodec* self, int flags);

QTextEncoder* QTextEncoder_new(QTextCodec* codec);
QTextEncoder* QTextEncoder_new2(QTextCodec* codec, int flags);
struct miqt_string QTextEncoder_FromUnicode(QTextEncoder* self, struct miqt_string str);
struct miqt_string QTextEncoder_FromUnicode2(QTextEncoder* self, QChar* uc, int lenVal);
bool QTextEncoder_HasFailure(const QTextEncoder* self);
void QTextEncoder_Delete(QTextEncoder* self);

QTextDecoder* QTextDecoder_new(QTextCodec* codec);
QTextDecoder* QTextDecoder_new2(QTextCodec* codec, int flags);
struct miqt_string QTextDecoder_ToUnicode(QTextDecoder* self, const char* chars, int lenVal);
struct miqt_string QTextDecoder_ToUnicodeWithBa(QTextDecoder* self, struct miqt_string ba);
bool QTextDecoder_HasFailure(const QTextDecoder* self);
bool QTextDecoder_NeedsMoreData(const QTextDecoder* self);
void QTextDecoder_Delete(QTextDecoder* self);

QTextCodec__ConverterState* QTextCodec__ConverterState_new();
QTextCodec__ConverterState* QTextCodec__ConverterState_new2(int f);
void QTextCodec__ConverterState_Delete(QTextCodec__ConverterState* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
