#include <QAbstractTextDocumentLayout>
#include <QAbstractUndoItem>
#include <QChar>
#include <QChildEvent>
#include <QEvent>
#include <QFont>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPagedPaintDevice>
#include <QPainter>
#include <QRectF>
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
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <qtextdocument.h>
#include "gen_qtextdocument.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QTextDocument_contentsChange(intptr_t, int, int, int);
void miqt_exec_callback_QTextDocument_contentsChanged(intptr_t);
void miqt_exec_callback_QTextDocument_undoAvailable(intptr_t, bool);
void miqt_exec_callback_QTextDocument_redoAvailable(intptr_t, bool);
void miqt_exec_callback_QTextDocument_undoCommandAdded(intptr_t);
void miqt_exec_callback_QTextDocument_modificationChanged(intptr_t, bool);
void miqt_exec_callback_QTextDocument_cursorPositionChanged(intptr_t, QTextCursor*);
void miqt_exec_callback_QTextDocument_blockCountChanged(intptr_t, int);
void miqt_exec_callback_QTextDocument_baseUrlChanged(intptr_t, QUrl*);
void miqt_exec_callback_QTextDocument_documentLayoutChanged(intptr_t);
void miqt_exec_callback_QTextDocument_clear(QTextDocument*, intptr_t);
QTextObject* miqt_exec_callback_QTextDocument_createObject(QTextDocument*, intptr_t, QTextFormat*);
QVariant* miqt_exec_callback_QTextDocument_loadResource(QTextDocument*, intptr_t, int, QUrl*);
bool miqt_exec_callback_QTextDocument_event(QTextDocument*, intptr_t, QEvent*);
bool miqt_exec_callback_QTextDocument_eventFilter(QTextDocument*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QTextDocument_timerEvent(QTextDocument*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QTextDocument_childEvent(QTextDocument*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTextDocument_customEvent(QTextDocument*, intptr_t, QEvent*);
void miqt_exec_callback_QTextDocument_connectNotify(QTextDocument*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTextDocument_disconnectNotify(QTextDocument*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

void QAbstractUndoItem_undo(QAbstractUndoItem* self) {
	self->undo();
}

void QAbstractUndoItem_redo(QAbstractUndoItem* self) {
	self->redo();
}

void QAbstractUndoItem_operatorAssign(QAbstractUndoItem* self, QAbstractUndoItem* param1) {
	self->operator=(*param1);
}

void QAbstractUndoItem_delete(QAbstractUndoItem* self) {
	delete self;
}

class MiqtVirtualQTextDocument final : public QTextDocument {
public:

	MiqtVirtualQTextDocument(): QTextDocument() {};
	MiqtVirtualQTextDocument(const QString& text): QTextDocument(text) {};
	MiqtVirtualQTextDocument(QObject* parent): QTextDocument(parent) {};
	MiqtVirtualQTextDocument(const QString& text, QObject* parent): QTextDocument(text, parent) {};

	virtual ~MiqtVirtualQTextDocument() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clear = 0;

	// Subclass to allow providing a Go implementation
	virtual void clear() override {
		if (handle__clear == 0) {
			QTextDocument::clear();
			return;
		}
		

		miqt_exec_callback_QTextDocument_clear(this, handle__clear);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_clear() {

		QTextDocument::clear();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createObject = 0;

	// Subclass to allow providing a Go implementation
	virtual QTextObject* createObject(const QTextFormat& f) override {
		if (handle__createObject == 0) {
			return QTextDocument::createObject(f);
		}
		
		const QTextFormat& f_ret = f;
		// Cast returned reference into pointer
		QTextFormat* sigval1 = const_cast<QTextFormat*>(&f_ret);

		QTextObject* callback_return_value = miqt_exec_callback_QTextDocument_createObject(this, handle__createObject, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QTextObject* virtualbase_createObject(QTextFormat* f) {

		return QTextDocument::createObject(*f);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__loadResource = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant loadResource(int type, const QUrl& name) override {
		if (handle__loadResource == 0) {
			return QTextDocument::loadResource(type, name);
		}
		
		int sigval1 = type;
		const QUrl& name_ret = name;
		// Cast returned reference into pointer
		QUrl* sigval2 = const_cast<QUrl*>(&name_ret);

		QVariant* callback_return_value = miqt_exec_callback_QTextDocument_loadResource(this, handle__loadResource, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_loadResource(int type, QUrl* name) {

		return new QVariant(QTextDocument::loadResource(static_cast<int>(type), *name));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QTextDocument::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QTextDocument_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QTextDocument::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QTextDocument::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QTextDocument_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QTextDocument::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QTextDocument::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QTextDocument_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QTextDocument::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QTextDocument::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QTextDocument_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QTextDocument::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QTextDocument::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTextDocument_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QTextDocument::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QTextDocument::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTextDocument_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QTextDocument::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QTextDocument::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTextDocument_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QTextDocument::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QTextDocument_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QTextDocument_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QTextDocument_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QTextDocument_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QTextDocument* QTextDocument_new() {
	return new MiqtVirtualQTextDocument();
}

QTextDocument* QTextDocument_new2(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQTextDocument(text_QString);
}

QTextDocument* QTextDocument_new3(QObject* parent) {
	return new MiqtVirtualQTextDocument(parent);
}

QTextDocument* QTextDocument_new4(struct miqt_string text, QObject* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQTextDocument(text_QString, parent);
}

void QTextDocument_virtbase(QTextDocument* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QTextDocument_metaObject(const QTextDocument* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTextDocument_metacast(QTextDocument* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTextDocument_tr(const char* s) {
	QString _ret = QTextDocument::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QTextDocument* QTextDocument_clone(const QTextDocument* self) {
	return self->clone();
}

bool QTextDocument_isEmpty(const QTextDocument* self) {
	return self->isEmpty();
}

void QTextDocument_clear(QTextDocument* self) {
	self->clear();
}

void QTextDocument_setUndoRedoEnabled(QTextDocument* self, bool enable) {
	self->setUndoRedoEnabled(enable);
}

bool QTextDocument_isUndoRedoEnabled(const QTextDocument* self) {
	return self->isUndoRedoEnabled();
}

bool QTextDocument_isUndoAvailable(const QTextDocument* self) {
	return self->isUndoAvailable();
}

bool QTextDocument_isRedoAvailable(const QTextDocument* self) {
	return self->isRedoAvailable();
}

int QTextDocument_availableUndoSteps(const QTextDocument* self) {
	return self->availableUndoSteps();
}

int QTextDocument_availableRedoSteps(const QTextDocument* self) {
	return self->availableRedoSteps();
}

int QTextDocument_revision(const QTextDocument* self) {
	return self->revision();
}

void QTextDocument_setDocumentLayout(QTextDocument* self, QAbstractTextDocumentLayout* layout) {
	self->setDocumentLayout(layout);
}

QAbstractTextDocumentLayout* QTextDocument_documentLayout(const QTextDocument* self) {
	return self->documentLayout();
}

void QTextDocument_setMetaInformation(QTextDocument* self, int info, struct miqt_string param2) {
	QString param2_QString = QString::fromUtf8(param2.data, param2.len);
	self->setMetaInformation(static_cast<QTextDocument::MetaInformation>(info), param2_QString);
}

struct miqt_string QTextDocument_metaInformation(const QTextDocument* self, int info) {
	QString _ret = self->metaInformation(static_cast<QTextDocument::MetaInformation>(info));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextDocument_toHtml(const QTextDocument* self) {
	QString _ret = self->toHtml();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextDocument_setHtml(QTextDocument* self, struct miqt_string html) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->setHtml(html_QString);
}

struct miqt_string QTextDocument_toMarkdown(const QTextDocument* self) {
	QString _ret = self->toMarkdown();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextDocument_setMarkdown(QTextDocument* self, struct miqt_string markdown) {
	QString markdown_QString = QString::fromUtf8(markdown.data, markdown.len);
	self->setMarkdown(markdown_QString);
}

struct miqt_string QTextDocument_toRawText(const QTextDocument* self) {
	QString _ret = self->toRawText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextDocument_toPlainText(const QTextDocument* self) {
	QString _ret = self->toPlainText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextDocument_setPlainText(QTextDocument* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setPlainText(text_QString);
}

QChar* QTextDocument_characterAt(const QTextDocument* self, int pos) {
	return new QChar(self->characterAt(static_cast<int>(pos)));
}

QTextCursor* QTextDocument_find(const QTextDocument* self, struct miqt_string subString) {
	QString subString_QString = QString::fromUtf8(subString.data, subString.len);
	return new QTextCursor(self->find(subString_QString));
}

QTextCursor* QTextDocument_find2(const QTextDocument* self, struct miqt_string subString, QTextCursor* cursor) {
	QString subString_QString = QString::fromUtf8(subString.data, subString.len);
	return new QTextCursor(self->find(subString_QString, *cursor));
}

QTextCursor* QTextDocument_findWithExpr(const QTextDocument* self, QRegularExpression* expr) {
	return new QTextCursor(self->find(*expr));
}

QTextCursor* QTextDocument_find3(const QTextDocument* self, QRegularExpression* expr, QTextCursor* cursor) {
	return new QTextCursor(self->find(*expr, *cursor));
}

QTextFrame* QTextDocument_frameAt(const QTextDocument* self, int pos) {
	return self->frameAt(static_cast<int>(pos));
}

QTextFrame* QTextDocument_rootFrame(const QTextDocument* self) {
	return self->rootFrame();
}

QTextObject* QTextDocument_object(const QTextDocument* self, int objectIndex) {
	return self->object(static_cast<int>(objectIndex));
}

QTextObject* QTextDocument_objectForFormat(const QTextDocument* self, QTextFormat* param1) {
	return self->objectForFormat(*param1);
}

QTextBlock* QTextDocument_findBlock(const QTextDocument* self, int pos) {
	return new QTextBlock(self->findBlock(static_cast<int>(pos)));
}

QTextBlock* QTextDocument_findBlockByNumber(const QTextDocument* self, int blockNumber) {
	return new QTextBlock(self->findBlockByNumber(static_cast<int>(blockNumber)));
}

QTextBlock* QTextDocument_findBlockByLineNumber(const QTextDocument* self, int blockNumber) {
	return new QTextBlock(self->findBlockByLineNumber(static_cast<int>(blockNumber)));
}

QTextBlock* QTextDocument_begin(const QTextDocument* self) {
	return new QTextBlock(self->begin());
}

QTextBlock* QTextDocument_end(const QTextDocument* self) {
	return new QTextBlock(self->end());
}

QTextBlock* QTextDocument_firstBlock(const QTextDocument* self) {
	return new QTextBlock(self->firstBlock());
}

QTextBlock* QTextDocument_lastBlock(const QTextDocument* self) {
	return new QTextBlock(self->lastBlock());
}

void QTextDocument_setPageSize(QTextDocument* self, QSizeF* size) {
	self->setPageSize(*size);
}

QSizeF* QTextDocument_pageSize(const QTextDocument* self) {
	return new QSizeF(self->pageSize());
}

void QTextDocument_setDefaultFont(QTextDocument* self, QFont* font) {
	self->setDefaultFont(*font);
}

QFont* QTextDocument_defaultFont(const QTextDocument* self) {
	return new QFont(self->defaultFont());
}

void QTextDocument_setSuperScriptBaseline(QTextDocument* self, double baseline) {
	self->setSuperScriptBaseline(static_cast<qreal>(baseline));
}

double QTextDocument_superScriptBaseline(const QTextDocument* self) {
	qreal _ret = self->superScriptBaseline();
	return static_cast<double>(_ret);
}

void QTextDocument_setSubScriptBaseline(QTextDocument* self, double baseline) {
	self->setSubScriptBaseline(static_cast<qreal>(baseline));
}

double QTextDocument_subScriptBaseline(const QTextDocument* self) {
	qreal _ret = self->subScriptBaseline();
	return static_cast<double>(_ret);
}

void QTextDocument_setBaselineOffset(QTextDocument* self, double baseline) {
	self->setBaselineOffset(static_cast<qreal>(baseline));
}

double QTextDocument_baselineOffset(const QTextDocument* self) {
	qreal _ret = self->baselineOffset();
	return static_cast<double>(_ret);
}

int QTextDocument_pageCount(const QTextDocument* self) {
	return self->pageCount();
}

bool QTextDocument_isModified(const QTextDocument* self) {
	return self->isModified();
}

void QTextDocument_print(const QTextDocument* self, QPagedPaintDevice* printer) {
	self->print(printer);
}

QVariant* QTextDocument_resource(const QTextDocument* self, int type, QUrl* name) {
	return new QVariant(self->resource(static_cast<int>(type), *name));
}

void QTextDocument_addResource(QTextDocument* self, int type, QUrl* name, QVariant* resource) {
	self->addResource(static_cast<int>(type), *name, *resource);
}

struct miqt_array /* of QTextFormat* */  QTextDocument_allFormats(const QTextDocument* self) {
	QList<QTextFormat> _ret = self->allFormats();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTextFormat** _arr = static_cast<QTextFormat**>(malloc(sizeof(QTextFormat*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QTextFormat(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QTextDocument_markContentsDirty(QTextDocument* self, int from, int length) {
	self->markContentsDirty(static_cast<int>(from), static_cast<int>(length));
}

void QTextDocument_setUseDesignMetrics(QTextDocument* self, bool b) {
	self->setUseDesignMetrics(b);
}

bool QTextDocument_useDesignMetrics(const QTextDocument* self) {
	return self->useDesignMetrics();
}

void QTextDocument_setLayoutEnabled(QTextDocument* self, bool b) {
	self->setLayoutEnabled(b);
}

bool QTextDocument_isLayoutEnabled(const QTextDocument* self) {
	return self->isLayoutEnabled();
}

void QTextDocument_drawContents(QTextDocument* self, QPainter* painter) {
	self->drawContents(painter);
}

void QTextDocument_setTextWidth(QTextDocument* self, double width) {
	self->setTextWidth(static_cast<qreal>(width));
}

double QTextDocument_textWidth(const QTextDocument* self) {
	qreal _ret = self->textWidth();
	return static_cast<double>(_ret);
}

double QTextDocument_idealWidth(const QTextDocument* self) {
	qreal _ret = self->idealWidth();
	return static_cast<double>(_ret);
}

double QTextDocument_indentWidth(const QTextDocument* self) {
	qreal _ret = self->indentWidth();
	return static_cast<double>(_ret);
}

void QTextDocument_setIndentWidth(QTextDocument* self, double width) {
	self->setIndentWidth(static_cast<qreal>(width));
}

double QTextDocument_documentMargin(const QTextDocument* self) {
	qreal _ret = self->documentMargin();
	return static_cast<double>(_ret);
}

void QTextDocument_setDocumentMargin(QTextDocument* self, double margin) {
	self->setDocumentMargin(static_cast<qreal>(margin));
}

void QTextDocument_adjustSize(QTextDocument* self) {
	self->adjustSize();
}

QSizeF* QTextDocument_size(const QTextDocument* self) {
	return new QSizeF(self->size());
}

int QTextDocument_blockCount(const QTextDocument* self) {
	return self->blockCount();
}

int QTextDocument_lineCount(const QTextDocument* self) {
	return self->lineCount();
}

int QTextDocument_characterCount(const QTextDocument* self) {
	return self->characterCount();
}

void QTextDocument_setDefaultStyleSheet(QTextDocument* self, struct miqt_string sheet) {
	QString sheet_QString = QString::fromUtf8(sheet.data, sheet.len);
	self->setDefaultStyleSheet(sheet_QString);
}

struct miqt_string QTextDocument_defaultStyleSheet(const QTextDocument* self) {
	QString _ret = self->defaultStyleSheet();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextDocument_undo(QTextDocument* self, QTextCursor* cursor) {
	self->undo(cursor);
}

void QTextDocument_redo(QTextDocument* self, QTextCursor* cursor) {
	self->redo(cursor);
}

void QTextDocument_clearUndoRedoStacks(QTextDocument* self) {
	self->clearUndoRedoStacks();
}

int QTextDocument_maximumBlockCount(const QTextDocument* self) {
	return self->maximumBlockCount();
}

void QTextDocument_setMaximumBlockCount(QTextDocument* self, int maximum) {
	self->setMaximumBlockCount(static_cast<int>(maximum));
}

QTextOption* QTextDocument_defaultTextOption(const QTextDocument* self) {
	return new QTextOption(self->defaultTextOption());
}

void QTextDocument_setDefaultTextOption(QTextDocument* self, QTextOption* option) {
	self->setDefaultTextOption(*option);
}

QUrl* QTextDocument_baseUrl(const QTextDocument* self) {
	return new QUrl(self->baseUrl());
}

void QTextDocument_setBaseUrl(QTextDocument* self, QUrl* url) {
	self->setBaseUrl(*url);
}

int QTextDocument_defaultCursorMoveStyle(const QTextDocument* self) {
	Qt::CursorMoveStyle _ret = self->defaultCursorMoveStyle();
	return static_cast<int>(_ret);
}

void QTextDocument_setDefaultCursorMoveStyle(QTextDocument* self, int style) {
	self->setDefaultCursorMoveStyle(static_cast<Qt::CursorMoveStyle>(style));
}

void QTextDocument_contentsChange(QTextDocument* self, int from, int charsRemoved, int charsAdded) {
	self->contentsChange(static_cast<int>(from), static_cast<int>(charsRemoved), static_cast<int>(charsAdded));
}

void QTextDocument_connect_contentsChange(QTextDocument* self, intptr_t slot) {
	MiqtVirtualQTextDocument::connect(self, static_cast<void (QTextDocument::*)(int, int, int)>(&QTextDocument::contentsChange), self, [=](int from, int charsRemoved, int charsAdded) {
		int sigval1 = from;
		int sigval2 = charsRemoved;
		int sigval3 = charsAdded;
		miqt_exec_callback_QTextDocument_contentsChange(slot, sigval1, sigval2, sigval3);
	});
}

void QTextDocument_contentsChanged(QTextDocument* self) {
	self->contentsChanged();
}

void QTextDocument_connect_contentsChanged(QTextDocument* self, intptr_t slot) {
	MiqtVirtualQTextDocument::connect(self, static_cast<void (QTextDocument::*)()>(&QTextDocument::contentsChanged), self, [=]() {
		miqt_exec_callback_QTextDocument_contentsChanged(slot);
	});
}

void QTextDocument_undoAvailable(QTextDocument* self, bool param1) {
	self->undoAvailable(param1);
}

void QTextDocument_connect_undoAvailable(QTextDocument* self, intptr_t slot) {
	MiqtVirtualQTextDocument::connect(self, static_cast<void (QTextDocument::*)(bool)>(&QTextDocument::undoAvailable), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QTextDocument_undoAvailable(slot, sigval1);
	});
}

void QTextDocument_redoAvailable(QTextDocument* self, bool param1) {
	self->redoAvailable(param1);
}

void QTextDocument_connect_redoAvailable(QTextDocument* self, intptr_t slot) {
	MiqtVirtualQTextDocument::connect(self, static_cast<void (QTextDocument::*)(bool)>(&QTextDocument::redoAvailable), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QTextDocument_redoAvailable(slot, sigval1);
	});
}

void QTextDocument_undoCommandAdded(QTextDocument* self) {
	self->undoCommandAdded();
}

void QTextDocument_connect_undoCommandAdded(QTextDocument* self, intptr_t slot) {
	MiqtVirtualQTextDocument::connect(self, static_cast<void (QTextDocument::*)()>(&QTextDocument::undoCommandAdded), self, [=]() {
		miqt_exec_callback_QTextDocument_undoCommandAdded(slot);
	});
}

void QTextDocument_modificationChanged(QTextDocument* self, bool m) {
	self->modificationChanged(m);
}

void QTextDocument_connect_modificationChanged(QTextDocument* self, intptr_t slot) {
	MiqtVirtualQTextDocument::connect(self, static_cast<void (QTextDocument::*)(bool)>(&QTextDocument::modificationChanged), self, [=](bool m) {
		bool sigval1 = m;
		miqt_exec_callback_QTextDocument_modificationChanged(slot, sigval1);
	});
}

void QTextDocument_cursorPositionChanged(QTextDocument* self, QTextCursor* cursor) {
	self->cursorPositionChanged(*cursor);
}

void QTextDocument_connect_cursorPositionChanged(QTextDocument* self, intptr_t slot) {
	MiqtVirtualQTextDocument::connect(self, static_cast<void (QTextDocument::*)(const QTextCursor&)>(&QTextDocument::cursorPositionChanged), self, [=](const QTextCursor& cursor) {
		const QTextCursor& cursor_ret = cursor;
		// Cast returned reference into pointer
		QTextCursor* sigval1 = const_cast<QTextCursor*>(&cursor_ret);
		miqt_exec_callback_QTextDocument_cursorPositionChanged(slot, sigval1);
	});
}

void QTextDocument_blockCountChanged(QTextDocument* self, int newBlockCount) {
	self->blockCountChanged(static_cast<int>(newBlockCount));
}

void QTextDocument_connect_blockCountChanged(QTextDocument* self, intptr_t slot) {
	MiqtVirtualQTextDocument::connect(self, static_cast<void (QTextDocument::*)(int)>(&QTextDocument::blockCountChanged), self, [=](int newBlockCount) {
		int sigval1 = newBlockCount;
		miqt_exec_callback_QTextDocument_blockCountChanged(slot, sigval1);
	});
}

void QTextDocument_baseUrlChanged(QTextDocument* self, QUrl* url) {
	self->baseUrlChanged(*url);
}

void QTextDocument_connect_baseUrlChanged(QTextDocument* self, intptr_t slot) {
	MiqtVirtualQTextDocument::connect(self, static_cast<void (QTextDocument::*)(const QUrl&)>(&QTextDocument::baseUrlChanged), self, [=](const QUrl& url) {
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
		miqt_exec_callback_QTextDocument_baseUrlChanged(slot, sigval1);
	});
}

void QTextDocument_documentLayoutChanged(QTextDocument* self) {
	self->documentLayoutChanged();
}

void QTextDocument_connect_documentLayoutChanged(QTextDocument* self, intptr_t slot) {
	MiqtVirtualQTextDocument::connect(self, static_cast<void (QTextDocument::*)()>(&QTextDocument::documentLayoutChanged), self, [=]() {
		miqt_exec_callback_QTextDocument_documentLayoutChanged(slot);
	});
}

void QTextDocument_undo2(QTextDocument* self) {
	self->undo();
}

void QTextDocument_redo2(QTextDocument* self) {
	self->redo();
}

void QTextDocument_appendUndoItem(QTextDocument* self, QAbstractUndoItem* param1) {
	self->appendUndoItem(param1);
}

void QTextDocument_setModified(QTextDocument* self) {
	self->setModified();
}

struct miqt_string QTextDocument_tr2(const char* s, const char* c) {
	QString _ret = QTextDocument::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextDocument_tr3(const char* s, const char* c, int n) {
	QString _ret = QTextDocument::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QTextDocument* QTextDocument_clone1(const QTextDocument* self, QObject* parent) {
	return self->clone(parent);
}

struct miqt_string QTextDocument_toMarkdown1(const QTextDocument* self, int features) {
	QString _ret = self->toMarkdown(static_cast<QTextDocument::MarkdownFeatures>(features));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextDocument_setMarkdown2(QTextDocument* self, struct miqt_string markdown, int features) {
	QString markdown_QString = QString::fromUtf8(markdown.data, markdown.len);
	self->setMarkdown(markdown_QString, static_cast<QTextDocument::MarkdownFeatures>(features));
}

QTextCursor* QTextDocument_find22(const QTextDocument* self, struct miqt_string subString, int from) {
	QString subString_QString = QString::fromUtf8(subString.data, subString.len);
	return new QTextCursor(self->find(subString_QString, static_cast<int>(from)));
}

QTextCursor* QTextDocument_find32(const QTextDocument* self, struct miqt_string subString, int from, int options) {
	QString subString_QString = QString::fromUtf8(subString.data, subString.len);
	return new QTextCursor(self->find(subString_QString, static_cast<int>(from), static_cast<QTextDocument::FindFlags>(options)));
}

QTextCursor* QTextDocument_find33(const QTextDocument* self, struct miqt_string subString, QTextCursor* cursor, int options) {
	QString subString_QString = QString::fromUtf8(subString.data, subString.len);
	return new QTextCursor(self->find(subString_QString, *cursor, static_cast<QTextDocument::FindFlags>(options)));
}

QTextCursor* QTextDocument_find23(const QTextDocument* self, QRegularExpression* expr, int from) {
	return new QTextCursor(self->find(*expr, static_cast<int>(from)));
}

QTextCursor* QTextDocument_find34(const QTextDocument* self, QRegularExpression* expr, int from, int options) {
	return new QTextCursor(self->find(*expr, static_cast<int>(from), static_cast<QTextDocument::FindFlags>(options)));
}

QTextCursor* QTextDocument_find35(const QTextDocument* self, QRegularExpression* expr, QTextCursor* cursor, int options) {
	return new QTextCursor(self->find(*expr, *cursor, static_cast<QTextDocument::FindFlags>(options)));
}

void QTextDocument_drawContents2(QTextDocument* self, QPainter* painter, QRectF* rect) {
	self->drawContents(painter, *rect);
}

void QTextDocument_clearUndoRedoStacks1(QTextDocument* self, int historyToClear) {
	self->clearUndoRedoStacks(static_cast<QTextDocument::Stacks>(historyToClear));
}

void QTextDocument_setModified1(QTextDocument* self, bool m) {
	self->setModified(m);
}

bool QTextDocument_override_virtual_clear(void* self, intptr_t slot) {
	MiqtVirtualQTextDocument* self_cast = dynamic_cast<MiqtVirtualQTextDocument*>( (QTextDocument*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__clear = slot;
	return true;
}

void QTextDocument_virtualbase_clear(void* self) {
	( (MiqtVirtualQTextDocument*)(self) )->virtualbase_clear();
}

bool QTextDocument_override_virtual_createObject(void* self, intptr_t slot) {
	MiqtVirtualQTextDocument* self_cast = dynamic_cast<MiqtVirtualQTextDocument*>( (QTextDocument*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__createObject = slot;
	return true;
}

QTextObject* QTextDocument_virtualbase_createObject(void* self, QTextFormat* f) {
	return ( (MiqtVirtualQTextDocument*)(self) )->virtualbase_createObject(f);
}

bool QTextDocument_override_virtual_loadResource(void* self, intptr_t slot) {
	MiqtVirtualQTextDocument* self_cast = dynamic_cast<MiqtVirtualQTextDocument*>( (QTextDocument*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__loadResource = slot;
	return true;
}

QVariant* QTextDocument_virtualbase_loadResource(void* self, int type, QUrl* name) {
	return ( (MiqtVirtualQTextDocument*)(self) )->virtualbase_loadResource(type, name);
}

bool QTextDocument_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQTextDocument* self_cast = dynamic_cast<MiqtVirtualQTextDocument*>( (QTextDocument*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QTextDocument_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQTextDocument*)(self) )->virtualbase_event(event);
}

bool QTextDocument_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTextDocument* self_cast = dynamic_cast<MiqtVirtualQTextDocument*>( (QTextDocument*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QTextDocument_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQTextDocument*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QTextDocument_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextDocument* self_cast = dynamic_cast<MiqtVirtualQTextDocument*>( (QTextDocument*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QTextDocument_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQTextDocument*)(self) )->virtualbase_timerEvent(event);
}

bool QTextDocument_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextDocument* self_cast = dynamic_cast<MiqtVirtualQTextDocument*>( (QTextDocument*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QTextDocument_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQTextDocument*)(self) )->virtualbase_childEvent(event);
}

bool QTextDocument_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextDocument* self_cast = dynamic_cast<MiqtVirtualQTextDocument*>( (QTextDocument*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QTextDocument_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTextDocument*)(self) )->virtualbase_customEvent(event);
}

bool QTextDocument_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTextDocument* self_cast = dynamic_cast<MiqtVirtualQTextDocument*>( (QTextDocument*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QTextDocument_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTextDocument*)(self) )->virtualbase_connectNotify(signal);
}

bool QTextDocument_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTextDocument* self_cast = dynamic_cast<MiqtVirtualQTextDocument*>( (QTextDocument*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QTextDocument_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTextDocument*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QTextDocument_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTextDocument* self_cast = dynamic_cast<MiqtVirtualQTextDocument*>( (QTextDocument*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QTextDocument_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTextDocument* self_cast = dynamic_cast<MiqtVirtualQTextDocument*>( (QTextDocument*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QTextDocument_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQTextDocument* self_cast = dynamic_cast<MiqtVirtualQTextDocument*>( (QTextDocument*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QTextDocument_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQTextDocument* self_cast = dynamic_cast<MiqtVirtualQTextDocument*>( (QTextDocument*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QTextDocument_delete(QTextDocument* self) {
	delete self;
}

