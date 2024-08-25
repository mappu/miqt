#include "gen_qfontdialog.h"
#include "qfontdialog.h"

#include <QFont>
#include <QFontDialog>
#include <QMetaObject>
#include <QString>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QFontDialog* QFontDialog_new() {
	return new QFontDialog();
}

QFontDialog* QFontDialog_new2(QFont* initial) {
	return new QFontDialog(*initial);
}

QFontDialog* QFontDialog_new3(QWidget* parent) {
	return new QFontDialog(parent);
}

QFontDialog* QFontDialog_new4(QFont* initial, QWidget* parent) {
	return new QFontDialog(*initial, parent);
}

QMetaObject* QFontDialog_MetaObject(QFontDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void QFontDialog_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QFontDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFontDialog_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QFontDialog::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFontDialog_SetCurrentFont(QFontDialog* self, QFont* font) {
	self->setCurrentFont(*font);
}

QFont* QFontDialog_CurrentFont(QFontDialog* self) {
	QFont ret = self->currentFont();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(ret));
}

QFont* QFontDialog_SelectedFont(QFontDialog* self) {
	QFont ret = self->selectedFont();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(ret));
}

void QFontDialog_SetVisible(QFontDialog* self, bool visible) {
	self->setVisible(visible);
}

QFont* QFontDialog_GetFont(bool* ok) {
	QFont ret = QFontDialog::getFont(ok);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(ret));
}

void QFontDialog_CurrentFontChanged(QFontDialog* self, QFont* font) {
	self->currentFontChanged(*font);
}

void QFontDialog_connect_CurrentFontChanged(QFontDialog* self, void* slot) {
	QFontDialog::connect(self, static_cast<void (QFontDialog::*)(const QFont&)>(&QFontDialog::currentFontChanged), self, [=](const QFont& font) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QFontDialog_FontSelected(QFontDialog* self, QFont* font) {
	self->fontSelected(*font);
}

void QFontDialog_connect_FontSelected(QFontDialog* self, void* slot) {
	QFontDialog::connect(self, static_cast<void (QFontDialog::*)(const QFont&)>(&QFontDialog::fontSelected), self, [=](const QFont& font) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QFontDialog_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QFontDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFontDialog_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QFontDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFontDialog_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QFontDialog::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFontDialog_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QFontDialog::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QFont* QFontDialog_GetFont2(bool* ok, QWidget* parent) {
	QFont ret = QFontDialog::getFont(ok, parent);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(ret));
}

void QFontDialog_Delete(QFontDialog* self) {
	delete self;
}

