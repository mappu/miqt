#include "gen_qcolordialog.h"
#include "qcolordialog.h"

#include <QColor>
#include <QColorDialog>
#include <QMetaObject>
#include <QString>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

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

QMetaObject* QColorDialog_MetaObject(QColorDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void QColorDialog_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QColorDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QColorDialog_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QColorDialog::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QColorDialog_SetCurrentColor(QColorDialog* self, QColor* color) {
	self->setCurrentColor(*color);
}

QColor* QColorDialog_CurrentColor(QColorDialog* self) {
	QColor ret = self->currentColor();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColorDialog_SelectedColor(QColorDialog* self) {
	QColor ret = self->selectedColor();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

void QColorDialog_SetVisible(QColorDialog* self, bool visible) {
	self->setVisible(visible);
}

unsigned int QColorDialog_GetRgba() {
	return QColorDialog::getRgba();
}

int QColorDialog_CustomCount() {
	return QColorDialog::customCount();
}

QColor* QColorDialog_CustomColor(int index) {
	QColor ret = QColorDialog::customColor(static_cast<int>(index));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

void QColorDialog_SetCustomColor(int index, QColor* color) {
	QColorDialog::setCustomColor(static_cast<int>(index), *color);
}

QColor* QColorDialog_StandardColor(int index) {
	QColor ret = QColorDialog::standardColor(static_cast<int>(index));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

void QColorDialog_SetStandardColor(int index, QColor* color) {
	QColorDialog::setStandardColor(static_cast<int>(index), *color);
}

void QColorDialog_CurrentColorChanged(QColorDialog* self, QColor* color) {
	self->currentColorChanged(*color);
}

void QColorDialog_connect_CurrentColorChanged(QColorDialog* self, void* slot) {
	QColorDialog::connect(self, static_cast<void (QColorDialog::*)(const QColor&)>(&QColorDialog::currentColorChanged), self, [=](const QColor& color) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QColorDialog_ColorSelected(QColorDialog* self, QColor* color) {
	self->colorSelected(*color);
}

void QColorDialog_connect_ColorSelected(QColorDialog* self, void* slot) {
	QColorDialog::connect(self, static_cast<void (QColorDialog::*)(const QColor&)>(&QColorDialog::colorSelected), self, [=](const QColor& color) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QColorDialog_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QColorDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QColorDialog_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QColorDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QColorDialog_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QColorDialog::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QColorDialog_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QColorDialog::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

unsigned int QColorDialog_GetRgba1(unsigned int rgba) {
	return QColorDialog::getRgba(static_cast<QRgb>(rgba));
}

unsigned int QColorDialog_GetRgba2(unsigned int rgba, bool* ok) {
	return QColorDialog::getRgba(static_cast<QRgb>(rgba), ok);
}

unsigned int QColorDialog_GetRgba3(unsigned int rgba, bool* ok, QWidget* parent) {
	return QColorDialog::getRgba(static_cast<QRgb>(rgba), ok, parent);
}

void QColorDialog_Delete(QColorDialog* self) {
	delete self;
}

