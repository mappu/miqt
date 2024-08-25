#include "gen_qtextobject.h"
#include "qtextobject.h"

#include <QGlyphRun>
#include <QList>
#include <QMetaObject>
#include <QString>
#include <QTextBlock>
#include <QTextBlockFormat>
#include <QTextBlockGroup>
#include <QTextBlockUserData>
#include <QTextCharFormat>
#include <QTextCursor>
#include <QTextDocument>
#include <QTextFormat>
#include <QTextFragment>
#include <QTextFrame>
#include <QTextFrameFormat>
#include <QTextFrameLayoutData>
#include <QTextLayout>
#include <QTextList>
#include <QTextObject>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QTextObject_MetaObject(QTextObject* self) {
	return (QMetaObject*) self->metaObject();
}

void QTextObject_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QTextObject::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextObject_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QTextObject::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QTextFormat* QTextObject_Format(QTextObject* self) {
	QTextFormat ret = self->format();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextFormat*>(new QTextFormat(ret));
}

int QTextObject_FormatIndex(QTextObject* self) {
	return self->formatIndex();
}

QTextDocument* QTextObject_Document(QTextObject* self) {
	return self->document();
}

int QTextObject_ObjectIndex(QTextObject* self) {
	return self->objectIndex();
}

void QTextObject_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QTextObject::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextObject_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTextObject::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextObject_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QTextObject::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextObject_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTextObject::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QMetaObject* QTextBlockGroup_MetaObject(QTextBlockGroup* self) {
	return (QMetaObject*) self->metaObject();
}

void QTextBlockGroup_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QTextBlockGroup::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextBlockGroup_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QTextBlockGroup::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextBlockGroup_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QTextBlockGroup::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextBlockGroup_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTextBlockGroup::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextBlockGroup_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QTextBlockGroup::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextBlockGroup_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
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
	return (QMetaObject*) self->metaObject();
}

void QTextFrame_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QTextFrame::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextFrame_TrUtf8(char* s, char** _out, int* _out_Strlen) {
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
	QTextFrameFormat ret = self->frameFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextFrameFormat*>(new QTextFrameFormat(ret));
}

QTextCursor* QTextFrame_FirstCursorPosition(QTextFrame* self) {
	QTextCursor ret = self->firstCursorPosition();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCursor*>(new QTextCursor(ret));
}

QTextCursor* QTextFrame_LastCursorPosition(QTextFrame* self) {
	QTextCursor ret = self->lastCursorPosition();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCursor*>(new QTextCursor(ret));
}

int QTextFrame_FirstPosition(QTextFrame* self) {
	return self->firstPosition();
}

int QTextFrame_LastPosition(QTextFrame* self) {
	return self->lastPosition();
}

QTextFrameLayoutData* QTextFrame_LayoutData(QTextFrame* self) {
	return self->layoutData();
}

void QTextFrame_SetLayoutData(QTextFrame* self, QTextFrameLayoutData* data) {
	self->setLayoutData(data);
}

