#include <QAction>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUndoCommand>
#include <QUndoStack>
#include "qundostack.h"
#include "gen_qundostack.h"
#include "_cgo_export.h"

QUndoCommand* QUndoCommand_new() {
	return new QUndoCommand();
}

QUndoCommand* QUndoCommand_new2(struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	return new QUndoCommand(text_QString);
}

QUndoCommand* QUndoCommand_new3(QUndoCommand* parent) {
	return new QUndoCommand(parent);
}

QUndoCommand* QUndoCommand_new4(struct miqt_string* text, QUndoCommand* parent) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	return new QUndoCommand(text_QString, parent);
}

void QUndoCommand_Undo(QUndoCommand* self) {
	self->undo();
}

void QUndoCommand_Redo(QUndoCommand* self) {
	self->redo();
}

struct miqt_string* QUndoCommand_Text(const QUndoCommand* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QUndoCommand_ActionText(const QUndoCommand* self) {
	QString _ret = self->actionText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QUndoCommand_SetText(QUndoCommand* self, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	self->setText(text_QString);
}

bool QUndoCommand_IsObsolete(const QUndoCommand* self) {
	return self->isObsolete();
}

void QUndoCommand_SetObsolete(QUndoCommand* self, bool obsolete) {
	self->setObsolete(obsolete);
}

int QUndoCommand_Id(const QUndoCommand* self) {
	return self->id();
}

bool QUndoCommand_MergeWith(QUndoCommand* self, QUndoCommand* other) {
	return self->mergeWith(other);
}

int QUndoCommand_ChildCount(const QUndoCommand* self) {
	return self->childCount();
}

QUndoCommand* QUndoCommand_Child(const QUndoCommand* self, int index) {
	return (QUndoCommand*) self->child(static_cast<int>(index));
}

void QUndoCommand_Delete(QUndoCommand* self) {
	delete self;
}

QUndoStack* QUndoStack_new() {
	return new QUndoStack();
}

QUndoStack* QUndoStack_new2(QObject* parent) {
	return new QUndoStack(parent);
}

QMetaObject* QUndoStack_MetaObject(const QUndoStack* self) {
	return (QMetaObject*) self->metaObject();
}

void* QUndoStack_Metacast(QUndoStack* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QUndoStack_Tr(const char* s) {
	QString _ret = QUndoStack::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QUndoStack_TrUtf8(const char* s) {
	QString _ret = QUndoStack::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QUndoStack_Clear(QUndoStack* self) {
	self->clear();
}

void QUndoStack_Push(QUndoStack* self, QUndoCommand* cmd) {
	self->push(cmd);
}

bool QUndoStack_CanUndo(const QUndoStack* self) {
	return self->canUndo();
}

bool QUndoStack_CanRedo(const QUndoStack* self) {
	return self->canRedo();
}

struct miqt_string* QUndoStack_UndoText(const QUndoStack* self) {
	QString _ret = self->undoText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QUndoStack_RedoText(const QUndoStack* self) {
	QString _ret = self->redoText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

int QUndoStack_Count(const QUndoStack* self) {
	return self->count();
}

int QUndoStack_Index(const QUndoStack* self) {
	return self->index();
}

struct miqt_string* QUndoStack_Text(const QUndoStack* self, int idx) {
	QString _ret = self->text(static_cast<int>(idx));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QAction* QUndoStack_CreateUndoAction(const QUndoStack* self, QObject* parent) {
	return self->createUndoAction(parent);
}

QAction* QUndoStack_CreateRedoAction(const QUndoStack* self, QObject* parent) {
	return self->createRedoAction(parent);
}

bool QUndoStack_IsActive(const QUndoStack* self) {
	return self->isActive();
}

bool QUndoStack_IsClean(const QUndoStack* self) {
	return self->isClean();
}

int QUndoStack_CleanIndex(const QUndoStack* self) {
	return self->cleanIndex();
}

void QUndoStack_BeginMacro(QUndoStack* self, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	self->beginMacro(text_QString);
}

void QUndoStack_EndMacro(QUndoStack* self) {
	self->endMacro();
}

void QUndoStack_SetUndoLimit(QUndoStack* self, int limit) {
	self->setUndoLimit(static_cast<int>(limit));
}

int QUndoStack_UndoLimit(const QUndoStack* self) {
	return self->undoLimit();
}

QUndoCommand* QUndoStack_Command(const QUndoStack* self, int index) {
	return (QUndoCommand*) self->command(static_cast<int>(index));
}

void QUndoStack_SetClean(QUndoStack* self) {
	self->setClean();
}

void QUndoStack_ResetClean(QUndoStack* self) {
	self->resetClean();
}

void QUndoStack_SetIndex(QUndoStack* self, int idx) {
	self->setIndex(static_cast<int>(idx));
}

void QUndoStack_Undo(QUndoStack* self) {
	self->undo();
}

void QUndoStack_Redo(QUndoStack* self) {
	self->redo();
}

void QUndoStack_SetActive(QUndoStack* self) {
	self->setActive();
}

void QUndoStack_IndexChanged(QUndoStack* self, int idx) {
	self->indexChanged(static_cast<int>(idx));
}

void QUndoStack_connect_IndexChanged(QUndoStack* self, intptr_t slot) {
	QUndoStack::connect(self, static_cast<void (QUndoStack::*)(int)>(&QUndoStack::indexChanged), self, [=](int idx) {
		int sigval1 = idx;
		miqt_exec_callback_QUndoStack_IndexChanged(slot, sigval1);
	});
}

void QUndoStack_CleanChanged(QUndoStack* self, bool clean) {
	self->cleanChanged(clean);
}

void QUndoStack_connect_CleanChanged(QUndoStack* self, intptr_t slot) {
	QUndoStack::connect(self, static_cast<void (QUndoStack::*)(bool)>(&QUndoStack::cleanChanged), self, [=](bool clean) {
		bool sigval1 = clean;
		miqt_exec_callback_QUndoStack_CleanChanged(slot, sigval1);
	});
}

void QUndoStack_CanUndoChanged(QUndoStack* self, bool canUndo) {
	self->canUndoChanged(canUndo);
}

void QUndoStack_connect_CanUndoChanged(QUndoStack* self, intptr_t slot) {
	QUndoStack::connect(self, static_cast<void (QUndoStack::*)(bool)>(&QUndoStack::canUndoChanged), self, [=](bool canUndo) {
		bool sigval1 = canUndo;
		miqt_exec_callback_QUndoStack_CanUndoChanged(slot, sigval1);
	});
}

void QUndoStack_CanRedoChanged(QUndoStack* self, bool canRedo) {
	self->canRedoChanged(canRedo);
}

void QUndoStack_connect_CanRedoChanged(QUndoStack* self, intptr_t slot) {
	QUndoStack::connect(self, static_cast<void (QUndoStack::*)(bool)>(&QUndoStack::canRedoChanged), self, [=](bool canRedo) {
		bool sigval1 = canRedo;
		miqt_exec_callback_QUndoStack_CanRedoChanged(slot, sigval1);
	});
}

void QUndoStack_UndoTextChanged(QUndoStack* self, struct miqt_string* undoText) {
	QString undoText_QString = QString::fromUtf8(&undoText->data, undoText->len);
	self->undoTextChanged(undoText_QString);
}

void QUndoStack_connect_UndoTextChanged(QUndoStack* self, intptr_t slot) {
	QUndoStack::connect(self, static_cast<void (QUndoStack::*)(const QString&)>(&QUndoStack::undoTextChanged), self, [=](const QString& undoText) {
		const QString undoText_ret = undoText;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray undoText_b = undoText_ret.toUtf8();
		struct miqt_string* sigval1 = miqt_strdup(undoText_b.data(), undoText_b.length());
		miqt_exec_callback_QUndoStack_UndoTextChanged(slot, sigval1);
	});
}

void QUndoStack_RedoTextChanged(QUndoStack* self, struct miqt_string* redoText) {
	QString redoText_QString = QString::fromUtf8(&redoText->data, redoText->len);
	self->redoTextChanged(redoText_QString);
}

void QUndoStack_connect_RedoTextChanged(QUndoStack* self, intptr_t slot) {
	QUndoStack::connect(self, static_cast<void (QUndoStack::*)(const QString&)>(&QUndoStack::redoTextChanged), self, [=](const QString& redoText) {
		const QString redoText_ret = redoText;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray redoText_b = redoText_ret.toUtf8();
		struct miqt_string* sigval1 = miqt_strdup(redoText_b.data(), redoText_b.length());
		miqt_exec_callback_QUndoStack_RedoTextChanged(slot, sigval1);
	});
}

struct miqt_string* QUndoStack_Tr2(const char* s, const char* c) {
	QString _ret = QUndoStack::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QUndoStack_Tr3(const char* s, const char* c, int n) {
	QString _ret = QUndoStack::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QUndoStack_TrUtf82(const char* s, const char* c) {
	QString _ret = QUndoStack::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QUndoStack_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QUndoStack::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QAction* QUndoStack_CreateUndoAction2(const QUndoStack* self, QObject* parent, struct miqt_string* prefix) {
	QString prefix_QString = QString::fromUtf8(&prefix->data, prefix->len);
	return self->createUndoAction(parent, prefix_QString);
}

QAction* QUndoStack_CreateRedoAction2(const QUndoStack* self, QObject* parent, struct miqt_string* prefix) {
	QString prefix_QString = QString::fromUtf8(&prefix->data, prefix->len);
	return self->createRedoAction(parent, prefix_QString);
}

void QUndoStack_SetActive1(QUndoStack* self, bool active) {
	self->setActive(active);
}

void QUndoStack_Delete(QUndoStack* self) {
	delete self;
}

