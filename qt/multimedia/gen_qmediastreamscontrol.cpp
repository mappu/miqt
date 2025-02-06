#include <QMediaControl>
#include <QMediaStreamsControl>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qmediastreamscontrol.h>
#include "gen_qmediastreamscontrol.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QMediaStreamsControl_streamsChanged(intptr_t);
void miqt_exec_callback_QMediaStreamsControl_activeStreamsChanged(intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

void QMediaStreamsControl_virtbase(QMediaStreamsControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QMediaStreamsControl_metaObject(const QMediaStreamsControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMediaStreamsControl_metacast(QMediaStreamsControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMediaStreamsControl_tr(const char* s) {
	QString _ret = QMediaStreamsControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaStreamsControl_trUtf8(const char* s) {
	QString _ret = QMediaStreamsControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QMediaStreamsControl_streamCount(QMediaStreamsControl* self) {
	return self->streamCount();
}

int QMediaStreamsControl_streamType(QMediaStreamsControl* self, int streamNumber) {
	QMediaStreamsControl::StreamType _ret = self->streamType(static_cast<int>(streamNumber));
	return static_cast<int>(_ret);
}

QVariant* QMediaStreamsControl_metaData(QMediaStreamsControl* self, int streamNumber, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QVariant(self->metaData(static_cast<int>(streamNumber), key_QString));
}

bool QMediaStreamsControl_isActive(QMediaStreamsControl* self, int streamNumber) {
	return self->isActive(static_cast<int>(streamNumber));
}

void QMediaStreamsControl_setActive(QMediaStreamsControl* self, int streamNumber, bool state) {
	self->setActive(static_cast<int>(streamNumber), state);
}

void QMediaStreamsControl_streamsChanged(QMediaStreamsControl* self) {
	self->streamsChanged();
}

void QMediaStreamsControl_connect_streamsChanged(QMediaStreamsControl* self, intptr_t slot) {
	QMediaStreamsControl::connect(self, static_cast<void (QMediaStreamsControl::*)()>(&QMediaStreamsControl::streamsChanged), self, [=]() {
		miqt_exec_callback_QMediaStreamsControl_streamsChanged(slot);
	});
}

void QMediaStreamsControl_activeStreamsChanged(QMediaStreamsControl* self) {
	self->activeStreamsChanged();
}

void QMediaStreamsControl_connect_activeStreamsChanged(QMediaStreamsControl* self, intptr_t slot) {
	QMediaStreamsControl::connect(self, static_cast<void (QMediaStreamsControl::*)()>(&QMediaStreamsControl::activeStreamsChanged), self, [=]() {
		miqt_exec_callback_QMediaStreamsControl_activeStreamsChanged(slot);
	});
}

struct miqt_string QMediaStreamsControl_tr2(const char* s, const char* c) {
	QString _ret = QMediaStreamsControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaStreamsControl_tr3(const char* s, const char* c, int n) {
	QString _ret = QMediaStreamsControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaStreamsControl_trUtf82(const char* s, const char* c) {
	QString _ret = QMediaStreamsControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaStreamsControl_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QMediaStreamsControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaStreamsControl_delete(QMediaStreamsControl* self) {
	delete self;
}

