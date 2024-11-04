#ifndef GEN_QFACTORYINTERFACE_H
#define GEN_QFACTORYINTERFACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QFactoryInterface;
#else
typedef struct QFactoryInterface QFactoryInterface;
#endif

struct miqt_array QFactoryInterface_Keys(const QFactoryInterface* self);
void QFactoryInterface_Delete(QFactoryInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
