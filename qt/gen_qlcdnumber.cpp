#include <QLCDNumber>
#include <QMetaObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qlcdnumber.h"

#include "gen_qlcdnumber.h"

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
	return (QMetaObject*) const_cast<const QLCDNumber*>(self)->metaObject();
}

void QLCDNumber_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QLCDNumber::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLCDNumber_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QLCDNumber::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QLCDNumber_SmallDecimalPoint(QLCDNumber* self) {
	return const_cast<const QLCDNumber*>(self)->smallDecimalPoint();
}

int QLCDNumber_DigitCount(QLCDNumber* self) {
	return const_cast<const QLCDNumber*>(self)->digitCount();
}

void QLCDNumber_SetDigitCount(QLCDNumber* self, int nDigits) {
	self->setDigitCount(static_cast<int>(nDigits));
}

bool QLCDNumber_CheckOverflow(QLCDNumber* self, double num) {
	return const_cast<const QLCDNumber*>(self)->checkOverflow(static_cast<double>(num));
}

bool QLCDNumber_CheckOverflowWithNum(QLCDNumber* self, int num) {
	return const_cast<const QLCDNumber*>(self)->checkOverflow(static_cast<int>(num));
}

uintptr_t QLCDNumber_Mode(QLCDNumber* self) {
	QLCDNumber::Mode ret = const_cast<const QLCDNumber*>(self)->mode();
	return static_cast<uintptr_t>(ret);
}

void QLCDNumber_SetMode(QLCDNumber* self, uintptr_t mode) {
	self->setMode(static_cast<QLCDNumber::Mode>(mode));
}

uintptr_t QLCDNumber_SegmentStyle(QLCDNumber* self) {
	QLCDNumber::SegmentStyle ret = const_cast<const QLCDNumber*>(self)->segmentStyle();
	return static_cast<uintptr_t>(ret);
}

void QLCDNumber_SetSegmentStyle(QLCDNumber* self, uintptr_t segmentStyle) {
	self->setSegmentStyle(static_cast<QLCDNumber::SegmentStyle>(segmentStyle));
}

double QLCDNumber_Value(QLCDNumber* self) {
	return const_cast<const QLCDNumber*>(self)->value();
}

int QLCDNumber_IntValue(QLCDNumber* self) {
	return const_cast<const QLCDNumber*>(self)->intValue();
}

QSize* QLCDNumber_SizeHint(QLCDNumber* self) {
	QSize ret = const_cast<const QLCDNumber*>(self)->sizeHint();
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

void QLCDNumber_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QLCDNumber::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLCDNumber_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QLCDNumber::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLCDNumber_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QLCDNumber::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLCDNumber_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
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

