#include <QList>
#include <QMediaControl>
#include <QMetaDataWriterControl>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qmetadatawritercontrol.h>
#include "gen_qmetadatawritercontrol.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QMetaDataWriterControl_metaDataChanged(intptr_t);
void miqt_exec_callback_QMetaDataWriterControl_metaDataChanged2(intptr_t, struct miqt_string, QVariant*);
void miqt_exec_callback_QMetaDataWriterControl_writableChanged(intptr_t, bool);
void miqt_exec_callback_QMetaDataWriterControl_metaDataAvailableChanged(intptr_t, bool);
#ifdef __cplusplus
} /* extern C */
#endif

void QMetaDataWriterControl_virtbase(QMetaDataWriterControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QMetaDataWriterControl_metaObject(const QMetaDataWriterControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMetaDataWriterControl_metacast(QMetaDataWriterControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMetaDataWriterControl_tr(const char* s) {
	QString _ret = QMetaDataWriterControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMetaDataWriterControl_trUtf8(const char* s) {
	QString _ret = QMetaDataWriterControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QMetaDataWriterControl_isWritable(const QMetaDataWriterControl* self) {
	return self->isWritable();
}

bool QMetaDataWriterControl_isMetaDataAvailable(const QMetaDataWriterControl* self) {
	return self->isMetaDataAvailable();
}

QVariant* QMetaDataWriterControl_metaData(const QMetaDataWriterControl* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QVariant(self->metaData(key_QString));
}

void QMetaDataWriterControl_setMetaData(QMetaDataWriterControl* self, struct miqt_string key, QVariant* value) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->setMetaData(key_QString, *value);
}

struct miqt_array /* of struct miqt_string */  QMetaDataWriterControl_availableMetaData(const QMetaDataWriterControl* self) {
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

void QMetaDataWriterControl_metaDataChanged(QMetaDataWriterControl* self) {
	self->metaDataChanged();
}

void QMetaDataWriterControl_connect_metaDataChanged(QMetaDataWriterControl* self, intptr_t slot) {
	QMetaDataWriterControl::connect(self, static_cast<void (QMetaDataWriterControl::*)()>(&QMetaDataWriterControl::metaDataChanged), self, [=]() {
		miqt_exec_callback_QMetaDataWriterControl_metaDataChanged(slot);
	});
}

void QMetaDataWriterControl_metaDataChanged2(QMetaDataWriterControl* self, struct miqt_string key, QVariant* value) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->metaDataChanged(key_QString, *value);
}

void QMetaDataWriterControl_connect_metaDataChanged2(QMetaDataWriterControl* self, intptr_t slot) {
	QMetaDataWriterControl::connect(self, static_cast<void (QMetaDataWriterControl::*)(const QString&, const QVariant&)>(&QMetaDataWriterControl::metaDataChanged), self, [=](const QString& key, const QVariant& value) {
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
		miqt_exec_callback_QMetaDataWriterControl_metaDataChanged2(slot, sigval1, sigval2);
	});
}

void QMetaDataWriterControl_writableChanged(QMetaDataWriterControl* self, bool writable) {
	self->writableChanged(writable);
}

void QMetaDataWriterControl_connect_writableChanged(QMetaDataWriterControl* self, intptr_t slot) {
	QMetaDataWriterControl::connect(self, static_cast<void (QMetaDataWriterControl::*)(bool)>(&QMetaDataWriterControl::writableChanged), self, [=](bool writable) {
		bool sigval1 = writable;
		miqt_exec_callback_QMetaDataWriterControl_writableChanged(slot, sigval1);
	});
}

void QMetaDataWriterControl_metaDataAvailableChanged(QMetaDataWriterControl* self, bool available) {
	self->metaDataAvailableChanged(available);
}

void QMetaDataWriterControl_connect_metaDataAvailableChanged(QMetaDataWriterControl* self, intptr_t slot) {
	QMetaDataWriterControl::connect(self, static_cast<void (QMetaDataWriterControl::*)(bool)>(&QMetaDataWriterControl::metaDataAvailableChanged), self, [=](bool available) {
		bool sigval1 = available;
		miqt_exec_callback_QMetaDataWriterControl_metaDataAvailableChanged(slot, sigval1);
	});
}

struct miqt_string QMetaDataWriterControl_tr2(const char* s, const char* c) {
	QString _ret = QMetaDataWriterControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMetaDataWriterControl_tr3(const char* s, const char* c, int n) {
	QString _ret = QMetaDataWriterControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMetaDataWriterControl_trUtf82(const char* s, const char* c) {
	QString _ret = QMetaDataWriterControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMetaDataWriterControl_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QMetaDataWriterControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMetaDataWriterControl_delete(QMetaDataWriterControl* self) {
	delete self;
}

