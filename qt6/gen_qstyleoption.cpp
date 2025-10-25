#include <QBrush>
#include <QColor>
#include <QFont>
#include <QFontMetrics>
#include <QIcon>
#include <QLocale>
#include <QModelIndex>
#include <QObject>
#include <QPalette>
#include <QPoint>
#include <QRect>
#include <QRectF>
#include <QRegion>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleHintReturn>
#include <QStyleHintReturnMask>
#include <QStyleHintReturnVariant>
#include <QStyleOption>
#include <QStyleOptionButton>
#include <QStyleOptionComboBox>
#include <QStyleOptionComplex>
#include <QStyleOptionDockWidget>
#include <QStyleOptionFocusRect>
#include <QStyleOptionFrame>
#include <QStyleOptionGraphicsItem>
#include <QStyleOptionGroupBox>
#include <QStyleOptionHeader>
#include <QStyleOptionHeaderV2>
#include <QStyleOptionMenuItem>
#include <QStyleOptionProgressBar>
#include <QStyleOptionRubberBand>
#include <QStyleOptionSizeGrip>
#include <QStyleOptionSlider>
#include <QStyleOptionSpinBox>
#include <QStyleOptionTab>
#include <QStyleOptionTabBarBase>
#include <QStyleOptionTabWidgetFrame>
#include <QStyleOptionTitleBar>
#include <QStyleOptionToolBar>
#include <QStyleOptionToolBox>
#include <QStyleOptionToolButton>
#include <QStyleOptionViewItem>
#include <QTransform>
#include <QVariant>
#include <QWidget>
#include <qstyleoption.h>
#include "gen_qstyleoption.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QStyleOption* QStyleOption_new() {
	return new (std::nothrow) QStyleOption();
}

QStyleOption* QStyleOption_new2(QStyleOption* other) {
	return new (std::nothrow) QStyleOption(*other);
}

QStyleOption* QStyleOption_new3(int version) {
	return new (std::nothrow) QStyleOption(static_cast<int>(version));
}

QStyleOption* QStyleOption_new4(int version, int type) {
	return new (std::nothrow) QStyleOption(static_cast<int>(version), static_cast<int>(type));
}

int QStyleOption_version(const QStyleOption* self) {
	return self->version;
}

void QStyleOption_setVersion(QStyleOption* self, int version) {
	self->version = static_cast<int>(version);
}

int QStyleOption_type(const QStyleOption* self) {
	return self->type;
}

void QStyleOption_setType(QStyleOption* self, int type) {
	self->type = static_cast<int>(type);
}

int QStyleOption_state(const QStyleOption* self) {
	QStyle::State state_ret = self->state;
	return static_cast<int>(state_ret);
}

void QStyleOption_setState(QStyleOption* self, int state) {
	self->state = static_cast<QStyle::State>(state);
}

int QStyleOption_direction(const QStyleOption* self) {
	Qt::LayoutDirection direction_ret = self->direction;
	return static_cast<int>(direction_ret);
}

void QStyleOption_setDirection(QStyleOption* self, int direction) {
	self->direction = static_cast<Qt::LayoutDirection>(direction);
}

QRect* QStyleOption_rect(const QStyleOption* self) {
	return new QRect(self->rect);
}

void QStyleOption_setRect(QStyleOption* self, QRect* rect) {
	self->rect = *rect;
}

QFontMetrics* QStyleOption_fontMetrics(const QStyleOption* self) {
	return new QFontMetrics(self->fontMetrics);
}

void QStyleOption_setFontMetrics(QStyleOption* self, QFontMetrics* fontMetrics) {
	self->fontMetrics = *fontMetrics;
}

QPalette* QStyleOption_palette(const QStyleOption* self) {
	return new QPalette(self->palette);
}

void QStyleOption_setPalette(QStyleOption* self, QPalette* palette) {
	self->palette = *palette;
}

QObject* QStyleOption_styleObject(const QStyleOption* self) {
	return self->styleObject;
}

void QStyleOption_setStyleObject(QStyleOption* self, QObject* styleObject) {
	self->styleObject = styleObject;
}

void QStyleOption_initFrom(QStyleOption* self, QWidget* w) {
	self->initFrom(w);
}

void QStyleOption_operatorAssign(QStyleOption* self, QStyleOption* other) {
	self->operator=(*other);
}

void QStyleOption_delete(QStyleOption* self) {
	delete self;
}

QStyleOptionFocusRect* QStyleOptionFocusRect_new() {
	return new (std::nothrow) QStyleOptionFocusRect();
}

QStyleOptionFocusRect* QStyleOptionFocusRect_new2(QStyleOptionFocusRect* other) {
	return new (std::nothrow) QStyleOptionFocusRect(*other);
}

void QStyleOptionFocusRect_virtbase(QStyleOptionFocusRect* src, QStyleOption** outptr_QStyleOption) {
	*outptr_QStyleOption = static_cast<QStyleOption*>(src);
}

QColor* QStyleOptionFocusRect_backgroundColor(const QStyleOptionFocusRect* self) {
	return new QColor(self->backgroundColor);
}

void QStyleOptionFocusRect_setBackgroundColor(QStyleOptionFocusRect* self, QColor* backgroundColor) {
	self->backgroundColor = *backgroundColor;
}

void QStyleOptionFocusRect_delete(QStyleOptionFocusRect* self) {
	delete self;
}

QStyleOptionFrame* QStyleOptionFrame_new() {
	return new (std::nothrow) QStyleOptionFrame();
}

QStyleOptionFrame* QStyleOptionFrame_new2(QStyleOptionFrame* other) {
	return new (std::nothrow) QStyleOptionFrame(*other);
}

void QStyleOptionFrame_virtbase(QStyleOptionFrame* src, QStyleOption** outptr_QStyleOption) {
	*outptr_QStyleOption = static_cast<QStyleOption*>(src);
}

int QStyleOptionFrame_lineWidth(const QStyleOptionFrame* self) {
	return self->lineWidth;
}

void QStyleOptionFrame_setLineWidth(QStyleOptionFrame* self, int lineWidth) {
	self->lineWidth = static_cast<int>(lineWidth);
}

int QStyleOptionFrame_midLineWidth(const QStyleOptionFrame* self) {
	return self->midLineWidth;
}

void QStyleOptionFrame_setMidLineWidth(QStyleOptionFrame* self, int midLineWidth) {
	self->midLineWidth = static_cast<int>(midLineWidth);
}

int QStyleOptionFrame_features(const QStyleOptionFrame* self) {
	QStyleOptionFrame::FrameFeatures features_ret = self->features;
	return static_cast<int>(features_ret);
}

void QStyleOptionFrame_setFeatures(QStyleOptionFrame* self, int features) {
	self->features = static_cast<QStyleOptionFrame::FrameFeatures>(features);
}

int QStyleOptionFrame_frameShape(const QStyleOptionFrame* self) {
	QFrame::Shape frameShape_ret = self->frameShape;
	return static_cast<int>(frameShape_ret);
}

void QStyleOptionFrame_setFrameShape(QStyleOptionFrame* self, int frameShape) {
	self->frameShape = static_cast<QFrame::Shape>(frameShape);
}

void QStyleOptionFrame_delete(QStyleOptionFrame* self) {
	delete self;
}

QStyleOptionTabWidgetFrame* QStyleOptionTabWidgetFrame_new() {
	return new (std::nothrow) QStyleOptionTabWidgetFrame();
}

QStyleOptionTabWidgetFrame* QStyleOptionTabWidgetFrame_new2(QStyleOptionTabWidgetFrame* other) {
	return new (std::nothrow) QStyleOptionTabWidgetFrame(*other);
}

void QStyleOptionTabWidgetFrame_virtbase(QStyleOptionTabWidgetFrame* src, QStyleOption** outptr_QStyleOption) {
	*outptr_QStyleOption = static_cast<QStyleOption*>(src);
}

int QStyleOptionTabWidgetFrame_lineWidth(const QStyleOptionTabWidgetFrame* self) {
	return self->lineWidth;
}

void QStyleOptionTabWidgetFrame_setLineWidth(QStyleOptionTabWidgetFrame* self, int lineWidth) {
	self->lineWidth = static_cast<int>(lineWidth);
}

int QStyleOptionTabWidgetFrame_midLineWidth(const QStyleOptionTabWidgetFrame* self) {
	return self->midLineWidth;
}

void QStyleOptionTabWidgetFrame_setMidLineWidth(QStyleOptionTabWidgetFrame* self, int midLineWidth) {
	self->midLineWidth = static_cast<int>(midLineWidth);
}

int QStyleOptionTabWidgetFrame_shape(const QStyleOptionTabWidgetFrame* self) {
	QTabBar::Shape shape_ret = self->shape;
	return static_cast<int>(shape_ret);
}

void QStyleOptionTabWidgetFrame_setShape(QStyleOptionTabWidgetFrame* self, int shape) {
	self->shape = static_cast<QTabBar::Shape>(shape);
}

QSize* QStyleOptionTabWidgetFrame_tabBarSize(const QStyleOptionTabWidgetFrame* self) {
	return new QSize(self->tabBarSize);
}

void QStyleOptionTabWidgetFrame_setTabBarSize(QStyleOptionTabWidgetFrame* self, QSize* tabBarSize) {
	self->tabBarSize = *tabBarSize;
}

