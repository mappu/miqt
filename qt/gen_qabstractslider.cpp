#include <QAbstractSlider>
#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qabstractslider.h"

#include "gen_qabstractslider.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QAbstractSlider* QAbstractSlider_new() {
	return new QAbstractSlider();
}

QAbstractSlider* QAbstractSlider_new2(QWidget* parent) {
	return new QAbstractSlider(parent);
}

QMetaObject* QAbstractSlider_MetaObject(QAbstractSlider* self) {
	return (QMetaObject*) const_cast<const QAbstractSlider*>(self)->metaObject();
}

void QAbstractSlider_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractSlider::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractSlider_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractSlider::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

uintptr_t QAbstractSlider_Orientation(QAbstractSlider* self) {
	Qt::Orientation ret = const_cast<const QAbstractSlider*>(self)->orientation();
	return static_cast<uintptr_t>(ret);
}

void QAbstractSlider_SetMinimum(QAbstractSlider* self, int minimum) {
	self->setMinimum(static_cast<int>(minimum));
}

int QAbstractSlider_Minimum(QAbstractSlider* self) {
	return const_cast<const QAbstractSlider*>(self)->minimum();
}

void QAbstractSlider_SetMaximum(QAbstractSlider* self, int maximum) {
	self->setMaximum(static_cast<int>(maximum));
}

int QAbstractSlider_Maximum(QAbstractSlider* self) {
	return const_cast<const QAbstractSlider*>(self)->maximum();
}

void QAbstractSlider_SetSingleStep(QAbstractSlider* self, int singleStep) {
	self->setSingleStep(static_cast<int>(singleStep));
}

int QAbstractSlider_SingleStep(QAbstractSlider* self) {
	return const_cast<const QAbstractSlider*>(self)->singleStep();
}

void QAbstractSlider_SetPageStep(QAbstractSlider* self, int pageStep) {
	self->setPageStep(static_cast<int>(pageStep));
}

int QAbstractSlider_PageStep(QAbstractSlider* self) {
	return const_cast<const QAbstractSlider*>(self)->pageStep();
}

void QAbstractSlider_SetTracking(QAbstractSlider* self, bool enable) {
	self->setTracking(enable);
}

bool QAbstractSlider_HasTracking(QAbstractSlider* self) {
	return const_cast<const QAbstractSlider*>(self)->hasTracking();
}

void QAbstractSlider_SetSliderDown(QAbstractSlider* self, bool sliderDown) {
	self->setSliderDown(sliderDown);
}

bool QAbstractSlider_IsSliderDown(QAbstractSlider* self) {
	return const_cast<const QAbstractSlider*>(self)->isSliderDown();
}

void QAbstractSlider_SetSliderPosition(QAbstractSlider* self, int sliderPosition) {
	self->setSliderPosition(static_cast<int>(sliderPosition));
}

int QAbstractSlider_SliderPosition(QAbstractSlider* self) {
	return const_cast<const QAbstractSlider*>(self)->sliderPosition();
}

void QAbstractSlider_SetInvertedAppearance(QAbstractSlider* self, bool invertedAppearance) {
	self->setInvertedAppearance(invertedAppearance);
}

bool QAbstractSlider_InvertedAppearance(QAbstractSlider* self) {
	return const_cast<const QAbstractSlider*>(self)->invertedAppearance();
}

void QAbstractSlider_SetInvertedControls(QAbstractSlider* self, bool invertedControls) {
	self->setInvertedControls(invertedControls);
}

bool QAbstractSlider_InvertedControls(QAbstractSlider* self) {
	return const_cast<const QAbstractSlider*>(self)->invertedControls();
}

int QAbstractSlider_Value(QAbstractSlider* self) {
	return const_cast<const QAbstractSlider*>(self)->value();
}

void QAbstractSlider_TriggerAction(QAbstractSlider* self, uintptr_t action) {
	self->triggerAction(static_cast<QAbstractSlider::SliderAction>(action));
}

void QAbstractSlider_SetValue(QAbstractSlider* self, int value) {
	self->setValue(static_cast<int>(value));
}

void QAbstractSlider_SetOrientation(QAbstractSlider* self, uintptr_t orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

void QAbstractSlider_SetRange(QAbstractSlider* self, int min, int max) {
	self->setRange(static_cast<int>(min), static_cast<int>(max));
}

void QAbstractSlider_ValueChanged(QAbstractSlider* self, int value) {
	self->valueChanged(static_cast<int>(value));
}

void QAbstractSlider_connect_ValueChanged(QAbstractSlider* self, void* slot) {
	QAbstractSlider::connect(self, static_cast<void (QAbstractSlider::*)(int)>(&QAbstractSlider::valueChanged), self, [=](int value) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAbstractSlider_SliderPressed(QAbstractSlider* self) {
	self->sliderPressed();
}

void QAbstractSlider_connect_SliderPressed(QAbstractSlider* self, void* slot) {
	QAbstractSlider::connect(self, static_cast<void (QAbstractSlider::*)()>(&QAbstractSlider::sliderPressed), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAbstractSlider_SliderMoved(QAbstractSlider* self, int position) {
	self->sliderMoved(static_cast<int>(position));
}

void QAbstractSlider_connect_SliderMoved(QAbstractSlider* self, void* slot) {
	QAbstractSlider::connect(self, static_cast<void (QAbstractSlider::*)(int)>(&QAbstractSlider::sliderMoved), self, [=](int position) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAbstractSlider_SliderReleased(QAbstractSlider* self) {
	self->sliderReleased();
}

void QAbstractSlider_connect_SliderReleased(QAbstractSlider* self, void* slot) {
	QAbstractSlider::connect(self, static_cast<void (QAbstractSlider::*)()>(&QAbstractSlider::sliderReleased), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAbstractSlider_RangeChanged(QAbstractSlider* self, int min, int max) {
	self->rangeChanged(static_cast<int>(min), static_cast<int>(max));
}

void QAbstractSlider_connect_RangeChanged(QAbstractSlider* self, void* slot) {
	QAbstractSlider::connect(self, static_cast<void (QAbstractSlider::*)(int, int)>(&QAbstractSlider::rangeChanged), self, [=](int min, int max) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAbstractSlider_ActionTriggered(QAbstractSlider* self, int action) {
	self->actionTriggered(static_cast<int>(action));
}

void QAbstractSlider_connect_ActionTriggered(QAbstractSlider* self, void* slot) {
	QAbstractSlider::connect(self, static_cast<void (QAbstractSlider::*)(int)>(&QAbstractSlider::actionTriggered), self, [=](int action) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAbstractSlider_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractSlider::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractSlider_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractSlider::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractSlider_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractSlider::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractSlider_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractSlider::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractSlider_Delete(QAbstractSlider* self) {
	delete self;
}

