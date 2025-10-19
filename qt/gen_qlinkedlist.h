#pragma once
#ifndef MIQT_QT_GEN_QLINKEDLIST_H
#define MIQT_QT_GEN_QLINKEDLIST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QLinkedListData;
#else
typedef struct QLinkedListData QLinkedListData;
#endif

QLinkedListData* QLinkedListData_new();
QLinkedListData* QLinkedListData_n(const QLinkedListData* self);
void QLinkedListData_setN(QLinkedListData* self, QLinkedListData* n);
QLinkedListData* QLinkedListData_p(const QLinkedListData* self);
void QLinkedListData_setP(QLinkedListData* self, QLinkedListData* p);
int QLinkedListData_size(const QLinkedListData* self);
void QLinkedListData_setSize(QLinkedListData* self, int size);
unsigned int QLinkedListData_sharable(const QLinkedListData* self);
void QLinkedListData_setSharable(QLinkedListData* self, unsigned int sharable);

void QLinkedListData_delete(QLinkedListData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
