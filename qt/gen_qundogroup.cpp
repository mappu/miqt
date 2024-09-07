#include <QAction>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUndoGroup>
#include <QUndoStack>
#include "qundogroup.h"

#include "gen_qundogroup.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QUndoGroup* QUndoGroup_new() {
	return new QUndoGroup();
}

QUndoGroup* QUndoGroup_new2(QObject* parent) {
	return new QUndoGroup(parent);
}

QMetaObject* QUndoGroup_MetaObject(QUndoGroup* self) {
	return (QMetaObject*) const_cast<const QUndoGroup*>(self)->metaObject();
}

void QUndoGroup_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QUndoGroup::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUndoGroup_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QUndoGroup::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUndoGroup_AddStack(QUndoGroup* self, QUndoStack* stack) {
	self->addStack(stack);
}

void QUndoGroup_RemoveStack(QUndoGroup* self, QUndoStack* stack) {
	self->removeStack(stack);
}

void QUndoGroup_Stacks(QUndoGroup* self, QUndoStack*** _out, size_t* _out_len) {
	QList<QUndoStack*> ret = const_cast<const QUndoGroup*>(self)->stacks();
	// Convert QList<> from C++ memory to manually-managed C memory
	QUndoStack** __out = static_cast<QUndoStack**>(malloc(sizeof(QUndoStack*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

QUndoStack* QUndoGroup_ActiveStack(QUndoGroup* self) {
	return const_cast<const QUndoGroup*>(self)->activeStack();
}

QAction* QUndoGroup_CreateUndoAction(QUndoGroup* self, QObject* parent) {
	return const_cast<const QUndoGroup*>(self)->createUndoAction(parent);
}

QAction* QUndoGroup_CreateRedoAction(QUndoGroup* self, QObject* parent) {
	return const_cast<const QUndoGroup*>(self)->createRedoAction(parent);
}

bool QUndoGroup_CanUndo(QUndoGroup* self) {
	return const_cast<const QUndoGroup*>(self)->canUndo();
}

bool QUndoGroup_CanRedo(QUndoGroup* self) {
	return const_cast<const QUndoGroup*>(self)->canRedo();
}

void QUndoGroup_UndoText(QUndoGroup* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QUndoGroup*>(self)->undoText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUndoGroup_RedoText(QUndoGroup* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QUndoGroup*>(self)->redoText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QUndoGroup_IsClean(QUndoGroup* self) {
	return const_cast<const QUndoGroup*>(self)->isClean();
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

void QUndoGroup_connect_ActiveStackChanged(QUndoGroup* self, void* slot) {
	QUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(QUndoStack*)>(&QUndoGroup::activeStackChanged), self, [=](QUndoStack* stack) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QUndoGroup_IndexChanged(QUndoGroup* self, int idx) {
	self->indexChanged(static_cast<int>(idx));
}

void QUndoGroup_connect_IndexChanged(QUndoGroup* self, void* slot) {
	QUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(int)>(&QUndoGroup::indexChanged), self, [=](int idx) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QUndoGroup_CleanChanged(QUndoGroup* self, bool clean) {
	self->cleanChanged(clean);
}

void QUndoGroup_connect_CleanChanged(QUndoGroup* self, void* slot) {
	QUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(bool)>(&QUndoGroup::cleanChanged), self, [=](bool clean) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QUndoGroup_CanUndoChanged(QUndoGroup* self, bool canUndo) {
	self->canUndoChanged(canUndo);
}

void QUndoGroup_connect_CanUndoChanged(QUndoGroup* self, void* slot) {
	QUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(bool)>(&QUndoGroup::canUndoChanged), self, [=](bool canUndo) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QUndoGroup_CanRedoChanged(QUndoGroup* self, bool canRedo) {
	self->canRedoChanged(canRedo);
}

void QUndoGroup_connect_CanRedoChanged(QUndoGroup* self, void* slot) {
	QUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(bool)>(&QUndoGroup::canRedoChanged), self, [=](bool canRedo) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QUndoGroup_UndoTextChanged(QUndoGroup* self, const char* undoText, size_t undoText_Strlen) {
	QString undoText_QString = QString::fromUtf8(undoText, undoText_Strlen);
	self->undoTextChanged(undoText_QString);
}

void QUndoGroup_connect_UndoTextChanged(QUndoGroup* self, void* slot) {
	QUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(const QString&)>(&QUndoGroup::undoTextChanged), self, [=](const QString& undoText) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QUndoGroup_RedoTextChanged(QUndoGroup* self, const char* redoText, size_t redoText_Strlen) {
	QString redoText_QString = QString::fromUtf8(redoText, redoText_Strlen);
	self->redoTextChanged(redoText_QString);
}

void QUndoGroup_connect_RedoTextChanged(QUndoGroup* self, void* slot) {
	QUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(const QString&)>(&QUndoGroup::redoTextChanged), self, [=](const QString& redoText) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QUndoGroup_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QUndoGroup::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUndoGroup_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QUndoGroup::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUndoGroup_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QUndoGroup::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUndoGroup_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QUndoGroup::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QAction* QUndoGroup_CreateUndoAction2(QUndoGroup* self, QObject* parent, const char* prefix, size_t prefix_Strlen) {
	QString prefix_QString = QString::fromUtf8(prefix, prefix_Strlen);
	return const_cast<const QUndoGroup*>(self)->createUndoAction(parent, prefix_QString);
}

QAction* QUndoGroup_CreateRedoAction2(QUndoGroup* self, QObject* parent, const char* prefix, size_t prefix_Strlen) {
	QString prefix_QString = QString::fromUtf8(prefix, prefix_Strlen);
	return const_cast<const QUndoGroup*>(self)->createRedoAction(parent, prefix_QString);
}

void QUndoGroup_Delete(QUndoGroup* self) {
	delete self;
}

