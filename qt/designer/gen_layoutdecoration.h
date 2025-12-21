#pragma once
#ifndef MIQT_QT_DESIGNER_GEN_LAYOUTDECORATION_H
#define MIQT_QT_DESIGNER_GEN_LAYOUTDECORATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDesignerLayoutDecorationExtension;
class QLayout;
class QLayoutItem;
class QPoint;
class QRect;
class QWidget;
#else
typedef struct QDesignerLayoutDecorationExtension QDesignerLayoutDecorationExtension;
typedef struct QLayout QLayout;
typedef struct QLayoutItem QLayoutItem;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QWidget QWidget;
#endif

struct miqt_array /* of QWidget* */  QDesignerLayoutDecorationExtension_widgets(const QDesignerLayoutDecorationExtension* self, QLayout* layout);
QRect* QDesignerLayoutDecorationExtension_itemInfo(const QDesignerLayoutDecorationExtension* self, int index);
int QDesignerLayoutDecorationExtension_indexOf(const QDesignerLayoutDecorationExtension* self, QWidget* widget);
int QDesignerLayoutDecorationExtension_indexOfWithItem(const QDesignerLayoutDecorationExtension* self, QLayoutItem* item);
int QDesignerLayoutDecorationExtension_currentInsertMode(const QDesignerLayoutDecorationExtension* self);
int QDesignerLayoutDecorationExtension_currentIndex(const QDesignerLayoutDecorationExtension* self);
struct miqt_map /* tuple of int and int */  QDesignerLayoutDecorationExtension_currentCell(const QDesignerLayoutDecorationExtension* self);
void QDesignerLayoutDecorationExtension_insertWidget(QDesignerLayoutDecorationExtension* self, QWidget* widget, struct miqt_map /* tuple of int and int */  cell);
void QDesignerLayoutDecorationExtension_removeWidget(QDesignerLayoutDecorationExtension* self, QWidget* widget);
void QDesignerLayoutDecorationExtension_insertRow(QDesignerLayoutDecorationExtension* self, int row);
void QDesignerLayoutDecorationExtension_insertColumn(QDesignerLayoutDecorationExtension* self, int column);
void QDesignerLayoutDecorationExtension_simplify(QDesignerLayoutDecorationExtension* self);
int QDesignerLayoutDecorationExtension_findItemAt(const QDesignerLayoutDecorationExtension* self, QPoint* pos);
int QDesignerLayoutDecorationExtension_findItemAt2(const QDesignerLayoutDecorationExtension* self, int row, int column);
void QDesignerLayoutDecorationExtension_adjustIndicator(QDesignerLayoutDecorationExtension* self, QPoint* pos, int index);
void QDesignerLayoutDecorationExtension_operatorAssign(QDesignerLayoutDecorationExtension* self, QDesignerLayoutDecorationExtension* param1);

void QDesignerLayoutDecorationExtension_delete(QDesignerLayoutDecorationExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
