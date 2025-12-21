#pragma once
#ifndef MIQT_QT6_DESIGNER_GEN_LAYOUTDECORATION_H
#define MIQT_QT6_DESIGNER_GEN_LAYOUTDECORATION_H

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

QDesignerLayoutDecorationExtension* QDesignerLayoutDecorationExtension_new();
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

bool QDesignerLayoutDecorationExtension_override_virtual_widgets(void* self, intptr_t slot);
struct miqt_array /* of QWidget* */  QDesignerLayoutDecorationExtension_virtualbase_widgets(const void* self, QLayout* layout);
bool QDesignerLayoutDecorationExtension_override_virtual_itemInfo(void* self, intptr_t slot);
QRect* QDesignerLayoutDecorationExtension_virtualbase_itemInfo(const void* self, int index);
bool QDesignerLayoutDecorationExtension_override_virtual_indexOf(void* self, intptr_t slot);
int QDesignerLayoutDecorationExtension_virtualbase_indexOf(const void* self, QWidget* widget);
bool QDesignerLayoutDecorationExtension_override_virtual_indexOfWithItem(void* self, intptr_t slot);
int QDesignerLayoutDecorationExtension_virtualbase_indexOfWithItem(const void* self, QLayoutItem* item);
bool QDesignerLayoutDecorationExtension_override_virtual_currentInsertMode(void* self, intptr_t slot);
int QDesignerLayoutDecorationExtension_virtualbase_currentInsertMode(const void* self);
bool QDesignerLayoutDecorationExtension_override_virtual_currentIndex(void* self, intptr_t slot);
int QDesignerLayoutDecorationExtension_virtualbase_currentIndex(const void* self);
bool QDesignerLayoutDecorationExtension_override_virtual_currentCell(void* self, intptr_t slot);
struct miqt_map /* tuple of int and int */  QDesignerLayoutDecorationExtension_virtualbase_currentCell(const void* self);
bool QDesignerLayoutDecorationExtension_override_virtual_insertWidget(void* self, intptr_t slot);
void QDesignerLayoutDecorationExtension_virtualbase_insertWidget(void* self, QWidget* widget, struct miqt_map /* tuple of int and int */  cell);
bool QDesignerLayoutDecorationExtension_override_virtual_removeWidget(void* self, intptr_t slot);
void QDesignerLayoutDecorationExtension_virtualbase_removeWidget(void* self, QWidget* widget);
bool QDesignerLayoutDecorationExtension_override_virtual_insertRow(void* self, intptr_t slot);
void QDesignerLayoutDecorationExtension_virtualbase_insertRow(void* self, int row);
bool QDesignerLayoutDecorationExtension_override_virtual_insertColumn(void* self, intptr_t slot);
void QDesignerLayoutDecorationExtension_virtualbase_insertColumn(void* self, int column);
bool QDesignerLayoutDecorationExtension_override_virtual_simplify(void* self, intptr_t slot);
void QDesignerLayoutDecorationExtension_virtualbase_simplify(void* self);
bool QDesignerLayoutDecorationExtension_override_virtual_findItemAt(void* self, intptr_t slot);
int QDesignerLayoutDecorationExtension_virtualbase_findItemAt(const void* self, QPoint* pos);
bool QDesignerLayoutDecorationExtension_override_virtual_findItemAt2(void* self, intptr_t slot);
int QDesignerLayoutDecorationExtension_virtualbase_findItemAt2(const void* self, int row, int column);
bool QDesignerLayoutDecorationExtension_override_virtual_adjustIndicator(void* self, intptr_t slot);
void QDesignerLayoutDecorationExtension_virtualbase_adjustIndicator(void* self, QPoint* pos, int index);

void QDesignerLayoutDecorationExtension_delete(QDesignerLayoutDecorationExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
