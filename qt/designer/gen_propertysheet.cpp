#include <QDesignerPropertySheetExtension>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <propertysheet.h>
#include "gen_propertysheet.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

int QDesignerPropertySheetExtension_count(const QDesignerPropertySheetExtension* self) {
	return self->count();
}

int QDesignerPropertySheetExtension_indexOf(const QDesignerPropertySheetExtension* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->indexOf(name_QString);
}

struct miqt_string QDesignerPropertySheetExtension_propertyName(const QDesignerPropertySheetExtension* self, int index) {
	QString _ret = self->propertyName(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerPropertySheetExtension_propertyGroup(const QDesignerPropertySheetExtension* self, int index) {
	QString _ret = self->propertyGroup(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerPropertySheetExtension_setPropertyGroup(QDesignerPropertySheetExtension* self, int index, struct miqt_string group) {
	QString group_QString = QString::fromUtf8(group.data, group.len);
	self->setPropertyGroup(static_cast<int>(index), group_QString);
}

bool QDesignerPropertySheetExtension_hasReset(const QDesignerPropertySheetExtension* self, int index) {
	return self->hasReset(static_cast<int>(index));
}

bool QDesignerPropertySheetExtension_reset(QDesignerPropertySheetExtension* self, int index) {
	return self->reset(static_cast<int>(index));
}

bool QDesignerPropertySheetExtension_isVisible(const QDesignerPropertySheetExtension* self, int index) {
	return self->isVisible(static_cast<int>(index));
}

void QDesignerPropertySheetExtension_setVisible(QDesignerPropertySheetExtension* self, int index, bool b) {
	self->setVisible(static_cast<int>(index), b);
}

bool QDesignerPropertySheetExtension_isAttribute(const QDesignerPropertySheetExtension* self, int index) {
	return self->isAttribute(static_cast<int>(index));
}

void QDesignerPropertySheetExtension_setAttribute(QDesignerPropertySheetExtension* self, int index, bool b) {
	self->setAttribute(static_cast<int>(index), b);
}

QVariant* QDesignerPropertySheetExtension_property(const QDesignerPropertySheetExtension* self, int index) {
	return new QVariant(self->property(static_cast<int>(index)));
}

void QDesignerPropertySheetExtension_setProperty(QDesignerPropertySheetExtension* self, int index, QVariant* value) {
	self->setProperty(static_cast<int>(index), *value);
}

bool QDesignerPropertySheetExtension_isChanged(const QDesignerPropertySheetExtension* self, int index) {
	return self->isChanged(static_cast<int>(index));
}

void QDesignerPropertySheetExtension_setChanged(QDesignerPropertySheetExtension* self, int index, bool changed) {
	self->setChanged(static_cast<int>(index), changed);
}

bool QDesignerPropertySheetExtension_isEnabled(const QDesignerPropertySheetExtension* self, int index) {
	return self->isEnabled(static_cast<int>(index));
}

void QDesignerPropertySheetExtension_operatorAssign(QDesignerPropertySheetExtension* self, QDesignerPropertySheetExtension* param1) {
	self->operator=(*param1);
}

void QDesignerPropertySheetExtension_delete(QDesignerPropertySheetExtension* self) {
	delete self;
}

