#include <QList>
#include <QRegExp>
#include <QRegularExpression>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStringList>
#include <qstringlist.h>
#include "gen_qstringlist.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QStringList* QStringList_new() {
	return new QStringList();
}

QStringList* QStringList_new2(struct miqt_string i) {
	QString i_QString = QString::fromUtf8(i.data, i.len);
	return new QStringList(i_QString);
}

QStringList* QStringList_new3(struct miqt_array /* of struct miqt_string */  l) {
	QList<QString> l_QList;
	l_QList.reserve(l.len);
	struct miqt_string* l_arr = static_cast<struct miqt_string*>(l.data);
	for(size_t i = 0; i < l.len; ++i) {
		QString l_arr_i_QString = QString::fromUtf8(l_arr[i].data, l_arr[i].len);
		l_QList.push_back(l_arr_i_QString);
	}
	return new QStringList(l_QList);
}

void QStringList_operatorAssign(QStringList* self, struct miqt_array /* of struct miqt_string */  other) {
	QList<QString> other_QList;
	other_QList.reserve(other.len);
	struct miqt_string* other_arr = static_cast<struct miqt_string*>(other.data);
	for(size_t i = 0; i < other.len; ++i) {
		QString other_arr_i_QString = QString::fromUtf8(other_arr[i].data, other_arr[i].len);
		other_QList.push_back(other_arr_i_QString);
	}
	self->operator=(other_QList);
}

bool QStringList_contains(const QStringList* self, struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	return self->contains(str_QString);
}

struct miqt_array /* of struct miqt_string */  QStringList_operatorPlus(const QStringList* self, struct miqt_array /* of struct miqt_string */  other) {
	QStringList other_QList;
	other_QList.reserve(other.len);
	struct miqt_string* other_arr = static_cast<struct miqt_string*>(other.data);
	for(size_t i = 0; i < other.len; ++i) {
		QString other_arr_i_QString = QString::fromUtf8(other_arr[i].data, other_arr[i].len);
		other_QList.push_back(other_arr_i_QString);
	}
	QStringList _ret = self->operator+(other_QList);
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

struct miqt_array /* of struct miqt_string */  QStringList_operatorShiftLeft(QStringList* self, struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	QStringList& _ret = self->operator<<(str_QString);
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

struct miqt_array /* of struct miqt_string */  QStringList_operatorShiftLeftWithQStringList(QStringList* self, struct miqt_array /* of struct miqt_string */  l) {
	QStringList l_QList;
	l_QList.reserve(l.len);
	struct miqt_string* l_arr = static_cast<struct miqt_string*>(l.data);
	for(size_t i = 0; i < l.len; ++i) {
		QString l_arr_i_QString = QString::fromUtf8(l_arr[i].data, l_arr[i].len);
		l_QList.push_back(l_arr_i_QString);
	}
	QStringList& _ret = self->operator<<(l_QList);
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

struct miqt_array /* of struct miqt_string */  QStringList_operatorShiftLeftWithQListLesserQStringGreater(QStringList* self, struct miqt_array /* of struct miqt_string */  l) {
	QList<QString> l_QList;
	l_QList.reserve(l.len);
	struct miqt_string* l_arr = static_cast<struct miqt_string*>(l.data);
	for(size_t i = 0; i < l.len; ++i) {
		QString l_arr_i_QString = QString::fromUtf8(l_arr[i].data, l_arr[i].len);
		l_QList.push_back(l_arr_i_QString);
	}
	QStringList& _ret = self->operator<<(l_QList);
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

int QStringList_indexOfWithRx(const QStringList* self, QRegExp* rx) {
	return self->indexOf(*rx);
}

int QStringList_lastIndexOfWithRx(const QStringList* self, QRegExp* rx) {
	return self->lastIndexOf(*rx);
}

int QStringList_indexOf2(const QStringList* self, QRegExp* rx) {
	return self->indexOf(*rx);
}

int QStringList_lastIndexOf2(const QStringList* self, QRegExp* rx) {
	return self->lastIndexOf(*rx);
}

int QStringList_indexOfWithRe(const QStringList* self, QRegularExpression* re) {
	return self->indexOf(*re);
}

int QStringList_lastIndexOfWithRe(const QStringList* self, QRegularExpression* re) {
	return self->lastIndexOf(*re);
}

void QStringList_operatorAssignWithQStringList(QStringList* self, struct miqt_array /* of struct miqt_string */  param1) {
	QStringList param1_QList;
	param1_QList.reserve(param1.len);
	struct miqt_string* param1_arr = static_cast<struct miqt_string*>(param1.data);
	for(size_t i = 0; i < param1.len; ++i) {
		QString param1_arr_i_QString = QString::fromUtf8(param1_arr[i].data, param1_arr[i].len);
		param1_QList.push_back(param1_arr_i_QString);
	}
	self->operator=(param1_QList);
}

bool QStringList_contains3(const QStringList* self, struct miqt_string str, int cs) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	return self->contains(str_QString, static_cast<Qt::CaseSensitivity>(cs));
}

int QStringList_indexOf5(const QStringList* self, QRegExp* rx, int from) {
	return self->indexOf(*rx, static_cast<int>(from));
}

int QStringList_lastIndexOf5(const QStringList* self, QRegExp* rx, int from) {
	return self->lastIndexOf(*rx, static_cast<int>(from));
}

int QStringList_indexOf6(const QStringList* self, QRegExp* rx, int from) {
	return self->indexOf(*rx, static_cast<int>(from));
}

int QStringList_lastIndexOf6(const QStringList* self, QRegExp* rx, int from) {
	return self->lastIndexOf(*rx, static_cast<int>(from));
}

int QStringList_indexOf7(const QStringList* self, QRegularExpression* re, int from) {
	return self->indexOf(*re, static_cast<int>(from));
}

int QStringList_lastIndexOf7(const QStringList* self, QRegularExpression* re, int from) {
	return self->lastIndexOf(*re, static_cast<int>(from));
}

void QStringList_delete(QStringList* self) {
	delete self;
}

