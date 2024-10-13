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
#include "_cgo_export.h"

QLabel* QLabel_new() {
	return new QLabel();
}

QLabel* QLabel_new2(struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	return new QLabel(text_QString);
}

QLabel* QLabel_new3(QWidget* parent) {
	return new QLabel(parent);
}

QLabel* QLabel_new4(QWidget* parent, int f) {
	return new QLabel(parent, static_cast<Qt::WindowFlags>(f));
}

QLabel* QLabel_new5(struct miqt_string* text, QWidget* parent) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	return new QLabel(text_QString, parent);
}

QLabel* QLabel_new6(struct miqt_string* text, QWidget* parent, int f) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	return new QLabel(text_QString, parent, static_cast<Qt::WindowFlags>(f));
}

QMetaObject* QLabel_MetaObject(const QLabel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QLabel_Metacast(QLabel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QLabel_Tr(const char* s) {
	QString _ret = QLabel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLabel_TrUtf8(const char* s) {
	QString _ret = QLabel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLabel_Text(const QLabel* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QPixmap* QLabel_Pixmap(const QLabel* self) {
	return (QPixmap*) self->pixmap();
}

QPixmap* QLabel_PixmapWithQtReturnByValueConstant(const QLabel* self, int param1) {
	return new QPixmap(self->pixmap(static_cast<Qt::ReturnByValueConstant>(param1)));
}

QPicture* QLabel_Picture(const QLabel* self) {
	return (QPicture*) self->picture();
}

QPicture* QLabel_PictureWithQtReturnByValueConstant(const QLabel* self, int param1) {
	return new QPicture(self->picture(static_cast<Qt::ReturnByValueConstant>(param1)));
}

QMovie* QLabel_Movie(const QLabel* self) {
	return self->movie();
}

int QLabel_TextFormat(const QLabel* self) {
	Qt::TextFormat _ret = self->textFormat();
	return static_cast<int>(_ret);
}

void QLabel_SetTextFormat(QLabel* self, int textFormat) {
	self->setTextFormat(static_cast<Qt::TextFormat>(textFormat));
}

int QLabel_Alignment(const QLabel* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QLabel_SetAlignment(QLabel* self, int alignment) {
	self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

void QLabel_SetWordWrap(QLabel* self, bool on) {
	self->setWordWrap(on);
}

bool QLabel_WordWrap(const QLabel* self) {
	return self->wordWrap();
}

int QLabel_Indent(const QLabel* self) {
	return self->indent();
}

void QLabel_SetIndent(QLabel* self, int indent) {
	self->setIndent(static_cast<int>(indent));
}

int QLabel_Margin(const QLabel* self) {
	return self->margin();
}

void QLabel_SetMargin(QLabel* self, int margin) {
	self->setMargin(static_cast<int>(margin));
}

bool QLabel_HasScaledContents(const QLabel* self) {
	return self->hasScaledContents();
}

void QLabel_SetScaledContents(QLabel* self, bool scaledContents) {
	self->setScaledContents(scaledContents);
}

QSize* QLabel_SizeHint(const QLabel* self) {
	return new QSize(self->sizeHint());
}

QSize* QLabel_MinimumSizeHint(const QLabel* self) {
	return new QSize(self->minimumSizeHint());
}

void QLabel_SetBuddy(QLabel* self, QWidget* buddy) {
	self->setBuddy(buddy);
}

QWidget* QLabel_Buddy(const QLabel* self) {
	return self->buddy();
}

int QLabel_HeightForWidth(const QLabel* self, int param1) {
	return self->heightForWidth(static_cast<int>(param1));
}

bool QLabel_OpenExternalLinks(const QLabel* self) {
	return self->openExternalLinks();
}

void QLabel_SetOpenExternalLinks(QLabel* self, bool open) {
	self->setOpenExternalLinks(open);
}

void QLabel_SetTextInteractionFlags(QLabel* self, int flags) {
	self->setTextInteractionFlags(static_cast<Qt::TextInteractionFlags>(flags));
}

int QLabel_TextInteractionFlags(const QLabel* self) {
	Qt::TextInteractionFlags _ret = self->textInteractionFlags();
	return static_cast<int>(_ret);
}

void QLabel_SetSelection(QLabel* self, int param1, int param2) {
	self->setSelection(static_cast<int>(param1), static_cast<int>(param2));
}

bool QLabel_HasSelectedText(const QLabel* self) {
	return self->hasSelectedText();
}

struct miqt_string* QLabel_SelectedText(const QLabel* self) {
	QString _ret = self->selectedText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

int QLabel_SelectionStart(const QLabel* self) {
	return self->selectionStart();
}

void QLabel_SetText(QLabel* self, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
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

void QLabel_LinkActivated(QLabel* self, struct miqt_string* link) {
	QString link_QString = QString::fromUtf8(&link->data, link->len);
	self->linkActivated(link_QString);
}

void QLabel_connect_LinkActivated(QLabel* self, intptr_t slot) {
	QLabel::connect(self, static_cast<void (QLabel::*)(const QString&)>(&QLabel::linkActivated), self, [=](const QString& link) {
		const QString link_ret = link;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray link_b = link_ret.toUtf8();
		struct miqt_string* sigval1 = miqt_strdup(link_b.data(), link_b.length());
		miqt_exec_callback_QLabel_LinkActivated(slot, sigval1);
	});
}

void QLabel_LinkHovered(QLabel* self, struct miqt_string* link) {
	QString link_QString = QString::fromUtf8(&link->data, link->len);
	self->linkHovered(link_QString);
}

void QLabel_connect_LinkHovered(QLabel* self, intptr_t slot) {
	QLabel::connect(self, static_cast<void (QLabel::*)(const QString&)>(&QLabel::linkHovered), self, [=](const QString& link) {
		const QString link_ret = link;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray link_b = link_ret.toUtf8();
		struct miqt_string* sigval1 = miqt_strdup(link_b.data(), link_b.length());
		miqt_exec_callback_QLabel_LinkHovered(slot, sigval1);
	});
}

struct miqt_string* QLabel_Tr2(const char* s, const char* c) {
	QString _ret = QLabel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLabel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QLabel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLabel_TrUtf82(const char* s, const char* c) {
	QString _ret = QLabel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLabel_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QLabel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QLabel_Delete(QLabel* self) {
	delete self;
}

