#pragma once
#ifndef MIQT_QT_GEN_QSTRINGLITERAL_H
#define MIQT_QT_GEN_QSTRINGLITERAL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QStringDataPtr;
#else
typedef struct QStringDataPtr QStringDataPtr;
#endif

void QStringDataPtr_Delete(QStringDataPtr* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
