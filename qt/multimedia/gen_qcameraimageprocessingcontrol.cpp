#include <QCameraImageProcessingControl>
#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qcameraimageprocessingcontrol.h>
#include "gen_qcameraimageprocessingcontrol.h"
#include "_cgo_export.h"

QMetaObject* QCameraImageProcessingControl_MetaObject(const QCameraImageProcessingControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCameraImageProcessingControl_Metacast(QCameraImageProcessingControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCameraImageProcessingControl_Tr(const char* s) {
	QString _ret = QCameraImageProcessingControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraImageProcessingControl_TrUtf8(const char* s) {
	QString _ret = QCameraImageProcessingControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCameraImageProcessingControl_IsParameterSupported(const QCameraImageProcessingControl* self, int param1) {
	return self->isParameterSupported(static_cast<QCameraImageProcessingControl::ProcessingParameter>(param1));
}

bool QCameraImageProcessingControl_IsParameterValueSupported(const QCameraImageProcessingControl* self, int parameter, QVariant* value) {
	return self->isParameterValueSupported(static_cast<QCameraImageProcessingControl::ProcessingParameter>(parameter), *value);
}

QVariant* QCameraImageProcessingControl_Parameter(const QCameraImageProcessingControl* self, int parameter) {
	return new QVariant(self->parameter(static_cast<QCameraImageProcessingControl::ProcessingParameter>(parameter)));
}

void QCameraImageProcessingControl_SetParameter(QCameraImageProcessingControl* self, int parameter, QVariant* value) {
	self->setParameter(static_cast<QCameraImageProcessingControl::ProcessingParameter>(parameter), *value);
}

struct miqt_string QCameraImageProcessingControl_Tr2(const char* s, const char* c) {
	QString _ret = QCameraImageProcessingControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraImageProcessingControl_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCameraImageProcessingControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraImageProcessingControl_TrUtf82(const char* s, const char* c) {
	QString _ret = QCameraImageProcessingControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraImageProcessingControl_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QCameraImageProcessingControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCameraImageProcessingControl_Delete(QCameraImageProcessingControl* self) {
	delete self;
}

