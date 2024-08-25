#include "gen_qvariantanimation.h"
#include "qvariantanimation.h"

#include <QEasingCurve>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QVariant>
#include <QVariantAnimation>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QVariantAnimation* QVariantAnimation_new() {
	return new QVariantAnimation();
}

QVariantAnimation* QVariantAnimation_new2(QObject* parent) {
	return new QVariantAnimation(parent);
}

QMetaObject* QVariantAnimation_MetaObject(QVariantAnimation* self) {
	return (QMetaObject*) self->metaObject();
}

void QVariantAnimation_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QVariantAnimation::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QVariantAnimation_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QVariantAnimation::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QVariant* QVariantAnimation_StartValue(QVariantAnimation* self) {
	QVariant ret = self->startValue();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QVariantAnimation_SetStartValue(QVariantAnimation* self, QVariant* value) {
	self->setStartValue(*value);
}

QVariant* QVariantAnimation_EndValue(QVariantAnimation* self) {
	QVariant ret = self->endValue();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QVariantAnimation_SetEndValue(QVariantAnimation* self, QVariant* value) {
	self->setEndValue(*value);
}

QVariant* QVariantAnimation_KeyValueAt(QVariantAnimation* self, double step) {
	QVariant ret = self->keyValueAt(static_cast<qreal>(step));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QVariantAnimation_SetKeyValueAt(QVariantAnimation* self, double step, QVariant* value) {
	self->setKeyValueAt(static_cast<qreal>(step), *value);
}

QVariant* QVariantAnimation_CurrentValue(QVariantAnimation* self) {
	QVariant ret = self->currentValue();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

int QVariantAnimation_Duration(QVariantAnimation* self) {
	return self->duration();
}

void QVariantAnimation_SetDuration(QVariantAnimation* self, int msecs) {
	self->setDuration(static_cast<int>(msecs));
}

QEasingCurve* QVariantAnimation_EasingCurve(QVariantAnimation* self) {
	QEasingCurve ret = self->easingCurve();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QEasingCurve*>(new QEasingCurve(ret));
}

void QVariantAnimation_SetEasingCurve(QVariantAnimation* self, QEasingCurve* easing) {
	self->setEasingCurve(*easing);
}

void QVariantAnimation_ValueChanged(QVariantAnimation* self, QVariant* value) {
	self->valueChanged(*value);
}

void QVariantAnimation_connect_ValueChanged(QVariantAnimation* self, void* slot) {
	QVariantAnimation::connect(self, static_cast<void (QVariantAnimation::*)(const QVariant&)>(&QVariantAnimation::valueChanged), self, [=](const QVariant& value) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QVariantAnimation_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QVariantAnimation::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QVariantAnimation_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QVariantAnimation::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QVariantAnimation_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QVariantAnimation::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QVariantAnimation_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QVariantAnimation::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QVariantAnimation_Delete(QVariantAnimation* self) {
	delete self;
}

