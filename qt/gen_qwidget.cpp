#include <QAction>
#include <QBackingStore>
#include <QBitmap>
#include <QByteArray>
#include <QCursor>
#include <QFont>
#include <QFontInfo>
#include <QFontMetrics>
#include <QGraphicsEffect>
#include <QGraphicsProxyWidget>
#include <QIcon>
#include <QKeySequence>
#include <QLayout>
#include <QList>
#include <QLocale>
#include <QMargins>
#include <QMetaObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPalette>
#include <QPixmap>
#include <QPoint>
#include <QRect>
#include <QRegion>
#include <QScreen>
#include <QSize>
#include <QSizePolicy>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QVariant>
#include <QWidget>
#include <QWidgetData>
#include <QWindow>
#include "qwidget.h"

#include "gen_qwidget.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QWidgetData* QWidgetData_new(QWidgetData* param1) {
	return new QWidgetData(*param1);
}

void QWidgetData_OperatorAssign(QWidgetData* self, QWidgetData* param1) {
	self->operator=(*param1);
}

void QWidgetData_Delete(QWidgetData* self) {
	delete self;
}

QWidget* QWidget_new() {
	return new QWidget();
}

QWidget* QWidget_new2(QWidget* parent) {
	return new QWidget(parent);
}

QWidget* QWidget_new3(QWidget* parent, int f) {
	return new QWidget(parent, static_cast<Qt::WindowFlags>(f));
}

QMetaObject* QWidget_MetaObject(QWidget* self) {
	return (QMetaObject*) const_cast<const QWidget*>(self)->metaObject();
}

void QWidget_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWidget_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QWidget_DevType(QWidget* self) {
	return const_cast<const QWidget*>(self)->devType();
}

uintptr_t QWidget_WinId(QWidget* self) {
	return const_cast<const QWidget*>(self)->winId();
}

void QWidget_CreateWinId(QWidget* self) {
	self->createWinId();
}

uintptr_t QWidget_InternalWinId(QWidget* self) {
	return const_cast<const QWidget*>(self)->internalWinId();
}

uintptr_t QWidget_EffectiveWinId(QWidget* self) {
	return const_cast<const QWidget*>(self)->effectiveWinId();
}

QStyle* QWidget_Style(QWidget* self) {
	return const_cast<const QWidget*>(self)->style();
}

void QWidget_SetStyle(QWidget* self, QStyle* style) {
	self->setStyle(style);
}

bool QWidget_IsTopLevel(QWidget* self) {
	return const_cast<const QWidget*>(self)->isTopLevel();
}

bool QWidget_IsWindow(QWidget* self) {
	return const_cast<const QWidget*>(self)->isWindow();
}

bool QWidget_IsModal(QWidget* self) {
	return const_cast<const QWidget*>(self)->isModal();
}

uintptr_t QWidget_WindowModality(QWidget* self) {
	Qt::WindowModality ret = const_cast<const QWidget*>(self)->windowModality();
	return static_cast<uintptr_t>(ret);
}

void QWidget_SetWindowModality(QWidget* self, uintptr_t windowModality) {
	self->setWindowModality(static_cast<Qt::WindowModality>(windowModality));
}

bool QWidget_IsEnabled(QWidget* self) {
	return const_cast<const QWidget*>(self)->isEnabled();
}

bool QWidget_IsEnabledTo(QWidget* self, QWidget* param1) {
	return const_cast<const QWidget*>(self)->isEnabledTo(param1);
}

bool QWidget_IsEnabledToTLW(QWidget* self) {
	return const_cast<const QWidget*>(self)->isEnabledToTLW();
}

void QWidget_SetEnabled(QWidget* self, bool enabled) {
	self->setEnabled(enabled);
}

void QWidget_SetDisabled(QWidget* self, bool disabled) {
	self->setDisabled(disabled);
}

void QWidget_SetWindowModified(QWidget* self, bool windowModified) {
	self->setWindowModified(windowModified);
}

