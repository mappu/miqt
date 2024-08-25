#include "gen_qlayoutitem.h"
#include "qlayoutitem.h"

#include <QLayout>
#include <QLayoutItem>
#include <QRect>
#include <QSize>
#include <QSizePolicy>
#include <QSpacerItem>
#include <QWidget>
#include <QWidgetItem>
#include <QWidgetItemV2>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QSize* QLayoutItem_SizeHint(QLayoutItem* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QLayoutItem_MinimumSize(QLayoutItem* self) {
	QSize ret = self->minimumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QLayoutItem_MaximumSize(QLayoutItem* self) {
	QSize ret = self->maximumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QLayoutItem_SetGeometry(QLayoutItem* self, QRect* geometry) {
	self->setGeometry(*geometry);
}

QRect* QLayoutItem_Geometry(QLayoutItem* self) {
	QRect ret = self->geometry();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

bool QLayoutItem_IsEmpty(QLayoutItem* self) {
	return self->isEmpty();
}

bool QLayoutItem_HasHeightForWidth(QLayoutItem* self) {
	return self->hasHeightForWidth();
}

int QLayoutItem_HeightForWidth(QLayoutItem* self, int param1) {
	return self->heightForWidth(static_cast<int>(param1));
}

int QLayoutItem_MinimumHeightForWidth(QLayoutItem* self, int param1) {
	return self->minimumHeightForWidth(static_cast<int>(param1));
}

void QLayoutItem_Invalidate(QLayoutItem* self) {
	self->invalidate();
}

QWidget* QLayoutItem_Widget(QLayoutItem* self) {
	return self->widget();
}

QLayout* QLayoutItem_Layout(QLayoutItem* self) {
	return self->layout();
}

QSpacerItem* QLayoutItem_SpacerItem(QLayoutItem* self) {
	return self->spacerItem();
}

void QLayoutItem_Delete(QLayoutItem* self) {
	delete self;
}

QSpacerItem* QSpacerItem_new(QSpacerItem* param1) {
	return new QSpacerItem(*param1);
}

QSize* QSpacerItem_SizeHint(QSpacerItem* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QSpacerItem_MinimumSize(QSpacerItem* self) {
	QSize ret = self->minimumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QSpacerItem_MaximumSize(QSpacerItem* self) {
	QSize ret = self->maximumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

bool QSpacerItem_IsEmpty(QSpacerItem* self) {
	return self->isEmpty();
}

void QSpacerItem_SetGeometry(QSpacerItem* self, QRect* geometry) {
	self->setGeometry(*geometry);
}

QRect* QSpacerItem_Geometry(QSpacerItem* self) {
	QRect ret = self->geometry();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QSpacerItem* QSpacerItem_SpacerItem(QSpacerItem* self) {
	return self->spacerItem();
}

QSizePolicy* QSpacerItem_SizePolicy(QSpacerItem* self) {
	QSizePolicy ret = self->sizePolicy();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizePolicy*>(new QSizePolicy(ret));
}

void QSpacerItem_Delete(QSpacerItem* self) {
	delete self;
}

QWidgetItem* QWidgetItem_new(QWidget* w) {
	return new QWidgetItem(w);
}

QSize* QWidgetItem_SizeHint(QWidgetItem* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QWidgetItem_MinimumSize(QWidgetItem* self) {
	QSize ret = self->minimumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QWidgetItem_MaximumSize(QWidgetItem* self) {
	QSize ret = self->maximumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

bool QWidgetItem_IsEmpty(QWidgetItem* self) {
	return self->isEmpty();
}

void QWidgetItem_SetGeometry(QWidgetItem* self, QRect* geometry) {
	self->setGeometry(*geometry);
}

QRect* QWidgetItem_Geometry(QWidgetItem* self) {
	QRect ret = self->geometry();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QWidget* QWidgetItem_Widget(QWidgetItem* self) {
	return self->widget();
}

bool QWidgetItem_HasHeightForWidth(QWidgetItem* self) {
	return self->hasHeightForWidth();
}

int QWidgetItem_HeightForWidth(QWidgetItem* self, int param1) {
	return self->heightForWidth(static_cast<int>(param1));
}

void QWidgetItem_Delete(QWidgetItem* self) {
	delete self;
}

QWidgetItemV2* QWidgetItemV2_new(QWidget* widget) {
	return new QWidgetItemV2(widget);
}

QSize* QWidgetItemV2_SizeHint(QWidgetItemV2* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QWidgetItemV2_MinimumSize(QWidgetItemV2* self) {
	QSize ret = self->minimumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QWidgetItemV2_MaximumSize(QWidgetItemV2* self) {
	QSize ret = self->maximumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

int QWidgetItemV2_HeightForWidth(QWidgetItemV2* self, int width) {
	return self->heightForWidth(static_cast<int>(width));
}

void QWidgetItemV2_Delete(QWidgetItemV2* self) {
	delete self;
}

