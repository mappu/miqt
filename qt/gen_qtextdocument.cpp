#include <QAbstractTextDocumentLayout>
#include <QAbstractUndoItem>
#include <QByteArray>
#include <QChar>
#include <QFont>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QPagedPaintDevice>
#include <QPainter>
#include <QRectF>
#include <QRegExp>
#include <QRegularExpression>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextBlock>
#include <QTextCursor>
#include <QTextDocument>
#include <QTextFormat>
#include <QTextFrame>
#include <QTextObject>
#include <QTextOption>
#include <QUrl>
#include <QVariant>
#include "qtextdocument.h"

#include "gen_qtextdocument.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

void QAbstractUndoItem_Undo(QAbstractUndoItem* self) {
	self->undo();
}

void QAbstractUndoItem_Redo(QAbstractUndoItem* self) {
	self->redo();
}

void QAbstractUndoItem_Delete(QAbstractUndoItem* self) {
	delete self;
}

QTextDocument* QTextDocument_new() {
	return new QTextDocument();
}

QTextDocument* QTextDocument_new2(const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QTextDocument(text_QString);
}

QTextDocument* QTextDocument_new3(QObject* parent) {
	return new QTextDocument(parent);
}

QTextDocument* QTextDocument_new4(const char* text, size_t text_Strlen, QObject* parent) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QTextDocument(text_QString, parent);
}

QMetaObject* QTextDocument_MetaObject(const QTextDocument* self) {
	return (QMetaObject*) self->metaObject();
}

void QTextDocument_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QTextDocument::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextDocument_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QTextDocument::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QTextDocument* QTextDocument_Clone(const QTextDocument* self) {
	return self->clone();
}

bool QTextDocument_IsEmpty(const QTextDocument* self) {
	return self->isEmpty();
}

void QTextDocument_Clear(QTextDocument* self) {
	self->clear();
}

void QTextDocument_SetUndoRedoEnabled(QTextDocument* self, bool enable) {
	self->setUndoRedoEnabled(enable);
}

bool QTextDocument_IsUndoRedoEnabled(const QTextDocument* self) {
	return self->isUndoRedoEnabled();
}

bool QTextDocument_IsUndoAvailable(const QTextDocument* self) {
	return self->isUndoAvailable();
}

bool QTextDocument_IsRedoAvailable(const QTextDocument* self) {
	return self->isRedoAvailable();
}

int QTextDocument_AvailableUndoSteps(const QTextDocument* self) {
	return self->availableUndoSteps();
}

int QTextDocument_AvailableRedoSteps(const QTextDocument* self) {
	return self->availableRedoSteps();
}

int QTextDocument_Revision(const QTextDocument* self) {
	return self->revision();
}

void QTextDocument_SetDocumentLayout(QTextDocument* self, QAbstractTextDocumentLayout* layout) {
	self->setDocumentLayout(layout);
}

QAbstractTextDocumentLayout* QTextDocument_DocumentLayout(const QTextDocument* self) {
	return self->documentLayout();
}

void QTextDocument_SetMetaInformation(QTextDocument* self, uintptr_t info, const char* param2, size_t param2_Strlen) {
	QString param2_QString = QString::fromUtf8(param2, param2_Strlen);
	self->setMetaInformation(static_cast<QTextDocument::MetaInformation>(info), param2_QString);
}

