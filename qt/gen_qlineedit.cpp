#include <QAction>
#include <QCompleter>
#include <QEvent>
#include <QIcon>
#include <QLineEdit>
#include <QMargins>
#include <QMenu>
#include <QMetaObject>
#include <QPoint>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QValidator>
#include <QVariant>
#include <QWidget>
#include "qlineedit.h"

#include "gen_qlineedit.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QLineEdit* QLineEdit_new() {
	return new QLineEdit();
}

QLineEdit* QLineEdit_new2(const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	return new QLineEdit(param1_QString);
}

QLineEdit* QLineEdit_new3(QWidget* parent) {
	return new QLineEdit(parent);
}

QLineEdit* QLineEdit_new4(const char* param1, size_t param1_Strlen, QWidget* parent) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	return new QLineEdit(param1_QString, parent);
}

QMetaObject* QLineEdit_MetaObject(QLineEdit* self) {
	return (QMetaObject*) const_cast<const QLineEdit*>(self)->metaObject();
}

void QLineEdit_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QLineEdit::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLineEdit_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QLineEdit::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLineEdit_Text(QLineEdit* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLineEdit*>(self)->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLineEdit_DisplayText(QLineEdit* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLineEdit*>(self)->displayText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLineEdit_PlaceholderText(QLineEdit* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLineEdit*>(self)->placeholderText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLineEdit_SetPlaceholderText(QLineEdit* self, const char* placeholderText, size_t placeholderText_Strlen) {
	QString placeholderText_QString = QString::fromUtf8(placeholderText, placeholderText_Strlen);
	self->setPlaceholderText(placeholderText_QString);
}

int QLineEdit_MaxLength(QLineEdit* self) {
	return const_cast<const QLineEdit*>(self)->maxLength();
}

void QLineEdit_SetMaxLength(QLineEdit* self, int maxLength) {
	self->setMaxLength(static_cast<int>(maxLength));
}

void QLineEdit_SetFrame(QLineEdit* self, bool frame) {
	self->setFrame(frame);
}

bool QLineEdit_HasFrame(QLineEdit* self) {
	return const_cast<const QLineEdit*>(self)->hasFrame();
}

void QLineEdit_SetClearButtonEnabled(QLineEdit* self, bool enable) {
	self->setClearButtonEnabled(enable);
}

bool QLineEdit_IsClearButtonEnabled(QLineEdit* self) {
	return const_cast<const QLineEdit*>(self)->isClearButtonEnabled();
}

uintptr_t QLineEdit_EchoMode(QLineEdit* self) {
	QLineEdit::EchoMode ret = const_cast<const QLineEdit*>(self)->echoMode();
	return static_cast<uintptr_t>(ret);
}

void QLineEdit_SetEchoMode(QLineEdit* self, uintptr_t echoMode) {
	self->setEchoMode(static_cast<QLineEdit::EchoMode>(echoMode));
}

bool QLineEdit_IsReadOnly(QLineEdit* self) {
	return const_cast<const QLineEdit*>(self)->isReadOnly();
}

void QLineEdit_SetReadOnly(QLineEdit* self, bool readOnly) {
	self->setReadOnly(readOnly);
}

void QLineEdit_SetValidator(QLineEdit* self, QValidator* validator) {
	self->setValidator(validator);
}

QValidator* QLineEdit_Validator(QLineEdit* self) {
	return (QValidator*) const_cast<const QLineEdit*>(self)->validator();
}

void QLineEdit_SetCompleter(QLineEdit* self, QCompleter* completer) {
	self->setCompleter(completer);
}

QCompleter* QLineEdit_Completer(QLineEdit* self) {
	return const_cast<const QLineEdit*>(self)->completer();
}

QSize* QLineEdit_SizeHint(QLineEdit* self) {
	QSize ret = const_cast<const QLineEdit*>(self)->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QLineEdit_MinimumSizeHint(QLineEdit* self) {
	QSize ret = const_cast<const QLineEdit*>(self)->minimumSizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

int QLineEdit_CursorPosition(QLineEdit* self) {
	return const_cast<const QLineEdit*>(self)->cursorPosition();
}

void QLineEdit_SetCursorPosition(QLineEdit* self, int cursorPosition) {
	self->setCursorPosition(static_cast<int>(cursorPosition));
}

int QLineEdit_CursorPositionAt(QLineEdit* self, QPoint* pos) {
	return self->cursorPositionAt(*pos);
}

void QLineEdit_SetAlignment(QLineEdit* self, int flag) {
	self->setAlignment(static_cast<Qt::Alignment>(flag));
}

int QLineEdit_Alignment(QLineEdit* self) {
	Qt::Alignment ret = const_cast<const QLineEdit*>(self)->alignment();
	return static_cast<int>(ret);
}

void QLineEdit_CursorForward(QLineEdit* self, bool mark) {
	self->cursorForward(mark);
}

void QLineEdit_CursorBackward(QLineEdit* self, bool mark) {
	self->cursorBackward(mark);
}

void QLineEdit_CursorWordForward(QLineEdit* self, bool mark) {
	self->cursorWordForward(mark);
}

void QLineEdit_CursorWordBackward(QLineEdit* self, bool mark) {
	self->cursorWordBackward(mark);
}

void QLineEdit_Backspace(QLineEdit* self) {
	self->backspace();
}

void QLineEdit_Del(QLineEdit* self) {
	self->del();
}

void QLineEdit_Home(QLineEdit* self, bool mark) {
	self->home(mark);
}

void QLineEdit_End(QLineEdit* self, bool mark) {
	self->end(mark);
}

bool QLineEdit_IsModified(QLineEdit* self) {
	return const_cast<const QLineEdit*>(self)->isModified();
}

void QLineEdit_SetModified(QLineEdit* self, bool modified) {
	self->setModified(modified);
}

void QLineEdit_SetSelection(QLineEdit* self, int param1, int param2) {
	self->setSelection(static_cast<int>(param1), static_cast<int>(param2));
}

bool QLineEdit_HasSelectedText(QLineEdit* self) {
	return const_cast<const QLineEdit*>(self)->hasSelectedText();
}

void QLineEdit_SelectedText(QLineEdit* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLineEdit*>(self)->selectedText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QLineEdit_SelectionStart(QLineEdit* self) {
	return const_cast<const QLineEdit*>(self)->selectionStart();
}

int QLineEdit_SelectionEnd(QLineEdit* self) {
	return const_cast<const QLineEdit*>(self)->selectionEnd();
}

int QLineEdit_SelectionLength(QLineEdit* self) {
	return const_cast<const QLineEdit*>(self)->selectionLength();
}

bool QLineEdit_IsUndoAvailable(QLineEdit* self) {
	return const_cast<const QLineEdit*>(self)->isUndoAvailable();
}

bool QLineEdit_IsRedoAvailable(QLineEdit* self) {
	return const_cast<const QLineEdit*>(self)->isRedoAvailable();
}

void QLineEdit_SetDragEnabled(QLineEdit* self, bool b) {
	self->setDragEnabled(b);
}

bool QLineEdit_DragEnabled(QLineEdit* self) {
	return const_cast<const QLineEdit*>(self)->dragEnabled();
}

void QLineEdit_SetCursorMoveStyle(QLineEdit* self, uintptr_t style) {
	self->setCursorMoveStyle(static_cast<Qt::CursorMoveStyle>(style));
}

uintptr_t QLineEdit_CursorMoveStyle(QLineEdit* self) {
	Qt::CursorMoveStyle ret = const_cast<const QLineEdit*>(self)->cursorMoveStyle();
	return static_cast<uintptr_t>(ret);
}

void QLineEdit_InputMask(QLineEdit* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLineEdit*>(self)->inputMask();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLineEdit_SetInputMask(QLineEdit* self, const char* inputMask, size_t inputMask_Strlen) {
	QString inputMask_QString = QString::fromUtf8(inputMask, inputMask_Strlen);
	self->setInputMask(inputMask_QString);
}

bool QLineEdit_HasAcceptableInput(QLineEdit* self) {
	return const_cast<const QLineEdit*>(self)->hasAcceptableInput();
}

void QLineEdit_SetTextMargins(QLineEdit* self, int left, int top, int right, int bottom) {
	self->setTextMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
}

void QLineEdit_SetTextMarginsWithMargins(QLineEdit* self, QMargins* margins) {
	self->setTextMargins(*margins);
}

void QLineEdit_GetTextMargins(QLineEdit* self, int* left, int* top, int* right, int* bottom) {
	const_cast<const QLineEdit*>(self)->getTextMargins(static_cast<int*>(left), static_cast<int*>(top), static_cast<int*>(right), static_cast<int*>(bottom));
}

QMargins* QLineEdit_TextMargins(QLineEdit* self) {
	QMargins ret = const_cast<const QLineEdit*>(self)->textMargins();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMargins*>(new QMargins(ret));
}

void QLineEdit_AddAction(QLineEdit* self, QAction* action, uintptr_t position) {
	self->addAction(action, static_cast<QLineEdit::ActionPosition>(position));
}

QAction* QLineEdit_AddAction2(QLineEdit* self, QIcon* icon, uintptr_t position) {
	return self->addAction(*icon, static_cast<QLineEdit::ActionPosition>(position));
}

void QLineEdit_SetText(QLineEdit* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setText(text_QString);
}

void QLineEdit_Clear(QLineEdit* self) {
	self->clear();
}

void QLineEdit_SelectAll(QLineEdit* self) {
	self->selectAll();
}

void QLineEdit_Undo(QLineEdit* self) {
	self->undo();
}

void QLineEdit_Redo(QLineEdit* self) {
	self->redo();
}

void QLineEdit_Cut(QLineEdit* self) {
	self->cut();
}

void QLineEdit_Copy(QLineEdit* self) {
	const_cast<const QLineEdit*>(self)->copy();
}

void QLineEdit_Paste(QLineEdit* self) {
	self->paste();
}

void QLineEdit_Deselect(QLineEdit* self) {
	self->deselect();
}

void QLineEdit_Insert(QLineEdit* self, const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	self->insert(param1_QString);
}

QMenu* QLineEdit_CreateStandardContextMenu(QLineEdit* self) {
	return self->createStandardContextMenu();
}

void QLineEdit_TextChanged(QLineEdit* self, const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	self->textChanged(param1_QString);
}

void QLineEdit_connect_TextChanged(QLineEdit* self, void* slot) {
	QLineEdit::connect(self, static_cast<void (QLineEdit::*)(const QString&)>(&QLineEdit::textChanged), self, [=](const QString& param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QLineEdit_TextEdited(QLineEdit* self, const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	self->textEdited(param1_QString);
}

void QLineEdit_connect_TextEdited(QLineEdit* self, void* slot) {
	QLineEdit::connect(self, static_cast<void (QLineEdit::*)(const QString&)>(&QLineEdit::textEdited), self, [=](const QString& param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QLineEdit_CursorPositionChanged(QLineEdit* self, int param1, int param2) {
	self->cursorPositionChanged(static_cast<int>(param1), static_cast<int>(param2));
}

void QLineEdit_connect_CursorPositionChanged(QLineEdit* self, void* slot) {
	QLineEdit::connect(self, static_cast<void (QLineEdit::*)(int, int)>(&QLineEdit::cursorPositionChanged), self, [=](int param1, int param2) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QLineEdit_ReturnPressed(QLineEdit* self) {
	self->returnPressed();
}

void QLineEdit_connect_ReturnPressed(QLineEdit* self, void* slot) {
	QLineEdit::connect(self, static_cast<void (QLineEdit::*)()>(&QLineEdit::returnPressed), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QLineEdit_EditingFinished(QLineEdit* self) {
	self->editingFinished();
}

void QLineEdit_connect_EditingFinished(QLineEdit* self, void* slot) {
	QLineEdit::connect(self, static_cast<void (QLineEdit::*)()>(&QLineEdit::editingFinished), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QLineEdit_SelectionChanged(QLineEdit* self) {
	self->selectionChanged();
}

void QLineEdit_connect_SelectionChanged(QLineEdit* self, void* slot) {
	QLineEdit::connect(self, static_cast<void (QLineEdit::*)()>(&QLineEdit::selectionChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QLineEdit_InputRejected(QLineEdit* self) {
	self->inputRejected();
}

void QLineEdit_connect_InputRejected(QLineEdit* self, void* slot) {
	QLineEdit::connect(self, static_cast<void (QLineEdit::*)()>(&QLineEdit::inputRejected), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

QVariant* QLineEdit_InputMethodQuery(QLineEdit* self, uintptr_t param1) {
	QVariant ret = const_cast<const QLineEdit*>(self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

QVariant* QLineEdit_InputMethodQuery2(QLineEdit* self, uintptr_t property, QVariant* argument) {
	QVariant ret = const_cast<const QLineEdit*>(self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property), *argument);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

bool QLineEdit_Event(QLineEdit* self, QEvent* param1) {
	return self->event(param1);
}

void QLineEdit_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QLineEdit::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLineEdit_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QLineEdit::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLineEdit_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QLineEdit::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLineEdit_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QLineEdit::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLineEdit_CursorForward2(QLineEdit* self, bool mark, int steps) {
	self->cursorForward(mark, static_cast<int>(steps));
}

void QLineEdit_CursorBackward2(QLineEdit* self, bool mark, int steps) {
	self->cursorBackward(mark, static_cast<int>(steps));
}

void QLineEdit_Delete(QLineEdit* self) {
	delete self;
}

