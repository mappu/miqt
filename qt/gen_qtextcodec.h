#ifndef GEN_QTEXTCODEC_H
#define GEN_QTEXTCODEC_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
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
typedef struct QByteArray QByteArray;
typedef struct QChar QChar;
typedef struct QTextCodec QTextCodec;
typedef struct QTextCodec__ConverterState QTextCodec__ConverterState;
typedef struct QTextDecoder QTextDecoder;
typedef struct QTextEncoder QTextEncoder;
#endif

QTextCodec* QTextCodec_CodecForName(QByteArray* name);
QTextCodec* QTextCodec_CodecForNameWithName(const char* name);
QTextCodec* QTextCodec_CodecForMib(int mib);
void QTextCodec_AvailableCodecs(QByteArray*** _out, size_t* _out_len);
void QTextCodec_AvailableMibs(int** _out, size_t* _out_len);
QTextCodec* QTextCodec_CodecForLocale();
void QTextCodec_SetCodecForLocale(QTextCodec* c);
QTextCodec* QTextCodec_CodecForHtml(QByteArray* ba);
QTextCodec* QTextCodec_CodecForHtml2(QByteArray* ba, QTextCodec* defaultCodec);
QTextCodec* QTextCodec_CodecForUtfText(QByteArray* ba);
QTextCodec* QTextCodec_CodecForUtfText2(QByteArray* ba, QTextCodec* defaultCodec);
bool QTextCodec_CanEncode(const QTextCodec* self, QChar* param1);
bool QTextCodec_CanEncodeWithQString(const QTextCodec* self, const char* param1, size_t param1_Strlen);
void QTextCodec_ToUnicode(const QTextCodec* self, QByteArray* param1, char** _out, int* _out_Strlen);
void QTextCodec_ToUnicodeWithChars(const QTextCodec* self, const char* chars, char** _out, int* _out_Strlen);
QByteArray* QTextCodec_FromUnicode(const QTextCodec* self, const char* uc, size_t uc_Strlen);
void QTextCodec_ToUnicode2(const QTextCodec* self, const char* in, int length, char** _out, int* _out_Strlen);
QByteArray* QTextCodec_FromUnicode2(const QTextCodec* self, QChar* in, int length);
QTextDecoder* QTextCodec_MakeDecoder(const QTextCodec* self);
QTextEncoder* QTextCodec_MakeEncoder(const QTextCodec* self);
QByteArray* QTextCodec_Name(const QTextCodec* self);
void QTextCodec_Aliases(const QTextCodec* self, QByteArray*** _out, size_t* _out_len);
int QTextCodec_MibEnum(const QTextCodec* self);
void QTextCodec_ToUnicode3(const QTextCodec* self, const char* in, int length, QTextCodec__ConverterState* state, char** _out, int* _out_Strlen);
QByteArray* QTextCodec_FromUnicode3(const QTextCodec* self, QChar* in, int length, QTextCodec__ConverterState* state);
QTextDecoder* QTextCodec_MakeDecoder1(const QTextCodec* self, int flags);
QTextEncoder* QTextCodec_MakeEncoder1(const QTextCodec* self, int flags);

QTextEncoder* QTextEncoder_new(QTextCodec* codec);
QTextEncoder* QTextEncoder_new2(QTextCodec* codec, int flags);
QByteArray* QTextEncoder_FromUnicode(QTextEncoder* self, const char* str, size_t str_Strlen);
QByteArray* QTextEncoder_FromUnicode2(QTextEncoder* self, QChar* uc, int lenVal);
bool QTextEncoder_HasFailure(const QTextEncoder* self);
void QTextEncoder_Delete(QTextEncoder* self);

QTextDecoder* QTextDecoder_new(QTextCodec* codec);
QTextDecoder* QTextDecoder_new2(QTextCodec* codec, int flags);
void QTextDecoder_ToUnicode(QTextDecoder* self, const char* chars, int lenVal, char** _out, int* _out_Strlen);
void QTextDecoder_ToUnicodeWithBa(QTextDecoder* self, QByteArray* ba, char** _out, int* _out_Strlen);
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
