#include <QCameraExposureControl>
#include <QMediaControl>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qcameraexposurecontrol.h>
#include "gen_qcameraexposurecontrol.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QCameraExposureControl_requestedValueChanged(intptr_t, int);
void miqt_exec_callback_QCameraExposureControl_actualValueChanged(intptr_t, int);
void miqt_exec_callback_QCameraExposureControl_parameterRangeChanged(intptr_t, int);
#ifdef __cplusplus
} /* extern C */
#endif

void QCameraExposureControl_virtbase(QCameraExposureControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QCameraExposureControl_metaObject(const QCameraExposureControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCameraExposureControl_metacast(QCameraExposureControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCameraExposureControl_tr(const char* s) {
	QString _ret = QCameraExposureControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraExposureControl_trUtf8(const char* s) {
	QString _ret = QCameraExposureControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCameraExposureControl_isParameterSupported(const QCameraExposureControl* self, int parameter) {
	return self->isParameterSupported(static_cast<QCameraExposureControl::ExposureParameter>(parameter));
}

QVariant* QCameraExposureControl_requestedValue(const QCameraExposureControl* self, int parameter) {
	return new QVariant(self->requestedValue(static_cast<QCameraExposureControl::ExposureParameter>(parameter)));
}

QVariant* QCameraExposureControl_actualValue(const QCameraExposureControl* self, int parameter) {
	return new QVariant(self->actualValue(static_cast<QCameraExposureControl::ExposureParameter>(parameter)));
}

bool QCameraExposureControl_setValue(QCameraExposureControl* self, int parameter, QVariant* value) {
	return self->setValue(static_cast<QCameraExposureControl::ExposureParameter>(parameter), *value);
}

void QCameraExposureControl_requestedValueChanged(QCameraExposureControl* self, int parameter) {
	self->requestedValueChanged(static_cast<int>(parameter));
}

void QCameraExposureControl_connect_requestedValueChanged(QCameraExposureControl* self, intptr_t slot) {
	QCameraExposureControl::connect(self, static_cast<void (QCameraExposureControl::*)(int)>(&QCameraExposureControl::requestedValueChanged), self, [=](int parameter) {
		int sigval1 = parameter;
		miqt_exec_callback_QCameraExposureControl_requestedValueChanged(slot, sigval1);
	});
}

void QCameraExposureControl_actualValueChanged(QCameraExposureControl* self, int parameter) {
	self->actualValueChanged(static_cast<int>(parameter));
}

void QCameraExposureControl_connect_actualValueChanged(QCameraExposureControl* self, intptr_t slot) {
	QCameraExposureControl::connect(self, static_cast<void (QCameraExposureControl::*)(int)>(&QCameraExposureControl::actualValueChanged), self, [=](int parameter) {
		int sigval1 = parameter;
		miqt_exec_callback_QCameraExposureControl_actualValueChanged(slot, sigval1);
	});
}

void QCameraExposureControl_parameterRangeChanged(QCameraExposureControl* self, int parameter) {
	self->parameterRangeChanged(static_cast<int>(parameter));
}

void QCameraExposureControl_connect_parameterRangeChanged(QCameraExposureControl* self, intptr_t slot) {
	QCameraExposureControl::connect(self, static_cast<void (QCameraExposureControl::*)(int)>(&QCameraExposureControl::parameterRangeChanged), self, [=](int parameter) {
		int sigval1 = parameter;
		miqt_exec_callback_QCameraExposureControl_parameterRangeChanged(slot, sigval1);
	});
}

struct miqt_string QCameraExposureControl_tr2(const char* s, const char* c) {
	QString _ret = QCameraExposureControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraExposureControl_tr3(const char* s, const char* c, int n) {
	QString _ret = QCameraExposureControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraExposureControl_trUtf82(const char* s, const char* c) {
	QString _ret = QCameraExposureControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraExposureControl_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QCameraExposureControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCameraExposureControl_delete(QCameraExposureControl* self) {
	delete self;
}

