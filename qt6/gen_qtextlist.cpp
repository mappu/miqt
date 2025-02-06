#include <QChildEvent>
#include <QEvent>
#include <QList>
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

void miqt_exec_callback_QTextList_blockInserted(QTextList*, intptr_t, QTextBlock*);
void miqt_exec_callback_QTextList_blockRemoved(QTextList*, intptr_t, QTextBlock*);
void miqt_exec_callback_QTextList_blockFormatChanged(QTextList*, intptr_t, QTextBlock*);
bool miqt_exec_callback_QTextList_event(QTextList*, intptr_t, QEvent*);
bool miqt_exec_callback_QTextList_eventFilter(QTextList*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QTextList_timerEvent(QTextList*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QTextList_childEvent(QTextList*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTextList_customEvent(QTextList*, intptr_t, QEvent*);
void miqt_exec_callback_QTextList_connectNotify(QTextList*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTextList_disconnectNotify(QTextList*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQTextList final : public QTextList {
public:

	MiqtVirtualQTextList(QTextDocument* doc): QTextList(doc) {};

	virtual ~MiqtVirtualQTextList() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockInserted = 0;

	// Subclass to allow providing a Go implementation
	virtual void blockInserted(const QTextBlock& block) override {
		if (handle__blockInserted == 0) {
			QTextList::blockInserted(block);
			return;
		}
		
		const QTextBlock& block_ret = block;
		// Cast returned reference into pointer
		QTextBlock* sigval1 = const_cast<QTextBlock*>(&block_ret);

		miqt_exec_callback_QTextList_blockInserted(this, handle__blockInserted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_blockInserted(QTextBlock* block) {

		QTextList::blockInserted(*block);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockRemoved = 0;

	// Subclass to allow providing a Go implementation
	virtual void blockRemoved(const QTextBlock& block) override {
		if (handle__blockRemoved == 0) {
			QTextList::blockRemoved(block);
			return;
		}
		
		const QTextBlock& block_ret = block;
		// Cast returned reference into pointer
		QTextBlock* sigval1 = const_cast<QTextBlock*>(&block_ret);

		miqt_exec_callback_QTextList_blockRemoved(this, handle__blockRemoved, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_blockRemoved(QTextBlock* block) {

		QTextList::blockRemoved(*block);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockFormatChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void blockFormatChanged(const QTextBlock& block) override {
		if (handle__blockFormatChanged == 0) {
			QTextList::blockFormatChanged(block);
			return;
		}
		
		const QTextBlock& block_ret = block;
		// Cast returned reference into pointer
		QTextBlock* sigval1 = const_cast<QTextBlock*>(&block_ret);

		miqt_exec_callback_QTextList_blockFormatChanged(this, handle__blockFormatChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_blockFormatChanged(QTextBlock* block) {

		QTextList::blockFormatChanged(*block);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QTextList::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QTextList_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QTextList::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QTextList::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QTextList_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QTextList::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QTextList::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QTextList_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QTextList::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QTextList::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QTextList_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QTextList::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QTextList::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTextList_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QTextList::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QTextList::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTextList_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QTextList::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QTextList::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTextList_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QTextList::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend struct miqt_array /* of QTextBlock* */  QTextList_protectedbase_blockList(bool* _dynamic_cast_ok, const void* self);
	friend QObject* QTextList_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QTextList_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QTextList_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QTextList_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QTextList* QTextList_new(QTextDocument* doc) {
	return new MiqtVirtualQTextList(doc);
}

void QTextList_virtbase(QTextList* src, QTextBlockGroup** outptr_QTextBlockGroup) {
	*outptr_QTextBlockGroup = static_cast<QTextBlockGroup*>(src);
}

QMetaObject* QTextList_metaObject(const QTextList* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTextList_metacast(QTextList* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTextList_tr(const char* s) {
	QString _ret = QTextList::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QTextList_count(const QTextList* self) {
	return self->count();
}

QTextBlock* QTextList_item(const QTextList* self, int i) {
	return new QTextBlock(self->item(static_cast<int>(i)));
}

int QTextList_itemNumber(const QTextList* self, QTextBlock* param1) {
	return self->itemNumber(*param1);
}

struct miqt_string QTextList_itemText(const QTextList* self, QTextBlock* param1) {
	QString _ret = self->itemText(*param1);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextList_removeItem(QTextList* self, int i) {
	self->removeItem(static_cast<int>(i));
}

void QTextList_remove(QTextList* self, QTextBlock* param1) {
	self->remove(*param1);
}

void QTextList_add(QTextList* self, QTextBlock* block) {
	self->add(*block);
}

void QTextList_setFormat(QTextList* self, QTextListFormat* format) {
	self->setFormat(*format);
}

QTextListFormat* QTextList_format(const QTextList* self) {
	return new QTextListFormat(self->format());
}

struct miqt_string QTextList_tr2(const char* s, const char* c) {
	QString _ret = QTextList::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextList_tr3(const char* s, const char* c, int n) {
	QString _ret = QTextList::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTextList_override_virtual_blockInserted(void* self, intptr_t slot) {
	MiqtVirtualQTextList* self_cast = dynamic_cast<MiqtVirtualQTextList*>( (QTextList*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockInserted = slot;
	return true;
}

void QTextList_virtualbase_blockInserted(void* self, QTextBlock* block) {
	( (MiqtVirtualQTextList*)(self) )->virtualbase_blockInserted(block);
}

bool QTextList_override_virtual_blockRemoved(void* self, intptr_t slot) {
	MiqtVirtualQTextList* self_cast = dynamic_cast<MiqtVirtualQTextList*>( (QTextList*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockRemoved = slot;
	return true;
}

void QTextList_virtualbase_blockRemoved(void* self, QTextBlock* block) {
	( (MiqtVirtualQTextList*)(self) )->virtualbase_blockRemoved(block);
}

bool QTextList_override_virtual_blockFormatChanged(void* self, intptr_t slot) {
	MiqtVirtualQTextList* self_cast = dynamic_cast<MiqtVirtualQTextList*>( (QTextList*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockFormatChanged = slot;
	return true;
}

void QTextList_virtualbase_blockFormatChanged(void* self, QTextBlock* block) {
	( (MiqtVirtualQTextList*)(self) )->virtualbase_blockFormatChanged(block);
}

bool QTextList_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQTextList* self_cast = dynamic_cast<MiqtVirtualQTextList*>( (QTextList*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QTextList_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQTextList*)(self) )->virtualbase_event(event);
}

bool QTextList_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTextList* self_cast = dynamic_cast<MiqtVirtualQTextList*>( (QTextList*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QTextList_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQTextList*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QTextList_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextList* self_cast = dynamic_cast<MiqtVirtualQTextList*>( (QTextList*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QTextList_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQTextList*)(self) )->virtualbase_timerEvent(event);
}

bool QTextList_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextList* self_cast = dynamic_cast<MiqtVirtualQTextList*>( (QTextList*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QTextList_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQTextList*)(self) )->virtualbase_childEvent(event);
}

bool QTextList_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextList* self_cast = dynamic_cast<MiqtVirtualQTextList*>( (QTextList*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QTextList_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTextList*)(self) )->virtualbase_customEvent(event);
}

bool QTextList_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTextList* self_cast = dynamic_cast<MiqtVirtualQTextList*>( (QTextList*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QTextList_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTextList*)(self) )->virtualbase_connectNotify(signal);
}

bool QTextList_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTextList* self_cast = dynamic_cast<MiqtVirtualQTextList*>( (QTextList*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QTextList_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTextList*)(self) )->virtualbase_disconnectNotify(signal);
}

struct miqt_array /* of QTextBlock* */  QTextList_protectedbase_blockList(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTextList* self_cast = dynamic_cast<MiqtVirtualQTextList*>( (QTextList*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (struct miqt_array){};
	}
	
	*_dynamic_cast_ok = true;
	
	QList<QTextBlock> _ret = self_cast->blockList();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTextBlock** _arr = static_cast<QTextBlock**>(malloc(sizeof(QTextBlock*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QTextBlock(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;

}

QObject* QTextList_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTextList* self_cast = dynamic_cast<MiqtVirtualQTextList*>( (QTextList*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QTextList_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTextList* self_cast = dynamic_cast<MiqtVirtualQTextList*>( (QTextList*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QTextList_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQTextList* self_cast = dynamic_cast<MiqtVirtualQTextList*>( (QTextList*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QTextList_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQTextList* self_cast = dynamic_cast<MiqtVirtualQTextList*>( (QTextList*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QTextList_delete(QTextList* self) {
	delete self;
}

