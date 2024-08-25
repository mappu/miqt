#ifndef GEN_QSTYLEFACTORY_H
#define GEN_QSTYLEFACTORY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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

void QStyleFactory_Keys(char*** _out, int** _out_Lengths, size_t* _out_len);
QStyle* QStyleFactory_Create(const char* param1, size_t param1_Strlen);
void QStyleFactory_Delete(QStyleFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