void QTextFrame_ChildFrames(QTextFrame* self, QTextFrame*** _out, size_t* _out_len) {
	QList<QTextFrame *> ret = self->childFrames();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTextFrame** __out = static_cast<QTextFrame**>(malloc(sizeof(QTextFrame*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

QTextFrame* QTextFrame_ParentFrame(QTextFrame* self) {
	return self->parentFrame();
}

void QTextFrame_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QTextFrame::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextFrame_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTextFrame::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextFrame_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QTextFrame::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextFrame_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
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
	return self->isValid();
}

bool QTextBlock_OperatorEqual(QTextBlock* self, QTextBlock* o) {
	return self->operator==(*o);
}

bool QTextBlock_OperatorNotEqual(QTextBlock* self, QTextBlock* o) {
	return self->operator!=(*o);
}

bool QTextBlock_OperatorLesser(QTextBlock* self, QTextBlock* o) {
	return self->operator<(*o);
}

int QTextBlock_Position(QTextBlock* self) {
	return self->position();
}

int QTextBlock_Length(QTextBlock* self) {
	return self->length();
}

bool QTextBlock_Contains(QTextBlock* self, int position) {
	return self->contains(static_cast<int>(position));
}

QTextLayout* QTextBlock_Layout(QTextBlock* self) {
	return self->layout();
}

void QTextBlock_ClearLayout(QTextBlock* self) {
	self->clearLayout();
}

QTextBlockFormat* QTextBlock_BlockFormat(QTextBlock* self) {
	QTextBlockFormat ret = self->blockFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextBlockFormat*>(new QTextBlockFormat(ret));
}

int QTextBlock_BlockFormatIndex(QTextBlock* self) {
	return self->blockFormatIndex();
}

QTextCharFormat* QTextBlock_CharFormat(QTextBlock* self) {
	QTextCharFormat ret = self->charFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCharFormat*>(new QTextCharFormat(ret));
}

int QTextBlock_CharFormatIndex(QTextBlock* self) {
	return self->charFormatIndex();
}

void QTextBlock_Text(QTextBlock* self, char** _out, int* _out_Strlen) {
	QString ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QTextDocument* QTextBlock_Document(QTextBlock* self) {
	return (QTextDocument*) self->document();
}

QTextList* QTextBlock_TextList(QTextBlock* self) {
	return self->textList();
}

QTextBlockUserData* QTextBlock_UserData(QTextBlock* self) {
	return self->userData();
}

void QTextBlock_SetUserData(QTextBlock* self, QTextBlockUserData* data) {
	self->setUserData(data);
}

int QTextBlock_UserState(QTextBlock* self) {
	return self->userState();
}

void QTextBlock_SetUserState(QTextBlock* self, int state) {
	self->setUserState(static_cast<int>(state));
}

int QTextBlock_Revision(QTextBlock* self) {
	return self->revision();
}

void QTextBlock_SetRevision(QTextBlock* self, int rev) {
	self->setRevision(static_cast<int>(rev));
}

bool QTextBlock_IsVisible(QTextBlock* self) {
	return self->isVisible();
}

void QTextBlock_SetVisible(QTextBlock* self, bool visible) {
	self->setVisible(visible);
}

int QTextBlock_BlockNumber(QTextBlock* self) {
	return self->blockNumber();
}

int QTextBlock_FirstLineNumber(QTextBlock* self) {
	return self->firstLineNumber();
}

void QTextBlock_SetLineCount(QTextBlock* self, int count) {
	self->setLineCount(static_cast<int>(count));
}

int QTextBlock_LineCount(QTextBlock* self) {
	return self->lineCount();
}

QTextBlock* QTextBlock_Next(QTextBlock* self) {
	QTextBlock ret = self->next();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextBlock*>(new QTextBlock(ret));
}

QTextBlock* QTextBlock_Previous(QTextBlock* self) {
	QTextBlock ret = self->previous();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextBlock*>(new QTextBlock(ret));
}

int QTextBlock_FragmentIndex(QTextBlock* self) {
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

bool QTextFragment_IsValid(QTextFragment* self) {
	return self->isValid();
}

bool QTextFragment_OperatorEqual(QTextFragment* self, QTextFragment* o) {
	return self->operator==(*o);
}

bool QTextFragment_OperatorNotEqual(QTextFragment* self, QTextFragment* o) {
	return self->operator!=(*o);
}

bool QTextFragment_OperatorLesser(QTextFragment* self, QTextFragment* o) {
	return self->operator<(*o);
}

int QTextFragment_Position(QTextFragment* self) {
	return self->position();
}

int QTextFragment_Length(QTextFragment* self) {
	return self->length();
}

bool QTextFragment_Contains(QTextFragment* self, int position) {
	return self->contains(static_cast<int>(position));
}

QTextCharFormat* QTextFragment_CharFormat(QTextFragment* self) {
	QTextCharFormat ret = self->charFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCharFormat*>(new QTextCharFormat(ret));
}

int QTextFragment_CharFormatIndex(QTextFragment* self) {
	return self->charFormatIndex();
}

void QTextFragment_Text(QTextFragment* self, char** _out, int* _out_Strlen) {
	QString ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextFragment_GlyphRuns(QTextFragment* self, QGlyphRun*** _out, size_t* _out_len) {
	QList<QGlyphRun> ret = self->glyphRuns();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QGlyphRun** __out = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QGlyphRun(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTextFragment_GlyphRuns1(QTextFragment* self, int from, QGlyphRun*** _out, size_t* _out_len) {
	QList<QGlyphRun> ret = self->glyphRuns(static_cast<int>(from));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QGlyphRun** __out = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QGlyphRun(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTextFragment_GlyphRuns2(QTextFragment* self, int from, int length, QGlyphRun*** _out, size_t* _out_len) {
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

