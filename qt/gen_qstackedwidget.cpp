#include "gen_qstackedwidget.h"
#include "qstackedwidget.h"

#include <QMetaObject>
#include <QStackedWidget>
#include <QString>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QStackedWidget* QStackedWidget_new() {
	return new QStackedWidget();
}

QStackedWidget* QStackedWidget_new2(QWidget* parent) {
	return new QStackedWidget(parent);
}

QMetaObject* QStackedWidget_MetaObject(QStackedWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void QStackedWidget_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QStackedWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStackedWidget_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QStackedWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QStackedWidget_AddWidget(QStackedWidget* self, QWidget* w) {
	return self->addWidget(w);
}

int QStackedWidget_InsertWidget(QStackedWidget* self, int index, QWidget* w) {
	return self->insertWidget(static_cast<int>(index), w);
}

void QStackedWidget_RemoveWidget(QStackedWidget* self, QWidget* w) {
	self->removeWidget(w);
}

QWidget* QStackedWidget_CurrentWidget(QStackedWidget* self) {
	return self->currentWidget();
}

int QStackedWidget_CurrentIndex(QStackedWidget* self) {
	return self->currentIndex();
}

int QStackedWidget_IndexOf(QStackedWidget* self, QWidget* param1) {
	return self->indexOf(param1);
}

QWidget* QStackedWidget_Widget(QStackedWidget* self, int param1) {
	return self->widget(static_cast<int>(param1));
}

int QStackedWidget_Count(QStackedWidget* self) {
	return self->count();
}

void QStackedWidget_SetCurrentIndex(QStackedWidget* self, int index) {
	self->setCurrentIndex(static_cast<int>(index));
}

void QStackedWidget_SetCurrentWidget(QStackedWidget* self, QWidget* w) {
	self->setCurrentWidget(w);
}

void QStackedWidget_CurrentChanged(QStackedWidget* self, int param1) {
	self->currentChanged(static_cast<int>(param1));
}

void QStackedWidget_connect_CurrentChanged(QStackedWidget* self, void* slot) {
	QStackedWidget::connect(self, static_cast<void (QStackedWidget::*)(int)>(&QStackedWidget::currentChanged), self, [=](int param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QStackedWidget_WidgetRemoved(QStackedWidget* self, int index) {
	self->widgetRemoved(static_cast<int>(index));
}

void QStackedWidget_connect_WidgetRemoved(QStackedWidget* self, void* slot) {
	QStackedWidget::connect(self, static_cast<void (QStackedWidget::*)(int)>(&QStackedWidget::widgetRemoved), self, [=](int index) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QStackedWidget_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QStackedWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStackedWidget_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QStackedWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStackedWidget_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QStackedWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStackedWidget_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QStackedWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStackedWidget_Delete(QStackedWidget* self) {
	delete self;
}

