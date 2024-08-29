#include <QApplication>
#include <QDesktopWidget>
#include <QEvent>
#include <QFont>
#include <QFontMetrics>
#include <QIcon>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QPalette>
#include <QPoint>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QWidget>
#include "qapplication.h"

#include "gen_qapplication.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QApplication* QApplication_new(int* argc, char** argv) {
	return new QApplication(static_cast<int&>(*argc), argv);
}

QApplication* QApplication_new2(int* argc, char** argv, int param3) {
	return new QApplication(static_cast<int&>(*argc), argv, static_cast<int>(param3));
}

QMetaObject* QApplication_MetaObject(QApplication* self) {
	return (QMetaObject*) const_cast<const QApplication*>(self)->metaObject();
}

void QApplication_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QApplication::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QApplication_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QApplication::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QStyle* QApplication_Style() {
	return QApplication::style();
}

void QApplication_SetStyle(QStyle* style) {
	QApplication::setStyle(style);
}

QStyle* QApplication_SetStyleWithStyle(const char* style, size_t style_Strlen) {
	QString style_QString = QString::fromUtf8(style, style_Strlen);
	return QApplication::setStyle(style_QString);
}

int QApplication_ColorSpec() {
	return QApplication::colorSpec();
}

void QApplication_SetColorSpec(int colorSpec) {
	QApplication::setColorSpec(static_cast<int>(colorSpec));
}

QPalette* QApplication_Palette(QWidget* param1) {
	QPalette ret = QApplication::palette(param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPalette*>(new QPalette(ret));
}

QPalette* QApplication_PaletteWithClassName(const char* className) {
	QPalette ret = QApplication::palette(className);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPalette*>(new QPalette(ret));
}

void QApplication_SetPalette(QPalette* param1) {
	QApplication::setPalette(*param1);
}

QFont* QApplication_Font() {
	QFont ret = QApplication::font();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(ret));
}

QFont* QApplication_FontWithQWidget(QWidget* param1) {
	QFont ret = QApplication::font(param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(ret));
}

QFont* QApplication_FontWithClassName(const char* className) {
	QFont ret = QApplication::font(className);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(ret));
}

void QApplication_SetFont(QFont* param1) {
	QApplication::setFont(*param1);
}

QFontMetrics* QApplication_FontMetrics() {
	QFontMetrics ret = QApplication::fontMetrics();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFontMetrics*>(new QFontMetrics(ret));
}

void QApplication_SetWindowIcon(QIcon* icon) {
	QApplication::setWindowIcon(*icon);
}

QIcon* QApplication_WindowIcon() {
	QIcon ret = QApplication::windowIcon();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(ret));
}

