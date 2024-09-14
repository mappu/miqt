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
#include "_cgo_export.h"

QTextList* QTextList_new(QTextDocument* doc) {
	return new QTextList(doc);
}

QMetaObject* QTextList_MetaObject(const QTextList* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QTextList_Tr(const char* s) {
	QString _ret = QTextList::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTextList_TrUtf8(const char* s) {
	QString _ret = QTextList::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

int QTextList_Count(const QTextList* self) {
	return self->count();
}

bool QTextList_IsEmpty(const QTextList* self) {
	return self->isEmpty();
}

QTextBlock* QTextList_Item(const QTextList* self, int i) {
	QTextBlock _ret = self->item(static_cast<int>(i));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextBlock*>(new QTextBlock(_ret));
}

int QTextList_ItemNumber(const QTextList* self, QTextBlock* param1) {
	return self->itemNumber(*param1);
}

struct miqt_string* QTextList_ItemText(const QTextList* self, QTextBlock* param1) {
	QString _ret = self->itemText(*param1);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
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
	QTextListFormat _ret = self->format();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextListFormat*>(new QTextListFormat(_ret));
}

struct miqt_string* QTextList_Tr2(const char* s, const char* c) {
	QString _ret = QTextList::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTextList_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTextList::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTextList_TrUtf82(const char* s, const char* c) {
	QString _ret = QTextList::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTextList_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QTextList::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QTextList_Delete(QTextList* self) {
	delete self;
}

