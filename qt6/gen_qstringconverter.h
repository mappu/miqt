#ifndef GEN_QSTRINGCONVERTER_H
#define GEN_QSTRINGCONVERTER_H

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
class QStringDecoder;
class QStringEncoder;
#else
typedef struct QByteArrayView QByteArrayView;
typedef struct QChar QChar;
typedef struct QStringDecoder QStringDecoder;
typedef struct QStringEncoder QStringEncoder;
#endif

QStringEncoder* QStringEncoder_new();
QStringEncoder* QStringEncoder_new2(int encoding);
QStringEncoder* QStringEncoder_new3(const char* name);
QStringEncoder* QStringEncoder_new4(int encoding, int flags);
QStringEncoder* QStringEncoder_new5(const char* name, int flags);
ptrdiff_t QStringEncoder_RequiredSpace(const QStringEncoder* self, ptrdiff_t inputLength);
void QStringEncoder_Delete(QStringEncoder* self);

QStringDecoder* QStringDecoder_new(int encoding);
QStringDecoder* QStringDecoder_new2();
QStringDecoder* QStringDecoder_new3(const char* name);
QStringDecoder* QStringDecoder_new4(int encoding, int flags);
QStringDecoder* QStringDecoder_new5(const char* name, int f);
ptrdiff_t QStringDecoder_RequiredSpace(const QStringDecoder* self, ptrdiff_t inputLength);
QChar* QStringDecoder_AppendToBuffer(QStringDecoder* self, QChar* out, QByteArrayView* ba);
QStringDecoder* QStringDecoder_DecoderForHtml(QByteArrayView* data);
void QStringDecoder_Delete(QStringDecoder* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
