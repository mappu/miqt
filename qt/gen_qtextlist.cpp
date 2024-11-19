#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextBlock>
#include <QTextBlockGroup>
#include <QTextDocument>
#include <QTextList>
#include <QTextListFormat>
#include <QTextObject>
#include <qtextlist.h>
#include "gen_qtextlist.h"
#include "_cgo_export.h"

class MiqtVirtualQTextList : public virtual QTextList {
public:

	MiqtVirtualQTextList(QTextDocument* doc): QTextList(doc) {};

	virtual ~MiqtVirtualQTextList() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockInserted = 0;

	// Subclass to allow providing a Go implementation
	virtual void blockInserted(const QTextBlock& block) override {
		if (handle__BlockInserted == 0) {
			QTextList::blockInserted(block);
			return;
		}
		
		const QTextBlock& block_ret = block;
		// Cast returned reference into pointer
		QTextBlock* sigval1 = const_cast<QTextBlock*>(&block_ret);

		miqt_exec_callback_QTextList_BlockInserted(this, handle__BlockInserted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_BlockInserted(QTextBlock* block) {

		QTextList::blockInserted(*block);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockRemoved = 0;

	// Subclass to allow providing a Go implementation
	virtual void blockRemoved(const QTextBlock& block) override {
		if (handle__BlockRemoved == 0) {
			QTextList::blockRemoved(block);
			return;
		}
		
		const QTextBlock& block_ret = block;
		// Cast returned reference into pointer
		QTextBlock* sigval1 = const_cast<QTextBlock*>(&block_ret);

		miqt_exec_callback_QTextList_BlockRemoved(this, handle__BlockRemoved, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_BlockRemoved(QTextBlock* block) {

		QTextList::blockRemoved(*block);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockFormatChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void blockFormatChanged(const QTextBlock& block) override {
		if (handle__BlockFormatChanged == 0) {
			QTextList::blockFormatChanged(block);
			return;
		}
		
		const QTextBlock& block_ret = block;
		// Cast returned reference into pointer
		QTextBlock* sigval1 = const_cast<QTextBlock*>(&block_ret);

		miqt_exec_callback_QTextList_BlockFormatChanged(this, handle__BlockFormatChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_BlockFormatChanged(QTextBlock* block) {

		QTextList::blockFormatChanged(*block);

	}

};

void QTextList_new(QTextDocument* doc, QTextList** outptr_QTextList, QTextBlockGroup** outptr_QTextBlockGroup, QTextObject** outptr_QTextObject, QObject** outptr_QObject) {
	MiqtVirtualQTextList* ret = new MiqtVirtualQTextList(doc);
	*outptr_QTextList = ret;
	*outptr_QTextBlockGroup = static_cast<QTextBlockGroup*>(ret);
	*outptr_QTextObject = static_cast<QTextObject*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
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

struct miqt_string QTextList_TrUtf8(const char* s) {
	QString _ret = QTextList::trUtf8(s);
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

bool QTextList_IsEmpty(const QTextList* self) {
	return self->isEmpty();
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

struct miqt_string QTextList_TrUtf82(const char* s, const char* c) {
	QString _ret = QTextList::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextList_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QTextList::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextList_override_virtual_BlockInserted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextList*>( (QTextList*)(self) )->handle__BlockInserted = slot;
}

void QTextList_virtualbase_BlockInserted(void* self, QTextBlock* block) {
	( (MiqtVirtualQTextList*)(self) )->virtualbase_BlockInserted(block);
}

void QTextList_override_virtual_BlockRemoved(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextList*>( (QTextList*)(self) )->handle__BlockRemoved = slot;
}

void QTextList_virtualbase_BlockRemoved(void* self, QTextBlock* block) {
	( (MiqtVirtualQTextList*)(self) )->virtualbase_BlockRemoved(block);
}

void QTextList_override_virtual_BlockFormatChanged(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextList*>( (QTextList*)(self) )->handle__BlockFormatChanged = slot;
}

void QTextList_virtualbase_BlockFormatChanged(void* self, QTextBlock* block) {
	( (MiqtVirtualQTextList*)(self) )->virtualbase_BlockFormatChanged(block);
}

void QTextList_Delete(QTextList* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQTextList*>( self );
	} else {
		delete self;
	}
}

