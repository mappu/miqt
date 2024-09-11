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

QMetaObject* QTextObject_MetaObject(const QTextObject* self) {
	return (QMetaObject*) self->metaObject();
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

QTextFormat* QTextObject_Format(const QTextObject* self) {
	QTextFormat ret = self->format();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextFormat*>(new QTextFormat(ret));
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

QMetaObject* QTextBlockGroup_MetaObject(const QTextBlockGroup* self) {
	return (QMetaObject*) self->metaObject();
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

QMetaObject* QTextFrame_MetaObject(const QTextFrame* self) {
	return (QMetaObject*) self->metaObject();
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

QTextFrameFormat* QTextFrame_FrameFormat(const QTextFrame* self) {
	QTextFrameFormat ret = self->frameFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextFrameFormat*>(new QTextFrameFormat(ret));
}

QTextCursor* QTextFrame_FirstCursorPosition(const QTextFrame* self) {
	QTextCursor ret = self->firstCursorPosition();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCursor*>(new QTextCursor(ret));
}

QTextCursor* QTextFrame_LastCursorPosition(const QTextFrame* self) {
	QTextCursor ret = self->lastCursorPosition();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCursor*>(new QTextCursor(ret));
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

void QTextFrame_ChildFrames(const QTextFrame* self, QTextFrame*** _out, size_t* _out_len) {
	QList<QTextFrame*> ret = self->childFrames();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTextFrame** __out = static_cast<QTextFrame**>(malloc(sizeof(QTextFrame*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

QTextFrame* QTextFrame_ParentFrame(const QTextFrame* self) {
	return self->parentFrame();
}

QTextFrame__iterator* QTextFrame_Begin(const QTextFrame* self) {
	QTextFrame::iterator ret = self->begin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextFrame::iterator*>(new QTextFrame::iterator(ret));
}

QTextFrame__iterator* QTextFrame_End(const QTextFrame* self) {
	QTextFrame::iterator ret = self->end();
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

bool QTextBlock_IsValid(const QTextBlock* self) {
	return self->isValid();
}

bool QTextBlock_OperatorEqual(const QTextBlock* self, QTextBlock* o) {
	return self->operator==(*o);
}

bool QTextBlock_OperatorNotEqual(const QTextBlock* self, QTextBlock* o) {
	return self->operator!=(*o);
}

bool QTextBlock_OperatorLesser(const QTextBlock* self, QTextBlock* o) {
	return self->operator<(*o);
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
	QTextBlockFormat ret = self->blockFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextBlockFormat*>(new QTextBlockFormat(ret));
}

int QTextBlock_BlockFormatIndex(const QTextBlock* self) {
	return self->blockFormatIndex();
}

QTextCharFormat* QTextBlock_CharFormat(const QTextBlock* self) {
	QTextCharFormat ret = self->charFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCharFormat*>(new QTextCharFormat(ret));
}

int QTextBlock_CharFormatIndex(const QTextBlock* self) {
	return self->charFormatIndex();
}

uintptr_t QTextBlock_TextDirection(const QTextBlock* self) {
	Qt::LayoutDirection ret = self->textDirection();
	return static_cast<uintptr_t>(ret);
}

void QTextBlock_Text(const QTextBlock* self, char** _out, int* _out_Strlen) {
	QString ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextBlock_TextFormats(const QTextBlock* self, QTextLayout__FormatRange*** _out, size_t* _out_len) {
	QVector<QTextLayout::FormatRange> ret = self->textFormats();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QTextLayout__FormatRange** __out = static_cast<QTextLayout__FormatRange**>(malloc(sizeof(QTextLayout__FormatRange**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QTextLayout::FormatRange(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
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
	QTextBlock::iterator ret = self->begin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextBlock::iterator*>(new QTextBlock::iterator(ret));
}

QTextBlock__iterator* QTextBlock_End(const QTextBlock* self) {
	QTextBlock::iterator ret = self->end();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextBlock::iterator*>(new QTextBlock::iterator(ret));
}

QTextBlock* QTextBlock_Next(const QTextBlock* self) {
	QTextBlock ret = self->next();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextBlock*>(new QTextBlock(ret));
}

QTextBlock* QTextBlock_Previous(const QTextBlock* self) {
	QTextBlock ret = self->previous();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextBlock*>(new QTextBlock(ret));
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
	return self->operator==(*o);
}

bool QTextFragment_OperatorNotEqual(const QTextFragment* self, QTextFragment* o) {
	return self->operator!=(*o);
}

bool QTextFragment_OperatorLesser(const QTextFragment* self, QTextFragment* o) {
	return self->operator<(*o);
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
	QTextCharFormat ret = self->charFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCharFormat*>(new QTextCharFormat(ret));
}

int QTextFragment_CharFormatIndex(const QTextFragment* self) {
	return self->charFormatIndex();
}

void QTextFragment_Text(const QTextFragment* self, char** _out, int* _out_Strlen) {
	QString ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextFragment_GlyphRuns(const QTextFragment* self, QGlyphRun*** _out, size_t* _out_len) {
	QList<QGlyphRun> ret = self->glyphRuns();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QGlyphRun** __out = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QGlyphRun(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTextFragment_GlyphRuns1(const QTextFragment* self, int from, QGlyphRun*** _out, size_t* _out_len) {
	QList<QGlyphRun> ret = self->glyphRuns(static_cast<int>(from));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QGlyphRun** __out = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QGlyphRun(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTextFragment_GlyphRuns2(const QTextFragment* self, int from, int length, QGlyphRun*** _out, size_t* _out_len) {
	QList<QGlyphRun> ret = self->glyphRuns(static_cast<int>(from), static_cast<int>(length));
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

QTextFrame* QTextFrame__iterator_ParentFrame(const QTextFrame__iterator* self) {
	return self->parentFrame();
}

QTextFrame* QTextFrame__iterator_CurrentFrame(const QTextFrame__iterator* self) {
	return self->currentFrame();
}

QTextBlock* QTextFrame__iterator_CurrentBlock(const QTextFrame__iterator* self) {
	QTextBlock ret = self->currentBlock();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextBlock*>(new QTextBlock(ret));
}

bool QTextFrame__iterator_AtEnd(const QTextFrame__iterator* self) {
	return self->atEnd();
}

bool QTextFrame__iterator_OperatorEqual(const QTextFrame__iterator* self, QTextFrame__iterator* o) {
	return self->operator==(*o);
}

bool QTextFrame__iterator_OperatorNotEqual(const QTextFrame__iterator* self, QTextFrame__iterator* o) {
	return self->operator!=(*o);
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

QTextFragment* QTextBlock__iterator_Fragment(const QTextBlock__iterator* self) {
	QTextFragment ret = self->fragment();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextFragment*>(new QTextFragment(ret));
}

bool QTextBlock__iterator_AtEnd(const QTextBlock__iterator* self) {
	return self->atEnd();
}

bool QTextBlock__iterator_OperatorEqual(const QTextBlock__iterator* self, QTextBlock__iterator* o) {
	return self->operator==(*o);
}

bool QTextBlock__iterator_OperatorNotEqual(const QTextBlock__iterator* self, QTextBlock__iterator* o) {
	return self->operator!=(*o);
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

