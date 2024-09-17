#include <QLCDNumber>
#include <QMetaObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qlcdnumber.h"
#include "gen_qlcdnumber.h"
#include "_cgo_export.h"

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

QMetaObject* QLCDNumber_MetaObject(const QLCDNumber* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QLCDNumber_Tr(const char* s) {
	QString _ret = QLCDNumber::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLCDNumber_TrUtf8(const char* s) {
	QString _ret = QLCDNumber::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

bool QLCDNumber_SmallDecimalPoint(const QLCDNumber* self) {
	return self->smallDecimalPoint();
}

int QLCDNumber_DigitCount(const QLCDNumber* self) {
	return self->digitCount();
}

void QLCDNumber_SetDigitCount(QLCDNumber* self, int nDigits) {
	self->setDigitCount(static_cast<int>(nDigits));
}

bool QLCDNumber_CheckOverflow(const QLCDNumber* self, double num) {
	return self->checkOverflow(static_cast<double>(num));
}

bool QLCDNumber_CheckOverflowWithNum(const QLCDNumber* self, int num) {
	return self->checkOverflow(static_cast<int>(num));
}

uintptr_t QLCDNumber_Mode(const QLCDNumber* self) {
	QLCDNumber::Mode _ret = self->mode();
	return static_cast<uintptr_t>(_ret);
}

void QLCDNumber_SetMode(QLCDNumber* self, uintptr_t mode) {
	self->setMode(static_cast<QLCDNumber::Mode>(mode));
}

uintptr_t QLCDNumber_SegmentStyle(const QLCDNumber* self) {
	QLCDNumber::SegmentStyle _ret = self->segmentStyle();
	return static_cast<uintptr_t>(_ret);
}

void QLCDNumber_SetSegmentStyle(QLCDNumber* self, uintptr_t segmentStyle) {
	self->setSegmentStyle(static_cast<QLCDNumber::SegmentStyle>(segmentStyle));
}

double QLCDNumber_Value(const QLCDNumber* self) {
	return self->value();
}

int QLCDNumber_IntValue(const QLCDNumber* self) {
	return self->intValue();
}

QSize* QLCDNumber_SizeHint(const QLCDNumber* self) {
	return new QSize(self->sizeHint());
}

void QLCDNumber_Display(QLCDNumber* self, struct miqt_string* str) {
	QString str_QString = QString::fromUtf8(&str->data, str->len);
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
		miqt_exec_callback_QLCDNumber_Overflow(slot);
	});
}

struct miqt_string* QLCDNumber_Tr2(const char* s, const char* c) {
	QString _ret = QLCDNumber::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLCDNumber_Tr3(const char* s, const char* c, int n) {
	QString _ret = QLCDNumber::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLCDNumber_TrUtf82(const char* s, const char* c) {
	QString _ret = QLCDNumber::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLCDNumber_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QLCDNumber::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QLCDNumber_Delete(QLCDNumber* self) {
	delete self;
}

