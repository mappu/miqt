#define WORKAROUND_INNER_CLASS_DEFINITION_QAbstractTextDocumentLayout__PaintContext
#include <QList>
#include <QMenu>
#include <QMetaObject>
#include <QPagedPaintDevice>
#include <QPainter>
#include <QPlainTextDocumentLayout>
#include <QPlainTextEdit>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QRegularExpression>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextBlock>
#include <QTextCharFormat>
#include <QTextCursor>
#include <QTextDocument>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTextEdit__ExtraSelection
#include <QTextFrame>
#include <QUrl>
#include <QVariant>
#include <QWidget>
#include <qplaintextedit.h>
#include "gen_qplaintextedit.h"
#include "_cgo_export.h"

QPlainTextEdit* QPlainTextEdit_new() {
	return new QPlainTextEdit();
}

QPlainTextEdit* QPlainTextEdit_new2(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QPlainTextEdit(text_QString);
}

QPlainTextEdit* QPlainTextEdit_new3(QWidget* parent) {
	return new QPlainTextEdit(parent);
}

QPlainTextEdit* QPlainTextEdit_new4(struct miqt_string text, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QPlainTextEdit(text_QString, parent);
}

QMetaObject* QPlainTextEdit_MetaObject(const QPlainTextEdit* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPlainTextEdit_Metacast(QPlainTextEdit* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPlainTextEdit_Tr(const char* s) {
	QString _ret = QPlainTextEdit::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPlainTextEdit_SetDocument(QPlainTextEdit* self, QTextDocument* document) {
	self->setDocument(document);
}

QTextDocument* QPlainTextEdit_Document(const QPlainTextEdit* self) {
	return self->document();
}

void QPlainTextEdit_SetPlaceholderText(QPlainTextEdit* self, struct miqt_string placeholderText) {
	QString placeholderText_QString = QString::fromUtf8(placeholderText.data, placeholderText.len);
	self->setPlaceholderText(placeholderText_QString);
}

struct miqt_string QPlainTextEdit_PlaceholderText(const QPlainTextEdit* self) {
	QString _ret = self->placeholderText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPlainTextEdit_SetTextCursor(QPlainTextEdit* self, QTextCursor* cursor) {
	self->setTextCursor(*cursor);
}

QTextCursor* QPlainTextEdit_TextCursor(const QPlainTextEdit* self) {
	return new QTextCursor(self->textCursor());
}

bool QPlainTextEdit_IsReadOnly(const QPlainTextEdit* self) {
	return self->isReadOnly();
}

void QPlainTextEdit_SetReadOnly(QPlainTextEdit* self, bool ro) {
	self->setReadOnly(ro);
}

void QPlainTextEdit_SetTextInteractionFlags(QPlainTextEdit* self, int flags) {
	self->setTextInteractionFlags(static_cast<Qt::TextInteractionFlags>(flags));
}

int QPlainTextEdit_TextInteractionFlags(const QPlainTextEdit* self) {
	Qt::TextInteractionFlags _ret = self->textInteractionFlags();
	return static_cast<int>(_ret);
}

void QPlainTextEdit_MergeCurrentCharFormat(QPlainTextEdit* self, QTextCharFormat* modifier) {
	self->mergeCurrentCharFormat(*modifier);
}

void QPlainTextEdit_SetCurrentCharFormat(QPlainTextEdit* self, QTextCharFormat* format) {
	self->setCurrentCharFormat(*format);
}

QTextCharFormat* QPlainTextEdit_CurrentCharFormat(const QPlainTextEdit* self) {
	return new QTextCharFormat(self->currentCharFormat());
}

bool QPlainTextEdit_TabChangesFocus(const QPlainTextEdit* self) {
	return self->tabChangesFocus();
}

void QPlainTextEdit_SetTabChangesFocus(QPlainTextEdit* self, bool b) {
	self->setTabChangesFocus(b);
}

void QPlainTextEdit_SetDocumentTitle(QPlainTextEdit* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->setDocumentTitle(title_QString);
}

struct miqt_string QPlainTextEdit_DocumentTitle(const QPlainTextEdit* self) {
	QString _ret = self->documentTitle();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPlainTextEdit_IsUndoRedoEnabled(const QPlainTextEdit* self) {
	return self->isUndoRedoEnabled();
}

void QPlainTextEdit_SetUndoRedoEnabled(QPlainTextEdit* self, bool enable) {
	self->setUndoRedoEnabled(enable);
}

void QPlainTextEdit_SetMaximumBlockCount(QPlainTextEdit* self, int maximum) {
	self->setMaximumBlockCount(static_cast<int>(maximum));
}

int QPlainTextEdit_MaximumBlockCount(const QPlainTextEdit* self) {
	return self->maximumBlockCount();
}

int QPlainTextEdit_LineWrapMode(const QPlainTextEdit* self) {
	QPlainTextEdit::LineWrapMode _ret = self->lineWrapMode();
	return static_cast<int>(_ret);
}

void QPlainTextEdit_SetLineWrapMode(QPlainTextEdit* self, int mode) {
	self->setLineWrapMode(static_cast<QPlainTextEdit::LineWrapMode>(mode));
}

int QPlainTextEdit_WordWrapMode(const QPlainTextEdit* self) {
	QTextOption::WrapMode _ret = self->wordWrapMode();
	return static_cast<int>(_ret);
}

void QPlainTextEdit_SetWordWrapMode(QPlainTextEdit* self, int policy) {
	self->setWordWrapMode(static_cast<QTextOption::WrapMode>(policy));
}

void QPlainTextEdit_SetBackgroundVisible(QPlainTextEdit* self, bool visible) {
	self->setBackgroundVisible(visible);
}

bool QPlainTextEdit_BackgroundVisible(const QPlainTextEdit* self) {
	return self->backgroundVisible();
}

void QPlainTextEdit_SetCenterOnScroll(QPlainTextEdit* self, bool enabled) {
	self->setCenterOnScroll(enabled);
}

bool QPlainTextEdit_CenterOnScroll(const QPlainTextEdit* self) {
	return self->centerOnScroll();
}

bool QPlainTextEdit_Find(QPlainTextEdit* self, struct miqt_string exp) {
	QString exp_QString = QString::fromUtf8(exp.data, exp.len);
	return self->find(exp_QString);
}

bool QPlainTextEdit_FindWithExp(QPlainTextEdit* self, QRegularExpression* exp) {
	return self->find(*exp);
}

struct miqt_string QPlainTextEdit_ToPlainText(const QPlainTextEdit* self) {
	QString _ret = self->toPlainText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPlainTextEdit_EnsureCursorVisible(QPlainTextEdit* self) {
	self->ensureCursorVisible();
}

QVariant* QPlainTextEdit_LoadResource(QPlainTextEdit* self, int typeVal, QUrl* name) {
	return new QVariant(self->loadResource(static_cast<int>(typeVal), *name));
}

QMenu* QPlainTextEdit_CreateStandardContextMenu(QPlainTextEdit* self) {
	return self->createStandardContextMenu();
}

QMenu* QPlainTextEdit_CreateStandardContextMenuWithPosition(QPlainTextEdit* self, QPoint* position) {
	return self->createStandardContextMenu(*position);
}

QTextCursor* QPlainTextEdit_CursorForPosition(const QPlainTextEdit* self, QPoint* pos) {
	return new QTextCursor(self->cursorForPosition(*pos));
}

QRect* QPlainTextEdit_CursorRect(const QPlainTextEdit* self, QTextCursor* cursor) {
	return new QRect(self->cursorRect(*cursor));
}

QRect* QPlainTextEdit_CursorRect2(const QPlainTextEdit* self) {
	return new QRect(self->cursorRect());
}

struct miqt_string QPlainTextEdit_AnchorAt(const QPlainTextEdit* self, QPoint* pos) {
	QString _ret = self->anchorAt(*pos);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPlainTextEdit_OverwriteMode(const QPlainTextEdit* self) {
	return self->overwriteMode();
}

void QPlainTextEdit_SetOverwriteMode(QPlainTextEdit* self, bool overwrite) {
	self->setOverwriteMode(overwrite);
}

double QPlainTextEdit_TabStopDistance(const QPlainTextEdit* self) {
	qreal _ret = self->tabStopDistance();
	return static_cast<double>(_ret);
}

void QPlainTextEdit_SetTabStopDistance(QPlainTextEdit* self, double distance) {
	self->setTabStopDistance(static_cast<qreal>(distance));
}

int QPlainTextEdit_CursorWidth(const QPlainTextEdit* self) {
	return self->cursorWidth();
}

void QPlainTextEdit_SetCursorWidth(QPlainTextEdit* self, int width) {
	self->setCursorWidth(static_cast<int>(width));
}

void QPlainTextEdit_SetExtraSelections(QPlainTextEdit* self, struct miqt_array* /* of QTextEdit__ExtraSelection* */ selections) {
	QList<QTextEdit::ExtraSelection> selections_QList;
	selections_QList.reserve(selections->len);
	QTextEdit__ExtraSelection** selections_arr = static_cast<QTextEdit__ExtraSelection**>(selections->data);
	for(size_t i = 0; i < selections->len; ++i) {
		selections_QList.push_back(*(selections_arr[i]));
	}
	self->setExtraSelections(selections_QList);
}

struct miqt_array* QPlainTextEdit_ExtraSelections(const QPlainTextEdit* self) {
	QList<QTextEdit::ExtraSelection> _ret = self->extraSelections();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTextEdit__ExtraSelection** _arr = static_cast<QTextEdit__ExtraSelection**>(malloc(sizeof(QTextEdit__ExtraSelection*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QTextEdit::ExtraSelection(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

void QPlainTextEdit_MoveCursor(QPlainTextEdit* self, int operation) {
	self->moveCursor(static_cast<QTextCursor::MoveOperation>(operation));
}

bool QPlainTextEdit_CanPaste(const QPlainTextEdit* self) {
	return self->canPaste();
}

void QPlainTextEdit_Print(const QPlainTextEdit* self, QPagedPaintDevice* printer) {
	self->print(printer);
}

int QPlainTextEdit_BlockCount(const QPlainTextEdit* self) {
	return self->blockCount();
}

QVariant* QPlainTextEdit_InputMethodQuery(const QPlainTextEdit* self, int property) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

QVariant* QPlainTextEdit_InputMethodQuery2(const QPlainTextEdit* self, int query, QVariant* argument) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query), *argument));
}

void QPlainTextEdit_SetPlainText(QPlainTextEdit* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setPlainText(text_QString);
}

void QPlainTextEdit_Cut(QPlainTextEdit* self) {
	self->cut();
}

void QPlainTextEdit_Copy(QPlainTextEdit* self) {
	self->copy();
}

void QPlainTextEdit_Paste(QPlainTextEdit* self) {
	self->paste();
}

void QPlainTextEdit_Undo(QPlainTextEdit* self) {
	self->undo();
}

void QPlainTextEdit_Redo(QPlainTextEdit* self) {
	self->redo();
}

void QPlainTextEdit_Clear(QPlainTextEdit* self) {
	self->clear();
}

void QPlainTextEdit_SelectAll(QPlainTextEdit* self) {
	self->selectAll();
}

void QPlainTextEdit_InsertPlainText(QPlainTextEdit* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insertPlainText(text_QString);
}

void QPlainTextEdit_AppendPlainText(QPlainTextEdit* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->appendPlainText(text_QString);
}

void QPlainTextEdit_AppendHtml(QPlainTextEdit* self, struct miqt_string html) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->appendHtml(html_QString);
}

void QPlainTextEdit_CenterCursor(QPlainTextEdit* self) {
	self->centerCursor();
}

void QPlainTextEdit_ZoomIn(QPlainTextEdit* self) {
	self->zoomIn();
}

void QPlainTextEdit_ZoomOut(QPlainTextEdit* self) {
	self->zoomOut();
}

void QPlainTextEdit_TextChanged(QPlainTextEdit* self) {
	self->textChanged();
}

void QPlainTextEdit_connect_TextChanged(QPlainTextEdit* self, intptr_t slot) {
	QPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)()>(&QPlainTextEdit::textChanged), self, [=]() {
		miqt_exec_callback_QPlainTextEdit_TextChanged(slot);
	});
}

void QPlainTextEdit_UndoAvailable(QPlainTextEdit* self, bool b) {
	self->undoAvailable(b);
}

void QPlainTextEdit_connect_UndoAvailable(QPlainTextEdit* self, intptr_t slot) {
	QPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)(bool)>(&QPlainTextEdit::undoAvailable), self, [=](bool b) {
		bool sigval1 = b;
		miqt_exec_callback_QPlainTextEdit_UndoAvailable(slot, sigval1);
	});
}

void QPlainTextEdit_RedoAvailable(QPlainTextEdit* self, bool b) {
	self->redoAvailable(b);
}

void QPlainTextEdit_connect_RedoAvailable(QPlainTextEdit* self, intptr_t slot) {
	QPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)(bool)>(&QPlainTextEdit::redoAvailable), self, [=](bool b) {
		bool sigval1 = b;
		miqt_exec_callback_QPlainTextEdit_RedoAvailable(slot, sigval1);
	});
}

void QPlainTextEdit_CopyAvailable(QPlainTextEdit* self, bool b) {
	self->copyAvailable(b);
}

void QPlainTextEdit_connect_CopyAvailable(QPlainTextEdit* self, intptr_t slot) {
	QPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)(bool)>(&QPlainTextEdit::copyAvailable), self, [=](bool b) {
		bool sigval1 = b;
		miqt_exec_callback_QPlainTextEdit_CopyAvailable(slot, sigval1);
	});
}

