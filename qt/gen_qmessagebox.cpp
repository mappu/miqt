#include <QAbstractButton>
#include <QCheckBox>
#include <QList>
#include <QMessageBox>
#include <QMetaObject>
#include <QPixmap>
#include <QPushButton>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qmessagebox.h"

#include "gen_qmessagebox.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMessageBox* QMessageBox_new() {
	return new QMessageBox();
}

QMessageBox* QMessageBox_new2(uintptr_t icon, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QMessageBox(static_cast<QMessageBox::Icon>(icon), title_QString, text_QString);
}

QMessageBox* QMessageBox_new3(const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, uintptr_t icon, int button0, int button1, int button2) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QMessageBox(title_QString, text_QString, static_cast<QMessageBox::Icon>(icon), static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2));
}

QMessageBox* QMessageBox_new4(QWidget* parent) {
	return new QMessageBox(parent);
}

QMessageBox* QMessageBox_new5(uintptr_t icon, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int buttons) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QMessageBox(static_cast<QMessageBox::Icon>(icon), title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons));
}

QMessageBox* QMessageBox_new6(uintptr_t icon, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int buttons, QWidget* parent) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QMessageBox(static_cast<QMessageBox::Icon>(icon), title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons), parent);
}

QMessageBox* QMessageBox_new7(uintptr_t icon, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int buttons, QWidget* parent, int flags) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QMessageBox(static_cast<QMessageBox::Icon>(icon), title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons), parent, static_cast<Qt::WindowFlags>(flags));
}

QMessageBox* QMessageBox_new8(const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, uintptr_t icon, int button0, int button1, int button2, QWidget* parent) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QMessageBox(title_QString, text_QString, static_cast<QMessageBox::Icon>(icon), static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2), parent);
}

QMessageBox* QMessageBox_new9(const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, uintptr_t icon, int button0, int button1, int button2, QWidget* parent, int f) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QMessageBox(title_QString, text_QString, static_cast<QMessageBox::Icon>(icon), static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2), parent, static_cast<Qt::WindowFlags>(f));
}

QMetaObject* QMessageBox_MetaObject(QMessageBox* self) {
	return (QMetaObject*) const_cast<const QMessageBox*>(self)->metaObject();
}

void QMessageBox_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QMessageBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMessageBox_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QMessageBox::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMessageBox_AddButton(QMessageBox* self, QAbstractButton* button, uintptr_t role) {
	self->addButton(button, static_cast<QMessageBox::ButtonRole>(role));
}

QPushButton* QMessageBox_AddButton2(QMessageBox* self, const char* text, size_t text_Strlen, uintptr_t role) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return self->addButton(text_QString, static_cast<QMessageBox::ButtonRole>(role));
}

QPushButton* QMessageBox_AddButtonWithButton(QMessageBox* self, uintptr_t button) {
	return self->addButton(static_cast<QMessageBox::StandardButton>(button));
}

void QMessageBox_RemoveButton(QMessageBox* self, QAbstractButton* button) {
	self->removeButton(button);
}

