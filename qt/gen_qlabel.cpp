#include "gen_qlabel.h"
#include "qlabel.h"

#include <QLabel>
#include <QMetaObject>
#include <QMovie>
#include <QPicture>
#include <QPixmap>
#include <QSize>
#include <QString>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QLabel_MetaObject(QLabel* self) {
	return (QMetaObject*) self->metaObject();
}

void QLabel_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QLabel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLabel_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QLabel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLabel_Text(QLabel* self, char** _out, int* _out_Strlen) {
	QString ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QPixmap* QLabel_Pixmap(QLabel* self) {
	return (QPixmap*) self->pixmap();
}

QPicture* QLabel_Picture(QLabel* self) {
	return (QPicture*) self->picture();
}

QMovie* QLabel_Movie(QLabel* self) {
	return self->movie();
}

void QLabel_SetWordWrap(QLabel* self, bool on) {
	self->setWordWrap(on);
}

bool QLabel_WordWrap(QLabel* self) {
	return self->wordWrap();
}

int QLabel_Indent(QLabel* self) {
	return self->indent();
}

void QLabel_SetIndent(QLabel* self, int indent) {
	self->setIndent(static_cast<int>(indent));
}

int QLabel_Margin(QLabel* self) {
	return self->margin();
}

void QLabel_SetMargin(QLabel* self, int margin) {
	self->setMargin(static_cast<int>(margin));
}

bool QLabel_HasScaledContents(QLabel* self) {
	return self->hasScaledContents();
}

void QLabel_SetScaledContents(QLabel* self, bool scaledContents) {
	self->setScaledContents(scaledContents);
}

QSize* QLabel_SizeHint(QLabel* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QLabel_MinimumSizeHint(QLabel* self) {
	QSize ret = self->minimumSizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QLabel_SetBuddy(QLabel* self, QWidget* buddy) {
	self->setBuddy(buddy);
}

QWidget* QLabel_Buddy(QLabel* self) {
	return self->buddy();
}

int QLabel_HeightForWidth(QLabel* self, int param1) {
	return self->heightForWidth(static_cast<int>(param1));
}

bool QLabel_OpenExternalLinks(QLabel* self) {
	return self->openExternalLinks();
}

void QLabel_SetOpenExternalLinks(QLabel* self, bool open) {
	self->setOpenExternalLinks(open);
}

void QLabel_SetSelection(QLabel* self, int param1, int param2) {
	self->setSelection(static_cast<int>(param1), static_cast<int>(param2));
}

bool QLabel_HasSelectedText(QLabel* self) {
	return self->hasSelectedText();
}

void QLabel_SelectedText(QLabel* self, char** _out, int* _out_Strlen) {
	QString ret = self->selectedText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QLabel_SelectionStart(QLabel* self) {
	return self->selectionStart();
}

void QLabel_SetText(QLabel* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setText(text_QString);
}

void QLabel_SetPixmap(QLabel* self, QPixmap* pixmap) {
	self->setPixmap(*pixmap);
}

void QLabel_SetPicture(QLabel* self, QPicture* picture) {
	self->setPicture(*picture);
}

void QLabel_SetMovie(QLabel* self, QMovie* movie) {
	self->setMovie(movie);
}

void QLabel_SetNum(QLabel* self, int num) {
	self->setNum(static_cast<int>(num));
}

void QLabel_SetNumWithNum(QLabel* self, double num) {
	self->setNum(static_cast<double>(num));
}

void QLabel_Clear(QLabel* self) {
	self->clear();
}

void QLabel_LinkActivated(QLabel* self, const char* link, size_t link_Strlen) {
	QString link_QString = QString::fromUtf8(link, link_Strlen);
	self->linkActivated(link_QString);
}

void QLabel_connect_LinkActivated(QLabel* self, void* slot) {
	QLabel::connect(self, static_cast<void (QLabel::*)(const QString&)>(&QLabel::linkActivated), self, [=](const QString& link) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QLabel_LinkHovered(QLabel* self, const char* link, size_t link_Strlen) {
	QString link_QString = QString::fromUtf8(link, link_Strlen);
	self->linkHovered(link_QString);
}

void QLabel_connect_LinkHovered(QLabel* self, void* slot) {
	QLabel::connect(self, static_cast<void (QLabel::*)(const QString&)>(&QLabel::linkHovered), self, [=](const QString& link) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QLabel_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QLabel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLabel_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QLabel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLabel_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QLabel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLabel_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QLabel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLabel_Delete(QLabel* self) {
	delete self;
}

