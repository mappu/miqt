#ifndef GEN_QTREEWIDGETITEMITERATOR_H
#define GEN_QTREEWIDGETITEMITERATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QTreeWidgetItem;
class QTreeWidgetItemIterator;
#else
typedef struct QTreeWidgetItem QTreeWidgetItem;
typedef struct QTreeWidgetItemIterator QTreeWidgetItemIterator;
#endif

QTreeWidgetItemIterator* QTreeWidgetItemIterator_new(QTreeWidgetItemIterator* it);
void QTreeWidgetItemIterator_OperatorAssign(QTreeWidgetItemIterator* self, QTreeWidgetItemIterator* it);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_OperatorPlusPlus(QTreeWidgetItemIterator* self);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_OperatorPlusPlusWithInt(QTreeWidgetItemIterator* self, int param1);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_OperatorPlusAssign(QTreeWidgetItemIterator* self, int n);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_OperatorMinusMinus(QTreeWidgetItemIterator* self);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_OperatorMinusMinusWithInt(QTreeWidgetItemIterator* self, int param1);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_OperatorMinusAssign(QTreeWidgetItemIterator* self, int n);
QTreeWidgetItem* QTreeWidgetItemIterator_OperatorMultiply(QTreeWidgetItemIterator* self);
void QTreeWidgetItemIterator_Delete(QTreeWidgetItemIterator* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
