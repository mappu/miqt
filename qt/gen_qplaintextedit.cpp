#include "gen_qplaintextedit.h"
#include "qplaintextedit.h"

#include <QMenu>
#include <QMetaObject>
#include <QPagedPaintDevice>
#include <QPlainTextDocumentLayout>
#include <QPlainTextEdit>
#include <QPoint>
#include <QRect>
#include <QRectF>
#include <QSizeF>
#include <QString>
#include <QTextBlock>
#include <QTextCharFormat>
#include <QTextCursor>
#include <QTextDocument>
#include <QTextFrame>
#include <QUrl>
#include <QVariant>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QPlainTextEdit* QPlainTextEdit_new() {
	return new QPlainTextEdit();
}

QPlainTextEdit* QPlainTextEdit_new2(const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QPlainTextEdit(text_QString);
}

QPlainTextEdit* QPlainTextEdit_new3(QWidget* parent) {
	return new QPlainTextEdit(parent);
}

QPlainTextEdit* QPlainTextEdit_new4(const char* text, size_t text_Strlen, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QPlainTextEdit(text_QString, parent);
}

QMetaObject* QPlainTextEdit_MetaObject(QPlainTextEdit* self) {
	return (QMetaObject*) self->metaObject();
}

void QPlainTextEdit_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QPlainTextEdit::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPlainTextEdit_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QPlainTextEdit::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPlainTextEdit_SetDocument(QPlainTextEdit* self, QTextDocument* document) {
	self->setDocument(document);
}

QTextDocument* QPlainTextEdit_Document(QPlainTextEdit* self) {
	return self->document();
}

void QPlainTextEdit_SetPlaceholderText(QPlainTextEdit* self, const char* placeholderText, size_t placeholderText_Strlen) {
	QString placeholderText_QString = QString::fromUtf8(placeholderText, placeholderText_Strlen);
	self->setPlaceholderText(placeholderText_QString);
}

