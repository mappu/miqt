#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
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
#include <QTimerEvent>
#include <qtextlist.h>
#include "gen_qtextlist.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QTextList_BlockInserted(QTextList*, intptr_t, QTextBlock*);
void miqt_exec_callback_QTextList_BlockRemoved(QTextList*, intptr_t, QTextBlock*);
void miqt_exec_callback_QTextList_BlockFormatChanged(QTextList*, intptr_t, QTextBlock*);
bool miqt_exec_callback_QTextList_Event(QTextList*, intptr_t, QEvent*);
bool miqt_exec_callback_QTextList_EventFilter(QTextList*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QTextList_TimerEvent(QTextList*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QTextList_ChildEvent(QTextList*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTextList_CustomEvent(QTextList*, intptr_t, QEvent*);
void miqt_exec_callback_QTextList_ConnectNotify(QTextList*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTextList_DisconnectNotify(QTextList*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQTextList final : public QTextList {
public:

	MiqtVirtualQTextList(QTextDocument* doc): QTextList(doc) {};

	virtual ~MiqtVirtualQTextList() override = default;

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

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QTextList::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QTextList_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QTextList::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QTextList::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QTextList_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QTextList::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QTextList::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QTextList_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QTextList::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QTextList::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QTextList_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QTextList::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QTextList::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTextList_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QTextList::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QTextList::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTextList_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QTextList::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QTextList::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTextList_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QTextList::disconnectNotify(*signal);

	}

};

QTextList* QTextList_new(QTextDocument* doc) {
	return new MiqtVirtualQTextList(doc);
}

void QTextList_virtbase(QTextList* src, QTextBlockGroup** outptr_QTextBlockGroup) {
	*outptr_QTextBlockGroup = static_cast<QTextBlockGroup*>(src);
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

bool QTextList_override_virtual_BlockInserted(void* self, intptr_t slot) {
	MiqtVirtualQTextList* self_cast = dynamic_cast<MiqtVirtualQTextList*>( (QTextList*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockInserted = slot;
	return true;
}

void QTextList_virtualbase_BlockInserted(void* self, QTextBlock* block) {
	( (MiqtVirtualQTextList*)(self) )->virtualbase_BlockInserted(block);
}

bool QTextList_override_virtual_BlockRemoved(void* self, intptr_t slot) {
	MiqtVirtualQTextList* self_cast = dynamic_cast<MiqtVirtualQTextList*>( (QTextList*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockRemoved = slot;
	return true;
}

void QTextList_virtualbase_BlockRemoved(void* self, QTextBlock* block) {
	( (MiqtVirtualQTextList*)(self) )->virtualbase_BlockRemoved(block);
}

bool QTextList_override_virtual_BlockFormatChanged(void* self, intptr_t slot) {
	MiqtVirtualQTextList* self_cast = dynamic_cast<MiqtVirtualQTextList*>( (QTextList*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockFormatChanged = slot;
	return true;
}

void QTextList_virtualbase_BlockFormatChanged(void* self, QTextBlock* block) {
	( (MiqtVirtualQTextList*)(self) )->virtualbase_BlockFormatChanged(block);
}

bool QTextList_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQTextList* self_cast = dynamic_cast<MiqtVirtualQTextList*>( (QTextList*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QTextList_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQTextList*)(self) )->virtualbase_Event(event);
}

bool QTextList_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTextList* self_cast = dynamic_cast<MiqtVirtualQTextList*>( (QTextList*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QTextList_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQTextList*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QTextList_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextList* self_cast = dynamic_cast<MiqtVirtualQTextList*>( (QTextList*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QTextList_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQTextList*)(self) )->virtualbase_TimerEvent(event);
}

bool QTextList_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextList* self_cast = dynamic_cast<MiqtVirtualQTextList*>( (QTextList*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QTextList_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQTextList*)(self) )->virtualbase_ChildEvent(event);
}

bool QTextList_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextList* self_cast = dynamic_cast<MiqtVirtualQTextList*>( (QTextList*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QTextList_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTextList*)(self) )->virtualbase_CustomEvent(event);
}

bool QTextList_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTextList* self_cast = dynamic_cast<MiqtVirtualQTextList*>( (QTextList*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QTextList_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTextList*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QTextList_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTextList* self_cast = dynamic_cast<MiqtVirtualQTextList*>( (QTextList*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QTextList_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTextList*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QTextList_Delete(QTextList* self) {
	delete self;
}

