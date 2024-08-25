#include "gen_qtextdocumentfragment.h"
#include "qtextdocumentfragment.h"

#include <QByteArray>
#include <QString>
#include <QTextCursor>
#include <QTextDocument>
#include <QTextDocumentFragment>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QTextDocumentFragment* QTextDocumentFragment_new() {
	return new QTextDocumentFragment();
}

QTextDocumentFragment* QTextDocumentFragment_new2(QTextDocument* document) {
	return new QTextDocumentFragment(document);
}

QTextDocumentFragment* QTextDocumentFragment_new3(QTextCursor* rangeVal) {
	return new QTextDocumentFragment(*rangeVal);
}

QTextDocumentFragment* QTextDocumentFragment_new4(QTextDocumentFragment* rhs) {
	return new QTextDocumentFragment(*rhs);
}

void QTextDocumentFragment_OperatorAssign(QTextDocumentFragment* self, QTextDocumentFragment* rhs) {
	self->operator=(*rhs);
}

bool QTextDocumentFragment_IsEmpty(QTextDocumentFragment* self) {
	return self->isEmpty();
}

void QTextDocumentFragment_ToPlainText(QTextDocumentFragment* self, char** _out, int* _out_Strlen) {
	QString ret = self->toPlainText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextDocumentFragment_ToHtml(QTextDocumentFragment* self, char** _out, int* _out_Strlen) {
	QString ret = self->toHtml();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QTextDocumentFragment* QTextDocumentFragment_FromPlainText(const char* plainText, size_t plainText_Strlen) {
	QString plainText_QString = QString::fromUtf8(plainText, plainText_Strlen);
	QTextDocumentFragment ret = QTextDocumentFragment::fromPlainText(plainText_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextDocumentFragment*>(new QTextDocumentFragment(ret));
}

QTextDocumentFragment* QTextDocumentFragment_FromHtml(const char* html, size_t html_Strlen) {
	QString html_QString = QString::fromUtf8(html, html_Strlen);
	QTextDocumentFragment ret = QTextDocumentFragment::fromHtml(html_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextDocumentFragment*>(new QTextDocumentFragment(ret));
}

QTextDocumentFragment* QTextDocumentFragment_FromHtml2(const char* html, size_t html_Strlen, QTextDocument* resourceProvider) {
	QString html_QString = QString::fromUtf8(html, html_Strlen);
	QTextDocumentFragment ret = QTextDocumentFragment::fromHtml(html_QString, resourceProvider);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextDocumentFragment*>(new QTextDocumentFragment(ret));
}

void QTextDocumentFragment_ToHtml1(QTextDocumentFragment* self, QByteArray* encoding, char** _out, int* _out_Strlen) {
	QString ret = self->toHtml(*encoding);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextDocumentFragment_Delete(QTextDocumentFragment* self) {
	delete self;
}

