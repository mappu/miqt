#include <QLabel>
#include <QMetaObject>
#include <QMovie>
#include <QPicture>
#include <QPixmap>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qlabel.h"

#include "gen_qlabel.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QLabel* QLabel_new() {
	return new QLabel();
}

QLabel* QLabel_new2(const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QLabel(text_QString);
}

QLabel* QLabel_new3(QWidget* parent) {
	return new QLabel(parent);
}

QLabel* QLabel_new4(QWidget* parent, int f) {
	return new QLabel(parent, static_cast<Qt::WindowFlags>(f));
}

QLabel* QLabel_new5(const char* text, size_t text_Strlen, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QLabel(text_QString, parent);
}

QLabel* QLabel_new6(const char* text, size_t text_Strlen, QWidget* parent, int f) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QLabel(text_QString, parent, static_cast<Qt::WindowFlags>(f));
}

QMetaObject* QLabel_MetaObject(QLabel* self) {
	return (QMetaObject*) const_cast<const QLabel*>(self)->metaObject();
}

void QLabel_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QLabel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLabel_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QLabel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLabel_Text(QLabel* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLabel*>(self)->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QPixmap* QLabel_Pixmap(QLabel* self) {
	return (QPixmap*) const_cast<const QLabel*>(self)->pixmap();
}

QPixmap* QLabel_PixmapWithQtReturnByValueConstant(QLabel* self, uintptr_t param1) {
	QPixmap ret = const_cast<const QLabel*>(self)->pixmap(static_cast<Qt::ReturnByValueConstant>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QPicture* QLabel_Picture(QLabel* self) {
	return (QPicture*) const_cast<const QLabel*>(self)->picture();
}

QPicture* QLabel_PictureWithQtReturnByValueConstant(QLabel* self, uintptr_t param1) {
	QPicture ret = const_cast<const QLabel*>(self)->picture(static_cast<Qt::ReturnByValueConstant>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPicture*>(new QPicture(ret));
}

QMovie* QLabel_Movie(QLabel* self) {
	return const_cast<const QLabel*>(self)->movie();
}

uintptr_t QLabel_TextFormat(QLabel* self) {
	Qt::TextFormat ret = const_cast<const QLabel*>(self)->textFormat();
	return static_cast<uintptr_t>(ret);
}

void QLabel_SetTextFormat(QLabel* self, uintptr_t textFormat) {
	self->setTextFormat(static_cast<Qt::TextFormat>(textFormat));
}

int QLabel_Alignment(QLabel* self) {
	Qt::Alignment ret = const_cast<const QLabel*>(self)->alignment();
	return static_cast<int>(ret);
}

void QLabel_SetAlignment(QLabel* self, int alignment) {
	self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

void QLabel_SetWordWrap(QLabel* self, bool on) {
	self->setWordWrap(on);
}

bool QLabel_WordWrap(QLabel* self) {
	return const_cast<const QLabel*>(self)->wordWrap();
}

int QLabel_Indent(QLabel* self) {
	return const_cast<const QLabel*>(self)->indent();
}

void QLabel_SetIndent(QLabel* self, int indent) {
	self->setIndent(static_cast<int>(indent));
}

int QLabel_Margin(QLabel* self) {
	return const_cast<const QLabel*>(self)->margin();
}

void QLabel_SetMargin(QLabel* self, int margin) {
	self->setMargin(static_cast<int>(margin));
}

bool QLabel_HasScaledContents(QLabel* self) {
	return const_cast<const QLabel*>(self)->hasScaledContents();
}

void QLabel_SetScaledContents(QLabel* self, bool scaledContents) {
	self->setScaledContents(scaledContents);
}

QSize* QLabel_SizeHint(QLabel* self) {
	QSize ret = const_cast<const QLabel*>(self)->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QLabel_MinimumSizeHint(QLabel* self) {
	QSize ret = const_cast<const QLabel*>(self)->minimumSizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QLabel_SetBuddy(QLabel* self, QWidget* buddy) {
	self->setBuddy(buddy);
}

QWidget* QLabel_Buddy(QLabel* self) {
	return const_cast<const QLabel*>(self)->buddy();
}

int QLabel_HeightForWidth(QLabel* self, int param1) {
	return const_cast<const QLabel*>(self)->heightForWidth(static_cast<int>(param1));
}

bool QLabel_OpenExternalLinks(QLabel* self) {
	return const_cast<const QLabel*>(self)->openExternalLinks();
}

void QLabel_SetOpenExternalLinks(QLabel* self, bool open) {
	self->setOpenExternalLinks(open);
}

void QLabel_SetTextInteractionFlags(QLabel* self, int flags) {
	self->setTextInteractionFlags(static_cast<Qt::TextInteractionFlags>(flags));
}

int QLabel_TextInteractionFlags(QLabel* self) {
	Qt::TextInteractionFlags ret = const_cast<const QLabel*>(self)->textInteractionFlags();
	return static_cast<int>(ret);
}

void QLabel_SetSelection(QLabel* self, int param1, int param2) {
	self->setSelection(static_cast<int>(param1), static_cast<int>(param2));
}

bool QLabel_HasSelectedText(QLabel* self) {
	return const_cast<const QLabel*>(self)->hasSelectedText();
}

void QLabel_SelectedText(QLabel* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLabel*>(self)->selectedText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QLabel_SelectionStart(QLabel* self) {
	return const_cast<const QLabel*>(self)->selectionStart();
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

void QLabel_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QLabel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLabel_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QLabel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLabel_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QLabel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLabel_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
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

