#ifndef GEN_QFILEICONPROVIDER_H
#define GEN_QFILEICONPROVIDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

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
QIcon* QFileIconProvider_Icon(const QFileIconProvider* self, uintptr_t typeVal);
QIcon* QFileIconProvider_IconWithInfo(const QFileIconProvider* self, QFileInfo* info);
struct miqt_string* QFileIconProvider_Type(const QFileIconProvider* self, QFileInfo* info);
void QFileIconProvider_SetOptions(QFileIconProvider* self, int options);
int QFileIconProvider_Options(const QFileIconProvider* self);
void QFileIconProvider_Delete(QFileIconProvider* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
