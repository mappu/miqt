#pragma once
#ifndef MIQT_QT6_DESIGNER_GEN_ABSTRACTDNDITEM_H
#define MIQT_QT6_DESIGNER_GEN_ABSTRACTDNDITEM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDesignerDnDItemInterface;
class QPoint;
class QWidget;
#else
typedef struct QDesignerDnDItemInterface QDesignerDnDItemInterface;
typedef struct QPoint QPoint;
typedef struct QWidget QWidget;
#endif

QWidget* QDesignerDnDItemInterface_widget(const QDesignerDnDItemInterface* self);
QWidget* QDesignerDnDItemInterface_decoration(const QDesignerDnDItemInterface* self);
QPoint* QDesignerDnDItemInterface_hotSpot(const QDesignerDnDItemInterface* self);
int QDesignerDnDItemInterface_type(const QDesignerDnDItemInterface* self);
QWidget* QDesignerDnDItemInterface_source(const QDesignerDnDItemInterface* self);

void QDesignerDnDItemInterface_delete(QDesignerDnDItemInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
