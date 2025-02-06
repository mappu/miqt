#include <QCameraViewfinderSettings>
#include <QCameraViewfinderSettingsControl>
#include <QCameraViewfinderSettingsControl2>
#include <QList>
#include <QMediaControl>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qcameraviewfindersettingscontrol.h>
#include "gen_qcameraviewfindersettingscontrol.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QCameraViewfinderSettingsControl_virtbase(QCameraViewfinderSettingsControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QCameraViewfinderSettingsControl_metaObject(const QCameraViewfinderSettingsControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCameraViewfinderSettingsControl_metacast(QCameraViewfinderSettingsControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCameraViewfinderSettingsControl_tr(const char* s) {
	QString _ret = QCameraViewfinderSettingsControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraViewfinderSettingsControl_trUtf8(const char* s) {
	QString _ret = QCameraViewfinderSettingsControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCameraViewfinderSettingsControl_isViewfinderParameterSupported(const QCameraViewfinderSettingsControl* self, int parameter) {
	return self->isViewfinderParameterSupported(static_cast<QCameraViewfinderSettingsControl::ViewfinderParameter>(parameter));
}

QVariant* QCameraViewfinderSettingsControl_viewfinderParameter(const QCameraViewfinderSettingsControl* self, int parameter) {
	return new QVariant(self->viewfinderParameter(static_cast<QCameraViewfinderSettingsControl::ViewfinderParameter>(parameter)));
}

void QCameraViewfinderSettingsControl_setViewfinderParameter(QCameraViewfinderSettingsControl* self, int parameter, QVariant* value) {
	self->setViewfinderParameter(static_cast<QCameraViewfinderSettingsControl::ViewfinderParameter>(parameter), *value);
}

struct miqt_string QCameraViewfinderSettingsControl_tr2(const char* s, const char* c) {
	QString _ret = QCameraViewfinderSettingsControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraViewfinderSettingsControl_tr3(const char* s, const char* c, int n) {
	QString _ret = QCameraViewfinderSettingsControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraViewfinderSettingsControl_trUtf82(const char* s, const char* c) {
	QString _ret = QCameraViewfinderSettingsControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraViewfinderSettingsControl_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QCameraViewfinderSettingsControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCameraViewfinderSettingsControl_delete(QCameraViewfinderSettingsControl* self) {
	delete self;
}

void QCameraViewfinderSettingsControl2_virtbase(QCameraViewfinderSettingsControl2* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QCameraViewfinderSettingsControl2_metaObject(const QCameraViewfinderSettingsControl2* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCameraViewfinderSettingsControl2_metacast(QCameraViewfinderSettingsControl2* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCameraViewfinderSettingsControl2_tr(const char* s) {
	QString _ret = QCameraViewfinderSettingsControl2::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraViewfinderSettingsControl2_trUtf8(const char* s) {
	QString _ret = QCameraViewfinderSettingsControl2::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QCameraViewfinderSettings* */  QCameraViewfinderSettingsControl2_supportedViewfinderSettings(const QCameraViewfinderSettingsControl2* self) {
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

QCameraViewfinderSettings* QCameraViewfinderSettingsControl2_viewfinderSettings(const QCameraViewfinderSettingsControl2* self) {
	return new QCameraViewfinderSettings(self->viewfinderSettings());
}

void QCameraViewfinderSettingsControl2_setViewfinderSettings(QCameraViewfinderSettingsControl2* self, QCameraViewfinderSettings* settings) {
	self->setViewfinderSettings(*settings);
}

struct miqt_string QCameraViewfinderSettingsControl2_tr2(const char* s, const char* c) {
	QString _ret = QCameraViewfinderSettingsControl2::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraViewfinderSettingsControl2_tr3(const char* s, const char* c, int n) {
	QString _ret = QCameraViewfinderSettingsControl2::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraViewfinderSettingsControl2_trUtf82(const char* s, const char* c) {
	QString _ret = QCameraViewfinderSettingsControl2::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraViewfinderSettingsControl2_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QCameraViewfinderSettingsControl2::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCameraViewfinderSettingsControl2_delete(QCameraViewfinderSettingsControl2* self) {
	delete self;
}

