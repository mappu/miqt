#include <QAbstractSpinBox>
#include <QEvent>
#include <QMetaObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QWidget>
#include "qabstractspinbox.h"

#include "gen_qabstractspinbox.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QAbstractSpinBox* QAbstractSpinBox_new() {
	return new QAbstractSpinBox();
}

QAbstractSpinBox* QAbstractSpinBox_new2(QWidget* parent) {
	return new QAbstractSpinBox(parent);
}

QMetaObject* QAbstractSpinBox_MetaObject(QAbstractSpinBox* self) {
	return (QMetaObject*) const_cast<const QAbstractSpinBox*>(self)->metaObject();
}

void QAbstractSpinBox_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractSpinBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractSpinBox_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractSpinBox::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

uintptr_t QAbstractSpinBox_ButtonSymbols(QAbstractSpinBox* self) {
	QAbstractSpinBox::ButtonSymbols ret = const_cast<const QAbstractSpinBox*>(self)->buttonSymbols();
	return static_cast<uintptr_t>(ret);
}

void QAbstractSpinBox_SetButtonSymbols(QAbstractSpinBox* self, uintptr_t bs) {
	self->setButtonSymbols(static_cast<QAbstractSpinBox::ButtonSymbols>(bs));
}

void QAbstractSpinBox_SetCorrectionMode(QAbstractSpinBox* self, uintptr_t cm) {
	self->setCorrectionMode(static_cast<QAbstractSpinBox::CorrectionMode>(cm));
}

uintptr_t QAbstractSpinBox_CorrectionMode(QAbstractSpinBox* self) {
	QAbstractSpinBox::CorrectionMode ret = const_cast<const QAbstractSpinBox*>(self)->correctionMode();
	return static_cast<uintptr_t>(ret);
}

bool QAbstractSpinBox_HasAcceptableInput(QAbstractSpinBox* self) {
	return const_cast<const QAbstractSpinBox*>(self)->hasAcceptableInput();
}

void QAbstractSpinBox_Text(QAbstractSpinBox* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QAbstractSpinBox*>(self)->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractSpinBox_SpecialValueText(QAbstractSpinBox* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QAbstractSpinBox*>(self)->specialValueText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractSpinBox_SetSpecialValueText(QAbstractSpinBox* self, const char* txt, size_t txt_Strlen) {
	QString txt_QString = QString::fromUtf8(txt, txt_Strlen);
	self->setSpecialValueText(txt_QString);
}

bool QAbstractSpinBox_Wrapping(QAbstractSpinBox* self) {
	return const_cast<const QAbstractSpinBox*>(self)->wrapping();
}

void QAbstractSpinBox_SetWrapping(QAbstractSpinBox* self, bool w) {
	self->setWrapping(w);
}

void QAbstractSpinBox_SetReadOnly(QAbstractSpinBox* self, bool r) {
	self->setReadOnly(r);
}

bool QAbstractSpinBox_IsReadOnly(QAbstractSpinBox* self) {
	return const_cast<const QAbstractSpinBox*>(self)->isReadOnly();
}

void QAbstractSpinBox_SetKeyboardTracking(QAbstractSpinBox* self, bool kt) {
	self->setKeyboardTracking(kt);
}

bool QAbstractSpinBox_KeyboardTracking(QAbstractSpinBox* self) {
	return const_cast<const QAbstractSpinBox*>(self)->keyboardTracking();
}

void QAbstractSpinBox_SetAlignment(QAbstractSpinBox* self, int flag) {
	self->setAlignment(static_cast<Qt::Alignment>(flag));
}

int QAbstractSpinBox_Alignment(QAbstractSpinBox* self) {
	Qt::Alignment ret = const_cast<const QAbstractSpinBox*>(self)->alignment();
	return static_cast<int>(ret);
}

void QAbstractSpinBox_SetFrame(QAbstractSpinBox* self, bool frame) {
	self->setFrame(frame);
}

bool QAbstractSpinBox_HasFrame(QAbstractSpinBox* self) {
	return const_cast<const QAbstractSpinBox*>(self)->hasFrame();
}

void QAbstractSpinBox_SetAccelerated(QAbstractSpinBox* self, bool on) {
	self->setAccelerated(on);
}

bool QAbstractSpinBox_IsAccelerated(QAbstractSpinBox* self) {
	return const_cast<const QAbstractSpinBox*>(self)->isAccelerated();
}

void QAbstractSpinBox_SetGroupSeparatorShown(QAbstractSpinBox* self, bool shown) {
	self->setGroupSeparatorShown(shown);
}

bool QAbstractSpinBox_IsGroupSeparatorShown(QAbstractSpinBox* self) {
	return const_cast<const QAbstractSpinBox*>(self)->isGroupSeparatorShown();
}

QSize* QAbstractSpinBox_SizeHint(QAbstractSpinBox* self) {
	QSize ret = const_cast<const QAbstractSpinBox*>(self)->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QAbstractSpinBox_MinimumSizeHint(QAbstractSpinBox* self) {
	QSize ret = const_cast<const QAbstractSpinBox*>(self)->minimumSizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QAbstractSpinBox_InterpretText(QAbstractSpinBox* self) {
	self->interpretText();
}

bool QAbstractSpinBox_Event(QAbstractSpinBox* self, QEvent* event) {
	return self->event(event);
}

QVariant* QAbstractSpinBox_InputMethodQuery(QAbstractSpinBox* self, uintptr_t param1) {
	QVariant ret = const_cast<const QAbstractSpinBox*>(self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

uintptr_t QAbstractSpinBox_Validate(QAbstractSpinBox* self, const char* input, size_t input_Strlen, int* pos) {
	QString input_QString = QString::fromUtf8(input, input_Strlen);
	QValidator::State ret = const_cast<const QAbstractSpinBox*>(self)->validate(input_QString, static_cast<int&>(*pos));
	return static_cast<uintptr_t>(ret);
}

void QAbstractSpinBox_Fixup(QAbstractSpinBox* self, const char* input, size_t input_Strlen) {
	QString input_QString = QString::fromUtf8(input, input_Strlen);
	const_cast<const QAbstractSpinBox*>(self)->fixup(input_QString);
}

void QAbstractSpinBox_StepBy(QAbstractSpinBox* self, int steps) {
	self->stepBy(static_cast<int>(steps));
}

void QAbstractSpinBox_StepUp(QAbstractSpinBox* self) {
	self->stepUp();
}

void QAbstractSpinBox_StepDown(QAbstractSpinBox* self) {
	self->stepDown();
}

void QAbstractSpinBox_SelectAll(QAbstractSpinBox* self) {
	self->selectAll();
}

void QAbstractSpinBox_Clear(QAbstractSpinBox* self) {
	self->clear();
}

void QAbstractSpinBox_EditingFinished(QAbstractSpinBox* self) {
	self->editingFinished();
}

void QAbstractSpinBox_connect_EditingFinished(QAbstractSpinBox* self, void* slot) {
	QAbstractSpinBox::connect(self, static_cast<void (QAbstractSpinBox::*)()>(&QAbstractSpinBox::editingFinished), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAbstractSpinBox_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractSpinBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractSpinBox_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractSpinBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractSpinBox_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractSpinBox::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractSpinBox_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractSpinBox::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractSpinBox_Delete(QAbstractSpinBox* self) {
	delete self;
}

