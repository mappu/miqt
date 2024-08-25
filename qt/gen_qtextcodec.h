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
class QTextDecoder;
class QTextEncoder;
#else
typedef struct QByteArray QByteArray;
typedef struct QChar QChar;
typedef struct QTextCodec QTextCodec;
typedef struct QTextDecoder QTextDecoder;
typedef struct QTextEncoder QTextEncoder;
#endif

QTextCodec* QTextCodec_CodecForName(QByteArray* name);
QTextCodec* QTextCodec_CodecForNameWithName(char* name);
QTextCodec* QTextCodec_CodecForMib(int mib);
void QTextCodec_AvailableCodecs(QByteArray*** _out, size_t* _out_len);
void QTextCodec_AvailableMibs(int** _out, size_t* _out_len);
QTextCodec* QTextCodec_CodecForLocale();
void QTextCodec_SetCodecForLocale(QTextCodec* c);
QTextCodec* QTextCodec_CodecForHtml(QByteArray* ba);
QTextCodec* QTextCodec_CodecForHtml2(QByteArray* ba, QTextCodec* defaultCodec);
QTextCodec* QTextCodec_CodecForUtfText(QByteArray* ba);
QTextCodec* QTextCodec_CodecForUtfText2(QByteArray* ba, QTextCodec* defaultCodec);
bool QTextCodec_CanEncode(QTextCodec* self, QChar* param1);
bool QTextCodec_CanEncodeWithQString(QTextCodec* self, const char* param1, size_t param1_Strlen);
void QTextCodec_ToUnicode(QTextCodec* self, QByteArray* param1, char** _out, int* _out_Strlen);
void QTextCodec_ToUnicodeWithChars(QTextCodec* self, char* chars, char** _out, int* _out_Strlen);
QByteArray* QTextCodec_FromUnicode(QTextCodec* self, const char* uc, size_t uc_Strlen);
QByteArray* QTextCodec_Name(QTextCodec* self);
void QTextCodec_Aliases(QTextCodec* self, QByteArray*** _out, size_t* _out_len);
int QTextCodec_MibEnum(QTextCodec* self);

QTextEncoder* QTextEncoder_new(QTextCodec* codec);
QByteArray* QTextEncoder_FromUnicode(QTextEncoder* self, const char* str, size_t str_Strlen);
QByteArray* QTextEncoder_FromUnicode2(QTextEncoder* self, QChar* uc, int lenVal);
bool QTextEncoder_HasFailure(QTextEncoder* self);
void QTextEncoder_Delete(QTextEncoder* self);

QTextDecoder* QTextDecoder_new(QTextCodec* codec);
void QTextDecoder_ToUnicode(QTextDecoder* self, char* chars, int lenVal, char** _out, int* _out_Strlen);
void QTextDecoder_ToUnicodeWithBa(QTextDecoder* self, QByteArray* ba, char** _out, int* _out_Strlen);
bool QTextDecoder_HasFailure(QTextDecoder* self);
bool QTextDecoder_NeedsMoreData(QTextDecoder* self);
void QTextDecoder_Delete(QTextDecoder* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
