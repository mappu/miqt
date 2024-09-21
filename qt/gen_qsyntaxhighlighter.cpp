#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSyntaxHighlighter>
#include <QTextBlock>
#include <QTextDocument>
#include "qsyntaxhighlighter.h"
#include "gen_qsyntaxhighlighter.h"
#include "_cgo_export.h"

QMetaObject* QSyntaxHighlighter_MetaObject(const QSyntaxHighlighter* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSyntaxHighlighter_Metacast(QSyntaxHighlighter* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QSyntaxHighlighter_Tr(const char* s) {
	QString _ret = QSyntaxHighlighter::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSyntaxHighlighter_TrUtf8(const char* s) {
	QString _ret = QSyntaxHighlighter::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QSyntaxHighlighter_SetDocument(QSyntaxHighlighter* self, QTextDocument* doc) {
	self->setDocument(doc);
}

QTextDocument* QSyntaxHighlighter_Document(const QSyntaxHighlighter* self) {
	return self->document();
}

void QSyntaxHighlighter_Rehighlight(QSyntaxHighlighter* self) {
	self->rehighlight();
}

void QSyntaxHighlighter_RehighlightBlock(QSyntaxHighlighter* self, QTextBlock* block) {
	self->rehighlightBlock(*block);
}

struct miqt_string* QSyntaxHighlighter_Tr2(const char* s, const char* c) {
	QString _ret = QSyntaxHighlighter::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSyntaxHighlighter_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSyntaxHighlighter::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSyntaxHighlighter_TrUtf82(const char* s, const char* c) {
	QString _ret = QSyntaxHighlighter::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSyntaxHighlighter_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QSyntaxHighlighter::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QSyntaxHighlighter_Delete(QSyntaxHighlighter* self) {
	delete self;
}