void QMessageBox_Buttons(QMessageBox* self, QAbstractButton*** _out, size_t* _out_len) {
	QList<QAbstractButton*> ret = const_cast<const QMessageBox*>(self)->buttons();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractButton** __out = static_cast<QAbstractButton**>(malloc(sizeof(QAbstractButton*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

uintptr_t QMessageBox_ButtonRole(QMessageBox* self, QAbstractButton* button) {
	QMessageBox::ButtonRole ret = const_cast<const QMessageBox*>(self)->buttonRole(button);
	return static_cast<uintptr_t>(ret);
}

void QMessageBox_SetStandardButtons(QMessageBox* self, int buttons) {
	self->setStandardButtons(static_cast<QMessageBox::StandardButtons>(buttons));
}

int QMessageBox_StandardButtons(QMessageBox* self) {
	QMessageBox::StandardButtons ret = const_cast<const QMessageBox*>(self)->standardButtons();
	return static_cast<int>(ret);
}

uintptr_t QMessageBox_StandardButton(QMessageBox* self, QAbstractButton* button) {
	QMessageBox::StandardButton ret = const_cast<const QMessageBox*>(self)->standardButton(button);
	return static_cast<uintptr_t>(ret);
}

QAbstractButton* QMessageBox_Button(QMessageBox* self, uintptr_t which) {
	return const_cast<const QMessageBox*>(self)->button(static_cast<QMessageBox::StandardButton>(which));
}

QPushButton* QMessageBox_DefaultButton(QMessageBox* self) {
	return const_cast<const QMessageBox*>(self)->defaultButton();
}

void QMessageBox_SetDefaultButton(QMessageBox* self, QPushButton* button) {
	self->setDefaultButton(button);
}

void QMessageBox_SetDefaultButtonWithButton(QMessageBox* self, uintptr_t button) {
	self->setDefaultButton(static_cast<QMessageBox::StandardButton>(button));
}

QAbstractButton* QMessageBox_EscapeButton(QMessageBox* self) {
	return const_cast<const QMessageBox*>(self)->escapeButton();
}

void QMessageBox_SetEscapeButton(QMessageBox* self, QAbstractButton* button) {
	self->setEscapeButton(button);
}

void QMessageBox_SetEscapeButtonWithButton(QMessageBox* self, uintptr_t button) {
	self->setEscapeButton(static_cast<QMessageBox::StandardButton>(button));
}

QAbstractButton* QMessageBox_ClickedButton(QMessageBox* self) {
	return const_cast<const QMessageBox*>(self)->clickedButton();
}

void QMessageBox_Text(QMessageBox* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QMessageBox*>(self)->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMessageBox_SetText(QMessageBox* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setText(text_QString);
}

uintptr_t QMessageBox_Icon(QMessageBox* self) {
	QMessageBox::Icon ret = const_cast<const QMessageBox*>(self)->icon();
	return static_cast<uintptr_t>(ret);
}

void QMessageBox_SetIcon(QMessageBox* self, uintptr_t icon) {
	self->setIcon(static_cast<QMessageBox::Icon>(icon));
}

QPixmap* QMessageBox_IconPixmap(QMessageBox* self) {
	QPixmap ret = const_cast<const QMessageBox*>(self)->iconPixmap();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

void QMessageBox_SetIconPixmap(QMessageBox* self, QPixmap* pixmap) {
	self->setIconPixmap(*pixmap);
}

uintptr_t QMessageBox_TextFormat(QMessageBox* self) {
	Qt::TextFormat ret = const_cast<const QMessageBox*>(self)->textFormat();
	return static_cast<uintptr_t>(ret);
}

void QMessageBox_SetTextFormat(QMessageBox* self, uintptr_t format) {
	self->setTextFormat(static_cast<Qt::TextFormat>(format));
}

void QMessageBox_SetTextInteractionFlags(QMessageBox* self, int flags) {
	self->setTextInteractionFlags(static_cast<Qt::TextInteractionFlags>(flags));
}

int QMessageBox_TextInteractionFlags(QMessageBox* self) {
	Qt::TextInteractionFlags ret = const_cast<const QMessageBox*>(self)->textInteractionFlags();
	return static_cast<int>(ret);
}

void QMessageBox_SetCheckBox(QMessageBox* self, QCheckBox* cb) {
	self->setCheckBox(cb);
}

QCheckBox* QMessageBox_CheckBox(QMessageBox* self) {
	return const_cast<const QMessageBox*>(self)->checkBox();
}

uintptr_t QMessageBox_Information(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QMessageBox::StandardButton ret = QMessageBox::information(parent, title_QString, text_QString);
	return static_cast<uintptr_t>(ret);
}

uintptr_t QMessageBox_Question(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QMessageBox::StandardButton ret = QMessageBox::question(parent, title_QString, text_QString);
	return static_cast<uintptr_t>(ret);
}

uintptr_t QMessageBox_Warning(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QMessageBox::StandardButton ret = QMessageBox::warning(parent, title_QString, text_QString);
	return static_cast<uintptr_t>(ret);
}

uintptr_t QMessageBox_Critical(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QMessageBox::StandardButton ret = QMessageBox::critical(parent, title_QString, text_QString);
	return static_cast<uintptr_t>(ret);
}

void QMessageBox_About(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QMessageBox::about(parent, title_QString, text_QString);
}

void QMessageBox_AboutQt(QWidget* parent) {
	QMessageBox::aboutQt(parent);
}

int QMessageBox_Information2(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int button0) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return QMessageBox::information(parent, title_QString, text_QString, static_cast<int>(button0));
}

int QMessageBox_Information3(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString button0Text_QString = QString::fromUtf8(button0Text, button0Text_Strlen);
	return QMessageBox::information(parent, title_QString, text_QString, button0Text_QString);
}

uintptr_t QMessageBox_Information4(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, uintptr_t button0) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QMessageBox::StandardButton ret = QMessageBox::information(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButton>(button0));
	return static_cast<uintptr_t>(ret);
}

int QMessageBox_Question2(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int button0) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return QMessageBox::question(parent, title_QString, text_QString, static_cast<int>(button0));
}

int QMessageBox_Question3(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString button0Text_QString = QString::fromUtf8(button0Text, button0Text_Strlen);
	return QMessageBox::question(parent, title_QString, text_QString, button0Text_QString);
}

int QMessageBox_Question4(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, uintptr_t button0, uintptr_t button1) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return QMessageBox::question(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButton>(button0), static_cast<QMessageBox::StandardButton>(button1));
}

int QMessageBox_Warning2(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int button0, int button1) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return QMessageBox::warning(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1));
}

