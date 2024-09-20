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
#include "_cgo_export.h"

void QAbstractUndoItem_Undo(QAbstractUndoItem* self) {
	self->undo();
}

void QAbstractUndoItem_Redo(QAbstractUndoItem* self) {
	self->redo();
}

void QAbstractUndoItem_OperatorAssign(QAbstractUndoItem* self, QAbstractUndoItem* param1) {
	self->operator=(*param1);
}

void QAbstractUndoItem_Delete(QAbstractUndoItem* self) {
	delete self;
}

QTextDocument* QTextDocument_new() {
	return new QTextDocument();
}

QTextDocument* QTextDocument_new2(struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	return new QTextDocument(text_QString);
}

QTextDocument* QTextDocument_new3(QObject* parent) {
	return new QTextDocument(parent);
}

QTextDocument* QTextDocument_new4(struct miqt_string* text, QObject* parent) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	return new QTextDocument(text_QString, parent);
}

QMetaObject* QTextDocument_MetaObject(const QTextDocument* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTextDocument_Metacast(QTextDocument* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QTextDocument_Tr(const char* s) {
	QString _ret = QTextDocument::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTextDocument_TrUtf8(const char* s) {
	QString _ret = QTextDocument::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
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

void QTextDocument_SetMetaInformation(QTextDocument* self, int info, struct miqt_string* param2) {
	QString param2_QString = QString::fromUtf8(&param2->data, param2->len);
	self->setMetaInformation(static_cast<QTextDocument::MetaInformation>(info), param2_QString);
}

struct miqt_string* QTextDocument_MetaInformation(const QTextDocument* self, int info) {
	QString _ret = self->metaInformation(static_cast<QTextDocument::MetaInformation>(info));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTextDocument_ToHtml(const QTextDocument* self) {
	QString _ret = self->toHtml();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QTextDocument_SetHtml(QTextDocument* self, struct miqt_string* html) {
	QString html_QString = QString::fromUtf8(&html->data, html->len);
	self->setHtml(html_QString);
}

struct miqt_string* QTextDocument_ToMarkdown(const QTextDocument* self) {
	QString _ret = self->toMarkdown();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QTextDocument_SetMarkdown(QTextDocument* self, struct miqt_string* markdown) {
	QString markdown_QString = QString::fromUtf8(&markdown->data, markdown->len);
	self->setMarkdown(markdown_QString);
}

struct miqt_string* QTextDocument_ToRawText(const QTextDocument* self) {
	QString _ret = self->toRawText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTextDocument_ToPlainText(const QTextDocument* self) {
	QString _ret = self->toPlainText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QTextDocument_SetPlainText(QTextDocument* self, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	self->setPlainText(text_QString);
}

QChar* QTextDocument_CharacterAt(const QTextDocument* self, int pos) {
	return new QChar(self->characterAt(static_cast<int>(pos)));
}

QTextCursor* QTextDocument_Find(const QTextDocument* self, struct miqt_string* subString) {
	QString subString_QString = QString::fromUtf8(&subString->data, subString->len);
	return new QTextCursor(self->find(subString_QString));
}

QTextCursor* QTextDocument_Find2(const QTextDocument* self, struct miqt_string* subString, QTextCursor* cursor) {
	QString subString_QString = QString::fromUtf8(&subString->data, subString->len);
	return new QTextCursor(self->find(subString_QString, *cursor));
}

QTextCursor* QTextDocument_FindWithExpr(const QTextDocument* self, QRegExp* expr) {
	return new QTextCursor(self->find(*expr));
}

QTextCursor* QTextDocument_Find3(const QTextDocument* self, QRegExp* expr, QTextCursor* cursor) {
	return new QTextCursor(self->find(*expr, *cursor));
}

QTextCursor* QTextDocument_Find4(const QTextDocument* self, QRegularExpression* expr) {
	return new QTextCursor(self->find(*expr));
}

QTextCursor* QTextDocument_Find5(const QTextDocument* self, QRegularExpression* expr, QTextCursor* cursor) {
	return new QTextCursor(self->find(*expr, *cursor));
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
	return new QTextBlock(self->findBlock(static_cast<int>(pos)));
}

QTextBlock* QTextDocument_FindBlockByNumber(const QTextDocument* self, int blockNumber) {
	return new QTextBlock(self->findBlockByNumber(static_cast<int>(blockNumber)));
}

QTextBlock* QTextDocument_FindBlockByLineNumber(const QTextDocument* self, int blockNumber) {
	return new QTextBlock(self->findBlockByLineNumber(static_cast<int>(blockNumber)));
}

QTextBlock* QTextDocument_Begin(const QTextDocument* self) {
	return new QTextBlock(self->begin());
}

QTextBlock* QTextDocument_End(const QTextDocument* self) {
	return new QTextBlock(self->end());
}

QTextBlock* QTextDocument_FirstBlock(const QTextDocument* self) {
	return new QTextBlock(self->firstBlock());
}

QTextBlock* QTextDocument_LastBlock(const QTextDocument* self) {
	return new QTextBlock(self->lastBlock());
}

void QTextDocument_SetPageSize(QTextDocument* self, QSizeF* size) {
	self->setPageSize(*size);
}

QSizeF* QTextDocument_PageSize(const QTextDocument* self) {
	return new QSizeF(self->pageSize());
}

void QTextDocument_SetDefaultFont(QTextDocument* self, QFont* font) {
	self->setDefaultFont(*font);
}

QFont* QTextDocument_DefaultFont(const QTextDocument* self) {
	return new QFont(self->defaultFont());
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
	return new QVariant(self->resource(static_cast<int>(typeVal), *name));
}

void QTextDocument_AddResource(QTextDocument* self, int typeVal, QUrl* name, QVariant* resource) {
	self->addResource(static_cast<int>(typeVal), *name, *resource);
}

struct miqt_array* QTextDocument_AllFormats(const QTextDocument* self) {
	QVector<QTextFormat> _ret = self->allFormats();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTextFormat** _arr = static_cast<QTextFormat**>(malloc(sizeof(QTextFormat*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QTextFormat(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
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
	qreal _ret = self->textWidth();
	return static_cast<double>(_ret);
}

double QTextDocument_IdealWidth(const QTextDocument* self) {
	qreal _ret = self->idealWidth();
	return static_cast<double>(_ret);
}

double QTextDocument_IndentWidth(const QTextDocument* self) {
	qreal _ret = self->indentWidth();
	return static_cast<double>(_ret);
}

void QTextDocument_SetIndentWidth(QTextDocument* self, double width) {
	self->setIndentWidth(static_cast<qreal>(width));
}

double QTextDocument_DocumentMargin(const QTextDocument* self) {
	qreal _ret = self->documentMargin();
	return static_cast<double>(_ret);
}

void QTextDocument_SetDocumentMargin(QTextDocument* self, double margin) {
	self->setDocumentMargin(static_cast<qreal>(margin));
}

void QTextDocument_AdjustSize(QTextDocument* self) {
	self->adjustSize();
}

QSizeF* QTextDocument_Size(const QTextDocument* self) {
	return new QSizeF(self->size());
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

void QTextDocument_SetDefaultStyleSheet(QTextDocument* self, struct miqt_string* sheet) {
	QString sheet_QString = QString::fromUtf8(&sheet->data, sheet->len);
	self->setDefaultStyleSheet(sheet_QString);
}

struct miqt_string* QTextDocument_DefaultStyleSheet(const QTextDocument* self) {
	QString _ret = self->defaultStyleSheet();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
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
	return new QTextOption(self->defaultTextOption());
}

void QTextDocument_SetDefaultTextOption(QTextDocument* self, QTextOption* option) {
	self->setDefaultTextOption(*option);
}

QUrl* QTextDocument_BaseUrl(const QTextDocument* self) {
	return new QUrl(self->baseUrl());
}

void QTextDocument_SetBaseUrl(QTextDocument* self, QUrl* url) {
	self->setBaseUrl(*url);
}

int QTextDocument_DefaultCursorMoveStyle(const QTextDocument* self) {
	Qt::CursorMoveStyle _ret = self->defaultCursorMoveStyle();
	return static_cast<int>(_ret);
}

void QTextDocument_SetDefaultCursorMoveStyle(QTextDocument* self, int style) {
	self->setDefaultCursorMoveStyle(static_cast<Qt::CursorMoveStyle>(style));
}

void QTextDocument_ContentsChange(QTextDocument* self, int from, int charsRemoved, int charsAdded) {
	self->contentsChange(static_cast<int>(from), static_cast<int>(charsRemoved), static_cast<int>(charsAdded));
}

void QTextDocument_connect_ContentsChange(QTextDocument* self, void* slot) {
	QTextDocument::connect(self, static_cast<void (QTextDocument::*)(int, int, int)>(&QTextDocument::contentsChange), self, [=](int from, int charsRemoved, int charsAdded) {
		int sigval1 = from;
		int sigval2 = charsRemoved;
		int sigval3 = charsAdded;
		miqt_exec_callback_QTextDocument_ContentsChange(slot, sigval1, sigval2, sigval3);
	});
}

void QTextDocument_ContentsChanged(QTextDocument* self) {
	self->contentsChanged();
}

void QTextDocument_connect_ContentsChanged(QTextDocument* self, void* slot) {
	QTextDocument::connect(self, static_cast<void (QTextDocument::*)()>(&QTextDocument::contentsChanged), self, [=]() {
		miqt_exec_callback_QTextDocument_ContentsChanged(slot);
	});
}

void QTextDocument_UndoAvailable(QTextDocument* self, bool param1) {
	self->undoAvailable(param1);
}

void QTextDocument_connect_UndoAvailable(QTextDocument* self, void* slot) {
	QTextDocument::connect(self, static_cast<void (QTextDocument::*)(bool)>(&QTextDocument::undoAvailable), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QTextDocument_UndoAvailable(slot, sigval1);
	});
}

void QTextDocument_RedoAvailable(QTextDocument* self, bool param1) {
	self->redoAvailable(param1);
}

void QTextDocument_connect_RedoAvailable(QTextDocument* self, void* slot) {
	QTextDocument::connect(self, static_cast<void (QTextDocument::*)(bool)>(&QTextDocument::redoAvailable), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QTextDocument_RedoAvailable(slot, sigval1);
	});
}

void QTextDocument_UndoCommandAdded(QTextDocument* self) {
	self->undoCommandAdded();
}

void QTextDocument_connect_UndoCommandAdded(QTextDocument* self, void* slot) {
	QTextDocument::connect(self, static_cast<void (QTextDocument::*)()>(&QTextDocument::undoCommandAdded), self, [=]() {
		miqt_exec_callback_QTextDocument_UndoCommandAdded(slot);
	});
}

void QTextDocument_ModificationChanged(QTextDocument* self, bool m) {
	self->modificationChanged(m);
}

void QTextDocument_connect_ModificationChanged(QTextDocument* self, void* slot) {
	QTextDocument::connect(self, static_cast<void (QTextDocument::*)(bool)>(&QTextDocument::modificationChanged), self, [=](bool m) {
		bool sigval1 = m;
		miqt_exec_callback_QTextDocument_ModificationChanged(slot, sigval1);
	});
}

void QTextDocument_CursorPositionChanged(QTextDocument* self, QTextCursor* cursor) {
	self->cursorPositionChanged(*cursor);
}

void QTextDocument_connect_CursorPositionChanged(QTextDocument* self, void* slot) {
	QTextDocument::connect(self, static_cast<void (QTextDocument::*)(const QTextCursor&)>(&QTextDocument::cursorPositionChanged), self, [=](const QTextCursor& cursor) {
		const QTextCursor& cursor_ret = cursor;
		// Cast returned reference into pointer
		QTextCursor* sigval1 = const_cast<QTextCursor*>(&cursor_ret);
		miqt_exec_callback_QTextDocument_CursorPositionChanged(slot, sigval1);
	});
}

void QTextDocument_BlockCountChanged(QTextDocument* self, int newBlockCount) {
	self->blockCountChanged(static_cast<int>(newBlockCount));
}

void QTextDocument_connect_BlockCountChanged(QTextDocument* self, void* slot) {
	QTextDocument::connect(self, static_cast<void (QTextDocument::*)(int)>(&QTextDocument::blockCountChanged), self, [=](int newBlockCount) {
		int sigval1 = newBlockCount;
		miqt_exec_callback_QTextDocument_BlockCountChanged(slot, sigval1);
	});
}

void QTextDocument_BaseUrlChanged(QTextDocument* self, QUrl* url) {
	self->baseUrlChanged(*url);
}

void QTextDocument_connect_BaseUrlChanged(QTextDocument* self, void* slot) {
	QTextDocument::connect(self, static_cast<void (QTextDocument::*)(const QUrl&)>(&QTextDocument::baseUrlChanged), self, [=](const QUrl& url) {
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
		miqt_exec_callback_QTextDocument_BaseUrlChanged(slot, sigval1);
	});
}

void QTextDocument_DocumentLayoutChanged(QTextDocument* self) {
	self->documentLayoutChanged();
}

void QTextDocument_connect_DocumentLayoutChanged(QTextDocument* self, void* slot) {
	QTextDocument::connect(self, static_cast<void (QTextDocument::*)()>(&QTextDocument::documentLayoutChanged), self, [=]() {
		miqt_exec_callback_QTextDocument_DocumentLayoutChanged(slot);
	});
}

void QTextDocument_Undo2(QTextDocument* self) {
	self->undo();
}

void QTextDocument_Redo2(QTextDocument* self) {
	self->redo();
}

void QTextDocument_AppendUndoItem(QTextDocument* self, QAbstractUndoItem* param1) {
	self->appendUndoItem(param1);
}

void QTextDocument_SetModified(QTextDocument* self) {
	self->setModified();
}

struct miqt_string* QTextDocument_Tr2(const char* s, const char* c) {
	QString _ret = QTextDocument::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTextDocument_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTextDocument::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTextDocument_TrUtf82(const char* s, const char* c) {
	QString _ret = QTextDocument::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTextDocument_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QTextDocument::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QTextDocument* QTextDocument_Clone1(const QTextDocument* self, QObject* parent) {
	return self->clone(parent);
}

struct miqt_string* QTextDocument_ToHtml1(const QTextDocument* self, QByteArray* encoding) {
	QString _ret = self->toHtml(*encoding);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTextDocument_ToMarkdown1(const QTextDocument* self, int features) {
	QString _ret = self->toMarkdown(static_cast<QTextDocument::MarkdownFeatures>(features));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QTextDocument_SetMarkdown2(QTextDocument* self, struct miqt_string* markdown, int features) {
	QString markdown_QString = QString::fromUtf8(&markdown->data, markdown->len);
	self->setMarkdown(markdown_QString, static_cast<QTextDocument::MarkdownFeatures>(features));
}

QTextCursor* QTextDocument_Find22(const QTextDocument* self, struct miqt_string* subString, int from) {
	QString subString_QString = QString::fromUtf8(&subString->data, subString->len);
	return new QTextCursor(self->find(subString_QString, static_cast<int>(from)));
}

QTextCursor* QTextDocument_Find32(const QTextDocument* self, struct miqt_string* subString, int from, int options) {
	QString subString_QString = QString::fromUtf8(&subString->data, subString->len);
	return new QTextCursor(self->find(subString_QString, static_cast<int>(from), static_cast<QTextDocument::FindFlags>(options)));
}

QTextCursor* QTextDocument_Find33(const QTextDocument* self, struct miqt_string* subString, QTextCursor* cursor, int options) {
	QString subString_QString = QString::fromUtf8(&subString->data, subString->len);
	return new QTextCursor(self->find(subString_QString, *cursor, static_cast<QTextDocument::FindFlags>(options)));
}

QTextCursor* QTextDocument_Find23(const QTextDocument* self, QRegExp* expr, int from) {
	return new QTextCursor(self->find(*expr, static_cast<int>(from)));
}

QTextCursor* QTextDocument_Find34(const QTextDocument* self, QRegExp* expr, int from, int options) {
	return new QTextCursor(self->find(*expr, static_cast<int>(from), static_cast<QTextDocument::FindFlags>(options)));
}

QTextCursor* QTextDocument_Find35(const QTextDocument* self, QRegExp* expr, QTextCursor* cursor, int options) {
	return new QTextCursor(self->find(*expr, *cursor, static_cast<QTextDocument::FindFlags>(options)));
}

QTextCursor* QTextDocument_Find24(const QTextDocument* self, QRegularExpression* expr, int from) {
	return new QTextCursor(self->find(*expr, static_cast<int>(from)));
}

QTextCursor* QTextDocument_Find36(const QTextDocument* self, QRegularExpression* expr, int from, int options) {
	return new QTextCursor(self->find(*expr, static_cast<int>(from), static_cast<QTextDocument::FindFlags>(options)));
}

QTextCursor* QTextDocument_Find37(const QTextDocument* self, QRegularExpression* expr, QTextCursor* cursor, int options) {
	return new QTextCursor(self->find(*expr, *cursor, static_cast<QTextDocument::FindFlags>(options)));
}

void QTextDocument_DrawContents2(QTextDocument* self, QPainter* painter, QRectF* rect) {
	self->drawContents(painter, *rect);
}

void QTextDocument_ClearUndoRedoStacks1(QTextDocument* self, int historyToClear) {
	self->clearUndoRedoStacks(static_cast<QTextDocument::Stacks>(historyToClear));
}

void QTextDocument_SetModified1(QTextDocument* self, bool m) {
	self->setModified(m);
}

void QTextDocument_Delete(QTextDocument* self) {
	delete self;
}

