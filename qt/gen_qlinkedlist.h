#ifndef GEN_QLINKEDLIST_H
#define GEN_QLINKEDLIST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QLinkedListData;
#else
typedef struct QLinkedListData QLinkedListData;
#endif

QLinkedListData* QLinkedListData_new();
void QLinkedListData_Delete(QLinkedListData* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
