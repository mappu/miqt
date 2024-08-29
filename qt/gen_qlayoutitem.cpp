#include <QLayout>
#include <QLayoutItem>
#include <QRect>
#include <QSize>
#include <QSizePolicy>
#include <QSpacerItem>
#include <QWidget>
#include <QWidgetItem>
#include <QWidgetItemV2>
#include "qlayoutitem.h"

#include "gen_qlayoutitem.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QSize* QLayoutItem_SizeHint(QLayoutItem* self) {
	QSize ret = const_cast<const QLayoutItem*>(self)->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QLayoutItem_MinimumSize(QLayoutItem* self) {
	QSize ret = const_cast<const QLayoutItem*>(self)->minimumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QLayoutItem_MaximumSize(QLayoutItem* self) {
	QSize ret = const_cast<const QLayoutItem*>(self)->maximumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

int QLayoutItem_ExpandingDirections(QLayoutItem* self) {
	Qt::Orientations ret = const_cast<const QLayoutItem*>(self)->expandingDirections();
	return static_cast<int>(ret);
}

void QLayoutItem_SetGeometry(QLayoutItem* self, QRect* geometry) {
	self->setGeometry(*geometry);
}

QRect* QLayoutItem_Geometry(QLayoutItem* self) {
	QRect ret = const_cast<const QLayoutItem*>(self)->geometry();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

bool QLayoutItem_IsEmpty(QLayoutItem* self) {
	return const_cast<const QLayoutItem*>(self)->isEmpty();
}

bool QLayoutItem_HasHeightForWidth(QLayoutItem* self) {
	return const_cast<const QLayoutItem*>(self)->hasHeightForWidth();
}

int QLayoutItem_HeightForWidth(QLayoutItem* self, int param1) {
	return const_cast<const QLayoutItem*>(self)->heightForWidth(static_cast<int>(param1));
}

int QLayoutItem_MinimumHeightForWidth(QLayoutItem* self, int param1) {
	return const_cast<const QLayoutItem*>(self)->minimumHeightForWidth(static_cast<int>(param1));
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

int QLayoutItem_Alignment(QLayoutItem* self) {
	Qt::Alignment ret = const_cast<const QLayoutItem*>(self)->alignment();
	return static_cast<int>(ret);
}

void QLayoutItem_SetAlignment(QLayoutItem* self, int a) {
	self->setAlignment(static_cast<Qt::Alignment>(a));
}

int QLayoutItem_ControlTypes(QLayoutItem* self) {
	QSizePolicy::ControlTypes ret = const_cast<const QLayoutItem*>(self)->controlTypes();
	return static_cast<int>(ret);
}

void QLayoutItem_Delete(QLayoutItem* self) {
	delete self;
}

QSpacerItem* QSpacerItem_new(int w, int h) {
	return new QSpacerItem(static_cast<int>(w), static_cast<int>(h));
}

QSpacerItem* QSpacerItem_new2(QSpacerItem* param1) {
	return new QSpacerItem(*param1);
}

QSpacerItem* QSpacerItem_new3(int w, int h, uintptr_t hData) {
	return new QSpacerItem(static_cast<int>(w), static_cast<int>(h), static_cast<QSizePolicy::Policy>(hData));
}

QSpacerItem* QSpacerItem_new4(int w, int h, uintptr_t hData, uintptr_t vData) {
	return new QSpacerItem(static_cast<int>(w), static_cast<int>(h), static_cast<QSizePolicy::Policy>(hData), static_cast<QSizePolicy::Policy>(vData));
}

void QSpacerItem_ChangeSize(QSpacerItem* self, int w, int h) {
	self->changeSize(static_cast<int>(w), static_cast<int>(h));
}

QSize* QSpacerItem_SizeHint(QSpacerItem* self) {
	QSize ret = const_cast<const QSpacerItem*>(self)->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QSpacerItem_MinimumSize(QSpacerItem* self) {
	QSize ret = const_cast<const QSpacerItem*>(self)->minimumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QSpacerItem_MaximumSize(QSpacerItem* self) {
	QSize ret = const_cast<const QSpacerItem*>(self)->maximumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

int QSpacerItem_ExpandingDirections(QSpacerItem* self) {
	Qt::Orientations ret = const_cast<const QSpacerItem*>(self)->expandingDirections();
	return static_cast<int>(ret);
}

bool QSpacerItem_IsEmpty(QSpacerItem* self) {
	return const_cast<const QSpacerItem*>(self)->isEmpty();
}

void QSpacerItem_SetGeometry(QSpacerItem* self, QRect* geometry) {
	self->setGeometry(*geometry);
}

QRect* QSpacerItem_Geometry(QSpacerItem* self) {
	QRect ret = const_cast<const QSpacerItem*>(self)->geometry();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QSpacerItem* QSpacerItem_SpacerItem(QSpacerItem* self) {
	return self->spacerItem();
}

QSizePolicy* QSpacerItem_SizePolicy(QSpacerItem* self) {
	QSizePolicy ret = const_cast<const QSpacerItem*>(self)->sizePolicy();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizePolicy*>(new QSizePolicy(ret));
}

void QSpacerItem_ChangeSize3(QSpacerItem* self, int w, int h, uintptr_t hData) {
	self->changeSize(static_cast<int>(w), static_cast<int>(h), static_cast<QSizePolicy::Policy>(hData));
}

void QSpacerItem_ChangeSize4(QSpacerItem* self, int w, int h, uintptr_t hData, uintptr_t vData) {
	self->changeSize(static_cast<int>(w), static_cast<int>(h), static_cast<QSizePolicy::Policy>(hData), static_cast<QSizePolicy::Policy>(vData));
}

void QSpacerItem_Delete(QSpacerItem* self) {
	delete self;
}

QWidgetItem* QWidgetItem_new(QWidget* w) {
	return new QWidgetItem(w);
}

QSize* QWidgetItem_SizeHint(QWidgetItem* self) {
	QSize ret = const_cast<const QWidgetItem*>(self)->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QWidgetItem_MinimumSize(QWidgetItem* self) {
	QSize ret = const_cast<const QWidgetItem*>(self)->minimumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QWidgetItem_MaximumSize(QWidgetItem* self) {
	QSize ret = const_cast<const QWidgetItem*>(self)->maximumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

int QWidgetItem_ExpandingDirections(QWidgetItem* self) {
	Qt::Orientations ret = const_cast<const QWidgetItem*>(self)->expandingDirections();
	return static_cast<int>(ret);
}

bool QWidgetItem_IsEmpty(QWidgetItem* self) {
	return const_cast<const QWidgetItem*>(self)->isEmpty();
}

void QWidgetItem_SetGeometry(QWidgetItem* self, QRect* geometry) {
	self->setGeometry(*geometry);
}

QRect* QWidgetItem_Geometry(QWidgetItem* self) {
	QRect ret = const_cast<const QWidgetItem*>(self)->geometry();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QWidget* QWidgetItem_Widget(QWidgetItem* self) {
	return self->widget();
}

bool QWidgetItem_HasHeightForWidth(QWidgetItem* self) {
	return const_cast<const QWidgetItem*>(self)->hasHeightForWidth();
}

int QWidgetItem_HeightForWidth(QWidgetItem* self, int param1) {
	return const_cast<const QWidgetItem*>(self)->heightForWidth(static_cast<int>(param1));
}

int QWidgetItem_ControlTypes(QWidgetItem* self) {
	QSizePolicy::ControlTypes ret = const_cast<const QWidgetItem*>(self)->controlTypes();
	return static_cast<int>(ret);
}

void QWidgetItem_Delete(QWidgetItem* self) {
	delete self;
}

QWidgetItemV2* QWidgetItemV2_new(QWidget* widget) {
	return new QWidgetItemV2(widget);
}

QSize* QWidgetItemV2_SizeHint(QWidgetItemV2* self) {
	QSize ret = const_cast<const QWidgetItemV2*>(self)->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QWidgetItemV2_MinimumSize(QWidgetItemV2* self) {
	QSize ret = const_cast<const QWidgetItemV2*>(self)->minimumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QWidgetItemV2_MaximumSize(QWidgetItemV2* self) {
	QSize ret = const_cast<const QWidgetItemV2*>(self)->maximumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

int QWidgetItemV2_HeightForWidth(QWidgetItemV2* self, int width) {
	return const_cast<const QWidgetItemV2*>(self)->heightForWidth(static_cast<int>(width));
}

void QWidgetItemV2_Delete(QWidgetItemV2* self) {
	delete self;
}

