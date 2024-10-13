#include <QColor>
#include <QColorDialog>
#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qcolordialog.h"
#include "gen_qcolordialog.h"
#include "_cgo_export.h"

QColorDialog* QColorDialog_new() {
	return new QColorDialog();
}

QColorDialog* QColorDialog_new2(QColor* initial) {
	return new QColorDialog(*initial);
}

QColorDialog* QColorDialog_new3(QWidget* parent) {
	return new QColorDialog(parent);
}

QColorDialog* QColorDialog_new4(QColor* initial, QWidget* parent) {
	return new QColorDialog(*initial, parent);
}

QMetaObject* QColorDialog_MetaObject(const QColorDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void* QColorDialog_Metacast(QColorDialog* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QColorDialog_Tr(const char* s) {
	QString _ret = QColorDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QColorDialog_TrUtf8(const char* s) {
	QString _ret = QColorDialog::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QColorDialog_SetCurrentColor(QColorDialog* self, QColor* color) {
	self->setCurrentColor(*color);
}

QColor* QColorDialog_CurrentColor(const QColorDialog* self) {
	return new QColor(self->currentColor());
}

QColor* QColorDialog_SelectedColor(const QColorDialog* self) {
	return new QColor(self->selectedColor());
}

void QColorDialog_SetOption(QColorDialog* self, int option) {
	self->setOption(static_cast<QColorDialog::ColorDialogOption>(option));
}

bool QColorDialog_TestOption(const QColorDialog* self, int option) {
	return self->testOption(static_cast<QColorDialog::ColorDialogOption>(option));
}

void QColorDialog_SetOptions(QColorDialog* self, int options) {
	self->setOptions(static_cast<QColorDialog::ColorDialogOptions>(options));
}

int QColorDialog_Options(const QColorDialog* self) {
	QColorDialog::ColorDialogOptions _ret = self->options();
	return static_cast<int>(_ret);
}

void QColorDialog_SetVisible(QColorDialog* self, bool visible) {
	self->setVisible(visible);
}

QColor* QColorDialog_GetColor() {
	return new QColor(QColorDialog::getColor());
}

unsigned int QColorDialog_GetRgba() {
	QRgb _ret = QColorDialog::getRgba();
	return static_cast<unsigned int>(_ret);
}

int QColorDialog_CustomCount() {
	return QColorDialog::customCount();
}

QColor* QColorDialog_CustomColor(int index) {
	return new QColor(QColorDialog::customColor(static_cast<int>(index)));
}

void QColorDialog_SetCustomColor(int index, QColor* color) {
	QColorDialog::setCustomColor(static_cast<int>(index), *color);
}

QColor* QColorDialog_StandardColor(int index) {
	return new QColor(QColorDialog::standardColor(static_cast<int>(index)));
}

void QColorDialog_SetStandardColor(int index, QColor* color) {
	QColorDialog::setStandardColor(static_cast<int>(index), *color);
}

void QColorDialog_CurrentColorChanged(QColorDialog* self, QColor* color) {
	self->currentColorChanged(*color);
}

void QColorDialog_connect_CurrentColorChanged(QColorDialog* self, intptr_t slot) {
	QColorDialog::connect(self, static_cast<void (QColorDialog::*)(const QColor&)>(&QColorDialog::currentColorChanged), self, [=](const QColor& color) {
		const QColor& color_ret = color;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&color_ret);
		miqt_exec_callback_QColorDialog_CurrentColorChanged(slot, sigval1);
	});
}

void QColorDialog_ColorSelected(QColorDialog* self, QColor* color) {
	self->colorSelected(*color);
}

void QColorDialog_connect_ColorSelected(QColorDialog* self, intptr_t slot) {
	QColorDialog::connect(self, static_cast<void (QColorDialog::*)(const QColor&)>(&QColorDialog::colorSelected), self, [=](const QColor& color) {
		const QColor& color_ret = color;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&color_ret);
		miqt_exec_callback_QColorDialog_ColorSelected(slot, sigval1);
	});
}

struct miqt_string* QColorDialog_Tr2(const char* s, const char* c) {
	QString _ret = QColorDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QColorDialog_Tr3(const char* s, const char* c, int n) {
	QString _ret = QColorDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QColorDialog_TrUtf82(const char* s, const char* c) {
	QString _ret = QColorDialog::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QColorDialog_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QColorDialog::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QColorDialog_SetOption2(QColorDialog* self, int option, bool on) {
	self->setOption(static_cast<QColorDialog::ColorDialogOption>(option), on);
}

QColor* QColorDialog_GetColor1(QColor* initial) {
	return new QColor(QColorDialog::getColor(*initial));
}

QColor* QColorDialog_GetColor2(QColor* initial, QWidget* parent) {
	return new QColor(QColorDialog::getColor(*initial, parent));
}

QColor* QColorDialog_GetColor3(QColor* initial, QWidget* parent, struct miqt_string* title) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	return new QColor(QColorDialog::getColor(*initial, parent, title_QString));
}

QColor* QColorDialog_GetColor4(QColor* initial, QWidget* parent, struct miqt_string* title, int options) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	return new QColor(QColorDialog::getColor(*initial, parent, title_QString, static_cast<QColorDialog::ColorDialogOptions>(options)));
}

unsigned int QColorDialog_GetRgba1(unsigned int rgba) {
	QRgb _ret = QColorDialog::getRgba(static_cast<QRgb>(rgba));
	return static_cast<unsigned int>(_ret);
}

unsigned int QColorDialog_GetRgba2(unsigned int rgba, bool* ok) {
	QRgb _ret = QColorDialog::getRgba(static_cast<QRgb>(rgba), ok);
	return static_cast<unsigned int>(_ret);
}

unsigned int QColorDialog_GetRgba3(unsigned int rgba, bool* ok, QWidget* parent) {
	QRgb _ret = QColorDialog::getRgba(static_cast<QRgb>(rgba), ok, parent);
	return static_cast<unsigned int>(_ret);
}

void QColorDialog_Delete(QColorDialog* self) {
	delete self;
}