QSize* QStyleOptionTabWidgetFrame_rightCornerWidgetSize(const QStyleOptionTabWidgetFrame* self) {
	return new QSize(self->rightCornerWidgetSize);
}

void QStyleOptionTabWidgetFrame_setRightCornerWidgetSize(QStyleOptionTabWidgetFrame* self, QSize* rightCornerWidgetSize) {
	self->rightCornerWidgetSize = *rightCornerWidgetSize;
}

QSize* QStyleOptionTabWidgetFrame_leftCornerWidgetSize(const QStyleOptionTabWidgetFrame* self) {
	return new QSize(self->leftCornerWidgetSize);
}

void QStyleOptionTabWidgetFrame_setLeftCornerWidgetSize(QStyleOptionTabWidgetFrame* self, QSize* leftCornerWidgetSize) {
	self->leftCornerWidgetSize = *leftCornerWidgetSize;
}

QRect* QStyleOptionTabWidgetFrame_tabBarRect(const QStyleOptionTabWidgetFrame* self) {
	return new QRect(self->tabBarRect);
}

void QStyleOptionTabWidgetFrame_setTabBarRect(QStyleOptionTabWidgetFrame* self, QRect* tabBarRect) {
	self->tabBarRect = *tabBarRect;
}

QRect* QStyleOptionTabWidgetFrame_selectedTabRect(const QStyleOptionTabWidgetFrame* self) {
	return new QRect(self->selectedTabRect);
}

void QStyleOptionTabWidgetFrame_setSelectedTabRect(QStyleOptionTabWidgetFrame* self, QRect* selectedTabRect) {
	self->selectedTabRect = *selectedTabRect;
}

void QStyleOptionTabWidgetFrame_delete(QStyleOptionTabWidgetFrame* self) {
	delete self;
}

QStyleOptionTabBarBase* QStyleOptionTabBarBase_new() {
	return new (std::nothrow) QStyleOptionTabBarBase();
}

QStyleOptionTabBarBase* QStyleOptionTabBarBase_new2(QStyleOptionTabBarBase* other) {
	return new (std::nothrow) QStyleOptionTabBarBase(*other);
}

void QStyleOptionTabBarBase_virtbase(QStyleOptionTabBarBase* src, QStyleOption** outptr_QStyleOption) {
	*outptr_QStyleOption = static_cast<QStyleOption*>(src);
}

int QStyleOptionTabBarBase_shape(const QStyleOptionTabBarBase* self) {
	QTabBar::Shape shape_ret = self->shape;
	return static_cast<int>(shape_ret);
}

void QStyleOptionTabBarBase_setShape(QStyleOptionTabBarBase* self, int shape) {
	self->shape = static_cast<QTabBar::Shape>(shape);
}

QRect* QStyleOptionTabBarBase_tabBarRect(const QStyleOptionTabBarBase* self) {
	return new QRect(self->tabBarRect);
}

void QStyleOptionTabBarBase_setTabBarRect(QStyleOptionTabBarBase* self, QRect* tabBarRect) {
	self->tabBarRect = *tabBarRect;
}

QRect* QStyleOptionTabBarBase_selectedTabRect(const QStyleOptionTabBarBase* self) {
	return new QRect(self->selectedTabRect);
}

void QStyleOptionTabBarBase_setSelectedTabRect(QStyleOptionTabBarBase* self, QRect* selectedTabRect) {
	self->selectedTabRect = *selectedTabRect;
}

bool QStyleOptionTabBarBase_documentMode(const QStyleOptionTabBarBase* self) {
	return self->documentMode;
}

void QStyleOptionTabBarBase_setDocumentMode(QStyleOptionTabBarBase* self, bool documentMode) {
	self->documentMode = documentMode;
}

void QStyleOptionTabBarBase_delete(QStyleOptionTabBarBase* self) {
	delete self;
}

QStyleOptionHeader* QStyleOptionHeader_new() {
	return new (std::nothrow) QStyleOptionHeader();
}

QStyleOptionHeader* QStyleOptionHeader_new2(QStyleOptionHeader* other) {
	return new (std::nothrow) QStyleOptionHeader(*other);
}

void QStyleOptionHeader_virtbase(QStyleOptionHeader* src, QStyleOption** outptr_QStyleOption) {
	*outptr_QStyleOption = static_cast<QStyleOption*>(src);
}

int QStyleOptionHeader_section(const QStyleOptionHeader* self) {
	return self->section;
}

void QStyleOptionHeader_setSection(QStyleOptionHeader* self, int section) {
	self->section = static_cast<int>(section);
}

struct miqt_string QStyleOptionHeader_text(const QStyleOptionHeader* self) {
	QString text_ret = self->text;
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray text_b = text_ret.toUtf8();
	struct miqt_string text_ms;
	text_ms.len = text_b.length();
	text_ms.data = static_cast<char*>(malloc(text_ms.len));
	memcpy(text_ms.data, text_b.data(), text_ms.len);
	return text_ms;
}

void QStyleOptionHeader_setText(QStyleOptionHeader* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->text = text_QString;
}

int QStyleOptionHeader_textAlignment(const QStyleOptionHeader* self) {
	Qt::Alignment textAlignment_ret = self->textAlignment;
	return static_cast<int>(textAlignment_ret);
}

void QStyleOptionHeader_setTextAlignment(QStyleOptionHeader* self, int textAlignment) {
	self->textAlignment = static_cast<Qt::Alignment>(textAlignment);
}

QIcon* QStyleOptionHeader_icon(const QStyleOptionHeader* self) {
	return new QIcon(self->icon);
}

void QStyleOptionHeader_setIcon(QStyleOptionHeader* self, QIcon* icon) {
	self->icon = *icon;
}

int QStyleOptionHeader_iconAlignment(const QStyleOptionHeader* self) {
	Qt::Alignment iconAlignment_ret = self->iconAlignment;
	return static_cast<int>(iconAlignment_ret);
}

void QStyleOptionHeader_setIconAlignment(QStyleOptionHeader* self, int iconAlignment) {
	self->iconAlignment = static_cast<Qt::Alignment>(iconAlignment);
}

int QStyleOptionHeader_position(const QStyleOptionHeader* self) {
	QStyleOptionHeader::SectionPosition position_ret = self->position;
	return static_cast<int>(position_ret);
}

void QStyleOptionHeader_setPosition(QStyleOptionHeader* self, int position) {
	self->position = static_cast<QStyleOptionHeader::SectionPosition>(position);
}

int QStyleOptionHeader_selectedPosition(const QStyleOptionHeader* self) {
	QStyleOptionHeader::SelectedPosition selectedPosition_ret = self->selectedPosition;
	return static_cast<int>(selectedPosition_ret);
}

void QStyleOptionHeader_setSelectedPosition(QStyleOptionHeader* self, int selectedPosition) {
	self->selectedPosition = static_cast<QStyleOptionHeader::SelectedPosition>(selectedPosition);
}

int QStyleOptionHeader_sortIndicator(const QStyleOptionHeader* self) {
	QStyleOptionHeader::SortIndicator sortIndicator_ret = self->sortIndicator;
	return static_cast<int>(sortIndicator_ret);
}

void QStyleOptionHeader_setSortIndicator(QStyleOptionHeader* self, int sortIndicator) {
	self->sortIndicator = static_cast<QStyleOptionHeader::SortIndicator>(sortIndicator);
}

int QStyleOptionHeader_orientation(const QStyleOptionHeader* self) {
	Qt::Orientation orientation_ret = self->orientation;
	return static_cast<int>(orientation_ret);
}

void QStyleOptionHeader_setOrientation(QStyleOptionHeader* self, int orientation) {
	self->orientation = static_cast<Qt::Orientation>(orientation);
}

void QStyleOptionHeader_delete(QStyleOptionHeader* self) {
	delete self;
}

QStyleOptionHeaderV2* QStyleOptionHeaderV2_new() {
	return new (std::nothrow) QStyleOptionHeaderV2();
}

QStyleOptionHeaderV2* QStyleOptionHeaderV2_new2(QStyleOptionHeaderV2* other) {
	return new (std::nothrow) QStyleOptionHeaderV2(*other);
}

void QStyleOptionHeaderV2_virtbase(QStyleOptionHeaderV2* src, QStyleOptionHeader** outptr_QStyleOptionHeader) {
	*outptr_QStyleOptionHeader = static_cast<QStyleOptionHeader*>(src);
}

int QStyleOptionHeaderV2_textElideMode(const QStyleOptionHeaderV2* self) {
	Qt::TextElideMode textElideMode_ret = self->textElideMode;
	return static_cast<int>(textElideMode_ret);
}

void QStyleOptionHeaderV2_setTextElideMode(QStyleOptionHeaderV2* self, int textElideMode) {
	self->textElideMode = static_cast<Qt::TextElideMode>(textElideMode);
}

bool QStyleOptionHeaderV2_isSectionDragTarget(const QStyleOptionHeaderV2* self) {
	return self->isSectionDragTarget;
}

void QStyleOptionHeaderV2_setIsSectionDragTarget(QStyleOptionHeaderV2* self, bool isSectionDragTarget) {
	self->isSectionDragTarget = isSectionDragTarget;
}

int QStyleOptionHeaderV2_unused(const QStyleOptionHeaderV2* self) {
	return self->unused;
}

