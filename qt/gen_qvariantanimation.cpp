#include <QEasingCurve>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QVariantAnimation>
#include "qvariantanimation.h"
#include "gen_qvariantanimation.h"
#include "_cgo_export.h"

QVariantAnimation* QVariantAnimation_new() {
	return new QVariantAnimation();
}

QVariantAnimation* QVariantAnimation_new2(QObject* parent) {
	return new QVariantAnimation(parent);
}

QMetaObject* QVariantAnimation_MetaObject(const QVariantAnimation* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QVariantAnimation_Tr(const char* s) {
	QString _ret = QVariantAnimation::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QVariantAnimation_TrUtf8(const char* s) {
	QString _ret = QVariantAnimation::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QVariant* QVariantAnimation_StartValue(const QVariantAnimation* self) {
	QVariant _ret = self->startValue();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(_ret));
}

void QVariantAnimation_SetStartValue(QVariantAnimation* self, QVariant* value) {
	self->setStartValue(*value);
}

QVariant* QVariantAnimation_EndValue(const QVariantAnimation* self) {
	QVariant _ret = self->endValue();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(_ret));
}

void QVariantAnimation_SetEndValue(QVariantAnimation* self, QVariant* value) {
	self->setEndValue(*value);
}

QVariant* QVariantAnimation_KeyValueAt(const QVariantAnimation* self, double step) {
	QVariant _ret = self->keyValueAt(static_cast<qreal>(step));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(_ret));
}

void QVariantAnimation_SetKeyValueAt(QVariantAnimation* self, double step, QVariant* value) {
	self->setKeyValueAt(static_cast<qreal>(step), *value);
}

QVariant* QVariantAnimation_CurrentValue(const QVariantAnimation* self) {
	QVariant _ret = self->currentValue();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(_ret));
}

int QVariantAnimation_Duration(const QVariantAnimation* self) {
	return self->duration();
}

void QVariantAnimation_SetDuration(QVariantAnimation* self, int msecs) {
	self->setDuration(static_cast<int>(msecs));
}

QEasingCurve* QVariantAnimation_EasingCurve(const QVariantAnimation* self) {
	QEasingCurve _ret = self->easingCurve();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QEasingCurve*>(new QEasingCurve(_ret));
}

void QVariantAnimation_SetEasingCurve(QVariantAnimation* self, QEasingCurve* easing) {
	self->setEasingCurve(*easing);
}

void QVariantAnimation_ValueChanged(QVariantAnimation* self, QVariant* value) {
	self->valueChanged(*value);
}

void QVariantAnimation_connect_ValueChanged(QVariantAnimation* self, void* slot) {
	QVariantAnimation::connect(self, static_cast<void (QVariantAnimation::*)(const QVariant&)>(&QVariantAnimation::valueChanged), self, [=](const QVariant& value) {
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&value_ret);
		miqt_exec_callback_QVariantAnimation_ValueChanged(slot, sigval1);
	});
}

struct miqt_string* QVariantAnimation_Tr2(const char* s, const char* c) {
	QString _ret = QVariantAnimation::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QVariantAnimation_Tr3(const char* s, const char* c, int n) {
	QString _ret = QVariantAnimation::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QVariantAnimation_TrUtf82(const char* s, const char* c) {
	QString _ret = QVariantAnimation::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QVariantAnimation_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QVariantAnimation::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QVariantAnimation_Delete(QVariantAnimation* self) {
	delete self;
}

