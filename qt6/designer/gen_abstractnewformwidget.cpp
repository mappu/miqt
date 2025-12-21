#include <QDesignerFormEditorInterface>
#include <QDesignerNewFormWidgetInterface>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPaintDevice>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <abstractnewformwidget.h>
#include "gen_abstractnewformwidget.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QDesignerNewFormWidgetInterface_templateActivated(intptr_t);
void miqt_exec_callback_QDesignerNewFormWidgetInterface_currentTemplateChanged(intptr_t, bool);
#ifdef __cplusplus
} /* extern C */
#endif

void QDesignerNewFormWidgetInterface_virtbase(QDesignerNewFormWidgetInterface* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QDesignerNewFormWidgetInterface_metaObject(const QDesignerNewFormWidgetInterface* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDesignerNewFormWidgetInterface_metacast(QDesignerNewFormWidgetInterface* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDesignerNewFormWidgetInterface_tr(const char* s) {
	QString _ret = QDesignerNewFormWidgetInterface::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDesignerNewFormWidgetInterface_hasCurrentTemplate(const QDesignerNewFormWidgetInterface* self) {
	return self->hasCurrentTemplate();
}

QDesignerNewFormWidgetInterface* QDesignerNewFormWidgetInterface_createNewFormWidget(QDesignerFormEditorInterface* core) {
	return QDesignerNewFormWidgetInterface::createNewFormWidget(core);
}

void QDesignerNewFormWidgetInterface_templateActivated(QDesignerNewFormWidgetInterface* self) {
	self->templateActivated();
}

void QDesignerNewFormWidgetInterface_connect_templateActivated(QDesignerNewFormWidgetInterface* self, intptr_t slot) {
	QDesignerNewFormWidgetInterface::connect(self, static_cast<void (QDesignerNewFormWidgetInterface::*)()>(&QDesignerNewFormWidgetInterface::templateActivated), self, [=]() {
		miqt_exec_callback_QDesignerNewFormWidgetInterface_templateActivated(slot);
	});
}

void QDesignerNewFormWidgetInterface_currentTemplateChanged(QDesignerNewFormWidgetInterface* self, bool templateSelected) {
	self->currentTemplateChanged(templateSelected);
}

void QDesignerNewFormWidgetInterface_connect_currentTemplateChanged(QDesignerNewFormWidgetInterface* self, intptr_t slot) {
	QDesignerNewFormWidgetInterface::connect(self, static_cast<void (QDesignerNewFormWidgetInterface::*)(bool)>(&QDesignerNewFormWidgetInterface::currentTemplateChanged), self, [=](bool templateSelected) {
		bool sigval1 = templateSelected;
		miqt_exec_callback_QDesignerNewFormWidgetInterface_currentTemplateChanged(slot, sigval1);
	});
}

struct miqt_string QDesignerNewFormWidgetInterface_tr2(const char* s, const char* c) {
	QString _ret = QDesignerNewFormWidgetInterface::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerNewFormWidgetInterface_tr3(const char* s, const char* c, int n) {
	QString _ret = QDesignerNewFormWidgetInterface::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDesignerNewFormWidgetInterface* QDesignerNewFormWidgetInterface_createNewFormWidget2(QDesignerFormEditorInterface* core, QWidget* parent) {
	return QDesignerNewFormWidgetInterface::createNewFormWidget(core, parent);
}

void QDesignerNewFormWidgetInterface_delete(QDesignerNewFormWidgetInterface* self) {
	delete self;
}

