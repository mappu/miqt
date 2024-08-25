#include "gen_qlcdnumber.h"
#include "qlcdnumber.h"

#include <QLCDNumber>
#include <QMetaObject>
#include <QSize>
#include <QString>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QLCDNumber* QLCDNumber_new() {
	return new QLCDNumber();
}

QLCDNumber* QLCDNumber_new2(unsigned int numDigits) {
	return new QLCDNumber(static_cast<uint>(numDigits));
}

QLCDNumber* QLCDNumber_new3(QWidget* parent) {
	return new QLCDNumber(parent);
}

QLCDNumber* QLCDNumber_new4(unsigned int numDigits, QWidget* parent) {
	return new QLCDNumber(static_cast<uint>(numDigits), parent);
}

QMetaObject* QLCDNumber_MetaObject(QLCDNumber* self) {
	return (QMetaObject*) self->metaObject();
}

void QLCDNumber_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QLCDNumber::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLCDNumber_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QLCDNumber::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QLCDNumber_SmallDecimalPoint(QLCDNumber* self) {
	return self->smallDecimalPoint();
}

int QLCDNumber_DigitCount(QLCDNumber* self) {
	return self->digitCount();
}

void QLCDNumber_SetDigitCount(QLCDNumber* self, int nDigits) {
	self->setDigitCount(static_cast<int>(nDigits));
}

bool QLCDNumber_CheckOverflow(QLCDNumber* self, double num) {
	return self->checkOverflow(static_cast<double>(num));
}

bool QLCDNumber_CheckOverflowWithNum(QLCDNumber* self, int num) {
	return self->checkOverflow(static_cast<int>(num));
}

double QLCDNumber_Value(QLCDNumber* self) {
	return self->value();
}

int QLCDNumber_IntValue(QLCDNumber* self) {
	return self->intValue();
}

QSize* QLCDNumber_SizeHint(QLCDNumber* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QLCDNumber_Display(QLCDNumber* self, const char* str, size_t str_Strlen) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	self->display(str_QString);
}

void QLCDNumber_DisplayWithNum(QLCDNumber* self, int num) {
	self->display(static_cast<int>(num));
}

void QLCDNumber_Display2(QLCDNumber* self, double num) {
	self->display(static_cast<double>(num));
}

void QLCDNumber_SetHexMode(QLCDNumber* self) {
	self->setHexMode();
}

void QLCDNumber_SetDecMode(QLCDNumber* self) {
	self->setDecMode();
}

void QLCDNumber_SetOctMode(QLCDNumber* self) {
	self->setOctMode();
}

void QLCDNumber_SetBinMode(QLCDNumber* self) {
	self->setBinMode();
}

void QLCDNumber_SetSmallDecimalPoint(QLCDNumber* self, bool smallDecimalPoint) {
	self->setSmallDecimalPoint(smallDecimalPoint);
}

void QLCDNumber_Overflow(QLCDNumber* self) {
	self->overflow();
}

void QLCDNumber_connect_Overflow(QLCDNumber* self, void* slot) {
	QLCDNumber::connect(self, static_cast<void (QLCDNumber::*)()>(&QLCDNumber::overflow), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QLCDNumber_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QLCDNumber::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLCDNumber_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QLCDNumber::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLCDNumber_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QLCDNumber::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLCDNumber_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QLCDNumber::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLCDNumber_Delete(QLCDNumber* self) {
	delete self;
}

