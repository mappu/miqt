#ifndef GEN_QPICTUREFORMATPLUGIN_H
#define GEN_QPICTUREFORMATPLUGIN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QPicture;
class QPictureFormatPlugin;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QPicture QPicture;
typedef struct QPictureFormatPlugin QPictureFormatPlugin;
#endif

QMetaObject* QPictureFormatPlugin_MetaObject(QPictureFormatPlugin* self);
void QPictureFormatPlugin_Tr(const char* s, char** _out, int* _out_Strlen);
void QPictureFormatPlugin_TrUtf8(const char* s, char** _out, int* _out_Strlen);
bool QPictureFormatPlugin_LoadPicture(QPictureFormatPlugin* self, const char* format, size_t format_Strlen, const char* filename, size_t filename_Strlen, QPicture* pic);
bool QPictureFormatPlugin_SavePicture(QPictureFormatPlugin* self, const char* format, size_t format_Strlen, const char* filename, size_t filename_Strlen, QPicture* pic);
bool QPictureFormatPlugin_InstallIOHandler(QPictureFormatPlugin* self, const char* format, size_t format_Strlen);
void QPictureFormatPlugin_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QPictureFormatPlugin_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QPictureFormatPlugin_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QPictureFormatPlugin_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QPictureFormatPlugin_Delete(QPictureFormatPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
