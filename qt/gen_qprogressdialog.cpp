#include "gen_qprogressdialog.h"
#include "qprogressdialog.h"

#include <QLabel>
#include <QMetaObject>
#include <QProgressBar>
#include <QProgressDialog>
#include <QPushButton>
#include <QSize>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QProgressDialog_MetaObject(QProgressDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void QProgressDialog_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QProgressDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProgressDialog_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QProgressDialog::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProgressDialog_SetLabel(QProgressDialog* self, QLabel* label) {
	self->setLabel(label);
}

void QProgressDialog_SetCancelButton(QProgressDialog* self, QPushButton* button) {
	self->setCancelButton(button);
}

void QProgressDialog_SetBar(QProgressDialog* self, QProgressBar* bar) {
	self->setBar(bar);
}

bool QProgressDialog_WasCanceled(QProgressDialog* self) {
	return self->wasCanceled();
}

int QProgressDialog_Minimum(QProgressDialog* self) {
	return self->minimum();
}

int QProgressDialog_Maximum(QProgressDialog* self) {
	return self->maximum();
}

int QProgressDialog_Value(QProgressDialog* self) {
	return self->value();
}

QSize* QProgressDialog_SizeHint(QProgressDialog* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QProgressDialog_LabelText(QProgressDialog* self, char** _out, int* _out_Strlen) {
	QString ret = self->labelText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QProgressDialog_MinimumDuration(QProgressDialog* self) {
	return self->minimumDuration();
}

void QProgressDialog_SetAutoReset(QProgressDialog* self, bool reset) {
	self->setAutoReset(reset);
}

bool QProgressDialog_AutoReset(QProgressDialog* self) {
	return self->autoReset();
}

void QProgressDialog_SetAutoClose(QProgressDialog* self, bool close) {
	self->setAutoClose(close);
}

bool QProgressDialog_AutoClose(QProgressDialog* self) {
	return self->autoClose();
}

void QProgressDialog_Cancel(QProgressDialog* self) {
	self->cancel();
}

void QProgressDialog_Reset(QProgressDialog* self) {
	self->reset();
}

void QProgressDialog_SetMaximum(QProgressDialog* self, int maximum) {
	self->setMaximum(static_cast<int>(maximum));
}

void QProgressDialog_SetMinimum(QProgressDialog* self, int minimum) {
	self->setMinimum(static_cast<int>(minimum));
}

void QProgressDialog_SetRange(QProgressDialog* self, int minimum, int maximum) {
	self->setRange(static_cast<int>(minimum), static_cast<int>(maximum));
}

void QProgressDialog_SetValue(QProgressDialog* self, int progress) {
	self->setValue(static_cast<int>(progress));
}

void QProgressDialog_SetLabelText(QProgressDialog* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setLabelText(text_QString);
}

void QProgressDialog_SetCancelButtonText(QProgressDialog* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setCancelButtonText(text_QString);
}

void QProgressDialog_SetMinimumDuration(QProgressDialog* self, int ms) {
	self->setMinimumDuration(static_cast<int>(ms));
}

void QProgressDialog_Canceled(QProgressDialog* self) {
	self->canceled();
}

void QProgressDialog_connect_Canceled(QProgressDialog* self, void* slot) {
	QProgressDialog::connect(self, static_cast<void (QProgressDialog::*)()>(&QProgressDialog::canceled), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QProgressDialog_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QProgressDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProgressDialog_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QProgressDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProgressDialog_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QProgressDialog::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProgressDialog_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QProgressDialog::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProgressDialog_Delete(QProgressDialog* self) {
	delete self;
}

