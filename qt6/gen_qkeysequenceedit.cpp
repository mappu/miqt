#include <QKeySequence>
#include <QKeySequenceEdit>
#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qkeysequenceedit.h>
#include "gen_qkeysequenceedit.h"
#include "_cgo_export.h"

QKeySequenceEdit* QKeySequenceEdit_new() {
	return new QKeySequenceEdit();
}

QKeySequenceEdit* QKeySequenceEdit_new2(QKeySequence* keySequence) {
	return new QKeySequenceEdit(*keySequence);
}

QKeySequenceEdit* QKeySequenceEdit_new3(QWidget* parent) {
	return new QKeySequenceEdit(parent);
}

QKeySequenceEdit* QKeySequenceEdit_new4(QKeySequence* keySequence, QWidget* parent) {
	return new QKeySequenceEdit(*keySequence, parent);
}

QMetaObject* QKeySequenceEdit_MetaObject(const QKeySequenceEdit* self) {
	return (QMetaObject*) self->metaObject();
}

void* QKeySequenceEdit_Metacast(QKeySequenceEdit* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QKeySequenceEdit_Tr(const char* s) {
	QString _ret = QKeySequenceEdit::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QKeySequence* QKeySequenceEdit_KeySequence(const QKeySequenceEdit* self) {
	return new QKeySequence(self->keySequence());
}

void QKeySequenceEdit_SetClearButtonEnabled(QKeySequenceEdit* self, bool enable) {
	self->setClearButtonEnabled(enable);
}

bool QKeySequenceEdit_IsClearButtonEnabled(const QKeySequenceEdit* self) {
	return self->isClearButtonEnabled();
}

void QKeySequenceEdit_SetKeySequence(QKeySequenceEdit* self, QKeySequence* keySequence) {
	self->setKeySequence(*keySequence);
}

void QKeySequenceEdit_Clear(QKeySequenceEdit* self) {
	self->clear();
}

void QKeySequenceEdit_EditingFinished(QKeySequenceEdit* self) {
	self->editingFinished();
}

void QKeySequenceEdit_connect_EditingFinished(QKeySequenceEdit* self, intptr_t slot) {
	QKeySequenceEdit::connect(self, static_cast<void (QKeySequenceEdit::*)()>(&QKeySequenceEdit::editingFinished), self, [=]() {
		miqt_exec_callback_QKeySequenceEdit_EditingFinished(slot);
	});
}

void QKeySequenceEdit_KeySequenceChanged(QKeySequenceEdit* self, QKeySequence* keySequence) {
	self->keySequenceChanged(*keySequence);
}

void QKeySequenceEdit_connect_KeySequenceChanged(QKeySequenceEdit* self, intptr_t slot) {
	QKeySequenceEdit::connect(self, static_cast<void (QKeySequenceEdit::*)(const QKeySequence&)>(&QKeySequenceEdit::keySequenceChanged), self, [=](const QKeySequence& keySequence) {
		const QKeySequence& keySequence_ret = keySequence;
		// Cast returned reference into pointer
		QKeySequence* sigval1 = const_cast<QKeySequence*>(&keySequence_ret);
		miqt_exec_callback_QKeySequenceEdit_KeySequenceChanged(slot, sigval1);
	});
}

struct miqt_string QKeySequenceEdit_Tr2(const char* s, const char* c) {
	QString _ret = QKeySequenceEdit::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QKeySequenceEdit_Tr3(const char* s, const char* c, int n) {
	QString _ret = QKeySequenceEdit::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QKeySequenceEdit_Delete(QKeySequenceEdit* self) {
	delete self;
}

