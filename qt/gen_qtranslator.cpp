#include <QLocale>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTranslator>
#include "qtranslator.h"

#include "gen_qtranslator.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QTranslator* QTranslator_new() {
	return new QTranslator();
}

QTranslator* QTranslator_new2(QObject* parent) {
	return new QTranslator(parent);
}

QMetaObject* QTranslator_MetaObject(QTranslator* self) {
	return (QMetaObject*) const_cast<const QTranslator*>(self)->metaObject();
}

void QTranslator_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QTranslator::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTranslator_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QTranslator::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTranslator_Translate(QTranslator* self, const char* context, const char* sourceText, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTranslator*>(self)->translate(context, sourceText);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QTranslator_IsEmpty(QTranslator* self) {
	return const_cast<const QTranslator*>(self)->isEmpty();
}

void QTranslator_Language(QTranslator* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTranslator*>(self)->language();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTranslator_FilePath(QTranslator* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTranslator*>(self)->filePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QTranslator_Load(QTranslator* self, const char* filename, size_t filename_Strlen) {
	QString filename_QString = QString::fromUtf8(filename, filename_Strlen);
	return self->load(filename_QString);
}

bool QTranslator_Load2(QTranslator* self, QLocale* locale, const char* filename, size_t filename_Strlen) {
	QString filename_QString = QString::fromUtf8(filename, filename_Strlen);
	return self->load(*locale, filename_QString);
}

bool QTranslator_Load3(QTranslator* self, const unsigned char* data, int lenVal) {
	return self->load(static_cast<const uchar*>(data), static_cast<int>(lenVal));
}

void QTranslator_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QTranslator::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTranslator_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTranslator::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTranslator_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QTranslator::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTranslator_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTranslator::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTranslator_Translate3(QTranslator* self, const char* context, const char* sourceText, const char* disambiguation, char** _out, int* _out_Strlen) {
	QString ret = self->translate(context, sourceText, disambiguation);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTranslator_Translate4(QTranslator* self, const char* context, const char* sourceText, const char* disambiguation, int n, char** _out, int* _out_Strlen) {
	QString ret = self->translate(context, sourceText, disambiguation, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QTranslator_Load22(QTranslator* self, const char* filename, size_t filename_Strlen, const char* directory, size_t directory_Strlen) {
	QString filename_QString = QString::fromUtf8(filename, filename_Strlen);
	QString directory_QString = QString::fromUtf8(directory, directory_Strlen);
	return self->load(filename_QString, directory_QString);
}

bool QTranslator_Load32(QTranslator* self, const char* filename, size_t filename_Strlen, const char* directory, size_t directory_Strlen, const char* search_delimiters, size_t search_delimiters_Strlen) {
	QString filename_QString = QString::fromUtf8(filename, filename_Strlen);
	QString directory_QString = QString::fromUtf8(directory, directory_Strlen);
	QString search_delimiters_QString = QString::fromUtf8(search_delimiters, search_delimiters_Strlen);
	return self->load(filename_QString, directory_QString, search_delimiters_QString);
}

bool QTranslator_Load4(QTranslator* self, const char* filename, size_t filename_Strlen, const char* directory, size_t directory_Strlen, const char* search_delimiters, size_t search_delimiters_Strlen, const char* suffix, size_t suffix_Strlen) {
	QString filename_QString = QString::fromUtf8(filename, filename_Strlen);
	QString directory_QString = QString::fromUtf8(directory, directory_Strlen);
	QString search_delimiters_QString = QString::fromUtf8(search_delimiters, search_delimiters_Strlen);
	QString suffix_QString = QString::fromUtf8(suffix, suffix_Strlen);
	return self->load(filename_QString, directory_QString, search_delimiters_QString, suffix_QString);
}

bool QTranslator_Load33(QTranslator* self, QLocale* locale, const char* filename, size_t filename_Strlen, const char* prefix, size_t prefix_Strlen) {
	QString filename_QString = QString::fromUtf8(filename, filename_Strlen);
	QString prefix_QString = QString::fromUtf8(prefix, prefix_Strlen);
	return self->load(*locale, filename_QString, prefix_QString);
}

bool QTranslator_Load42(QTranslator* self, QLocale* locale, const char* filename, size_t filename_Strlen, const char* prefix, size_t prefix_Strlen, const char* directory, size_t directory_Strlen) {
	QString filename_QString = QString::fromUtf8(filename, filename_Strlen);
	QString prefix_QString = QString::fromUtf8(prefix, prefix_Strlen);
	QString directory_QString = QString::fromUtf8(directory, directory_Strlen);
	return self->load(*locale, filename_QString, prefix_QString, directory_QString);
}

bool QTranslator_Load5(QTranslator* self, QLocale* locale, const char* filename, size_t filename_Strlen, const char* prefix, size_t prefix_Strlen, const char* directory, size_t directory_Strlen, const char* suffix, size_t suffix_Strlen) {
	QString filename_QString = QString::fromUtf8(filename, filename_Strlen);
	QString prefix_QString = QString::fromUtf8(prefix, prefix_Strlen);
	QString directory_QString = QString::fromUtf8(directory, directory_Strlen);
	QString suffix_QString = QString::fromUtf8(suffix, suffix_Strlen);
	return self->load(*locale, filename_QString, prefix_QString, directory_QString, suffix_QString);
}

bool QTranslator_Load34(QTranslator* self, const unsigned char* data, int lenVal, const char* directory, size_t directory_Strlen) {
	QString directory_QString = QString::fromUtf8(directory, directory_Strlen);
	return self->load(static_cast<const uchar*>(data), static_cast<int>(lenVal), directory_QString);
}

void QTranslator_Delete(QTranslator* self) {
	delete self;
}

