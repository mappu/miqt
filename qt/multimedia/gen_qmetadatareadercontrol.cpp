#include <QList>
#include <QMediaControl>
#include <QMetaDataReaderControl>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qmetadatareadercontrol.h>
#include "gen_qmetadatareadercontrol.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QMetaDataReaderControl_metaDataChanged(intptr_t);
void miqt_exec_callback_QMetaDataReaderControl_metaDataChanged2(intptr_t, struct miqt_string, QVariant*);
void miqt_exec_callback_QMetaDataReaderControl_metaDataAvailableChanged(intptr_t, bool);
#ifdef __cplusplus
} /* extern C */
#endif

void QMetaDataReaderControl_virtbase(QMetaDataReaderControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QMetaDataReaderControl_metaObject(const QMetaDataReaderControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMetaDataReaderControl_metacast(QMetaDataReaderControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMetaDataReaderControl_tr(const char* s) {
	QString _ret = QMetaDataReaderControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMetaDataReaderControl_trUtf8(const char* s) {
	QString _ret = QMetaDataReaderControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QMetaDataReaderControl_isMetaDataAvailable(const QMetaDataReaderControl* self) {
	return self->isMetaDataAvailable();
}

QVariant* QMetaDataReaderControl_metaData(const QMetaDataReaderControl* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QVariant(self->metaData(key_QString));
}

struct miqt_array /* of struct miqt_string */  QMetaDataReaderControl_availableMetaData(const QMetaDataReaderControl* self) {
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

void QMetaDataReaderControl_metaDataChanged(QMetaDataReaderControl* self) {
	self->metaDataChanged();
}

void QMetaDataReaderControl_connect_metaDataChanged(QMetaDataReaderControl* self, intptr_t slot) {
	QMetaDataReaderControl::connect(self, static_cast<void (QMetaDataReaderControl::*)()>(&QMetaDataReaderControl::metaDataChanged), self, [=]() {
		miqt_exec_callback_QMetaDataReaderControl_metaDataChanged(slot);
	});
}

void QMetaDataReaderControl_metaDataChanged2(QMetaDataReaderControl* self, struct miqt_string key, QVariant* value) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->metaDataChanged(key_QString, *value);
}

void QMetaDataReaderControl_connect_metaDataChanged2(QMetaDataReaderControl* self, intptr_t slot) {
	QMetaDataReaderControl::connect(self, static_cast<void (QMetaDataReaderControl::*)(const QString&, const QVariant&)>(&QMetaDataReaderControl::metaDataChanged), self, [=](const QString& key, const QVariant& value) {
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
		miqt_exec_callback_QMetaDataReaderControl_metaDataChanged2(slot, sigval1, sigval2);
	});
}

void QMetaDataReaderControl_metaDataAvailableChanged(QMetaDataReaderControl* self, bool available) {
	self->metaDataAvailableChanged(available);
}

void QMetaDataReaderControl_connect_metaDataAvailableChanged(QMetaDataReaderControl* self, intptr_t slot) {
	QMetaDataReaderControl::connect(self, static_cast<void (QMetaDataReaderControl::*)(bool)>(&QMetaDataReaderControl::metaDataAvailableChanged), self, [=](bool available) {
		bool sigval1 = available;
		miqt_exec_callback_QMetaDataReaderControl_metaDataAvailableChanged(slot, sigval1);
	});
}

struct miqt_string QMetaDataReaderControl_tr2(const char* s, const char* c) {
	QString _ret = QMetaDataReaderControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMetaDataReaderControl_tr3(const char* s, const char* c, int n) {
	QString _ret = QMetaDataReaderControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMetaDataReaderControl_trUtf82(const char* s, const char* c) {
	QString _ret = QMetaDataReaderControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMetaDataReaderControl_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QMetaDataReaderControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMetaDataReaderControl_delete(QMetaDataReaderControl* self) {
	delete self;
}

