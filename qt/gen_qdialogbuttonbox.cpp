#include <QAbstractButton>
#include <QDialogButtonBox>
#include <QList>
#include <QMetaObject>
#include <QPushButton>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qdialogbuttonbox.h"

#include "gen_qdialogbuttonbox.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QDialogButtonBox* QDialogButtonBox_new() {
	return new QDialogButtonBox();
}

QDialogButtonBox* QDialogButtonBox_new2(uintptr_t orientation) {
	return new QDialogButtonBox(static_cast<Qt::Orientation>(orientation));
}

QDialogButtonBox* QDialogButtonBox_new3(int buttons) {
	return new QDialogButtonBox(static_cast<QDialogButtonBox::StandardButtons>(buttons));
}

QDialogButtonBox* QDialogButtonBox_new4(int buttons, uintptr_t orientation) {
	return new QDialogButtonBox(static_cast<QDialogButtonBox::StandardButtons>(buttons), static_cast<Qt::Orientation>(orientation));
}

QDialogButtonBox* QDialogButtonBox_new5(QWidget* parent) {
	return new QDialogButtonBox(parent);
}

QDialogButtonBox* QDialogButtonBox_new6(uintptr_t orientation, QWidget* parent) {
	return new QDialogButtonBox(static_cast<Qt::Orientation>(orientation), parent);
}

QDialogButtonBox* QDialogButtonBox_new7(int buttons, QWidget* parent) {
	return new QDialogButtonBox(static_cast<QDialogButtonBox::StandardButtons>(buttons), parent);
}

QDialogButtonBox* QDialogButtonBox_new8(int buttons, uintptr_t orientation, QWidget* parent) {
	return new QDialogButtonBox(static_cast<QDialogButtonBox::StandardButtons>(buttons), static_cast<Qt::Orientation>(orientation), parent);
}

QMetaObject* QDialogButtonBox_MetaObject(QDialogButtonBox* self) {
	return (QMetaObject*) const_cast<const QDialogButtonBox*>(self)->metaObject();
}

void QDialogButtonBox_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QDialogButtonBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDialogButtonBox_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QDialogButtonBox::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDialogButtonBox_SetOrientation(QDialogButtonBox* self, uintptr_t orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

uintptr_t QDialogButtonBox_Orientation(QDialogButtonBox* self) {
	Qt::Orientation ret = const_cast<const QDialogButtonBox*>(self)->orientation();
	return static_cast<uintptr_t>(ret);
}

void QDialogButtonBox_AddButton(QDialogButtonBox* self, QAbstractButton* button, uintptr_t role) {
	self->addButton(button, static_cast<QDialogButtonBox::ButtonRole>(role));
}

QPushButton* QDialogButtonBox_AddButton2(QDialogButtonBox* self, const char* text, size_t text_Strlen, uintptr_t role) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return self->addButton(text_QString, static_cast<QDialogButtonBox::ButtonRole>(role));
}

QPushButton* QDialogButtonBox_AddButtonWithButton(QDialogButtonBox* self, uintptr_t button) {
	return self->addButton(static_cast<QDialogButtonBox::StandardButton>(button));
}

void QDialogButtonBox_RemoveButton(QDialogButtonBox* self, QAbstractButton* button) {
	self->removeButton(button);
}

void QDialogButtonBox_Clear(QDialogButtonBox* self) {
	self->clear();
}

void QDialogButtonBox_Buttons(QDialogButtonBox* self, QAbstractButton*** _out, size_t* _out_len) {
	QList<QAbstractButton*> ret = const_cast<const QDialogButtonBox*>(self)->buttons();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractButton** __out = static_cast<QAbstractButton**>(malloc(sizeof(QAbstractButton*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

uintptr_t QDialogButtonBox_ButtonRole(QDialogButtonBox* self, QAbstractButton* button) {
	QDialogButtonBox::ButtonRole ret = const_cast<const QDialogButtonBox*>(self)->buttonRole(button);
	return static_cast<uintptr_t>(ret);
}

void QDialogButtonBox_SetStandardButtons(QDialogButtonBox* self, int buttons) {
	self->setStandardButtons(static_cast<QDialogButtonBox::StandardButtons>(buttons));
}

int QDialogButtonBox_StandardButtons(QDialogButtonBox* self) {
	QDialogButtonBox::StandardButtons ret = const_cast<const QDialogButtonBox*>(self)->standardButtons();
	return static_cast<int>(ret);
}

uintptr_t QDialogButtonBox_StandardButton(QDialogButtonBox* self, QAbstractButton* button) {
	QDialogButtonBox::StandardButton ret = const_cast<const QDialogButtonBox*>(self)->standardButton(button);
	return static_cast<uintptr_t>(ret);
}

QPushButton* QDialogButtonBox_Button(QDialogButtonBox* self, uintptr_t which) {
	return const_cast<const QDialogButtonBox*>(self)->button(static_cast<QDialogButtonBox::StandardButton>(which));
}

void QDialogButtonBox_SetCenterButtons(QDialogButtonBox* self, bool center) {
	self->setCenterButtons(center);
}

bool QDialogButtonBox_CenterButtons(QDialogButtonBox* self) {
	return const_cast<const QDialogButtonBox*>(self)->centerButtons();
}

void QDialogButtonBox_Clicked(QDialogButtonBox* self, QAbstractButton* button) {
	self->clicked(button);
}

void QDialogButtonBox_connect_Clicked(QDialogButtonBox* self, void* slot) {
	QDialogButtonBox::connect(self, static_cast<void (QDialogButtonBox::*)(QAbstractButton*)>(&QDialogButtonBox::clicked), self, [=](QAbstractButton* button) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QDialogButtonBox_Accepted(QDialogButtonBox* self) {
	self->accepted();
}

void QDialogButtonBox_connect_Accepted(QDialogButtonBox* self, void* slot) {
	QDialogButtonBox::connect(self, static_cast<void (QDialogButtonBox::*)()>(&QDialogButtonBox::accepted), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QDialogButtonBox_HelpRequested(QDialogButtonBox* self) {
	self->helpRequested();
}

void QDialogButtonBox_connect_HelpRequested(QDialogButtonBox* self, void* slot) {
	QDialogButtonBox::connect(self, static_cast<void (QDialogButtonBox::*)()>(&QDialogButtonBox::helpRequested), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QDialogButtonBox_Rejected(QDialogButtonBox* self) {
	self->rejected();
}

void QDialogButtonBox_connect_Rejected(QDialogButtonBox* self, void* slot) {
	QDialogButtonBox::connect(self, static_cast<void (QDialogButtonBox::*)()>(&QDialogButtonBox::rejected), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QDialogButtonBox_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QDialogButtonBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDialogButtonBox_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QDialogButtonBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDialogButtonBox_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QDialogButtonBox::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDialogButtonBox_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QDialogButtonBox::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDialogButtonBox_Delete(QDialogButtonBox* self) {
	delete self;
}