void QStyleOptionHeaderV2_setUnused(QStyleOptionHeaderV2* self, int unused) {
	self->unused = static_cast<int>(unused);
}

void QStyleOptionHeaderV2_delete(QStyleOptionHeaderV2* self) {
	delete self;
}

QStyleOptionButton* QStyleOptionButton_new() {
	return new (std::nothrow) QStyleOptionButton();
}

QStyleOptionButton* QStyleOptionButton_new2(QStyleOptionButton* other) {
	return new (std::nothrow) QStyleOptionButton(*other);
}

void QStyleOptionButton_virtbase(QStyleOptionButton* src, QStyleOption** outptr_QStyleOption) {
	*outptr_QStyleOption = static_cast<QStyleOption*>(src);
}

int QStyleOptionButton_features(const QStyleOptionButton* self) {
	QStyleOptionButton::ButtonFeatures features_ret = self->features;
	return static_cast<int>(features_ret);
}

void QStyleOptionButton_setFeatures(QStyleOptionButton* self, int features) {
	self->features = static_cast<QStyleOptionButton::ButtonFeatures>(features);
}

struct miqt_string QStyleOptionButton_text(const QStyleOptionButton* self) {
	QString text_ret = self->text;
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray text_b = text_ret.toUtf8();
	struct miqt_string text_ms;
	text_ms.len = text_b.length();
	text_ms.data = static_cast<char*>(malloc(text_ms.len));
	memcpy(text_ms.data, text_b.data(), text_ms.len);
	return text_ms;
}

void QStyleOptionButton_setText(QStyleOptionButton* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->text = text_QString;
}

QIcon* QStyleOptionButton_icon(const QStyleOptionButton* self) {
	return new QIcon(self->icon);
}

void QStyleOptionButton_setIcon(QStyleOptionButton* self, QIcon* icon) {
	self->icon = *icon;
}

QSize* QStyleOptionButton_iconSize(const QStyleOptionButton* self) {
	return new QSize(self->iconSize);
}

void QStyleOptionButton_setIconSize(QStyleOptionButton* self, QSize* iconSize) {
	self->iconSize = *iconSize;
}

void QStyleOptionButton_delete(QStyleOptionButton* self) {
	delete self;
}

QStyleOptionTab* QStyleOptionTab_new() {
	return new (std::nothrow) QStyleOptionTab();
}

QStyleOptionTab* QStyleOptionTab_new2(QStyleOptionTab* other) {
	return new (std::nothrow) QStyleOptionTab(*other);
}

void QStyleOptionTab_virtbase(QStyleOptionTab* src, QStyleOption** outptr_QStyleOption) {
	*outptr_QStyleOption = static_cast<QStyleOption*>(src);
}

int QStyleOptionTab_shape(const QStyleOptionTab* self) {
	QTabBar::Shape shape_ret = self->shape;
	return static_cast<int>(shape_ret);
}

void QStyleOptionTab_setShape(QStyleOptionTab* self, int shape) {
	self->shape = static_cast<QTabBar::Shape>(shape);
}

struct miqt_string QStyleOptionTab_text(const QStyleOptionTab* self) {
	QString text_ret = self->text;
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray text_b = text_ret.toUtf8();
	struct miqt_string text_ms;
	text_ms.len = text_b.length();
	text_ms.data = static_cast<char*>(malloc(text_ms.len));
	memcpy(text_ms.data, text_b.data(), text_ms.len);
	return text_ms;
}

void QStyleOptionTab_setText(QStyleOptionTab* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->text = text_QString;
}

QIcon* QStyleOptionTab_icon(const QStyleOptionTab* self) {
	return new QIcon(self->icon);
}

void QStyleOptionTab_setIcon(QStyleOptionTab* self, QIcon* icon) {
	self->icon = *icon;
}

int QStyleOptionTab_row(const QStyleOptionTab* self) {
	return self->row;
}

void QStyleOptionTab_setRow(QStyleOptionTab* self, int row) {
	self->row = static_cast<int>(row);
}

int QStyleOptionTab_position(const QStyleOptionTab* self) {
	QStyleOptionTab::TabPosition position_ret = self->position;
	return static_cast<int>(position_ret);
}

void QStyleOptionTab_setPosition(QStyleOptionTab* self, int position) {
	self->position = static_cast<QStyleOptionTab::TabPosition>(position);
}

int QStyleOptionTab_selectedPosition(const QStyleOptionTab* self) {
	QStyleOptionTab::SelectedPosition selectedPosition_ret = self->selectedPosition;
	return static_cast<int>(selectedPosition_ret);
}

void QStyleOptionTab_setSelectedPosition(QStyleOptionTab* self, int selectedPosition) {
	self->selectedPosition = static_cast<QStyleOptionTab::SelectedPosition>(selectedPosition);
}

int QStyleOptionTab_cornerWidgets(const QStyleOptionTab* self) {
	QStyleOptionTab::CornerWidgets cornerWidgets_ret = self->cornerWidgets;
	return static_cast<int>(cornerWidgets_ret);
}

void QStyleOptionTab_setCornerWidgets(QStyleOptionTab* self, int cornerWidgets) {
	self->cornerWidgets = static_cast<QStyleOptionTab::CornerWidgets>(cornerWidgets);
}

QSize* QStyleOptionTab_iconSize(const QStyleOptionTab* self) {
	return new QSize(self->iconSize);
}

void QStyleOptionTab_setIconSize(QStyleOptionTab* self, QSize* iconSize) {
	self->iconSize = *iconSize;
}

bool QStyleOptionTab_documentMode(const QStyleOptionTab* self) {
	return self->documentMode;
}

void QStyleOptionTab_setDocumentMode(QStyleOptionTab* self, bool documentMode) {
	self->documentMode = documentMode;
}

QSize* QStyleOptionTab_leftButtonSize(const QStyleOptionTab* self) {
	return new QSize(self->leftButtonSize);
}

void QStyleOptionTab_setLeftButtonSize(QStyleOptionTab* self, QSize* leftButtonSize) {
	self->leftButtonSize = *leftButtonSize;
}

QSize* QStyleOptionTab_rightButtonSize(const QStyleOptionTab* self) {
	return new QSize(self->rightButtonSize);
}

void QStyleOptionTab_setRightButtonSize(QStyleOptionTab* self, QSize* rightButtonSize) {
	self->rightButtonSize = *rightButtonSize;
}

int QStyleOptionTab_features(const QStyleOptionTab* self) {
	QStyleOptionTab::TabFeatures features_ret = self->features;
	return static_cast<int>(features_ret);
}

void QStyleOptionTab_setFeatures(QStyleOptionTab* self, int features) {
	self->features = static_cast<QStyleOptionTab::TabFeatures>(features);
}

int QStyleOptionTab_tabIndex(const QStyleOptionTab* self) {
	return self->tabIndex;
}

void QStyleOptionTab_setTabIndex(QStyleOptionTab* self, int tabIndex) {
	self->tabIndex = static_cast<int>(tabIndex);
}

void QStyleOptionTab_delete(QStyleOptionTab* self) {
	delete self;
}

QStyleOptionToolBar* QStyleOptionToolBar_new() {
	return new (std::nothrow) QStyleOptionToolBar();
}

QStyleOptionToolBar* QStyleOptionToolBar_new2(QStyleOptionToolBar* other) {
	return new (std::nothrow) QStyleOptionToolBar(*other);
}

void QStyleOptionToolBar_virtbase(QStyleOptionToolBar* src, QStyleOption** outptr_QStyleOption) {
	*outptr_QStyleOption = static_cast<QStyleOption*>(src);
}

int QStyleOptionToolBar_positionOfLine(const QStyleOptionToolBar* self) {
	QStyleOptionToolBar::ToolBarPosition positionOfLine_ret = self->positionOfLine;
	return static_cast<int>(positionOfLine_ret);
}

void QStyleOptionToolBar_setPositionOfLine(QStyleOptionToolBar* self, int positionOfLine) {
	self->positionOfLine = static_cast<QStyleOptionToolBar::ToolBarPosition>(positionOfLine);
}

int QStyleOptionToolBar_positionWithinLine(const QStyleOptionToolBar* self) {
	QStyleOptionToolBar::ToolBarPosition positionWithinLine_ret = self->positionWithinLine;
	return static_cast<int>(positionWithinLine_ret);
}

void QStyleOptionToolBar_setPositionWithinLine(QStyleOptionToolBar* self, int positionWithinLine) {
	self->positionWithinLine = static_cast<QStyleOptionToolBar::ToolBarPosition>(positionWithinLine);
}

int QStyleOptionToolBar_toolBarArea(const QStyleOptionToolBar* self) {
	Qt::ToolBarArea toolBarArea_ret = self->toolBarArea;
	return static_cast<int>(toolBarArea_ret);
}

void QStyleOptionToolBar_setToolBarArea(QStyleOptionToolBar* self, int toolBarArea) {
	self->toolBarArea = static_cast<Qt::ToolBarArea>(toolBarArea);
}

int QStyleOptionToolBar_features(const QStyleOptionToolBar* self) {
	QStyleOptionToolBar::ToolBarFeatures features_ret = self->features;
	return static_cast<int>(features_ret);
}

