#include "gen_qtextlist.h"
#include "qtextlist.h"

#include <QMetaObject>
#include <QString>
#include <QTextBlock>
#include <QTextDocument>
#include <QTextList>
#include <QTextListFormat>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QTextList* QTextList_new(QTextDocument* doc) {
	return new QTextList(doc);
}

QMetaObject* QTextList_MetaObject(QTextList* self) {
	return (QMetaObject*) self->metaObject();
}

void QTextList_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QTextList::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextList_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QTextList::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QTextList_Count(QTextList* self) {
	return self->count();
}

bool QTextList_IsEmpty(QTextList* self) {
	return self->isEmpty();
}

QTextBlock* QTextList_Item(QTextList* self, int i) {
	QTextBlock ret = self->item(static_cast<int>(i));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextBlock*>(new QTextBlock(ret));
}

int QTextList_ItemNumber(QTextList* self, QTextBlock* param1) {
	return self->itemNumber(*param1);
}

void QTextList_ItemText(QTextList* self, QTextBlock* param1, char** _out, int* _out_Strlen) {
	QString ret = self->itemText(*param1);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextList_RemoveItem(QTextList* self, int i) {
	self->removeItem(static_cast<int>(i));
}

void QTextList_Remove(QTextList* self, QTextBlock* param1) {
	self->remove(*param1);
}

void QTextList_Add(QTextList* self, QTextBlock* block) {
	self->add(*block);
}

void QTextList_SetFormat(QTextList* self, QTextListFormat* format) {
	self->setFormat(*format);
}

QTextListFormat* QTextList_Format(QTextList* self) {
	QTextListFormat ret = self->format();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextListFormat*>(new QTextListFormat(ret));
}

void QTextList_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QTextList::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextList_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTextList::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextList_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QTextList::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextList_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTextList::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextList_Delete(QTextList* self) {
	delete self;
}

