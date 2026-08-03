#include <QDesignerFormWindowCursorInterface>
#include <QDesignerFormWindowInterface>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QWidget>
#include <abstractformwindowcursor.h>
#include "gen_abstractformwindowcursor.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QDesignerFormWindowInterface* QDesignerFormWindowCursorInterface_formWindow(const QDesignerFormWindowCursorInterface* self) {
	return self->formWindow();
}

bool QDesignerFormWindowCursorInterface_movePosition(QDesignerFormWindowCursorInterface* self, int op, int mode) {
	return self->movePosition(static_cast<QDesignerFormWindowCursorInterface::MoveOperation>(op), static_cast<QDesignerFormWindowCursorInterface::MoveMode>(mode));
}

int QDesignerFormWindowCursorInterface_position(const QDesignerFormWindowCursorInterface* self) {
	return self->position();
}

void QDesignerFormWindowCursorInterface_setPosition(QDesignerFormWindowCursorInterface* self, int pos, int mode) {
	self->setPosition(static_cast<int>(pos), static_cast<QDesignerFormWindowCursorInterface::MoveMode>(mode));
}

QWidget* QDesignerFormWindowCursorInterface_current(const QDesignerFormWindowCursorInterface* self) {
	return self->current();
}

int QDesignerFormWindowCursorInterface_widgetCount(const QDesignerFormWindowCursorInterface* self) {
	return self->widgetCount();
}

QWidget* QDesignerFormWindowCursorInterface_widget(const QDesignerFormWindowCursorInterface* self, int index) {
	return self->widget(static_cast<int>(index));
}

bool QDesignerFormWindowCursorInterface_hasSelection(const QDesignerFormWindowCursorInterface* self) {
	return self->hasSelection();
}

int QDesignerFormWindowCursorInterface_selectedWidgetCount(const QDesignerFormWindowCursorInterface* self) {
	return self->selectedWidgetCount();
}

QWidget* QDesignerFormWindowCursorInterface_selectedWidget(const QDesignerFormWindowCursorInterface* self, int index) {
	return self->selectedWidget(static_cast<int>(index));
}

void QDesignerFormWindowCursorInterface_setProperty(QDesignerFormWindowCursorInterface* self, struct miqt_string name, QVariant* value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setProperty(name_QString, *value);
}

void QDesignerFormWindowCursorInterface_setWidgetProperty(QDesignerFormWindowCursorInterface* self, QWidget* widget, struct miqt_string name, QVariant* value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setWidgetProperty(widget, name_QString, *value);
}

void QDesignerFormWindowCursorInterface_resetWidgetProperty(QDesignerFormWindowCursorInterface* self, QWidget* widget, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->resetWidgetProperty(widget, name_QString);
}

bool QDesignerFormWindowCursorInterface_isWidgetSelected(const QDesignerFormWindowCursorInterface* self, QWidget* widget) {
	return self->isWidgetSelected(widget);
}

void QDesignerFormWindowCursorInterface_operatorAssign(QDesignerFormWindowCursorInterface* self, QDesignerFormWindowCursorInterface* param1) {
	self->operator=(*param1);
}

void QDesignerFormWindowCursorInterface_delete(QDesignerFormWindowCursorInterface* self) {
	delete self;
}

