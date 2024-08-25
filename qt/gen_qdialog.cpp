#include "gen_qdialog.h"
#include "qdialog.h"

#include <QDialog>
#include <QMetaObject>
#include <QSize>
#include <QString>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QDialog_MetaObject(QDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void QDialog_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDialog_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QDialog::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QDialog_Result(QDialog* self) {
	return self->result();
}

void QDialog_SetVisible(QDialog* self, bool visible) {
	self->setVisible(visible);
}

void QDialog_SetExtension(QDialog* self, QWidget* extension) {
	self->setExtension(extension);
}

QWidget* QDialog_Extension(QDialog* self) {
	return self->extension();
}

QSize* QDialog_SizeHint(QDialog* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QDialog_MinimumSizeHint(QDialog* self) {
	QSize ret = self->minimumSizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QDialog_SetSizeGripEnabled(QDialog* self, bool sizeGripEnabled) {
	self->setSizeGripEnabled(sizeGripEnabled);
}

bool QDialog_IsSizeGripEnabled(QDialog* self) {
	return self->isSizeGripEnabled();
}

void QDialog_SetModal(QDialog* self, bool modal) {
	self->setModal(modal);
}

void QDialog_SetResult(QDialog* self, int r) {
	self->setResult(static_cast<int>(r));
}

void QDialog_Finished(QDialog* self, int result) {
	self->finished(static_cast<int>(result));
}

void QDialog_connect_Finished(QDialog* self, void* slot) {
	QDialog::connect(self, static_cast<void (QDialog::*)(int)>(&QDialog::finished), self, [=](int result) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QDialog_Accepted(QDialog* self) {
	self->accepted();
}

void QDialog_connect_Accepted(QDialog* self, void* slot) {
	QDialog::connect(self, static_cast<void (QDialog::*)()>(&QDialog::accepted), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QDialog_Rejected(QDialog* self) {
	self->rejected();
}

void QDialog_connect_Rejected(QDialog* self, void* slot) {
	QDialog::connect(self, static_cast<void (QDialog::*)()>(&QDialog::rejected), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QDialog_Open(QDialog* self) {
	self->open();
}

int QDialog_Exec(QDialog* self) {
	return self->exec();
}

void QDialog_Done(QDialog* self, int param1) {
	self->done(static_cast<int>(param1));
}

void QDialog_Accept(QDialog* self) {
	self->accept();
}

void QDialog_Reject(QDialog* self) {
	self->reject();
}

void QDialog_ShowExtension(QDialog* self, bool param1) {
	self->showExtension(param1);
}

void QDialog_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDialog_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDialog_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QDialog::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDialog_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QDialog::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDialog_Delete(QDialog* self) {
	delete self;
}

