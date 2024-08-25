#include "gen_qmessagebox.h"
#include "qmessagebox.h"

#include <QAbstractButton>
#include <QCheckBox>
#include <QList>
#include <QMessageBox>
#include <QMetaObject>
#include <QPixmap>
#include <QPushButton>
#include <QString>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMessageBox* QMessageBox_new() {
	return new QMessageBox();
}

QMessageBox* QMessageBox_new2(QWidget* parent) {
	return new QMessageBox(parent);
}

QMetaObject* QMessageBox_MetaObject(QMessageBox* self) {
	return (QMetaObject*) self->metaObject();
}

void QMessageBox_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QMessageBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMessageBox_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QMessageBox::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMessageBox_RemoveButton(QMessageBox* self, QAbstractButton* button) {
	self->removeButton(button);
}

void QMessageBox_Buttons(QMessageBox* self, QAbstractButton*** _out, size_t* _out_len) {
	QList<QAbstractButton *> ret = self->buttons();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractButton** __out = static_cast<QAbstractButton**>(malloc(sizeof(QAbstractButton*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

QPushButton* QMessageBox_DefaultButton(QMessageBox* self) {
	return self->defaultButton();
}

void QMessageBox_SetDefaultButton(QMessageBox* self, QPushButton* button) {
	self->setDefaultButton(button);
}

QAbstractButton* QMessageBox_EscapeButton(QMessageBox* self) {
	return self->escapeButton();
}

void QMessageBox_SetEscapeButton(QMessageBox* self, QAbstractButton* button) {
	self->setEscapeButton(button);
}

QAbstractButton* QMessageBox_ClickedButton(QMessageBox* self) {
	return self->clickedButton();
}

void QMessageBox_Text(QMessageBox* self, char** _out, int* _out_Strlen) {
	QString ret = self->text();
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

QPixmap* QMessageBox_IconPixmap(QMessageBox* self) {
	QPixmap ret = self->iconPixmap();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

void QMessageBox_SetIconPixmap(QMessageBox* self, QPixmap* pixmap) {
	self->setIconPixmap(*pixmap);
}

void QMessageBox_SetCheckBox(QMessageBox* self, QCheckBox* cb) {
	self->setCheckBox(cb);
}

QCheckBox* QMessageBox_CheckBox(QMessageBox* self) {
	return self->checkBox();
}

void QMessageBox_About(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QMessageBox::about(parent, title_QString, text_QString);
}

void QMessageBox_AboutQt(QWidget* parent) {
	QMessageBox::aboutQt(parent);
}

int QMessageBox_Information(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int button0) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return QMessageBox::information(parent, title_QString, text_QString, static_cast<int>(button0));
}

int QMessageBox_Information2(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString button0Text_QString = QString::fromUtf8(button0Text, button0Text_Strlen);
	return QMessageBox::information(parent, title_QString, text_QString, button0Text_QString);
}

int QMessageBox_Question(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int button0) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return QMessageBox::question(parent, title_QString, text_QString, static_cast<int>(button0));
}

int QMessageBox_Question2(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString button0Text_QString = QString::fromUtf8(button0Text, button0Text_Strlen);
	return QMessageBox::question(parent, title_QString, text_QString, button0Text_QString);
}

int QMessageBox_Warning(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int button0, int button1) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return QMessageBox::warning(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1));
}

int QMessageBox_Warning2(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString button0Text_QString = QString::fromUtf8(button0Text, button0Text_Strlen);
	return QMessageBox::warning(parent, title_QString, text_QString, button0Text_QString);
}

int QMessageBox_Critical(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int button0, int button1) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return QMessageBox::critical(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1));
}

int QMessageBox_Critical2(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QString button0Text_QString = QString::fromUtf8(button0Text, button0Text_Strlen);
	return QMessageBox::critical(parent, title_QString, text_QString, button0Text_QString);
}

void QMessageBox_ButtonText(QMessageBox* self, int button, char** _out, int* _out_Strlen) {
	QString ret = self->buttonText(static_cast<int>(button));
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
	QString ret = self->informativeText();
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
	QString ret = self->detailedText();
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

void QMessageBox_ButtonClicked(QMessageBox* self, QAbstractButton* button) {
	self->buttonClicked(button);
}

void QMessageBox_connect_ButtonClicked(QMessageBox* self, void* slot) {
	QMessageBox::connect(self, static_cast<void (QMessageBox::*)(QAbstractButton*)>(&QMessageBox::buttonClicked), self, [=](QAbstractButton* button) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QMessageBox_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QMessageBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMessageBox_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QMessageBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMessageBox_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QMessageBox::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMessageBox_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QMessageBox::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMessageBox_AboutQt2(QWidget* parent, const char* title, size_t title_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QMessageBox::aboutQt(parent, title_QString);
}

int QMessageBox_Information5(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int button0, int button1) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return QMessageBox::information(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1));
}

int QMessageBox_Information6(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int button0, int button1, int button2) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return QMessageBox::information(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2));
}

int QMessageBox_Information52(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen) {
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

int QMessageBox_Question5(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int button0, int button1) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return QMessageBox::question(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1));
}

int QMessageBox_Question6(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, int button0, int button1, int button2) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return QMessageBox::question(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2));
}

int QMessageBox_Question52(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen) {
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

int QMessageBox_Warning5(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen) {
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

int QMessageBox_Critical5(QWidget* parent, const char* title, size_t title_Strlen, const char* text, size_t text_Strlen, const char* button0Text, size_t button0Text_Strlen, const char* button1Text, size_t button1Text_Strlen) {
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

