#include <QCameraViewfinderSettings>
#include <QCameraViewfinderSettingsControl>
#include <QCameraViewfinderSettingsControl2>
#include <QList>
#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qcameraviewfindersettingscontrol.h>
#include "gen_qcameraviewfindersettingscontrol.h"
#include "_cgo_export.h"

QMetaObject* QCameraViewfinderSettingsControl_MetaObject(const QCameraViewfinderSettingsControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCameraViewfinderSettingsControl_Metacast(QCameraViewfinderSettingsControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCameraViewfinderSettingsControl_Tr(const char* s) {
	QString _ret = QCameraViewfinderSettingsControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraViewfinderSettingsControl_TrUtf8(const char* s) {
	QString _ret = QCameraViewfinderSettingsControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCameraViewfinderSettingsControl_IsViewfinderParameterSupported(const QCameraViewfinderSettingsControl* self, int parameter) {
	return self->isViewfinderParameterSupported(static_cast<QCameraViewfinderSettingsControl::ViewfinderParameter>(parameter));
}

QVariant* QCameraViewfinderSettingsControl_ViewfinderParameter(const QCameraViewfinderSettingsControl* self, int parameter) {
	return new QVariant(self->viewfinderParameter(static_cast<QCameraViewfinderSettingsControl::ViewfinderParameter>(parameter)));
}

void QCameraViewfinderSettingsControl_SetViewfinderParameter(QCameraViewfinderSettingsControl* self, int parameter, QVariant* value) {
	self->setViewfinderParameter(static_cast<QCameraViewfinderSettingsControl::ViewfinderParameter>(parameter), *value);
}

struct miqt_string QCameraViewfinderSettingsControl_Tr2(const char* s, const char* c) {
	QString _ret = QCameraViewfinderSettingsControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraViewfinderSettingsControl_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCameraViewfinderSettingsControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraViewfinderSettingsControl_TrUtf82(const char* s, const char* c) {
	QString _ret = QCameraViewfinderSettingsControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraViewfinderSettingsControl_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QCameraViewfinderSettingsControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCameraViewfinderSettingsControl_Delete(QCameraViewfinderSettingsControl* self) {
	delete self;
}

QMetaObject* QCameraViewfinderSettingsControl2_MetaObject(const QCameraViewfinderSettingsControl2* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCameraViewfinderSettingsControl2_Metacast(QCameraViewfinderSettingsControl2* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCameraViewfinderSettingsControl2_Tr(const char* s) {
	QString _ret = QCameraViewfinderSettingsControl2::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraViewfinderSettingsControl2_TrUtf8(const char* s) {
	QString _ret = QCameraViewfinderSettingsControl2::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QCameraViewfinderSettings* */  QCameraViewfinderSettingsControl2_SupportedViewfinderSettings(const QCameraViewfinderSettingsControl2* self) {
	QList<QCameraViewfinderSettings> _ret = self->supportedViewfinderSettings();
	// Convert QList<> from C++ memory to manually-managed C memory
	QCameraViewfinderSettings** _arr = static_cast<QCameraViewfinderSettings**>(malloc(sizeof(QCameraViewfinderSettings*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QCameraViewfinderSettings(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QCameraViewfinderSettings* QCameraViewfinderSettingsControl2_ViewfinderSettings(const QCameraViewfinderSettingsControl2* self) {
	return new QCameraViewfinderSettings(self->viewfinderSettings());
}

void QCameraViewfinderSettingsControl2_SetViewfinderSettings(QCameraViewfinderSettingsControl2* self, QCameraViewfinderSettings* settings) {
	self->setViewfinderSettings(*settings);
}

struct miqt_string QCameraViewfinderSettingsControl2_Tr2(const char* s, const char* c) {
	QString _ret = QCameraViewfinderSettingsControl2::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraViewfinderSettingsControl2_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCameraViewfinderSettingsControl2::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraViewfinderSettingsControl2_TrUtf82(const char* s, const char* c) {
	QString _ret = QCameraViewfinderSettingsControl2::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraViewfinderSettingsControl2_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QCameraViewfinderSettingsControl2::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCameraViewfinderSettingsControl2_Delete(QCameraViewfinderSettingsControl2* self) {
	delete self;
}

