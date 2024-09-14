#ifndef GEN_QHASH_H
#define GEN_QHASH_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QHashData;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QHashData__Node)
typedef QHashData::Node QHashData__Node;
#else
class QHashData__Node;
#endif
class QHashDummyValue;
#else
typedef struct QHashData QHashData;
typedef struct QHashData__Node QHashData__Node;
typedef struct QHashDummyValue QHashDummyValue;
#endif

bool QHashData_WillGrow(QHashData* self);
void QHashData_HasShrunk(QHashData* self);
void QHashData_Rehash(QHashData* self, int hint);
QHashData__Node* QHashData_FirstNode(QHashData* self);
QHashData__Node* QHashData_NextNode(QHashData__Node* node);
QHashData__Node* QHashData_PreviousNode(QHashData__Node* node);
void QHashData_Delete(QHashData* self);

QHashDummyValue* QHashDummyValue_new();
QHashDummyValue* QHashDummyValue_new2(QHashDummyValue* param1);
void QHashDummyValue_Delete(QHashDummyValue* self);

void QHashData__Node_Delete(QHashData__Node* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
