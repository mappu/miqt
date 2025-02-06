#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QFont>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSyntaxHighlighter>
#include <QTextBlock>
#include <QTextBlockUserData>
#include <QTextCharFormat>
#include <QTextDocument>
#include <QTimerEvent>
#include <qsyntaxhighlighter.h>
#include "gen_qsyntaxhighlighter.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QSyntaxHighlighter_highlightBlock(QSyntaxHighlighter*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QSyntaxHighlighter_event(QSyntaxHighlighter*, intptr_t, QEvent*);
bool miqt_exec_callback_QSyntaxHighlighter_eventFilter(QSyntaxHighlighter*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSyntaxHighlighter_timerEvent(QSyntaxHighlighter*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSyntaxHighlighter_childEvent(QSyntaxHighlighter*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSyntaxHighlighter_customEvent(QSyntaxHighlighter*, intptr_t, QEvent*);
void miqt_exec_callback_QSyntaxHighlighter_connectNotify(QSyntaxHighlighter*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSyntaxHighlighter_disconnectNotify(QSyntaxHighlighter*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSyntaxHighlighter final : public QSyntaxHighlighter {
public:

	MiqtVirtualQSyntaxHighlighter(QObject* parent): QSyntaxHighlighter(parent) {};
	MiqtVirtualQSyntaxHighlighter(QTextDocument* parent): QSyntaxHighlighter(parent) {};

	virtual ~MiqtVirtualQSyntaxHighlighter() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__highlightBlock = 0;

	// Subclass to allow providing a Go implementation
	virtual void highlightBlock(const QString& text) override {
		if (handle__highlightBlock == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;

		miqt_exec_callback_QSyntaxHighlighter_highlightBlock(this, handle__highlightBlock, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QSyntaxHighlighter::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSyntaxHighlighter_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QSyntaxHighlighter::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QSyntaxHighlighter::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSyntaxHighlighter_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QSyntaxHighlighter::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QSyntaxHighlighter::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSyntaxHighlighter_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QSyntaxHighlighter::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QSyntaxHighlighter::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSyntaxHighlighter_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QSyntaxHighlighter::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QSyntaxHighlighter::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSyntaxHighlighter_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QSyntaxHighlighter::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QSyntaxHighlighter::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSyntaxHighlighter_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QSyntaxHighlighter::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QSyntaxHighlighter::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSyntaxHighlighter_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QSyntaxHighlighter::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QSyntaxHighlighter_protectedbase_setFormat(bool* _dynamic_cast_ok, void* self, int start, int count, QTextCharFormat* format);
	friend void QSyntaxHighlighter_protectedbase_setFormat2(bool* _dynamic_cast_ok, void* self, int start, int count, QColor* color);
	friend void QSyntaxHighlighter_protectedbase_setFormat3(bool* _dynamic_cast_ok, void* self, int start, int count, QFont* font);
	friend QTextCharFormat* QSyntaxHighlighter_protectedbase_format(bool* _dynamic_cast_ok, const void* self, int pos);
	friend int QSyntaxHighlighter_protectedbase_previousBlockState(bool* _dynamic_cast_ok, const void* self);
	friend int QSyntaxHighlighter_protectedbase_currentBlockState(bool* _dynamic_cast_ok, const void* self);
	friend void QSyntaxHighlighter_protectedbase_setCurrentBlockState(bool* _dynamic_cast_ok, void* self, int newState);
	friend void QSyntaxHighlighter_protectedbase_setCurrentBlockUserData(bool* _dynamic_cast_ok, void* self, QTextBlockUserData* data);
	friend QTextBlockUserData* QSyntaxHighlighter_protectedbase_currentBlockUserData(bool* _dynamic_cast_ok, const void* self);
	friend QTextBlock* QSyntaxHighlighter_protectedbase_currentBlock(bool* _dynamic_cast_ok, const void* self);
	friend QObject* QSyntaxHighlighter_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QSyntaxHighlighter_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QSyntaxHighlighter_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QSyntaxHighlighter_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QSyntaxHighlighter* QSyntaxHighlighter_new(QObject* parent) {
	return new MiqtVirtualQSyntaxHighlighter(parent);
}

QSyntaxHighlighter* QSyntaxHighlighter_new2(QTextDocument* parent) {
	return new MiqtVirtualQSyntaxHighlighter(parent);
}

void QSyntaxHighlighter_virtbase(QSyntaxHighlighter* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QSyntaxHighlighter_metaObject(const QSyntaxHighlighter* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSyntaxHighlighter_metacast(QSyntaxHighlighter* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSyntaxHighlighter_tr(const char* s) {
	QString _ret = QSyntaxHighlighter::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSyntaxHighlighter_trUtf8(const char* s) {
	QString _ret = QSyntaxHighlighter::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSyntaxHighlighter_setDocument(QSyntaxHighlighter* self, QTextDocument* doc) {
	self->setDocument(doc);
}

QTextDocument* QSyntaxHighlighter_document(const QSyntaxHighlighter* self) {
	return self->document();
}

void QSyntaxHighlighter_rehighlight(QSyntaxHighlighter* self) {
	self->rehighlight();
}

void QSyntaxHighlighter_rehighlightBlock(QSyntaxHighlighter* self, QTextBlock* block) {
	self->rehighlightBlock(*block);
}

struct miqt_string QSyntaxHighlighter_tr2(const char* s, const char* c) {
	QString _ret = QSyntaxHighlighter::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSyntaxHighlighter_tr3(const char* s, const char* c, int n) {
	QString _ret = QSyntaxHighlighter::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSyntaxHighlighter_trUtf82(const char* s, const char* c) {
	QString _ret = QSyntaxHighlighter::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSyntaxHighlighter_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QSyntaxHighlighter::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSyntaxHighlighter_override_virtual_highlightBlock(void* self, intptr_t slot) {
	MiqtVirtualQSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualQSyntaxHighlighter*>( (QSyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__highlightBlock = slot;
	return true;
}

bool QSyntaxHighlighter_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualQSyntaxHighlighter*>( (QSyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QSyntaxHighlighter_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSyntaxHighlighter*)(self) )->virtualbase_event(event);
}

bool QSyntaxHighlighter_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualQSyntaxHighlighter*>( (QSyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QSyntaxHighlighter_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSyntaxHighlighter*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QSyntaxHighlighter_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualQSyntaxHighlighter*>( (QSyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QSyntaxHighlighter_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSyntaxHighlighter*)(self) )->virtualbase_timerEvent(event);
}

bool QSyntaxHighlighter_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualQSyntaxHighlighter*>( (QSyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QSyntaxHighlighter_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSyntaxHighlighter*)(self) )->virtualbase_childEvent(event);
}

bool QSyntaxHighlighter_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualQSyntaxHighlighter*>( (QSyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QSyntaxHighlighter_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSyntaxHighlighter*)(self) )->virtualbase_customEvent(event);
}

bool QSyntaxHighlighter_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualQSyntaxHighlighter*>( (QSyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QSyntaxHighlighter_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSyntaxHighlighter*)(self) )->virtualbase_connectNotify(signal);
}

bool QSyntaxHighlighter_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualQSyntaxHighlighter*>( (QSyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QSyntaxHighlighter_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSyntaxHighlighter*)(self) )->virtualbase_disconnectNotify(signal);
}

void QSyntaxHighlighter_protectedbase_setFormat(bool* _dynamic_cast_ok, void* self, int start, int count, QTextCharFormat* format) {
	MiqtVirtualQSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualQSyntaxHighlighter*>( (QSyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setFormat(static_cast<int>(start), static_cast<int>(count), *format);

}

void QSyntaxHighlighter_protectedbase_setFormat2(bool* _dynamic_cast_ok, void* self, int start, int count, QColor* color) {
	MiqtVirtualQSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualQSyntaxHighlighter*>( (QSyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setFormat(static_cast<int>(start), static_cast<int>(count), *color);

}

void QSyntaxHighlighter_protectedbase_setFormat3(bool* _dynamic_cast_ok, void* self, int start, int count, QFont* font) {
	MiqtVirtualQSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualQSyntaxHighlighter*>( (QSyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setFormat(static_cast<int>(start), static_cast<int>(count), *font);

}

QTextCharFormat* QSyntaxHighlighter_protectedbase_format(bool* _dynamic_cast_ok, const void* self, int pos) {
	MiqtVirtualQSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualQSyntaxHighlighter*>( (QSyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QTextCharFormat(self_cast->format(static_cast<int>(pos)));

}

int QSyntaxHighlighter_protectedbase_previousBlockState(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualQSyntaxHighlighter*>( (QSyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->previousBlockState();

}

int QSyntaxHighlighter_protectedbase_currentBlockState(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualQSyntaxHighlighter*>( (QSyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->currentBlockState();

}

void QSyntaxHighlighter_protectedbase_setCurrentBlockState(bool* _dynamic_cast_ok, void* self, int newState) {
	MiqtVirtualQSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualQSyntaxHighlighter*>( (QSyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setCurrentBlockState(static_cast<int>(newState));

}

void QSyntaxHighlighter_protectedbase_setCurrentBlockUserData(bool* _dynamic_cast_ok, void* self, QTextBlockUserData* data) {
	MiqtVirtualQSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualQSyntaxHighlighter*>( (QSyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setCurrentBlockUserData(data);

}

QTextBlockUserData* QSyntaxHighlighter_protectedbase_currentBlockUserData(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualQSyntaxHighlighter*>( (QSyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->currentBlockUserData();

}

QTextBlock* QSyntaxHighlighter_protectedbase_currentBlock(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualQSyntaxHighlighter*>( (QSyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QTextBlock(self_cast->currentBlock());

}

QObject* QSyntaxHighlighter_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualQSyntaxHighlighter*>( (QSyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QSyntaxHighlighter_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualQSyntaxHighlighter*>( (QSyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QSyntaxHighlighter_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualQSyntaxHighlighter*>( (QSyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QSyntaxHighlighter_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQSyntaxHighlighter* self_cast = dynamic_cast<MiqtVirtualQSyntaxHighlighter*>( (QSyntaxHighlighter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QSyntaxHighlighter_delete(QSyntaxHighlighter* self) {
	delete self;
}

