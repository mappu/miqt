#include <QFont>
#include <QFontComboBox>
#include <QMetaObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qfontcombobox.h"

#include "gen_qfontcombobox.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QFontComboBox* QFontComboBox_new() {
	return new QFontComboBox();
}

QFontComboBox* QFontComboBox_new2(QWidget* parent) {
	return new QFontComboBox(parent);
}

QMetaObject* QFontComboBox_MetaObject(QFontComboBox* self) {
	return (QMetaObject*) const_cast<const QFontComboBox*>(self)->metaObject();
}

void QFontComboBox_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QFontComboBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFontComboBox_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QFontComboBox::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFontComboBox_SetWritingSystem(QFontComboBox* self, uintptr_t writingSystem) {
	self->setWritingSystem(static_cast<QFontDatabase::WritingSystem>(writingSystem));
}

uintptr_t QFontComboBox_WritingSystem(QFontComboBox* self) {
	QFontDatabase::WritingSystem ret = const_cast<const QFontComboBox*>(self)->writingSystem();
	return static_cast<uintptr_t>(ret);
}

void QFontComboBox_SetFontFilters(QFontComboBox* self, int filters) {
	self->setFontFilters(static_cast<QFontComboBox::FontFilters>(filters));
}

int QFontComboBox_FontFilters(QFontComboBox* self) {
	QFontComboBox::FontFilters ret = const_cast<const QFontComboBox*>(self)->fontFilters();
	return static_cast<int>(ret);
}

QFont* QFontComboBox_CurrentFont(QFontComboBox* self) {
	QFont ret = const_cast<const QFontComboBox*>(self)->currentFont();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(ret));
}

QSize* QFontComboBox_SizeHint(QFontComboBox* self) {
	QSize ret = const_cast<const QFontComboBox*>(self)->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QFontComboBox_SetCurrentFont(QFontComboBox* self, QFont* f) {
	self->setCurrentFont(*f);
}

void QFontComboBox_CurrentFontChanged(QFontComboBox* self, QFont* f) {
	self->currentFontChanged(*f);
}

void QFontComboBox_connect_CurrentFontChanged(QFontComboBox* self, void* slot) {
	QFontComboBox::connect(self, static_cast<void (QFontComboBox::*)(const QFont&)>(&QFontComboBox::currentFontChanged), self, [=](const QFont& f) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QFontComboBox_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QFontComboBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFontComboBox_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QFontComboBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFontComboBox_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QFontComboBox::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFontComboBox_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QFontComboBox::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFontComboBox_Delete(QFontComboBox* self) {
	delete self;
}

