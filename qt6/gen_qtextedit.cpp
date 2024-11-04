#include <QColor>
#include <QFont>
#include <QList>
#include <QMenu>
#include <QMetaObject>
#include <QPagedPaintDevice>
#include <QPoint>
#include <QRect>
#include <QRegularExpression>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextCharFormat>
#include <QTextCursor>
#include <QTextDocument>
#include <QTextEdit>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTextEdit__ExtraSelection
#include <QUrl>
#include <QVariant>
#include <QWidget>
#include <qtextedit.h>
#include "gen_qtextedit.h"
#include "_cgo_export.h"

QTextEdit* QTextEdit_new(QWidget* parent) {
	return new QTextEdit(parent);
}

QTextEdit* QTextEdit_new2() {
	return new QTextEdit();
}

QTextEdit* QTextEdit_new3(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QTextEdit(text_QString);
}

QTextEdit* QTextEdit_new4(struct miqt_string text, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QTextEdit(text_QString, parent);
}

QMetaObject* QTextEdit_MetaObject(const QTextEdit* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTextEdit_Metacast(QTextEdit* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTextEdit_Tr(const char* s) {
	QString _ret = QTextEdit::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextEdit_SetDocument(QTextEdit* self, QTextDocument* document) {
	self->setDocument(document);
}

QTextDocument* QTextEdit_Document(const QTextEdit* self) {
	return self->document();
}

void QTextEdit_SetPlaceholderText(QTextEdit* self, struct miqt_string placeholderText) {
	QString placeholderText_QString = QString::fromUtf8(placeholderText.data, placeholderText.len);
	self->setPlaceholderText(placeholderText_QString);
}

struct miqt_string QTextEdit_PlaceholderText(const QTextEdit* self) {
	QString _ret = self->placeholderText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextEdit_SetTextCursor(QTextEdit* self, QTextCursor* cursor) {
	self->setTextCursor(*cursor);
}

QTextCursor* QTextEdit_TextCursor(const QTextEdit* self) {
	return new QTextCursor(self->textCursor());
}

bool QTextEdit_IsReadOnly(const QTextEdit* self) {
	return self->isReadOnly();
}

void QTextEdit_SetReadOnly(QTextEdit* self, bool ro) {
	self->setReadOnly(ro);
}

void QTextEdit_SetTextInteractionFlags(QTextEdit* self, int flags) {
	self->setTextInteractionFlags(static_cast<Qt::TextInteractionFlags>(flags));
}

int QTextEdit_TextInteractionFlags(const QTextEdit* self) {
	Qt::TextInteractionFlags _ret = self->textInteractionFlags();
	return static_cast<int>(_ret);
}

double QTextEdit_FontPointSize(const QTextEdit* self) {
	qreal _ret = self->fontPointSize();
	return static_cast<double>(_ret);
}

struct miqt_string QTextEdit_FontFamily(const QTextEdit* self) {
	QString _ret = self->fontFamily();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QTextEdit_FontWeight(const QTextEdit* self) {
	return self->fontWeight();
}

bool QTextEdit_FontUnderline(const QTextEdit* self) {
	return self->fontUnderline();
}

bool QTextEdit_FontItalic(const QTextEdit* self) {
	return self->fontItalic();
}

QColor* QTextEdit_TextColor(const QTextEdit* self) {
	return new QColor(self->textColor());
}

QColor* QTextEdit_TextBackgroundColor(const QTextEdit* self) {
	return new QColor(self->textBackgroundColor());
}

QFont* QTextEdit_CurrentFont(const QTextEdit* self) {
	return new QFont(self->currentFont());
}

int QTextEdit_Alignment(const QTextEdit* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QTextEdit_MergeCurrentCharFormat(QTextEdit* self, QTextCharFormat* modifier) {
	self->mergeCurrentCharFormat(*modifier);
}

void QTextEdit_SetCurrentCharFormat(QTextEdit* self, QTextCharFormat* format) {
	self->setCurrentCharFormat(*format);
}

QTextCharFormat* QTextEdit_CurrentCharFormat(const QTextEdit* self) {
	return new QTextCharFormat(self->currentCharFormat());
}

int QTextEdit_AutoFormatting(const QTextEdit* self) {
	QTextEdit::AutoFormatting _ret = self->autoFormatting();
	return static_cast<int>(_ret);
}

void QTextEdit_SetAutoFormatting(QTextEdit* self, int features) {
	self->setAutoFormatting(static_cast<QTextEdit::AutoFormatting>(features));
}

bool QTextEdit_TabChangesFocus(const QTextEdit* self) {
	return self->tabChangesFocus();
}

void QTextEdit_SetTabChangesFocus(QTextEdit* self, bool b) {
	self->setTabChangesFocus(b);
}

void QTextEdit_SetDocumentTitle(QTextEdit* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->setDocumentTitle(title_QString);
}

struct miqt_string QTextEdit_DocumentTitle(const QTextEdit* self) {
	QString _ret = self->documentTitle();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTextEdit_IsUndoRedoEnabled(const QTextEdit* self) {
	return self->isUndoRedoEnabled();
}

void QTextEdit_SetUndoRedoEnabled(QTextEdit* self, bool enable) {
	self->setUndoRedoEnabled(enable);
}

int QTextEdit_LineWrapMode(const QTextEdit* self) {
	QTextEdit::LineWrapMode _ret = self->lineWrapMode();
	return static_cast<int>(_ret);
}

void QTextEdit_SetLineWrapMode(QTextEdit* self, int mode) {
	self->setLineWrapMode(static_cast<QTextEdit::LineWrapMode>(mode));
}

int QTextEdit_LineWrapColumnOrWidth(const QTextEdit* self) {
	return self->lineWrapColumnOrWidth();
}

void QTextEdit_SetLineWrapColumnOrWidth(QTextEdit* self, int w) {
	self->setLineWrapColumnOrWidth(static_cast<int>(w));
}

int QTextEdit_WordWrapMode(const QTextEdit* self) {
	QTextOption::WrapMode _ret = self->wordWrapMode();
	return static_cast<int>(_ret);
}

void QTextEdit_SetWordWrapMode(QTextEdit* self, int policy) {
	self->setWordWrapMode(static_cast<QTextOption::WrapMode>(policy));
}

bool QTextEdit_Find(QTextEdit* self, struct miqt_string exp) {
	QString exp_QString = QString::fromUtf8(exp.data, exp.len);
	return self->find(exp_QString);
}

bool QTextEdit_FindWithExp(QTextEdit* self, QRegularExpression* exp) {
	return self->find(*exp);
}

struct miqt_string QTextEdit_ToPlainText(const QTextEdit* self) {
	QString _ret = self->toPlainText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextEdit_ToHtml(const QTextEdit* self) {
	QString _ret = self->toHtml();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextEdit_ToMarkdown(const QTextEdit* self) {
	QString _ret = self->toMarkdown();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextEdit_EnsureCursorVisible(QTextEdit* self) {
	self->ensureCursorVisible();
}

QVariant* QTextEdit_LoadResource(QTextEdit* self, int typeVal, QUrl* name) {
	return new QVariant(self->loadResource(static_cast<int>(typeVal), *name));
}

QMenu* QTextEdit_CreateStandardContextMenu(QTextEdit* self) {
	return self->createStandardContextMenu();
}

QMenu* QTextEdit_CreateStandardContextMenuWithPosition(QTextEdit* self, QPoint* position) {
	return self->createStandardContextMenu(*position);
}

QTextCursor* QTextEdit_CursorForPosition(const QTextEdit* self, QPoint* pos) {
	return new QTextCursor(self->cursorForPosition(*pos));
}

QRect* QTextEdit_CursorRect(const QTextEdit* self, QTextCursor* cursor) {
	return new QRect(self->cursorRect(*cursor));
}

QRect* QTextEdit_CursorRect2(const QTextEdit* self) {
	return new QRect(self->cursorRect());
}

struct miqt_string QTextEdit_AnchorAt(const QTextEdit* self, QPoint* pos) {
	QString _ret = self->anchorAt(*pos);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTextEdit_OverwriteMode(const QTextEdit* self) {
	return self->overwriteMode();
}

void QTextEdit_SetOverwriteMode(QTextEdit* self, bool overwrite) {
	self->setOverwriteMode(overwrite);
}

double QTextEdit_TabStopDistance(const QTextEdit* self) {
	qreal _ret = self->tabStopDistance();
	return static_cast<double>(_ret);
}

void QTextEdit_SetTabStopDistance(QTextEdit* self, double distance) {
	self->setTabStopDistance(static_cast<qreal>(distance));
}

int QTextEdit_CursorWidth(const QTextEdit* self) {
	return self->cursorWidth();
}

void QTextEdit_SetCursorWidth(QTextEdit* self, int width) {
	self->setCursorWidth(static_cast<int>(width));
}

bool QTextEdit_AcceptRichText(const QTextEdit* self) {
	return self->acceptRichText();
}

void QTextEdit_SetAcceptRichText(QTextEdit* self, bool accept) {
	self->setAcceptRichText(accept);
}

void QTextEdit_SetExtraSelections(QTextEdit* self, struct miqt_array /* of QTextEdit__ExtraSelection* */ selections) {
	QList<QTextEdit::ExtraSelection> selections_QList;
	selections_QList.reserve(selections.len);
	QTextEdit__ExtraSelection** selections_arr = static_cast<QTextEdit__ExtraSelection**>(selections.data);
	for(size_t i = 0; i < selections.len; ++i) {
		selections_QList.push_back(*(selections_arr[i]));
	}
	self->setExtraSelections(selections_QList);
}

struct miqt_array QTextEdit_ExtraSelections(const QTextEdit* self) {
	QList<QTextEdit::ExtraSelection> _ret = self->extraSelections();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTextEdit__ExtraSelection** _arr = static_cast<QTextEdit__ExtraSelection**>(malloc(sizeof(QTextEdit__ExtraSelection*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QTextEdit::ExtraSelection(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QTextEdit_MoveCursor(QTextEdit* self, int operation) {
	self->moveCursor(static_cast<QTextCursor::MoveOperation>(operation));
}

bool QTextEdit_CanPaste(const QTextEdit* self) {
	return self->canPaste();
}

void QTextEdit_Print(const QTextEdit* self, QPagedPaintDevice* printer) {
	self->print(printer);
}

QVariant* QTextEdit_InputMethodQuery(const QTextEdit* self, int property) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

QVariant* QTextEdit_InputMethodQuery2(const QTextEdit* self, int query, QVariant* argument) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query), *argument));
}

void QTextEdit_SetFontPointSize(QTextEdit* self, double s) {
	self->setFontPointSize(static_cast<qreal>(s));
}

void QTextEdit_SetFontFamily(QTextEdit* self, struct miqt_string fontFamily) {
	QString fontFamily_QString = QString::fromUtf8(fontFamily.data, fontFamily.len);
	self->setFontFamily(fontFamily_QString);
}

void QTextEdit_SetFontWeight(QTextEdit* self, int w) {
	self->setFontWeight(static_cast<int>(w));
}

void QTextEdit_SetFontUnderline(QTextEdit* self, bool b) {
	self->setFontUnderline(b);
}

void QTextEdit_SetFontItalic(QTextEdit* self, bool b) {
	self->setFontItalic(b);
}

void QTextEdit_SetTextColor(QTextEdit* self, QColor* c) {
	self->setTextColor(*c);
}

void QTextEdit_SetTextBackgroundColor(QTextEdit* self, QColor* c) {
	self->setTextBackgroundColor(*c);
}

void QTextEdit_SetCurrentFont(QTextEdit* self, QFont* f) {
	self->setCurrentFont(*f);
}

void QTextEdit_SetAlignment(QTextEdit* self, int a) {
	self->setAlignment(static_cast<Qt::Alignment>(a));
}

void QTextEdit_SetPlainText(QTextEdit* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setPlainText(text_QString);
}

void QTextEdit_SetHtml(QTextEdit* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setHtml(text_QString);
}

void QTextEdit_SetMarkdown(QTextEdit* self, struct miqt_string markdown) {
	QString markdown_QString = QString::fromUtf8(markdown.data, markdown.len);
	self->setMarkdown(markdown_QString);
}

void QTextEdit_SetText(QTextEdit* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

void QTextEdit_Cut(QTextEdit* self) {
	self->cut();
}

void QTextEdit_Copy(QTextEdit* self) {
	self->copy();
}

void QTextEdit_Paste(QTextEdit* self) {
	self->paste();
}

void QTextEdit_Undo(QTextEdit* self) {
	self->undo();
}

void QTextEdit_Redo(QTextEdit* self) {
	self->redo();
}

void QTextEdit_Clear(QTextEdit* self) {
	self->clear();
}

void QTextEdit_SelectAll(QTextEdit* self) {
	self->selectAll();
}

void QTextEdit_InsertPlainText(QTextEdit* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insertPlainText(text_QString);
}

void QTextEdit_InsertHtml(QTextEdit* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insertHtml(text_QString);
}

void QTextEdit_Append(QTextEdit* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->append(text_QString);
}

void QTextEdit_ScrollToAnchor(QTextEdit* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->scrollToAnchor(name_QString);
}

void QTextEdit_ZoomIn(QTextEdit* self) {
	self->zoomIn();
}

void QTextEdit_ZoomOut(QTextEdit* self) {
	self->zoomOut();
}

void QTextEdit_TextChanged(QTextEdit* self) {
	self->textChanged();
}

void QTextEdit_connect_TextChanged(QTextEdit* self, intptr_t slot) {
	QTextEdit::connect(self, static_cast<void (QTextEdit::*)()>(&QTextEdit::textChanged), self, [=]() {
		miqt_exec_callback_QTextEdit_TextChanged(slot);
	});
}

void QTextEdit_UndoAvailable(QTextEdit* self, bool b) {
	self->undoAvailable(b);
}

void QTextEdit_connect_UndoAvailable(QTextEdit* self, intptr_t slot) {
	QTextEdit::connect(self, static_cast<void (QTextEdit::*)(bool)>(&QTextEdit::undoAvailable), self, [=](bool b) {
		bool sigval1 = b;
		miqt_exec_callback_QTextEdit_UndoAvailable(slot, sigval1);
	});
}

void QTextEdit_RedoAvailable(QTextEdit* self, bool b) {
	self->redoAvailable(b);
}

void QTextEdit_connect_RedoAvailable(QTextEdit* self, intptr_t slot) {
	QTextEdit::connect(self, static_cast<void (QTextEdit::*)(bool)>(&QTextEdit::redoAvailable), self, [=](bool b) {
		bool sigval1 = b;
		miqt_exec_callback_QTextEdit_RedoAvailable(slot, sigval1);
	});
}

void QTextEdit_CurrentCharFormatChanged(QTextEdit* self, QTextCharFormat* format) {
	self->currentCharFormatChanged(*format);
}

void QTextEdit_connect_CurrentCharFormatChanged(QTextEdit* self, intptr_t slot) {
	QTextEdit::connect(self, static_cast<void (QTextEdit::*)(const QTextCharFormat&)>(&QTextEdit::currentCharFormatChanged), self, [=](const QTextCharFormat& format) {
		const QTextCharFormat& format_ret = format;
		// Cast returned reference into pointer
		QTextCharFormat* sigval1 = const_cast<QTextCharFormat*>(&format_ret);
		miqt_exec_callback_QTextEdit_CurrentCharFormatChanged(slot, sigval1);
	});
}

void QTextEdit_CopyAvailable(QTextEdit* self, bool b) {
	self->copyAvailable(b);
}

void QTextEdit_connect_CopyAvailable(QTextEdit* self, intptr_t slot) {
	QTextEdit::connect(self, static_cast<void (QTextEdit::*)(bool)>(&QTextEdit::copyAvailable), self, [=](bool b) {
		bool sigval1 = b;
		miqt_exec_callback_QTextEdit_CopyAvailable(slot, sigval1);
	});
}

void QTextEdit_SelectionChanged(QTextEdit* self) {
	self->selectionChanged();
}

void QTextEdit_connect_SelectionChanged(QTextEdit* self, intptr_t slot) {
	QTextEdit::connect(self, static_cast<void (QTextEdit::*)()>(&QTextEdit::selectionChanged), self, [=]() {
		miqt_exec_callback_QTextEdit_SelectionChanged(slot);
	});
}

void QTextEdit_CursorPositionChanged(QTextEdit* self) {
	self->cursorPositionChanged();
}

void QTextEdit_connect_CursorPositionChanged(QTextEdit* self, intptr_t slot) {
	QTextEdit::connect(self, static_cast<void (QTextEdit::*)()>(&QTextEdit::cursorPositionChanged), self, [=]() {
		miqt_exec_callback_QTextEdit_CursorPositionChanged(slot);
	});
}

struct miqt_string QTextEdit_Tr2(const char* s, const char* c) {
	QString _ret = QTextEdit::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextEdit_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTextEdit::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTextEdit_Find2(QTextEdit* self, struct miqt_string exp, int options) {
	QString exp_QString = QString::fromUtf8(exp.data, exp.len);
	return self->find(exp_QString, static_cast<QTextDocument::FindFlags>(options));
}

bool QTextEdit_Find22(QTextEdit* self, QRegularExpression* exp, int options) {
	return self->find(*exp, static_cast<QTextDocument::FindFlags>(options));
}

struct miqt_string QTextEdit_ToMarkdown1(const QTextEdit* self, int features) {
	QString _ret = self->toMarkdown(static_cast<QTextDocument::MarkdownFeatures>(features));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextEdit_MoveCursor2(QTextEdit* self, int operation, int mode) {
	self->moveCursor(static_cast<QTextCursor::MoveOperation>(operation), static_cast<QTextCursor::MoveMode>(mode));
}

void QTextEdit_ZoomIn1(QTextEdit* self, int rangeVal) {
	self->zoomIn(static_cast<int>(rangeVal));
}

void QTextEdit_ZoomOut1(QTextEdit* self, int rangeVal) {
	self->zoomOut(static_cast<int>(rangeVal));
}

void QTextEdit_Delete(QTextEdit* self) {
	delete self;
}

QTextEdit__ExtraSelection* QTextEdit__ExtraSelection_new(QTextEdit__ExtraSelection* param1) {
	return new QTextEdit::ExtraSelection(*param1);
}

void QTextEdit__ExtraSelection_OperatorAssign(QTextEdit__ExtraSelection* self, QTextEdit__ExtraSelection* param1) {
	self->operator=(*param1);
}

void QTextEdit__ExtraSelection_Delete(QTextEdit__ExtraSelection* self) {
	delete self;
}