void QStyleOptionToolBar_setFeatures(QStyleOptionToolBar* self, int features) {
	self->features = static_cast<QStyleOptionToolBar::ToolBarFeatures>(features);
}

int QStyleOptionToolBar_lineWidth(const QStyleOptionToolBar* self) {
	return self->lineWidth;
}

void QStyleOptionToolBar_setLineWidth(QStyleOptionToolBar* self, int lineWidth) {
	self->lineWidth = static_cast<int>(lineWidth);
}

int QStyleOptionToolBar_midLineWidth(const QStyleOptionToolBar* self) {
	return self->midLineWidth;
}

void QStyleOptionToolBar_setMidLineWidth(QStyleOptionToolBar* self, int midLineWidth) {
	self->midLineWidth = static_cast<int>(midLineWidth);
}

void QStyleOptionToolBar_delete(QStyleOptionToolBar* self) {
	delete self;
}

QStyleOptionProgressBar* QStyleOptionProgressBar_new() {
	return new (std::nothrow) QStyleOptionProgressBar();
}

QStyleOptionProgressBar* QStyleOptionProgressBar_new2(QStyleOptionProgressBar* other) {
	return new (std::nothrow) QStyleOptionProgressBar(*other);
}

void QStyleOptionProgressBar_virtbase(QStyleOptionProgressBar* src, QStyleOption** outptr_QStyleOption) {
	*outptr_QStyleOption = static_cast<QStyleOption*>(src);
}

int QStyleOptionProgressBar_minimum(const QStyleOptionProgressBar* self) {
	return self->minimum;
}

void QStyleOptionProgressBar_setMinimum(QStyleOptionProgressBar* self, int minimum) {
	self->minimum = static_cast<int>(minimum);
}

int QStyleOptionProgressBar_maximum(const QStyleOptionProgressBar* self) {
	return self->maximum;
}

void QStyleOptionProgressBar_setMaximum(QStyleOptionProgressBar* self, int maximum) {
	self->maximum = static_cast<int>(maximum);
}

int QStyleOptionProgressBar_progress(const QStyleOptionProgressBar* self) {
	return self->progress;
}

void QStyleOptionProgressBar_setProgress(QStyleOptionProgressBar* self, int progress) {
	self->progress = static_cast<int>(progress);
}

struct miqt_string QStyleOptionProgressBar_text(const QStyleOptionProgressBar* self) {
	QString text_ret = self->text;
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray text_b = text_ret.toUtf8();
	struct miqt_string text_ms;
	text_ms.len = text_b.length();
	text_ms.data = static_cast<char*>(malloc(text_ms.len));
	memcpy(text_ms.data, text_b.data(), text_ms.len);
	return text_ms;
}

void QStyleOptionProgressBar_setText(QStyleOptionProgressBar* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->text = text_QString;
}

int QStyleOptionProgressBar_textAlignment(const QStyleOptionProgressBar* self) {
	Qt::Alignment textAlignment_ret = self->textAlignment;
	return static_cast<int>(textAlignment_ret);
}

void QStyleOptionProgressBar_setTextAlignment(QStyleOptionProgressBar* self, int textAlignment) {
	self->textAlignment = static_cast<Qt::Alignment>(textAlignment);
}

bool QStyleOptionProgressBar_textVisible(const QStyleOptionProgressBar* self) {
	return self->textVisible;
}

void QStyleOptionProgressBar_setTextVisible(QStyleOptionProgressBar* self, bool textVisible) {
	self->textVisible = textVisible;
}

bool QStyleOptionProgressBar_invertedAppearance(const QStyleOptionProgressBar* self) {
	return self->invertedAppearance;
}

void QStyleOptionProgressBar_setInvertedAppearance(QStyleOptionProgressBar* self, bool invertedAppearance) {
	self->invertedAppearance = invertedAppearance;
}

bool QStyleOptionProgressBar_bottomToTop(const QStyleOptionProgressBar* self) {
	return self->bottomToTop;
}

void QStyleOptionProgressBar_setBottomToTop(QStyleOptionProgressBar* self, bool bottomToTop) {
	self->bottomToTop = bottomToTop;
}

void QStyleOptionProgressBar_delete(QStyleOptionProgressBar* self) {
	delete self;
}

QStyleOptionMenuItem* QStyleOptionMenuItem_new() {
	return new (std::nothrow) QStyleOptionMenuItem();
}

QStyleOptionMenuItem* QStyleOptionMenuItem_new2(QStyleOptionMenuItem* other) {
	return new (std::nothrow) QStyleOptionMenuItem(*other);
}

void QStyleOptionMenuItem_virtbase(QStyleOptionMenuItem* src, QStyleOption** outptr_QStyleOption) {
	*outptr_QStyleOption = static_cast<QStyleOption*>(src);
}

int QStyleOptionMenuItem_menuItemType(const QStyleOptionMenuItem* self) {
	QStyleOptionMenuItem::MenuItemType menuItemType_ret = self->menuItemType;
	return static_cast<int>(menuItemType_ret);
}

void QStyleOptionMenuItem_setMenuItemType(QStyleOptionMenuItem* self, int menuItemType) {
	self->menuItemType = static_cast<QStyleOptionMenuItem::MenuItemType>(menuItemType);
}

int QStyleOptionMenuItem_checkType(const QStyleOptionMenuItem* self) {
	QStyleOptionMenuItem::CheckType checkType_ret = self->checkType;
	return static_cast<int>(checkType_ret);
}

void QStyleOptionMenuItem_setCheckType(QStyleOptionMenuItem* self, int checkType) {
	self->checkType = static_cast<QStyleOptionMenuItem::CheckType>(checkType);
}

bool QStyleOptionMenuItem_checked(const QStyleOptionMenuItem* self) {
	return self->checked;
}

void QStyleOptionMenuItem_setChecked(QStyleOptionMenuItem* self, bool checked) {
	self->checked = checked;
}

bool QStyleOptionMenuItem_menuHasCheckableItems(const QStyleOptionMenuItem* self) {
	return self->menuHasCheckableItems;
}

void QStyleOptionMenuItem_setMenuHasCheckableItems(QStyleOptionMenuItem* self, bool menuHasCheckableItems) {
	self->menuHasCheckableItems = menuHasCheckableItems;
}

QRect* QStyleOptionMenuItem_menuRect(const QStyleOptionMenuItem* self) {
	return new QRect(self->menuRect);
}

void QStyleOptionMenuItem_setMenuRect(QStyleOptionMenuItem* self, QRect* menuRect) {
	self->menuRect = *menuRect;
}

struct miqt_string QStyleOptionMenuItem_text(const QStyleOptionMenuItem* self) {
	QString text_ret = self->text;
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray text_b = text_ret.toUtf8();
	struct miqt_string text_ms;
	text_ms.len = text_b.length();
	text_ms.data = static_cast<char*>(malloc(text_ms.len));
	memcpy(text_ms.data, text_b.data(), text_ms.len);
	return text_ms;
}

void QStyleOptionMenuItem_setText(QStyleOptionMenuItem* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->text = text_QString;
}

QIcon* QStyleOptionMenuItem_icon(const QStyleOptionMenuItem* self) {
	return new QIcon(self->icon);
}

void QStyleOptionMenuItem_setIcon(QStyleOptionMenuItem* self, QIcon* icon) {
	self->icon = *icon;
}

int QStyleOptionMenuItem_maxIconWidth(const QStyleOptionMenuItem* self) {
	return self->maxIconWidth;
}

void QStyleOptionMenuItem_setMaxIconWidth(QStyleOptionMenuItem* self, int maxIconWidth) {
	self->maxIconWidth = static_cast<int>(maxIconWidth);
}

int QStyleOptionMenuItem_reservedShortcutWidth(const QStyleOptionMenuItem* self) {
	return self->reservedShortcutWidth;
}

void QStyleOptionMenuItem_setReservedShortcutWidth(QStyleOptionMenuItem* self, int reservedShortcutWidth) {
	self->reservedShortcutWidth = static_cast<int>(reservedShortcutWidth);
}

QFont* QStyleOptionMenuItem_font(const QStyleOptionMenuItem* self) {
	return new QFont(self->font);
}

void QStyleOptionMenuItem_setFont(QStyleOptionMenuItem* self, QFont* font) {
	self->font = *font;
}

void QStyleOptionMenuItem_delete(QStyleOptionMenuItem* self) {
	delete self;
}

QStyleOptionDockWidget* QStyleOptionDockWidget_new() {
	return new (std::nothrow) QStyleOptionDockWidget();
}

QStyleOptionDockWidget* QStyleOptionDockWidget_new2(QStyleOptionDockWidget* other) {
	return new (std::nothrow) QStyleOptionDockWidget(*other);
}

void QStyleOptionDockWidget_virtbase(QStyleOptionDockWidget* src, QStyleOption** outptr_QStyleOption) {
	*outptr_QStyleOption = static_cast<QStyleOption*>(src);
}

struct miqt_string QStyleOptionDockWidget_title(const QStyleOptionDockWidget* self) {
	QString title_ret = self->title;
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray title_b = title_ret.toUtf8();
	struct miqt_string title_ms;
	title_ms.len = title_b.length();
	title_ms.data = static_cast<char*>(malloc(title_ms.len));
	memcpy(title_ms.data, title_b.data(), title_ms.len);
	return title_ms;
}

