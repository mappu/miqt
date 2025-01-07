#include <QCameraExposureControl>
#include <QMediaControl>
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

void miqt_exec_callback_QCameraExposureControl_RequestedValueChanged(intptr_t, int);
void miqt_exec_callback_QCameraExposureControl_ActualValueChanged(intptr_t, int);
void miqt_exec_callback_QCameraExposureControl_ParameterRangeChanged(intptr_t, int);
#ifdef __cplusplus
} /* extern C */
#endif

void QCameraExposureControl_virtbase(QCameraExposureControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QCameraExposureControl_MetaObject(const QCameraExposureControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCameraExposureControl_Metacast(QCameraExposureControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCameraExposureControl_Tr(const char* s) {
	QString _ret = QCameraExposureControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraExposureControl_TrUtf8(const char* s) {
	QString _ret = QCameraExposureControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCameraExposureControl_IsParameterSupported(const QCameraExposureControl* self, int parameter) {
	return self->isParameterSupported(static_cast<QCameraExposureControl::ExposureParameter>(parameter));
}

QVariant* QCameraExposureControl_RequestedValue(const QCameraExposureControl* self, int parameter) {
	return new QVariant(self->requestedValue(static_cast<QCameraExposureControl::ExposureParameter>(parameter)));
}

QVariant* QCameraExposureControl_ActualValue(const QCameraExposureControl* self, int parameter) {
	return new QVariant(self->actualValue(static_cast<QCameraExposureControl::ExposureParameter>(parameter)));
}

bool QCameraExposureControl_SetValue(QCameraExposureControl* self, int parameter, QVariant* value) {
	return self->setValue(static_cast<QCameraExposureControl::ExposureParameter>(parameter), *value);
}

void QCameraExposureControl_RequestedValueChanged(QCameraExposureControl* self, int parameter) {
	self->requestedValueChanged(static_cast<int>(parameter));
}

void QCameraExposureControl_connect_RequestedValueChanged(QCameraExposureControl* self, intptr_t slot) {
	QCameraExposureControl::connect(self, static_cast<void (QCameraExposureControl::*)(int)>(&QCameraExposureControl::requestedValueChanged), self, [=](int parameter) {
		int sigval1 = parameter;
		miqt_exec_callback_QCameraExposureControl_RequestedValueChanged(slot, sigval1);
	});
}

void QCameraExposureControl_ActualValueChanged(QCameraExposureControl* self, int parameter) {
	self->actualValueChanged(static_cast<int>(parameter));
}

void QCameraExposureControl_connect_ActualValueChanged(QCameraExposureControl* self, intptr_t slot) {
	QCameraExposureControl::connect(self, static_cast<void (QCameraExposureControl::*)(int)>(&QCameraExposureControl::actualValueChanged), self, [=](int parameter) {
		int sigval1 = parameter;
		miqt_exec_callback_QCameraExposureControl_ActualValueChanged(slot, sigval1);
	});
}

void QCameraExposureControl_ParameterRangeChanged(QCameraExposureControl* self, int parameter) {
	self->parameterRangeChanged(static_cast<int>(parameter));
}

void QCameraExposureControl_connect_ParameterRangeChanged(QCameraExposureControl* self, intptr_t slot) {
	QCameraExposureControl::connect(self, static_cast<void (QCameraExposureControl::*)(int)>(&QCameraExposureControl::parameterRangeChanged), self, [=](int parameter) {
		int sigval1 = parameter;
		miqt_exec_callback_QCameraExposureControl_ParameterRangeChanged(slot, sigval1);
	});
}

struct miqt_string QCameraExposureControl_Tr2(const char* s, const char* c) {
	QString _ret = QCameraExposureControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraExposureControl_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCameraExposureControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraExposureControl_TrUtf82(const char* s, const char* c) {
	QString _ret = QCameraExposureControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraExposureControl_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QCameraExposureControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCameraExposureControl_Delete(QCameraExposureControl* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QCameraExposureControl*>( self );
	} else {
		delete self;
	}
}

