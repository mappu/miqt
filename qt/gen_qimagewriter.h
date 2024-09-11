#ifndef GEN_QIMAGEWRITER_H
#define GEN_QIMAGEWRITER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QIODevice;
class QImage;
class QImageWriter;
#else
typedef struct QByteArray QByteArray;
typedef struct QIODevice QIODevice;
typedef struct QImage QImage;
typedef struct QImageWriter QImageWriter;
#endif

QImageWriter* QImageWriter_new();
QImageWriter* QImageWriter_new2(QIODevice* device, QByteArray* format);
QImageWriter* QImageWriter_new3(const char* fileName, size_t fileName_Strlen);
QImageWriter* QImageWriter_new4(const char* fileName, size_t fileName_Strlen, QByteArray* format);
void QImageWriter_Tr(const char* sourceText, char** _out, int* _out_Strlen);
void QImageWriter_TrUtf8(const char* sourceText, char** _out, int* _out_Strlen);
void QImageWriter_SetFormat(QImageWriter* self, QByteArray* format);
QByteArray* QImageWriter_Format(const QImageWriter* self);
void QImageWriter_SetDevice(QImageWriter* self, QIODevice* device);
QIODevice* QImageWriter_Device(const QImageWriter* self);
void QImageWriter_SetFileName(QImageWriter* self, const char* fileName, size_t fileName_Strlen);
void QImageWriter_FileName(const QImageWriter* self, char** _out, int* _out_Strlen);
void QImageWriter_SetQuality(QImageWriter* self, int quality);
int QImageWriter_Quality(const QImageWriter* self);
void QImageWriter_SetCompression(QImageWriter* self, int compression);
int QImageWriter_Compression(const QImageWriter* self);
void QImageWriter_SetGamma(QImageWriter* self, float gamma);
float QImageWriter_Gamma(const QImageWriter* self);
void QImageWriter_SetSubType(QImageWriter* self, QByteArray* typeVal);
QByteArray* QImageWriter_SubType(const QImageWriter* self);
void QImageWriter_SupportedSubTypes(const QImageWriter* self, QByteArray*** _out, size_t* _out_len);
void QImageWriter_SetOptimizedWrite(QImageWriter* self, bool optimize);
bool QImageWriter_OptimizedWrite(const QImageWriter* self);
void QImageWriter_SetProgressiveScanWrite(QImageWriter* self, bool progressive);
bool QImageWriter_ProgressiveScanWrite(const QImageWriter* self);
int QImageWriter_Transformation(const QImageWriter* self);
void QImageWriter_SetTransformation(QImageWriter* self, int orientation);
void QImageWriter_SetDescription(QImageWriter* self, const char* description, size_t description_Strlen);
void QImageWriter_Description(const QImageWriter* self, char** _out, int* _out_Strlen);
void QImageWriter_SetText(QImageWriter* self, const char* key, size_t key_Strlen, const char* text, size_t text_Strlen);
bool QImageWriter_CanWrite(const QImageWriter* self);
bool QImageWriter_Write(QImageWriter* self, QImage* image);
uintptr_t QImageWriter_Error(const QImageWriter* self);
void QImageWriter_ErrorString(const QImageWriter* self, char** _out, int* _out_Strlen);
bool QImageWriter_SupportsOption(const QImageWriter* self, uintptr_t option);
void QImageWriter_SupportedImageFormats(QByteArray*** _out, size_t* _out_len);
void QImageWriter_SupportedMimeTypes(QByteArray*** _out, size_t* _out_len);
void QImageWriter_ImageFormatsForMimeType(QByteArray* mimeType, QByteArray*** _out, size_t* _out_len);
void QImageWriter_Tr2(const char* sourceText, const char* disambiguation, char** _out, int* _out_Strlen);
void QImageWriter_Tr3(const char* sourceText, const char* disambiguation, int n, char** _out, int* _out_Strlen);
void QImageWriter_TrUtf82(const char* sourceText, const char* disambiguation, char** _out, int* _out_Strlen);
void QImageWriter_TrUtf83(const char* sourceText, const char* disambiguation, int n, char** _out, int* _out_Strlen);
void QImageWriter_Delete(QImageWriter* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
