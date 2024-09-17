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
#include "_cgo_export.h"

QAbstractSpinBox* QAbstractSpinBox_new() {
	return new QAbstractSpinBox();
}

QAbstractSpinBox* QAbstractSpinBox_new2(QWidget* parent) {
	return new QAbstractSpinBox(parent);
}

QMetaObject* QAbstractSpinBox_MetaObject(const QAbstractSpinBox* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QAbstractSpinBox_Tr(const char* s) {
	QString _ret = QAbstractSpinBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractSpinBox_TrUtf8(const char* s) {
	QString _ret = QAbstractSpinBox::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

uintptr_t QAbstractSpinBox_ButtonSymbols(const QAbstractSpinBox* self) {
	QAbstractSpinBox::ButtonSymbols _ret = self->buttonSymbols();
	return static_cast<uintptr_t>(_ret);
}

void QAbstractSpinBox_SetButtonSymbols(QAbstractSpinBox* self, uintptr_t bs) {
	self->setButtonSymbols(static_cast<QAbstractSpinBox::ButtonSymbols>(bs));
}

void QAbstractSpinBox_SetCorrectionMode(QAbstractSpinBox* self, uintptr_t cm) {
	self->setCorrectionMode(static_cast<QAbstractSpinBox::CorrectionMode>(cm));
}

uintptr_t QAbstractSpinBox_CorrectionMode(const QAbstractSpinBox* self) {
	QAbstractSpinBox::CorrectionMode _ret = self->correctionMode();
	return static_cast<uintptr_t>(_ret);
}

bool QAbstractSpinBox_HasAcceptableInput(const QAbstractSpinBox* self) {
	return self->hasAcceptableInput();
}

struct miqt_string* QAbstractSpinBox_Text(const QAbstractSpinBox* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractSpinBox_SpecialValueText(const QAbstractSpinBox* self) {
	QString _ret = self->specialValueText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QAbstractSpinBox_SetSpecialValueText(QAbstractSpinBox* self, struct miqt_string* txt) {
	QString txt_QString = QString::fromUtf8(&txt->data, txt->len);
	self->setSpecialValueText(txt_QString);
}

bool QAbstractSpinBox_Wrapping(const QAbstractSpinBox* self) {
	return self->wrapping();
}

void QAbstractSpinBox_SetWrapping(QAbstractSpinBox* self, bool w) {
	self->setWrapping(w);
}

void QAbstractSpinBox_SetReadOnly(QAbstractSpinBox* self, bool r) {
	self->setReadOnly(r);
}

bool QAbstractSpinBox_IsReadOnly(const QAbstractSpinBox* self) {
	return self->isReadOnly();
}

void QAbstractSpinBox_SetKeyboardTracking(QAbstractSpinBox* self, bool kt) {
	self->setKeyboardTracking(kt);
}

bool QAbstractSpinBox_KeyboardTracking(const QAbstractSpinBox* self) {
	return self->keyboardTracking();
}

void QAbstractSpinBox_SetAlignment(QAbstractSpinBox* self, int flag) {
	self->setAlignment(static_cast<Qt::Alignment>(flag));
}

int QAbstractSpinBox_Alignment(const QAbstractSpinBox* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QAbstractSpinBox_SetFrame(QAbstractSpinBox* self, bool frame) {
	self->setFrame(frame);
}

bool QAbstractSpinBox_HasFrame(const QAbstractSpinBox* self) {
	return self->hasFrame();
}

void QAbstractSpinBox_SetAccelerated(QAbstractSpinBox* self, bool on) {
	self->setAccelerated(on);
}

bool QAbstractSpinBox_IsAccelerated(const QAbstractSpinBox* self) {
	return self->isAccelerated();
}

void QAbstractSpinBox_SetGroupSeparatorShown(QAbstractSpinBox* self, bool shown) {
	self->setGroupSeparatorShown(shown);
}

bool QAbstractSpinBox_IsGroupSeparatorShown(const QAbstractSpinBox* self) {
	return self->isGroupSeparatorShown();
}

QSize* QAbstractSpinBox_SizeHint(const QAbstractSpinBox* self) {
	return new QSize(self->sizeHint());
}

QSize* QAbstractSpinBox_MinimumSizeHint(const QAbstractSpinBox* self) {
	return new QSize(self->minimumSizeHint());
}

void QAbstractSpinBox_InterpretText(QAbstractSpinBox* self) {
	self->interpretText();
}

bool QAbstractSpinBox_Event(QAbstractSpinBox* self, QEvent* event) {
	return self->event(event);
}

QVariant* QAbstractSpinBox_InputMethodQuery(const QAbstractSpinBox* self, uintptr_t param1) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

uintptr_t QAbstractSpinBox_Validate(const QAbstractSpinBox* self, struct miqt_string* input, int* pos) {
	QString input_QString = QString::fromUtf8(&input->data, input->len);
	QValidator::State _ret = self->validate(input_QString, static_cast<int&>(*pos));
	return static_cast<uintptr_t>(_ret);
}

void QAbstractSpinBox_Fixup(const QAbstractSpinBox* self, struct miqt_string* input) {
	QString input_QString = QString::fromUtf8(&input->data, input->len);
	self->fixup(input_QString);
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
		miqt_exec_callback_QAbstractSpinBox_EditingFinished(slot);
	});
}

struct miqt_string* QAbstractSpinBox_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractSpinBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractSpinBox_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractSpinBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractSpinBox_TrUtf82(const char* s, const char* c) {
	QString _ret = QAbstractSpinBox::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractSpinBox_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractSpinBox::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QAbstractSpinBox_Delete(QAbstractSpinBox* self) {
	delete self;
}

