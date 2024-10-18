#include <QAbstractButton>
#include <QDialogButtonBox>
#include <QList>
#include <QMetaObject>
#include <QPushButton>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qdialogbuttonbox.h>
#include "gen_qdialogbuttonbox.h"
#include "_cgo_export.h"

QDialogButtonBox* QDialogButtonBox_new() {
	return new QDialogButtonBox();
}

QDialogButtonBox* QDialogButtonBox_new2(int orientation) {
	return new QDialogButtonBox(static_cast<Qt::Orientation>(orientation));
}

QDialogButtonBox* QDialogButtonBox_new3(int buttons) {
	return new QDialogButtonBox(static_cast<QDialogButtonBox::StandardButtons>(buttons));
}

QDialogButtonBox* QDialogButtonBox_new4(int buttons, int orientation) {
	return new QDialogButtonBox(static_cast<QDialogButtonBox::StandardButtons>(buttons), static_cast<Qt::Orientation>(orientation));
}

QDialogButtonBox* QDialogButtonBox_new5(QWidget* parent) {
	return new QDialogButtonBox(parent);
}

QDialogButtonBox* QDialogButtonBox_new6(int orientation, QWidget* parent) {
	return new QDialogButtonBox(static_cast<Qt::Orientation>(orientation), parent);
}

QDialogButtonBox* QDialogButtonBox_new7(int buttons, QWidget* parent) {
	return new QDialogButtonBox(static_cast<QDialogButtonBox::StandardButtons>(buttons), parent);
}

QDialogButtonBox* QDialogButtonBox_new8(int buttons, int orientation, QWidget* parent) {
	return new QDialogButtonBox(static_cast<QDialogButtonBox::StandardButtons>(buttons), static_cast<Qt::Orientation>(orientation), parent);
}

QMetaObject* QDialogButtonBox_MetaObject(const QDialogButtonBox* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDialogButtonBox_Metacast(QDialogButtonBox* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDialogButtonBox_Tr(const char* s) {
	QString _ret = QDialogButtonBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDialogButtonBox_TrUtf8(const char* s) {
	QString _ret = QDialogButtonBox::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDialogButtonBox_SetOrientation(QDialogButtonBox* self, int orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QDialogButtonBox_Orientation(const QDialogButtonBox* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QDialogButtonBox_AddButton(QDialogButtonBox* self, QAbstractButton* button, int role) {
	self->addButton(button, static_cast<QDialogButtonBox::ButtonRole>(role));
}

QPushButton* QDialogButtonBox_AddButton2(QDialogButtonBox* self, struct miqt_string text, int role) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addButton(text_QString, static_cast<QDialogButtonBox::ButtonRole>(role));
}

QPushButton* QDialogButtonBox_AddButtonWithButton(QDialogButtonBox* self, int button) {
	return self->addButton(static_cast<QDialogButtonBox::StandardButton>(button));
}

void QDialogButtonBox_RemoveButton(QDialogButtonBox* self, QAbstractButton* button) {
	self->removeButton(button);
}

void QDialogButtonBox_Clear(QDialogButtonBox* self) {
	self->clear();
}

struct miqt_array* QDialogButtonBox_Buttons(const QDialogButtonBox* self) {
	QList<QAbstractButton *> _ret = self->buttons();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractButton** _arr = static_cast<QAbstractButton**>(malloc(sizeof(QAbstractButton*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

int QDialogButtonBox_ButtonRole(const QDialogButtonBox* self, QAbstractButton* button) {
	QDialogButtonBox::ButtonRole _ret = self->buttonRole(button);
	return static_cast<int>(_ret);
}

void QDialogButtonBox_SetStandardButtons(QDialogButtonBox* self, int buttons) {
	self->setStandardButtons(static_cast<QDialogButtonBox::StandardButtons>(buttons));
}

int QDialogButtonBox_StandardButtons(const QDialogButtonBox* self) {
	QDialogButtonBox::StandardButtons _ret = self->standardButtons();
	return static_cast<int>(_ret);
}

int QDialogButtonBox_StandardButton(const QDialogButtonBox* self, QAbstractButton* button) {
	QDialogButtonBox::StandardButton _ret = self->standardButton(button);
	return static_cast<int>(_ret);
}

QPushButton* QDialogButtonBox_Button(const QDialogButtonBox* self, int which) {
	return self->button(static_cast<QDialogButtonBox::StandardButton>(which));
}

void QDialogButtonBox_SetCenterButtons(QDialogButtonBox* self, bool center) {
	self->setCenterButtons(center);
}

bool QDialogButtonBox_CenterButtons(const QDialogButtonBox* self) {
	return self->centerButtons();
}

void QDialogButtonBox_Clicked(QDialogButtonBox* self, QAbstractButton* button) {
	self->clicked(button);
}

void QDialogButtonBox_connect_Clicked(QDialogButtonBox* self, intptr_t slot) {
	QDialogButtonBox::connect(self, static_cast<void (QDialogButtonBox::*)(QAbstractButton*)>(&QDialogButtonBox::clicked), self, [=](QAbstractButton* button) {
		QAbstractButton* sigval1 = button;
		miqt_exec_callback_QDialogButtonBox_Clicked(slot, sigval1);
	});
}

void QDialogButtonBox_Accepted(QDialogButtonBox* self) {
	self->accepted();
}

void QDialogButtonBox_connect_Accepted(QDialogButtonBox* self, intptr_t slot) {
	QDialogButtonBox::connect(self, static_cast<void (QDialogButtonBox::*)()>(&QDialogButtonBox::accepted), self, [=]() {
		miqt_exec_callback_QDialogButtonBox_Accepted(slot);
	});
}

void QDialogButtonBox_HelpRequested(QDialogButtonBox* self) {
	self->helpRequested();
}

void QDialogButtonBox_connect_HelpRequested(QDialogButtonBox* self, intptr_t slot) {
	QDialogButtonBox::connect(self, static_cast<void (QDialogButtonBox::*)()>(&QDialogButtonBox::helpRequested), self, [=]() {
		miqt_exec_callback_QDialogButtonBox_HelpRequested(slot);
	});
}

void QDialogButtonBox_Rejected(QDialogButtonBox* self) {
	self->rejected();
}

void QDialogButtonBox_connect_Rejected(QDialogButtonBox* self, intptr_t slot) {
	QDialogButtonBox::connect(self, static_cast<void (QDialogButtonBox::*)()>(&QDialogButtonBox::rejected), self, [=]() {
		miqt_exec_callback_QDialogButtonBox_Rejected(slot);
	});
}

struct miqt_string QDialogButtonBox_Tr2(const char* s, const char* c) {
	QString _ret = QDialogButtonBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDialogButtonBox_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDialogButtonBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDialogButtonBox_TrUtf82(const char* s, const char* c) {
	QString _ret = QDialogButtonBox::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDialogButtonBox_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QDialogButtonBox::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDialogButtonBox_Delete(QDialogButtonBox* self) {
	delete self;
}