void QPlainTextEdit_PlaceholderText(QPlainTextEdit* self, char** _out, int* _out_Strlen) {
	QString ret = self->placeholderText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPlainTextEdit_SetTextCursor(QPlainTextEdit* self, QTextCursor* cursor) {
	self->setTextCursor(*cursor);
}

QTextCursor* QPlainTextEdit_TextCursor(QPlainTextEdit* self) {
	QTextCursor ret = self->textCursor();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCursor*>(new QTextCursor(ret));
}

bool QPlainTextEdit_IsReadOnly(QPlainTextEdit* self) {
	return self->isReadOnly();
}

void QPlainTextEdit_SetReadOnly(QPlainTextEdit* self, bool ro) {
	self->setReadOnly(ro);
}

void QPlainTextEdit_MergeCurrentCharFormat(QPlainTextEdit* self, QTextCharFormat* modifier) {
	self->mergeCurrentCharFormat(*modifier);
}

void QPlainTextEdit_SetCurrentCharFormat(QPlainTextEdit* self, QTextCharFormat* format) {
	self->setCurrentCharFormat(*format);
}

QTextCharFormat* QPlainTextEdit_CurrentCharFormat(QPlainTextEdit* self) {
	QTextCharFormat ret = self->currentCharFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCharFormat*>(new QTextCharFormat(ret));
}

bool QPlainTextEdit_TabChangesFocus(QPlainTextEdit* self) {
	return self->tabChangesFocus();
}

void QPlainTextEdit_SetTabChangesFocus(QPlainTextEdit* self, bool b) {
	self->setTabChangesFocus(b);
}

void QPlainTextEdit_SetDocumentTitle(QPlainTextEdit* self, const char* title, size_t title_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	self->setDocumentTitle(title_QString);
}

void QPlainTextEdit_DocumentTitle(QPlainTextEdit* self, char** _out, int* _out_Strlen) {
	QString ret = self->documentTitle();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QPlainTextEdit_IsUndoRedoEnabled(QPlainTextEdit* self) {
	return self->isUndoRedoEnabled();
}

void QPlainTextEdit_SetUndoRedoEnabled(QPlainTextEdit* self, bool enable) {
	self->setUndoRedoEnabled(enable);
}

void QPlainTextEdit_SetMaximumBlockCount(QPlainTextEdit* self, int maximum) {
	self->setMaximumBlockCount(static_cast<int>(maximum));
}

int QPlainTextEdit_MaximumBlockCount(QPlainTextEdit* self) {
	return self->maximumBlockCount();
}

void QPlainTextEdit_SetBackgroundVisible(QPlainTextEdit* self, bool visible) {
	self->setBackgroundVisible(visible);
}

bool QPlainTextEdit_BackgroundVisible(QPlainTextEdit* self) {
	return self->backgroundVisible();
}

void QPlainTextEdit_SetCenterOnScroll(QPlainTextEdit* self, bool enabled) {
	self->setCenterOnScroll(enabled);
}

bool QPlainTextEdit_CenterOnScroll(QPlainTextEdit* self) {
	return self->centerOnScroll();
}

void QPlainTextEdit_ToPlainText(QPlainTextEdit* self, char** _out, int* _out_Strlen) {
	QString ret = self->toPlainText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPlainTextEdit_EnsureCursorVisible(QPlainTextEdit* self) {
	self->ensureCursorVisible();
}

QVariant* QPlainTextEdit_LoadResource(QPlainTextEdit* self, int typeVal, QUrl* name) {
	QVariant ret = self->loadResource(static_cast<int>(typeVal), *name);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

QMenu* QPlainTextEdit_CreateStandardContextMenu(QPlainTextEdit* self) {
	return self->createStandardContextMenu();
}

QMenu* QPlainTextEdit_CreateStandardContextMenuWithPosition(QPlainTextEdit* self, QPoint* position) {
	return self->createStandardContextMenu(*position);
}

QTextCursor* QPlainTextEdit_CursorForPosition(QPlainTextEdit* self, QPoint* pos) {
	QTextCursor ret = self->cursorForPosition(*pos);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCursor*>(new QTextCursor(ret));
}

QRect* QPlainTextEdit_CursorRect(QPlainTextEdit* self, QTextCursor* cursor) {
	QRect ret = self->cursorRect(*cursor);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QPlainTextEdit_CursorRect2(QPlainTextEdit* self) {
	QRect ret = self->cursorRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QPlainTextEdit_AnchorAt(QPlainTextEdit* self, QPoint* pos, char** _out, int* _out_Strlen) {
	QString ret = self->anchorAt(*pos);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QPlainTextEdit_OverwriteMode(QPlainTextEdit* self) {
	return self->overwriteMode();
}

void QPlainTextEdit_SetOverwriteMode(QPlainTextEdit* self, bool overwrite) {
	self->setOverwriteMode(overwrite);
}

int QPlainTextEdit_TabStopWidth(QPlainTextEdit* self) {
	return self->tabStopWidth();
}

void QPlainTextEdit_SetTabStopWidth(QPlainTextEdit* self, int width) {
	self->setTabStopWidth(static_cast<int>(width));
}

double QPlainTextEdit_TabStopDistance(QPlainTextEdit* self) {
	return self->tabStopDistance();
}

void QPlainTextEdit_SetTabStopDistance(QPlainTextEdit* self, double distance) {
	self->setTabStopDistance(static_cast<qreal>(distance));
}

int QPlainTextEdit_CursorWidth(QPlainTextEdit* self) {
	return self->cursorWidth();
}

void QPlainTextEdit_SetCursorWidth(QPlainTextEdit* self, int width) {
	self->setCursorWidth(static_cast<int>(width));
}

bool QPlainTextEdit_CanPaste(QPlainTextEdit* self) {
	return self->canPaste();
}

void QPlainTextEdit_Print(QPlainTextEdit* self, QPagedPaintDevice* printer) {
	self->print(printer);
}

int QPlainTextEdit_BlockCount(QPlainTextEdit* self) {
	return self->blockCount();
}

void QPlainTextEdit_SetPlainText(QPlainTextEdit* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
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

void QPlainTextEdit_InsertPlainText(QPlainTextEdit* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->insertPlainText(text_QString);
}

void QPlainTextEdit_AppendPlainText(QPlainTextEdit* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->appendPlainText(text_QString);
}

void QPlainTextEdit_AppendHtml(QPlainTextEdit* self, const char* html, size_t html_Strlen) {
	QString html_QString = QString::fromUtf8(html, html_Strlen);
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

void QPlainTextEdit_connect_TextChanged(QPlainTextEdit* self, void* slot) {
	QPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)()>(&QPlainTextEdit::textChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QPlainTextEdit_UndoAvailable(QPlainTextEdit* self, bool b) {
	self->undoAvailable(b);
}

void QPlainTextEdit_connect_UndoAvailable(QPlainTextEdit* self, void* slot) {
	QPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)(bool)>(&QPlainTextEdit::undoAvailable), self, [=](bool b) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QPlainTextEdit_RedoAvailable(QPlainTextEdit* self, bool b) {
	self->redoAvailable(b);
}

void QPlainTextEdit_connect_RedoAvailable(QPlainTextEdit* self, void* slot) {
	QPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)(bool)>(&QPlainTextEdit::redoAvailable), self, [=](bool b) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QPlainTextEdit_CopyAvailable(QPlainTextEdit* self, bool b) {
	self->copyAvailable(b);
}

void QPlainTextEdit_connect_CopyAvailable(QPlainTextEdit* self, void* slot) {
	QPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)(bool)>(&QPlainTextEdit::copyAvailable), self, [=](bool b) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QPlainTextEdit_SelectionChanged(QPlainTextEdit* self) {
	self->selectionChanged();
}

void QPlainTextEdit_connect_SelectionChanged(QPlainTextEdit* self, void* slot) {
	QPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)()>(&QPlainTextEdit::selectionChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QPlainTextEdit_CursorPositionChanged(QPlainTextEdit* self) {
	self->cursorPositionChanged();
}

void QPlainTextEdit_connect_CursorPositionChanged(QPlainTextEdit* self, void* slot) {
	QPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)()>(&QPlainTextEdit::cursorPositionChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QPlainTextEdit_UpdateRequest(QPlainTextEdit* self, QRect* rect, int dy) {
	self->updateRequest(*rect, static_cast<int>(dy));
}

void QPlainTextEdit_connect_UpdateRequest(QPlainTextEdit* self, void* slot) {
	QPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)(const QRect&, int)>(&QPlainTextEdit::updateRequest), self, [=](const QRect& rect, int dy) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QPlainTextEdit_BlockCountChanged(QPlainTextEdit* self, int newBlockCount) {
	self->blockCountChanged(static_cast<int>(newBlockCount));
}

void QPlainTextEdit_connect_BlockCountChanged(QPlainTextEdit* self, void* slot) {
	QPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)(int)>(&QPlainTextEdit::blockCountChanged), self, [=](int newBlockCount) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QPlainTextEdit_ModificationChanged(QPlainTextEdit* self, bool param1) {
	self->modificationChanged(param1);
}

void QPlainTextEdit_connect_ModificationChanged(QPlainTextEdit* self, void* slot) {
	QPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)(bool)>(&QPlainTextEdit::modificationChanged), self, [=](bool param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QPlainTextEdit_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QPlainTextEdit::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPlainTextEdit_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QPlainTextEdit::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPlainTextEdit_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QPlainTextEdit::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPlainTextEdit_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QPlainTextEdit::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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

QMetaObject* QPlainTextDocumentLayout_MetaObject(QPlainTextDocumentLayout* self) {
	return (QMetaObject*) self->metaObject();
}

void QPlainTextDocumentLayout_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QPlainTextDocumentLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPlainTextDocumentLayout_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QPlainTextDocumentLayout::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QPlainTextDocumentLayout_PageCount(QPlainTextDocumentLayout* self) {
	return self->pageCount();
}

QSizeF* QPlainTextDocumentLayout_DocumentSize(QPlainTextDocumentLayout* self) {
	QSizeF ret = self->documentSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

QRectF* QPlainTextDocumentLayout_FrameBoundingRect(QPlainTextDocumentLayout* self, QTextFrame* param1) {
	QRectF ret = self->frameBoundingRect(param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRectF* QPlainTextDocumentLayout_BlockBoundingRect(QPlainTextDocumentLayout* self, QTextBlock* block) {
	QRectF ret = self->blockBoundingRect(*block);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

void QPlainTextDocumentLayout_EnsureBlockLayout(QPlainTextDocumentLayout* self, QTextBlock* block) {
	self->ensureBlockLayout(*block);
}

void QPlainTextDocumentLayout_SetCursorWidth(QPlainTextDocumentLayout* self, int width) {
	self->setCursorWidth(static_cast<int>(width));
}

int QPlainTextDocumentLayout_CursorWidth(QPlainTextDocumentLayout* self) {
	return self->cursorWidth();
}

void QPlainTextDocumentLayout_RequestUpdate(QPlainTextDocumentLayout* self) {
	self->requestUpdate();
}

void QPlainTextDocumentLayout_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QPlainTextDocumentLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPlainTextDocumentLayout_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QPlainTextDocumentLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPlainTextDocumentLayout_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QPlainTextDocumentLayout::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPlainTextDocumentLayout_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QPlainTextDocumentLayout::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPlainTextDocumentLayout_Delete(QPlainTextDocumentLayout* self) {
	delete self;
}

