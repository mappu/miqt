#include <QColor>
#include <QFont>
#include <QList>
#include <QMenu>
#include <QMetaObject>
#include <QPagedPaintDevice>
#include <QPoint>
#include <QRect>
#include <QRegExp>
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
#include "qtextedit.h"

#include "gen_qtextedit.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QTextEdit* QTextEdit_new() {
	return new QTextEdit();
}

QTextEdit* QTextEdit_new2(const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QTextEdit(text_QString);
}

QTextEdit* QTextEdit_new3(QWidget* parent) {
	return new QTextEdit(parent);
}

QTextEdit* QTextEdit_new4(const char* text, size_t text_Strlen, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QTextEdit(text_QString, parent);
}

QMetaObject* QTextEdit_MetaObject(QTextEdit* self) {
	return (QMetaObject*) const_cast<const QTextEdit*>(self)->metaObject();
}

void QTextEdit_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QTextEdit::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextEdit_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QTextEdit::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextEdit_SetDocument(QTextEdit* self, QTextDocument* document) {
	self->setDocument(document);
}

QTextDocument* QTextEdit_Document(QTextEdit* self) {
	return const_cast<const QTextEdit*>(self)->document();
}

void QTextEdit_SetPlaceholderText(QTextEdit* self, const char* placeholderText, size_t placeholderText_Strlen) {
	QString placeholderText_QString = QString::fromUtf8(placeholderText, placeholderText_Strlen);
	self->setPlaceholderText(placeholderText_QString);
}

