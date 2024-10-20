#ifndef GEN_QFILEICONPROVIDER_H
#define GEN_QFILEICONPROVIDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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
QIcon* QFileIconProvider_Icon(const QFileIconProvider* self, int typeVal);
QIcon* QFileIconProvider_IconWithInfo(const QFileIconProvider* self, QFileInfo* info);
void QFileIconProvider_Delete(QFileIconProvider* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
