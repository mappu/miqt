#include <QEvent>
#include <QFrame>
#include <QLCDNumber>
#include <QMetaObject>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QWidget>
#include <qlcdnumber.h>
#include "gen_qlcdnumber.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QLCDNumber_Overflow(intptr_t);
QSize* miqt_exec_callback_QLCDNumber_SizeHint(void*, intptr_t);
bool miqt_exec_callback_QLCDNumber_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QLCDNumber_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QLCDNumber_ChangeEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QLCDNumber_InitStyleOption(void*, intptr_t, QStyleOptionFrame*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQLCDNumber final : public QLCDNumber {
public:

	MiqtVirtualQLCDNumber(QWidget* parent): QLCDNumber(parent) {};
	MiqtVirtualQLCDNumber(): QLCDNumber() {};
	MiqtVirtualQLCDNumber(uint numDigits): QLCDNumber(numDigits) {};
	MiqtVirtualQLCDNumber(uint numDigits, QWidget* parent): QLCDNumber(numDigits, parent) {};

	virtual ~MiqtVirtualQLCDNumber() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QLCDNumber::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QLCDNumber_SizeHint(const_cast<MiqtVirtualQLCDNumber*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QLCDNumber::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QLCDNumber::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QLCDNumber_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QLCDNumber::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QLCDNumber::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QLCDNumber_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QLCDNumber::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QLCDNumber::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QLCDNumber_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QLCDNumber::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionFrame* option) const override {
		if (handle__InitStyleOption == 0) {
			QLCDNumber::initStyleOption(option);
			return;
		}
		
		QStyleOptionFrame* sigval1 = option;

		miqt_exec_callback_QLCDNumber_InitStyleOption(const_cast<MiqtVirtualQLCDNumber*>(this), handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionFrame* option) const {

		QLCDNumber::initStyleOption(option);

	}

};

QLCDNumber* QLCDNumber_new(QWidget* parent) {
	return new MiqtVirtualQLCDNumber(parent);
}

QLCDNumber* QLCDNumber_new2() {
	return new MiqtVirtualQLCDNumber();
}

QLCDNumber* QLCDNumber_new3(unsigned int numDigits) {
	return new MiqtVirtualQLCDNumber(static_cast<uint>(numDigits));
}

QLCDNumber* QLCDNumber_new4(unsigned int numDigits, QWidget* parent) {
	return new MiqtVirtualQLCDNumber(static_cast<uint>(numDigits), parent);
}

void QLCDNumber_virtbase(QLCDNumber* src, QFrame** outptr_QFrame) {
	*outptr_QFrame = static_cast<QFrame*>(src);
}

QMetaObject* QLCDNumber_MetaObject(const QLCDNumber* self) {
	return (QMetaObject*) self->metaObject();
}

void* QLCDNumber_Metacast(QLCDNumber* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QLCDNumber_Tr(const char* s) {
	QString _ret = QLCDNumber::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
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

int QLCDNumber_Mode(const QLCDNumber* self) {
	QLCDNumber::Mode _ret = self->mode();
	return static_cast<int>(_ret);
}

void QLCDNumber_SetMode(QLCDNumber* self, int mode) {
	self->setMode(static_cast<QLCDNumber::Mode>(mode));
}

int QLCDNumber_SegmentStyle(const QLCDNumber* self) {
	QLCDNumber::SegmentStyle _ret = self->segmentStyle();
	return static_cast<int>(_ret);
}

void QLCDNumber_SetSegmentStyle(QLCDNumber* self, int segmentStyle) {
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

void QLCDNumber_Display(QLCDNumber* self, struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
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

void QLCDNumber_connect_Overflow(QLCDNumber* self, intptr_t slot) {
	MiqtVirtualQLCDNumber::connect(self, static_cast<void (QLCDNumber::*)()>(&QLCDNumber::overflow), self, [=]() {
		miqt_exec_callback_QLCDNumber_Overflow(slot);
	});
}

struct miqt_string QLCDNumber_Tr2(const char* s, const char* c) {
	QString _ret = QLCDNumber::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLCDNumber_Tr3(const char* s, const char* c, int n) {
	QString _ret = QLCDNumber::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QLCDNumber_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) )->handle__SizeHint = slot;
}

QSize* QLCDNumber_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQLCDNumber*)(self) )->virtualbase_SizeHint();
}

void QLCDNumber_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) )->handle__Event = slot;
}

bool QLCDNumber_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_Event(e);
}

void QLCDNumber_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) )->handle__PaintEvent = slot;
}

void QLCDNumber_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_PaintEvent(param1);
}

void QLCDNumber_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) )->handle__ChangeEvent = slot;
}

void QLCDNumber_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_ChangeEvent(param1);
}

void QLCDNumber_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) )->handle__InitStyleOption = slot;
}

void QLCDNumber_virtualbase_InitStyleOption(const void* self, QStyleOptionFrame* option) {
	( (const MiqtVirtualQLCDNumber*)(self) )->virtualbase_InitStyleOption(option);
}

void QLCDNumber_Delete(QLCDNumber* self) {
	delete self;
}

