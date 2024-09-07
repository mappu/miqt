#include <QGlyphRun>
#include <QList>
#include <QMetaObject>
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
#include "qtextobject.h"

#include "gen_qtextobject.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QTextObject_MetaObject(QTextObject* self) {
	return (QMetaObject*) const_cast<const QTextObject*>(self)->metaObject();
}

void QTextObject_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QTextObject::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextObject_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QTextObject::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QTextFormat* QTextObject_Format(QTextObject* self) {
	QTextFormat ret = const_cast<const QTextObject*>(self)->format();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextFormat*>(new QTextFormat(ret));
}

int QTextObject_FormatIndex(QTextObject* self) {
	return const_cast<const QTextObject*>(self)->formatIndex();
}

QTextDocument* QTextObject_Document(QTextObject* self) {
	return const_cast<const QTextObject*>(self)->document();
}

int QTextObject_ObjectIndex(QTextObject* self) {
	return const_cast<const QTextObject*>(self)->objectIndex();
}

void QTextObject_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QTextObject::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextObject_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTextObject::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextObject_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QTextObject::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextObject_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTextObject::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QMetaObject* QTextBlockGroup_MetaObject(QTextBlockGroup* self) {
	return (QMetaObject*) const_cast<const QTextBlockGroup*>(self)->metaObject();
}

void QTextBlockGroup_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QTextBlockGroup::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextBlockGroup_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QTextBlockGroup::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextBlockGroup_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QTextBlockGroup::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextBlockGroup_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTextBlockGroup::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextBlockGroup_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QTextBlockGroup::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextBlockGroup_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTextBlockGroup::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextFrameLayoutData_OperatorAssign(QTextFrameLayoutData* self, QTextFrameLayoutData* param1) {
	self->operator=(*param1);
}

void QTextFrameLayoutData_Delete(QTextFrameLayoutData* self) {
	delete self;
}

QTextFrame* QTextFrame_new(QTextDocument* doc) {
	return new QTextFrame(doc);
}

QMetaObject* QTextFrame_MetaObject(QTextFrame* self) {
	return (QMetaObject*) const_cast<const QTextFrame*>(self)->metaObject();
}

void QTextFrame_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QTextFrame::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextFrame_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QTextFrame::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextFrame_SetFrameFormat(QTextFrame* self, QTextFrameFormat* format) {
	self->setFrameFormat(*format);
}

QTextFrameFormat* QTextFrame_FrameFormat(QTextFrame* self) {
	QTextFrameFormat ret = const_cast<const QTextFrame*>(self)->frameFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextFrameFormat*>(new QTextFrameFormat(ret));
}

QTextCursor* QTextFrame_FirstCursorPosition(QTextFrame* self) {
	QTextCursor ret = const_cast<const QTextFrame*>(self)->firstCursorPosition();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCursor*>(new QTextCursor(ret));
}

QTextCursor* QTextFrame_LastCursorPosition(QTextFrame* self) {
	QTextCursor ret = const_cast<const QTextFrame*>(self)->lastCursorPosition();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCursor*>(new QTextCursor(ret));
}

int QTextFrame_FirstPosition(QTextFrame* self) {
	return const_cast<const QTextFrame*>(self)->firstPosition();
}

int QTextFrame_LastPosition(QTextFrame* self) {
	return const_cast<const QTextFrame*>(self)->lastPosition();
}

QTextFrameLayoutData* QTextFrame_LayoutData(QTextFrame* self) {
	return const_cast<const QTextFrame*>(self)->layoutData();
}

void QTextFrame_SetLayoutData(QTextFrame* self, QTextFrameLayoutData* data) {
	self->setLayoutData(data);
}

