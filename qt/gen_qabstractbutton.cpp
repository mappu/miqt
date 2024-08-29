#include <QAbstractButton>
#include <QButtonGroup>
#include <QIcon>
#include <QKeySequence>
#include <QMetaObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qabstractbutton.h"

#include "gen_qabstractbutton.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QAbstractButton_MetaObject(QAbstractButton* self) {
	return (QMetaObject*) const_cast<const QAbstractButton*>(self)->metaObject();
}

void QAbstractButton_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractButton::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractButton_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractButton::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractButton_SetText(QAbstractButton* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setText(text_QString);
}

void QAbstractButton_Text(QAbstractButton* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QAbstractButton*>(self)->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractButton_SetIcon(QAbstractButton* self, QIcon* icon) {
	self->setIcon(*icon);
}

QIcon* QAbstractButton_Icon(QAbstractButton* self) {
	QIcon ret = const_cast<const QAbstractButton*>(self)->icon();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(ret));
}

QSize* QAbstractButton_IconSize(QAbstractButton* self) {
	QSize ret = const_cast<const QAbstractButton*>(self)->iconSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QAbstractButton_SetShortcut(QAbstractButton* self, QKeySequence* key) {
	self->setShortcut(*key);
}

QKeySequence* QAbstractButton_Shortcut(QAbstractButton* self) {
	QKeySequence ret = const_cast<const QAbstractButton*>(self)->shortcut();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QKeySequence*>(new QKeySequence(ret));
}

void QAbstractButton_SetCheckable(QAbstractButton* self, bool checkable) {
	self->setCheckable(checkable);
}

bool QAbstractButton_IsCheckable(QAbstractButton* self) {
	return const_cast<const QAbstractButton*>(self)->isCheckable();
}

bool QAbstractButton_IsChecked(QAbstractButton* self) {
	return const_cast<const QAbstractButton*>(self)->isChecked();
}

void QAbstractButton_SetDown(QAbstractButton* self, bool down) {
	self->setDown(down);
}

bool QAbstractButton_IsDown(QAbstractButton* self) {
	return const_cast<const QAbstractButton*>(self)->isDown();
}

void QAbstractButton_SetAutoRepeat(QAbstractButton* self, bool autoRepeat) {
	self->setAutoRepeat(autoRepeat);
}

bool QAbstractButton_AutoRepeat(QAbstractButton* self) {
	return const_cast<const QAbstractButton*>(self)->autoRepeat();
}

void QAbstractButton_SetAutoRepeatDelay(QAbstractButton* self, int autoRepeatDelay) {
	self->setAutoRepeatDelay(static_cast<int>(autoRepeatDelay));
}

int QAbstractButton_AutoRepeatDelay(QAbstractButton* self) {
	return const_cast<const QAbstractButton*>(self)->autoRepeatDelay();
}

void QAbstractButton_SetAutoRepeatInterval(QAbstractButton* self, int autoRepeatInterval) {
	self->setAutoRepeatInterval(static_cast<int>(autoRepeatInterval));
}

int QAbstractButton_AutoRepeatInterval(QAbstractButton* self) {
	return const_cast<const QAbstractButton*>(self)->autoRepeatInterval();
}

void QAbstractButton_SetAutoExclusive(QAbstractButton* self, bool autoExclusive) {
	self->setAutoExclusive(autoExclusive);
}

bool QAbstractButton_AutoExclusive(QAbstractButton* self) {
	return const_cast<const QAbstractButton*>(self)->autoExclusive();
}

QButtonGroup* QAbstractButton_Group(QAbstractButton* self) {
	return const_cast<const QAbstractButton*>(self)->group();
}

void QAbstractButton_SetIconSize(QAbstractButton* self, QSize* size) {
	self->setIconSize(*size);
}

void QAbstractButton_AnimateClick(QAbstractButton* self) {
	self->animateClick();
}

void QAbstractButton_Click(QAbstractButton* self) {
	self->click();
}

void QAbstractButton_Toggle(QAbstractButton* self) {
	self->toggle();
}

void QAbstractButton_SetChecked(QAbstractButton* self, bool checked) {
	self->setChecked(checked);
}

void QAbstractButton_Pressed(QAbstractButton* self) {
	self->pressed();
}

void QAbstractButton_connect_Pressed(QAbstractButton* self, void* slot) {
	QAbstractButton::connect(self, static_cast<void (QAbstractButton::*)()>(&QAbstractButton::pressed), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAbstractButton_Released(QAbstractButton* self) {
	self->released();
}

void QAbstractButton_connect_Released(QAbstractButton* self, void* slot) {
	QAbstractButton::connect(self, static_cast<void (QAbstractButton::*)()>(&QAbstractButton::released), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAbstractButton_Clicked(QAbstractButton* self) {
	self->clicked();
}

void QAbstractButton_Toggled(QAbstractButton* self, bool checked) {
	self->toggled(checked);
}

void QAbstractButton_connect_Toggled(QAbstractButton* self, void* slot) {
	QAbstractButton::connect(self, static_cast<void (QAbstractButton::*)(bool)>(&QAbstractButton::toggled), self, [=](bool checked) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAbstractButton_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractButton::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractButton_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractButton::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractButton_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractButton::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractButton_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractButton::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractButton_AnimateClick1(QAbstractButton* self, int msec) {
	self->animateClick(static_cast<int>(msec));
}

void QAbstractButton_Clicked1(QAbstractButton* self, bool checked) {
	self->clicked(checked);
}

void QAbstractButton_connect_Clicked1(QAbstractButton* self, void* slot) {
	QAbstractButton::connect(self, static_cast<void (QAbstractButton::*)(bool)>(&QAbstractButton::clicked), self, [=](bool checked) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAbstractButton_Delete(QAbstractButton* self) {
	delete self;
}

