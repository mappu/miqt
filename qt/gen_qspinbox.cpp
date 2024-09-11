#include <QDoubleSpinBox>
#include <QMetaObject>
#include <QSpinBox>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qspinbox.h"

#include "gen_qspinbox.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QSpinBox* QSpinBox_new() {
	return new QSpinBox();
}

QSpinBox* QSpinBox_new2(QWidget* parent) {
	return new QSpinBox(parent);
}

QMetaObject* QSpinBox_MetaObject(const QSpinBox* self) {
	return (QMetaObject*) self->metaObject();
}

void QSpinBox_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QSpinBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSpinBox_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QSpinBox::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QSpinBox_Value(const QSpinBox* self) {
	return self->value();
}

void QSpinBox_Prefix(const QSpinBox* self, char** _out, int* _out_Strlen) {
	QString ret = self->prefix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSpinBox_SetPrefix(QSpinBox* self, const char* prefix, size_t prefix_Strlen) {
	QString prefix_QString = QString::fromUtf8(prefix, prefix_Strlen);
	self->setPrefix(prefix_QString);
}

void QSpinBox_Suffix(const QSpinBox* self, char** _out, int* _out_Strlen) {
	QString ret = self->suffix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSpinBox_SetSuffix(QSpinBox* self, const char* suffix, size_t suffix_Strlen) {
	QString suffix_QString = QString::fromUtf8(suffix, suffix_Strlen);
	self->setSuffix(suffix_QString);
}

void QSpinBox_CleanText(const QSpinBox* self, char** _out, int* _out_Strlen) {
	QString ret = self->cleanText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QSpinBox_SingleStep(const QSpinBox* self) {
	return self->singleStep();
}

void QSpinBox_SetSingleStep(QSpinBox* self, int val) {
	self->setSingleStep(static_cast<int>(val));
}

int QSpinBox_Minimum(const QSpinBox* self) {
	return self->minimum();
}

void QSpinBox_SetMinimum(QSpinBox* self, int min) {
	self->setMinimum(static_cast<int>(min));
}

int QSpinBox_Maximum(const QSpinBox* self) {
	return self->maximum();
}

void QSpinBox_SetMaximum(QSpinBox* self, int max) {
	self->setMaximum(static_cast<int>(max));
}

void QSpinBox_SetRange(QSpinBox* self, int min, int max) {
	self->setRange(static_cast<int>(min), static_cast<int>(max));
}

uintptr_t QSpinBox_StepType(const QSpinBox* self) {
	QAbstractSpinBox::StepType ret = self->stepType();
	return static_cast<uintptr_t>(ret);
}

void QSpinBox_SetStepType(QSpinBox* self, uintptr_t stepType) {
	self->setStepType(static_cast<QAbstractSpinBox::StepType>(stepType));
}

int QSpinBox_DisplayIntegerBase(const QSpinBox* self) {
	return self->displayIntegerBase();
}

void QSpinBox_SetDisplayIntegerBase(QSpinBox* self, int base) {
	self->setDisplayIntegerBase(static_cast<int>(base));
}

void QSpinBox_SetValue(QSpinBox* self, int val) {
	self->setValue(static_cast<int>(val));
}

void QSpinBox_ValueChanged(QSpinBox* self, int param1) {
	self->valueChanged(static_cast<int>(param1));
}

void QSpinBox_connect_ValueChanged(QSpinBox* self, void* slot) {
	QSpinBox::connect(self, static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged), self, [=](int param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QSpinBox_TextChanged(QSpinBox* self, const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	self->textChanged(param1_QString);
}

void QSpinBox_connect_TextChanged(QSpinBox* self, void* slot) {
	QSpinBox::connect(self, static_cast<void (QSpinBox::*)(const QString&)>(&QSpinBox::textChanged), self, [=](const QString& param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QSpinBox_ValueChangedWithQString(QSpinBox* self, const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	self->valueChanged(param1_QString);
}

void QSpinBox_connect_ValueChangedWithQString(QSpinBox* self, void* slot) {
	QSpinBox::connect(self, static_cast<void (QSpinBox::*)(const QString&)>(&QSpinBox::valueChanged), self, [=](const QString& param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QSpinBox_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QSpinBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSpinBox_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSpinBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSpinBox_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QSpinBox::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSpinBox_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSpinBox::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSpinBox_Delete(QSpinBox* self) {
	delete self;
}

QDoubleSpinBox* QDoubleSpinBox_new() {
	return new QDoubleSpinBox();
}

QDoubleSpinBox* QDoubleSpinBox_new2(QWidget* parent) {
	return new QDoubleSpinBox(parent);
}

QMetaObject* QDoubleSpinBox_MetaObject(const QDoubleSpinBox* self) {
	return (QMetaObject*) self->metaObject();
}

void QDoubleSpinBox_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QDoubleSpinBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDoubleSpinBox_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QDoubleSpinBox::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

double QDoubleSpinBox_Value(const QDoubleSpinBox* self) {
	return self->value();
}

void QDoubleSpinBox_Prefix(const QDoubleSpinBox* self, char** _out, int* _out_Strlen) {
	QString ret = self->prefix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDoubleSpinBox_SetPrefix(QDoubleSpinBox* self, const char* prefix, size_t prefix_Strlen) {
	QString prefix_QString = QString::fromUtf8(prefix, prefix_Strlen);
	self->setPrefix(prefix_QString);
}

void QDoubleSpinBox_Suffix(const QDoubleSpinBox* self, char** _out, int* _out_Strlen) {
	QString ret = self->suffix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDoubleSpinBox_SetSuffix(QDoubleSpinBox* self, const char* suffix, size_t suffix_Strlen) {
	QString suffix_QString = QString::fromUtf8(suffix, suffix_Strlen);
	self->setSuffix(suffix_QString);
}

void QDoubleSpinBox_CleanText(const QDoubleSpinBox* self, char** _out, int* _out_Strlen) {
	QString ret = self->cleanText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

double QDoubleSpinBox_SingleStep(const QDoubleSpinBox* self) {
	return self->singleStep();
}

void QDoubleSpinBox_SetSingleStep(QDoubleSpinBox* self, double val) {
	self->setSingleStep(static_cast<double>(val));
}

double QDoubleSpinBox_Minimum(const QDoubleSpinBox* self) {
	return self->minimum();
}

void QDoubleSpinBox_SetMinimum(QDoubleSpinBox* self, double min) {
	self->setMinimum(static_cast<double>(min));
}

double QDoubleSpinBox_Maximum(const QDoubleSpinBox* self) {
	return self->maximum();
}

void QDoubleSpinBox_SetMaximum(QDoubleSpinBox* self, double max) {
	self->setMaximum(static_cast<double>(max));
}

void QDoubleSpinBox_SetRange(QDoubleSpinBox* self, double min, double max) {
	self->setRange(static_cast<double>(min), static_cast<double>(max));
}

uintptr_t QDoubleSpinBox_StepType(const QDoubleSpinBox* self) {
	QAbstractSpinBox::StepType ret = self->stepType();
	return static_cast<uintptr_t>(ret);
}

void QDoubleSpinBox_SetStepType(QDoubleSpinBox* self, uintptr_t stepType) {
	self->setStepType(static_cast<QAbstractSpinBox::StepType>(stepType));
}

int QDoubleSpinBox_Decimals(const QDoubleSpinBox* self) {
	return self->decimals();
}

void QDoubleSpinBox_SetDecimals(QDoubleSpinBox* self, int prec) {
	self->setDecimals(static_cast<int>(prec));
}

uintptr_t QDoubleSpinBox_Validate(const QDoubleSpinBox* self, const char* input, size_t input_Strlen, int* pos) {
	QString input_QString = QString::fromUtf8(input, input_Strlen);
	QValidator::State ret = self->validate(input_QString, static_cast<int&>(*pos));
	return static_cast<uintptr_t>(ret);
}

double QDoubleSpinBox_ValueFromText(const QDoubleSpinBox* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return self->valueFromText(text_QString);
}

void QDoubleSpinBox_TextFromValue(const QDoubleSpinBox* self, double val, char** _out, int* _out_Strlen) {
	QString ret = self->textFromValue(static_cast<double>(val));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDoubleSpinBox_Fixup(const QDoubleSpinBox* self, const char* str, size_t str_Strlen) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	self->fixup(str_QString);
}

void QDoubleSpinBox_SetValue(QDoubleSpinBox* self, double val) {
	self->setValue(static_cast<double>(val));
}

void QDoubleSpinBox_ValueChanged(QDoubleSpinBox* self, double param1) {
	self->valueChanged(static_cast<double>(param1));
}

void QDoubleSpinBox_connect_ValueChanged(QDoubleSpinBox* self, void* slot) {
	QDoubleSpinBox::connect(self, static_cast<void (QDoubleSpinBox::*)(double)>(&QDoubleSpinBox::valueChanged), self, [=](double param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QDoubleSpinBox_TextChanged(QDoubleSpinBox* self, const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	self->textChanged(param1_QString);
}

void QDoubleSpinBox_connect_TextChanged(QDoubleSpinBox* self, void* slot) {
	QDoubleSpinBox::connect(self, static_cast<void (QDoubleSpinBox::*)(const QString&)>(&QDoubleSpinBox::textChanged), self, [=](const QString& param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QDoubleSpinBox_ValueChangedWithQString(QDoubleSpinBox* self, const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	self->valueChanged(param1_QString);
}

void QDoubleSpinBox_connect_ValueChangedWithQString(QDoubleSpinBox* self, void* slot) {
	QDoubleSpinBox::connect(self, static_cast<void (QDoubleSpinBox::*)(const QString&)>(&QDoubleSpinBox::valueChanged), self, [=](const QString& param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QDoubleSpinBox_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QDoubleSpinBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDoubleSpinBox_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QDoubleSpinBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDoubleSpinBox_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QDoubleSpinBox::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDoubleSpinBox_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QDoubleSpinBox::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDoubleSpinBox_Delete(QDoubleSpinBox* self) {
	delete self;
}

