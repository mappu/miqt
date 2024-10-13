#include <QAbstractSlider>
#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qabstractslider.h"
#include "gen_qabstractslider.h"
#include "_cgo_export.h"

QAbstractSlider* QAbstractSlider_new() {
	return new QAbstractSlider();
}

QAbstractSlider* QAbstractSlider_new2(QWidget* parent) {
	return new QAbstractSlider(parent);
}

QMetaObject* QAbstractSlider_MetaObject(const QAbstractSlider* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractSlider_Metacast(QAbstractSlider* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QAbstractSlider_Tr(const char* s) {
	QString _ret = QAbstractSlider::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractSlider_TrUtf8(const char* s) {
	QString _ret = QAbstractSlider::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

int QAbstractSlider_Orientation(const QAbstractSlider* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QAbstractSlider_SetMinimum(QAbstractSlider* self, int minimum) {
	self->setMinimum(static_cast<int>(minimum));
}

int QAbstractSlider_Minimum(const QAbstractSlider* self) {
	return self->minimum();
}

void QAbstractSlider_SetMaximum(QAbstractSlider* self, int maximum) {
	self->setMaximum(static_cast<int>(maximum));
}

int QAbstractSlider_Maximum(const QAbstractSlider* self) {
	return self->maximum();
}

void QAbstractSlider_SetSingleStep(QAbstractSlider* self, int singleStep) {
	self->setSingleStep(static_cast<int>(singleStep));
}

int QAbstractSlider_SingleStep(const QAbstractSlider* self) {
	return self->singleStep();
}

void QAbstractSlider_SetPageStep(QAbstractSlider* self, int pageStep) {
	self->setPageStep(static_cast<int>(pageStep));
}

int QAbstractSlider_PageStep(const QAbstractSlider* self) {
	return self->pageStep();
}

void QAbstractSlider_SetTracking(QAbstractSlider* self, bool enable) {
	self->setTracking(enable);
}

bool QAbstractSlider_HasTracking(const QAbstractSlider* self) {
	return self->hasTracking();
}

void QAbstractSlider_SetSliderDown(QAbstractSlider* self, bool sliderDown) {
	self->setSliderDown(sliderDown);
}

bool QAbstractSlider_IsSliderDown(const QAbstractSlider* self) {
	return self->isSliderDown();
}

void QAbstractSlider_SetSliderPosition(QAbstractSlider* self, int sliderPosition) {
	self->setSliderPosition(static_cast<int>(sliderPosition));
}

int QAbstractSlider_SliderPosition(const QAbstractSlider* self) {
	return self->sliderPosition();
}

void QAbstractSlider_SetInvertedAppearance(QAbstractSlider* self, bool invertedAppearance) {
	self->setInvertedAppearance(invertedAppearance);
}

bool QAbstractSlider_InvertedAppearance(const QAbstractSlider* self) {
	return self->invertedAppearance();
}

void QAbstractSlider_SetInvertedControls(QAbstractSlider* self, bool invertedControls) {
	self->setInvertedControls(invertedControls);
}

bool QAbstractSlider_InvertedControls(const QAbstractSlider* self) {
	return self->invertedControls();
}

int QAbstractSlider_Value(const QAbstractSlider* self) {
	return self->value();
}

void QAbstractSlider_TriggerAction(QAbstractSlider* self, int action) {
	self->triggerAction(static_cast<QAbstractSlider::SliderAction>(action));
}

void QAbstractSlider_SetValue(QAbstractSlider* self, int value) {
	self->setValue(static_cast<int>(value));
}

void QAbstractSlider_SetOrientation(QAbstractSlider* self, int orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

void QAbstractSlider_SetRange(QAbstractSlider* self, int min, int max) {
	self->setRange(static_cast<int>(min), static_cast<int>(max));
}

void QAbstractSlider_ValueChanged(QAbstractSlider* self, int value) {
	self->valueChanged(static_cast<int>(value));
}

void QAbstractSlider_connect_ValueChanged(QAbstractSlider* self, intptr_t slot) {
	QAbstractSlider::connect(self, static_cast<void (QAbstractSlider::*)(int)>(&QAbstractSlider::valueChanged), self, [=](int value) {
		int sigval1 = value;
		miqt_exec_callback_QAbstractSlider_ValueChanged(slot, sigval1);
	});
}

void QAbstractSlider_SliderPressed(QAbstractSlider* self) {
	self->sliderPressed();
}

void QAbstractSlider_connect_SliderPressed(QAbstractSlider* self, intptr_t slot) {
	QAbstractSlider::connect(self, static_cast<void (QAbstractSlider::*)()>(&QAbstractSlider::sliderPressed), self, [=]() {
		miqt_exec_callback_QAbstractSlider_SliderPressed(slot);
	});
}

void QAbstractSlider_SliderMoved(QAbstractSlider* self, int position) {
	self->sliderMoved(static_cast<int>(position));
}

void QAbstractSlider_connect_SliderMoved(QAbstractSlider* self, intptr_t slot) {
	QAbstractSlider::connect(self, static_cast<void (QAbstractSlider::*)(int)>(&QAbstractSlider::sliderMoved), self, [=](int position) {
		int sigval1 = position;
		miqt_exec_callback_QAbstractSlider_SliderMoved(slot, sigval1);
	});
}

void QAbstractSlider_SliderReleased(QAbstractSlider* self) {
	self->sliderReleased();
}

void QAbstractSlider_connect_SliderReleased(QAbstractSlider* self, intptr_t slot) {
	QAbstractSlider::connect(self, static_cast<void (QAbstractSlider::*)()>(&QAbstractSlider::sliderReleased), self, [=]() {
		miqt_exec_callback_QAbstractSlider_SliderReleased(slot);
	});
}

void QAbstractSlider_RangeChanged(QAbstractSlider* self, int min, int max) {
	self->rangeChanged(static_cast<int>(min), static_cast<int>(max));
}

void QAbstractSlider_connect_RangeChanged(QAbstractSlider* self, intptr_t slot) {
	QAbstractSlider::connect(self, static_cast<void (QAbstractSlider::*)(int, int)>(&QAbstractSlider::rangeChanged), self, [=](int min, int max) {
		int sigval1 = min;
		int sigval2 = max;
		miqt_exec_callback_QAbstractSlider_RangeChanged(slot, sigval1, sigval2);
	});
}

void QAbstractSlider_ActionTriggered(QAbstractSlider* self, int action) {
	self->actionTriggered(static_cast<int>(action));
}

void QAbstractSlider_connect_ActionTriggered(QAbstractSlider* self, intptr_t slot) {
	QAbstractSlider::connect(self, static_cast<void (QAbstractSlider::*)(int)>(&QAbstractSlider::actionTriggered), self, [=](int action) {
		int sigval1 = action;
		miqt_exec_callback_QAbstractSlider_ActionTriggered(slot, sigval1);
	});
}

struct miqt_string* QAbstractSlider_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractSlider::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractSlider_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractSlider::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractSlider_TrUtf82(const char* s, const char* c) {
	QString _ret = QAbstractSlider::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractSlider_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractSlider::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QAbstractSlider_Delete(QAbstractSlider* self) {
	delete self;
}

