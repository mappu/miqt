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

bool miqt_exec_callback_QTextFrame_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QTextFrame_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QTextFrame_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QTextFrame_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTextFrame_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QTextFrame_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTextFrame_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

void QTextObject_virtbase(QTextObject* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QTextObject_MetaObject(const QTextObject* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTextObject_Metacast(QTextObject* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTextObject_Tr(const char* s) {
	QString _ret = QTextObject::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QTextFormat* QTextObject_Format(const QTextObject* self) {
	return new QTextFormat(self->format());
}

int QTextObject_FormatIndex(const QTextObject* self) {
	return self->formatIndex();
}

QTextDocument* QTextObject_Document(const QTextObject* self) {
	return self->document();
}

int QTextObject_ObjectIndex(const QTextObject* self) {
	return self->objectIndex();
}

struct miqt_string QTextObject_Tr2(const char* s, const char* c) {
	QString _ret = QTextObject::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextObject_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTextObject::tr(s, c, static_cast<int>(n));
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

QMetaObject* QTextBlockGroup_MetaObject(const QTextBlockGroup* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTextBlockGroup_Metacast(QTextBlockGroup* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTextBlockGroup_Tr(const char* s) {
	QString _ret = QTextBlockGroup::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextBlockGroup_Tr2(const char* s, const char* c) {
	QString _ret = QTextBlockGroup::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextBlockGroup_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTextBlockGroup::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextFrameLayoutData_OperatorAssign(QTextFrameLayoutData* self, QTextFrameLayoutData* param1) {
	self->operator=(*param1);
}

void QTextFrameLayoutData_Delete(QTextFrameLayoutData* self) {
	delete self;
}

class MiqtVirtualQTextFrame final : public QTextFrame {
public:

	MiqtVirtualQTextFrame(QTextDocument* doc): QTextFrame(doc) {};

	virtual ~MiqtVirtualQTextFrame() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QTextFrame::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QTextFrame_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QTextFrame::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QTextFrame::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QTextFrame_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QTextFrame::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QTextFrame::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QTextFrame_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QTextFrame::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QTextFrame::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QTextFrame_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QTextFrame::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QTextFrame::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTextFrame_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QTextFrame::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QTextFrame::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTextFrame_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QTextFrame::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QTextFrame::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTextFrame_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QTextFrame::disconnectNotify(*signal);

	}

};

QTextFrame* QTextFrame_new(QTextDocument* doc) {
	return new MiqtVirtualQTextFrame(doc);
}

void QTextFrame_virtbase(QTextFrame* src, QTextObject** outptr_QTextObject) {
	*outptr_QTextObject = static_cast<QTextObject*>(src);
}

QMetaObject* QTextFrame_MetaObject(const QTextFrame* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTextFrame_Metacast(QTextFrame* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTextFrame_Tr(const char* s) {
	QString _ret = QTextFrame::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextFrame_SetFrameFormat(QTextFrame* self, QTextFrameFormat* format) {
	self->setFrameFormat(*format);
}

QTextFrameFormat* QTextFrame_FrameFormat(const QTextFrame* self) {
	return new QTextFrameFormat(self->frameFormat());
}

QTextCursor* QTextFrame_FirstCursorPosition(const QTextFrame* self) {
	return new QTextCursor(self->firstCursorPosition());
}

QTextCursor* QTextFrame_LastCursorPosition(const QTextFrame* self) {
	return new QTextCursor(self->lastCursorPosition());
}

int QTextFrame_FirstPosition(const QTextFrame* self) {
	return self->firstPosition();
}

int QTextFrame_LastPosition(const QTextFrame* self) {
	return self->lastPosition();
}

QTextFrameLayoutData* QTextFrame_LayoutData(const QTextFrame* self) {
	return self->layoutData();
}

void QTextFrame_SetLayoutData(QTextFrame* self, QTextFrameLayoutData* data) {
	self->setLayoutData(data);
}

struct miqt_array /* of QTextFrame* */  QTextFrame_ChildFrames(const QTextFrame* self) {
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

QTextFrame* QTextFrame_ParentFrame(const QTextFrame* self) {
	return self->parentFrame();
}

QTextFrame__iterator* QTextFrame_Begin(const QTextFrame* self) {
	return new QTextFrame::iterator(self->begin());
}

QTextFrame__iterator* QTextFrame_End(const QTextFrame* self) {
	return new QTextFrame::iterator(self->end());
}

struct miqt_string QTextFrame_Tr2(const char* s, const char* c) {
	QString _ret = QTextFrame::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextFrame_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTextFrame::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTextFrame_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQTextFrame* self_cast = dynamic_cast<MiqtVirtualQTextFrame*>( (QTextFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QTextFrame_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQTextFrame*)(self) )->virtualbase_Event(event);
}

bool QTextFrame_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTextFrame* self_cast = dynamic_cast<MiqtVirtualQTextFrame*>( (QTextFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QTextFrame_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQTextFrame*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QTextFrame_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextFrame* self_cast = dynamic_cast<MiqtVirtualQTextFrame*>( (QTextFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QTextFrame_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQTextFrame*)(self) )->virtualbase_TimerEvent(event);
}

bool QTextFrame_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextFrame* self_cast = dynamic_cast<MiqtVirtualQTextFrame*>( (QTextFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QTextFrame_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQTextFrame*)(self) )->virtualbase_ChildEvent(event);
}

bool QTextFrame_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextFrame* self_cast = dynamic_cast<MiqtVirtualQTextFrame*>( (QTextFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QTextFrame_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTextFrame*)(self) )->virtualbase_CustomEvent(event);
}

bool QTextFrame_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTextFrame* self_cast = dynamic_cast<MiqtVirtualQTextFrame*>( (QTextFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QTextFrame_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTextFrame*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QTextFrame_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTextFrame* self_cast = dynamic_cast<MiqtVirtualQTextFrame*>( (QTextFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QTextFrame_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTextFrame*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QTextFrame_Delete(QTextFrame* self) {
	delete self;
}

void QTextBlockUserData_OperatorAssign(QTextBlockUserData* self, QTextBlockUserData* param1) {
	self->operator=(*param1);
}

void QTextBlockUserData_Delete(QTextBlockUserData* self) {
	delete self;
}

QTextBlock* QTextBlock_new() {
	return new QTextBlock();
}

QTextBlock* QTextBlock_new2(QTextBlock* o) {
	return new QTextBlock(*o);
}

void QTextBlock_OperatorAssign(QTextBlock* self, QTextBlock* o) {
	self->operator=(*o);
}

bool QTextBlock_IsValid(const QTextBlock* self) {
	return self->isValid();
}

bool QTextBlock_OperatorEqual(const QTextBlock* self, QTextBlock* o) {
	return (*self == *o);
}

bool QTextBlock_OperatorNotEqual(const QTextBlock* self, QTextBlock* o) {
	return (*self != *o);
}

bool QTextBlock_OperatorLesser(const QTextBlock* self, QTextBlock* o) {
	return (*self < *o);
}

int QTextBlock_Position(const QTextBlock* self) {
	return self->position();
}

int QTextBlock_Length(const QTextBlock* self) {
	return self->length();
}

bool QTextBlock_Contains(const QTextBlock* self, int position) {
	return self->contains(static_cast<int>(position));
}

QTextLayout* QTextBlock_Layout(const QTextBlock* self) {
	return self->layout();
}

void QTextBlock_ClearLayout(QTextBlock* self) {
	self->clearLayout();
}

QTextBlockFormat* QTextBlock_BlockFormat(const QTextBlock* self) {
	return new QTextBlockFormat(self->blockFormat());
}

int QTextBlock_BlockFormatIndex(const QTextBlock* self) {
	return self->blockFormatIndex();
}

QTextCharFormat* QTextBlock_CharFormat(const QTextBlock* self) {
	return new QTextCharFormat(self->charFormat());
}

int QTextBlock_CharFormatIndex(const QTextBlock* self) {
	return self->charFormatIndex();
}

int QTextBlock_TextDirection(const QTextBlock* self) {
	Qt::LayoutDirection _ret = self->textDirection();
	return static_cast<int>(_ret);
}

struct miqt_string QTextBlock_Text(const QTextBlock* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QTextLayout__FormatRange* */  QTextBlock_TextFormats(const QTextBlock* self) {
	QList<QTextLayout::FormatRange> _ret = self->textFormats();
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

QTextDocument* QTextBlock_Document(const QTextBlock* self) {
	return (QTextDocument*) self->document();
}

QTextList* QTextBlock_TextList(const QTextBlock* self) {
	return self->textList();
}

QTextBlockUserData* QTextBlock_UserData(const QTextBlock* self) {
	return self->userData();
}

void QTextBlock_SetUserData(QTextBlock* self, QTextBlockUserData* data) {
	self->setUserData(data);
}

int QTextBlock_UserState(const QTextBlock* self) {
	return self->userState();
}

void QTextBlock_SetUserState(QTextBlock* self, int state) {
	self->setUserState(static_cast<int>(state));
}

int QTextBlock_Revision(const QTextBlock* self) {
	return self->revision();
}

void QTextBlock_SetRevision(QTextBlock* self, int rev) {
	self->setRevision(static_cast<int>(rev));
}

bool QTextBlock_IsVisible(const QTextBlock* self) {
	return self->isVisible();
}

void QTextBlock_SetVisible(QTextBlock* self, bool visible) {
	self->setVisible(visible);
}

int QTextBlock_BlockNumber(const QTextBlock* self) {
	return self->blockNumber();
}

int QTextBlock_FirstLineNumber(const QTextBlock* self) {
	return self->firstLineNumber();
}

void QTextBlock_SetLineCount(QTextBlock* self, int count) {
	self->setLineCount(static_cast<int>(count));
}

int QTextBlock_LineCount(const QTextBlock* self) {
	return self->lineCount();
}

QTextBlock__iterator* QTextBlock_Begin(const QTextBlock* self) {
	return new QTextBlock::iterator(self->begin());
}

QTextBlock__iterator* QTextBlock_End(const QTextBlock* self) {
	return new QTextBlock::iterator(self->end());
}

QTextBlock* QTextBlock_Next(const QTextBlock* self) {
	return new QTextBlock(self->next());
}

QTextBlock* QTextBlock_Previous(const QTextBlock* self) {
	return new QTextBlock(self->previous());
}

int QTextBlock_FragmentIndex(const QTextBlock* self) {
	return self->fragmentIndex();
}

void QTextBlock_Delete(QTextBlock* self) {
	delete self;
}

QTextFragment* QTextFragment_new() {
	return new QTextFragment();
}

QTextFragment* QTextFragment_new2(QTextFragment* o) {
	return new QTextFragment(*o);
}

void QTextFragment_OperatorAssign(QTextFragment* self, QTextFragment* o) {
	self->operator=(*o);
}

bool QTextFragment_IsValid(const QTextFragment* self) {
	return self->isValid();
}

bool QTextFragment_OperatorEqual(const QTextFragment* self, QTextFragment* o) {
	return (*self == *o);
}

bool QTextFragment_OperatorNotEqual(const QTextFragment* self, QTextFragment* o) {
	return (*self != *o);
}

bool QTextFragment_OperatorLesser(const QTextFragment* self, QTextFragment* o) {
	return (*self < *o);
}

int QTextFragment_Position(const QTextFragment* self) {
	return self->position();
}

int QTextFragment_Length(const QTextFragment* self) {
	return self->length();
}

bool QTextFragment_Contains(const QTextFragment* self, int position) {
	return self->contains(static_cast<int>(position));
}

QTextCharFormat* QTextFragment_CharFormat(const QTextFragment* self) {
	return new QTextCharFormat(self->charFormat());
}

int QTextFragment_CharFormatIndex(const QTextFragment* self) {
	return self->charFormatIndex();
}

struct miqt_string QTextFragment_Text(const QTextFragment* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QGlyphRun* */  QTextFragment_GlyphRuns(const QTextFragment* self) {
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

struct miqt_array /* of QGlyphRun* */  QTextFragment_GlyphRuns1(const QTextFragment* self, int from) {
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

struct miqt_array /* of QGlyphRun* */  QTextFragment_GlyphRuns2(const QTextFragment* self, int from, int length) {
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

void QTextFragment_Delete(QTextFragment* self) {
	delete self;
}

QTextFrame__iterator* QTextFrame__iterator_new() {
	return new QTextFrame::iterator();
}

QTextFrame__iterator* QTextFrame__iterator_new2(QTextFrame__iterator* param1) {
	return new QTextFrame::iterator(*param1);
}

QTextFrame* QTextFrame__iterator_ParentFrame(const QTextFrame__iterator* self) {
	return self->parentFrame();
}

QTextFrame* QTextFrame__iterator_CurrentFrame(const QTextFrame__iterator* self) {
	return self->currentFrame();
}

QTextBlock* QTextFrame__iterator_CurrentBlock(const QTextFrame__iterator* self) {
	return new QTextBlock(self->currentBlock());
}

bool QTextFrame__iterator_AtEnd(const QTextFrame__iterator* self) {
	return self->atEnd();
}

bool QTextFrame__iterator_OperatorEqual(const QTextFrame__iterator* self, QTextFrame__iterator* o) {
	return (*self == *o);
}

bool QTextFrame__iterator_OperatorNotEqual(const QTextFrame__iterator* self, QTextFrame__iterator* o) {
	return (*self != *o);
}

QTextFrame__iterator* QTextFrame__iterator_OperatorPlusPlus(QTextFrame__iterator* self) {
	QTextFrame::iterator& _ret = self->operator++();
	// Cast returned reference into pointer
	return &_ret;
}

QTextFrame__iterator* QTextFrame__iterator_OperatorPlusPlusWithInt(QTextFrame__iterator* self, int param1) {
	return new QTextFrame::iterator(self->operator++(static_cast<int>(param1)));
}

QTextFrame__iterator* QTextFrame__iterator_OperatorMinusMinus(QTextFrame__iterator* self) {
	QTextFrame::iterator& _ret = self->operator--();
	// Cast returned reference into pointer
	return &_ret;
}

QTextFrame__iterator* QTextFrame__iterator_OperatorMinusMinusWithInt(QTextFrame__iterator* self, int param1) {
	return new QTextFrame::iterator(self->operator--(static_cast<int>(param1)));
}

void QTextFrame__iterator_Delete(QTextFrame__iterator* self) {
	delete self;
}

QTextBlock__iterator* QTextBlock__iterator_new() {
	return new QTextBlock::iterator();
}

QTextBlock__iterator* QTextBlock__iterator_new2(QTextBlock__iterator* param1) {
	return new QTextBlock::iterator(*param1);
}

QTextFragment* QTextBlock__iterator_Fragment(const QTextBlock__iterator* self) {
	return new QTextFragment(self->fragment());
}

bool QTextBlock__iterator_AtEnd(const QTextBlock__iterator* self) {
	return self->atEnd();
}

bool QTextBlock__iterator_OperatorEqual(const QTextBlock__iterator* self, QTextBlock__iterator* o) {
	return (*self == *o);
}

bool QTextBlock__iterator_OperatorNotEqual(const QTextBlock__iterator* self, QTextBlock__iterator* o) {
	return (*self != *o);
}

QTextBlock__iterator* QTextBlock__iterator_OperatorPlusPlus(QTextBlock__iterator* self) {
	QTextBlock::iterator& _ret = self->operator++();
	// Cast returned reference into pointer
	return &_ret;
}

QTextBlock__iterator* QTextBlock__iterator_OperatorPlusPlusWithInt(QTextBlock__iterator* self, int param1) {
	return new QTextBlock::iterator(self->operator++(static_cast<int>(param1)));
}

QTextBlock__iterator* QTextBlock__iterator_OperatorMinusMinus(QTextBlock__iterator* self) {
	QTextBlock::iterator& _ret = self->operator--();
	// Cast returned reference into pointer
	return &_ret;
}

QTextBlock__iterator* QTextBlock__iterator_OperatorMinusMinusWithInt(QTextBlock__iterator* self, int param1) {
	return new QTextBlock::iterator(self->operator--(static_cast<int>(param1)));
}

void QTextBlock__iterator_Delete(QTextBlock__iterator* self) {
	delete self;
}

