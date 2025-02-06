#include <QCameraImageProcessingControl>
#include <QMediaControl>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qcameraimageprocessingcontrol.h>
#include "gen_qcameraimageprocessingcontrol.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QCameraImageProcessingControl_virtbase(QCameraImageProcessingControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QCameraImageProcessingControl_metaObject(const QCameraImageProcessingControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCameraImageProcessingControl_metacast(QCameraImageProcessingControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCameraImageProcessingControl_tr(const char* s) {
	QString _ret = QCameraImageProcessingControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraImageProcessingControl_trUtf8(const char* s) {
	QString _ret = QCameraImageProcessingControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCameraImageProcessingControl_isParameterSupported(const QCameraImageProcessingControl* self, int param1) {
	return self->isParameterSupported(static_cast<QCameraImageProcessingControl::ProcessingParameter>(param1));
}

bool QCameraImageProcessingControl_isParameterValueSupported(const QCameraImageProcessingControl* self, int parameter, QVariant* value) {
	return self->isParameterValueSupported(static_cast<QCameraImageProcessingControl::ProcessingParameter>(parameter), *value);
}

QVariant* QCameraImageProcessingControl_parameter(const QCameraImageProcessingControl* self, int parameter) {
	return new QVariant(self->parameter(static_cast<QCameraImageProcessingControl::ProcessingParameter>(parameter)));
}

void QCameraImageProcessingControl_setParameter(QCameraImageProcessingControl* self, int parameter, QVariant* value) {
	self->setParameter(static_cast<QCameraImageProcessingControl::ProcessingParameter>(parameter), *value);
}

struct miqt_string QCameraImageProcessingControl_tr2(const char* s, const char* c) {
	QString _ret = QCameraImageProcessingControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraImageProcessingControl_tr3(const char* s, const char* c, int n) {
	QString _ret = QCameraImageProcessingControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraImageProcessingControl_trUtf82(const char* s, const char* c) {
	QString _ret = QCameraImageProcessingControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraImageProcessingControl_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QCameraImageProcessingControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCameraImageProcessingControl_delete(QCameraImageProcessingControl* self) {
	delete self;
}

