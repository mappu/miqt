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
#include "_cgo_export.h"

QSize* QLayoutItem_SizeHint(const QLayoutItem* self) {
	return new QSize(self->sizeHint());
}

QSize* QLayoutItem_MinimumSize(const QLayoutItem* self) {
	return new QSize(self->minimumSize());
}

QSize* QLayoutItem_MaximumSize(const QLayoutItem* self) {
	return new QSize(self->maximumSize());
}

int QLayoutItem_ExpandingDirections(const QLayoutItem* self) {
	Qt::Orientations _ret = self->expandingDirections();
	return static_cast<int>(_ret);
}

void QLayoutItem_SetGeometry(QLayoutItem* self, QRect* geometry) {
	self->setGeometry(*geometry);
}

QRect* QLayoutItem_Geometry(const QLayoutItem* self) {
	return new QRect(self->geometry());
}

bool QLayoutItem_IsEmpty(const QLayoutItem* self) {
	return self->isEmpty();
}

bool QLayoutItem_HasHeightForWidth(const QLayoutItem* self) {
	return self->hasHeightForWidth();
}

int QLayoutItem_HeightForWidth(const QLayoutItem* self, int param1) {
	return self->heightForWidth(static_cast<int>(param1));
}

int QLayoutItem_MinimumHeightForWidth(const QLayoutItem* self, int param1) {
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

int QLayoutItem_Alignment(const QLayoutItem* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QLayoutItem_SetAlignment(QLayoutItem* self, int a) {
	self->setAlignment(static_cast<Qt::Alignment>(a));
}

int QLayoutItem_ControlTypes(const QLayoutItem* self) {
	QSizePolicy::ControlTypes _ret = self->controlTypes();
	return static_cast<int>(_ret);
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

QSize* QSpacerItem_SizeHint(const QSpacerItem* self) {
	return new QSize(self->sizeHint());
}

QSize* QSpacerItem_MinimumSize(const QSpacerItem* self) {
	return new QSize(self->minimumSize());
}

QSize* QSpacerItem_MaximumSize(const QSpacerItem* self) {
	return new QSize(self->maximumSize());
}

int QSpacerItem_ExpandingDirections(const QSpacerItem* self) {
	Qt::Orientations _ret = self->expandingDirections();
	return static_cast<int>(_ret);
}

bool QSpacerItem_IsEmpty(const QSpacerItem* self) {
	return self->isEmpty();
}

void QSpacerItem_SetGeometry(QSpacerItem* self, QRect* geometry) {
	self->setGeometry(*geometry);
}

QRect* QSpacerItem_Geometry(const QSpacerItem* self) {
	return new QRect(self->geometry());
}

QSpacerItem* QSpacerItem_SpacerItem(QSpacerItem* self) {
	return self->spacerItem();
}

QSizePolicy* QSpacerItem_SizePolicy(const QSpacerItem* self) {
	return new QSizePolicy(self->sizePolicy());
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

QSize* QWidgetItem_SizeHint(const QWidgetItem* self) {
	return new QSize(self->sizeHint());
}

QSize* QWidgetItem_MinimumSize(const QWidgetItem* self) {
	return new QSize(self->minimumSize());
}

QSize* QWidgetItem_MaximumSize(const QWidgetItem* self) {
	return new QSize(self->maximumSize());
}

int QWidgetItem_ExpandingDirections(const QWidgetItem* self) {
	Qt::Orientations _ret = self->expandingDirections();
	return static_cast<int>(_ret);
}

bool QWidgetItem_IsEmpty(const QWidgetItem* self) {
	return self->isEmpty();
}

void QWidgetItem_SetGeometry(QWidgetItem* self, QRect* geometry) {
	self->setGeometry(*geometry);
}

QRect* QWidgetItem_Geometry(const QWidgetItem* self) {
	return new QRect(self->geometry());
}

QWidget* QWidgetItem_Widget(QWidgetItem* self) {
	return self->widget();
}

bool QWidgetItem_HasHeightForWidth(const QWidgetItem* self) {
	return self->hasHeightForWidth();
}

int QWidgetItem_HeightForWidth(const QWidgetItem* self, int param1) {
	return self->heightForWidth(static_cast<int>(param1));
}

int QWidgetItem_ControlTypes(const QWidgetItem* self) {
	QSizePolicy::ControlTypes _ret = self->controlTypes();
	return static_cast<int>(_ret);
}

void QWidgetItem_Delete(QWidgetItem* self) {
	delete self;
}

QWidgetItemV2* QWidgetItemV2_new(QWidget* widget) {
	return new QWidgetItemV2(widget);
}

QSize* QWidgetItemV2_SizeHint(const QWidgetItemV2* self) {
	return new QSize(self->sizeHint());
}

QSize* QWidgetItemV2_MinimumSize(const QWidgetItemV2* self) {
	return new QSize(self->minimumSize());
}

QSize* QWidgetItemV2_MaximumSize(const QWidgetItemV2* self) {
	return new QSize(self->maximumSize());
}

int QWidgetItemV2_HeightForWidth(const QWidgetItemV2* self, int width) {
	return self->heightForWidth(static_cast<int>(width));
}

void QWidgetItemV2_Delete(QWidgetItemV2* self) {
	delete self;
}

