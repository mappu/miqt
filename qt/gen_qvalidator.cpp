#include <QDoubleValidator>
#include <QIntValidator>
#include <QLocale>
#include <QMetaObject>
#include <QObject>
#include <QRegExp>
#include <QRegExpValidator>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QValidator>
#include "qvalidator.h"
#include "gen_qvalidator.h"
#include "_cgo_export.h"

QMetaObject* QValidator_MetaObject(const QValidator* self) {
	return (QMetaObject*) self->metaObject();
}

void* QValidator_Metacast(QValidator* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QValidator_Tr(const char* s) {
	QString _ret = QValidator::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QValidator_TrUtf8(const char* s) {
	QString _ret = QValidator::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QValidator_SetLocale(QValidator* self, QLocale* locale) {
	self->setLocale(*locale);
}

QLocale* QValidator_Locale(const QValidator* self) {
	return new QLocale(self->locale());
}

int QValidator_Validate(const QValidator* self, struct miqt_string* param1, int* param2) {
	QString param1_QString = QString::fromUtf8(&param1->data, param1->len);
	QValidator::State _ret = self->validate(param1_QString, static_cast<int&>(*param2));
	return static_cast<int>(_ret);
}

void QValidator_Fixup(const QValidator* self, struct miqt_string* param1) {
	QString param1_QString = QString::fromUtf8(&param1->data, param1->len);
	self->fixup(param1_QString);
}

void QValidator_Changed(QValidator* self) {
	self->changed();
}

void QValidator_connect_Changed(QValidator* self, intptr_t slot) {
	QValidator::connect(self, static_cast<void (QValidator::*)()>(&QValidator::changed), self, [=]() {
		miqt_exec_callback_QValidator_Changed(slot);
	});
}

struct miqt_string* QValidator_Tr2(const char* s, const char* c) {
	QString _ret = QValidator::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QValidator_Tr3(const char* s, const char* c, int n) {
	QString _ret = QValidator::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QValidator_TrUtf82(const char* s, const char* c) {
	QString _ret = QValidator::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QValidator_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QValidator::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QValidator_Delete(QValidator* self) {
	delete self;
}

QIntValidator* QIntValidator_new() {
	return new QIntValidator();
}

QIntValidator* QIntValidator_new2(int bottom, int top) {
	return new QIntValidator(static_cast<int>(bottom), static_cast<int>(top));
}

QIntValidator* QIntValidator_new3(QObject* parent) {
	return new QIntValidator(parent);
}

QIntValidator* QIntValidator_new4(int bottom, int top, QObject* parent) {
	return new QIntValidator(static_cast<int>(bottom), static_cast<int>(top), parent);
}

QMetaObject* QIntValidator_MetaObject(const QIntValidator* self) {
	return (QMetaObject*) self->metaObject();
}

void* QIntValidator_Metacast(QIntValidator* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QIntValidator_Tr(const char* s) {
	QString _ret = QIntValidator::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QIntValidator_TrUtf8(const char* s) {
	QString _ret = QIntValidator::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

int QIntValidator_Validate(const QIntValidator* self, struct miqt_string* param1, int* param2) {
	QString param1_QString = QString::fromUtf8(&param1->data, param1->len);
	QValidator::State _ret = self->validate(param1_QString, static_cast<int&>(*param2));
	return static_cast<int>(_ret);
}

void QIntValidator_Fixup(const QIntValidator* self, struct miqt_string* input) {
	QString input_QString = QString::fromUtf8(&input->data, input->len);
	self->fixup(input_QString);
}

void QIntValidator_SetBottom(QIntValidator* self, int bottom) {
	self->setBottom(static_cast<int>(bottom));
}

void QIntValidator_SetTop(QIntValidator* self, int top) {
	self->setTop(static_cast<int>(top));
}

void QIntValidator_SetRange(QIntValidator* self, int bottom, int top) {
	self->setRange(static_cast<int>(bottom), static_cast<int>(top));
}

int QIntValidator_Bottom(const QIntValidator* self) {
	return self->bottom();
}

int QIntValidator_Top(const QIntValidator* self) {
	return self->top();
}

void QIntValidator_BottomChanged(QIntValidator* self, int bottom) {
	self->bottomChanged(static_cast<int>(bottom));
}

void QIntValidator_connect_BottomChanged(QIntValidator* self, intptr_t slot) {
	QIntValidator::connect(self, static_cast<void (QIntValidator::*)(int)>(&QIntValidator::bottomChanged), self, [=](int bottom) {
		int sigval1 = bottom;
		miqt_exec_callback_QIntValidator_BottomChanged(slot, sigval1);
	});
}

void QIntValidator_TopChanged(QIntValidator* self, int top) {
	self->topChanged(static_cast<int>(top));
}

void QIntValidator_connect_TopChanged(QIntValidator* self, intptr_t slot) {
	QIntValidator::connect(self, static_cast<void (QIntValidator::*)(int)>(&QIntValidator::topChanged), self, [=](int top) {
		int sigval1 = top;
		miqt_exec_callback_QIntValidator_TopChanged(slot, sigval1);
	});
}

struct miqt_string* QIntValidator_Tr2(const char* s, const char* c) {
	QString _ret = QIntValidator::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QIntValidator_Tr3(const char* s, const char* c, int n) {
	QString _ret = QIntValidator::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QIntValidator_TrUtf82(const char* s, const char* c) {
	QString _ret = QIntValidator::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QIntValidator_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QIntValidator::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QIntValidator_Delete(QIntValidator* self) {
	delete self;
}

QDoubleValidator* QDoubleValidator_new() {
	return new QDoubleValidator();
}

QDoubleValidator* QDoubleValidator_new2(double bottom, double top, int decimals) {
	return new QDoubleValidator(static_cast<double>(bottom), static_cast<double>(top), static_cast<int>(decimals));
}

QDoubleValidator* QDoubleValidator_new3(QObject* parent) {
	return new QDoubleValidator(parent);
}

QDoubleValidator* QDoubleValidator_new4(double bottom, double top, int decimals, QObject* parent) {
	return new QDoubleValidator(static_cast<double>(bottom), static_cast<double>(top), static_cast<int>(decimals), parent);
}

QMetaObject* QDoubleValidator_MetaObject(const QDoubleValidator* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDoubleValidator_Metacast(QDoubleValidator* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QDoubleValidator_Tr(const char* s) {
	QString _ret = QDoubleValidator::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QDoubleValidator_TrUtf8(const char* s) {
	QString _ret = QDoubleValidator::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

int QDoubleValidator_Validate(const QDoubleValidator* self, struct miqt_string* param1, int* param2) {
	QString param1_QString = QString::fromUtf8(&param1->data, param1->len);
	QValidator::State _ret = self->validate(param1_QString, static_cast<int&>(*param2));
	return static_cast<int>(_ret);
}

void QDoubleValidator_SetRange(QDoubleValidator* self, double bottom, double top) {
	self->setRange(static_cast<double>(bottom), static_cast<double>(top));
}

void QDoubleValidator_SetBottom(QDoubleValidator* self, double bottom) {
	self->setBottom(static_cast<double>(bottom));
}

void QDoubleValidator_SetTop(QDoubleValidator* self, double top) {
	self->setTop(static_cast<double>(top));
}

void QDoubleValidator_SetDecimals(QDoubleValidator* self, int decimals) {
	self->setDecimals(static_cast<int>(decimals));
}

void QDoubleValidator_SetNotation(QDoubleValidator* self, int notation) {
	self->setNotation(static_cast<QDoubleValidator::Notation>(notation));
}

double QDoubleValidator_Bottom(const QDoubleValidator* self) {
	return self->bottom();
}

double QDoubleValidator_Top(const QDoubleValidator* self) {
	return self->top();
}

int QDoubleValidator_Decimals(const QDoubleValidator* self) {
	return self->decimals();
}

int QDoubleValidator_Notation(const QDoubleValidator* self) {
	QDoubleValidator::Notation _ret = self->notation();
	return static_cast<int>(_ret);
}

void QDoubleValidator_BottomChanged(QDoubleValidator* self, double bottom) {
	self->bottomChanged(static_cast<double>(bottom));
}

void QDoubleValidator_connect_BottomChanged(QDoubleValidator* self, intptr_t slot) {
	QDoubleValidator::connect(self, static_cast<void (QDoubleValidator::*)(double)>(&QDoubleValidator::bottomChanged), self, [=](double bottom) {
		double sigval1 = bottom;
		miqt_exec_callback_QDoubleValidator_BottomChanged(slot, sigval1);
	});
}

void QDoubleValidator_TopChanged(QDoubleValidator* self, double top) {
	self->topChanged(static_cast<double>(top));
}

void QDoubleValidator_connect_TopChanged(QDoubleValidator* self, intptr_t slot) {
	QDoubleValidator::connect(self, static_cast<void (QDoubleValidator::*)(double)>(&QDoubleValidator::topChanged), self, [=](double top) {
		double sigval1 = top;
		miqt_exec_callback_QDoubleValidator_TopChanged(slot, sigval1);
	});
}

void QDoubleValidator_DecimalsChanged(QDoubleValidator* self, int decimals) {
	self->decimalsChanged(static_cast<int>(decimals));
}

void QDoubleValidator_connect_DecimalsChanged(QDoubleValidator* self, intptr_t slot) {
	QDoubleValidator::connect(self, static_cast<void (QDoubleValidator::*)(int)>(&QDoubleValidator::decimalsChanged), self, [=](int decimals) {
		int sigval1 = decimals;
		miqt_exec_callback_QDoubleValidator_DecimalsChanged(slot, sigval1);
	});
}

void QDoubleValidator_NotationChanged(QDoubleValidator* self, int notation) {
	self->notationChanged(static_cast<QDoubleValidator::Notation>(notation));
}

void QDoubleValidator_connect_NotationChanged(QDoubleValidator* self, intptr_t slot) {
	QDoubleValidator::connect(self, static_cast<void (QDoubleValidator::*)(QDoubleValidator::Notation)>(&QDoubleValidator::notationChanged), self, [=](QDoubleValidator::Notation notation) {
		QDoubleValidator::Notation notation_ret = notation;
		int sigval1 = static_cast<int>(notation_ret);
		miqt_exec_callback_QDoubleValidator_NotationChanged(slot, sigval1);
	});
}

struct miqt_string* QDoubleValidator_Tr2(const char* s, const char* c) {
	QString _ret = QDoubleValidator::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QDoubleValidator_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDoubleValidator::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QDoubleValidator_TrUtf82(const char* s, const char* c) {
	QString _ret = QDoubleValidator::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QDoubleValidator_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QDoubleValidator::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QDoubleValidator_SetRange3(QDoubleValidator* self, double bottom, double top, int decimals) {
	self->setRange(static_cast<double>(bottom), static_cast<double>(top), static_cast<int>(decimals));
}

void QDoubleValidator_Delete(QDoubleValidator* self) {
	delete self;
}

QRegExpValidator* QRegExpValidator_new() {
	return new QRegExpValidator();
}

QRegExpValidator* QRegExpValidator_new2(QRegExp* rx) {
	return new QRegExpValidator(*rx);
}

QRegExpValidator* QRegExpValidator_new3(QObject* parent) {
	return new QRegExpValidator(parent);
}

QRegExpValidator* QRegExpValidator_new4(QRegExp* rx, QObject* parent) {
	return new QRegExpValidator(*rx, parent);
}

QMetaObject* QRegExpValidator_MetaObject(const QRegExpValidator* self) {
	return (QMetaObject*) self->metaObject();
}

void* QRegExpValidator_Metacast(QRegExpValidator* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QRegExpValidator_Tr(const char* s) {
	QString _ret = QRegExpValidator::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QRegExpValidator_TrUtf8(const char* s) {
	QString _ret = QRegExpValidator::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

int QRegExpValidator_Validate(const QRegExpValidator* self, struct miqt_string* input, int* pos) {
	QString input_QString = QString::fromUtf8(&input->data, input->len);
	QValidator::State _ret = self->validate(input_QString, static_cast<int&>(*pos));
	return static_cast<int>(_ret);
}

void QRegExpValidator_SetRegExp(QRegExpValidator* self, QRegExp* rx) {
	self->setRegExp(*rx);
}

QRegExp* QRegExpValidator_RegExp(const QRegExpValidator* self) {
	const QRegExp& _ret = self->regExp();
	// Cast returned reference into pointer
	return const_cast<QRegExp*>(&_ret);
}

void QRegExpValidator_RegExpChanged(QRegExpValidator* self, QRegExp* regExp) {
	self->regExpChanged(*regExp);
}

void QRegExpValidator_connect_RegExpChanged(QRegExpValidator* self, intptr_t slot) {
	QRegExpValidator::connect(self, static_cast<void (QRegExpValidator::*)(const QRegExp&)>(&QRegExpValidator::regExpChanged), self, [=](const QRegExp& regExp) {
		const QRegExp& regExp_ret = regExp;
		// Cast returned reference into pointer
		QRegExp* sigval1 = const_cast<QRegExp*>(&regExp_ret);
		miqt_exec_callback_QRegExpValidator_RegExpChanged(slot, sigval1);
	});
}

struct miqt_string* QRegExpValidator_Tr2(const char* s, const char* c) {
	QString _ret = QRegExpValidator::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QRegExpValidator_Tr3(const char* s, const char* c, int n) {
	QString _ret = QRegExpValidator::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QRegExpValidator_TrUtf82(const char* s, const char* c) {
	QString _ret = QRegExpValidator::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QRegExpValidator_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QRegExpValidator::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QRegExpValidator_Delete(QRegExpValidator* self) {
	delete self;
}

QRegularExpressionValidator* QRegularExpressionValidator_new() {
	return new QRegularExpressionValidator();
}

QRegularExpressionValidator* QRegularExpressionValidator_new2(QRegularExpression* re) {
	return new QRegularExpressionValidator(*re);
}

QRegularExpressionValidator* QRegularExpressionValidator_new3(QObject* parent) {
	return new QRegularExpressionValidator(parent);
}

QRegularExpressionValidator* QRegularExpressionValidator_new4(QRegularExpression* re, QObject* parent) {
	return new QRegularExpressionValidator(*re, parent);
}

QMetaObject* QRegularExpressionValidator_MetaObject(const QRegularExpressionValidator* self) {
	return (QMetaObject*) self->metaObject();
}

void* QRegularExpressionValidator_Metacast(QRegularExpressionValidator* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QRegularExpressionValidator_Tr(const char* s) {
	QString _ret = QRegularExpressionValidator::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QRegularExpressionValidator_TrUtf8(const char* s) {
	QString _ret = QRegularExpressionValidator::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

int QRegularExpressionValidator_Validate(const QRegularExpressionValidator* self, struct miqt_string* input, int* pos) {
	QString input_QString = QString::fromUtf8(&input->data, input->len);
	QValidator::State _ret = self->validate(input_QString, static_cast<int&>(*pos));
	return static_cast<int>(_ret);
}

QRegularExpression* QRegularExpressionValidator_RegularExpression(const QRegularExpressionValidator* self) {
	return new QRegularExpression(self->regularExpression());
}

void QRegularExpressionValidator_SetRegularExpression(QRegularExpressionValidator* self, QRegularExpression* re) {
	self->setRegularExpression(*re);
}

void QRegularExpressionValidator_RegularExpressionChanged(QRegularExpressionValidator* self, QRegularExpression* re) {
	self->regularExpressionChanged(*re);
}

void QRegularExpressionValidator_connect_RegularExpressionChanged(QRegularExpressionValidator* self, intptr_t slot) {
	QRegularExpressionValidator::connect(self, static_cast<void (QRegularExpressionValidator::*)(const QRegularExpression&)>(&QRegularExpressionValidator::regularExpressionChanged), self, [=](const QRegularExpression& re) {
		const QRegularExpression& re_ret = re;
		// Cast returned reference into pointer
		QRegularExpression* sigval1 = const_cast<QRegularExpression*>(&re_ret);
		miqt_exec_callback_QRegularExpressionValidator_RegularExpressionChanged(slot, sigval1);
	});
}

struct miqt_string* QRegularExpressionValidator_Tr2(const char* s, const char* c) {
	QString _ret = QRegularExpressionValidator::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QRegularExpressionValidator_Tr3(const char* s, const char* c, int n) {
	QString _ret = QRegularExpressionValidator::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QRegularExpressionValidator_TrUtf82(const char* s, const char* c) {
	QString _ret = QRegularExpressionValidator::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QRegularExpressionValidator_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QRegularExpressionValidator::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QRegularExpressionValidator_Delete(QRegularExpressionValidator* self) {
	delete self;
}

