#ifndef GEN_QPICTUREFORMATPLUGIN_H
#define GEN_QPICTUREFORMATPLUGIN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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

QMetaObject* QPictureFormatPlugin_MetaObject(const QPictureFormatPlugin* self);
void* QPictureFormatPlugin_Metacast(QPictureFormatPlugin* self, const char* param1);
struct miqt_string QPictureFormatPlugin_Tr(const char* s);
struct miqt_string QPictureFormatPlugin_TrUtf8(const char* s);
bool QPictureFormatPlugin_LoadPicture(QPictureFormatPlugin* self, struct miqt_string format, struct miqt_string filename, QPicture* pic);
bool QPictureFormatPlugin_SavePicture(QPictureFormatPlugin* self, struct miqt_string format, struct miqt_string filename, QPicture* pic);
bool QPictureFormatPlugin_InstallIOHandler(QPictureFormatPlugin* self, struct miqt_string format);
struct miqt_string QPictureFormatPlugin_Tr2(const char* s, const char* c);
struct miqt_string QPictureFormatPlugin_Tr3(const char* s, const char* c, int n);
struct miqt_string QPictureFormatPlugin_TrUtf82(const char* s, const char* c);
struct miqt_string QPictureFormatPlugin_TrUtf83(const char* s, const char* c, int n);
void QPictureFormatPlugin_Delete(QPictureFormatPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