void QStyleOptionDockWidget_setTitle(QStyleOptionDockWidget* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->title = title_QString;
}

bool QStyleOptionDockWidget_closable(const QStyleOptionDockWidget* self) {
	return self->closable;
}

void QStyleOptionDockWidget_setClosable(QStyleOptionDockWidget* self, bool closable) {
	self->closable = closable;
}

bool QStyleOptionDockWidget_movable(const QStyleOptionDockWidget* self) {
	return self->movable;
}

void QStyleOptionDockWidget_setMovable(QStyleOptionDockWidget* self, bool movable) {
	self->movable = movable;
}

bool QStyleOptionDockWidget_floatable(const QStyleOptionDockWidget* self) {
	return self->floatable;
}

void QStyleOptionDockWidget_setFloatable(QStyleOptionDockWidget* self, bool floatable) {
	self->floatable = floatable;
}

bool QStyleOptionDockWidget_verticalTitleBar(const QStyleOptionDockWidget* self) {
	return self->verticalTitleBar;
}

void QStyleOptionDockWidget_setVerticalTitleBar(QStyleOptionDockWidget* self, bool verticalTitleBar) {
	self->verticalTitleBar = verticalTitleBar;
}

void QStyleOptionDockWidget_delete(QStyleOptionDockWidget* self) {
	delete self;
}

QStyleOptionViewItem* QStyleOptionViewItem_new() {
	return new (std::nothrow) QStyleOptionViewItem();
}

QStyleOptionViewItem* QStyleOptionViewItem_new2(QStyleOptionViewItem* other) {
	return new (std::nothrow) QStyleOptionViewItem(*other);
}

void QStyleOptionViewItem_virtbase(QStyleOptionViewItem* src, QStyleOption** outptr_QStyleOption) {
	*outptr_QStyleOption = static_cast<QStyleOption*>(src);
}

int QStyleOptionViewItem_displayAlignment(const QStyleOptionViewItem* self) {
	Qt::Alignment displayAlignment_ret = self->displayAlignment;
	return static_cast<int>(displayAlignment_ret);
}

void QStyleOptionViewItem_setDisplayAlignment(QStyleOptionViewItem* self, int displayAlignment) {
	self->displayAlignment = static_cast<Qt::Alignment>(displayAlignment);
}

int QStyleOptionViewItem_decorationAlignment(const QStyleOptionViewItem* self) {
	Qt::Alignment decorationAlignment_ret = self->decorationAlignment;
	return static_cast<int>(decorationAlignment_ret);
}

void QStyleOptionViewItem_setDecorationAlignment(QStyleOptionViewItem* self, int decorationAlignment) {
	self->decorationAlignment = static_cast<Qt::Alignment>(decorationAlignment);
}

int QStyleOptionViewItem_textElideMode(const QStyleOptionViewItem* self) {
	Qt::TextElideMode textElideMode_ret = self->textElideMode;
	return static_cast<int>(textElideMode_ret);
}

void QStyleOptionViewItem_setTextElideMode(QStyleOptionViewItem* self, int textElideMode) {
	self->textElideMode = static_cast<Qt::TextElideMode>(textElideMode);
}

int QStyleOptionViewItem_decorationPosition(const QStyleOptionViewItem* self) {
	QStyleOptionViewItem::Position decorationPosition_ret = self->decorationPosition;
	return static_cast<int>(decorationPosition_ret);
}

void QStyleOptionViewItem_setDecorationPosition(QStyleOptionViewItem* self, int decorationPosition) {
	self->decorationPosition = static_cast<QStyleOptionViewItem::Position>(decorationPosition);
}

QSize* QStyleOptionViewItem_decorationSize(const QStyleOptionViewItem* self) {
	return new QSize(self->decorationSize);
}

void QStyleOptionViewItem_setDecorationSize(QStyleOptionViewItem* self, QSize* decorationSize) {
	self->decorationSize = *decorationSize;
}

QFont* QStyleOptionViewItem_font(const QStyleOptionViewItem* self) {
	return new QFont(self->font);
}

void QStyleOptionViewItem_setFont(QStyleOptionViewItem* self, QFont* font) {
	self->font = *font;
}

bool QStyleOptionViewItem_showDecorationSelected(const QStyleOptionViewItem* self) {
	return self->showDecorationSelected;
}

void QStyleOptionViewItem_setShowDecorationSelected(QStyleOptionViewItem* self, bool showDecorationSelected) {
	self->showDecorationSelected = showDecorationSelected;
}

int QStyleOptionViewItem_features(const QStyleOptionViewItem* self) {
	QStyleOptionViewItem::ViewItemFeatures features_ret = self->features;
	return static_cast<int>(features_ret);
}

void QStyleOptionViewItem_setFeatures(QStyleOptionViewItem* self, int features) {
	self->features = static_cast<QStyleOptionViewItem::ViewItemFeatures>(features);
}

QLocale* QStyleOptionViewItem_locale(const QStyleOptionViewItem* self) {
	return new QLocale(self->locale);
}

void QStyleOptionViewItem_setLocale(QStyleOptionViewItem* self, QLocale* locale) {
	self->locale = *locale;
}

QWidget* QStyleOptionViewItem_widget(const QStyleOptionViewItem* self) {
	return (QWidget*) self->widget;
}

void QStyleOptionViewItem_setWidget(QStyleOptionViewItem* self, QWidget* widget) {
	self->widget = widget;
}

QModelIndex* QStyleOptionViewItem_index(const QStyleOptionViewItem* self) {
	return new QModelIndex(self->index);
}

void QStyleOptionViewItem_setIndex(QStyleOptionViewItem* self, QModelIndex* index) {
	self->index = *index;
}

int QStyleOptionViewItem_checkState(const QStyleOptionViewItem* self) {
	Qt::CheckState checkState_ret = self->checkState;
	return static_cast<int>(checkState_ret);
}

void QStyleOptionViewItem_setCheckState(QStyleOptionViewItem* self, int checkState) {
	self->checkState = static_cast<Qt::CheckState>(checkState);
}

QIcon* QStyleOptionViewItem_icon(const QStyleOptionViewItem* self) {
	return new QIcon(self->icon);
}

void QStyleOptionViewItem_setIcon(QStyleOptionViewItem* self, QIcon* icon) {
	self->icon = *icon;
}

struct miqt_string QStyleOptionViewItem_text(const QStyleOptionViewItem* self) {
	QString text_ret = self->text;
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray text_b = text_ret.toUtf8();
	struct miqt_string text_ms;
	text_ms.len = text_b.length();
	text_ms.data = static_cast<char*>(malloc(text_ms.len));
	memcpy(text_ms.data, text_b.data(), text_ms.len);
	return text_ms;
}

void QStyleOptionViewItem_setText(QStyleOptionViewItem* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->text = text_QString;
}

int QStyleOptionViewItem_viewItemPosition(const QStyleOptionViewItem* self) {
	QStyleOptionViewItem::ViewItemPosition viewItemPosition_ret = self->viewItemPosition;
	return static_cast<int>(viewItemPosition_ret);
}

void QStyleOptionViewItem_setViewItemPosition(QStyleOptionViewItem* self, int viewItemPosition) {
	self->viewItemPosition = static_cast<QStyleOptionViewItem::ViewItemPosition>(viewItemPosition);
}

QBrush* QStyleOptionViewItem_backgroundBrush(const QStyleOptionViewItem* self) {
	return new QBrush(self->backgroundBrush);
}

void QStyleOptionViewItem_setBackgroundBrush(QStyleOptionViewItem* self, QBrush* backgroundBrush) {
	self->backgroundBrush = *backgroundBrush;
}

void QStyleOptionViewItem_delete(QStyleOptionViewItem* self) {
	delete self;
}

QStyleOptionToolBox* QStyleOptionToolBox_new() {
	return new (std::nothrow) QStyleOptionToolBox();
}

QStyleOptionToolBox* QStyleOptionToolBox_new2(QStyleOptionToolBox* other) {
	return new (std::nothrow) QStyleOptionToolBox(*other);
}

void QStyleOptionToolBox_virtbase(QStyleOptionToolBox* src, QStyleOption** outptr_QStyleOption) {
	*outptr_QStyleOption = static_cast<QStyleOption*>(src);
}

struct miqt_string QStyleOptionToolBox_text(const QStyleOptionToolBox* self) {
	QString text_ret = self->text;
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray text_b = text_ret.toUtf8();
	struct miqt_string text_ms;
	text_ms.len = text_b.length();
	text_ms.data = static_cast<char*>(malloc(text_ms.len));
	memcpy(text_ms.data, text_b.data(), text_ms.len);
	return text_ms;
}

void QStyleOptionToolBox_setText(QStyleOptionToolBox* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->text = text_QString;
}

QIcon* QStyleOptionToolBox_icon(const QStyleOptionToolBox* self) {
	return new QIcon(self->icon);
}

void QStyleOptionToolBox_setIcon(QStyleOptionToolBox* self, QIcon* icon) {
	self->icon = *icon;
}

int QStyleOptionToolBox_position(const QStyleOptionToolBox* self) {
	QStyleOptionToolBox::TabPosition position_ret = self->position;
	return static_cast<int>(position_ret);
}

void QStyleOptionToolBox_setPosition(QStyleOptionToolBox* self, int position) {
	self->position = static_cast<QStyleOptionToolBox::TabPosition>(position);
}

