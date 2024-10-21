#ifndef GEN_QABSTRACTFILEICONPROVIDER_H
#define GEN_QABSTRACTFILEICONPROVIDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractFileIconProvider;
class QFileInfo;
class QIcon;
#else
typedef struct QAbstractFileIconProvider QAbstractFileIconProvider;
typedef struct QFileInfo QFileInfo;
typedef struct QIcon QIcon;
#endif

QAbstractFileIconProvider* QAbstractFileIconProvider_new();
QIcon* QAbstractFileIconProvider_Icon(const QAbstractFileIconProvider* self, int param1);
QIcon* QAbstractFileIconProvider_IconWithQFileInfo(const QAbstractFileIconProvider* self, QFileInfo* param1);
struct miqt_string QAbstractFileIconProvider_Type(const QAbstractFileIconProvider* self, QFileInfo* param1);
void QAbstractFileIconProvider_SetOptions(QAbstractFileIconProvider* self, int options);
int QAbstractFileIconProvider_Options(const QAbstractFileIconProvider* self);
void QAbstractFileIconProvider_Delete(QAbstractFileIconProvider* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
