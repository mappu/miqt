#include <QDesignerCustomWidgetCollectionInterface>
#include <QDesignerCustomWidgetInterface>
#include <QDesignerFormEditorInterface>
#include <QIcon>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <customwidget.h>
#include "gen_customwidget.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

struct miqt_string QDesignerCustomWidgetInterface_name(const QDesignerCustomWidgetInterface* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerCustomWidgetInterface_group(const QDesignerCustomWidgetInterface* self) {
	QString _ret = self->group();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerCustomWidgetInterface_toolTip(const QDesignerCustomWidgetInterface* self) {
	QString _ret = self->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerCustomWidgetInterface_whatsThis(const QDesignerCustomWidgetInterface* self) {
	QString _ret = self->whatsThis();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerCustomWidgetInterface_includeFile(const QDesignerCustomWidgetInterface* self) {
	QString _ret = self->includeFile();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QIcon* QDesignerCustomWidgetInterface_icon(const QDesignerCustomWidgetInterface* self) {
	return new QIcon(self->icon());
}

bool QDesignerCustomWidgetInterface_isContainer(const QDesignerCustomWidgetInterface* self) {
	return self->isContainer();
}

QWidget* QDesignerCustomWidgetInterface_createWidget(QDesignerCustomWidgetInterface* self, QWidget* parent) {
	return self->createWidget(parent);
}

bool QDesignerCustomWidgetInterface_isInitialized(const QDesignerCustomWidgetInterface* self) {
	return self->isInitialized();
}

void QDesignerCustomWidgetInterface_initialize(QDesignerCustomWidgetInterface* self, QDesignerFormEditorInterface* core) {
	self->initialize(core);
}

struct miqt_string QDesignerCustomWidgetInterface_domXml(const QDesignerCustomWidgetInterface* self) {
	QString _ret = self->domXml();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerCustomWidgetInterface_codeTemplate(const QDesignerCustomWidgetInterface* self) {
	QString _ret = self->codeTemplate();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerCustomWidgetInterface_delete(QDesignerCustomWidgetInterface* self) {
	delete self;
}

void QDesignerCustomWidgetCollectionInterface_operatorAssign(QDesignerCustomWidgetCollectionInterface* self, QDesignerCustomWidgetCollectionInterface* param1) {
	self->operator=(*param1);
}

void QDesignerCustomWidgetCollectionInterface_delete(QDesignerCustomWidgetCollectionInterface* self) {
	delete self;
}

