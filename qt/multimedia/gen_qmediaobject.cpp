#include <QList>
#include <QMediaObject>
#include <QMediaService>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qmediaobject.h>
#include "gen_qmediaobject.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QMediaObject_NotifyIntervalChanged(intptr_t, int);
void miqt_exec_callback_QMediaObject_MetaDataAvailableChanged(intptr_t, bool);
void miqt_exec_callback_QMediaObject_MetaDataChanged(intptr_t);
void miqt_exec_callback_QMediaObject_MetaDataChanged2(intptr_t, struct miqt_string, QVariant*);
void miqt_exec_callback_QMediaObject_AvailabilityChanged(intptr_t, bool);
void miqt_exec_callback_QMediaObject_AvailabilityChangedWithAvailability(intptr_t, int);
#ifdef __cplusplus
} /* extern C */
#endif

void QMediaObject_virtbase(QMediaObject* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QMediaObject_MetaObject(const QMediaObject* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMediaObject_Metacast(QMediaObject* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMediaObject_Tr(const char* s) {
	QString _ret = QMediaObject::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaObject_TrUtf8(const char* s) {
	QString _ret = QMediaObject::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QMediaObject_IsAvailable(const QMediaObject* self) {
	return self->isAvailable();
}

int QMediaObject_Availability(const QMediaObject* self) {
	QMultimedia::AvailabilityStatus _ret = self->availability();
	return static_cast<int>(_ret);
}

QMediaService* QMediaObject_Service(const QMediaObject* self) {
	return self->service();
}

int QMediaObject_NotifyInterval(const QMediaObject* self) {
	return self->notifyInterval();
}

void QMediaObject_SetNotifyInterval(QMediaObject* self, int milliSeconds) {
	self->setNotifyInterval(static_cast<int>(milliSeconds));
}

bool QMediaObject_Bind(QMediaObject* self, QObject* param1) {
	return self->bind(param1);
}

void QMediaObject_Unbind(QMediaObject* self, QObject* param1) {
	self->unbind(param1);
}

bool QMediaObject_IsMetaDataAvailable(const QMediaObject* self) {
	return self->isMetaDataAvailable();
}

QVariant* QMediaObject_MetaData(const QMediaObject* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QVariant(self->metaData(key_QString));
}

struct miqt_array /* of struct miqt_string */  QMediaObject_AvailableMetaData(const QMediaObject* self) {
	QStringList _ret = self->availableMetaData();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QMediaObject_NotifyIntervalChanged(QMediaObject* self, int milliSeconds) {
	self->notifyIntervalChanged(static_cast<int>(milliSeconds));
}

void QMediaObject_connect_NotifyIntervalChanged(QMediaObject* self, intptr_t slot) {
	QMediaObject::connect(self, static_cast<void (QMediaObject::*)(int)>(&QMediaObject::notifyIntervalChanged), self, [=](int milliSeconds) {
		int sigval1 = milliSeconds;
		miqt_exec_callback_QMediaObject_NotifyIntervalChanged(slot, sigval1);
	});
}

void QMediaObject_MetaDataAvailableChanged(QMediaObject* self, bool available) {
	self->metaDataAvailableChanged(available);
}

void QMediaObject_connect_MetaDataAvailableChanged(QMediaObject* self, intptr_t slot) {
	QMediaObject::connect(self, static_cast<void (QMediaObject::*)(bool)>(&QMediaObject::metaDataAvailableChanged), self, [=](bool available) {
		bool sigval1 = available;
		miqt_exec_callback_QMediaObject_MetaDataAvailableChanged(slot, sigval1);
	});
}

void QMediaObject_MetaDataChanged(QMediaObject* self) {
	self->metaDataChanged();
}

void QMediaObject_connect_MetaDataChanged(QMediaObject* self, intptr_t slot) {
	QMediaObject::connect(self, static_cast<void (QMediaObject::*)()>(&QMediaObject::metaDataChanged), self, [=]() {
		miqt_exec_callback_QMediaObject_MetaDataChanged(slot);
	});
}

void QMediaObject_MetaDataChanged2(QMediaObject* self, struct miqt_string key, QVariant* value) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->metaDataChanged(key_QString, *value);
}

void QMediaObject_connect_MetaDataChanged2(QMediaObject* self, intptr_t slot) {
	QMediaObject::connect(self, static_cast<void (QMediaObject::*)(const QString&, const QVariant&)>(&QMediaObject::metaDataChanged), self, [=](const QString& key, const QVariant& value) {
		const QString key_ret = key;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray key_b = key_ret.toUtf8();
		struct miqt_string key_ms;
		key_ms.len = key_b.length();
		key_ms.data = static_cast<char*>(malloc(key_ms.len));
		memcpy(key_ms.data, key_b.data(), key_ms.len);
		struct miqt_string sigval1 = key_ms;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		miqt_exec_callback_QMediaObject_MetaDataChanged2(slot, sigval1, sigval2);
	});
}

void QMediaObject_AvailabilityChanged(QMediaObject* self, bool available) {
	self->availabilityChanged(available);
}

void QMediaObject_connect_AvailabilityChanged(QMediaObject* self, intptr_t slot) {
	QMediaObject::connect(self, static_cast<void (QMediaObject::*)(bool)>(&QMediaObject::availabilityChanged), self, [=](bool available) {
		bool sigval1 = available;
		miqt_exec_callback_QMediaObject_AvailabilityChanged(slot, sigval1);
	});
}

void QMediaObject_AvailabilityChangedWithAvailability(QMediaObject* self, int availability) {
	self->availabilityChanged(static_cast<QMultimedia::AvailabilityStatus>(availability));
}

void QMediaObject_connect_AvailabilityChangedWithAvailability(QMediaObject* self, intptr_t slot) {
	QMediaObject::connect(self, static_cast<void (QMediaObject::*)(QMultimedia::AvailabilityStatus)>(&QMediaObject::availabilityChanged), self, [=](QMultimedia::AvailabilityStatus availability) {
		QMultimedia::AvailabilityStatus availability_ret = availability;
		int sigval1 = static_cast<int>(availability_ret);
		miqt_exec_callback_QMediaObject_AvailabilityChangedWithAvailability(slot, sigval1);
	});
}

struct miqt_string QMediaObject_Tr2(const char* s, const char* c) {
	QString _ret = QMediaObject::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaObject_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMediaObject::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaObject_TrUtf82(const char* s, const char* c) {
	QString _ret = QMediaObject::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaObject_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QMediaObject::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaObject_Delete(QMediaObject* self) {
	delete self;
}

