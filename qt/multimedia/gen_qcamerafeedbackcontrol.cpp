#include <QCameraFeedbackControl>
#include <QMediaControl>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcamerafeedbackcontrol.h>
#include "gen_qcamerafeedbackcontrol.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QCameraFeedbackControl_virtbase(QCameraFeedbackControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QCameraFeedbackControl_metaObject(const QCameraFeedbackControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCameraFeedbackControl_metacast(QCameraFeedbackControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCameraFeedbackControl_tr(const char* s) {
	QString _ret = QCameraFeedbackControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraFeedbackControl_trUtf8(const char* s) {
	QString _ret = QCameraFeedbackControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCameraFeedbackControl_isEventFeedbackLocked(const QCameraFeedbackControl* self, int param1) {
	return self->isEventFeedbackLocked(static_cast<QCameraFeedbackControl::EventType>(param1));
}

bool QCameraFeedbackControl_isEventFeedbackEnabled(const QCameraFeedbackControl* self, int param1) {
	return self->isEventFeedbackEnabled(static_cast<QCameraFeedbackControl::EventType>(param1));
}

bool QCameraFeedbackControl_setEventFeedbackEnabled(QCameraFeedbackControl* self, int param1, bool param2) {
	return self->setEventFeedbackEnabled(static_cast<QCameraFeedbackControl::EventType>(param1), param2);
}

void QCameraFeedbackControl_resetEventFeedback(QCameraFeedbackControl* self, int param1) {
	self->resetEventFeedback(static_cast<QCameraFeedbackControl::EventType>(param1));
}

bool QCameraFeedbackControl_setEventFeedbackSound(QCameraFeedbackControl* self, int param1, struct miqt_string filePath) {
	QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
	return self->setEventFeedbackSound(static_cast<QCameraFeedbackControl::EventType>(param1), filePath_QString);
}

struct miqt_string QCameraFeedbackControl_tr2(const char* s, const char* c) {
	QString _ret = QCameraFeedbackControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraFeedbackControl_tr3(const char* s, const char* c, int n) {
	QString _ret = QCameraFeedbackControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraFeedbackControl_trUtf82(const char* s, const char* c) {
	QString _ret = QCameraFeedbackControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraFeedbackControl_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QCameraFeedbackControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCameraFeedbackControl_delete(QCameraFeedbackControl* self) {
	delete self;
}