void QPlainTextEdit_SelectionChanged(QPlainTextEdit* self) {
	self->selectionChanged();
}

void QPlainTextEdit_connect_SelectionChanged(QPlainTextEdit* self, intptr_t slot) {
	QPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)()>(&QPlainTextEdit::selectionChanged), self, [=]() {
		miqt_exec_callback_QPlainTextEdit_SelectionChanged(slot);
	});
}

void QPlainTextEdit_CursorPositionChanged(QPlainTextEdit* self) {
	self->cursorPositionChanged();
}

void QPlainTextEdit_connect_CursorPositionChanged(QPlainTextEdit* self, intptr_t slot) {
	QPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)()>(&QPlainTextEdit::cursorPositionChanged), self, [=]() {
		miqt_exec_callback_QPlainTextEdit_CursorPositionChanged(slot);
	});
}

void QPlainTextEdit_UpdateRequest(QPlainTextEdit* self, QRect* rect, int dy) {
	self->updateRequest(*rect, static_cast<int>(dy));
}

void QPlainTextEdit_connect_UpdateRequest(QPlainTextEdit* self, intptr_t slot) {
	QPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)(const QRect&, int)>(&QPlainTextEdit::updateRequest), self, [=](const QRect& rect, int dy) {
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		int sigval2 = dy;
		miqt_exec_callback_QPlainTextEdit_UpdateRequest(slot, sigval1, sigval2);
	});
}