void QTextFrame_ChildFrames(QTextFrame* self, QTextFrame*** _out, size_t* _out_len) {
	QList<QTextFrame*> ret = const_cast<const QTextFrame*>(self)->childFrames();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTextFrame** __out = static_cast<QTextFrame**>(malloc(sizeof(QTextFrame*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

QTextFrame* QTextFrame_ParentFrame(QTextFrame* self) {
	return const_cast<const QTextFrame*>(self)->parentFrame();
}

QTextFrame__iterator* QTextFrame_Begin(QTextFrame* self) {
	QTextFrame::iterator ret = const_cast<const QTextFrame*>(self)->begin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextFrame::iterator*>(new QTextFrame::iterator(ret));
}

QTextFrame__iterator* QTextFrame_End(QTextFrame* self) {
	QTextFrame::iterator ret = const_cast<const QTextFrame*>(self)->end();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextFrame::iterator*>(new QTextFrame::iterator(ret));
}

void QTextFrame_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QTextFrame::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextFrame_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTextFrame::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextFrame_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QTextFrame::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextFrame_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTextFrame::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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

bool QTextBlock_IsValid(QTextBlock* self) {
	return const_cast<const QTextBlock*>(self)->isValid();
}

bool QTextBlock_OperatorEqual(QTextBlock* self, QTextBlock* o) {
	return const_cast<const QTextBlock*>(self)->operator==(*o);
}

bool QTextBlock_OperatorNotEqual(QTextBlock* self, QTextBlock* o) {
	return const_cast<const QTextBlock*>(self)->operator!=(*o);
}

bool QTextBlock_OperatorLesser(QTextBlock* self, QTextBlock* o) {
	return const_cast<const QTextBlock*>(self)->operator<(*o);
}

int QTextBlock_Position(QTextBlock* self) {
	return const_cast<const QTextBlock*>(self)->position();
}

int QTextBlock_Length(QTextBlock* self) {
	return const_cast<const QTextBlock*>(self)->length();
}

bool QTextBlock_Contains(QTextBlock* self, int position) {
	return const_cast<const QTextBlock*>(self)->contains(static_cast<int>(position));
}

QTextLayout* QTextBlock_Layout(QTextBlock* self) {
	return const_cast<const QTextBlock*>(self)->layout();
}

void QTextBlock_ClearLayout(QTextBlock* self) {
	self->clearLayout();
}

QTextBlockFormat* QTextBlock_BlockFormat(QTextBlock* self) {
	QTextBlockFormat ret = const_cast<const QTextBlock*>(self)->blockFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextBlockFormat*>(new QTextBlockFormat(ret));
}

int QTextBlock_BlockFormatIndex(QTextBlock* self) {
	return const_cast<const QTextBlock*>(self)->blockFormatIndex();
}

QTextCharFormat* QTextBlock_CharFormat(QTextBlock* self) {
	QTextCharFormat ret = const_cast<const QTextBlock*>(self)->charFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCharFormat*>(new QTextCharFormat(ret));
}

int QTextBlock_CharFormatIndex(QTextBlock* self) {
	return const_cast<const QTextBlock*>(self)->charFormatIndex();
}

uintptr_t QTextBlock_TextDirection(QTextBlock* self) {
	Qt::LayoutDirection ret = const_cast<const QTextBlock*>(self)->textDirection();
	return static_cast<uintptr_t>(ret);
}

void QTextBlock_Text(QTextBlock* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTextBlock*>(self)->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextBlock_TextFormats(QTextBlock* self, QTextLayout__FormatRange*** _out, size_t* _out_len) {
	QVector<QTextLayout::FormatRange> ret = const_cast<const QTextBlock*>(self)->textFormats();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QTextLayout__FormatRange** __out = static_cast<QTextLayout__FormatRange**>(malloc(sizeof(QTextLayout__FormatRange**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QTextLayout::FormatRange(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

QTextDocument* QTextBlock_Document(QTextBlock* self) {
	return (QTextDocument*) const_cast<const QTextBlock*>(self)->document();
}

QTextList* QTextBlock_TextList(QTextBlock* self) {
	return const_cast<const QTextBlock*>(self)->textList();
}

QTextBlockUserData* QTextBlock_UserData(QTextBlock* self) {
	return const_cast<const QTextBlock*>(self)->userData();
}

void QTextBlock_SetUserData(QTextBlock* self, QTextBlockUserData* data) {
	self->setUserData(data);
}

int QTextBlock_UserState(QTextBlock* self) {
	return const_cast<const QTextBlock*>(self)->userState();
}

void QTextBlock_SetUserState(QTextBlock* self, int state) {
	self->setUserState(static_cast<int>(state));
}

int QTextBlock_Revision(QTextBlock* self) {
	return const_cast<const QTextBlock*>(self)->revision();
}

void QTextBlock_SetRevision(QTextBlock* self, int rev) {
	self->setRevision(static_cast<int>(rev));
}

bool QTextBlock_IsVisible(QTextBlock* self) {
	return const_cast<const QTextBlock*>(self)->isVisible();
}

void QTextBlock_SetVisible(QTextBlock* self, bool visible) {
	self->setVisible(visible);
}

int QTextBlock_BlockNumber(QTextBlock* self) {
	return const_cast<const QTextBlock*>(self)->blockNumber();
}

int QTextBlock_FirstLineNumber(QTextBlock* self) {
	return const_cast<const QTextBlock*>(self)->firstLineNumber();
}

void QTextBlock_SetLineCount(QTextBlock* self, int count) {
	self->setLineCount(static_cast<int>(count));
}

int QTextBlock_LineCount(QTextBlock* self) {
	return const_cast<const QTextBlock*>(self)->lineCount();
}

QTextBlock__iterator* QTextBlock_Begin(QTextBlock* self) {
	QTextBlock::iterator ret = const_cast<const QTextBlock*>(self)->begin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextBlock::iterator*>(new QTextBlock::iterator(ret));
}

QTextBlock__iterator* QTextBlock_End(QTextBlock* self) {
	QTextBlock::iterator ret = const_cast<const QTextBlock*>(self)->end();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextBlock::iterator*>(new QTextBlock::iterator(ret));
}

QTextBlock* QTextBlock_Next(QTextBlock* self) {
	QTextBlock ret = const_cast<const QTextBlock*>(self)->next();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextBlock*>(new QTextBlock(ret));
}

QTextBlock* QTextBlock_Previous(QTextBlock* self) {
	QTextBlock ret = const_cast<const QTextBlock*>(self)->previous();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextBlock*>(new QTextBlock(ret));
}

int QTextBlock_FragmentIndex(QTextBlock* self) {
	return const_cast<const QTextBlock*>(self)->fragmentIndex();
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

bool QTextFragment_IsValid(QTextFragment* self) {
	return const_cast<const QTextFragment*>(self)->isValid();
}

bool QTextFragment_OperatorEqual(QTextFragment* self, QTextFragment* o) {
	return const_cast<const QTextFragment*>(self)->operator==(*o);
}

bool QTextFragment_OperatorNotEqual(QTextFragment* self, QTextFragment* o) {
	return const_cast<const QTextFragment*>(self)->operator!=(*o);
}

bool QTextFragment_OperatorLesser(QTextFragment* self, QTextFragment* o) {
	return const_cast<const QTextFragment*>(self)->operator<(*o);
}

int QTextFragment_Position(QTextFragment* self) {
	return const_cast<const QTextFragment*>(self)->position();
}

int QTextFragment_Length(QTextFragment* self) {
	return const_cast<const QTextFragment*>(self)->length();
}

bool QTextFragment_Contains(QTextFragment* self, int position) {
	return const_cast<const QTextFragment*>(self)->contains(static_cast<int>(position));
}

QTextCharFormat* QTextFragment_CharFormat(QTextFragment* self) {
	QTextCharFormat ret = const_cast<const QTextFragment*>(self)->charFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCharFormat*>(new QTextCharFormat(ret));
}

int QTextFragment_CharFormatIndex(QTextFragment* self) {
	return const_cast<const QTextFragment*>(self)->charFormatIndex();
}

void QTextFragment_Text(QTextFragment* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTextFragment*>(self)->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextFragment_GlyphRuns(QTextFragment* self, QGlyphRun*** _out, size_t* _out_len) {
	QList<QGlyphRun> ret = const_cast<const QTextFragment*>(self)->glyphRuns();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QGlyphRun** __out = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QGlyphRun(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTextFragment_GlyphRuns1(QTextFragment* self, int from, QGlyphRun*** _out, size_t* _out_len) {
	QList<QGlyphRun> ret = const_cast<const QTextFragment*>(self)->glyphRuns(static_cast<int>(from));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QGlyphRun** __out = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QGlyphRun(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTextFragment_GlyphRuns2(QTextFragment* self, int from, int length, QGlyphRun*** _out, size_t* _out_len) {
	QList<QGlyphRun> ret = const_cast<const QTextFragment*>(self)->glyphRuns(static_cast<int>(from), static_cast<int>(length));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QGlyphRun** __out = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QGlyphRun(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTextFragment_Delete(QTextFragment* self) {
	delete self;
}

QTextFrame__iterator* QTextFrame__iterator_new() {
	return new QTextFrame::iterator();
}

QTextFrame__iterator* QTextFrame__iterator_new2(QTextFrame__iterator* o) {
	return new QTextFrame::iterator(*o);
}

QTextFrame* QTextFrame__iterator_ParentFrame(QTextFrame__iterator* self) {
	return const_cast<const QTextFrame::iterator*>(self)->parentFrame();
}

QTextFrame* QTextFrame__iterator_CurrentFrame(QTextFrame__iterator* self) {
	return const_cast<const QTextFrame::iterator*>(self)->currentFrame();
}

QTextBlock* QTextFrame__iterator_CurrentBlock(QTextFrame__iterator* self) {
	QTextBlock ret = const_cast<const QTextFrame::iterator*>(self)->currentBlock();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextBlock*>(new QTextBlock(ret));
}

bool QTextFrame__iterator_AtEnd(QTextFrame__iterator* self) {
	return const_cast<const QTextFrame::iterator*>(self)->atEnd();
}

bool QTextFrame__iterator_OperatorEqual(QTextFrame__iterator* self, QTextFrame__iterator* o) {
	return const_cast<const QTextFrame::iterator*>(self)->operator==(*o);
}

bool QTextFrame__iterator_OperatorNotEqual(QTextFrame__iterator* self, QTextFrame__iterator* o) {
	return const_cast<const QTextFrame::iterator*>(self)->operator!=(*o);
}

QTextFrame__iterator* QTextFrame__iterator_OperatorPlusPlus(QTextFrame__iterator* self, int param1) {
	QTextFrame::iterator ret = self->operator++(static_cast<int>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextFrame::iterator*>(new QTextFrame::iterator(ret));
}

QTextFrame__iterator* QTextFrame__iterator_OperatorMinusMinus(QTextFrame__iterator* self, int param1) {
	QTextFrame::iterator ret = self->operator--(static_cast<int>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextFrame::iterator*>(new QTextFrame::iterator(ret));
}

void QTextFrame__iterator_Delete(QTextFrame__iterator* self) {
	delete self;
}

QTextBlock__iterator* QTextBlock__iterator_new() {
	return new QTextBlock::iterator();
}

QTextBlock__iterator* QTextBlock__iterator_new2(QTextBlock__iterator* o) {
	return new QTextBlock::iterator(*o);
}

QTextFragment* QTextBlock__iterator_Fragment(QTextBlock__iterator* self) {
	QTextFragment ret = const_cast<const QTextBlock::iterator*>(self)->fragment();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextFragment*>(new QTextFragment(ret));
}

bool QTextBlock__iterator_AtEnd(QTextBlock__iterator* self) {
	return const_cast<const QTextBlock::iterator*>(self)->atEnd();
}

bool QTextBlock__iterator_OperatorEqual(QTextBlock__iterator* self, QTextBlock__iterator* o) {
	return const_cast<const QTextBlock::iterator*>(self)->operator==(*o);
}

bool QTextBlock__iterator_OperatorNotEqual(QTextBlock__iterator* self, QTextBlock__iterator* o) {
	return const_cast<const QTextBlock::iterator*>(self)->operator!=(*o);
}

QTextBlock__iterator* QTextBlock__iterator_OperatorPlusPlus(QTextBlock__iterator* self, int param1) {
	QTextBlock::iterator ret = self->operator++(static_cast<int>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextBlock::iterator*>(new QTextBlock::iterator(ret));
}

QTextBlock__iterator* QTextBlock__iterator_OperatorMinusMinus(QTextBlock__iterator* self, int param1) {
	QTextBlock::iterator ret = self->operator--(static_cast<int>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextBlock::iterator*>(new QTextBlock::iterator(ret));
}

void QTextBlock__iterator_Delete(QTextBlock__iterator* self) {
	delete self;
}