void QTextEdit_PlaceholderText(QTextEdit* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTextEdit*>(self)->placeholderText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextEdit_SetTextCursor(QTextEdit* self, QTextCursor* cursor) {
	self->setTextCursor(*cursor);
}

QTextCursor* QTextEdit_TextCursor(QTextEdit* self) {
	QTextCursor ret = const_cast<const QTextEdit*>(self)->textCursor();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCursor*>(new QTextCursor(ret));
}

bool QTextEdit_IsReadOnly(QTextEdit* self) {
	return const_cast<const QTextEdit*>(self)->isReadOnly();
}

void QTextEdit_SetReadOnly(QTextEdit* self, bool ro) {
	self->setReadOnly(ro);
}

void QTextEdit_SetTextInteractionFlags(QTextEdit* self, int flags) {
	self->setTextInteractionFlags(static_cast<Qt::TextInteractionFlags>(flags));
}

int QTextEdit_TextInteractionFlags(QTextEdit* self) {
	Qt::TextInteractionFlags ret = const_cast<const QTextEdit*>(self)->textInteractionFlags();
	return static_cast<int>(ret);
}

double QTextEdit_FontPointSize(QTextEdit* self) {
	return const_cast<const QTextEdit*>(self)->fontPointSize();
}

void QTextEdit_FontFamily(QTextEdit* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTextEdit*>(self)->fontFamily();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QTextEdit_FontWeight(QTextEdit* self) {
	return const_cast<const QTextEdit*>(self)->fontWeight();
}

bool QTextEdit_FontUnderline(QTextEdit* self) {
	return const_cast<const QTextEdit*>(self)->fontUnderline();
}

bool QTextEdit_FontItalic(QTextEdit* self) {
	return const_cast<const QTextEdit*>(self)->fontItalic();
}

QColor* QTextEdit_TextColor(QTextEdit* self) {
	QColor ret = const_cast<const QTextEdit*>(self)->textColor();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QTextEdit_TextBackgroundColor(QTextEdit* self) {
	QColor ret = const_cast<const QTextEdit*>(self)->textBackgroundColor();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QFont* QTextEdit_CurrentFont(QTextEdit* self) {
	QFont ret = const_cast<const QTextEdit*>(self)->currentFont();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(ret));
}

int QTextEdit_Alignment(QTextEdit* self) {
	Qt::Alignment ret = const_cast<const QTextEdit*>(self)->alignment();
	return static_cast<int>(ret);
}

void QTextEdit_MergeCurrentCharFormat(QTextEdit* self, QTextCharFormat* modifier) {
	self->mergeCurrentCharFormat(*modifier);
}

void QTextEdit_SetCurrentCharFormat(QTextEdit* self, QTextCharFormat* format) {
	self->setCurrentCharFormat(*format);
}

QTextCharFormat* QTextEdit_CurrentCharFormat(QTextEdit* self) {
	QTextCharFormat ret = const_cast<const QTextEdit*>(self)->currentCharFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCharFormat*>(new QTextCharFormat(ret));
}

int QTextEdit_AutoFormatting(QTextEdit* self) {
	QTextEdit::AutoFormatting ret = const_cast<const QTextEdit*>(self)->autoFormatting();
	return static_cast<int>(ret);
}

void QTextEdit_SetAutoFormatting(QTextEdit* self, int features) {
	self->setAutoFormatting(static_cast<QTextEdit::AutoFormatting>(features));
}

bool QTextEdit_TabChangesFocus(QTextEdit* self) {
	return const_cast<const QTextEdit*>(self)->tabChangesFocus();
}

void QTextEdit_SetTabChangesFocus(QTextEdit* self, bool b) {
	self->setTabChangesFocus(b);
}

void QTextEdit_SetDocumentTitle(QTextEdit* self, const char* title, size_t title_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	self->setDocumentTitle(title_QString);
}

void QTextEdit_DocumentTitle(QTextEdit* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTextEdit*>(self)->documentTitle();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QTextEdit_IsUndoRedoEnabled(QTextEdit* self) {
	return const_cast<const QTextEdit*>(self)->isUndoRedoEnabled();
}

void QTextEdit_SetUndoRedoEnabled(QTextEdit* self, bool enable) {
	self->setUndoRedoEnabled(enable);
}

uintptr_t QTextEdit_LineWrapMode(QTextEdit* self) {
	QTextEdit::LineWrapMode ret = const_cast<const QTextEdit*>(self)->lineWrapMode();
	return static_cast<uintptr_t>(ret);
}

void QTextEdit_SetLineWrapMode(QTextEdit* self, uintptr_t mode) {
	self->setLineWrapMode(static_cast<QTextEdit::LineWrapMode>(mode));
}

int QTextEdit_LineWrapColumnOrWidth(QTextEdit* self) {
	return const_cast<const QTextEdit*>(self)->lineWrapColumnOrWidth();
}

void QTextEdit_SetLineWrapColumnOrWidth(QTextEdit* self, int w) {
	self->setLineWrapColumnOrWidth(static_cast<int>(w));
}

uintptr_t QTextEdit_WordWrapMode(QTextEdit* self) {
	QTextOption::WrapMode ret = const_cast<const QTextEdit*>(self)->wordWrapMode();
	return static_cast<uintptr_t>(ret);
}

void QTextEdit_SetWordWrapMode(QTextEdit* self, uintptr_t policy) {
	self->setWordWrapMode(static_cast<QTextOption::WrapMode>(policy));
}

bool QTextEdit_Find(QTextEdit* self, const char* exp, size_t exp_Strlen) {
	QString exp_QString = QString::fromUtf8(exp, exp_Strlen);
	return self->find(exp_QString);
}

bool QTextEdit_FindWithExp(QTextEdit* self, QRegExp* exp) {
	return self->find(*exp);
}

bool QTextEdit_Find2(QTextEdit* self, QRegularExpression* exp) {
	return self->find(*exp);
}

void QTextEdit_ToPlainText(QTextEdit* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTextEdit*>(self)->toPlainText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextEdit_ToHtml(QTextEdit* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTextEdit*>(self)->toHtml();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextEdit_ToMarkdown(QTextEdit* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTextEdit*>(self)->toMarkdown();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextEdit_EnsureCursorVisible(QTextEdit* self) {
	self->ensureCursorVisible();
}

QVariant* QTextEdit_LoadResource(QTextEdit* self, int typeVal, QUrl* name) {
	QVariant ret = self->loadResource(static_cast<int>(typeVal), *name);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

QMenu* QTextEdit_CreateStandardContextMenu(QTextEdit* self) {
	return self->createStandardContextMenu();
}

QMenu* QTextEdit_CreateStandardContextMenuWithPosition(QTextEdit* self, QPoint* position) {
	return self->createStandardContextMenu(*position);
}

QTextCursor* QTextEdit_CursorForPosition(QTextEdit* self, QPoint* pos) {
	QTextCursor ret = const_cast<const QTextEdit*>(self)->cursorForPosition(*pos);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCursor*>(new QTextCursor(ret));
}

QRect* QTextEdit_CursorRect(QTextEdit* self, QTextCursor* cursor) {
	QRect ret = const_cast<const QTextEdit*>(self)->cursorRect(*cursor);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QTextEdit_CursorRect2(QTextEdit* self) {
	QRect ret = const_cast<const QTextEdit*>(self)->cursorRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QTextEdit_AnchorAt(QTextEdit* self, QPoint* pos, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTextEdit*>(self)->anchorAt(*pos);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QTextEdit_OverwriteMode(QTextEdit* self) {
	return const_cast<const QTextEdit*>(self)->overwriteMode();
}

void QTextEdit_SetOverwriteMode(QTextEdit* self, bool overwrite) {
	self->setOverwriteMode(overwrite);
}

int QTextEdit_TabStopWidth(QTextEdit* self) {
	return const_cast<const QTextEdit*>(self)->tabStopWidth();
}

void QTextEdit_SetTabStopWidth(QTextEdit* self, int width) {
	self->setTabStopWidth(static_cast<int>(width));
}

double QTextEdit_TabStopDistance(QTextEdit* self) {
	return const_cast<const QTextEdit*>(self)->tabStopDistance();
}

void QTextEdit_SetTabStopDistance(QTextEdit* self, double distance) {
	self->setTabStopDistance(static_cast<qreal>(distance));
}

int QTextEdit_CursorWidth(QTextEdit* self) {
	return const_cast<const QTextEdit*>(self)->cursorWidth();
}

void QTextEdit_SetCursorWidth(QTextEdit* self, int width) {
	self->setCursorWidth(static_cast<int>(width));
}

bool QTextEdit_AcceptRichText(QTextEdit* self) {
	return const_cast<const QTextEdit*>(self)->acceptRichText();
}

void QTextEdit_SetAcceptRichText(QTextEdit* self, bool accept) {
	self->setAcceptRichText(accept);
}

void QTextEdit_SetExtraSelections(QTextEdit* self, QTextEdit__ExtraSelection** selections, size_t selections_len) {
	QList<QTextEdit::ExtraSelection> selections_QList;
	selections_QList.reserve(selections_len);
	for(size_t i = 0; i < selections_len; ++i) {
		selections_QList.push_back(*(selections[i]));
	}
	self->setExtraSelections(selections_QList);
}

void QTextEdit_ExtraSelections(QTextEdit* self, QTextEdit__ExtraSelection*** _out, size_t* _out_len) {
	QList<QTextEdit::ExtraSelection> ret = const_cast<const QTextEdit*>(self)->extraSelections();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QTextEdit__ExtraSelection** __out = static_cast<QTextEdit__ExtraSelection**>(malloc(sizeof(QTextEdit__ExtraSelection**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QTextEdit::ExtraSelection(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTextEdit_MoveCursor(QTextEdit* self, uintptr_t operation) {
	self->moveCursor(static_cast<QTextCursor::MoveOperation>(operation));
}

bool QTextEdit_CanPaste(QTextEdit* self) {
	return const_cast<const QTextEdit*>(self)->canPaste();
}

void QTextEdit_Print(QTextEdit* self, QPagedPaintDevice* printer) {
	const_cast<const QTextEdit*>(self)->print(printer);
}

QVariant* QTextEdit_InputMethodQuery(QTextEdit* self, uintptr_t property) {
	QVariant ret = const_cast<const QTextEdit*>(self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

QVariant* QTextEdit_InputMethodQuery2(QTextEdit* self, uintptr_t query, QVariant* argument) {
	QVariant ret = const_cast<const QTextEdit*>(self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query), *argument);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QTextEdit_SetFontPointSize(QTextEdit* self, double s) {
	self->setFontPointSize(static_cast<qreal>(s));
}

void QTextEdit_SetFontFamily(QTextEdit* self, const char* fontFamily, size_t fontFamily_Strlen) {
	QString fontFamily_QString = QString::fromUtf8(fontFamily, fontFamily_Strlen);
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

void QTextEdit_SetPlainText(QTextEdit* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setPlainText(text_QString);
}

void QTextEdit_SetHtml(QTextEdit* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setHtml(text_QString);
}

void QTextEdit_SetMarkdown(QTextEdit* self, const char* markdown, size_t markdown_Strlen) {
	QString markdown_QString = QString::fromUtf8(markdown, markdown_Strlen);
	self->setMarkdown(markdown_QString);
}

void QTextEdit_SetText(QTextEdit* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
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

void QTextEdit_InsertPlainText(QTextEdit* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->insertPlainText(text_QString);
}

void QTextEdit_InsertHtml(QTextEdit* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->insertHtml(text_QString);
}

void QTextEdit_Append(QTextEdit* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->append(text_QString);
}

void QTextEdit_ScrollToAnchor(QTextEdit* self, const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
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

void QTextEdit_connect_TextChanged(QTextEdit* self, void* slot) {
	QTextEdit::connect(self, static_cast<void (QTextEdit::*)()>(&QTextEdit::textChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTextEdit_UndoAvailable(QTextEdit* self, bool b) {
	self->undoAvailable(b);
}

void QTextEdit_connect_UndoAvailable(QTextEdit* self, void* slot) {
	QTextEdit::connect(self, static_cast<void (QTextEdit::*)(bool)>(&QTextEdit::undoAvailable), self, [=](bool b) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTextEdit_RedoAvailable(QTextEdit* self, bool b) {
	self->redoAvailable(b);
}

void QTextEdit_connect_RedoAvailable(QTextEdit* self, void* slot) {
	QTextEdit::connect(self, static_cast<void (QTextEdit::*)(bool)>(&QTextEdit::redoAvailable), self, [=](bool b) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTextEdit_CurrentCharFormatChanged(QTextEdit* self, QTextCharFormat* format) {
	self->currentCharFormatChanged(*format);
}

void QTextEdit_connect_CurrentCharFormatChanged(QTextEdit* self, void* slot) {
	QTextEdit::connect(self, static_cast<void (QTextEdit::*)(const QTextCharFormat&)>(&QTextEdit::currentCharFormatChanged), self, [=](const QTextCharFormat& format) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTextEdit_CopyAvailable(QTextEdit* self, bool b) {
	self->copyAvailable(b);
}

void QTextEdit_connect_CopyAvailable(QTextEdit* self, void* slot) {
	QTextEdit::connect(self, static_cast<void (QTextEdit::*)(bool)>(&QTextEdit::copyAvailable), self, [=](bool b) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTextEdit_SelectionChanged(QTextEdit* self) {
	self->selectionChanged();
}

void QTextEdit_connect_SelectionChanged(QTextEdit* self, void* slot) {
	QTextEdit::connect(self, static_cast<void (QTextEdit::*)()>(&QTextEdit::selectionChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTextEdit_CursorPositionChanged(QTextEdit* self) {
	self->cursorPositionChanged();
}

void QTextEdit_connect_CursorPositionChanged(QTextEdit* self, void* slot) {
	QTextEdit::connect(self, static_cast<void (QTextEdit::*)()>(&QTextEdit::cursorPositionChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTextEdit_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QTextEdit::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextEdit_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTextEdit::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextEdit_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QTextEdit::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextEdit_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTextEdit::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QTextEdit_Find22(QTextEdit* self, const char* exp, size_t exp_Strlen, int options) {
	QString exp_QString = QString::fromUtf8(exp, exp_Strlen);
	return self->find(exp_QString, static_cast<QTextDocument::FindFlags>(options));
}

bool QTextEdit_Find23(QTextEdit* self, QRegExp* exp, int options) {
	return self->find(*exp, static_cast<QTextDocument::FindFlags>(options));
}

bool QTextEdit_Find24(QTextEdit* self, QRegularExpression* exp, int options) {
	return self->find(*exp, static_cast<QTextDocument::FindFlags>(options));
}

void QTextEdit_ToMarkdown1(QTextEdit* self, int features, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTextEdit*>(self)->toMarkdown(static_cast<QTextDocument::MarkdownFeatures>(features));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextEdit_MoveCursor2(QTextEdit* self, uintptr_t operation, uintptr_t mode) {
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

void QTextEdit__ExtraSelection_Delete(QTextEdit__ExtraSelection* self) {
	delete self;
}

