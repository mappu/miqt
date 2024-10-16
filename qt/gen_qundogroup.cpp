#include <QAction>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUndoGroup>
#include <QUndoStack>
#include <qundogroup.h>
#include "gen_qundogroup.h"
#include "_cgo_export.h"

QUndoGroup* QUndoGroup_new() {
	return new QUndoGroup();
}

QUndoGroup* QUndoGroup_new2(QObject* parent) {
	return new QUndoGroup(parent);
}

QMetaObject* QUndoGroup_MetaObject(const QUndoGroup* self) {
	return (QMetaObject*) self->metaObject();
}

void* QUndoGroup_Metacast(QUndoGroup* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QUndoGroup_Tr(const char* s) {
	QString _ret = QUndoGroup::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QUndoGroup_TrUtf8(const char* s) {
	QString _ret = QUndoGroup::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QUndoGroup_AddStack(QUndoGroup* self, QUndoStack* stack) {
	self->addStack(stack);
}

void QUndoGroup_RemoveStack(QUndoGroup* self, QUndoStack* stack) {
	self->removeStack(stack);
}

struct miqt_array* QUndoGroup_Stacks(const QUndoGroup* self) {
	QList<QUndoStack *> _ret = self->stacks();
	// Convert QList<> from C++ memory to manually-managed C memory
	QUndoStack** _arr = static_cast<QUndoStack**>(malloc(sizeof(QUndoStack*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

QUndoStack* QUndoGroup_ActiveStack(const QUndoGroup* self) {
	return self->activeStack();
}

QAction* QUndoGroup_CreateUndoAction(const QUndoGroup* self, QObject* parent) {
	return self->createUndoAction(parent);
}

QAction* QUndoGroup_CreateRedoAction(const QUndoGroup* self, QObject* parent) {
	return self->createRedoAction(parent);
}

bool QUndoGroup_CanUndo(const QUndoGroup* self) {
	return self->canUndo();
}

bool QUndoGroup_CanRedo(const QUndoGroup* self) {
	return self->canRedo();
}

struct miqt_string* QUndoGroup_UndoText(const QUndoGroup* self) {
	QString _ret = self->undoText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QUndoGroup_RedoText(const QUndoGroup* self) {
	QString _ret = self->redoText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

bool QUndoGroup_IsClean(const QUndoGroup* self) {
	return self->isClean();
}

void QUndoGroup_Undo(QUndoGroup* self) {
	self->undo();
}

void QUndoGroup_Redo(QUndoGroup* self) {
	self->redo();
}

void QUndoGroup_SetActiveStack(QUndoGroup* self, QUndoStack* stack) {
	self->setActiveStack(stack);
}

void QUndoGroup_ActiveStackChanged(QUndoGroup* self, QUndoStack* stack) {
	self->activeStackChanged(stack);
}

void QUndoGroup_connect_ActiveStackChanged(QUndoGroup* self, intptr_t slot) {
	QUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(QUndoStack*)>(&QUndoGroup::activeStackChanged), self, [=](QUndoStack* stack) {
		QUndoStack* sigval1 = stack;
		miqt_exec_callback_QUndoGroup_ActiveStackChanged(slot, sigval1);
	});
}

void QUndoGroup_IndexChanged(QUndoGroup* self, int idx) {
	self->indexChanged(static_cast<int>(idx));
}

void QUndoGroup_connect_IndexChanged(QUndoGroup* self, intptr_t slot) {
	QUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(int)>(&QUndoGroup::indexChanged), self, [=](int idx) {
		int sigval1 = idx;
		miqt_exec_callback_QUndoGroup_IndexChanged(slot, sigval1);
	});
}

void QUndoGroup_CleanChanged(QUndoGroup* self, bool clean) {
	self->cleanChanged(clean);
}

void QUndoGroup_connect_CleanChanged(QUndoGroup* self, intptr_t slot) {
	QUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(bool)>(&QUndoGroup::cleanChanged), self, [=](bool clean) {
		bool sigval1 = clean;
		miqt_exec_callback_QUndoGroup_CleanChanged(slot, sigval1);
	});
}

void QUndoGroup_CanUndoChanged(QUndoGroup* self, bool canUndo) {
	self->canUndoChanged(canUndo);
}

void QUndoGroup_connect_CanUndoChanged(QUndoGroup* self, intptr_t slot) {
	QUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(bool)>(&QUndoGroup::canUndoChanged), self, [=](bool canUndo) {
		bool sigval1 = canUndo;
		miqt_exec_callback_QUndoGroup_CanUndoChanged(slot, sigval1);
	});
}

void QUndoGroup_CanRedoChanged(QUndoGroup* self, bool canRedo) {
	self->canRedoChanged(canRedo);
}

void QUndoGroup_connect_CanRedoChanged(QUndoGroup* self, intptr_t slot) {
	QUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(bool)>(&QUndoGroup::canRedoChanged), self, [=](bool canRedo) {
		bool sigval1 = canRedo;
		miqt_exec_callback_QUndoGroup_CanRedoChanged(slot, sigval1);
	});
}

void QUndoGroup_UndoTextChanged(QUndoGroup* self, struct miqt_string* undoText) {
	QString undoText_QString = QString::fromUtf8(&undoText->data, undoText->len);
	self->undoTextChanged(undoText_QString);
}

void QUndoGroup_connect_UndoTextChanged(QUndoGroup* self, intptr_t slot) {
	QUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(const QString&)>(&QUndoGroup::undoTextChanged), self, [=](const QString& undoText) {
		const QString undoText_ret = undoText;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray undoText_b = undoText_ret.toUtf8();
		struct miqt_string* sigval1 = miqt_strdup(undoText_b.data(), undoText_b.length());
		miqt_exec_callback_QUndoGroup_UndoTextChanged(slot, sigval1);
	});
}

void QUndoGroup_RedoTextChanged(QUndoGroup* self, struct miqt_string* redoText) {
	QString redoText_QString = QString::fromUtf8(&redoText->data, redoText->len);
	self->redoTextChanged(redoText_QString);
}

void QUndoGroup_connect_RedoTextChanged(QUndoGroup* self, intptr_t slot) {
	QUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(const QString&)>(&QUndoGroup::redoTextChanged), self, [=](const QString& redoText) {
		const QString redoText_ret = redoText;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray redoText_b = redoText_ret.toUtf8();
		struct miqt_string* sigval1 = miqt_strdup(redoText_b.data(), redoText_b.length());
		miqt_exec_callback_QUndoGroup_RedoTextChanged(slot, sigval1);
	});
}

struct miqt_string* QUndoGroup_Tr2(const char* s, const char* c) {
	QString _ret = QUndoGroup::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QUndoGroup_Tr3(const char* s, const char* c, int n) {
	QString _ret = QUndoGroup::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QUndoGroup_TrUtf82(const char* s, const char* c) {
	QString _ret = QUndoGroup::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QUndoGroup_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QUndoGroup::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QAction* QUndoGroup_CreateUndoAction2(const QUndoGroup* self, QObject* parent, struct miqt_string* prefix) {
	QString prefix_QString = QString::fromUtf8(&prefix->data, prefix->len);
	return self->createUndoAction(parent, prefix_QString);
}

QAction* QUndoGroup_CreateRedoAction2(const QUndoGroup* self, QObject* parent, struct miqt_string* prefix) {
	QString prefix_QString = QString::fromUtf8(&prefix->data, prefix->len);
	return self->createRedoAction(parent, prefix_QString);
}

void QUndoGroup_Delete(QUndoGroup* self) {
	delete self;
}

