#include <QIcon>
#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QToolBox>
#include <QWidget>
#include "qtoolbox.h"

#include "gen_qtoolbox.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QToolBox* QToolBox_new() {
	return new QToolBox();
}

QToolBox* QToolBox_new2(QWidget* parent) {
	return new QToolBox(parent);
}

QToolBox* QToolBox_new3(QWidget* parent, int f) {
	return new QToolBox(parent, static_cast<Qt::WindowFlags>(f));
}

QMetaObject* QToolBox_MetaObject(const QToolBox* self) {
	return (QMetaObject*) self->metaObject();
}

void QToolBox_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QToolBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QToolBox_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QToolBox::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QToolBox_AddItem(QToolBox* self, QWidget* widget, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return self->addItem(widget, text_QString);
}

int QToolBox_AddItem2(QToolBox* self, QWidget* widget, QIcon* icon, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return self->addItem(widget, *icon, text_QString);
}

int QToolBox_InsertItem(QToolBox* self, int index, QWidget* widget, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return self->insertItem(static_cast<int>(index), widget, text_QString);
}

int QToolBox_InsertItem2(QToolBox* self, int index, QWidget* widget, QIcon* icon, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return self->insertItem(static_cast<int>(index), widget, *icon, text_QString);
}

void QToolBox_RemoveItem(QToolBox* self, int index) {
	self->removeItem(static_cast<int>(index));
}

void QToolBox_SetItemEnabled(QToolBox* self, int index, bool enabled) {
	self->setItemEnabled(static_cast<int>(index), enabled);
}

bool QToolBox_IsItemEnabled(const QToolBox* self, int index) {
	return self->isItemEnabled(static_cast<int>(index));
}

void QToolBox_SetItemText(QToolBox* self, int index, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setItemText(static_cast<int>(index), text_QString);
}

void QToolBox_ItemText(const QToolBox* self, int index, char** _out, int* _out_Strlen) {
	QString ret = self->itemText(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QToolBox_SetItemIcon(QToolBox* self, int index, QIcon* icon) {
	self->setItemIcon(static_cast<int>(index), *icon);
}

QIcon* QToolBox_ItemIcon(const QToolBox* self, int index) {
	QIcon ret = self->itemIcon(static_cast<int>(index));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(ret));
}

void QToolBox_SetItemToolTip(QToolBox* self, int index, const char* toolTip, size_t toolTip_Strlen) {
	QString toolTip_QString = QString::fromUtf8(toolTip, toolTip_Strlen);
	self->setItemToolTip(static_cast<int>(index), toolTip_QString);
}

void QToolBox_ItemToolTip(const QToolBox* self, int index, char** _out, int* _out_Strlen) {
	QString ret = self->itemToolTip(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QToolBox_CurrentIndex(const QToolBox* self) {
	return self->currentIndex();
}

QWidget* QToolBox_CurrentWidget(const QToolBox* self) {
	return self->currentWidget();
}

QWidget* QToolBox_Widget(const QToolBox* self, int index) {
	return self->widget(static_cast<int>(index));
}

int QToolBox_IndexOf(const QToolBox* self, QWidget* widget) {
	return self->indexOf(widget);
}

int QToolBox_Count(const QToolBox* self) {
	return self->count();
}

void QToolBox_SetCurrentIndex(QToolBox* self, int index) {
	self->setCurrentIndex(static_cast<int>(index));
}

void QToolBox_SetCurrentWidget(QToolBox* self, QWidget* widget) {
	self->setCurrentWidget(widget);
}

void QToolBox_CurrentChanged(QToolBox* self, int index) {
	self->currentChanged(static_cast<int>(index));
}

void QToolBox_connect_CurrentChanged(QToolBox* self, void* slot) {
	QToolBox::connect(self, static_cast<void (QToolBox::*)(int)>(&QToolBox::currentChanged), self, [=](int index) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QToolBox_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QToolBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QToolBox_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QToolBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QToolBox_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QToolBox::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QToolBox_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QToolBox::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QToolBox_Delete(QToolBox* self) {
	delete self;
}

