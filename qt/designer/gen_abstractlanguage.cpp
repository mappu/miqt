#include <QDesignerFormEditorInterface>
#include <QDesignerFormWindowInterface>
#include <QDesignerLanguageExtension>
#include <QDesignerResourceBrowserInterface>
#include <QDialog>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <abstractlanguage.h>
#include "gen_abstractlanguage.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

struct miqt_string QDesignerLanguageExtension_name(const QDesignerLanguageExtension* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDialog* QDesignerLanguageExtension_createFormWindowSettingsDialog(QDesignerLanguageExtension* self, QDesignerFormWindowInterface* formWindow, QWidget* parentWidget) {
	return self->createFormWindowSettingsDialog(formWindow, parentWidget);
}

QDesignerResourceBrowserInterface* QDesignerLanguageExtension_createResourceBrowser(QDesignerLanguageExtension* self, QWidget* parentWidget) {
	return self->createResourceBrowser(parentWidget);
}

QDialog* QDesignerLanguageExtension_createPromotionDialog(QDesignerLanguageExtension* self, QDesignerFormEditorInterface* formEditor, QWidget* parentWidget) {
	return self->createPromotionDialog(formEditor, parentWidget);
}

bool QDesignerLanguageExtension_isLanguageResource(const QDesignerLanguageExtension* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return self->isLanguageResource(path_QString);
}

struct miqt_string QDesignerLanguageExtension_classNameOf(const QDesignerLanguageExtension* self, QObject* object) {
	QString _ret = self->classNameOf(object);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDesignerLanguageExtension_signalMatchesSlot(const QDesignerLanguageExtension* self, struct miqt_string signal, struct miqt_string slot) {
	QString signal_QString = QString::fromUtf8(signal.data, signal.len);
	QString slot_QString = QString::fromUtf8(slot.data, slot.len);
	return self->signalMatchesSlot(signal_QString, slot_QString);
}

struct miqt_string QDesignerLanguageExtension_widgetBoxContents(const QDesignerLanguageExtension* self) {
	QString _ret = self->widgetBoxContents();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerLanguageExtension_uiExtension(const QDesignerLanguageExtension* self) {
	QString _ret = self->uiExtension();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerLanguageExtension_operatorAssign(QDesignerLanguageExtension* self, QDesignerLanguageExtension* param1) {
	self->operator=(*param1);
}

void QDesignerLanguageExtension_delete(QDesignerLanguageExtension* self) {
	delete self;
}

