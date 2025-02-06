#include <QChildEvent>
#include <QEvent>
#include <QGlyphRun>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextBlock>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTextBlock__iterator
#include <QTextBlockFormat>
#include <QTextBlockGroup>
#include <QTextBlockUserData>
#include <QTextCharFormat>
#include <QTextCursor>
#include <QTextDocument>
#include <QTextFormat>
#include <QTextFragment>
#include <QTextFrame>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTextFrame__iterator
#include <QTextFrameFormat>
#include <QTextFrameLayoutData>
#include <QTextLayout>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTextLayout__FormatRange
#include <QTextList>
#include <QTextObject>
#include <QTimerEvent>
#include <qtextobject.h>
#include "gen_qtextobject.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QTextFrame_event(QTextFrame*, intptr_t, QEvent*);
bool miqt_exec_callback_QTextFrame_eventFilter(QTextFrame*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QTextFrame_timerEvent(QTextFrame*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QTextFrame_childEvent(QTextFrame*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTextFrame_customEvent(QTextFrame*, intptr_t, QEvent*);
void miqt_exec_callback_QTextFrame_connectNotify(QTextFrame*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTextFrame_disconnectNotify(QTextFrame*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

void QTextObject_virtbase(QTextObject* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QTextObject_metaObject(const QTextObject* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTextObject_metacast(QTextObject* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTextObject_tr(const char* s) {
	QString _ret = QTextObject::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextObject_trUtf8(const char* s) {
	QString _ret = QTextObject::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QTextFormat* QTextObject_format(const QTextObject* self) {
	return new QTextFormat(self->format());
}

int QTextObject_formatIndex(const QTextObject* self) {
	return self->formatIndex();
}

QTextDocument* QTextObject_document(const QTextObject* self) {
	return self->document();
}

int QTextObject_objectIndex(const QTextObject* self) {
	return self->objectIndex();
}

struct miqt_string QTextObject_tr2(const char* s, const char* c) {
	QString _ret = QTextObject::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextObject_tr3(const char* s, const char* c, int n) {
	QString _ret = QTextObject::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextObject_trUtf82(const char* s, const char* c) {
	QString _ret = QTextObject::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextObject_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QTextObject::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextBlockGroup_virtbase(QTextBlockGroup* src, QTextObject** outptr_QTextObject) {
	*outptr_QTextObject = static_cast<QTextObject*>(src);
}

QMetaObject* QTextBlockGroup_metaObject(const QTextBlockGroup* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTextBlockGroup_metacast(QTextBlockGroup* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTextBlockGroup_tr(const char* s) {
	QString _ret = QTextBlockGroup::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextBlockGroup_trUtf8(const char* s) {
	QString _ret = QTextBlockGroup::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextBlockGroup_tr2(const char* s, const char* c) {
	QString _ret = QTextBlockGroup::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextBlockGroup_tr3(const char* s, const char* c, int n) {
	QString _ret = QTextBlockGroup::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextBlockGroup_trUtf82(const char* s, const char* c) {
	QString _ret = QTextBlockGroup::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextBlockGroup_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QTextBlockGroup::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextFrameLayoutData_operatorAssign(QTextFrameLayoutData* self, QTextFrameLayoutData* param1) {
	self->operator=(*param1);
}

void QTextFrameLayoutData_delete(QTextFrameLayoutData* self) {
	delete self;
}

class MiqtVirtualQTextFrame final : public QTextFrame {
public:

	MiqtVirtualQTextFrame(QTextDocument* doc): QTextFrame(doc) {};

	virtual ~MiqtVirtualQTextFrame() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QTextFrame::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QTextFrame_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QTextFrame::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QTextFrame::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QTextFrame_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QTextFrame::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QTextFrame::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QTextFrame_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QTextFrame::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QTextFrame::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QTextFrame_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QTextFrame::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QTextFrame::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTextFrame_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QTextFrame::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QTextFrame::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTextFrame_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QTextFrame::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QTextFrame::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTextFrame_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QTextFrame::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QTextFrame_protectedbase_setFormat(bool* _dynamic_cast_ok, void* self, QTextFormat* format);
	friend QObject* QTextFrame_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QTextFrame_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QTextFrame_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QTextFrame_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QTextFrame* QTextFrame_new(QTextDocument* doc) {
	return new MiqtVirtualQTextFrame(doc);
}

void QTextFrame_virtbase(QTextFrame* src, QTextObject** outptr_QTextObject) {
	*outptr_QTextObject = static_cast<QTextObject*>(src);
}

QMetaObject* QTextFrame_metaObject(const QTextFrame* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTextFrame_metacast(QTextFrame* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTextFrame_tr(const char* s) {
	QString _ret = QTextFrame::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextFrame_trUtf8(const char* s) {
	QString _ret = QTextFrame::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextFrame_setFrameFormat(QTextFrame* self, QTextFrameFormat* format) {
	self->setFrameFormat(*format);
}

QTextFrameFormat* QTextFrame_frameFormat(const QTextFrame* self) {
	return new QTextFrameFormat(self->frameFormat());
}

QTextCursor* QTextFrame_firstCursorPosition(const QTextFrame* self) {
	return new QTextCursor(self->firstCursorPosition());
}

QTextCursor* QTextFrame_lastCursorPosition(const QTextFrame* self) {
	return new QTextCursor(self->lastCursorPosition());
}

int QTextFrame_firstPosition(const QTextFrame* self) {
	return self->firstPosition();
}

int QTextFrame_lastPosition(const QTextFrame* self) {
	return self->lastPosition();
}

QTextFrameLayoutData* QTextFrame_layoutData(const QTextFrame* self) {
	return self->layoutData();
}

void QTextFrame_setLayoutData(QTextFrame* self, QTextFrameLayoutData* data) {
	self->setLayoutData(data);
}

struct miqt_array /* of QTextFrame* */  QTextFrame_childFrames(const QTextFrame* self) {
	QList<QTextFrame *> _ret = self->childFrames();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTextFrame** _arr = static_cast<QTextFrame**>(malloc(sizeof(QTextFrame*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QTextFrame* QTextFrame_parentFrame(const QTextFrame* self) {
	return self->parentFrame();
}

QTextFrame__iterator* QTextFrame_begin(const QTextFrame* self) {
	return new QTextFrame::iterator(self->begin());
}

QTextFrame__iterator* QTextFrame_end(const QTextFrame* self) {
	return new QTextFrame::iterator(self->end());
}

struct miqt_string QTextFrame_tr2(const char* s, const char* c) {
	QString _ret = QTextFrame::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextFrame_tr3(const char* s, const char* c, int n) {
	QString _ret = QTextFrame::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextFrame_trUtf82(const char* s, const char* c) {
	QString _ret = QTextFrame::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextFrame_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QTextFrame::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTextFrame_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQTextFrame* self_cast = dynamic_cast<MiqtVirtualQTextFrame*>( (QTextFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QTextFrame_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQTextFrame*)(self) )->virtualbase_event(event);
}

bool QTextFrame_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTextFrame* self_cast = dynamic_cast<MiqtVirtualQTextFrame*>( (QTextFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QTextFrame_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQTextFrame*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QTextFrame_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextFrame* self_cast = dynamic_cast<MiqtVirtualQTextFrame*>( (QTextFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QTextFrame_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQTextFrame*)(self) )->virtualbase_timerEvent(event);
}

bool QTextFrame_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextFrame* self_cast = dynamic_cast<MiqtVirtualQTextFrame*>( (QTextFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QTextFrame_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQTextFrame*)(self) )->virtualbase_childEvent(event);
}

bool QTextFrame_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextFrame* self_cast = dynamic_cast<MiqtVirtualQTextFrame*>( (QTextFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QTextFrame_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTextFrame*)(self) )->virtualbase_customEvent(event);
}

bool QTextFrame_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTextFrame* self_cast = dynamic_cast<MiqtVirtualQTextFrame*>( (QTextFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QTextFrame_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTextFrame*)(self) )->virtualbase_connectNotify(signal);
}

bool QTextFrame_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTextFrame* self_cast = dynamic_cast<MiqtVirtualQTextFrame*>( (QTextFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QTextFrame_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTextFrame*)(self) )->virtualbase_disconnectNotify(signal);
}

void QTextFrame_protectedbase_setFormat(bool* _dynamic_cast_ok, void* self, QTextFormat* format) {
	MiqtVirtualQTextFrame* self_cast = dynamic_cast<MiqtVirtualQTextFrame*>( (QTextFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setFormat(*format);

}

QObject* QTextFrame_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTextFrame* self_cast = dynamic_cast<MiqtVirtualQTextFrame*>( (QTextFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QTextFrame_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTextFrame* self_cast = dynamic_cast<MiqtVirtualQTextFrame*>( (QTextFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QTextFrame_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQTextFrame* self_cast = dynamic_cast<MiqtVirtualQTextFrame*>( (QTextFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QTextFrame_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQTextFrame* self_cast = dynamic_cast<MiqtVirtualQTextFrame*>( (QTextFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QTextFrame_delete(QTextFrame* self) {
	delete self;
}

void QTextBlockUserData_operatorAssign(QTextBlockUserData* self, QTextBlockUserData* param1) {
	self->operator=(*param1);
}

void QTextBlockUserData_delete(QTextBlockUserData* self) {
	delete self;
}

QTextBlock* QTextBlock_new() {
	return new QTextBlock();
}

QTextBlock* QTextBlock_new2(QTextBlock* o) {
	return new QTextBlock(*o);
}

void QTextBlock_operatorAssign(QTextBlock* self, QTextBlock* o) {
	self->operator=(*o);
}

bool QTextBlock_isValid(const QTextBlock* self) {
	return self->isValid();
}

bool QTextBlock_operatorEqual(const QTextBlock* self, QTextBlock* o) {
	return (*self == *o);
}

bool QTextBlock_operatorNotEqual(const QTextBlock* self, QTextBlock* o) {
	return (*self != *o);
}

bool QTextBlock_operatorLesser(const QTextBlock* self, QTextBlock* o) {
	return (*self < *o);
}

int QTextBlock_position(const QTextBlock* self) {
	return self->position();
}

int QTextBlock_length(const QTextBlock* self) {
	return self->length();
}

bool QTextBlock_contains(const QTextBlock* self, int position) {
	return self->contains(static_cast<int>(position));
}

QTextLayout* QTextBlock_layout(const QTextBlock* self) {
	return self->layout();
}

void QTextBlock_clearLayout(QTextBlock* self) {
	self->clearLayout();
}

QTextBlockFormat* QTextBlock_blockFormat(const QTextBlock* self) {
	return new QTextBlockFormat(self->blockFormat());
}

int QTextBlock_blockFormatIndex(const QTextBlock* self) {
	return self->blockFormatIndex();
}

QTextCharFormat* QTextBlock_charFormat(const QTextBlock* self) {
	return new QTextCharFormat(self->charFormat());
}

int QTextBlock_charFormatIndex(const QTextBlock* self) {
	return self->charFormatIndex();
}

int QTextBlock_textDirection(const QTextBlock* self) {
	Qt::LayoutDirection _ret = self->textDirection();
	return static_cast<int>(_ret);
}

struct miqt_string QTextBlock_text(const QTextBlock* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QTextLayout__FormatRange* */  QTextBlock_textFormats(const QTextBlock* self) {
	QVector<QTextLayout::FormatRange> _ret = self->textFormats();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTextLayout__FormatRange** _arr = static_cast<QTextLayout__FormatRange**>(malloc(sizeof(QTextLayout__FormatRange*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QTextLayout::FormatRange(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QTextDocument* QTextBlock_document(const QTextBlock* self) {
	return (QTextDocument*) self->document();
}

QTextList* QTextBlock_textList(const QTextBlock* self) {
	return self->textList();
}

QTextBlockUserData* QTextBlock_userData(const QTextBlock* self) {
	return self->userData();
}

void QTextBlock_setUserData(QTextBlock* self, QTextBlockUserData* data) {
	self->setUserData(data);
}

int QTextBlock_userState(const QTextBlock* self) {
	return self->userState();
}

void QTextBlock_setUserState(QTextBlock* self, int state) {
	self->setUserState(static_cast<int>(state));
}

int QTextBlock_revision(const QTextBlock* self) {
	return self->revision();
}

void QTextBlock_setRevision(QTextBlock* self, int rev) {
	self->setRevision(static_cast<int>(rev));
}

bool QTextBlock_isVisible(const QTextBlock* self) {
	return self->isVisible();
}

void QTextBlock_setVisible(QTextBlock* self, bool visible) {
	self->setVisible(visible);
}

int QTextBlock_blockNumber(const QTextBlock* self) {
	return self->blockNumber();
}

int QTextBlock_firstLineNumber(const QTextBlock* self) {
	return self->firstLineNumber();
}

void QTextBlock_setLineCount(QTextBlock* self, int count) {
	self->setLineCount(static_cast<int>(count));
}

int QTextBlock_lineCount(const QTextBlock* self) {
	return self->lineCount();
}

QTextBlock__iterator* QTextBlock_begin(const QTextBlock* self) {
	return new QTextBlock::iterator(self->begin());
}

QTextBlock__iterator* QTextBlock_end(const QTextBlock* self) {
	return new QTextBlock::iterator(self->end());
}

QTextBlock* QTextBlock_next(const QTextBlock* self) {
	return new QTextBlock(self->next());
}

QTextBlock* QTextBlock_previous(const QTextBlock* self) {
	return new QTextBlock(self->previous());
}

int QTextBlock_fragmentIndex(const QTextBlock* self) {
	return self->fragmentIndex();
}

void QTextBlock_delete(QTextBlock* self) {
	delete self;
}

QTextFragment* QTextFragment_new() {
	return new QTextFragment();
}

QTextFragment* QTextFragment_new2(QTextFragment* o) {
	return new QTextFragment(*o);
}

void QTextFragment_operatorAssign(QTextFragment* self, QTextFragment* o) {
	self->operator=(*o);
}

bool QTextFragment_isValid(const QTextFragment* self) {
	return self->isValid();
}

bool QTextFragment_operatorEqual(const QTextFragment* self, QTextFragment* o) {
	return (*self == *o);
}

bool QTextFragment_operatorNotEqual(const QTextFragment* self, QTextFragment* o) {
	return (*self != *o);
}

bool QTextFragment_operatorLesser(const QTextFragment* self, QTextFragment* o) {
	return (*self < *o);
}

int QTextFragment_position(const QTextFragment* self) {
	return self->position();
}

int QTextFragment_length(const QTextFragment* self) {
	return self->length();
}

bool QTextFragment_contains(const QTextFragment* self, int position) {
	return self->contains(static_cast<int>(position));
}

QTextCharFormat* QTextFragment_charFormat(const QTextFragment* self) {
	return new QTextCharFormat(self->charFormat());
}

int QTextFragment_charFormatIndex(const QTextFragment* self) {
	return self->charFormatIndex();
}

struct miqt_string QTextFragment_text(const QTextFragment* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QGlyphRun* */  QTextFragment_glyphRuns(const QTextFragment* self) {
	QList<QGlyphRun> _ret = self->glyphRuns();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGlyphRun** _arr = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QGlyphRun(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGlyphRun* */  QTextFragment_glyphRuns1(const QTextFragment* self, int from) {
	QList<QGlyphRun> _ret = self->glyphRuns(static_cast<int>(from));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGlyphRun** _arr = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QGlyphRun(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGlyphRun* */  QTextFragment_glyphRuns2(const QTextFragment* self, int from, int length) {
	QList<QGlyphRun> _ret = self->glyphRuns(static_cast<int>(from), static_cast<int>(length));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGlyphRun** _arr = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QGlyphRun(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QTextFragment_delete(QTextFragment* self) {
	delete self;
}

QTextFrame__iterator* QTextFrame__iterator_new() {
	return new QTextFrame::iterator();
}

QTextFrame__iterator* QTextFrame__iterator_new2(QTextFrame__iterator* o) {
	return new QTextFrame::iterator(*o);
}

void QTextFrame__iterator_operatorAssign(QTextFrame__iterator* self, QTextFrame__iterator* o) {
	self->operator=(*o);
}

QTextFrame* QTextFrame__iterator_parentFrame(const QTextFrame__iterator* self) {
	return self->parentFrame();
}

QTextFrame* QTextFrame__iterator_currentFrame(const QTextFrame__iterator* self) {
	return self->currentFrame();
}

QTextBlock* QTextFrame__iterator_currentBlock(const QTextFrame__iterator* self) {
	return new QTextBlock(self->currentBlock());
}

bool QTextFrame__iterator_atEnd(const QTextFrame__iterator* self) {
	return self->atEnd();
}

bool QTextFrame__iterator_operatorEqual(const QTextFrame__iterator* self, QTextFrame__iterator* o) {
	return (*self == *o);
}

bool QTextFrame__iterator_operatorNotEqual(const QTextFrame__iterator* self, QTextFrame__iterator* o) {
	return (*self != *o);
}

QTextFrame__iterator* QTextFrame__iterator_operatorPlusPlus(QTextFrame__iterator* self) {
	QTextFrame::iterator& _ret = self->operator++();
	// Cast returned reference into pointer
	return &_ret;
}

QTextFrame__iterator* QTextFrame__iterator_operatorPlusPlusWithInt(QTextFrame__iterator* self, int param1) {
	return new QTextFrame::iterator(self->operator++(static_cast<int>(param1)));
}

QTextFrame__iterator* QTextFrame__iterator_operatorMinusMinus(QTextFrame__iterator* self) {
	QTextFrame::iterator& _ret = self->operator--();
	// Cast returned reference into pointer
	return &_ret;
}

QTextFrame__iterator* QTextFrame__iterator_operatorMinusMinusWithInt(QTextFrame__iterator* self, int param1) {
	return new QTextFrame::iterator(self->operator--(static_cast<int>(param1)));
}

void QTextFrame__iterator_delete(QTextFrame__iterator* self) {
	delete self;
}

QTextBlock__iterator* QTextBlock__iterator_new() {
	return new QTextBlock::iterator();
}

QTextBlock__iterator* QTextBlock__iterator_new2(QTextBlock__iterator* o) {
	return new QTextBlock::iterator(*o);
}

void QTextBlock__iterator_operatorAssign(QTextBlock__iterator* self, QTextBlock__iterator* o) {
	self->operator=(*o);
}

QTextFragment* QTextBlock__iterator_fragment(const QTextBlock__iterator* self) {
	return new QTextFragment(self->fragment());
}

bool QTextBlock__iterator_atEnd(const QTextBlock__iterator* self) {
	return self->atEnd();
}

bool QTextBlock__iterator_operatorEqual(const QTextBlock__iterator* self, QTextBlock__iterator* o) {
	return (*self == *o);
}

bool QTextBlock__iterator_operatorNotEqual(const QTextBlock__iterator* self, QTextBlock__iterator* o) {
	return (*self != *o);
}

QTextBlock__iterator* QTextBlock__iterator_operatorPlusPlus(QTextBlock__iterator* self) {
	QTextBlock::iterator& _ret = self->operator++();
	// Cast returned reference into pointer
	return &_ret;
}

QTextBlock__iterator* QTextBlock__iterator_operatorPlusPlusWithInt(QTextBlock__iterator* self, int param1) {
	return new QTextBlock::iterator(self->operator++(static_cast<int>(param1)));
}

QTextBlock__iterator* QTextBlock__iterator_operatorMinusMinus(QTextBlock__iterator* self) {
	QTextBlock::iterator& _ret = self->operator--();
	// Cast returned reference into pointer
	return &_ret;
}

QTextBlock__iterator* QTextBlock__iterator_operatorMinusMinusWithInt(QTextBlock__iterator* self, int param1) {
	return new QTextBlock::iterator(self->operator--(static_cast<int>(param1)));
}

void QTextBlock__iterator_delete(QTextBlock__iterator* self) {
	delete self;
}

