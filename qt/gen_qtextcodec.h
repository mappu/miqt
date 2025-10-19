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

QTextCodec* QTextCodec_codecForName(struct miqt_string name);
QTextCodec* QTextCodec_codecForNameWithName(const char* name);
QTextCodec* QTextCodec_codecForMib(int mib);
struct miqt_array /* of struct miqt_string */  QTextCodec_availableCodecs();
struct miqt_array /* of int */  QTextCodec_availableMibs();
QTextCodec* QTextCodec_codecForLocale();
void QTextCodec_setCodecForLocale(QTextCodec* c);
QTextCodec* QTextCodec_codecForHtml(struct miqt_string ba);
QTextCodec* QTextCodec_codecForHtml2(struct miqt_string ba, QTextCodec* defaultCodec);
QTextCodec* QTextCodec_codecForUtfText(struct miqt_string ba);
QTextCodec* QTextCodec_codecForUtfText2(struct miqt_string ba, QTextCodec* defaultCodec);
bool QTextCodec_canEncode(const QTextCodec* self, QChar* param1);
bool QTextCodec_canEncodeWithQString(const QTextCodec* self, struct miqt_string param1);
struct miqt_string QTextCodec_toUnicode(const QTextCodec* self, struct miqt_string param1);
struct miqt_string QTextCodec_toUnicodeWithChars(const QTextCodec* self, const char* chars);
struct miqt_string QTextCodec_fromUnicode(const QTextCodec* self, struct miqt_string uc);
struct miqt_string QTextCodec_toUnicode2(const QTextCodec* self, const char* in, int length);
struct miqt_string QTextCodec_fromUnicode2(const QTextCodec* self, QChar* in, int length);
QTextDecoder* QTextCodec_makeDecoder(const QTextCodec* self);
QTextEncoder* QTextCodec_makeEncoder(const QTextCodec* self);
struct miqt_string QTextCodec_name(const QTextCodec* self);
struct miqt_array /* of struct miqt_string */  QTextCodec_aliases(const QTextCodec* self);
int QTextCodec_mibEnum(const QTextCodec* self);
struct miqt_string QTextCodec_convertToUnicode(const QTextCodec* self, const char* in, int length, QTextCodec__ConverterState* state);
struct miqt_string QTextCodec_convertFromUnicode(const QTextCodec* self, QChar* in, int length, QTextCodec__ConverterState* state);
struct miqt_string QTextCodec_toUnicode3(const QTextCodec* self, const char* in, int length, QTextCodec__ConverterState* state);
struct miqt_string QTextCodec_fromUnicode3(const QTextCodec* self, QChar* in, int length, QTextCodec__ConverterState* state);
QTextDecoder* QTextCodec_makeDecoderWithFlags(const QTextCodec* self, int flags);
QTextEncoder* QTextCodec_makeEncoderWithFlags(const QTextCodec* self, int flags);


QTextEncoder* QTextEncoder_new(QTextCodec* codec);
QTextEncoder* QTextEncoder_new2(QTextCodec* codec, int flags);
struct miqt_string QTextEncoder_fromUnicode(QTextEncoder* self, struct miqt_string str);
struct miqt_string QTextEncoder_fromUnicode2(QTextEncoder* self, QChar* uc, int len);
bool QTextEncoder_hasFailure(const QTextEncoder* self);

void QTextEncoder_delete(QTextEncoder* self);

QTextDecoder* QTextDecoder_new(QTextCodec* codec);
QTextDecoder* QTextDecoder_new2(QTextCodec* codec, int flags);
struct miqt_string QTextDecoder_toUnicode(QTextDecoder* self, const char* chars, int len);
struct miqt_string QTextDecoder_toUnicodeWithBa(QTextDecoder* self, struct miqt_string ba);
bool QTextDecoder_hasFailure(const QTextDecoder* self);
bool QTextDecoder_needsMoreData(const QTextDecoder* self);

void QTextDecoder_delete(QTextDecoder* self);

QTextCodec__ConverterState* QTextCodec__ConverterState_new();
QTextCodec__ConverterState* QTextCodec__ConverterState_new2(int f);
int QTextCodec__ConverterState_flags(const QTextCodec__ConverterState* self);
void QTextCodec__ConverterState_setFlags(QTextCodec__ConverterState* self, int flags);
int QTextCodec__ConverterState_remainingChars(const QTextCodec__ConverterState* self);
void QTextCodec__ConverterState_setRemainingChars(QTextCodec__ConverterState* self, int remainingChars);
int QTextCodec__ConverterState_invalidChars(const QTextCodec__ConverterState* self);
void QTextCodec__ConverterState_setInvalidChars(QTextCodec__ConverterState* self, int invalidChars);

void QTextCodec__ConverterState_delete(QTextCodec__ConverterState* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