int QMessageBox_Warning3(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString button0Text_QString = QString::fromUtf8(button0Text, button0Text_Strlen);
	return QMessageBox::warning(parent, title_QString, text_QString, button0Text_QString);
}

int QMessageBox_Warning4(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, uintptr_t button0, uintptr_t button1) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return QMessageBox::warning(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButton>(button0), static_cast<QMessageBox::StandardButton>(button1));
}

int QMessageBox_Critical2(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int button0, int button1) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return QMessageBox::critical(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1));
}

int QMessageBox_Critical3(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString button0Text_QString = QString::fromUtf8(button0Text, button0Text_Strlen);
	return QMessageBox::critical(parent, title_QString, text_QString, button0Text_QString);
}

int QMessageBox_Critical4(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, uintptr_t button0, uintptr_t button1) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return QMessageBox::critical(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButton>(button0), static_cast<QMessageBox::StandardButton>(button1));
}

void QMessageBox_ButtonText(QMessageBox* self, int button, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QMessageBox*>(self)->buttonText(static_cast<int>(button));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMessageBox_SetButtonText(QMessageBox* self, int button, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setButtonText(static_cast<int>(button), text_QString);
}

void QMessageBox_InformativeText(QMessageBox* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QMessageBox*>(self)->informativeText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMessageBox_SetInformativeText(QMessageBox* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setInformativeText(text_QString);
}

void QMessageBox_DetailedText(QMessageBox* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QMessageBox*>(self)->detailedText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMessageBox_SetDetailedText(QMessageBox* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setDetailedText(text_QString);
}

void QMessageBox_SetWindowTitle(QMessageBox* self, const char* title, size_t title_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	self->setWindowTitle(title_QString);
}

void QMessageBox_SetWindowModality(QMessageBox* self, uintptr_t windowModality) {
	self->setWindowModality(static_cast<Qt::WindowModality>(windowModality));
}

QPixmap* QMessageBox_StandardIcon(uintptr_t icon) {
	QPixmap ret = QMessageBox::standardIcon(static_cast<QMessageBox::Icon>(icon));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

void QMessageBox_ButtonClicked(QMessageBox* self, QAbstractButton* button) {
	self->buttonClicked(button);
}

void QMessageBox_connect_ButtonClicked(QMessageBox* self, void* slot) {
	QMessageBox::connect(self, static_cast<void (QMessageBox::*)(QAbstractButton*)>(&QMessageBox::buttonClicked), self, [=](QAbstractButton* button) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QMessageBox_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QMessageBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMessageBox_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QMessageBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMessageBox_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QMessageBox::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMessageBox_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QMessageBox::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

uintptr_t QMessageBox_Information42(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int buttons) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QMessageBox::StandardButton ret = QMessageBox::information(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons));
	return static_cast<uintptr_t>(ret);
}

uintptr_t QMessageBox_Information5(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int buttons, uintptr_t defaultButton) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QMessageBox::StandardButton ret = QMessageBox::information(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons), static_cast<QMessageBox::StandardButton>(defaultButton));
	return static_cast<uintptr_t>(ret);
}

uintptr_t QMessageBox_Question42(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int buttons) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QMessageBox::StandardButton ret = QMessageBox::question(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons));
	return static_cast<uintptr_t>(ret);
}

uintptr_t QMessageBox_Question5(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int buttons, uintptr_t defaultButton) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QMessageBox::StandardButton ret = QMessageBox::question(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons), static_cast<QMessageBox::StandardButton>(defaultButton));
	return static_cast<uintptr_t>(ret);
}

