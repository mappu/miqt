#ifndef GEN_QMAP_H
#define GEN_QMAP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMapDataBase;
class QMapNodeBase;
#else
typedef struct QMapDataBase QMapDataBase;
typedef struct QMapNodeBase QMapNodeBase;
#endif

QMapNodeBase* QMapNodeBase_new(QMapNodeBase* param1);
QMapNodeBase* QMapNodeBase_NextNode(const QMapNodeBase* self);
QMapNodeBase* QMapNodeBase_NextNode2(QMapNodeBase* self);
QMapNodeBase* QMapNodeBase_PreviousNode(const QMapNodeBase* self);
QMapNodeBase* QMapNodeBase_PreviousNode2(QMapNodeBase* self);
int QMapNodeBase_Color(const QMapNodeBase* self);
void QMapNodeBase_SetColor(QMapNodeBase* self, int c);
QMapNodeBase* QMapNodeBase_Parent(const QMapNodeBase* self);
void QMapNodeBase_SetParent(QMapNodeBase* self, QMapNodeBase* pp);
void QMapNodeBase_OperatorAssign(QMapNodeBase* self, QMapNodeBase* param1);
void QMapNodeBase_Delete(QMapNodeBase* self);

void QMapDataBase_RotateLeft(QMapDataBase* self, QMapNodeBase* x);
void QMapDataBase_RotateRight(QMapDataBase* self, QMapNodeBase* x);
void QMapDataBase_Rebalance(QMapDataBase* self, QMapNodeBase* x);
void QMapDataBase_FreeNodeAndRebalance(QMapDataBase* self, QMapNodeBase* z);
void QMapDataBase_RecalcMostLeftNode(QMapDataBase* self);
QMapNodeBase* QMapDataBase_CreateNode(QMapDataBase* self, int size, int alignment, QMapNodeBase* parent, bool left);
void QMapDataBase_FreeTree(QMapDataBase* self, QMapNodeBase* root, int alignment);
QMapDataBase* QMapDataBase_CreateData();
void QMapDataBase_FreeData(QMapDataBase* d);
void QMapDataBase_Delete(QMapDataBase* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
