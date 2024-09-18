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
#include "_cgo_export.h"

QMetaObject* QTextObject_MetaObject(const QTextObject* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QTextObject_Tr(const char* s) {
	QString _ret = QTextObject::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTextObject_TrUtf8(const char* s) {
	QString _ret = QTextObject::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
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

struct miqt_string* QTextObject_Tr2(const char* s, const char* c) {
	QString _ret = QTextObject::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTextObject_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTextObject::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTextObject_TrUtf82(const char* s, const char* c) {
	QString _ret = QTextObject::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTextObject_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QTextObject::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QMetaObject* QTextBlockGroup_MetaObject(const QTextBlockGroup* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QTextBlockGroup_Tr(const char* s) {
	QString _ret = QTextBlockGroup::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTextBlockGroup_TrUtf8(const char* s) {
	QString _ret = QTextBlockGroup::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTextBlockGroup_Tr2(const char* s, const char* c) {
	QString _ret = QTextBlockGroup::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTextBlockGroup_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTextBlockGroup::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTextBlockGroup_TrUtf82(const char* s, const char* c) {
	QString _ret = QTextBlockGroup::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTextBlockGroup_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QTextBlockGroup::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
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

struct miqt_string* QTextFrame_Tr(const char* s) {
	QString _ret = QTextFrame::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTextFrame_TrUtf8(const char* s) {
	QString _ret = QTextFrame::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
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

struct miqt_array* QTextFrame_ChildFrames(const QTextFrame* self) {
	QList<QTextFrame *> _ret = self->childFrames();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTextFrame** _arr = static_cast<QTextFrame**>(malloc(sizeof(QTextFrame*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
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

struct miqt_string* QTextFrame_Tr2(const char* s, const char* c) {
	QString _ret = QTextFrame::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTextFrame_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTextFrame::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTextFrame_TrUtf82(const char* s, const char* c) {
	QString _ret = QTextFrame::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTextFrame_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QTextFrame::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
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

struct miqt_string* QTextBlock_Text(const QTextBlock* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_array* QTextBlock_TextFormats(const QTextBlock* self) {
	QVector<QTextLayout::FormatRange> _ret = self->textFormats();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTextLayout__FormatRange** _arr = static_cast<QTextLayout__FormatRange**>(malloc(sizeof(QTextLayout__FormatRange*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QTextLayout::FormatRange(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
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
	return new QTextCharFormat(self->charFormat());
}

int QTextFragment_CharFormatIndex(const QTextFragment* self) {
	return self->charFormatIndex();
}

struct miqt_string* QTextFragment_Text(const QTextFragment* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_array* QTextFragment_GlyphRuns(const QTextFragment* self) {
	QList<QGlyphRun> _ret = self->glyphRuns();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGlyphRun** _arr = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QGlyphRun(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QTextFragment_GlyphRuns1(const QTextFragment* self, int from) {
	QList<QGlyphRun> _ret = self->glyphRuns(static_cast<int>(from));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGlyphRun** _arr = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QGlyphRun(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QTextFragment_GlyphRuns2(const QTextFragment* self, int from, int length) {
	QList<QGlyphRun> _ret = self->glyphRuns(static_cast<int>(from), static_cast<int>(length));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGlyphRun** _arr = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QGlyphRun(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
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

void QTextFrame__iterator_OperatorAssign(QTextFrame__iterator* self, QTextFrame__iterator* o) {
	self->operator=(*o);
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
	return self->operator==(*o);
}

bool QTextFrame__iterator_OperatorNotEqual(const QTextFrame__iterator* self, QTextFrame__iterator* o) {
	return self->operator!=(*o);
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

QTextBlock__iterator* QTextBlock__iterator_new2(QTextBlock__iterator* o) {
	return new QTextBlock::iterator(*o);
}

void QTextBlock__iterator_OperatorAssign(QTextBlock__iterator* self, QTextBlock__iterator* o) {
	self->operator=(*o);
}

QTextFragment* QTextBlock__iterator_Fragment(const QTextBlock__iterator* self) {
	return new QTextFragment(self->fragment());
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

