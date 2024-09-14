#include <QFont>
#include <QFontDialog>
#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qfontdialog.h"
#include "gen_qfontdialog.h"
#include "_cgo_export.h"

QFontDialog* QFontDialog_new() {
	return new QFontDialog();
}

QFontDialog* QFontDialog_new2(QFont* initial) {
	return new QFontDialog(*initial);
}

QFontDialog* QFontDialog_new3(QWidget* parent) {
	return new QFontDialog(parent);
}

QFontDialog* QFontDialog_new4(QFont* initial, QWidget* parent) {
	return new QFontDialog(*initial, parent);
}

QMetaObject* QFontDialog_MetaObject(const QFontDialog* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QFontDialog_Tr(const char* s) {
	QString _ret = QFontDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QFontDialog_TrUtf8(const char* s) {
	QString _ret = QFontDialog::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QFontDialog_SetCurrentFont(QFontDialog* self, QFont* font) {
	self->setCurrentFont(*font);
}

QFont* QFontDialog_CurrentFont(const QFontDialog* self) {
	QFont _ret = self->currentFont();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(_ret));
}

QFont* QFontDialog_SelectedFont(const QFontDialog* self) {
	QFont _ret = self->selectedFont();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(_ret));
}

void QFontDialog_SetOption(QFontDialog* self, uintptr_t option) {
	self->setOption(static_cast<QFontDialog::FontDialogOption>(option));
}

bool QFontDialog_TestOption(const QFontDialog* self, uintptr_t option) {
	return self->testOption(static_cast<QFontDialog::FontDialogOption>(option));
}

void QFontDialog_SetOptions(QFontDialog* self, int options) {
	self->setOptions(static_cast<QFontDialog::FontDialogOptions>(options));
}

int QFontDialog_Options(const QFontDialog* self) {
	QFontDialog::FontDialogOptions _ret = self->options();
	return static_cast<int>(_ret);
}

void QFontDialog_SetVisible(QFontDialog* self, bool visible) {
	self->setVisible(visible);
}

QFont* QFontDialog_GetFont(bool* ok) {
	QFont _ret = QFontDialog::getFont(ok);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(_ret));
}

QFont* QFontDialog_GetFont2(bool* ok, QFont* initial) {
	QFont _ret = QFontDialog::getFont(ok, *initial);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(_ret));
}

void QFontDialog_CurrentFontChanged(QFontDialog* self, QFont* font) {
	self->currentFontChanged(*font);
}

void QFontDialog_connect_CurrentFontChanged(QFontDialog* self, void* slot) {
	QFontDialog::connect(self, static_cast<void (QFontDialog::*)(const QFont&)>(&QFontDialog::currentFontChanged), self, [=](const QFont& font) {
		const QFont& font_ret = font;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&font_ret);
		miqt_exec_callback_QFontDialog_CurrentFontChanged(slot, sigval1);
	});
}

void QFontDialog_FontSelected(QFontDialog* self, QFont* font) {
	self->fontSelected(*font);
}

void QFontDialog_connect_FontSelected(QFontDialog* self, void* slot) {
	QFontDialog::connect(self, static_cast<void (QFontDialog::*)(const QFont&)>(&QFontDialog::fontSelected), self, [=](const QFont& font) {
		const QFont& font_ret = font;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&font_ret);
		miqt_exec_callback_QFontDialog_FontSelected(slot, sigval1);
	});
}

struct miqt_string* QFontDialog_Tr2(const char* s, const char* c) {
	QString _ret = QFontDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QFontDialog_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFontDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QFontDialog_TrUtf82(const char* s, const char* c) {
	QString _ret = QFontDialog::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QFontDialog_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QFontDialog::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QFontDialog_SetOption2(QFontDialog* self, uintptr_t option, bool on) {
	self->setOption(static_cast<QFontDialog::FontDialogOption>(option), on);
}

QFont* QFontDialog_GetFont22(bool* ok, QWidget* parent) {
	QFont _ret = QFontDialog::getFont(ok, parent);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(_ret));
}

QFont* QFontDialog_GetFont3(bool* ok, QFont* initial, QWidget* parent) {
	QFont _ret = QFontDialog::getFont(ok, *initial, parent);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(_ret));
}

QFont* QFontDialog_GetFont4(bool* ok, QFont* initial, QWidget* parent, struct miqt_string* title) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QFont _ret = QFontDialog::getFont(ok, *initial, parent, title_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(_ret));
}

QFont* QFontDialog_GetFont5(bool* ok, QFont* initial, QWidget* parent, struct miqt_string* title, int options) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QFont _ret = QFontDialog::getFont(ok, *initial, parent, title_QString, static_cast<QFontDialog::FontDialogOptions>(options));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(_ret));
}

void QFontDialog_Delete(QFontDialog* self) {
	delete self;
}

