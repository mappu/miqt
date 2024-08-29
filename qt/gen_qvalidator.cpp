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

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QValidator_MetaObject(QValidator* self) {
	return (QMetaObject*) const_cast<const QValidator*>(self)->metaObject();
}

void QValidator_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QValidator::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QValidator_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QValidator::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QValidator_SetLocale(QValidator* self, QLocale* locale) {
	self->setLocale(*locale);
}

QLocale* QValidator_Locale(QValidator* self) {
	QLocale ret = const_cast<const QValidator*>(self)->locale();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLocale*>(new QLocale(ret));
}

uintptr_t QValidator_Validate(QValidator* self, const char* param1, size_t param1_Strlen, int* param2) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	QValidator::State ret = const_cast<const QValidator*>(self)->validate(param1_QString, static_cast<int&>(*param2));
	return static_cast<uintptr_t>(ret);
}

void QValidator_Fixup(QValidator* self, const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	const_cast<const QValidator*>(self)->fixup(param1_QString);
}

void QValidator_Changed(QValidator* self) {
	self->changed();
}

void QValidator_connect_Changed(QValidator* self, void* slot) {
	QValidator::connect(self, static_cast<void (QValidator::*)()>(&QValidator::changed), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QValidator_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QValidator::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QValidator_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QValidator::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QValidator_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QValidator::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QValidator_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QValidator::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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

QMetaObject* QIntValidator_MetaObject(QIntValidator* self) {
	return (QMetaObject*) const_cast<const QIntValidator*>(self)->metaObject();
}

void QIntValidator_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QIntValidator::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QIntValidator_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QIntValidator::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

uintptr_t QIntValidator_Validate(QIntValidator* self, const char* param1, size_t param1_Strlen, int* param2) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	QValidator::State ret = const_cast<const QIntValidator*>(self)->validate(param1_QString, static_cast<int&>(*param2));
	return static_cast<uintptr_t>(ret);
}

void QIntValidator_Fixup(QIntValidator* self, const char* input, size_t input_Strlen) {
	QString input_QString = QString::fromUtf8(input, input_Strlen);
	const_cast<const QIntValidator*>(self)->fixup(input_QString);
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

int QIntValidator_Bottom(QIntValidator* self) {
	return const_cast<const QIntValidator*>(self)->bottom();
}

int QIntValidator_Top(QIntValidator* self) {
	return const_cast<const QIntValidator*>(self)->top();
}

void QIntValidator_BottomChanged(QIntValidator* self, int bottom) {
	self->bottomChanged(static_cast<int>(bottom));
}

void QIntValidator_connect_BottomChanged(QIntValidator* self, void* slot) {
	QIntValidator::connect(self, static_cast<void (QIntValidator::*)(int)>(&QIntValidator::bottomChanged), self, [=](int bottom) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QIntValidator_TopChanged(QIntValidator* self, int top) {
	self->topChanged(static_cast<int>(top));
}

void QIntValidator_connect_TopChanged(QIntValidator* self, void* slot) {
	QIntValidator::connect(self, static_cast<void (QIntValidator::*)(int)>(&QIntValidator::topChanged), self, [=](int top) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QIntValidator_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QIntValidator::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QIntValidator_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QIntValidator::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QIntValidator_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QIntValidator::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QIntValidator_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QIntValidator::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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

QMetaObject* QDoubleValidator_MetaObject(QDoubleValidator* self) {
	return (QMetaObject*) const_cast<const QDoubleValidator*>(self)->metaObject();
}

void QDoubleValidator_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QDoubleValidator::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDoubleValidator_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QDoubleValidator::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

uintptr_t QDoubleValidator_Validate(QDoubleValidator* self, const char* param1, size_t param1_Strlen, int* param2) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	QValidator::State ret = const_cast<const QDoubleValidator*>(self)->validate(param1_QString, static_cast<int&>(*param2));
	return static_cast<uintptr_t>(ret);
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

void QDoubleValidator_SetNotation(QDoubleValidator* self, uintptr_t notation) {
	self->setNotation(static_cast<QDoubleValidator::Notation>(notation));
}

double QDoubleValidator_Bottom(QDoubleValidator* self) {
	return const_cast<const QDoubleValidator*>(self)->bottom();
}

double QDoubleValidator_Top(QDoubleValidator* self) {
	return const_cast<const QDoubleValidator*>(self)->top();
}

int QDoubleValidator_Decimals(QDoubleValidator* self) {
	return const_cast<const QDoubleValidator*>(self)->decimals();
}

uintptr_t QDoubleValidator_Notation(QDoubleValidator* self) {
	QDoubleValidator::Notation ret = const_cast<const QDoubleValidator*>(self)->notation();
	return static_cast<uintptr_t>(ret);
}

void QDoubleValidator_BottomChanged(QDoubleValidator* self, double bottom) {
	self->bottomChanged(static_cast<double>(bottom));
}

void QDoubleValidator_connect_BottomChanged(QDoubleValidator* self, void* slot) {
	QDoubleValidator::connect(self, static_cast<void (QDoubleValidator::*)(double)>(&QDoubleValidator::bottomChanged), self, [=](double bottom) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QDoubleValidator_TopChanged(QDoubleValidator* self, double top) {
	self->topChanged(static_cast<double>(top));
}

void QDoubleValidator_connect_TopChanged(QDoubleValidator* self, void* slot) {
	QDoubleValidator::connect(self, static_cast<void (QDoubleValidator::*)(double)>(&QDoubleValidator::topChanged), self, [=](double top) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QDoubleValidator_DecimalsChanged(QDoubleValidator* self, int decimals) {
	self->decimalsChanged(static_cast<int>(decimals));
}

void QDoubleValidator_connect_DecimalsChanged(QDoubleValidator* self, void* slot) {
	QDoubleValidator::connect(self, static_cast<void (QDoubleValidator::*)(int)>(&QDoubleValidator::decimalsChanged), self, [=](int decimals) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QDoubleValidator_NotationChanged(QDoubleValidator* self, uintptr_t notation) {
	self->notationChanged(static_cast<QDoubleValidator::Notation>(notation));
}

void QDoubleValidator_connect_NotationChanged(QDoubleValidator* self, void* slot) {
	QDoubleValidator::connect(self, static_cast<void (QDoubleValidator::*)(QDoubleValidator::Notation)>(&QDoubleValidator::notationChanged), self, [=](QDoubleValidator::Notation notation) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QDoubleValidator_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QDoubleValidator::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDoubleValidator_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QDoubleValidator::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDoubleValidator_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QDoubleValidator::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDoubleValidator_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QDoubleValidator::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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

QMetaObject* QRegExpValidator_MetaObject(QRegExpValidator* self) {
	return (QMetaObject*) const_cast<const QRegExpValidator*>(self)->metaObject();
}

void QRegExpValidator_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QRegExpValidator::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRegExpValidator_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QRegExpValidator::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

uintptr_t QRegExpValidator_Validate(QRegExpValidator* self, const char* input, size_t input_Strlen, int* pos) {
	QString input_QString = QString::fromUtf8(input, input_Strlen);
	QValidator::State ret = const_cast<const QRegExpValidator*>(self)->validate(input_QString, static_cast<int&>(*pos));
	return static_cast<uintptr_t>(ret);
}

void QRegExpValidator_SetRegExp(QRegExpValidator* self, QRegExp* rx) {
	self->setRegExp(*rx);
}

QRegExp* QRegExpValidator_RegExp(QRegExpValidator* self) {
	const QRegExp& ret = const_cast<const QRegExpValidator*>(self)->regExp();
	// Cast returned reference into pointer
	return const_cast<QRegExp*>(&ret);
}

void QRegExpValidator_RegExpChanged(QRegExpValidator* self, QRegExp* regExp) {
	self->regExpChanged(*regExp);
}

void QRegExpValidator_connect_RegExpChanged(QRegExpValidator* self, void* slot) {
	QRegExpValidator::connect(self, static_cast<void (QRegExpValidator::*)(const QRegExp&)>(&QRegExpValidator::regExpChanged), self, [=](const QRegExp& regExp) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QRegExpValidator_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QRegExpValidator::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRegExpValidator_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QRegExpValidator::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRegExpValidator_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QRegExpValidator::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRegExpValidator_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QRegExpValidator::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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

QMetaObject* QRegularExpressionValidator_MetaObject(QRegularExpressionValidator* self) {
	return (QMetaObject*) const_cast<const QRegularExpressionValidator*>(self)->metaObject();
}

void QRegularExpressionValidator_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QRegularExpressionValidator::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRegularExpressionValidator_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QRegularExpressionValidator::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

uintptr_t QRegularExpressionValidator_Validate(QRegularExpressionValidator* self, const char* input, size_t input_Strlen, int* pos) {
	QString input_QString = QString::fromUtf8(input, input_Strlen);
	QValidator::State ret = const_cast<const QRegularExpressionValidator*>(self)->validate(input_QString, static_cast<int&>(*pos));
	return static_cast<uintptr_t>(ret);
}

QRegularExpression* QRegularExpressionValidator_RegularExpression(QRegularExpressionValidator* self) {
	QRegularExpression ret = const_cast<const QRegularExpressionValidator*>(self)->regularExpression();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegularExpression*>(new QRegularExpression(ret));
}

void QRegularExpressionValidator_SetRegularExpression(QRegularExpressionValidator* self, QRegularExpression* re) {
	self->setRegularExpression(*re);
}

void QRegularExpressionValidator_RegularExpressionChanged(QRegularExpressionValidator* self, QRegularExpression* re) {
	self->regularExpressionChanged(*re);
}

void QRegularExpressionValidator_connect_RegularExpressionChanged(QRegularExpressionValidator* self, void* slot) {
	QRegularExpressionValidator::connect(self, static_cast<void (QRegularExpressionValidator::*)(const QRegularExpression&)>(&QRegularExpressionValidator::regularExpressionChanged), self, [=](const QRegularExpression& re) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QRegularExpressionValidator_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QRegularExpressionValidator::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRegularExpressionValidator_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QRegularExpressionValidator::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRegularExpressionValidator_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QRegularExpressionValidator::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRegularExpressionValidator_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QRegularExpressionValidator::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRegularExpressionValidator_Delete(QRegularExpressionValidator* self) {
	delete self;
}

