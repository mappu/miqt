#include "gen_qkeysequenceedit.h"
#include "qkeysequenceedit.h"

#include <QKeySequence>
#include <QKeySequenceEdit>
#include <QMetaObject>
#include <QString>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QKeySequenceEdit* QKeySequenceEdit_new() {
	return new QKeySequenceEdit();
}

QKeySequenceEdit* QKeySequenceEdit_new2(QKeySequence* keySequence) {
	return new QKeySequenceEdit(*keySequence);
}

QKeySequenceEdit* QKeySequenceEdit_new3(QWidget* parent) {
	return new QKeySequenceEdit(parent);
}

QKeySequenceEdit* QKeySequenceEdit_new4(QKeySequence* keySequence, QWidget* parent) {
	return new QKeySequenceEdit(*keySequence, parent);
}

QMetaObject* QKeySequenceEdit_MetaObject(QKeySequenceEdit* self) {
	return (QMetaObject*) self->metaObject();
}

void QKeySequenceEdit_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QKeySequenceEdit::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QKeySequenceEdit_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QKeySequenceEdit::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QKeySequence* QKeySequenceEdit_KeySequence(QKeySequenceEdit* self) {
	QKeySequence ret = self->keySequence();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QKeySequence*>(new QKeySequence(ret));
}

void QKeySequenceEdit_SetKeySequence(QKeySequenceEdit* self, QKeySequence* keySequence) {
	self->setKeySequence(*keySequence);
}

void QKeySequenceEdit_Clear(QKeySequenceEdit* self) {
	self->clear();
}

void QKeySequenceEdit_EditingFinished(QKeySequenceEdit* self) {
	self->editingFinished();
}

void QKeySequenceEdit_connect_EditingFinished(QKeySequenceEdit* self, void* slot) {
	QKeySequenceEdit::connect(self, static_cast<void (QKeySequenceEdit::*)()>(&QKeySequenceEdit::editingFinished), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QKeySequenceEdit_KeySequenceChanged(QKeySequenceEdit* self, QKeySequence* keySequence) {
	self->keySequenceChanged(*keySequence);
}

void QKeySequenceEdit_connect_KeySequenceChanged(QKeySequenceEdit* self, void* slot) {
	QKeySequenceEdit::connect(self, static_cast<void (QKeySequenceEdit::*)(const QKeySequence&)>(&QKeySequenceEdit::keySequenceChanged), self, [=](const QKeySequence& keySequence) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QKeySequenceEdit_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QKeySequenceEdit::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QKeySequenceEdit_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QKeySequenceEdit::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QKeySequenceEdit_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QKeySequenceEdit::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QKeySequenceEdit_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QKeySequenceEdit::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QKeySequenceEdit_Delete(QKeySequenceEdit* self) {
	delete self;
}

