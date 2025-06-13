#pragma once
#ifndef MIQT_QT6_GEN_QTREEWIDGETITEMITERATOR_H
#define MIQT_QT6_GEN_QTREEWIDGETITEMITERATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QTreeWidget;
class QTreeWidgetItem;
class QTreeWidgetItemIterator;
#else
typedef struct QTreeWidget QTreeWidget;
typedef struct QTreeWidgetItem QTreeWidgetItem;
typedef struct QTreeWidgetItemIterator QTreeWidgetItemIterator;
#endif

QTreeWidgetItemIterator* QTreeWidgetItemIterator_new(QTreeWidgetItemIterator* it);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_new2(QTreeWidget* widget);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_new3(QTreeWidgetItem* item);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_new4(QTreeWidget* widget, int flags);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_new5(QTreeWidgetItem* item, int flags);
void QTreeWidgetItemIterator_operatorAssign(QTreeWidgetItemIterator* self, QTreeWidgetItemIterator* it);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_operatorPlusPlus(QTreeWidgetItemIterator* self);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_operatorPlusPlusWithInt(QTreeWidgetItemIterator* self, int param1);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_operatorPlusAssign(QTreeWidgetItemIterator* self, int n);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_operatorMinusMinus(QTreeWidgetItemIterator* self);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_operatorMinusMinusWithInt(QTreeWidgetItemIterator* self, int param1);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_operatorMinusAssign(QTreeWidgetItemIterator* self, int n);
QTreeWidgetItem* QTreeWidgetItemIterator_operatorMultiply(const QTreeWidgetItemIterator* self);

void QTreeWidgetItemIterator_delete(QTreeWidgetItemIterator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
