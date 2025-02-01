#include <QKeyCombination>
#include <QKeySequence>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qkeysequence.h>
#include "gen_qkeysequence.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QKeySequence* QKeySequence_new() {
	return new QKeySequence();
}

QKeySequence* QKeySequence_new2(struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QKeySequence(key_QString);
}

QKeySequence* QKeySequence_new3(int k1) {
	return new QKeySequence(static_cast<int>(k1));
}

QKeySequence* QKeySequence_new4(QKeyCombination* k1) {
	return new QKeySequence(*k1);
}

QKeySequence* QKeySequence_new5(QKeySequence* ks) {
	return new QKeySequence(*ks);
}

QKeySequence* QKeySequence_new6(int key) {
	return new QKeySequence(static_cast<QKeySequence::StandardKey>(key));
}

QKeySequence* QKeySequence_new7(struct miqt_string key, int format) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QKeySequence(key_QString, static_cast<QKeySequence::SequenceFormat>(format));
}

QKeySequence* QKeySequence_new8(int k1, int k2) {
	return new QKeySequence(static_cast<int>(k1), static_cast<int>(k2));
}

QKeySequence* QKeySequence_new9(int k1, int k2, int k3) {
	return new QKeySequence(static_cast<int>(k1), static_cast<int>(k2), static_cast<int>(k3));
}

QKeySequence* QKeySequence_new10(int k1, int k2, int k3, int k4) {
	return new QKeySequence(static_cast<int>(k1), static_cast<int>(k2), static_cast<int>(k3), static_cast<int>(k4));
}

QKeySequence* QKeySequence_new11(QKeyCombination* k1, QKeyCombination* k2) {
	return new QKeySequence(*k1, *k2);
}

QKeySequence* QKeySequence_new12(QKeyCombination* k1, QKeyCombination* k2, QKeyCombination* k3) {
	return new QKeySequence(*k1, *k2, *k3);
}

QKeySequence* QKeySequence_new13(QKeyCombination* k1, QKeyCombination* k2, QKeyCombination* k3, QKeyCombination* k4) {
	return new QKeySequence(*k1, *k2, *k3, *k4);
}

int QKeySequence_count(const QKeySequence* self) {
	return self->count();
}

bool QKeySequence_isEmpty(const QKeySequence* self) {
	return self->isEmpty();
}

struct miqt_string QKeySequence_toString(const QKeySequence* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QKeySequence* QKeySequence_fromString(struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	return new QKeySequence(QKeySequence::fromString(str_QString));
}

struct miqt_array /* of QKeySequence* */  QKeySequence_listFromString(struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	QList<QKeySequence> _ret = QKeySequence::listFromString(str_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	QKeySequence** _arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QKeySequence(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QKeySequence_listToString(struct miqt_array /* of QKeySequence* */  list) {
	QList<QKeySequence> list_QList;
	list_QList.reserve(list.len);
	QKeySequence** list_arr = static_cast<QKeySequence**>(list.data);
	for(size_t i = 0; i < list.len; ++i) {
		list_QList.push_back(*(list_arr[i]));
	}
	QString _ret = QKeySequence::listToString(list_QList);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QKeySequence_matches(const QKeySequence* self, QKeySequence* seq) {
	QKeySequence::SequenceMatch _ret = self->matches(*seq);
	return static_cast<int>(_ret);
}

QKeySequence* QKeySequence_mnemonic(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QKeySequence(QKeySequence::mnemonic(text_QString));
}

struct miqt_array /* of QKeySequence* */  QKeySequence_keyBindings(int key) {
	QList<QKeySequence> _ret = QKeySequence::keyBindings(static_cast<QKeySequence::StandardKey>(key));
	// Convert QList<> from C++ memory to manually-managed C memory
	QKeySequence** _arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QKeySequence(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QVariant* QKeySequence_ToQVariant(const QKeySequence* self) {
	return new QVariant(self->operator QVariant());
}

QKeyCombination* QKeySequence_operatorSubscript(const QKeySequence* self, unsigned int i) {
	return new QKeyCombination(self->operator[](static_cast<uint>(i)));
}

void QKeySequence_operatorAssign(QKeySequence* self, QKeySequence* other) {
	self->operator=(*other);
}

void QKeySequence_swap(QKeySequence* self, QKeySequence* other) {
	self->swap(*other);
}

bool QKeySequence_operatorEqual(const QKeySequence* self, QKeySequence* other) {
	return (*self == *other);
}

bool QKeySequence_operatorNotEqual(const QKeySequence* self, QKeySequence* other) {
	return (*self != *other);
}

bool QKeySequence_operatorLesser(const QKeySequence* self, QKeySequence* ks) {
	return (*self < *ks);
}

bool QKeySequence_operatorGreater(const QKeySequence* self, QKeySequence* other) {
	return (*self > *other);
}

bool QKeySequence_operatorLesserOrEqual(const QKeySequence* self, QKeySequence* other) {
	return (*self <= *other);
}

bool QKeySequence_operatorGreaterOrEqual(const QKeySequence* self, QKeySequence* other) {
	return (*self >= *other);
}

bool QKeySequence_isDetached(const QKeySequence* self) {
	return self->isDetached();
}

struct miqt_string QKeySequence_toString1(const QKeySequence* self, int format) {
	QString _ret = self->toString(static_cast<QKeySequence::SequenceFormat>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QKeySequence* QKeySequence_fromString2(struct miqt_string str, int format) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	return new QKeySequence(QKeySequence::fromString(str_QString, static_cast<QKeySequence::SequenceFormat>(format)));
}

struct miqt_array /* of QKeySequence* */  QKeySequence_listFromString2(struct miqt_string str, int format) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	QList<QKeySequence> _ret = QKeySequence::listFromString(str_QString, static_cast<QKeySequence::SequenceFormat>(format));
	// Convert QList<> from C++ memory to manually-managed C memory
	QKeySequence** _arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QKeySequence(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QKeySequence_listToString2(struct miqt_array /* of QKeySequence* */  list, int format) {
	QList<QKeySequence> list_QList;
	list_QList.reserve(list.len);
	QKeySequence** list_arr = static_cast<QKeySequence**>(list.data);
	for(size_t i = 0; i < list.len; ++i) {
		list_QList.push_back(*(list_arr[i]));
	}
	QString _ret = QKeySequence::listToString(list_QList, static_cast<QKeySequence::SequenceFormat>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QKeySequence_delete(QKeySequence* self) {
	delete self;
}