uintptr_t QMessageBox_Warning42(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int buttons) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QMessageBox::StandardButton ret = QMessageBox::warning(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons));
	return static_cast<uintptr_t>(ret);
}

uintptr_t QMessageBox_Warning5(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int buttons, uintptr_t defaultButton) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QMessageBox::StandardButton ret = QMessageBox::warning(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons), static_cast<QMessageBox::StandardButton>(defaultButton));
	return static_cast<uintptr_t>(ret);
}

uintptr_t QMessageBox_Critical42(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int buttons) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QMessageBox::StandardButton ret = QMessageBox::critical(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons));
	return static_cast<uintptr_t>(ret);
}

uintptr_t QMessageBox_Critical5(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int buttons, uintptr_t defaultButton) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QMessageBox::StandardButton ret = QMessageBox::critical(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons), static_cast<QMessageBox::StandardButton>(defaultButton));
	return static_cast<uintptr_t>(ret);
}

void QMessageBox_AboutQt2(QWidget* parent, const char* title, size_t title_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QMessageBox::aboutQt(parent, title_QString);
}

int QMessageBox_Information52(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int button0, int button1) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return QMessageBox::information(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1));
}

int QMessageBox_Information6(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int button0, int button1, int button2) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return QMessageBox::information(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2));
}

int QMessageBox_Information53(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString button0Text_QString = QString::fromUtf8(button0Text, button0Text_Strlen);
	QString button1Text_QString = QString::fromUtf8(button1Text, button1Text_Strlen);
	return QMessageBox::information(parent, title_QString, text_QString, button0Text_QString, button1Text_QString);
}

int QMessageBox_Information62(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen, const char* button2Text, size_t button2Text_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString button0Text_QString = QString::fromUtf8(button0Text, button0Text_Strlen);
	QString button1Text_QString = QString::fromUtf8(button1Text, button1Text_Strlen);
	QString button2Text_QString = QString::fromUtf8(button2Text, button2Text_Strlen);
	return QMessageBox::information(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString);
}

int QMessageBox_Information7(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen, const char* button2Text, size_t button2Text_Strlen, int defaultButtonNumber) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString button0Text_QString = QString::fromUtf8(button0Text, button0Text_Strlen);
	QString button1Text_QString = QString::fromUtf8(button1Text, button1Text_Strlen);
	QString button2Text_QString = QString::fromUtf8(button2Text, button2Text_Strlen);
	return QMessageBox::information(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber));
}

int QMessageBox_Information8(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen, const char* button2Text, size_t button2Text_Strlen, int defaultButtonNumber, int escapeButtonNumber) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString button0Text_QString = QString::fromUtf8(button0Text, button0Text_Strlen);
	QString button1Text_QString = QString::fromUtf8(button1Text, button1Text_Strlen);
	QString button2Text_QString = QString::fromUtf8(button2Text, button2Text_Strlen);
	return QMessageBox::information(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber), static_cast<int>(escapeButtonNumber));
}

uintptr_t QMessageBox_Information54(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, uintptr_t button0, uintptr_t button1) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QMessageBox::StandardButton ret = QMessageBox::information(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButton>(button0), static_cast<QMessageBox::StandardButton>(button1));
	return static_cast<uintptr_t>(ret);
}

int QMessageBox_Question52(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int button0, int button1) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return QMessageBox::question(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1));
}

int QMessageBox_Question6(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int button0, int button1, int button2) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return QMessageBox::question(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2));
}

int QMessageBox_Question53(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString button0Text_QString = QString::fromUtf8(button0Text, button0Text_Strlen);
	QString button1Text_QString = QString::fromUtf8(button1Text, button1Text_Strlen);
	return QMessageBox::question(parent, title_QString, text_QString, button0Text_QString, button1Text_QString);
}

int QMessageBox_Question62(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen, const char* button2Text, size_t button2Text_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString button0Text_QString = QString::fromUtf8(button0Text, button0Text_Strlen);
	QString button1Text_QString = QString::fromUtf8(button1Text, button1Text_Strlen);
	QString button2Text_QString = QString::fromUtf8(button2Text, button2Text_Strlen);
	return QMessageBox::question(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString);
}

int QMessageBox_Question7(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen, const char* button2Text, size_t button2Text_Strlen, int defaultButtonNumber) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString button0Text_QString = QString::fromUtf8(button0Text, button0Text_Strlen);
	QString button1Text_QString = QString::fromUtf8(button1Text, button1Text_Strlen);
	QString button2Text_QString = QString::fromUtf8(button2Text, button2Text_Strlen);
	return QMessageBox::question(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber));
}

