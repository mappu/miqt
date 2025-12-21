#pragma once
#ifndef MIQT_QT6_DESIGNER_GEN_ABSTRACTFORMWINDOWCURSOR_H
#define MIQT_QT6_DESIGNER_GEN_ABSTRACTFORMWINDOWCURSOR_H

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

QDesignerFormWindowCursorInterface* QDesignerFormWindowCursorInterface_new();
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

bool QDesignerFormWindowCursorInterface_override_virtual_formWindow(void* self, intptr_t slot);
QDesignerFormWindowInterface* QDesignerFormWindowCursorInterface_virtualbase_formWindow(const void* self);
bool QDesignerFormWindowCursorInterface_override_virtual_movePosition(void* self, intptr_t slot);
bool QDesignerFormWindowCursorInterface_virtualbase_movePosition(void* self, int op, int mode);
bool QDesignerFormWindowCursorInterface_override_virtual_position(void* self, intptr_t slot);
int QDesignerFormWindowCursorInterface_virtualbase_position(const void* self);
bool QDesignerFormWindowCursorInterface_override_virtual_setPosition(void* self, intptr_t slot);
void QDesignerFormWindowCursorInterface_virtualbase_setPosition(void* self, int pos, int mode);
bool QDesignerFormWindowCursorInterface_override_virtual_current(void* self, intptr_t slot);
QWidget* QDesignerFormWindowCursorInterface_virtualbase_current(const void* self);
bool QDesignerFormWindowCursorInterface_override_virtual_widgetCount(void* self, intptr_t slot);
int QDesignerFormWindowCursorInterface_virtualbase_widgetCount(const void* self);
bool QDesignerFormWindowCursorInterface_override_virtual_widget(void* self, intptr_t slot);
QWidget* QDesignerFormWindowCursorInterface_virtualbase_widget(const void* self, int index);
bool QDesignerFormWindowCursorInterface_override_virtual_hasSelection(void* self, intptr_t slot);
bool QDesignerFormWindowCursorInterface_virtualbase_hasSelection(const void* self);
bool QDesignerFormWindowCursorInterface_override_virtual_selectedWidgetCount(void* self, intptr_t slot);
int QDesignerFormWindowCursorInterface_virtualbase_selectedWidgetCount(const void* self);
bool QDesignerFormWindowCursorInterface_override_virtual_selectedWidget(void* self, intptr_t slot);
QWidget* QDesignerFormWindowCursorInterface_virtualbase_selectedWidget(const void* self, int index);
bool QDesignerFormWindowCursorInterface_override_virtual_setProperty(void* self, intptr_t slot);
void QDesignerFormWindowCursorInterface_virtualbase_setProperty(void* self, struct miqt_string name, QVariant* value);
bool QDesignerFormWindowCursorInterface_override_virtual_setWidgetProperty(void* self, intptr_t slot);
void QDesignerFormWindowCursorInterface_virtualbase_setWidgetProperty(void* self, QWidget* widget, struct miqt_string name, QVariant* value);
bool QDesignerFormWindowCursorInterface_override_virtual_resetWidgetProperty(void* self, intptr_t slot);
void QDesignerFormWindowCursorInterface_virtualbase_resetWidgetProperty(void* self, QWidget* widget, struct miqt_string name);

void QDesignerFormWindowCursorInterface_delete(QDesignerFormWindowCursorInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