int QStyleOptionToolBox_selectedPosition(const QStyleOptionToolBox* self) {
	QStyleOptionToolBox::SelectedPosition selectedPosition_ret = self->selectedPosition;
	return static_cast<int>(selectedPosition_ret);
}

void QStyleOptionToolBox_setSelectedPosition(QStyleOptionToolBox* self, int selectedPosition) {
	self->selectedPosition = static_cast<QStyleOptionToolBox::SelectedPosition>(selectedPosition);
}

void QStyleOptionToolBox_delete(QStyleOptionToolBox* self) {
	delete self;
}

QStyleOptionRubberBand* QStyleOptionRubberBand_new() {
	return new (std::nothrow) QStyleOptionRubberBand();
}

QStyleOptionRubberBand* QStyleOptionRubberBand_new2(QStyleOptionRubberBand* other) {
	return new (std::nothrow) QStyleOptionRubberBand(*other);
}

void QStyleOptionRubberBand_virtbase(QStyleOptionRubberBand* src, QStyleOption** outptr_QStyleOption) {
	*outptr_QStyleOption = static_cast<QStyleOption*>(src);
}

int QStyleOptionRubberBand_shape(const QStyleOptionRubberBand* self) {
	QRubberBand::Shape shape_ret = self->shape;
	return static_cast<int>(shape_ret);
}

void QStyleOptionRubberBand_setShape(QStyleOptionRubberBand* self, int shape) {
	self->shape = static_cast<QRubberBand::Shape>(shape);
}

bool QStyleOptionRubberBand_opaque(const QStyleOptionRubberBand* self) {
	return self->opaque;
}

void QStyleOptionRubberBand_setOpaque(QStyleOptionRubberBand* self, bool opaque) {
	self->opaque = opaque;
}

void QStyleOptionRubberBand_delete(QStyleOptionRubberBand* self) {
	delete self;
}

QStyleOptionComplex* QStyleOptionComplex_new() {
	return new (std::nothrow) QStyleOptionComplex();
}

QStyleOptionComplex* QStyleOptionComplex_new2(QStyleOptionComplex* other) {
	return new (std::nothrow) QStyleOptionComplex(*other);
}

QStyleOptionComplex* QStyleOptionComplex_new3(int version) {
	return new (std::nothrow) QStyleOptionComplex(static_cast<int>(version));
}

QStyleOptionComplex* QStyleOptionComplex_new4(int version, int type) {
	return new (std::nothrow) QStyleOptionComplex(static_cast<int>(version), static_cast<int>(type));
}

void QStyleOptionComplex_virtbase(QStyleOptionComplex* src, QStyleOption** outptr_QStyleOption) {
	*outptr_QStyleOption = static_cast<QStyleOption*>(src);
}

int QStyleOptionComplex_subControls(const QStyleOptionComplex* self) {
	QStyle::SubControls subControls_ret = self->subControls;
	return static_cast<int>(subControls_ret);
}

void QStyleOptionComplex_setSubControls(QStyleOptionComplex* self, int subControls) {
	self->subControls = static_cast<QStyle::SubControls>(subControls);
}

int QStyleOptionComplex_activeSubControls(const QStyleOptionComplex* self) {
	QStyle::SubControls activeSubControls_ret = self->activeSubControls;
	return static_cast<int>(activeSubControls_ret);
}

void QStyleOptionComplex_setActiveSubControls(QStyleOptionComplex* self, int activeSubControls) {
	self->activeSubControls = static_cast<QStyle::SubControls>(activeSubControls);
}

void QStyleOptionComplex_delete(QStyleOptionComplex* self) {
	delete self;
}

QStyleOptionSlider* QStyleOptionSlider_new() {
	return new (std::nothrow) QStyleOptionSlider();
}

QStyleOptionSlider* QStyleOptionSlider_new2(QStyleOptionSlider* other) {
	return new (std::nothrow) QStyleOptionSlider(*other);
}

void QStyleOptionSlider_virtbase(QStyleOptionSlider* src, QStyleOptionComplex** outptr_QStyleOptionComplex) {
	*outptr_QStyleOptionComplex = static_cast<QStyleOptionComplex*>(src);
}

int QStyleOptionSlider_orientation(const QStyleOptionSlider* self) {
	Qt::Orientation orientation_ret = self->orientation;
	return static_cast<int>(orientation_ret);
}

void QStyleOptionSlider_setOrientation(QStyleOptionSlider* self, int orientation) {
	self->orientation = static_cast<Qt::Orientation>(orientation);
}

int QStyleOptionSlider_minimum(const QStyleOptionSlider* self) {
	return self->minimum;
}

void QStyleOptionSlider_setMinimum(QStyleOptionSlider* self, int minimum) {
	self->minimum = static_cast<int>(minimum);
}

int QStyleOptionSlider_maximum(const QStyleOptionSlider* self) {
	return self->maximum;
}

void QStyleOptionSlider_setMaximum(QStyleOptionSlider* self, int maximum) {
	self->maximum = static_cast<int>(maximum);
}

int QStyleOptionSlider_tickPosition(const QStyleOptionSlider* self) {
	QSlider::TickPosition tickPosition_ret = self->tickPosition;
	return static_cast<int>(tickPosition_ret);
}

void QStyleOptionSlider_setTickPosition(QStyleOptionSlider* self, int tickPosition) {
	self->tickPosition = static_cast<QSlider::TickPosition>(tickPosition);
}

int QStyleOptionSlider_tickInterval(const QStyleOptionSlider* self) {
	return self->tickInterval;
}

void QStyleOptionSlider_setTickInterval(QStyleOptionSlider* self, int tickInterval) {
	self->tickInterval = static_cast<int>(tickInterval);
}

bool QStyleOptionSlider_upsideDown(const QStyleOptionSlider* self) {
	return self->upsideDown;
}

void QStyleOptionSlider_setUpsideDown(QStyleOptionSlider* self, bool upsideDown) {
	self->upsideDown = upsideDown;
}

int QStyleOptionSlider_sliderPosition(const QStyleOptionSlider* self) {
	return self->sliderPosition;
}

void QStyleOptionSlider_setSliderPosition(QStyleOptionSlider* self, int sliderPosition) {
	self->sliderPosition = static_cast<int>(sliderPosition);
}

int QStyleOptionSlider_sliderValue(const QStyleOptionSlider* self) {
	return self->sliderValue;
}

void QStyleOptionSlider_setSliderValue(QStyleOptionSlider* self, int sliderValue) {
	self->sliderValue = static_cast<int>(sliderValue);
}

int QStyleOptionSlider_singleStep(const QStyleOptionSlider* self) {
	return self->singleStep;
}

void QStyleOptionSlider_setSingleStep(QStyleOptionSlider* self, int singleStep) {
	self->singleStep = static_cast<int>(singleStep);
}

int QStyleOptionSlider_pageStep(const QStyleOptionSlider* self) {
	return self->pageStep;
}

void QStyleOptionSlider_setPageStep(QStyleOptionSlider* self, int pageStep) {
	self->pageStep = static_cast<int>(pageStep);
}

double QStyleOptionSlider_notchTarget(const QStyleOptionSlider* self) {
	qreal notchTarget_ret = self->notchTarget;
	return static_cast<double>(notchTarget_ret);
}

void QStyleOptionSlider_setNotchTarget(QStyleOptionSlider* self, double notchTarget) {
	self->notchTarget = static_cast<qreal>(notchTarget);
}

bool QStyleOptionSlider_dialWrapping(const QStyleOptionSlider* self) {
	return self->dialWrapping;
}

void QStyleOptionSlider_setDialWrapping(QStyleOptionSlider* self, bool dialWrapping) {
	self->dialWrapping = dialWrapping;
}

int QStyleOptionSlider_keyboardModifiers(const QStyleOptionSlider* self) {
	Qt::KeyboardModifiers keyboardModifiers_ret = self->keyboardModifiers;
	return static_cast<int>(keyboardModifiers_ret);
}

void QStyleOptionSlider_setKeyboardModifiers(QStyleOptionSlider* self, int keyboardModifiers) {
	self->keyboardModifiers = static_cast<Qt::KeyboardModifiers>(keyboardModifiers);
}

void QStyleOptionSlider_delete(QStyleOptionSlider* self) {
	delete self;
}

QStyleOptionSpinBox* QStyleOptionSpinBox_new() {
	return new (std::nothrow) QStyleOptionSpinBox();
}

QStyleOptionSpinBox* QStyleOptionSpinBox_new2(QStyleOptionSpinBox* other) {
	return new (std::nothrow) QStyleOptionSpinBox(*other);
}

void QStyleOptionSpinBox_virtbase(QStyleOptionSpinBox* src, QStyleOptionComplex** outptr_QStyleOptionComplex) {
	*outptr_QStyleOptionComplex = static_cast<QStyleOptionComplex*>(src);
}

int QStyleOptionSpinBox_buttonSymbols(const QStyleOptionSpinBox* self) {
	QAbstractSpinBox::ButtonSymbols buttonSymbols_ret = self->buttonSymbols;
	return static_cast<int>(buttonSymbols_ret);
}

void QStyleOptionSpinBox_setButtonSymbols(QStyleOptionSpinBox* self, int buttonSymbols) {
	self->buttonSymbols = static_cast<QAbstractSpinBox::ButtonSymbols>(buttonSymbols);
}

