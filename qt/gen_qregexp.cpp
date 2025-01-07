#include <QList>
#include <QRegExp>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qregexp.h>
#include "gen_qregexp.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QRegExp* QRegExp_new() {
	return new QRegExp();
}

QRegExp* QRegExp_new2(struct miqt_string pattern) {
	QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
	return new QRegExp(pattern_QString);
}

QRegExp* QRegExp_new3(QRegExp* rx) {
	return new QRegExp(*rx);
}

QRegExp* QRegExp_new4(struct miqt_string pattern, int cs) {
	QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
	return new QRegExp(pattern_QString, static_cast<Qt::CaseSensitivity>(cs));
}

QRegExp* QRegExp_new5(struct miqt_string pattern, int cs, int syntax) {
	QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
	return new QRegExp(pattern_QString, static_cast<Qt::CaseSensitivity>(cs), static_cast<QRegExp::PatternSyntax>(syntax));
}

void QRegExp_OperatorAssign(QRegExp* self, QRegExp* rx) {
	self->operator=(*rx);
}

void QRegExp_Swap(QRegExp* self, QRegExp* other) {
	self->swap(*other);
}

bool QRegExp_OperatorEqual(const QRegExp* self, QRegExp* rx) {
	return (*self == *rx);
}

bool QRegExp_OperatorNotEqual(const QRegExp* self, QRegExp* rx) {
	return (*self != *rx);
}

bool QRegExp_IsEmpty(const QRegExp* self) {
	return self->isEmpty();
}

bool QRegExp_IsValid(const QRegExp* self) {
	return self->isValid();
}

struct miqt_string QRegExp_Pattern(const QRegExp* self) {
	QString _ret = self->pattern();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QRegExp_SetPattern(QRegExp* self, struct miqt_string pattern) {
	QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
	self->setPattern(pattern_QString);
}

int QRegExp_CaseSensitivity(const QRegExp* self) {
	Qt::CaseSensitivity _ret = self->caseSensitivity();
	return static_cast<int>(_ret);
}

void QRegExp_SetCaseSensitivity(QRegExp* self, int cs) {
	self->setCaseSensitivity(static_cast<Qt::CaseSensitivity>(cs));
}

int QRegExp_PatternSyntax(const QRegExp* self) {
	QRegExp::PatternSyntax _ret = self->patternSyntax();
	return static_cast<int>(_ret);
}

void QRegExp_SetPatternSyntax(QRegExp* self, int syntax) {
	self->setPatternSyntax(static_cast<QRegExp::PatternSyntax>(syntax));
}

bool QRegExp_IsMinimal(const QRegExp* self) {
	return self->isMinimal();
}

void QRegExp_SetMinimal(QRegExp* self, bool minimal) {
	self->setMinimal(minimal);
}

bool QRegExp_ExactMatch(const QRegExp* self, struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	return self->exactMatch(str_QString);
}

int QRegExp_IndexIn(const QRegExp* self, struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	return self->indexIn(str_QString);
}

int QRegExp_LastIndexIn(const QRegExp* self, struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	return self->lastIndexIn(str_QString);
}

int QRegExp_MatchedLength(const QRegExp* self) {
	return self->matchedLength();
}

int QRegExp_CaptureCount(const QRegExp* self) {
	return self->captureCount();
}

struct miqt_array /* of struct miqt_string */  QRegExp_CapturedTexts(const QRegExp* self) {
	QStringList _ret = self->capturedTexts();
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

struct miqt_array /* of struct miqt_string */  QRegExp_CapturedTexts2(QRegExp* self) {
	QStringList _ret = self->capturedTexts();
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

struct miqt_string QRegExp_Cap(const QRegExp* self) {
	QString _ret = self->cap();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRegExp_Cap2(QRegExp* self) {
	QString _ret = self->cap();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QRegExp_Pos(const QRegExp* self) {
	return self->pos();
}

int QRegExp_Pos2(QRegExp* self) {
	return self->pos();
}

struct miqt_string QRegExp_ErrorString(const QRegExp* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRegExp_ErrorString2(QRegExp* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRegExp_Escape(struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	QString _ret = QRegExp::escape(str_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QRegExp_IndexIn2(const QRegExp* self, struct miqt_string str, int offset) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	return self->indexIn(str_QString, static_cast<int>(offset));
}

int QRegExp_IndexIn3(const QRegExp* self, struct miqt_string str, int offset, int caretMode) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	return self->indexIn(str_QString, static_cast<int>(offset), static_cast<QRegExp::CaretMode>(caretMode));
}

int QRegExp_LastIndexIn2(const QRegExp* self, struct miqt_string str, int offset) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	return self->lastIndexIn(str_QString, static_cast<int>(offset));
}

int QRegExp_LastIndexIn3(const QRegExp* self, struct miqt_string str, int offset, int caretMode) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	return self->lastIndexIn(str_QString, static_cast<int>(offset), static_cast<QRegExp::CaretMode>(caretMode));
}

struct miqt_string QRegExp_Cap1(const QRegExp* self, int nth) {
	QString _ret = self->cap(static_cast<int>(nth));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRegExp_Cap1WithNth(QRegExp* self, int nth) {
	QString _ret = self->cap(static_cast<int>(nth));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QRegExp_Pos1(const QRegExp* self, int nth) {
	return self->pos(static_cast<int>(nth));
}

int QRegExp_Pos1WithNth(QRegExp* self, int nth) {
	return self->pos(static_cast<int>(nth));
}

void QRegExp_Delete(QRegExp* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QRegExp*>( self );
	} else {
		delete self;
	}
}

