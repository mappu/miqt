#ifndef GEN_QFACTORYINTERFACE_H
#define GEN_QFACTORYINTERFACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QFactoryInterface;
#else
typedef struct QFactoryInterface QFactoryInterface;
#endif

void QFactoryInterface_Keys(QFactoryInterface* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QFactoryInterface_Delete(QFactoryInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