int QStyleOptionSpinBox_stepEnabled(const QStyleOptionSpinBox* self) {
	QAbstractSpinBox::StepEnabled stepEnabled_ret = self->stepEnabled;
	return static_cast<int>(stepEnabled_ret);
}

void QStyleOptionSpinBox_setStepEnabled(QStyleOptionSpinBox* self, int stepEnabled) {
	self->stepEnabled = static_cast<QAbstractSpinBox::StepEnabled>(stepEnabled);
}

bool QStyleOptionSpinBox_frame(const QStyleOptionSpinBox* self) {
	return self->frame;
}

void QStyleOptionSpinBox_setFrame(QStyleOptionSpinBox* self, bool frame) {
	self->frame = frame;
}

void QStyleOptionSpinBox_delete(QStyleOptionSpinBox* self) {
	delete self;
}

QStyleOptionToolButton* QStyleOptionToolButton_new() {
	return new (std::nothrow) QStyleOptionToolButton();
}

QStyleOptionToolButton* QStyleOptionToolButton_new2(QStyleOptionToolButton* other) {
	return new (std::nothrow) QStyleOptionToolButton(*other);
}

void QStyleOptionToolButton_virtbase(QStyleOptionToolButton* src, QStyleOptionComplex** outptr_QStyleOptionComplex) {
	*outptr_QStyleOptionComplex = static_cast<QStyleOptionComplex*>(src);
}

int QStyleOptionToolButton_features(const QStyleOptionToolButton* self) {
	QStyleOptionToolButton::ToolButtonFeatures features_ret = self->features;
	return static_cast<int>(features_ret);
}

void QStyleOptionToolButton_setFeatures(QStyleOptionToolButton* self, int features) {
	self->features = static_cast<QStyleOptionToolButton::ToolButtonFeatures>(features);
}

QIcon* QStyleOptionToolButton_icon(const QStyleOptionToolButton* self) {
	return new QIcon(self->icon);
}

void QStyleOptionToolButton_setIcon(QStyleOptionToolButton* self, QIcon* icon) {
	self->icon = *icon;
}

QSize* QStyleOptionToolButton_iconSize(const QStyleOptionToolButton* self) {
	return new QSize(self->iconSize);
}

void QStyleOptionToolButton_setIconSize(QStyleOptionToolButton* self, QSize* iconSize) {
	self->iconSize = *iconSize;
}

struct miqt_string QStyleOptionToolButton_text(const QStyleOptionToolButton* self) {
	QString text_ret = self->text;
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray text_b = text_ret.toUtf8();
	struct miqt_string text_ms;
	text_ms.len = text_b.length();
	text_ms.data = static_cast<char*>(malloc(text_ms.len));
	memcpy(text_ms.data, text_b.data(), text_ms.len);
	return text_ms;
}

void QStyleOptionToolButton_setText(QStyleOptionToolButton* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->text = text_QString;
}

int QStyleOptionToolButton_arrowType(const QStyleOptionToolButton* self) {
	Qt::ArrowType arrowType_ret = self->arrowType;
	return static_cast<int>(arrowType_ret);
}

void QStyleOptionToolButton_setArrowType(QStyleOptionToolButton* self, int arrowType) {
	self->arrowType = static_cast<Qt::ArrowType>(arrowType);
}

int QStyleOptionToolButton_toolButtonStyle(const QStyleOptionToolButton* self) {
	Qt::ToolButtonStyle toolButtonStyle_ret = self->toolButtonStyle;
	return static_cast<int>(toolButtonStyle_ret);
}

void QStyleOptionToolButton_setToolButtonStyle(QStyleOptionToolButton* self, int toolButtonStyle) {
	self->toolButtonStyle = static_cast<Qt::ToolButtonStyle>(toolButtonStyle);
}

QPoint* QStyleOptionToolButton_pos(const QStyleOptionToolButton* self) {
	return new QPoint(self->pos);
}

void QStyleOptionToolButton_setPos(QStyleOptionToolButton* self, QPoint* pos) {
	self->pos = *pos;
}

QFont* QStyleOptionToolButton_font(const QStyleOptionToolButton* self) {
	return new QFont(self->font);
}

void QStyleOptionToolButton_setFont(QStyleOptionToolButton* self, QFont* font) {
	self->font = *font;
}

void QStyleOptionToolButton_delete(QStyleOptionToolButton* self) {
	delete self;
}

QStyleOptionComboBox* QStyleOptionComboBox_new() {
	return new (std::nothrow) QStyleOptionComboBox();
}

QStyleOptionComboBox* QStyleOptionComboBox_new2(QStyleOptionComboBox* other) {
	return new (std::nothrow) QStyleOptionComboBox(*other);
}

void QStyleOptionComboBox_virtbase(QStyleOptionComboBox* src, QStyleOptionComplex** outptr_QStyleOptionComplex) {
	*outptr_QStyleOptionComplex = static_cast<QStyleOptionComplex*>(src);
}

bool QStyleOptionComboBox_editable(const QStyleOptionComboBox* self) {
	return self->editable;
}

void QStyleOptionComboBox_setEditable(QStyleOptionComboBox* self, bool editable) {
	self->editable = editable;
}

QRect* QStyleOptionComboBox_popupRect(const QStyleOptionComboBox* self) {
	return new QRect(self->popupRect);
}

void QStyleOptionComboBox_setPopupRect(QStyleOptionComboBox* self, QRect* popupRect) {
	self->popupRect = *popupRect;
}

bool QStyleOptionComboBox_frame(const QStyleOptionComboBox* self) {
	return self->frame;
}

void QStyleOptionComboBox_setFrame(QStyleOptionComboBox* self, bool frame) {
	self->frame = frame;
}

struct miqt_string QStyleOptionComboBox_currentText(const QStyleOptionComboBox* self) {
	QString currentText_ret = self->currentText;
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray currentText_b = currentText_ret.toUtf8();
	struct miqt_string currentText_ms;
	currentText_ms.len = currentText_b.length();
	currentText_ms.data = static_cast<char*>(malloc(currentText_ms.len));
	memcpy(currentText_ms.data, currentText_b.data(), currentText_ms.len);
	return currentText_ms;
}

void QStyleOptionComboBox_setCurrentText(QStyleOptionComboBox* self, struct miqt_string currentText) {
	QString currentText_QString = QString::fromUtf8(currentText.data, currentText.len);
	self->currentText = currentText_QString;
}

QIcon* QStyleOptionComboBox_currentIcon(const QStyleOptionComboBox* self) {
	return new QIcon(self->currentIcon);
}

void QStyleOptionComboBox_setCurrentIcon(QStyleOptionComboBox* self, QIcon* currentIcon) {
	self->currentIcon = *currentIcon;
}

QSize* QStyleOptionComboBox_iconSize(const QStyleOptionComboBox* self) {
	return new QSize(self->iconSize);
}

void QStyleOptionComboBox_setIconSize(QStyleOptionComboBox* self, QSize* iconSize) {
	self->iconSize = *iconSize;
}

int QStyleOptionComboBox_textAlignment(const QStyleOptionComboBox* self) {
	Qt::Alignment textAlignment_ret = self->textAlignment;
	return static_cast<int>(textAlignment_ret);
}

void QStyleOptionComboBox_setTextAlignment(QStyleOptionComboBox* self, int textAlignment) {
	self->textAlignment = static_cast<Qt::Alignment>(textAlignment);
}

void QStyleOptionComboBox_delete(QStyleOptionComboBox* self) {
	delete self;
}

QStyleOptionTitleBar* QStyleOptionTitleBar_new() {
	return new (std::nothrow) QStyleOptionTitleBar();
}

QStyleOptionTitleBar* QStyleOptionTitleBar_new2(QStyleOptionTitleBar* other) {
	return new (std::nothrow) QStyleOptionTitleBar(*other);
}

void QStyleOptionTitleBar_virtbase(QStyleOptionTitleBar* src, QStyleOptionComplex** outptr_QStyleOptionComplex) {
	*outptr_QStyleOptionComplex = static_cast<QStyleOptionComplex*>(src);
}

struct miqt_string QStyleOptionTitleBar_text(const QStyleOptionTitleBar* self) {
	QString text_ret = self->text;
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray text_b = text_ret.toUtf8();
	struct miqt_string text_ms;
	text_ms.len = text_b.length();
	text_ms.data = static_cast<char*>(malloc(text_ms.len));
	memcpy(text_ms.data, text_b.data(), text_ms.len);
	return text_ms;
}

void QStyleOptionTitleBar_setText(QStyleOptionTitleBar* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->text = text_QString;
}

QIcon* QStyleOptionTitleBar_icon(const QStyleOptionTitleBar* self) {
	return new QIcon(self->icon);
}

void QStyleOptionTitleBar_setIcon(QStyleOptionTitleBar* self, QIcon* icon) {
	self->icon = *icon;
}

int QStyleOptionTitleBar_titleBarState(const QStyleOptionTitleBar* self) {
	return self->titleBarState;
}

void QStyleOptionTitleBar_setTitleBarState(QStyleOptionTitleBar* self, int titleBarState) {
	self->titleBarState = static_cast<int>(titleBarState);
}

