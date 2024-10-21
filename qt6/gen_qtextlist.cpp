#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextBlock>
#include <QTextDocument>
#include <QTextList>
#include <QTextListFormat>
#include <qtextlist.h>
#include "gen_qtextlist.h"
#include "_cgo_export.h"

QTextList* QTextList_new(QTextDocument* doc) {
	return new QTextList(doc);
}

QMetaObject* QTextList_MetaObject(const QTextList* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTextList_Metacast(QTextList* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTextList_Tr(const char* s) {
	QString _ret = QTextList::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QTextList_Count(const QTextList* self) {
	return self->count();
}

QTextBlock* QTextList_Item(const QTextList* self, int i) {
	return new QTextBlock(self->item(static_cast<int>(i)));
}

int QTextList_ItemNumber(const QTextList* self, QTextBlock* param1) {
	return self->itemNumber(*param1);
}

struct miqt_string QTextList_ItemText(const QTextList* self, QTextBlock* param1) {
	QString _ret = self->itemText(*param1);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
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

QTextListFormat* QTextList_Format(const QTextList* self) {
	return new QTextListFormat(self->format());
}

struct miqt_string QTextList_Tr2(const char* s, const char* c) {
	QString _ret = QTextList::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextList_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTextList::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextList_Delete(QTextList* self) {
	delete self;
}

