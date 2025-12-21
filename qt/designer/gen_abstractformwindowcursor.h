#pragma once
#ifndef MIQT_QT_DESIGNER_GEN_ABSTRACTFORMWINDOWCURSOR_H
#define MIQT_QT_DESIGNER_GEN_ABSTRACTFORMWINDOWCURSOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDesignerFormWindowCursorInterface;
class QDesignerFormWindowInterface;
class QVariant;
class QWidget;
#else
typedef struct QDesignerFormWindowCursorInterface QDesignerFormWindowCursorInterface;
typedef struct QDesignerFormWindowInterface QDesignerFormWindowInterface;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QDesignerFormWindowInterface* QDesignerFormWindowCursorInterface_formWindow(const QDesignerFormWindowCursorInterface* self);
bool QDesignerFormWindowCursorInterface_movePosition(QDesignerFormWindowCursorInterface* self, int op, int mode);
int QDesignerFormWindowCursorInterface_position(const QDesignerFormWindowCursorInterface* self);
void QDesignerFormWindowCursorInterface_setPosition(QDesignerFormWindowCursorInterface* self, int pos, int mode);
QWidget* QDesignerFormWindowCursorInterface_current(const QDesignerFormWindowCursorInterface* self);
int QDesignerFormWindowCursorInterface_widgetCount(const QDesignerFormWindowCursorInterface* self);
QWidget* QDesignerFormWindowCursorInterface_widget(const QDesignerFormWindowCursorInterface* self, int index);
bool QDesignerFormWindowCursorInterface_hasSelection(const QDesignerFormWindowCursorInterface* self);
int QDesignerFormWindowCursorInterface_selectedWidgetCount(const QDesignerFormWindowCursorInterface* self);
QWidget* QDesignerFormWindowCursorInterface_selectedWidget(const QDesignerFormWindowCursorInterface* self, int index);
void QDesignerFormWindowCursorInterface_setProperty(QDesignerFormWindowCursorInterface* self, struct miqt_string name, QVariant* value);
void QDesignerFormWindowCursorInterface_setWidgetProperty(QDesignerFormWindowCursorInterface* self, QWidget* widget, struct miqt_string name, QVariant* value);
void QDesignerFormWindowCursorInterface_resetWidgetProperty(QDesignerFormWindowCursorInterface* self, QWidget* widget, struct miqt_string name);
bool QDesignerFormWindowCursorInterface_isWidgetSelected(const QDesignerFormWindowCursorInterface* self, QWidget* widget);
void QDesignerFormWindowCursorInterface_operatorAssign(QDesignerFormWindowCursorInterface* self, QDesignerFormWindowCursorInterface* param1);

void QDesignerFormWindowCursorInterface_delete(QDesignerFormWindowCursorInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