int QStyleOptionTitleBar_titleBarFlags(const QStyleOptionTitleBar* self) {
	Qt::WindowFlags titleBarFlags_ret = self->titleBarFlags;
	return static_cast<int>(titleBarFlags_ret);
}

void QStyleOptionTitleBar_setTitleBarFlags(QStyleOptionTitleBar* self, int titleBarFlags) {
	self->titleBarFlags = static_cast<Qt::WindowFlags>(titleBarFlags);
}

void QStyleOptionTitleBar_delete(QStyleOptionTitleBar* self) {
	delete self;
}

QStyleOptionGroupBox* QStyleOptionGroupBox_new() {
	return new (std::nothrow) QStyleOptionGroupBox();
}

QStyleOptionGroupBox* QStyleOptionGroupBox_new2(QStyleOptionGroupBox* other) {
	return new (std::nothrow) QStyleOptionGroupBox(*other);
}

void QStyleOptionGroupBox_virtbase(QStyleOptionGroupBox* src, QStyleOptionComplex** outptr_QStyleOptionComplex) {
	*outptr_QStyleOptionComplex = static_cast<QStyleOptionComplex*>(src);
}

int QStyleOptionGroupBox_features(const QStyleOptionGroupBox* self) {
	QStyleOptionFrame::FrameFeatures features_ret = self->features;
	return static_cast<int>(features_ret);
}

void QStyleOptionGroupBox_setFeatures(QStyleOptionGroupBox* self, int features) {
	self->features = static_cast<QStyleOptionFrame::FrameFeatures>(features);
}

struct miqt_string QStyleOptionGroupBox_text(const QStyleOptionGroupBox* self) {
	QString text_ret = self->text;
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray text_b = text_ret.toUtf8();
	struct miqt_string text_ms;
	text_ms.len = text_b.length();
	text_ms.data = static_cast<char*>(malloc(text_ms.len));
	memcpy(text_ms.data, text_b.data(), text_ms.len);
	return text_ms;
}

void QStyleOptionGroupBox_setText(QStyleOptionGroupBox* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->text = text_QString;
}

int QStyleOptionGroupBox_textAlignment(const QStyleOptionGroupBox* self) {
	Qt::Alignment textAlignment_ret = self->textAlignment;
	return static_cast<int>(textAlignment_ret);
}

void QStyleOptionGroupBox_setTextAlignment(QStyleOptionGroupBox* self, int textAlignment) {
	self->textAlignment = static_cast<Qt::Alignment>(textAlignment);
}

QColor* QStyleOptionGroupBox_textColor(const QStyleOptionGroupBox* self) {
	return new QColor(self->textColor);
}

void QStyleOptionGroupBox_setTextColor(QStyleOptionGroupBox* self, QColor* textColor) {
	self->textColor = *textColor;
}

int QStyleOptionGroupBox_lineWidth(const QStyleOptionGroupBox* self) {
	return self->lineWidth;
}

void QStyleOptionGroupBox_setLineWidth(QStyleOptionGroupBox* self, int lineWidth) {
	self->lineWidth = static_cast<int>(lineWidth);
}

int QStyleOptionGroupBox_midLineWidth(const QStyleOptionGroupBox* self) {
	return self->midLineWidth;
}

void QStyleOptionGroupBox_setMidLineWidth(QStyleOptionGroupBox* self, int midLineWidth) {
	self->midLineWidth = static_cast<int>(midLineWidth);
}

void QStyleOptionGroupBox_delete(QStyleOptionGroupBox* self) {
	delete self;
}

QStyleOptionSizeGrip* QStyleOptionSizeGrip_new() {
	return new (std::nothrow) QStyleOptionSizeGrip();
}

QStyleOptionSizeGrip* QStyleOptionSizeGrip_new2(QStyleOptionSizeGrip* other) {
	return new (std::nothrow) QStyleOptionSizeGrip(*other);
}

void QStyleOptionSizeGrip_virtbase(QStyleOptionSizeGrip* src, QStyleOptionComplex** outptr_QStyleOptionComplex) {
	*outptr_QStyleOptionComplex = static_cast<QStyleOptionComplex*>(src);
}

int QStyleOptionSizeGrip_corner(const QStyleOptionSizeGrip* self) {
	Qt::Corner corner_ret = self->corner;
	return static_cast<int>(corner_ret);
}

void QStyleOptionSizeGrip_setCorner(QStyleOptionSizeGrip* self, int corner) {
	self->corner = static_cast<Qt::Corner>(corner);
}

void QStyleOptionSizeGrip_delete(QStyleOptionSizeGrip* self) {
	delete self;
}

QStyleOptionGraphicsItem* QStyleOptionGraphicsItem_new() {
	return new (std::nothrow) QStyleOptionGraphicsItem();
}

QStyleOptionGraphicsItem* QStyleOptionGraphicsItem_new2(QStyleOptionGraphicsItem* other) {
	return new (std::nothrow) QStyleOptionGraphicsItem(*other);
}

void QStyleOptionGraphicsItem_virtbase(QStyleOptionGraphicsItem* src, QStyleOption** outptr_QStyleOption) {
	*outptr_QStyleOption = static_cast<QStyleOption*>(src);
}

QRectF* QStyleOptionGraphicsItem_exposedRect(const QStyleOptionGraphicsItem* self) {
	return new QRectF(self->exposedRect);
}

void QStyleOptionGraphicsItem_setExposedRect(QStyleOptionGraphicsItem* self, QRectF* exposedRect) {
	self->exposedRect = *exposedRect;
}

double QStyleOptionGraphicsItem_levelOfDetailFromTransform(QTransform* worldTransform) {
	qreal _ret = QStyleOptionGraphicsItem::levelOfDetailFromTransform(*worldTransform);
	return static_cast<double>(_ret);
}

void QStyleOptionGraphicsItem_delete(QStyleOptionGraphicsItem* self) {
	delete self;
}

QStyleHintReturn* QStyleHintReturn_new() {
	return new (std::nothrow) QStyleHintReturn();
}

QStyleHintReturn* QStyleHintReturn_new2(QStyleHintReturn* param1) {
	return new (std::nothrow) QStyleHintReturn(*param1);
}

QStyleHintReturn* QStyleHintReturn_new3(int version) {
	return new (std::nothrow) QStyleHintReturn(static_cast<int>(version));
}

QStyleHintReturn* QStyleHintReturn_new4(int version, int type) {
	return new (std::nothrow) QStyleHintReturn(static_cast<int>(version), static_cast<int>(type));
}

int QStyleHintReturn_version(const QStyleHintReturn* self) {
	return self->version;
}

void QStyleHintReturn_setVersion(QStyleHintReturn* self, int version) {
	self->version = static_cast<int>(version);
}

int QStyleHintReturn_type(const QStyleHintReturn* self) {
	return self->type;
}

void QStyleHintReturn_setType(QStyleHintReturn* self, int type) {
	self->type = static_cast<int>(type);
}

void QStyleHintReturn_operatorAssign(QStyleHintReturn* self, QStyleHintReturn* param1) {
	self->operator=(*param1);
}

void QStyleHintReturn_delete(QStyleHintReturn* self) {
	delete self;
}

QStyleHintReturnMask* QStyleHintReturnMask_new() {
	return new (std::nothrow) QStyleHintReturnMask();
}

QStyleHintReturnMask* QStyleHintReturnMask_new2(QStyleHintReturnMask* param1) {
	return new (std::nothrow) QStyleHintReturnMask(*param1);
}

void QStyleHintReturnMask_virtbase(QStyleHintReturnMask* src, QStyleHintReturn** outptr_QStyleHintReturn) {
	*outptr_QStyleHintReturn = static_cast<QStyleHintReturn*>(src);
}

QRegion* QStyleHintReturnMask_region(const QStyleHintReturnMask* self) {
	return new QRegion(self->region);
}

void QStyleHintReturnMask_setRegion(QStyleHintReturnMask* self, QRegion* region) {
	self->region = *region;
}

void QStyleHintReturnMask_operatorAssign(QStyleHintReturnMask* self, QStyleHintReturnMask* param1) {
	self->operator=(*param1);
}

void QStyleHintReturnMask_delete(QStyleHintReturnMask* self) {
	delete self;
}

QStyleHintReturnVariant* QStyleHintReturnVariant_new() {
	return new (std::nothrow) QStyleHintReturnVariant();
}

QStyleHintReturnVariant* QStyleHintReturnVariant_new2(QStyleHintReturnVariant* param1) {
	return new (std::nothrow) QStyleHintReturnVariant(*param1);
}

void QStyleHintReturnVariant_virtbase(QStyleHintReturnVariant* src, QStyleHintReturn** outptr_QStyleHintReturn) {
	*outptr_QStyleHintReturn = static_cast<QStyleHintReturn*>(src);
}

QVariant* QStyleHintReturnVariant_variant(const QStyleHintReturnVariant* self) {
	return new QVariant(self->variant);
}

void QStyleHintReturnVariant_setVariant(QStyleHintReturnVariant* self, QVariant* variant) {
	self->variant = *variant;
}

void QStyleHintReturnVariant_operatorAssign(QStyleHintReturnVariant* self, QStyleHintReturnVariant* param1) {
	self->operator=(*param1);
}

void QStyleHintReturnVariant_delete(QStyleHintReturnVariant* self) {
	delete self;
}