int QMessageBox_Question8(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen, const char* button2Text, size_t button2Text_Strlen, int defaultButtonNumber, int escapeButtonNumber) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString button0Text_QString = QString::fromUtf8(button0Text, button0Text_Strlen);
	QString button1Text_QString = QString::fromUtf8(button1Text, button1Text_Strlen);
	QString button2Text_QString = QString::fromUtf8(button2Text, button2Text_Strlen);
	return QMessageBox::question(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber), static_cast<int>(escapeButtonNumber));
}

int QMessageBox_Warning6(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int button0, int button1, int button2) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return QMessageBox::warning(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2));
}

int QMessageBox_Warning52(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString button0Text_QString = QString::fromUtf8(button0Text, button0Text_Strlen);
	QString button1Text_QString = QString::fromUtf8(button1Text, button1Text_Strlen);
	return QMessageBox::warning(parent, title_QString, text_QString, button0Text_QString, button1Text_QString);
}

int QMessageBox_Warning62(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen, const char* button2Text, size_t button2Text_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString button0Text_QString = QString::fromUtf8(button0Text, button0Text_Strlen);
	QString button1Text_QString = QString::fromUtf8(button1Text, button1Text_Strlen);
	QString button2Text_QString = QString::fromUtf8(button2Text, button2Text_Strlen);
	return QMessageBox::warning(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString);
}

int QMessageBox_Warning7(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen, const char* button2Text, size_t button2Text_Strlen, int defaultButtonNumber) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString button0Text_QString = QString::fromUtf8(button0Text, button0Text_Strlen);
	QString button1Text_QString = QString::fromUtf8(button1Text, button1Text_Strlen);
	QString button2Text_QString = QString::fromUtf8(button2Text, button2Text_Strlen);
	return QMessageBox::warning(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber));
}

int QMessageBox_Warning8(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen, const char* button2Text, size_t button2Text_Strlen, int defaultButtonNumber, int escapeButtonNumber) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString button0Text_QString = QString::fromUtf8(button0Text, button0Text_Strlen);
	QString button1Text_QString = QString::fromUtf8(button1Text, button1Text_Strlen);
	QString button2Text_QString = QString::fromUtf8(button2Text, button2Text_Strlen);
	return QMessageBox::warning(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber), static_cast<int>(escapeButtonNumber));
}

int QMessageBox_Critical6(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int button0, int button1, int button2) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return QMessageBox::critical(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2));
}

int QMessageBox_Critical52(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString button0Text_QString = QString::fromUtf8(button0Text, button0Text_Strlen);
	QString button1Text_QString = QString::fromUtf8(button1Text, button1Text_Strlen);
	return QMessageBox::critical(parent, title_QString, text_QString, button0Text_QString, button1Text_QString);
}

int QMessageBox_Critical62(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen, const char* button2Text, size_t button2Text_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString button0Text_QString = QString::fromUtf8(button0Text, button0Text_Strlen);
	QString button1Text_QString = QString::fromUtf8(button1Text, button1Text_Strlen);
	QString button2Text_QString = QString::fromUtf8(button2Text, button2Text_Strlen);
	return QMessageBox::critical(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString);
}

int QMessageBox_Critical7(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen, const char* button2Text, size_t button2Text_Strlen, int defaultButtonNumber) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString button0Text_QString = QString::fromUtf8(button0Text, button0Text_Strlen);
	QString button1Text_QString = QString::fromUtf8(button1Text, button1Text_Strlen);
	QString button2Text_QString = QString::fromUtf8(button2Text, button2Text_Strlen);
	return QMessageBox::critical(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber));
}

int QMessageBox_Critical8(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen, const char* button2Text, size_t button2Text_Strlen, int defaultButtonNumber, int escapeButtonNumber) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString button0Text_QString = QString::fromUtf8(button0Text, button0Text_Strlen);
	QString button1Text_QString = QString::fromUtf8(button1Text, button1Text_Strlen);
	QString button2Text_QString = QString::fromUtf8(button2Text, button2Text_Strlen);
	return QMessageBox::critical(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber), static_cast<int>(escapeButtonNumber));
}

void QMessageBox_Delete(QMessageBox* self) {
	delete self;
}