QRect* QWidget_FrameGeometry(QWidget* self) {
	QRect ret = const_cast<const QWidget*>(self)->frameGeometry();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QWidget_Geometry(QWidget* self) {
	const QRect& ret = const_cast<const QWidget*>(self)->geometry();
	// Cast returned reference into pointer
	return const_cast<QRect*>(&ret);
}

QRect* QWidget_NormalGeometry(QWidget* self) {
	QRect ret = const_cast<const QWidget*>(self)->normalGeometry();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

int QWidget_X(QWidget* self) {
	return const_cast<const QWidget*>(self)->x();
}

int QWidget_Y(QWidget* self) {
	return const_cast<const QWidget*>(self)->y();
}

QPoint* QWidget_Pos(QWidget* self) {
	QPoint ret = const_cast<const QWidget*>(self)->pos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QSize* QWidget_FrameSize(QWidget* self) {
	QSize ret = const_cast<const QWidget*>(self)->frameSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QWidget_Size(QWidget* self) {
	QSize ret = const_cast<const QWidget*>(self)->size();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

int QWidget_Width(QWidget* self) {
	return const_cast<const QWidget*>(self)->width();
}

int QWidget_Height(QWidget* self) {
	return const_cast<const QWidget*>(self)->height();
}

QRect* QWidget_Rect(QWidget* self) {
	QRect ret = const_cast<const QWidget*>(self)->rect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QWidget_ChildrenRect(QWidget* self) {
	QRect ret = const_cast<const QWidget*>(self)->childrenRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRegion* QWidget_ChildrenRegion(QWidget* self) {
	QRegion ret = const_cast<const QWidget*>(self)->childrenRegion();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(ret));
}

QSize* QWidget_MinimumSize(QWidget* self) {
	QSize ret = const_cast<const QWidget*>(self)->minimumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QWidget_MaximumSize(QWidget* self) {
	QSize ret = const_cast<const QWidget*>(self)->maximumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

int QWidget_MinimumWidth(QWidget* self) {
	return const_cast<const QWidget*>(self)->minimumWidth();
}

int QWidget_MinimumHeight(QWidget* self) {
	return const_cast<const QWidget*>(self)->minimumHeight();
}

int QWidget_MaximumWidth(QWidget* self) {
	return const_cast<const QWidget*>(self)->maximumWidth();
}

int QWidget_MaximumHeight(QWidget* self) {
	return const_cast<const QWidget*>(self)->maximumHeight();
}

void QWidget_SetMinimumSize(QWidget* self, QSize* minimumSize) {
	self->setMinimumSize(*minimumSize);
}

void QWidget_SetMinimumSize2(QWidget* self, int minw, int minh) {
	self->setMinimumSize(static_cast<int>(minw), static_cast<int>(minh));
}

void QWidget_SetMaximumSize(QWidget* self, QSize* maximumSize) {
	self->setMaximumSize(*maximumSize);
}

void QWidget_SetMaximumSize2(QWidget* self, int maxw, int maxh) {
	self->setMaximumSize(static_cast<int>(maxw), static_cast<int>(maxh));
}

void QWidget_SetMinimumWidth(QWidget* self, int minw) {
	self->setMinimumWidth(static_cast<int>(minw));
}

void QWidget_SetMinimumHeight(QWidget* self, int minh) {
	self->setMinimumHeight(static_cast<int>(minh));
}

void QWidget_SetMaximumWidth(QWidget* self, int maxw) {
	self->setMaximumWidth(static_cast<int>(maxw));
}

void QWidget_SetMaximumHeight(QWidget* self, int maxh) {
	self->setMaximumHeight(static_cast<int>(maxh));
}

QSize* QWidget_SizeIncrement(QWidget* self) {
	QSize ret = const_cast<const QWidget*>(self)->sizeIncrement();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QWidget_SetSizeIncrement(QWidget* self, QSize* sizeIncrement) {
	self->setSizeIncrement(*sizeIncrement);
}

void QWidget_SetSizeIncrement2(QWidget* self, int w, int h) {
	self->setSizeIncrement(static_cast<int>(w), static_cast<int>(h));
}

QSize* QWidget_BaseSize(QWidget* self) {
	QSize ret = const_cast<const QWidget*>(self)->baseSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QWidget_SetBaseSize(QWidget* self, QSize* baseSize) {
	self->setBaseSize(*baseSize);
}

void QWidget_SetBaseSize2(QWidget* self, int basew, int baseh) {
	self->setBaseSize(static_cast<int>(basew), static_cast<int>(baseh));
}

void QWidget_SetFixedSize(QWidget* self, QSize* fixedSize) {
	self->setFixedSize(*fixedSize);
}

void QWidget_SetFixedSize2(QWidget* self, int w, int h) {
	self->setFixedSize(static_cast<int>(w), static_cast<int>(h));
}

void QWidget_SetFixedWidth(QWidget* self, int w) {
	self->setFixedWidth(static_cast<int>(w));
}

void QWidget_SetFixedHeight(QWidget* self, int h) {
	self->setFixedHeight(static_cast<int>(h));
}

QPoint* QWidget_MapToGlobal(QWidget* self, QPoint* param1) {
	QPoint ret = const_cast<const QWidget*>(self)->mapToGlobal(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPoint* QWidget_MapFromGlobal(QWidget* self, QPoint* param1) {
	QPoint ret = const_cast<const QWidget*>(self)->mapFromGlobal(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPoint* QWidget_MapToParent(QWidget* self, QPoint* param1) {
	QPoint ret = const_cast<const QWidget*>(self)->mapToParent(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPoint* QWidget_MapFromParent(QWidget* self, QPoint* param1) {
	QPoint ret = const_cast<const QWidget*>(self)->mapFromParent(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPoint* QWidget_MapTo(QWidget* self, QWidget* param1, QPoint* param2) {
	QPoint ret = const_cast<const QWidget*>(self)->mapTo(param1, *param2);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPoint* QWidget_MapFrom(QWidget* self, QWidget* param1, QPoint* param2) {
	QPoint ret = const_cast<const QWidget*>(self)->mapFrom(param1, *param2);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QWidget* QWidget_Window(QWidget* self) {
	return const_cast<const QWidget*>(self)->window();
}

QWidget* QWidget_NativeParentWidget(QWidget* self) {
	return const_cast<const QWidget*>(self)->nativeParentWidget();
}

QWidget* QWidget_TopLevelWidget(QWidget* self) {
	return const_cast<const QWidget*>(self)->topLevelWidget();
}

QPalette* QWidget_Palette(QWidget* self) {
	const QPalette& ret = const_cast<const QWidget*>(self)->palette();
	// Cast returned reference into pointer
	return const_cast<QPalette*>(&ret);
}

void QWidget_SetPalette(QWidget* self, QPalette* palette) {
	self->setPalette(*palette);
}

void QWidget_SetBackgroundRole(QWidget* self, uintptr_t backgroundRole) {
	self->setBackgroundRole(static_cast<QPalette::ColorRole>(backgroundRole));
}

uintptr_t QWidget_BackgroundRole(QWidget* self) {
	QPalette::ColorRole ret = const_cast<const QWidget*>(self)->backgroundRole();
	return static_cast<uintptr_t>(ret);
}

void QWidget_SetForegroundRole(QWidget* self, uintptr_t foregroundRole) {
	self->setForegroundRole(static_cast<QPalette::ColorRole>(foregroundRole));
}

uintptr_t QWidget_ForegroundRole(QWidget* self) {
	QPalette::ColorRole ret = const_cast<const QWidget*>(self)->foregroundRole();
	return static_cast<uintptr_t>(ret);
}

QFont* QWidget_Font(QWidget* self) {
	const QFont& ret = const_cast<const QWidget*>(self)->font();
	// Cast returned reference into pointer
	return const_cast<QFont*>(&ret);
}

void QWidget_SetFont(QWidget* self, QFont* font) {
	self->setFont(*font);
}

QFontMetrics* QWidget_FontMetrics(QWidget* self) {
	QFontMetrics ret = const_cast<const QWidget*>(self)->fontMetrics();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFontMetrics*>(new QFontMetrics(ret));
}

QFontInfo* QWidget_FontInfo(QWidget* self) {
	QFontInfo ret = const_cast<const QWidget*>(self)->fontInfo();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFontInfo*>(new QFontInfo(ret));
}

QCursor* QWidget_Cursor(QWidget* self) {
	QCursor ret = const_cast<const QWidget*>(self)->cursor();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCursor*>(new QCursor(ret));
}

void QWidget_SetCursor(QWidget* self, QCursor* cursor) {
	self->setCursor(*cursor);
}

void QWidget_UnsetCursor(QWidget* self) {
	self->unsetCursor();
}

void QWidget_SetMouseTracking(QWidget* self, bool enable) {
	self->setMouseTracking(enable);
}

bool QWidget_HasMouseTracking(QWidget* self) {
	return const_cast<const QWidget*>(self)->hasMouseTracking();
}

bool QWidget_UnderMouse(QWidget* self) {
	return const_cast<const QWidget*>(self)->underMouse();
}

void QWidget_SetTabletTracking(QWidget* self, bool enable) {
	self->setTabletTracking(enable);
}

bool QWidget_HasTabletTracking(QWidget* self) {
	return const_cast<const QWidget*>(self)->hasTabletTracking();
}

void QWidget_SetMask(QWidget* self, QBitmap* mask) {
	self->setMask(*mask);
}

void QWidget_SetMaskWithMask(QWidget* self, QRegion* mask) {
	self->setMask(*mask);
}

QRegion* QWidget_Mask(QWidget* self) {
	QRegion ret = const_cast<const QWidget*>(self)->mask();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(ret));
}

void QWidget_ClearMask(QWidget* self) {
	self->clearMask();
}

void QWidget_Render(QWidget* self, QPaintDevice* target) {
	self->render(target);
}

void QWidget_RenderWithPainter(QWidget* self, QPainter* painter) {
	self->render(painter);
}

QPixmap* QWidget_Grab(QWidget* self) {
	QPixmap ret = self->grab();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QGraphicsEffect* QWidget_GraphicsEffect(QWidget* self) {
	return const_cast<const QWidget*>(self)->graphicsEffect();
}

void QWidget_SetGraphicsEffect(QWidget* self, QGraphicsEffect* effect) {
	self->setGraphicsEffect(effect);
}

void QWidget_GrabGesture(QWidget* self, uintptr_t typeVal) {
	self->grabGesture(static_cast<Qt::GestureType>(typeVal));
}

void QWidget_UngrabGesture(QWidget* self, uintptr_t typeVal) {
	self->ungrabGesture(static_cast<Qt::GestureType>(typeVal));
}

void QWidget_SetWindowTitle(QWidget* self, const char* windowTitle, size_t windowTitle_Strlen) {
	QString windowTitle_QString = QString::fromUtf8(windowTitle, windowTitle_Strlen);
	self->setWindowTitle(windowTitle_QString);
}

void QWidget_SetStyleSheet(QWidget* self, const char* styleSheet, size_t styleSheet_Strlen) {
	QString styleSheet_QString = QString::fromUtf8(styleSheet, styleSheet_Strlen);
	self->setStyleSheet(styleSheet_QString);
}

void QWidget_StyleSheet(QWidget* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QWidget*>(self)->styleSheet();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWidget_WindowTitle(QWidget* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QWidget*>(self)->windowTitle();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWidget_SetWindowIcon(QWidget* self, QIcon* icon) {
	self->setWindowIcon(*icon);
}

QIcon* QWidget_WindowIcon(QWidget* self) {
	QIcon ret = const_cast<const QWidget*>(self)->windowIcon();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(ret));
}

void QWidget_SetWindowIconText(QWidget* self, const char* windowIconText, size_t windowIconText_Strlen) {
	QString windowIconText_QString = QString::fromUtf8(windowIconText, windowIconText_Strlen);
	self->setWindowIconText(windowIconText_QString);
}

void QWidget_WindowIconText(QWidget* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QWidget*>(self)->windowIconText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWidget_SetWindowRole(QWidget* self, const char* windowRole, size_t windowRole_Strlen) {
	QString windowRole_QString = QString::fromUtf8(windowRole, windowRole_Strlen);
	self->setWindowRole(windowRole_QString);
}

void QWidget_WindowRole(QWidget* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QWidget*>(self)->windowRole();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWidget_SetWindowFilePath(QWidget* self, const char* filePath, size_t filePath_Strlen) {
	QString filePath_QString = QString::fromUtf8(filePath, filePath_Strlen);
	self->setWindowFilePath(filePath_QString);
}

void QWidget_WindowFilePath(QWidget* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QWidget*>(self)->windowFilePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWidget_SetWindowOpacity(QWidget* self, double level) {
	self->setWindowOpacity(static_cast<qreal>(level));
}

double QWidget_WindowOpacity(QWidget* self) {
	return const_cast<const QWidget*>(self)->windowOpacity();
}

bool QWidget_IsWindowModified(QWidget* self) {
	return const_cast<const QWidget*>(self)->isWindowModified();
}

void QWidget_SetToolTip(QWidget* self, const char* toolTip, size_t toolTip_Strlen) {
	QString toolTip_QString = QString::fromUtf8(toolTip, toolTip_Strlen);
	self->setToolTip(toolTip_QString);
}

void QWidget_ToolTip(QWidget* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QWidget*>(self)->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWidget_SetToolTipDuration(QWidget* self, int msec) {
	self->setToolTipDuration(static_cast<int>(msec));
}

int QWidget_ToolTipDuration(QWidget* self) {
	return const_cast<const QWidget*>(self)->toolTipDuration();
}

void QWidget_SetStatusTip(QWidget* self, const char* statusTip, size_t statusTip_Strlen) {
	QString statusTip_QString = QString::fromUtf8(statusTip, statusTip_Strlen);
	self->setStatusTip(statusTip_QString);
}

void QWidget_StatusTip(QWidget* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QWidget*>(self)->statusTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWidget_SetWhatsThis(QWidget* self, const char* whatsThis, size_t whatsThis_Strlen) {
	QString whatsThis_QString = QString::fromUtf8(whatsThis, whatsThis_Strlen);
	self->setWhatsThis(whatsThis_QString);
}

void QWidget_WhatsThis(QWidget* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QWidget*>(self)->whatsThis();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWidget_AccessibleName(QWidget* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QWidget*>(self)->accessibleName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWidget_SetAccessibleName(QWidget* self, const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	self->setAccessibleName(name_QString);
}

void QWidget_AccessibleDescription(QWidget* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QWidget*>(self)->accessibleDescription();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWidget_SetAccessibleDescription(QWidget* self, const char* description, size_t description_Strlen) {
	QString description_QString = QString::fromUtf8(description, description_Strlen);
	self->setAccessibleDescription(description_QString);
}

void QWidget_SetLayoutDirection(QWidget* self, uintptr_t direction) {
	self->setLayoutDirection(static_cast<Qt::LayoutDirection>(direction));
}

uintptr_t QWidget_LayoutDirection(QWidget* self) {
	Qt::LayoutDirection ret = const_cast<const QWidget*>(self)->layoutDirection();
	return static_cast<uintptr_t>(ret);
}

void QWidget_UnsetLayoutDirection(QWidget* self) {
	self->unsetLayoutDirection();
}

void QWidget_SetLocale(QWidget* self, QLocale* locale) {
	self->setLocale(*locale);
}

QLocale* QWidget_Locale(QWidget* self) {
	QLocale ret = const_cast<const QWidget*>(self)->locale();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLocale*>(new QLocale(ret));
}

void QWidget_UnsetLocale(QWidget* self) {
	self->unsetLocale();
}

bool QWidget_IsRightToLeft(QWidget* self) {
	return const_cast<const QWidget*>(self)->isRightToLeft();
}

bool QWidget_IsLeftToRight(QWidget* self) {
	return const_cast<const QWidget*>(self)->isLeftToRight();
}

void QWidget_SetFocus(QWidget* self) {
	self->setFocus();
}

bool QWidget_IsActiveWindow(QWidget* self) {
	return const_cast<const QWidget*>(self)->isActiveWindow();
}

void QWidget_ActivateWindow(QWidget* self) {
	self->activateWindow();
}

void QWidget_ClearFocus(QWidget* self) {
	self->clearFocus();
}

void QWidget_SetFocusWithReason(QWidget* self, uintptr_t reason) {
	self->setFocus(static_cast<Qt::FocusReason>(reason));
}

uintptr_t QWidget_FocusPolicy(QWidget* self) {
	Qt::FocusPolicy ret = const_cast<const QWidget*>(self)->focusPolicy();
	return static_cast<uintptr_t>(ret);
}

void QWidget_SetFocusPolicy(QWidget* self, uintptr_t policy) {
	self->setFocusPolicy(static_cast<Qt::FocusPolicy>(policy));
}

bool QWidget_HasFocus(QWidget* self) {
	return const_cast<const QWidget*>(self)->hasFocus();
}

void QWidget_SetTabOrder(QWidget* param1, QWidget* param2) {
	QWidget::setTabOrder(param1, param2);
}

void QWidget_SetFocusProxy(QWidget* self, QWidget* focusProxy) {
	self->setFocusProxy(focusProxy);
}

QWidget* QWidget_FocusProxy(QWidget* self) {
	return const_cast<const QWidget*>(self)->focusProxy();
}

uintptr_t QWidget_ContextMenuPolicy(QWidget* self) {
	Qt::ContextMenuPolicy ret = const_cast<const QWidget*>(self)->contextMenuPolicy();
	return static_cast<uintptr_t>(ret);
}

void QWidget_SetContextMenuPolicy(QWidget* self, uintptr_t policy) {
	self->setContextMenuPolicy(static_cast<Qt::ContextMenuPolicy>(policy));
}

void QWidget_GrabMouse(QWidget* self) {
	self->grabMouse();
}

void QWidget_GrabMouseWithQCursor(QWidget* self, QCursor* param1) {
	self->grabMouse(*param1);
}

void QWidget_ReleaseMouse(QWidget* self) {
	self->releaseMouse();
}

void QWidget_GrabKeyboard(QWidget* self) {
	self->grabKeyboard();
}

void QWidget_ReleaseKeyboard(QWidget* self) {
	self->releaseKeyboard();
}

int QWidget_GrabShortcut(QWidget* self, QKeySequence* key) {
	return self->grabShortcut(*key);
}

void QWidget_ReleaseShortcut(QWidget* self, int id) {
	self->releaseShortcut(static_cast<int>(id));
}

void QWidget_SetShortcutEnabled(QWidget* self, int id) {
	self->setShortcutEnabled(static_cast<int>(id));
}

void QWidget_SetShortcutAutoRepeat(QWidget* self, int id) {
	self->setShortcutAutoRepeat(static_cast<int>(id));
}

QWidget* QWidget_MouseGrabber() {
	return QWidget::mouseGrabber();
}

QWidget* QWidget_KeyboardGrabber() {
	return QWidget::keyboardGrabber();
}

bool QWidget_UpdatesEnabled(QWidget* self) {
	return const_cast<const QWidget*>(self)->updatesEnabled();
}

void QWidget_SetUpdatesEnabled(QWidget* self, bool enable) {
	self->setUpdatesEnabled(enable);
}

QGraphicsProxyWidget* QWidget_GraphicsProxyWidget(QWidget* self) {
	return const_cast<const QWidget*>(self)->graphicsProxyWidget();
}

void QWidget_Update(QWidget* self) {
	self->update();
}

void QWidget_Repaint(QWidget* self) {
	self->repaint();
}

void QWidget_Update2(QWidget* self, int x, int y, int w, int h) {
	self->update(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QWidget_UpdateWithQRect(QWidget* self, QRect* param1) {
	self->update(*param1);
}

void QWidget_UpdateWithQRegion(QWidget* self, QRegion* param1) {
	self->update(*param1);
}

void QWidget_Repaint2(QWidget* self, int x, int y, int w, int h) {
	self->repaint(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QWidget_RepaintWithQRect(QWidget* self, QRect* param1) {
	self->repaint(*param1);
}

void QWidget_RepaintWithQRegion(QWidget* self, QRegion* param1) {
	self->repaint(*param1);
}

void QWidget_SetVisible(QWidget* self, bool visible) {
	self->setVisible(visible);
}

void QWidget_SetHidden(QWidget* self, bool hidden) {
	self->setHidden(hidden);
}

void QWidget_Show(QWidget* self) {
	self->show();
}

void QWidget_Hide(QWidget* self) {
	self->hide();
}

void QWidget_ShowMinimized(QWidget* self) {
	self->showMinimized();
}

void QWidget_ShowMaximized(QWidget* self) {
	self->showMaximized();
}

void QWidget_ShowFullScreen(QWidget* self) {
	self->showFullScreen();
}

void QWidget_ShowNormal(QWidget* self) {
	self->showNormal();
}

bool QWidget_Close(QWidget* self) {
	return self->close();
}

void QWidget_Raise(QWidget* self) {
	self->raise();
}

void QWidget_Lower(QWidget* self) {
	self->lower();
}

void QWidget_StackUnder(QWidget* self, QWidget* param1) {
	self->stackUnder(param1);
}

void QWidget_Move(QWidget* self, int x, int y) {
	self->move(static_cast<int>(x), static_cast<int>(y));
}

void QWidget_MoveWithQPoint(QWidget* self, QPoint* param1) {
	self->move(*param1);
}

void QWidget_Resize(QWidget* self, int w, int h) {
	self->resize(static_cast<int>(w), static_cast<int>(h));
}

void QWidget_ResizeWithQSize(QWidget* self, QSize* param1) {
	self->resize(*param1);
}

void QWidget_SetGeometry(QWidget* self, int x, int y, int w, int h) {
	self->setGeometry(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QWidget_SetGeometryWithGeometry(QWidget* self, QRect* geometry) {
	self->setGeometry(*geometry);
}

QByteArray* QWidget_SaveGeometry(QWidget* self) {
	QByteArray ret = const_cast<const QWidget*>(self)->saveGeometry();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

bool QWidget_RestoreGeometry(QWidget* self, QByteArray* geometry) {
	return self->restoreGeometry(*geometry);
}

void QWidget_AdjustSize(QWidget* self) {
	self->adjustSize();
}

bool QWidget_IsVisible(QWidget* self) {
	return const_cast<const QWidget*>(self)->isVisible();
}

bool QWidget_IsVisibleTo(QWidget* self, QWidget* param1) {
	return const_cast<const QWidget*>(self)->isVisibleTo(param1);
}

bool QWidget_IsHidden(QWidget* self) {
	return const_cast<const QWidget*>(self)->isHidden();
}

bool QWidget_IsMinimized(QWidget* self) {
	return const_cast<const QWidget*>(self)->isMinimized();
}

bool QWidget_IsMaximized(QWidget* self) {
	return const_cast<const QWidget*>(self)->isMaximized();
}

bool QWidget_IsFullScreen(QWidget* self) {
	return const_cast<const QWidget*>(self)->isFullScreen();
}

int QWidget_WindowState(QWidget* self) {
	Qt::WindowStates ret = const_cast<const QWidget*>(self)->windowState();
	return static_cast<int>(ret);
}

void QWidget_SetWindowState(QWidget* self, int state) {
	self->setWindowState(static_cast<Qt::WindowStates>(state));
}

void QWidget_OverrideWindowState(QWidget* self, int state) {
	self->overrideWindowState(static_cast<Qt::WindowStates>(state));
}

QSize* QWidget_SizeHint(QWidget* self) {
	QSize ret = const_cast<const QWidget*>(self)->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QWidget_MinimumSizeHint(QWidget* self) {
	QSize ret = const_cast<const QWidget*>(self)->minimumSizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSizePolicy* QWidget_SizePolicy(QWidget* self) {
	QSizePolicy ret = const_cast<const QWidget*>(self)->sizePolicy();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizePolicy*>(new QSizePolicy(ret));
}

void QWidget_SetSizePolicy(QWidget* self, QSizePolicy* sizePolicy) {
	self->setSizePolicy(*sizePolicy);
}

void QWidget_SetSizePolicy2(QWidget* self, uintptr_t horizontal, uintptr_t vertical) {
	self->setSizePolicy(static_cast<QSizePolicy::Policy>(horizontal), static_cast<QSizePolicy::Policy>(vertical));
}

int QWidget_HeightForWidth(QWidget* self, int param1) {
	return const_cast<const QWidget*>(self)->heightForWidth(static_cast<int>(param1));
}

bool QWidget_HasHeightForWidth(QWidget* self) {
	return const_cast<const QWidget*>(self)->hasHeightForWidth();
}

QRegion* QWidget_VisibleRegion(QWidget* self) {
	QRegion ret = const_cast<const QWidget*>(self)->visibleRegion();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(ret));
}

void QWidget_SetContentsMargins(QWidget* self, int left, int top, int right, int bottom) {
	self->setContentsMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
}

void QWidget_SetContentsMarginsWithMargins(QWidget* self, QMargins* margins) {
	self->setContentsMargins(*margins);
}

void QWidget_GetContentsMargins(QWidget* self, int* left, int* top, int* right, int* bottom) {
	const_cast<const QWidget*>(self)->getContentsMargins(static_cast<int*>(left), static_cast<int*>(top), static_cast<int*>(right), static_cast<int*>(bottom));
}

QMargins* QWidget_ContentsMargins(QWidget* self) {
	QMargins ret = const_cast<const QWidget*>(self)->contentsMargins();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMargins*>(new QMargins(ret));
}

QRect* QWidget_ContentsRect(QWidget* self) {
	QRect ret = const_cast<const QWidget*>(self)->contentsRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QLayout* QWidget_Layout(QWidget* self) {
	return const_cast<const QWidget*>(self)->layout();
}

void QWidget_SetLayout(QWidget* self, QLayout* layout) {
	self->setLayout(layout);
}

void QWidget_UpdateGeometry(QWidget* self) {
	self->updateGeometry();
}

void QWidget_SetParent(QWidget* self, QWidget* parent) {
	self->setParent(parent);
}

void QWidget_SetParent2(QWidget* self, QWidget* parent, int f) {
	self->setParent(parent, static_cast<Qt::WindowFlags>(f));
}

void QWidget_Scroll(QWidget* self, int dx, int dy) {
	self->scroll(static_cast<int>(dx), static_cast<int>(dy));
}

void QWidget_Scroll2(QWidget* self, int dx, int dy, QRect* param3) {
	self->scroll(static_cast<int>(dx), static_cast<int>(dy), *param3);
}

QWidget* QWidget_FocusWidget(QWidget* self) {
	return const_cast<const QWidget*>(self)->focusWidget();
}

QWidget* QWidget_NextInFocusChain(QWidget* self) {
	return const_cast<const QWidget*>(self)->nextInFocusChain();
}

QWidget* QWidget_PreviousInFocusChain(QWidget* self) {
	return const_cast<const QWidget*>(self)->previousInFocusChain();
}

bool QWidget_AcceptDrops(QWidget* self) {
	return const_cast<const QWidget*>(self)->acceptDrops();
}

void QWidget_SetAcceptDrops(QWidget* self, bool on) {
	self->setAcceptDrops(on);
}

void QWidget_AddAction(QWidget* self, QAction* action) {
	self->addAction(action);
}

void QWidget_AddActions(QWidget* self, QAction** actions, size_t actions_len) {
	QList<QAction*> actions_QList;
	actions_QList.reserve(actions_len);
	for(size_t i = 0; i < actions_len; ++i) {
		actions_QList.push_back(actions[i]);
	}
	self->addActions(actions_QList);
}

void QWidget_InsertActions(QWidget* self, QAction* before, QAction** actions, size_t actions_len) {
	QList<QAction*> actions_QList;
	actions_QList.reserve(actions_len);
	for(size_t i = 0; i < actions_len; ++i) {
		actions_QList.push_back(actions[i]);
	}
	self->insertActions(before, actions_QList);
}

void QWidget_InsertAction(QWidget* self, QAction* before, QAction* action) {
	self->insertAction(before, action);
}

void QWidget_RemoveAction(QWidget* self, QAction* action) {
	self->removeAction(action);
}

void QWidget_Actions(QWidget* self, QAction*** _out, size_t* _out_len) {
	QList<QAction*> ret = const_cast<const QWidget*>(self)->actions();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAction** __out = static_cast<QAction**>(malloc(sizeof(QAction*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

QWidget* QWidget_ParentWidget(QWidget* self) {
	return const_cast<const QWidget*>(self)->parentWidget();
}

void QWidget_SetWindowFlags(QWidget* self, int typeVal) {
	self->setWindowFlags(static_cast<Qt::WindowFlags>(typeVal));
}

int QWidget_WindowFlags(QWidget* self) {
	Qt::WindowFlags ret = const_cast<const QWidget*>(self)->windowFlags();
	return static_cast<int>(ret);
}

void QWidget_SetWindowFlag(QWidget* self, uintptr_t param1) {
	self->setWindowFlag(static_cast<Qt::WindowType>(param1));
}

void QWidget_OverrideWindowFlags(QWidget* self, int typeVal) {
	self->overrideWindowFlags(static_cast<Qt::WindowFlags>(typeVal));
}

uintptr_t QWidget_WindowType(QWidget* self) {
	Qt::WindowType ret = const_cast<const QWidget*>(self)->windowType();
	return static_cast<uintptr_t>(ret);
}

QWidget* QWidget_Find(uintptr_t param1) {
	return QWidget::find(static_cast<WId>(param1));
}

QWidget* QWidget_ChildAt(QWidget* self, int x, int y) {
	return const_cast<const QWidget*>(self)->childAt(static_cast<int>(x), static_cast<int>(y));
}

QWidget* QWidget_ChildAtWithQPoint(QWidget* self, QPoint* p) {
	return const_cast<const QWidget*>(self)->childAt(*p);
}

void QWidget_SetAttribute(QWidget* self, uintptr_t param1) {
	self->setAttribute(static_cast<Qt::WidgetAttribute>(param1));
}

bool QWidget_TestAttribute(QWidget* self, uintptr_t param1) {
	return const_cast<const QWidget*>(self)->testAttribute(static_cast<Qt::WidgetAttribute>(param1));
}

QPaintEngine* QWidget_PaintEngine(QWidget* self) {
	return const_cast<const QWidget*>(self)->paintEngine();
}

void QWidget_EnsurePolished(QWidget* self) {
	const_cast<const QWidget*>(self)->ensurePolished();
}

bool QWidget_IsAncestorOf(QWidget* self, QWidget* child) {
	return const_cast<const QWidget*>(self)->isAncestorOf(child);
}

bool QWidget_AutoFillBackground(QWidget* self) {
	return const_cast<const QWidget*>(self)->autoFillBackground();
}

void QWidget_SetAutoFillBackground(QWidget* self, bool enabled) {
	self->setAutoFillBackground(enabled);
}

QBackingStore* QWidget_BackingStore(QWidget* self) {
	return const_cast<const QWidget*>(self)->backingStore();
}

QWindow* QWidget_WindowHandle(QWidget* self) {
	return const_cast<const QWidget*>(self)->windowHandle();
}

QScreen* QWidget_Screen(QWidget* self) {
	return const_cast<const QWidget*>(self)->screen();
}

QWidget* QWidget_CreateWindowContainer(QWindow* window) {
	return QWidget::createWindowContainer(window);
}

void QWidget_WindowTitleChanged(QWidget* self, const char* title, size_t title_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	self->windowTitleChanged(title_QString);
}

void QWidget_connect_WindowTitleChanged(QWidget* self, void* slot) {
	QWidget::connect(self, static_cast<void (QWidget::*)(const QString&)>(&QWidget::windowTitleChanged), self, [=](const QString& title) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QWidget_WindowIconChanged(QWidget* self, QIcon* icon) {
	self->windowIconChanged(*icon);
}

void QWidget_connect_WindowIconChanged(QWidget* self, void* slot) {
	QWidget::connect(self, static_cast<void (QWidget::*)(const QIcon&)>(&QWidget::windowIconChanged), self, [=](const QIcon& icon) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QWidget_WindowIconTextChanged(QWidget* self, const char* iconText, size_t iconText_Strlen) {
	QString iconText_QString = QString::fromUtf8(iconText, iconText_Strlen);
	self->windowIconTextChanged(iconText_QString);
}

void QWidget_connect_WindowIconTextChanged(QWidget* self, void* slot) {
	QWidget::connect(self, static_cast<void (QWidget::*)(const QString&)>(&QWidget::windowIconTextChanged), self, [=](const QString& iconText) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QWidget_CustomContextMenuRequested(QWidget* self, QPoint* pos) {
	self->customContextMenuRequested(*pos);
}

void QWidget_connect_CustomContextMenuRequested(QWidget* self, void* slot) {
	QWidget::connect(self, static_cast<void (QWidget::*)(const QPoint&)>(&QWidget::customContextMenuRequested), self, [=](const QPoint& pos) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

QVariant* QWidget_InputMethodQuery(QWidget* self, uintptr_t param1) {
	QVariant ret = const_cast<const QWidget*>(self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

int QWidget_InputMethodHints(QWidget* self) {
	Qt::InputMethodHints ret = const_cast<const QWidget*>(self)->inputMethodHints();
	return static_cast<int>(ret);
}

void QWidget_SetInputMethodHints(QWidget* self, int hints) {
	self->setInputMethodHints(static_cast<Qt::InputMethodHints>(hints));
}

void QWidget_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWidget_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWidget_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWidget_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWidget_Render2(QWidget* self, QPaintDevice* target, QPoint* targetOffset) {
	self->render(target, *targetOffset);
}

void QWidget_Render3(QWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion) {
	self->render(target, *targetOffset, *sourceRegion);
}

void QWidget_Render4(QWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags) {
	self->render(target, *targetOffset, *sourceRegion, static_cast<QWidget::RenderFlags>(renderFlags));
}

void QWidget_Render22(QWidget* self, QPainter* painter, QPoint* targetOffset) {
	self->render(painter, *targetOffset);
}

void QWidget_Render32(QWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion) {
	self->render(painter, *targetOffset, *sourceRegion);
}

void QWidget_Render42(QWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags) {
	self->render(painter, *targetOffset, *sourceRegion, static_cast<QWidget::RenderFlags>(renderFlags));
}

QPixmap* QWidget_Grab1(QWidget* self, QRect* rectangle) {
	QPixmap ret = self->grab(*rectangle);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

void QWidget_GrabGesture2(QWidget* self, uintptr_t typeVal, int flags) {
	self->grabGesture(static_cast<Qt::GestureType>(typeVal), static_cast<Qt::GestureFlags>(flags));
}

int QWidget_GrabShortcut2(QWidget* self, QKeySequence* key, uintptr_t context) {
	return self->grabShortcut(*key, static_cast<Qt::ShortcutContext>(context));
}

void QWidget_SetShortcutEnabled2(QWidget* self, int id, bool enable) {
	self->setShortcutEnabled(static_cast<int>(id), enable);
}

void QWidget_SetShortcutAutoRepeat2(QWidget* self, int id, bool enable) {
	self->setShortcutAutoRepeat(static_cast<int>(id), enable);
}

void QWidget_SetWindowFlag2(QWidget* self, uintptr_t param1, bool on) {
	self->setWindowFlag(static_cast<Qt::WindowType>(param1), on);
}

void QWidget_SetAttribute2(QWidget* self, uintptr_t param1, bool on) {
	self->setAttribute(static_cast<Qt::WidgetAttribute>(param1), on);
}

QWidget* QWidget_CreateWindowContainer2(QWindow* window, QWidget* parent) {
	return QWidget::createWindowContainer(window, parent);
}

QWidget* QWidget_CreateWindowContainer3(QWindow* window, QWidget* parent, int flags) {
	return QWidget::createWindowContainer(window, parent, static_cast<Qt::WindowFlags>(flags));
}

void QWidget_Delete(QWidget* self) {
	delete self;
}

