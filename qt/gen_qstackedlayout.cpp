#include <QLayout>
#include <QLayoutItem>
#include <QMetaObject>
#include <QRect>
#include <QSize>
#include <QStackedLayout>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qstackedlayout.h"
#include "gen_qstackedlayout.h"
#include "_cgo_export.h"

QStackedLayout* QStackedLayout_new() {
	return new QStackedLayout();
}

QStackedLayout* QStackedLayout_new2(QWidget* parent) {
	return new QStackedLayout(parent);
}

QStackedLayout* QStackedLayout_new3(QLayout* parentLayout) {
	return new QStackedLayout(parentLayout);
}

QMetaObject* QStackedLayout_MetaObject(const QStackedLayout* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QStackedLayout_Tr(const char* s) {
	QString _ret = QStackedLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QStackedLayout_TrUtf8(const char* s) {
	QString _ret = QStackedLayout::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

int QStackedLayout_AddWidget(QStackedLayout* self, QWidget* w) {
	return self->addWidget(w);
}

int QStackedLayout_InsertWidget(QStackedLayout* self, int index, QWidget* w) {
	return self->insertWidget(static_cast<int>(index), w);
}

QWidget* QStackedLayout_CurrentWidget(const QStackedLayout* self) {
	return self->currentWidget();
}

int QStackedLayout_CurrentIndex(const QStackedLayout* self) {
	return self->currentIndex();
}

QWidget* QStackedLayout_Widget(const QStackedLayout* self, int param1) {
	return self->widget(static_cast<int>(param1));
}

int QStackedLayout_Count(const QStackedLayout* self) {
	return self->count();
}

int QStackedLayout_StackingMode(const QStackedLayout* self) {
	QStackedLayout::StackingMode _ret = self->stackingMode();
	return static_cast<int>(_ret);
}

void QStackedLayout_SetStackingMode(QStackedLayout* self, int stackingMode) {
	self->setStackingMode(static_cast<QStackedLayout::StackingMode>(stackingMode));
}

void QStackedLayout_AddItem(QStackedLayout* self, QLayoutItem* item) {
	self->addItem(item);
}

QSize* QStackedLayout_SizeHint(const QStackedLayout* self) {
	return new QSize(self->sizeHint());
}

QSize* QStackedLayout_MinimumSize(const QStackedLayout* self) {
	return new QSize(self->minimumSize());
}

QLayoutItem* QStackedLayout_ItemAt(const QStackedLayout* self, int param1) {
	return self->itemAt(static_cast<int>(param1));
}

QLayoutItem* QStackedLayout_TakeAt(QStackedLayout* self, int param1) {
	return self->takeAt(static_cast<int>(param1));
}

void QStackedLayout_SetGeometry(QStackedLayout* self, QRect* rect) {
	self->setGeometry(*rect);
}

bool QStackedLayout_HasHeightForWidth(const QStackedLayout* self) {
	return self->hasHeightForWidth();
}

int QStackedLayout_HeightForWidth(const QStackedLayout* self, int width) {
	return self->heightForWidth(static_cast<int>(width));
}

void QStackedLayout_WidgetRemoved(QStackedLayout* self, int index) {
	self->widgetRemoved(static_cast<int>(index));
}

void QStackedLayout_connect_WidgetRemoved(QStackedLayout* self, void* slot) {
	QStackedLayout::connect(self, static_cast<void (QStackedLayout::*)(int)>(&QStackedLayout::widgetRemoved), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QStackedLayout_WidgetRemoved(slot, sigval1);
	});
}

void QStackedLayout_CurrentChanged(QStackedLayout* self, int index) {
	self->currentChanged(static_cast<int>(index));
}

void QStackedLayout_connect_CurrentChanged(QStackedLayout* self, void* slot) {
	QStackedLayout::connect(self, static_cast<void (QStackedLayout::*)(int)>(&QStackedLayout::currentChanged), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QStackedLayout_CurrentChanged(slot, sigval1);
	});
}

void QStackedLayout_SetCurrentIndex(QStackedLayout* self, int index) {
	self->setCurrentIndex(static_cast<int>(index));
}

void QStackedLayout_SetCurrentWidget(QStackedLayout* self, QWidget* w) {
	self->setCurrentWidget(w);
}

struct miqt_string* QStackedLayout_Tr2(const char* s, const char* c) {
	QString _ret = QStackedLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QStackedLayout_Tr3(const char* s, const char* c, int n) {
	QString _ret = QStackedLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QStackedLayout_TrUtf82(const char* s, const char* c) {
	QString _ret = QStackedLayout::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QStackedLayout_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QStackedLayout::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QStackedLayout_Delete(QStackedLayout* self) {
	delete self;
}