void QApplication_AllWidgets(QWidget*** _out, size_t* _out_len) {
	QWidgetList ret = QApplication::allWidgets();
	// Convert QList<> from C++ memory to manually-managed C memory
	QWidget** __out = static_cast<QWidget**>(malloc(sizeof(QWidget*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QApplication_TopLevelWidgets(QWidget*** _out, size_t* _out_len) {
	QWidgetList ret = QApplication::topLevelWidgets();
	// Convert QList<> from C++ memory to manually-managed C memory
	QWidget** __out = static_cast<QWidget**>(malloc(sizeof(QWidget*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

QDesktopWidget* QApplication_Desktop() {
	return QApplication::desktop();
}

QWidget* QApplication_ActivePopupWidget() {
	return QApplication::activePopupWidget();
}

QWidget* QApplication_ActiveModalWidget() {
	return QApplication::activeModalWidget();
}

QWidget* QApplication_FocusWidget() {
	return QApplication::focusWidget();
}

QWidget* QApplication_ActiveWindow() {
	return QApplication::activeWindow();
}

void QApplication_SetActiveWindow(QWidget* act) {
	QApplication::setActiveWindow(act);
}

QWidget* QApplication_WidgetAt(QPoint* p) {
	return QApplication::widgetAt(*p);
}

QWidget* QApplication_WidgetAt2(int x, int y) {
	return QApplication::widgetAt(static_cast<int>(x), static_cast<int>(y));
}

QWidget* QApplication_TopLevelAt(QPoint* p) {
	return QApplication::topLevelAt(*p);
}

QWidget* QApplication_TopLevelAt2(int x, int y) {
	return QApplication::topLevelAt(static_cast<int>(x), static_cast<int>(y));
}

void QApplication_Beep() {
	QApplication::beep();
}

void QApplication_Alert(QWidget* widget) {
	QApplication::alert(widget);
}

void QApplication_SetCursorFlashTime(int cursorFlashTime) {
	QApplication::setCursorFlashTime(static_cast<int>(cursorFlashTime));
}

int QApplication_CursorFlashTime() {
	return QApplication::cursorFlashTime();
}

void QApplication_SetDoubleClickInterval(int doubleClickInterval) {
	QApplication::setDoubleClickInterval(static_cast<int>(doubleClickInterval));
}

int QApplication_DoubleClickInterval() {
	return QApplication::doubleClickInterval();
}

void QApplication_SetKeyboardInputInterval(int keyboardInputInterval) {
	QApplication::setKeyboardInputInterval(static_cast<int>(keyboardInputInterval));
}

int QApplication_KeyboardInputInterval() {
	return QApplication::keyboardInputInterval();
}

void QApplication_SetWheelScrollLines(int wheelScrollLines) {
	QApplication::setWheelScrollLines(static_cast<int>(wheelScrollLines));
}

int QApplication_WheelScrollLines() {
	return QApplication::wheelScrollLines();
}

void QApplication_SetGlobalStrut(QSize* globalStrut) {
	QApplication::setGlobalStrut(*globalStrut);
}

QSize* QApplication_GlobalStrut() {
	QSize ret = QApplication::globalStrut();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QApplication_SetStartDragTime(int ms) {
	QApplication::setStartDragTime(static_cast<int>(ms));
}

int QApplication_StartDragTime() {
	return QApplication::startDragTime();
}

void QApplication_SetStartDragDistance(int l) {
	QApplication::setStartDragDistance(static_cast<int>(l));
}

int QApplication_StartDragDistance() {
	return QApplication::startDragDistance();
}

bool QApplication_IsEffectEnabled(uintptr_t param1) {
	return QApplication::isEffectEnabled(static_cast<Qt::UIEffect>(param1));
}

void QApplication_SetEffectEnabled(uintptr_t param1) {
	QApplication::setEffectEnabled(static_cast<Qt::UIEffect>(param1));
}

int QApplication_Exec() {
	return QApplication::exec();
}

bool QApplication_Notify(QApplication* self, QObject* param1, QEvent* param2) {
	return self->notify(param1, param2);
}

void QApplication_FocusChanged(QApplication* self, QWidget* old, QWidget* now) {
	self->focusChanged(old, now);
}

void QApplication_connect_FocusChanged(QApplication* self, void* slot) {
	QApplication::connect(self, static_cast<void (QApplication::*)(QWidget*, QWidget*)>(&QApplication::focusChanged), self, [=](QWidget* old, QWidget* now) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QApplication_StyleSheet(QApplication* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QApplication*>(self)->styleSheet();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QApplication_SetStyleSheet(QApplication* self, const char* sheet, size_t sheet_Strlen) {
	QString sheet_QString = QString::fromUtf8(sheet, sheet_Strlen);
	self->setStyleSheet(sheet_QString);
}

void QApplication_SetAutoSipEnabled(QApplication* self, const bool enabled) {
	self->setAutoSipEnabled(enabled);
}

bool QApplication_AutoSipEnabled(QApplication* self) {
	return const_cast<const QApplication*>(self)->autoSipEnabled();
}

void QApplication_CloseAllWindows() {
	QApplication::closeAllWindows();
}

void QApplication_AboutQt() {
	QApplication::aboutQt();
}

void QApplication_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QApplication::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QApplication_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QApplication::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QApplication_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QApplication::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QApplication_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QApplication::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QApplication_SetPalette2(QPalette* param1, const char* className) {
	QApplication::setPalette(*param1, className);
}

void QApplication_SetFont2(QFont* param1, const char* className) {
	QApplication::setFont(*param1, className);
}

void QApplication_Alert2(QWidget* widget, int duration) {
	QApplication::alert(widget, static_cast<int>(duration));
}

void QApplication_SetEffectEnabled2(uintptr_t param1, bool enable) {
	QApplication::setEffectEnabled(static_cast<Qt::UIEffect>(param1), enable);
}

void QApplication_Delete(QApplication* self) {
	delete self;
}

