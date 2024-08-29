#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextBlock>
#include <QTextDocument>
#include <QTextList>
#include <QTextListFormat>
#include "qtextlist.h"

#include "gen_qtextlist.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QTextList* QTextList_new(QTextDocument* doc) {
	return new QTextList(doc);
}

QMetaObject* QTextList_MetaObject(QTextList* self) {
	return (QMetaObject*) const_cast<const QTextList*>(self)->metaObject();
}

void QTextList_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QTextList::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextList_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QTextList::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QTextList_Count(QTextList* self) {
	return const_cast<const QTextList*>(self)->count();
}

bool QTextList_IsEmpty(QTextList* self) {
	return const_cast<const QTextList*>(self)->isEmpty();
}

QTextBlock* QTextList_Item(QTextList* self, int i) {
	QTextBlock ret = const_cast<const QTextList*>(self)->item(static_cast<int>(i));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextBlock*>(new QTextBlock(ret));
}

int QTextList_ItemNumber(QTextList* self, QTextBlock* param1) {
	return const_cast<const QTextList*>(self)->itemNumber(*param1);
}

void QTextList_ItemText(QTextList* self, QTextBlock* param1, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTextList*>(self)->itemText(*param1);
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
	QTextListFormat ret = const_cast<const QTextList*>(self)->format();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextListFormat*>(new QTextListFormat(ret));
}

void QTextList_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QTextList::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextList_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTextList::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextList_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QTextList::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextList_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
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

