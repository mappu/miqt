#ifndef GEN_QFILEICONPROVIDER_H
#define GEN_QFILEICONPROVIDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QFileIconProvider;
class QFileInfo;
class QIcon;
#else
typedef struct QFileIconProvider QFileIconProvider;
typedef struct QFileInfo QFileInfo;
typedef struct QIcon QIcon;
#endif

QFileIconProvider* QFileIconProvider_new();
QIcon* QFileIconProvider_Icon(QFileIconProvider* self, QFileInfo* info);
void QFileIconProvider_Type(QFileIconProvider* self, QFileInfo* info, char** _out, int* _out_Strlen);
void QFileIconProvider_Delete(QFileIconProvider* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
