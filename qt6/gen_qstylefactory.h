#ifndef GEN_QSTYLEFACTORY_H
#define GEN_QSTYLEFACTORY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QStyle;
class QStyleFactory;
#else
typedef struct QStyle QStyle;
typedef struct QStyleFactory QStyleFactory;
#endif

struct miqt_array QStyleFactory_Keys();
QStyle* QStyleFactory_Create(struct miqt_string param1);
void QStyleFactory_Delete(QStyleFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