void QTextDocument_MetaInformation(const QTextDocument* self, uintptr_t info, char** _out, int* _out_Strlen) {
	QString ret = self->metaInformation(static_cast<QTextDocument::MetaInformation>(info));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextDocument_ToHtml(const QTextDocument* self, char** _out, int* _out_Strlen) {
	QString ret = self->toHtml();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextDocument_SetHtml(QTextDocument* self, const char* html, size_t html_Strlen) {
	QString html_QString = QString::fromUtf8(html, html_Strlen);
	self->setHtml(html_QString);
}

void QTextDocument_ToMarkdown(const QTextDocument* self, char** _out, int* _out_Strlen) {
	QString ret = self->toMarkdown();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextDocument_SetMarkdown(QTextDocument* self, const char* markdown, size_t markdown_Strlen) {
	QString markdown_QString = QString::fromUtf8(markdown, markdown_Strlen);
	self->setMarkdown(markdown_QString);
}

void QTextDocument_ToRawText(const QTextDocument* self, char** _out, int* _out_Strlen) {
	QString ret = self->toRawText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextDocument_ToPlainText(const QTextDocument* self, char** _out, int* _out_Strlen) {
	QString ret = self->toPlainText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextDocument_SetPlainText(QTextDocument* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setPlainText(text_QString);
}

QChar* QTextDocument_CharacterAt(const QTextDocument* self, int pos) {
	QChar ret = self->characterAt(static_cast<int>(pos));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

QTextCursor* QTextDocument_Find(const QTextDocument* self, const char* subString, size_t subString_Strlen) {
	QString subString_QString = QString::fromUtf8(subString, subString_Strlen);
	QTextCursor ret = self->find(subString_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCursor*>(new QTextCursor(ret));
}

QTextCursor* QTextDocument_Find2(const QTextDocument* self, const char* subString, size_t subString_Strlen, QTextCursor* cursor) {
	QString subString_QString = QString::fromUtf8(subString, subString_Strlen);
	QTextCursor ret = self->find(subString_QString, *cursor);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCursor*>(new QTextCursor(ret));
}

QTextCursor* QTextDocument_FindWithExpr(const QTextDocument* self, QRegExp* expr) {
	QTextCursor ret = self->find(*expr);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCursor*>(new QTextCursor(ret));
}

QTextCursor* QTextDocument_Find3(const QTextDocument* self, QRegExp* expr, QTextCursor* cursor) {
	QTextCursor ret = self->find(*expr, *cursor);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCursor*>(new QTextCursor(ret));
}

QTextCursor* QTextDocument_Find4(const QTextDocument* self, QRegularExpression* expr) {
	QTextCursor ret = self->find(*expr);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCursor*>(new QTextCursor(ret));
}

QTextCursor* QTextDocument_Find5(const QTextDocument* self, QRegularExpression* expr, QTextCursor* cursor) {
	QTextCursor ret = self->find(*expr, *cursor);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCursor*>(new QTextCursor(ret));
}

QTextFrame* QTextDocument_FrameAt(const QTextDocument* self, int pos) {
	return self->frameAt(static_cast<int>(pos));
}

QTextFrame* QTextDocument_RootFrame(const QTextDocument* self) {
	return self->rootFrame();
}

QTextObject* QTextDocument_Object(const QTextDocument* self, int objectIndex) {
	return self->object(static_cast<int>(objectIndex));
}

QTextObject* QTextDocument_ObjectForFormat(const QTextDocument* self, QTextFormat* param1) {
	return self->objectForFormat(*param1);
}

QTextBlock* QTextDocument_FindBlock(const QTextDocument* self, int pos) {
	QTextBlock ret = self->findBlock(static_cast<int>(pos));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextBlock*>(new QTextBlock(ret));
}

QTextBlock* QTextDocument_FindBlockByNumber(const QTextDocument* self, int blockNumber) {
	QTextBlock ret = self->findBlockByNumber(static_cast<int>(blockNumber));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextBlock*>(new QTextBlock(ret));
}

QTextBlock* QTextDocument_FindBlockByLineNumber(const QTextDocument* self, int blockNumber) {
	QTextBlock ret = self->findBlockByLineNumber(static_cast<int>(blockNumber));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextBlock*>(new QTextBlock(ret));
}

QTextBlock* QTextDocument_Begin(const QTextDocument* self) {
	QTextBlock ret = self->begin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextBlock*>(new QTextBlock(ret));
}

QTextBlock* QTextDocument_End(const QTextDocument* self) {
	QTextBlock ret = self->end();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextBlock*>(new QTextBlock(ret));
}

QTextBlock* QTextDocument_FirstBlock(const QTextDocument* self) {
	QTextBlock ret = self->firstBlock();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextBlock*>(new QTextBlock(ret));
}

QTextBlock* QTextDocument_LastBlock(const QTextDocument* self) {
	QTextBlock ret = self->lastBlock();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextBlock*>(new QTextBlock(ret));
}

void QTextDocument_SetPageSize(QTextDocument* self, QSizeF* size) {
	self->setPageSize(*size);
}

QSizeF* QTextDocument_PageSize(const QTextDocument* self) {
	QSizeF ret = self->pageSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

void QTextDocument_SetDefaultFont(QTextDocument* self, QFont* font) {
	self->setDefaultFont(*font);
}

QFont* QTextDocument_DefaultFont(const QTextDocument* self) {
	QFont ret = self->defaultFont();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(ret));
}

int QTextDocument_PageCount(const QTextDocument* self) {
	return self->pageCount();
}

bool QTextDocument_IsModified(const QTextDocument* self) {
	return self->isModified();
}

void QTextDocument_Print(const QTextDocument* self, QPagedPaintDevice* printer) {
	self->print(printer);
}

QVariant* QTextDocument_Resource(const QTextDocument* self, int typeVal, QUrl* name) {
	QVariant ret = self->resource(static_cast<int>(typeVal), *name);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QTextDocument_AddResource(QTextDocument* self, int typeVal, QUrl* name, QVariant* resource) {
	self->addResource(static_cast<int>(typeVal), *name, *resource);
}

void QTextDocument_AllFormats(const QTextDocument* self, QTextFormat*** _out, size_t* _out_len) {
	QVector<QTextFormat> ret = self->allFormats();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QTextFormat** __out = static_cast<QTextFormat**>(malloc(sizeof(QTextFormat**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QTextFormat(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTextDocument_MarkContentsDirty(QTextDocument* self, int from, int length) {
	self->markContentsDirty(static_cast<int>(from), static_cast<int>(length));
}

void QTextDocument_SetUseDesignMetrics(QTextDocument* self, bool b) {
	self->setUseDesignMetrics(b);
}

bool QTextDocument_UseDesignMetrics(const QTextDocument* self) {
	return self->useDesignMetrics();
}

void QTextDocument_DrawContents(QTextDocument* self, QPainter* painter) {
	self->drawContents(painter);
}

void QTextDocument_SetTextWidth(QTextDocument* self, double width) {
	self->setTextWidth(static_cast<qreal>(width));
}

double QTextDocument_TextWidth(const QTextDocument* self) {
	return self->textWidth();
}

double QTextDocument_IdealWidth(const QTextDocument* self) {
	return self->idealWidth();
}

double QTextDocument_IndentWidth(const QTextDocument* self) {
	return self->indentWidth();
}

void QTextDocument_SetIndentWidth(QTextDocument* self, double width) {
	self->setIndentWidth(static_cast<qreal>(width));
}

double QTextDocument_DocumentMargin(const QTextDocument* self) {
	return self->documentMargin();
}

void QTextDocument_SetDocumentMargin(QTextDocument* self, double margin) {
	self->setDocumentMargin(static_cast<qreal>(margin));
}

void QTextDocument_AdjustSize(QTextDocument* self) {
	self->adjustSize();
}

QSizeF* QTextDocument_Size(const QTextDocument* self) {
	QSizeF ret = self->size();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

int QTextDocument_BlockCount(const QTextDocument* self) {
	return self->blockCount();
}

int QTextDocument_LineCount(const QTextDocument* self) {
	return self->lineCount();
}

int QTextDocument_CharacterCount(const QTextDocument* self) {
	return self->characterCount();
}

void QTextDocument_SetDefaultStyleSheet(QTextDocument* self, const char* sheet, size_t sheet_Strlen) {
	QString sheet_QString = QString::fromUtf8(sheet, sheet_Strlen);
	self->setDefaultStyleSheet(sheet_QString);
}

void QTextDocument_DefaultStyleSheet(const QTextDocument* self, char** _out, int* _out_Strlen) {
	QString ret = self->defaultStyleSheet();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextDocument_Undo(QTextDocument* self, QTextCursor* cursor) {
	self->undo(cursor);
}

void QTextDocument_Redo(QTextDocument* self, QTextCursor* cursor) {
	self->redo(cursor);
}

void QTextDocument_ClearUndoRedoStacks(QTextDocument* self) {
	self->clearUndoRedoStacks();
}

int QTextDocument_MaximumBlockCount(const QTextDocument* self) {
	return self->maximumBlockCount();
}

void QTextDocument_SetMaximumBlockCount(QTextDocument* self, int maximum) {
	self->setMaximumBlockCount(static_cast<int>(maximum));
}

QTextOption* QTextDocument_DefaultTextOption(const QTextDocument* self) {
	QTextOption ret = self->defaultTextOption();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextOption*>(new QTextOption(ret));
}

void QTextDocument_SetDefaultTextOption(QTextDocument* self, QTextOption* option) {
	self->setDefaultTextOption(*option);
}

QUrl* QTextDocument_BaseUrl(const QTextDocument* self) {
	QUrl ret = self->baseUrl();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(ret));
}

void QTextDocument_SetBaseUrl(QTextDocument* self, QUrl* url) {
	self->setBaseUrl(*url);
}

uintptr_t QTextDocument_DefaultCursorMoveStyle(const QTextDocument* self) {
	Qt::CursorMoveStyle ret = self->defaultCursorMoveStyle();
	return static_cast<uintptr_t>(ret);
}

void QTextDocument_SetDefaultCursorMoveStyle(QTextDocument* self, uintptr_t style) {
	self->setDefaultCursorMoveStyle(static_cast<Qt::CursorMoveStyle>(style));
}

void QTextDocument_ContentsChange(QTextDocument* self, int from, int charsRemoved, int charsAdded) {
	self->contentsChange(static_cast<int>(from), static_cast<int>(charsRemoved), static_cast<int>(charsAdded));
}

void QTextDocument_connect_ContentsChange(QTextDocument* self, void* slot) {
	QTextDocument::connect(self, static_cast<void (QTextDocument::*)(int, int, int)>(&QTextDocument::contentsChange), self, [=](int from, int charsRemoved, int charsAdded) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTextDocument_ContentsChanged(QTextDocument* self) {
	self->contentsChanged();
}

void QTextDocument_connect_ContentsChanged(QTextDocument* self, void* slot) {
	QTextDocument::connect(self, static_cast<void (QTextDocument::*)()>(&QTextDocument::contentsChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTextDocument_UndoAvailable(QTextDocument* self, bool param1) {
	self->undoAvailable(param1);
}

void QTextDocument_connect_UndoAvailable(QTextDocument* self, void* slot) {
	QTextDocument::connect(self, static_cast<void (QTextDocument::*)(bool)>(&QTextDocument::undoAvailable), self, [=](bool param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTextDocument_RedoAvailable(QTextDocument* self, bool param1) {
	self->redoAvailable(param1);
}

void QTextDocument_connect_RedoAvailable(QTextDocument* self, void* slot) {
	QTextDocument::connect(self, static_cast<void (QTextDocument::*)(bool)>(&QTextDocument::redoAvailable), self, [=](bool param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTextDocument_UndoCommandAdded(QTextDocument* self) {
	self->undoCommandAdded();
}

void QTextDocument_connect_UndoCommandAdded(QTextDocument* self, void* slot) {
	QTextDocument::connect(self, static_cast<void (QTextDocument::*)()>(&QTextDocument::undoCommandAdded), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTextDocument_ModificationChanged(QTextDocument* self, bool m) {
	self->modificationChanged(m);
}

void QTextDocument_connect_ModificationChanged(QTextDocument* self, void* slot) {
	QTextDocument::connect(self, static_cast<void (QTextDocument::*)(bool)>(&QTextDocument::modificationChanged), self, [=](bool m) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTextDocument_CursorPositionChanged(QTextDocument* self, QTextCursor* cursor) {
	self->cursorPositionChanged(*cursor);
}

void QTextDocument_connect_CursorPositionChanged(QTextDocument* self, void* slot) {
	QTextDocument::connect(self, static_cast<void (QTextDocument::*)(const QTextCursor&)>(&QTextDocument::cursorPositionChanged), self, [=](const QTextCursor& cursor) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTextDocument_BlockCountChanged(QTextDocument* self, int newBlockCount) {
	self->blockCountChanged(static_cast<int>(newBlockCount));
}

void QTextDocument_connect_BlockCountChanged(QTextDocument* self, void* slot) {
	QTextDocument::connect(self, static_cast<void (QTextDocument::*)(int)>(&QTextDocument::blockCountChanged), self, [=](int newBlockCount) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTextDocument_BaseUrlChanged(QTextDocument* self, QUrl* url) {
	self->baseUrlChanged(*url);
}

void QTextDocument_connect_BaseUrlChanged(QTextDocument* self, void* slot) {
	QTextDocument::connect(self, static_cast<void (QTextDocument::*)(const QUrl&)>(&QTextDocument::baseUrlChanged), self, [=](const QUrl& url) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTextDocument_DocumentLayoutChanged(QTextDocument* self) {
	self->documentLayoutChanged();
}

void QTextDocument_connect_DocumentLayoutChanged(QTextDocument* self, void* slot) {
	QTextDocument::connect(self, static_cast<void (QTextDocument::*)()>(&QTextDocument::documentLayoutChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTextDocument_Undo2(QTextDocument* self) {
	self->undo();
}

void QTextDocument_Redo2(QTextDocument* self) {
	self->redo();
}

void QTextDocument_SetModified(QTextDocument* self) {
	self->setModified();
}

void QTextDocument_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QTextDocument::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextDocument_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTextDocument::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextDocument_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QTextDocument::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextDocument_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTextDocument::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QTextDocument* QTextDocument_Clone1(const QTextDocument* self, QObject* parent) {
	return self->clone(parent);
}

void QTextDocument_ToHtml1(const QTextDocument* self, QByteArray* encoding, char** _out, int* _out_Strlen) {
	QString ret = self->toHtml(*encoding);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextDocument_ToMarkdown1(const QTextDocument* self, int features, char** _out, int* _out_Strlen) {
	QString ret = self->toMarkdown(static_cast<QTextDocument::MarkdownFeatures>(features));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextDocument_SetMarkdown2(QTextDocument* self, const char* markdown, size_t markdown_Strlen, int features) {
	QString markdown_QString = QString::fromUtf8(markdown, markdown_Strlen);
	self->setMarkdown(markdown_QString, static_cast<QTextDocument::MarkdownFeatures>(features));
}

QTextCursor* QTextDocument_Find22(const QTextDocument* self, const char* subString, size_t subString_Strlen, int from) {
	QString subString_QString = QString::fromUtf8(subString, subString_Strlen);
	QTextCursor ret = self->find(subString_QString, static_cast<int>(from));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCursor*>(new QTextCursor(ret));
}

QTextCursor* QTextDocument_Find32(const QTextDocument* self, const char* subString, size_t subString_Strlen, int from, int options) {
	QString subString_QString = QString::fromUtf8(subString, subString_Strlen);
	QTextCursor ret = self->find(subString_QString, static_cast<int>(from), static_cast<QTextDocument::FindFlags>(options));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCursor*>(new QTextCursor(ret));
}

QTextCursor* QTextDocument_Find33(const QTextDocument* self, const char* subString, size_t subString_Strlen, QTextCursor* cursor, int options) {
	QString subString_QString = QString::fromUtf8(subString, subString_Strlen);
	QTextCursor ret = self->find(subString_QString, *cursor, static_cast<QTextDocument::FindFlags>(options));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCursor*>(new QTextCursor(ret));
}

QTextCursor* QTextDocument_Find23(const QTextDocument* self, QRegExp* expr, int from) {
	QTextCursor ret = self->find(*expr, static_cast<int>(from));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCursor*>(new QTextCursor(ret));
}

QTextCursor* QTextDocument_Find34(const QTextDocument* self, QRegExp* expr, int from, int options) {
	QTextCursor ret = self->find(*expr, static_cast<int>(from), static_cast<QTextDocument::FindFlags>(options));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCursor*>(new QTextCursor(ret));
}

QTextCursor* QTextDocument_Find35(const QTextDocument* self, QRegExp* expr, QTextCursor* cursor, int options) {
	QTextCursor ret = self->find(*expr, *cursor, static_cast<QTextDocument::FindFlags>(options));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCursor*>(new QTextCursor(ret));
}

QTextCursor* QTextDocument_Find24(const QTextDocument* self, QRegularExpression* expr, int from) {
	QTextCursor ret = self->find(*expr, static_cast<int>(from));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCursor*>(new QTextCursor(ret));
}

QTextCursor* QTextDocument_Find36(const QTextDocument* self, QRegularExpression* expr, int from, int options) {
	QTextCursor ret = self->find(*expr, static_cast<int>(from), static_cast<QTextDocument::FindFlags>(options));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCursor*>(new QTextCursor(ret));
}

QTextCursor* QTextDocument_Find37(const QTextDocument* self, QRegularExpression* expr, QTextCursor* cursor, int options) {
	QTextCursor ret = self->find(*expr, *cursor, static_cast<QTextDocument::FindFlags>(options));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCursor*>(new QTextCursor(ret));
}

void QTextDocument_DrawContents2(QTextDocument* self, QPainter* painter, QRectF* rect) {
	self->drawContents(painter, *rect);
}

void QTextDocument_ClearUndoRedoStacks1(QTextDocument* self, uintptr_t historyToClear) {
	self->clearUndoRedoStacks(static_cast<QTextDocument::Stacks>(historyToClear));
}

void QTextDocument_SetModified1(QTextDocument* self, bool m) {
	self->setModified(m);
}

void QTextDocument_Delete(QTextDocument* self) {
	delete self;
}

