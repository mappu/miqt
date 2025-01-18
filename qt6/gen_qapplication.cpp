#include <QApplication>
#include <QCoreApplication>
#include <QEvent>
#include <QFont>
#include <QFontMetrics>
#include <QGuiApplication>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QPalette>
#include <QPoint>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QWidget>
#include <qapplication.h>
#include "gen_qapplication.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QApplication_FocusChanged(intptr_t, QWidget*, QWidget*);
bool miqt_exec_callback_QApplication_Notify(void*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QApplication_Event(void*, intptr_t, QEvent*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQApplication final : public QApplication {
public:

	MiqtVirtualQApplication(int& argc, char** argv): QApplication(argc, argv) {};
	MiqtVirtualQApplication(int& argc, char** argv, int param3): QApplication(argc, argv, param3) {};

	virtual ~MiqtVirtualQApplication() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Notify = 0;

	// Subclass to allow providing a Go implementation
	virtual bool notify(QObject* param1, QEvent* param2) override {
		if (handle__Notify == 0) {
			return QApplication::notify(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QApplication_Notify(this, handle__Notify, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Notify(QObject* param1, QEvent* param2) {

		return QApplication::notify(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__Event == 0) {
			return QApplication::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QApplication_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* param1) {

		return QApplication::event(param1);

	}

};

QApplication* QApplication_new(int* argc, char** argv) {
	return new MiqtVirtualQApplication(static_cast<int&>(*argc), argv);
}

QApplication* QApplication_new2(int* argc, char** argv, int param3) {
	return new MiqtVirtualQApplication(static_cast<int&>(*argc), argv, static_cast<int>(param3));
}

void QApplication_virtbase(QApplication* src, QGuiApplication** outptr_QGuiApplication) {
	*outptr_QGuiApplication = static_cast<QGuiApplication*>(src);
}

QMetaObject* QApplication_MetaObject(const QApplication* self) {
	return (QMetaObject*) self->metaObject();
}

void* QApplication_Metacast(QApplication* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QApplication_Tr(const char* s) {
	QString _ret = QApplication::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QStyle* QApplication_Style() {
	return QApplication::style();
}

void QApplication_SetStyle(QStyle* style) {
	QApplication::setStyle(style);
}

QStyle* QApplication_SetStyleWithStyle(struct miqt_string style) {
	QString style_QString = QString::fromUtf8(style.data, style.len);
	return QApplication::setStyle(style_QString);
}

QPalette* QApplication_Palette(QWidget* param1) {
	return new QPalette(QApplication::palette(param1));
}

QPalette* QApplication_PaletteWithClassName(const char* className) {
	return new QPalette(QApplication::palette(className));
}

void QApplication_SetPalette(QPalette* param1) {
	QApplication::setPalette(*param1);
}

QFont* QApplication_Font() {
	return new QFont(QApplication::font());
}

QFont* QApplication_FontWithQWidget(QWidget* param1) {
	return new QFont(QApplication::font(param1));
}

QFont* QApplication_FontWithClassName(const char* className) {
	return new QFont(QApplication::font(className));
}

void QApplication_SetFont(QFont* param1) {
	QApplication::setFont(*param1);
}

QFontMetrics* QApplication_FontMetrics() {
	return new QFontMetrics(QApplication::fontMetrics());
}

struct miqt_array /* of QWidget* */  QApplication_AllWidgets() {
	QWidgetList _ret = QApplication::allWidgets();
	// Convert QList<> from C++ memory to manually-managed C memory
	QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QWidget* */  QApplication_TopLevelWidgets() {
	QWidgetList _ret = QApplication::topLevelWidgets();
	// Convert QList<> from C++ memory to manually-managed C memory
	QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
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

bool QApplication_IsEffectEnabled(int param1) {
	return QApplication::isEffectEnabled(static_cast<Qt::UIEffect>(param1));
}

void QApplication_SetEffectEnabled(int param1) {
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

void QApplication_connect_FocusChanged(QApplication* self, intptr_t slot) {
	MiqtVirtualQApplication::connect(self, static_cast<void (QApplication::*)(QWidget*, QWidget*)>(&QApplication::focusChanged), self, [=](QWidget* old, QWidget* now) {
		QWidget* sigval1 = old;
		QWidget* sigval2 = now;
		miqt_exec_callback_QApplication_FocusChanged(slot, sigval1, sigval2);
	});
}

struct miqt_string QApplication_StyleSheet(const QApplication* self) {
	QString _ret = self->styleSheet();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QApplication_SetStyleSheet(QApplication* self, struct miqt_string sheet) {
	QString sheet_QString = QString::fromUtf8(sheet.data, sheet.len);
	self->setStyleSheet(sheet_QString);
}

void QApplication_SetAutoSipEnabled(QApplication* self, const bool enabled) {
	self->setAutoSipEnabled(enabled);
}

bool QApplication_AutoSipEnabled(const QApplication* self) {
	return self->autoSipEnabled();
}

void QApplication_CloseAllWindows() {
	QApplication::closeAllWindows();
}

void QApplication_AboutQt() {
	QApplication::aboutQt();
}

struct miqt_string QApplication_Tr2(const char* s, const char* c) {
	QString _ret = QApplication::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QApplication_Tr3(const char* s, const char* c, int n) {
	QString _ret = QApplication::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
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

void QApplication_SetEffectEnabled2(int param1, bool enable) {
	QApplication::setEffectEnabled(static_cast<Qt::UIEffect>(param1), enable);
}

bool QApplication_override_virtual_Notify(void* self, intptr_t slot) {
	MiqtVirtualQApplication* self_cast = dynamic_cast<MiqtVirtualQApplication*>( (QApplication*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Notify = slot;
	return true;
}

bool QApplication_virtualbase_Notify(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQApplication*)(self) )->virtualbase_Notify(param1, param2);
}

bool QApplication_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQApplication* self_cast = dynamic_cast<MiqtVirtualQApplication*>( (QApplication*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QApplication_virtualbase_Event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQApplication*)(self) )->virtualbase_Event(param1);
}

void QApplication_Delete(QApplication* self) {
	delete self;
}

