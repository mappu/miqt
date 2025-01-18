#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSyntaxHighlighter>
#include <QTextBlock>
#include <QTextDocument>
#include <QTimerEvent>
#include <qsyntaxhighlighter.h>
#include "gen_qsyntaxhighlighter.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QSyntaxHighlighter_HighlightBlock(void*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QSyntaxHighlighter_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QSyntaxHighlighter_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSyntaxHighlighter_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSyntaxHighlighter_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSyntaxHighlighter_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QSyntaxHighlighter_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSyntaxHighlighter_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSyntaxHighlighter final : public QSyntaxHighlighter {
public:

	MiqtVirtualQSyntaxHighlighter(QObject* parent): QSyntaxHighlighter(parent) {};
	MiqtVirtualQSyntaxHighlighter(QTextDocument* parent): QSyntaxHighlighter(parent) {};

	virtual ~MiqtVirtualQSyntaxHighlighter() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HighlightBlock = 0;

	// Subclass to allow providing a Go implementation
	virtual void highlightBlock(const QString& text) override {
		if (handle__HighlightBlock == 0) {
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

		miqt_exec_callback_QSyntaxHighlighter_HighlightBlock(this, handle__HighlightBlock, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QSyntaxHighlighter::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSyntaxHighlighter_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QSyntaxHighlighter::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QSyntaxHighlighter::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSyntaxHighlighter_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QSyntaxHighlighter::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QSyntaxHighlighter::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSyntaxHighlighter_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QSyntaxHighlighter::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QSyntaxHighlighter::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSyntaxHighlighter_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QSyntaxHighlighter::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QSyntaxHighlighter::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSyntaxHighlighter_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QSyntaxHighlighter::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QSyntaxHighlighter::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSyntaxHighlighter_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QSyntaxHighlighter::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QSyntaxHighlighter::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSyntaxHighlighter_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QSyntaxHighlighter::disconnectNotify(*signal);

	}

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

QMetaObject* QSyntaxHighlighter_MetaObject(const QSyntaxHighlighter* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSyntaxHighlighter_Metacast(QSyntaxHighlighter* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSyntaxHighlighter_Tr(const char* s) {
	QString _ret = QSyntaxHighlighter::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
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

struct miqt_string QSyntaxHighlighter_Tr2(const char* s, const char* c) {
	QString _ret = QSyntaxHighlighter::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSyntaxHighlighter_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSyntaxHighlighter::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSyntaxHighlighter_override_virtual_HighlightBlock(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSyntaxHighlighter*>( (QSyntaxHighlighter*)(self) )->handle__HighlightBlock = slot;
}

void QSyntaxHighlighter_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSyntaxHighlighter*>( (QSyntaxHighlighter*)(self) )->handle__Event = slot;
}

bool QSyntaxHighlighter_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSyntaxHighlighter*)(self) )->virtualbase_Event(event);
}

void QSyntaxHighlighter_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSyntaxHighlighter*>( (QSyntaxHighlighter*)(self) )->handle__EventFilter = slot;
}

bool QSyntaxHighlighter_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSyntaxHighlighter*)(self) )->virtualbase_EventFilter(watched, event);
}

void QSyntaxHighlighter_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSyntaxHighlighter*>( (QSyntaxHighlighter*)(self) )->handle__TimerEvent = slot;
}

void QSyntaxHighlighter_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSyntaxHighlighter*)(self) )->virtualbase_TimerEvent(event);
}

void QSyntaxHighlighter_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSyntaxHighlighter*>( (QSyntaxHighlighter*)(self) )->handle__ChildEvent = slot;
}

void QSyntaxHighlighter_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSyntaxHighlighter*)(self) )->virtualbase_ChildEvent(event);
}

void QSyntaxHighlighter_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSyntaxHighlighter*>( (QSyntaxHighlighter*)(self) )->handle__CustomEvent = slot;
}

void QSyntaxHighlighter_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSyntaxHighlighter*)(self) )->virtualbase_CustomEvent(event);
}

void QSyntaxHighlighter_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSyntaxHighlighter*>( (QSyntaxHighlighter*)(self) )->handle__ConnectNotify = slot;
}

void QSyntaxHighlighter_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSyntaxHighlighter*)(self) )->virtualbase_ConnectNotify(signal);
}

void QSyntaxHighlighter_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSyntaxHighlighter*>( (QSyntaxHighlighter*)(self) )->handle__DisconnectNotify = slot;
}

void QSyntaxHighlighter_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSyntaxHighlighter*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QSyntaxHighlighter_Delete(QSyntaxHighlighter* self) {
	delete self;
}

