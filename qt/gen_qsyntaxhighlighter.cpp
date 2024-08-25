#include "gen_qsyntaxhighlighter.h"
#include "qsyntaxhighlighter.h"

#include <QMetaObject>
#include <QString>
#include <QSyntaxHighlighter>
#include <QTextBlock>
#include <QTextDocument>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QSyntaxHighlighter_MetaObject(QSyntaxHighlighter* self) {
	return (QMetaObject*) self->metaObject();
}

void QSyntaxHighlighter_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QSyntaxHighlighter::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSyntaxHighlighter_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QSyntaxHighlighter::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSyntaxHighlighter_SetDocument(QSyntaxHighlighter* self, QTextDocument* doc) {
	self->setDocument(doc);
}

QTextDocument* QSyntaxHighlighter_Document(QSyntaxHighlighter* self) {
	return self->document();
}

void QSyntaxHighlighter_Rehighlight(QSyntaxHighlighter* self) {
	self->rehighlight();
}

void QSyntaxHighlighter_RehighlightBlock(QSyntaxHighlighter* self, QTextBlock* block) {
	self->rehighlightBlock(*block);
}

void QSyntaxHighlighter_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QSyntaxHighlighter::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSyntaxHighlighter_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSyntaxHighlighter::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSyntaxHighlighter_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QSyntaxHighlighter::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSyntaxHighlighter_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSyntaxHighlighter::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSyntaxHighlighter_Delete(QSyntaxHighlighter* self) {
	delete self;
}