void QPlainTextEdit_BlockCountChanged(QPlainTextEdit* self, int newBlockCount) {
	self->blockCountChanged(static_cast<int>(newBlockCount));
}

void QPlainTextEdit_connect_BlockCountChanged(QPlainTextEdit* self, intptr_t slot) {
	QPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)(int)>(&QPlainTextEdit::blockCountChanged), self, [=](int newBlockCount) {
		int sigval1 = newBlockCount;
		miqt_exec_callback_QPlainTextEdit_BlockCountChanged(slot, sigval1);
	});
}

void QPlainTextEdit_ModificationChanged(QPlainTextEdit* self, bool param1) {
	self->modificationChanged(param1);
}

void QPlainTextEdit_connect_ModificationChanged(QPlainTextEdit* self, intptr_t slot) {
	QPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)(bool)>(&QPlainTextEdit::modificationChanged), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QPlainTextEdit_ModificationChanged(slot, sigval1);
	});
}

struct miqt_string QPlainTextEdit_Tr2(const char* s, const char* c) {
	QString _ret = QPlainTextEdit::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPlainTextEdit_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPlainTextEdit::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPlainTextEdit_Find2(QPlainTextEdit* self, struct miqt_string exp, int options) {
	QString exp_QString = QString::fromUtf8(exp.data, exp.len);
	return self->find(exp_QString, static_cast<QTextDocument::FindFlags>(options));
}

bool QPlainTextEdit_Find22(QPlainTextEdit* self, QRegularExpression* exp, int options) {
	return self->find(*exp, static_cast<QTextDocument::FindFlags>(options));
}

void QPlainTextEdit_MoveCursor2(QPlainTextEdit* self, int operation, int mode) {
	self->moveCursor(static_cast<QTextCursor::MoveOperation>(operation), static_cast<QTextCursor::MoveMode>(mode));
}

void QPlainTextEdit_ZoomIn1(QPlainTextEdit* self, int rangeVal) {
	self->zoomIn(static_cast<int>(rangeVal));
}

void QPlainTextEdit_ZoomOut1(QPlainTextEdit* self, int rangeVal) {
	self->zoomOut(static_cast<int>(rangeVal));
}

void QPlainTextEdit_Delete(QPlainTextEdit* self) {
	delete self;
}

QPlainTextDocumentLayout* QPlainTextDocumentLayout_new(QTextDocument* document) {
	return new QPlainTextDocumentLayout(document);
}

QMetaObject* QPlainTextDocumentLayout_MetaObject(const QPlainTextDocumentLayout* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPlainTextDocumentLayout_Metacast(QPlainTextDocumentLayout* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPlainTextDocumentLayout_Tr(const char* s) {
	QString _ret = QPlainTextDocumentLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPlainTextDocumentLayout_Draw(QPlainTextDocumentLayout* self, QPainter* param1, QAbstractTextDocumentLayout__PaintContext* param2) {
	self->draw(param1, *param2);
}

int QPlainTextDocumentLayout_HitTest(const QPlainTextDocumentLayout* self, QPointF* param1, int param2) {
	return self->hitTest(*param1, static_cast<Qt::HitTestAccuracy>(param2));
}

int QPlainTextDocumentLayout_PageCount(const QPlainTextDocumentLayout* self) {
	return self->pageCount();
}

QSizeF* QPlainTextDocumentLayout_DocumentSize(const QPlainTextDocumentLayout* self) {
	return new QSizeF(self->documentSize());
}

QRectF* QPlainTextDocumentLayout_FrameBoundingRect(const QPlainTextDocumentLayout* self, QTextFrame* param1) {
	return new QRectF(self->frameBoundingRect(param1));
}

QRectF* QPlainTextDocumentLayout_BlockBoundingRect(const QPlainTextDocumentLayout* self, QTextBlock* block) {
	return new QRectF(self->blockBoundingRect(*block));
}

void QPlainTextDocumentLayout_EnsureBlockLayout(const QPlainTextDocumentLayout* self, QTextBlock* block) {
	self->ensureBlockLayout(*block);
}

void QPlainTextDocumentLayout_SetCursorWidth(QPlainTextDocumentLayout* self, int width) {
	self->setCursorWidth(static_cast<int>(width));
}

int QPlainTextDocumentLayout_CursorWidth(const QPlainTextDocumentLayout* self) {
	return self->cursorWidth();
}

void QPlainTextDocumentLayout_RequestUpdate(QPlainTextDocumentLayout* self) {
	self->requestUpdate();
}

struct miqt_string QPlainTextDocumentLayout_Tr2(const char* s, const char* c) {
	QString _ret = QPlainTextDocumentLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPlainTextDocumentLayout_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPlainTextDocumentLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPlainTextDocumentLayout_Delete(QPlainTextDocumentLayout* self) {
	delete self;
}

