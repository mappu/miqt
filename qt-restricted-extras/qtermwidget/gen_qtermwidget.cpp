#include <QAction>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QHideEvent>
#include <QIODevice>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTermWidget>
#include <QTermWidgetInterface>
#include <QTextCodec>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qtermwidget.h>
#include "gen_qtermwidget.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QTermWidget_finished(intptr_t);
void miqt_exec_callback_QTermWidget_copyAvailable(intptr_t, bool);
void miqt_exec_callback_QTermWidget_termGetFocus(intptr_t);
void miqt_exec_callback_QTermWidget_termLostFocus(intptr_t);
void miqt_exec_callback_QTermWidget_termKeyPressed(intptr_t, QKeyEvent*);
void miqt_exec_callback_QTermWidget_urlActivated(intptr_t, QUrl*, bool);
void miqt_exec_callback_QTermWidget_bell(intptr_t, struct miqt_string);
void miqt_exec_callback_QTermWidget_activity(intptr_t);
void miqt_exec_callback_QTermWidget_silence(intptr_t);
void miqt_exec_callback_QTermWidget_sendData(intptr_t, const char*, int);
void miqt_exec_callback_QTermWidget_profileChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QTermWidget_titleChanged(intptr_t);
void miqt_exec_callback_QTermWidget_receivedData(intptr_t, struct miqt_string);
QSize* miqt_exec_callback_QTermWidget_sizeHint(const QTermWidget*, intptr_t);
void miqt_exec_callback_QTermWidget_setTerminalSizeHint(QTermWidget*, intptr_t, bool);
bool miqt_exec_callback_QTermWidget_terminalSizeHint(QTermWidget*, intptr_t);
void miqt_exec_callback_QTermWidget_startShellProgram(QTermWidget*, intptr_t);
void miqt_exec_callback_QTermWidget_startTerminalTeletype(QTermWidget*, intptr_t);
int miqt_exec_callback_QTermWidget_getShellPID(QTermWidget*, intptr_t);
void miqt_exec_callback_QTermWidget_changeDir(QTermWidget*, intptr_t, struct miqt_string);
void miqt_exec_callback_QTermWidget_setTerminalFont(QTermWidget*, intptr_t, QFont*);
QFont* miqt_exec_callback_QTermWidget_getTerminalFont(QTermWidget*, intptr_t);
void miqt_exec_callback_QTermWidget_setTerminalOpacity(QTermWidget*, intptr_t, double);
void miqt_exec_callback_QTermWidget_setTerminalBackgroundImage(QTermWidget*, intptr_t, struct miqt_string);
void miqt_exec_callback_QTermWidget_setTerminalBackgroundMode(QTermWidget*, intptr_t, int);
void miqt_exec_callback_QTermWidget_setEnvironment(QTermWidget*, intptr_t, struct miqt_array /* of struct miqt_string */ );
void miqt_exec_callback_QTermWidget_setShellProgram(QTermWidget*, intptr_t, struct miqt_string);
void miqt_exec_callback_QTermWidget_setWorkingDirectory(QTermWidget*, intptr_t, struct miqt_string);
struct miqt_string miqt_exec_callback_QTermWidget_workingDirectory(QTermWidget*, intptr_t);
void miqt_exec_callback_QTermWidget_setArgs(QTermWidget*, intptr_t, struct miqt_array /* of struct miqt_string */ );
void miqt_exec_callback_QTermWidget_setTextCodec(QTermWidget*, intptr_t, QTextCodec*);
void miqt_exec_callback_QTermWidget_setColorScheme(QTermWidget*, intptr_t, struct miqt_string);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QTermWidget_getAvailableColorSchemes(QTermWidget*, intptr_t);
void miqt_exec_callback_QTermWidget_setHistorySize(QTermWidget*, intptr_t, int);
int miqt_exec_callback_QTermWidget_historySize(const QTermWidget*, intptr_t);
void miqt_exec_callback_QTermWidget_setScrollBarPosition(QTermWidget*, intptr_t, int);
void miqt_exec_callback_QTermWidget_scrollToEnd(QTermWidget*, intptr_t);
void miqt_exec_callback_QTermWidget_sendText(QTermWidget*, intptr_t, struct miqt_string);
void miqt_exec_callback_QTermWidget_sendKeyEvent(QTermWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTermWidget_setFlowControlEnabled(QTermWidget*, intptr_t, bool);
bool miqt_exec_callback_QTermWidget_flowControlEnabled(QTermWidget*, intptr_t);
void miqt_exec_callback_QTermWidget_setFlowControlWarningEnabled(QTermWidget*, intptr_t, bool);
struct miqt_string miqt_exec_callback_QTermWidget_keyBindings(QTermWidget*, intptr_t);
void miqt_exec_callback_QTermWidget_setMotionAfterPasting(QTermWidget*, intptr_t, int);
int miqt_exec_callback_QTermWidget_historyLinesCount(QTermWidget*, intptr_t);
int miqt_exec_callback_QTermWidget_screenColumnsCount(QTermWidget*, intptr_t);
int miqt_exec_callback_QTermWidget_screenLinesCount(QTermWidget*, intptr_t);
void miqt_exec_callback_QTermWidget_setSelectionStart(QTermWidget*, intptr_t, int, int);
void miqt_exec_callback_QTermWidget_setSelectionEnd(QTermWidget*, intptr_t, int, int);
void miqt_exec_callback_QTermWidget_getSelectionStart(QTermWidget*, intptr_t, int*, int*);
void miqt_exec_callback_QTermWidget_getSelectionEnd(QTermWidget*, intptr_t, int*, int*);
struct miqt_string miqt_exec_callback_QTermWidget_selectedText(QTermWidget*, intptr_t, bool);
void miqt_exec_callback_QTermWidget_setMonitorActivity(QTermWidget*, intptr_t, bool);
void miqt_exec_callback_QTermWidget_setMonitorSilence(QTermWidget*, intptr_t, bool);
void miqt_exec_callback_QTermWidget_setSilenceTimeout(QTermWidget*, intptr_t, int);
struct miqt_array /* of QAction* */  miqt_exec_callback_QTermWidget_filterActions(QTermWidget*, intptr_t, QPoint*);
int miqt_exec_callback_QTermWidget_getPtySlaveFd(const QTermWidget*, intptr_t);
void miqt_exec_callback_QTermWidget_setBlinkingCursor(QTermWidget*, intptr_t, bool);
void miqt_exec_callback_QTermWidget_setBidiEnabled(QTermWidget*, intptr_t, bool);
bool miqt_exec_callback_QTermWidget_isBidiEnabled(QTermWidget*, intptr_t);
void miqt_exec_callback_QTermWidget_setAutoClose(QTermWidget*, intptr_t, bool);
struct miqt_string miqt_exec_callback_QTermWidget_title(const QTermWidget*, intptr_t);
struct miqt_string miqt_exec_callback_QTermWidget_icon(const QTermWidget*, intptr_t);
bool miqt_exec_callback_QTermWidget_isTitleChanged(const QTermWidget*, intptr_t);
void miqt_exec_callback_QTermWidget_bracketText(QTermWidget*, intptr_t, struct miqt_string);
void miqt_exec_callback_QTermWidget_disableBracketedPasteMode(QTermWidget*, intptr_t, bool);
bool miqt_exec_callback_QTermWidget_bracketedPasteModeIsDisabled(const QTermWidget*, intptr_t);
void miqt_exec_callback_QTermWidget_setMargin(QTermWidget*, intptr_t, int);
int miqt_exec_callback_QTermWidget_getMargin(const QTermWidget*, intptr_t);
void miqt_exec_callback_QTermWidget_setDrawLineChars(QTermWidget*, intptr_t, bool);
void miqt_exec_callback_QTermWidget_setBoldIntense(QTermWidget*, intptr_t, bool);
void miqt_exec_callback_QTermWidget_setConfirmMultilinePaste(QTermWidget*, intptr_t, bool);
void miqt_exec_callback_QTermWidget_setTrimPastedTrailingNewlines(QTermWidget*, intptr_t, bool);
QTermWidgetInterface* miqt_exec_callback_QTermWidget_createWidget(const QTermWidget*, intptr_t, int);
void miqt_exec_callback_QTermWidget_resizeEvent(QTermWidget*, intptr_t, QResizeEvent*);
int miqt_exec_callback_QTermWidget_devType(const QTermWidget*, intptr_t);
void miqt_exec_callback_QTermWidget_setVisible(QTermWidget*, intptr_t, bool);
QSize* miqt_exec_callback_QTermWidget_minimumSizeHint(const QTermWidget*, intptr_t);
int miqt_exec_callback_QTermWidget_heightForWidth(const QTermWidget*, intptr_t, int);
bool miqt_exec_callback_QTermWidget_hasHeightForWidth(const QTermWidget*, intptr_t);
QPaintEngine* miqt_exec_callback_QTermWidget_paintEngine(const QTermWidget*, intptr_t);
bool miqt_exec_callback_QTermWidget_event(QTermWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QTermWidget_mousePressEvent(QTermWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTermWidget_mouseReleaseEvent(QTermWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTermWidget_mouseDoubleClickEvent(QTermWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTermWidget_mouseMoveEvent(QTermWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTermWidget_wheelEvent(QTermWidget*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QTermWidget_keyPressEvent(QTermWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTermWidget_keyReleaseEvent(QTermWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTermWidget_focusInEvent(QTermWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTermWidget_focusOutEvent(QTermWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTermWidget_enterEvent(QTermWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QTermWidget_leaveEvent(QTermWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QTermWidget_paintEvent(QTermWidget*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QTermWidget_moveEvent(QTermWidget*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QTermWidget_closeEvent(QTermWidget*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QTermWidget_contextMenuEvent(QTermWidget*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QTermWidget_tabletEvent(QTermWidget*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QTermWidget_actionEvent(QTermWidget*, intptr_t, QActionEvent*);
void miqt_exec_callback_QTermWidget_dragEnterEvent(QTermWidget*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QTermWidget_dragMoveEvent(QTermWidget*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QTermWidget_dragLeaveEvent(QTermWidget*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QTermWidget_dropEvent(QTermWidget*, intptr_t, QDropEvent*);
void miqt_exec_callback_QTermWidget_showEvent(QTermWidget*, intptr_t, QShowEvent*);
void miqt_exec_callback_QTermWidget_hideEvent(QTermWidget*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QTermWidget_nativeEvent(QTermWidget*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QTermWidget_changeEvent(QTermWidget*, intptr_t, QEvent*);
int miqt_exec_callback_QTermWidget_metric(const QTermWidget*, intptr_t, int);
void miqt_exec_callback_QTermWidget_initPainter(const QTermWidget*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QTermWidget_redirected(const QTermWidget*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QTermWidget_sharedPainter(const QTermWidget*, intptr_t);
void miqt_exec_callback_QTermWidget_inputMethodEvent(QTermWidget*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QTermWidget_inputMethodQuery(const QTermWidget*, intptr_t, int);
bool miqt_exec_callback_QTermWidget_focusNextPrevChild(QTermWidget*, intptr_t, bool);
bool miqt_exec_callback_QTermWidget_eventFilter(QTermWidget*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QTermWidget_timerEvent(QTermWidget*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QTermWidget_childEvent(QTermWidget*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTermWidget_customEvent(QTermWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QTermWidget_connectNotify(QTermWidget*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTermWidget_disconnectNotify(QTermWidget*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQTermWidget final : public QTermWidget {
public:

	MiqtVirtualQTermWidget(QWidget* parent): QTermWidget(parent) {};
	MiqtVirtualQTermWidget(int startnow): QTermWidget(startnow) {};
	MiqtVirtualQTermWidget(): QTermWidget() {};
	MiqtVirtualQTermWidget(int startnow, QWidget* parent): QTermWidget(startnow, parent) {};

	virtual ~MiqtVirtualQTermWidget() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QTermWidget::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTermWidget_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	friend QSize* QTermWidget_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setTerminalSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual void setTerminalSizeHint(bool enabled) override {
		if (handle__setTerminalSizeHint == 0) {
			QTermWidget::setTerminalSizeHint(enabled);
			return;
		}
		
		bool sigval1 = enabled;

		miqt_exec_callback_QTermWidget_setTerminalSizeHint(this, handle__setTerminalSizeHint, sigval1);

		
	}

	friend void QTermWidget_virtualbase_setTerminalSizeHint(void* self, bool enabled);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__terminalSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual bool terminalSizeHint() override {
		if (handle__terminalSizeHint == 0) {
			return QTermWidget::terminalSizeHint();
		}
		

		bool callback_return_value = miqt_exec_callback_QTermWidget_terminalSizeHint(this, handle__terminalSizeHint);

		return callback_return_value;
	}

	friend bool QTermWidget_virtualbase_terminalSizeHint(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__startShellProgram = 0;

	// Subclass to allow providing a Go implementation
	virtual void startShellProgram() override {
		if (handle__startShellProgram == 0) {
			QTermWidget::startShellProgram();
			return;
		}
		

		miqt_exec_callback_QTermWidget_startShellProgram(this, handle__startShellProgram);

		
	}

	friend void QTermWidget_virtualbase_startShellProgram(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__startTerminalTeletype = 0;

	// Subclass to allow providing a Go implementation
	virtual void startTerminalTeletype() override {
		if (handle__startTerminalTeletype == 0) {
			QTermWidget::startTerminalTeletype();
			return;
		}
		

		miqt_exec_callback_QTermWidget_startTerminalTeletype(this, handle__startTerminalTeletype);

		
	}

	friend void QTermWidget_virtualbase_startTerminalTeletype(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__getShellPID = 0;

	// Subclass to allow providing a Go implementation
	virtual int getShellPID() override {
		if (handle__getShellPID == 0) {
			return QTermWidget::getShellPID();
		}
		

		int callback_return_value = miqt_exec_callback_QTermWidget_getShellPID(this, handle__getShellPID);

		return static_cast<int>(callback_return_value);
	}

	friend int QTermWidget_virtualbase_getShellPID(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeDir = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeDir(const QString& dir) override {
		if (handle__changeDir == 0) {
			QTermWidget::changeDir(dir);
			return;
		}
		
		const QString dir_ret = dir;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray dir_b = dir_ret.toUtf8();
		struct miqt_string dir_ms;
		dir_ms.len = dir_b.length();
		dir_ms.data = static_cast<char*>(malloc(dir_ms.len));
		memcpy(dir_ms.data, dir_b.data(), dir_ms.len);
		struct miqt_string sigval1 = dir_ms;

		miqt_exec_callback_QTermWidget_changeDir(this, handle__changeDir, sigval1);

		
	}

	friend void QTermWidget_virtualbase_changeDir(void* self, struct miqt_string dir);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setTerminalFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void setTerminalFont(const QFont& font) override {
		if (handle__setTerminalFont == 0) {
			QTermWidget::setTerminalFont(font);
			return;
		}
		
		const QFont& font_ret = font;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&font_ret);

		miqt_exec_callback_QTermWidget_setTerminalFont(this, handle__setTerminalFont, sigval1);

		
	}

	friend void QTermWidget_virtualbase_setTerminalFont(void* self, QFont* font);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__getTerminalFont = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont getTerminalFont() override {
		if (handle__getTerminalFont == 0) {
			return QTermWidget::getTerminalFont();
		}
		

		QFont* callback_return_value = miqt_exec_callback_QTermWidget_getTerminalFont(this, handle__getTerminalFont);

		return *callback_return_value;
	}

	friend QFont* QTermWidget_virtualbase_getTerminalFont(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setTerminalOpacity = 0;

	// Subclass to allow providing a Go implementation
	virtual void setTerminalOpacity(qreal level) override {
		if (handle__setTerminalOpacity == 0) {
			QTermWidget::setTerminalOpacity(level);
			return;
		}
		
		qreal level_ret = level;
		double sigval1 = static_cast<double>(level_ret);

		miqt_exec_callback_QTermWidget_setTerminalOpacity(this, handle__setTerminalOpacity, sigval1);

		
	}

	friend void QTermWidget_virtualbase_setTerminalOpacity(void* self, double level);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setTerminalBackgroundImage = 0;

	// Subclass to allow providing a Go implementation
	virtual void setTerminalBackgroundImage(const QString& backgroundImage) override {
		if (handle__setTerminalBackgroundImage == 0) {
			QTermWidget::setTerminalBackgroundImage(backgroundImage);
			return;
		}
		
		const QString backgroundImage_ret = backgroundImage;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray backgroundImage_b = backgroundImage_ret.toUtf8();
		struct miqt_string backgroundImage_ms;
		backgroundImage_ms.len = backgroundImage_b.length();
		backgroundImage_ms.data = static_cast<char*>(malloc(backgroundImage_ms.len));
		memcpy(backgroundImage_ms.data, backgroundImage_b.data(), backgroundImage_ms.len);
		struct miqt_string sigval1 = backgroundImage_ms;

		miqt_exec_callback_QTermWidget_setTerminalBackgroundImage(this, handle__setTerminalBackgroundImage, sigval1);

		
	}

	friend void QTermWidget_virtualbase_setTerminalBackgroundImage(void* self, struct miqt_string backgroundImage);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setTerminalBackgroundMode = 0;

	// Subclass to allow providing a Go implementation
	virtual void setTerminalBackgroundMode(int mode) override {
		if (handle__setTerminalBackgroundMode == 0) {
			QTermWidget::setTerminalBackgroundMode(mode);
			return;
		}
		
		int sigval1 = mode;

		miqt_exec_callback_QTermWidget_setTerminalBackgroundMode(this, handle__setTerminalBackgroundMode, sigval1);

		
	}

	friend void QTermWidget_virtualbase_setTerminalBackgroundMode(void* self, int mode);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setEnvironment = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEnvironment(const QStringList& environment) override {
		if (handle__setEnvironment == 0) {
			QTermWidget::setEnvironment(environment);
			return;
		}
		
		const QStringList& environment_ret = environment;
		// Convert QList<> from C++ memory to manually-managed C memory
		struct miqt_string* environment_arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * environment_ret.length()));
		for (size_t i = 0, e = environment_ret.length(); i < e; ++i) {
			QString environment_lv_ret = environment_ret[i];
			// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
			QByteArray environment_lv_b = environment_lv_ret.toUtf8();
			struct miqt_string environment_lv_ms;
			environment_lv_ms.len = environment_lv_b.length();
			environment_lv_ms.data = static_cast<char*>(malloc(environment_lv_ms.len));
			memcpy(environment_lv_ms.data, environment_lv_b.data(), environment_lv_ms.len);
			environment_arr[i] = environment_lv_ms;
		}
		struct miqt_array environment_out;
		environment_out.len = environment_ret.length();
		environment_out.data = static_cast<void*>(environment_arr);
		struct miqt_array /* of struct miqt_string */  sigval1 = environment_out;

		miqt_exec_callback_QTermWidget_setEnvironment(this, handle__setEnvironment, sigval1);

		
	}

	friend void QTermWidget_virtualbase_setEnvironment(void* self, struct miqt_array /* of struct miqt_string */  environment);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setShellProgram = 0;

	// Subclass to allow providing a Go implementation
	virtual void setShellProgram(const QString& program) override {
		if (handle__setShellProgram == 0) {
			QTermWidget::setShellProgram(program);
			return;
		}
		
		const QString program_ret = program;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray program_b = program_ret.toUtf8();
		struct miqt_string program_ms;
		program_ms.len = program_b.length();
		program_ms.data = static_cast<char*>(malloc(program_ms.len));
		memcpy(program_ms.data, program_b.data(), program_ms.len);
		struct miqt_string sigval1 = program_ms;

		miqt_exec_callback_QTermWidget_setShellProgram(this, handle__setShellProgram, sigval1);

		
	}

	friend void QTermWidget_virtualbase_setShellProgram(void* self, struct miqt_string program);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setWorkingDirectory = 0;

	// Subclass to allow providing a Go implementation
	virtual void setWorkingDirectory(const QString& dir) override {
		if (handle__setWorkingDirectory == 0) {
			QTermWidget::setWorkingDirectory(dir);
			return;
		}
		
		const QString dir_ret = dir;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray dir_b = dir_ret.toUtf8();
		struct miqt_string dir_ms;
		dir_ms.len = dir_b.length();
		dir_ms.data = static_cast<char*>(malloc(dir_ms.len));
		memcpy(dir_ms.data, dir_b.data(), dir_ms.len);
		struct miqt_string sigval1 = dir_ms;

		miqt_exec_callback_QTermWidget_setWorkingDirectory(this, handle__setWorkingDirectory, sigval1);

		
	}

	friend void QTermWidget_virtualbase_setWorkingDirectory(void* self, struct miqt_string dir);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__workingDirectory = 0;

	// Subclass to allow providing a Go implementation
	virtual QString workingDirectory() override {
		if (handle__workingDirectory == 0) {
			return QTermWidget::workingDirectory();
		}
		

		struct miqt_string callback_return_value = miqt_exec_callback_QTermWidget_workingDirectory(this, handle__workingDirectory);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	friend struct miqt_string QTermWidget_virtualbase_workingDirectory(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setArgs = 0;

	// Subclass to allow providing a Go implementation
	virtual void setArgs(const QStringList& args) override {
		if (handle__setArgs == 0) {
			QTermWidget::setArgs(args);
			return;
		}
		
		const QStringList& args_ret = args;
		// Convert QList<> from C++ memory to manually-managed C memory
		struct miqt_string* args_arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * args_ret.length()));
		for (size_t i = 0, e = args_ret.length(); i < e; ++i) {
			QString args_lv_ret = args_ret[i];
			// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
			QByteArray args_lv_b = args_lv_ret.toUtf8();
			struct miqt_string args_lv_ms;
			args_lv_ms.len = args_lv_b.length();
			args_lv_ms.data = static_cast<char*>(malloc(args_lv_ms.len));
			memcpy(args_lv_ms.data, args_lv_b.data(), args_lv_ms.len);
			args_arr[i] = args_lv_ms;
		}
		struct miqt_array args_out;
		args_out.len = args_ret.length();
		args_out.data = static_cast<void*>(args_arr);
		struct miqt_array /* of struct miqt_string */  sigval1 = args_out;

		miqt_exec_callback_QTermWidget_setArgs(this, handle__setArgs, sigval1);

		
	}

	friend void QTermWidget_virtualbase_setArgs(void* self, struct miqt_array /* of struct miqt_string */  args);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setTextCodec = 0;

	// Subclass to allow providing a Go implementation
	virtual void setTextCodec(QTextCodec* codec) override {
		if (handle__setTextCodec == 0) {
			QTermWidget::setTextCodec(codec);
			return;
		}
		
		QTextCodec* sigval1 = codec;

		miqt_exec_callback_QTermWidget_setTextCodec(this, handle__setTextCodec, sigval1);

		
	}

	friend void QTermWidget_virtualbase_setTextCodec(void* self, QTextCodec* codec);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setColorScheme = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColorScheme(const QString& name) override {
		if (handle__setColorScheme == 0) {
			QTermWidget::setColorScheme(name);
			return;
		}
		
		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;

		miqt_exec_callback_QTermWidget_setColorScheme(this, handle__setColorScheme, sigval1);

		
	}

	friend void QTermWidget_virtualbase_setColorScheme(void* self, struct miqt_string name);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__getAvailableColorSchemes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList getAvailableColorSchemes() override {
		if (handle__getAvailableColorSchemes == 0) {
			return QTermWidget::getAvailableColorSchemes();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QTermWidget_getAvailableColorSchemes(this, handle__getAvailableColorSchemes);
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}

		return callback_return_value_QList;
	}

	friend struct miqt_array /* of struct miqt_string */  QTermWidget_virtualbase_getAvailableColorSchemes(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setHistorySize = 0;

	// Subclass to allow providing a Go implementation
	virtual void setHistorySize(int lines) override {
		if (handle__setHistorySize == 0) {
			QTermWidget::setHistorySize(lines);
			return;
		}
		
		int sigval1 = lines;

		miqt_exec_callback_QTermWidget_setHistorySize(this, handle__setHistorySize, sigval1);

		
	}

	friend void QTermWidget_virtualbase_setHistorySize(void* self, int lines);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__historySize = 0;

	// Subclass to allow providing a Go implementation
	virtual int historySize() const override {
		if (handle__historySize == 0) {
			return QTermWidget::historySize();
		}
		

		int callback_return_value = miqt_exec_callback_QTermWidget_historySize(this, handle__historySize);

		return static_cast<int>(callback_return_value);
	}

	friend int QTermWidget_virtualbase_historySize(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setScrollBarPosition = 0;

	// Subclass to allow providing a Go implementation
	virtual void setScrollBarPosition(QTermWidgetInterface::ScrollBarPosition scrollBarPosition) override {
		if (handle__setScrollBarPosition == 0) {
			QTermWidget::setScrollBarPosition(scrollBarPosition);
			return;
		}
		
		QTermWidgetInterface::ScrollBarPosition scrollBarPosition_ret = scrollBarPosition;
		int sigval1 = static_cast<int>(scrollBarPosition_ret);

		miqt_exec_callback_QTermWidget_setScrollBarPosition(this, handle__setScrollBarPosition, sigval1);

		
	}

	friend void QTermWidget_virtualbase_setScrollBarPosition(void* self, int scrollBarPosition);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollToEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollToEnd() override {
		if (handle__scrollToEnd == 0) {
			QTermWidget::scrollToEnd();
			return;
		}
		

		miqt_exec_callback_QTermWidget_scrollToEnd(this, handle__scrollToEnd);

		
	}

	friend void QTermWidget_virtualbase_scrollToEnd(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sendText = 0;

	// Subclass to allow providing a Go implementation
	virtual void sendText(const QString& text) override {
		if (handle__sendText == 0) {
			QTermWidget::sendText(text);
			return;
		}
		
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;

		miqt_exec_callback_QTermWidget_sendText(this, handle__sendText, sigval1);

		
	}

	friend void QTermWidget_virtualbase_sendText(void* self, struct miqt_string text);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sendKeyEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void sendKeyEvent(QKeyEvent* e) override {
		if (handle__sendKeyEvent == 0) {
			QTermWidget::sendKeyEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QTermWidget_sendKeyEvent(this, handle__sendKeyEvent, sigval1);

		
	}

	friend void QTermWidget_virtualbase_sendKeyEvent(void* self, QKeyEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFlowControlEnabled = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFlowControlEnabled(bool enabled) override {
		if (handle__setFlowControlEnabled == 0) {
			QTermWidget::setFlowControlEnabled(enabled);
			return;
		}
		
		bool sigval1 = enabled;

		miqt_exec_callback_QTermWidget_setFlowControlEnabled(this, handle__setFlowControlEnabled, sigval1);

		
	}

	friend void QTermWidget_virtualbase_setFlowControlEnabled(void* self, bool enabled);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__flowControlEnabled = 0;

	// Subclass to allow providing a Go implementation
	virtual bool flowControlEnabled() override {
		if (handle__flowControlEnabled == 0) {
			return QTermWidget::flowControlEnabled();
		}
		

		bool callback_return_value = miqt_exec_callback_QTermWidget_flowControlEnabled(this, handle__flowControlEnabled);

		return callback_return_value;
	}

	friend bool QTermWidget_virtualbase_flowControlEnabled(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFlowControlWarningEnabled = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFlowControlWarningEnabled(bool enabled) override {
		if (handle__setFlowControlWarningEnabled == 0) {
			QTermWidget::setFlowControlWarningEnabled(enabled);
			return;
		}
		
		bool sigval1 = enabled;

		miqt_exec_callback_QTermWidget_setFlowControlWarningEnabled(this, handle__setFlowControlWarningEnabled, sigval1);

		
	}

	friend void QTermWidget_virtualbase_setFlowControlWarningEnabled(void* self, bool enabled);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyBindings = 0;

	// Subclass to allow providing a Go implementation
	virtual QString keyBindings() override {
		if (handle__keyBindings == 0) {
			return QTermWidget::keyBindings();
		}
		

		struct miqt_string callback_return_value = miqt_exec_callback_QTermWidget_keyBindings(this, handle__keyBindings);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	friend struct miqt_string QTermWidget_virtualbase_keyBindings(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setMotionAfterPasting = 0;

	// Subclass to allow providing a Go implementation
	virtual void setMotionAfterPasting(int motionAfterPasting) override {
		if (handle__setMotionAfterPasting == 0) {
			QTermWidget::setMotionAfterPasting(motionAfterPasting);
			return;
		}
		
		int sigval1 = motionAfterPasting;

		miqt_exec_callback_QTermWidget_setMotionAfterPasting(this, handle__setMotionAfterPasting, sigval1);

		
	}

	friend void QTermWidget_virtualbase_setMotionAfterPasting(void* self, int motionAfterPasting);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__historyLinesCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int historyLinesCount() override {
		if (handle__historyLinesCount == 0) {
			return QTermWidget::historyLinesCount();
		}
		

		int callback_return_value = miqt_exec_callback_QTermWidget_historyLinesCount(this, handle__historyLinesCount);

		return static_cast<int>(callback_return_value);
	}

	friend int QTermWidget_virtualbase_historyLinesCount(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__screenColumnsCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int screenColumnsCount() override {
		if (handle__screenColumnsCount == 0) {
			return QTermWidget::screenColumnsCount();
		}
		

		int callback_return_value = miqt_exec_callback_QTermWidget_screenColumnsCount(this, handle__screenColumnsCount);

		return static_cast<int>(callback_return_value);
	}

	friend int QTermWidget_virtualbase_screenColumnsCount(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__screenLinesCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int screenLinesCount() override {
		if (handle__screenLinesCount == 0) {
			return QTermWidget::screenLinesCount();
		}
		

		int callback_return_value = miqt_exec_callback_QTermWidget_screenLinesCount(this, handle__screenLinesCount);

		return static_cast<int>(callback_return_value);
	}

	friend int QTermWidget_virtualbase_screenLinesCount(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSelectionStart = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionStart(int row, int column) override {
		if (handle__setSelectionStart == 0) {
			QTermWidget::setSelectionStart(row, column);
			return;
		}
		
		int sigval1 = row;
		int sigval2 = column;

		miqt_exec_callback_QTermWidget_setSelectionStart(this, handle__setSelectionStart, sigval1, sigval2);

		
	}

	friend void QTermWidget_virtualbase_setSelectionStart(void* self, int row, int column);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSelectionEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionEnd(int row, int column) override {
		if (handle__setSelectionEnd == 0) {
			QTermWidget::setSelectionEnd(row, column);
			return;
		}
		
		int sigval1 = row;
		int sigval2 = column;

		miqt_exec_callback_QTermWidget_setSelectionEnd(this, handle__setSelectionEnd, sigval1, sigval2);

		
	}

	friend void QTermWidget_virtualbase_setSelectionEnd(void* self, int row, int column);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__getSelectionStart = 0;

	// Subclass to allow providing a Go implementation
	virtual void getSelectionStart(int& row, int& column) override {
		if (handle__getSelectionStart == 0) {
			QTermWidget::getSelectionStart(row, column);
			return;
		}
		
		int* sigval1 = &row;
		int* sigval2 = &column;

		miqt_exec_callback_QTermWidget_getSelectionStart(this, handle__getSelectionStart, sigval1, sigval2);

		
	}

	friend void QTermWidget_virtualbase_getSelectionStart(void* self, int* row, int* column);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__getSelectionEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual void getSelectionEnd(int& row, int& column) override {
		if (handle__getSelectionEnd == 0) {
			QTermWidget::getSelectionEnd(row, column);
			return;
		}
		
		int* sigval1 = &row;
		int* sigval2 = &column;

		miqt_exec_callback_QTermWidget_getSelectionEnd(this, handle__getSelectionEnd, sigval1, sigval2);

		
	}

	friend void QTermWidget_virtualbase_getSelectionEnd(void* self, int* row, int* column);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectedText = 0;

	// Subclass to allow providing a Go implementation
	virtual QString selectedText(bool preserveLineBreaks) override {
		if (handle__selectedText == 0) {
			return QTermWidget::selectedText(preserveLineBreaks);
		}
		
		bool sigval1 = preserveLineBreaks;

		struct miqt_string callback_return_value = miqt_exec_callback_QTermWidget_selectedText(this, handle__selectedText, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	friend struct miqt_string QTermWidget_virtualbase_selectedText(void* self, bool preserveLineBreaks);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setMonitorActivity = 0;

	// Subclass to allow providing a Go implementation
	virtual void setMonitorActivity(bool monitorActivity) override {
		if (handle__setMonitorActivity == 0) {
			QTermWidget::setMonitorActivity(monitorActivity);
			return;
		}
		
		bool sigval1 = monitorActivity;

		miqt_exec_callback_QTermWidget_setMonitorActivity(this, handle__setMonitorActivity, sigval1);

		
	}

	friend void QTermWidget_virtualbase_setMonitorActivity(void* self, bool monitorActivity);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setMonitorSilence = 0;

	// Subclass to allow providing a Go implementation
	virtual void setMonitorSilence(bool monitorSilence) override {
		if (handle__setMonitorSilence == 0) {
			QTermWidget::setMonitorSilence(monitorSilence);
			return;
		}
		
		bool sigval1 = monitorSilence;

		miqt_exec_callback_QTermWidget_setMonitorSilence(this, handle__setMonitorSilence, sigval1);

		
	}

	friend void QTermWidget_virtualbase_setMonitorSilence(void* self, bool monitorSilence);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSilenceTimeout = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSilenceTimeout(int seconds) override {
		if (handle__setSilenceTimeout == 0) {
			QTermWidget::setSilenceTimeout(seconds);
			return;
		}
		
		int sigval1 = seconds;

		miqt_exec_callback_QTermWidget_setSilenceTimeout(this, handle__setSilenceTimeout, sigval1);

		
	}

	friend void QTermWidget_virtualbase_setSilenceTimeout(void* self, int seconds);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__filterActions = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QAction *> filterActions(const QPoint& position) override {
		if (handle__filterActions == 0) {
			return QTermWidget::filterActions(position);
		}
		
		const QPoint& position_ret = position;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&position_ret);

		struct miqt_array /* of QAction* */  callback_return_value = miqt_exec_callback_QTermWidget_filterActions(this, handle__filterActions, sigval1);
		QList<QAction *> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QAction** callback_return_value_arr = static_cast<QAction**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(callback_return_value_arr[i]);
		}

		return callback_return_value_QList;
	}

	friend struct miqt_array /* of QAction* */  QTermWidget_virtualbase_filterActions(void* self, QPoint* position);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__getPtySlaveFd = 0;

	// Subclass to allow providing a Go implementation
	virtual int getPtySlaveFd() const override {
		if (handle__getPtySlaveFd == 0) {
			return QTermWidget::getPtySlaveFd();
		}
		

		int callback_return_value = miqt_exec_callback_QTermWidget_getPtySlaveFd(this, handle__getPtySlaveFd);

		return static_cast<int>(callback_return_value);
	}

	friend int QTermWidget_virtualbase_getPtySlaveFd(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setBlinkingCursor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setBlinkingCursor(bool blink) override {
		if (handle__setBlinkingCursor == 0) {
			QTermWidget::setBlinkingCursor(blink);
			return;
		}
		
		bool sigval1 = blink;

		miqt_exec_callback_QTermWidget_setBlinkingCursor(this, handle__setBlinkingCursor, sigval1);

		
	}

	friend void QTermWidget_virtualbase_setBlinkingCursor(void* self, bool blink);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setBidiEnabled = 0;

	// Subclass to allow providing a Go implementation
	virtual void setBidiEnabled(bool enabled) override {
		if (handle__setBidiEnabled == 0) {
			QTermWidget::setBidiEnabled(enabled);
			return;
		}
		
		bool sigval1 = enabled;

		miqt_exec_callback_QTermWidget_setBidiEnabled(this, handle__setBidiEnabled, sigval1);

		
	}

	friend void QTermWidget_virtualbase_setBidiEnabled(void* self, bool enabled);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isBidiEnabled = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isBidiEnabled() override {
		if (handle__isBidiEnabled == 0) {
			return QTermWidget::isBidiEnabled();
		}
		

		bool callback_return_value = miqt_exec_callback_QTermWidget_isBidiEnabled(this, handle__isBidiEnabled);

		return callback_return_value;
	}

	friend bool QTermWidget_virtualbase_isBidiEnabled(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAutoClose = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoClose(bool autoClose) override {
		if (handle__setAutoClose == 0) {
			QTermWidget::setAutoClose(autoClose);
			return;
		}
		
		bool sigval1 = autoClose;

		miqt_exec_callback_QTermWidget_setAutoClose(this, handle__setAutoClose, sigval1);

		
	}

	friend void QTermWidget_virtualbase_setAutoClose(void* self, bool autoClose);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__title = 0;

	// Subclass to allow providing a Go implementation
	virtual QString title() const override {
		if (handle__title == 0) {
			return QTermWidget::title();
		}
		

		struct miqt_string callback_return_value = miqt_exec_callback_QTermWidget_title(this, handle__title);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	friend struct miqt_string QTermWidget_virtualbase_title(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__icon = 0;

	// Subclass to allow providing a Go implementation
	virtual QString icon() const override {
		if (handle__icon == 0) {
			return QTermWidget::icon();
		}
		

		struct miqt_string callback_return_value = miqt_exec_callback_QTermWidget_icon(this, handle__icon);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	friend struct miqt_string QTermWidget_virtualbase_icon(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isTitleChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isTitleChanged() const override {
		if (handle__isTitleChanged == 0) {
			return QTermWidget::isTitleChanged();
		}
		

		bool callback_return_value = miqt_exec_callback_QTermWidget_isTitleChanged(this, handle__isTitleChanged);

		return callback_return_value;
	}

	friend bool QTermWidget_virtualbase_isTitleChanged(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__bracketText = 0;

	// Subclass to allow providing a Go implementation
	virtual void bracketText(QString& text) override {
		if (handle__bracketText == 0) {
			QTermWidget::bracketText(text);
			return;
		}
		
		QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;

		miqt_exec_callback_QTermWidget_bracketText(this, handle__bracketText, sigval1);

		
	}

	friend void QTermWidget_virtualbase_bracketText(void* self, struct miqt_string text);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disableBracketedPasteMode = 0;

	// Subclass to allow providing a Go implementation
	virtual void disableBracketedPasteMode(bool disable) override {
		if (handle__disableBracketedPasteMode == 0) {
			QTermWidget::disableBracketedPasteMode(disable);
			return;
		}
		
		bool sigval1 = disable;

		miqt_exec_callback_QTermWidget_disableBracketedPasteMode(this, handle__disableBracketedPasteMode, sigval1);

		
	}

	friend void QTermWidget_virtualbase_disableBracketedPasteMode(void* self, bool disable);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__bracketedPasteModeIsDisabled = 0;

	// Subclass to allow providing a Go implementation
	virtual bool bracketedPasteModeIsDisabled() const override {
		if (handle__bracketedPasteModeIsDisabled == 0) {
			return QTermWidget::bracketedPasteModeIsDisabled();
		}
		

		bool callback_return_value = miqt_exec_callback_QTermWidget_bracketedPasteModeIsDisabled(this, handle__bracketedPasteModeIsDisabled);

		return callback_return_value;
	}

	friend bool QTermWidget_virtualbase_bracketedPasteModeIsDisabled(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setMargin = 0;

	// Subclass to allow providing a Go implementation
	virtual void setMargin(int margin) override {
		if (handle__setMargin == 0) {
			QTermWidget::setMargin(margin);
			return;
		}
		
		int sigval1 = margin;

		miqt_exec_callback_QTermWidget_setMargin(this, handle__setMargin, sigval1);

		
	}

	friend void QTermWidget_virtualbase_setMargin(void* self, int margin);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__getMargin = 0;

	// Subclass to allow providing a Go implementation
	virtual int getMargin() const override {
		if (handle__getMargin == 0) {
			return QTermWidget::getMargin();
		}
		

		int callback_return_value = miqt_exec_callback_QTermWidget_getMargin(this, handle__getMargin);

		return static_cast<int>(callback_return_value);
	}

	friend int QTermWidget_virtualbase_getMargin(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setDrawLineChars = 0;

	// Subclass to allow providing a Go implementation
	virtual void setDrawLineChars(bool drawLineChars) override {
		if (handle__setDrawLineChars == 0) {
			QTermWidget::setDrawLineChars(drawLineChars);
			return;
		}
		
		bool sigval1 = drawLineChars;

		miqt_exec_callback_QTermWidget_setDrawLineChars(this, handle__setDrawLineChars, sigval1);

		
	}

	friend void QTermWidget_virtualbase_setDrawLineChars(void* self, bool drawLineChars);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setBoldIntense = 0;

	// Subclass to allow providing a Go implementation
	virtual void setBoldIntense(bool boldIntense) override {
		if (handle__setBoldIntense == 0) {
			QTermWidget::setBoldIntense(boldIntense);
			return;
		}
		
		bool sigval1 = boldIntense;

		miqt_exec_callback_QTermWidget_setBoldIntense(this, handle__setBoldIntense, sigval1);

		
	}

	friend void QTermWidget_virtualbase_setBoldIntense(void* self, bool boldIntense);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setConfirmMultilinePaste = 0;

	// Subclass to allow providing a Go implementation
	virtual void setConfirmMultilinePaste(bool confirmMultilinePaste) override {
		if (handle__setConfirmMultilinePaste == 0) {
			QTermWidget::setConfirmMultilinePaste(confirmMultilinePaste);
			return;
		}
		
		bool sigval1 = confirmMultilinePaste;

		miqt_exec_callback_QTermWidget_setConfirmMultilinePaste(this, handle__setConfirmMultilinePaste, sigval1);

		
	}

	friend void QTermWidget_virtualbase_setConfirmMultilinePaste(void* self, bool confirmMultilinePaste);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setTrimPastedTrailingNewlines = 0;

	// Subclass to allow providing a Go implementation
	virtual void setTrimPastedTrailingNewlines(bool trimPastedTrailingNewlines) override {
		if (handle__setTrimPastedTrailingNewlines == 0) {
			QTermWidget::setTrimPastedTrailingNewlines(trimPastedTrailingNewlines);
			return;
		}
		
		bool sigval1 = trimPastedTrailingNewlines;

		miqt_exec_callback_QTermWidget_setTrimPastedTrailingNewlines(this, handle__setTrimPastedTrailingNewlines, sigval1);

		
	}

	friend void QTermWidget_virtualbase_setTrimPastedTrailingNewlines(void* self, bool trimPastedTrailingNewlines);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createWidget = 0;

	// Subclass to allow providing a Go implementation
	virtual QTermWidgetInterface* createWidget(int startnow) const override {
		if (handle__createWidget == 0) {
			return QTermWidget::createWidget(startnow);
		}
		
		int sigval1 = startnow;

		QTermWidgetInterface* callback_return_value = miqt_exec_callback_QTermWidget_createWidget(this, handle__createWidget, sigval1);

		return callback_return_value;
	}

	friend QTermWidgetInterface* QTermWidget_virtualbase_createWidget(const void* self, int startnow);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__resizeEvent == 0) {
			QTermWidget::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QTermWidget_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	friend void QTermWidget_virtualbase_resizeEvent(void* self, QResizeEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QTermWidget::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QTermWidget_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	friend int QTermWidget_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QTermWidget::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QTermWidget_setVisible(this, handle__setVisible, sigval1);

		
	}

	friend void QTermWidget_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QTermWidget::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTermWidget_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	friend QSize* QTermWidget_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QTermWidget::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QTermWidget_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	friend int QTermWidget_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QTermWidget::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QTermWidget_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	friend bool QTermWidget_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QTermWidget::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QTermWidget_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	friend QPaintEngine* QTermWidget_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QTermWidget::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QTermWidget_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QTermWidget_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QTermWidget::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTermWidget_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	friend void QTermWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QTermWidget::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTermWidget_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	friend void QTermWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QTermWidget::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTermWidget_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	friend void QTermWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QTermWidget::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTermWidget_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	friend void QTermWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QTermWidget::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QTermWidget_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	friend void QTermWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QTermWidget::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QTermWidget_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	friend void QTermWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QTermWidget::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QTermWidget_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	friend void QTermWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QTermWidget::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QTermWidget_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	friend void QTermWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QTermWidget::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QTermWidget_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	friend void QTermWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QTermWidget::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTermWidget_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	friend void QTermWidget_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QTermWidget::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTermWidget_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	friend void QTermWidget_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QTermWidget::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QTermWidget_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	friend void QTermWidget_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QTermWidget::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QTermWidget_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	friend void QTermWidget_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QTermWidget::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QTermWidget_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	friend void QTermWidget_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QTermWidget::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QTermWidget_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	friend void QTermWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QTermWidget::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QTermWidget_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	friend void QTermWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QTermWidget::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QTermWidget_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	friend void QTermWidget_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QTermWidget::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QTermWidget_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	friend void QTermWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QTermWidget::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QTermWidget_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	friend void QTermWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QTermWidget::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QTermWidget_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	friend void QTermWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QTermWidget::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QTermWidget_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	friend void QTermWidget_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QTermWidget::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QTermWidget_showEvent(this, handle__showEvent, sigval1);

		
	}

	friend void QTermWidget_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QTermWidget::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QTermWidget_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	friend void QTermWidget_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QTermWidget::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QTermWidget_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	friend bool QTermWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QTermWidget::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QTermWidget_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	friend void QTermWidget_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QTermWidget::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QTermWidget_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	friend int QTermWidget_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QTermWidget::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QTermWidget_initPainter(this, handle__initPainter, sigval1);

		
	}

	friend void QTermWidget_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QTermWidget::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QTermWidget_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	friend QPaintDevice* QTermWidget_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QTermWidget::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QTermWidget_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	friend QPainter* QTermWidget_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QTermWidget::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QTermWidget_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	friend void QTermWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QTermWidget::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QTermWidget_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	friend QVariant* QTermWidget_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QTermWidget::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QTermWidget_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	friend bool QTermWidget_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QTermWidget::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QTermWidget_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QTermWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QTermWidget::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QTermWidget_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QTermWidget_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QTermWidget::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QTermWidget_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QTermWidget_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QTermWidget::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTermWidget_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QTermWidget_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QTermWidget::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTermWidget_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QTermWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QTermWidget::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTermWidget_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QTermWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QTermWidget_protectedbase_sessionFinished(bool* _dynamic_cast_ok, void* self);
	friend void QTermWidget_protectedbase_selectionChanged(bool* _dynamic_cast_ok, void* self, bool textSelected);
	friend void QTermWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QTermWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QTermWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QTermWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QTermWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QTermWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QTermWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QTermWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QTermWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QTermWidget* QTermWidget_new(QWidget* parent) {
	return new MiqtVirtualQTermWidget(parent);
}

QTermWidget* QTermWidget_new2(int startnow) {
	return new MiqtVirtualQTermWidget(static_cast<int>(startnow));
}

QTermWidget* QTermWidget_new3() {
	return new MiqtVirtualQTermWidget();
}

QTermWidget* QTermWidget_new4(int startnow, QWidget* parent) {
	return new MiqtVirtualQTermWidget(static_cast<int>(startnow), parent);
}

void QTermWidget_virtbase(QTermWidget* src, QWidget** outptr_QWidget, QTermWidgetInterface** outptr_QTermWidgetInterface) {
	*outptr_QWidget = static_cast<QWidget*>(src);
	*outptr_QTermWidgetInterface = static_cast<QTermWidgetInterface*>(src);
}

QMetaObject* QTermWidget_metaObject(const QTermWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTermWidget_metacast(QTermWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTermWidget_tr(const char* s) {
	QString _ret = QTermWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTermWidget_trUtf8(const char* s) {
	QString _ret = QTermWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QTermWidget_sizeHint(const QTermWidget* self) {
	return new QSize(self->sizeHint());
}

void QTermWidget_setTerminalSizeHint(QTermWidget* self, bool enabled) {
	self->setTerminalSizeHint(enabled);
}

bool QTermWidget_terminalSizeHint(QTermWidget* self) {
	return self->terminalSizeHint();
}

void QTermWidget_startShellProgram(QTermWidget* self) {
	self->startShellProgram();
}

void QTermWidget_startTerminalTeletype(QTermWidget* self) {
	self->startTerminalTeletype();
}

int QTermWidget_getShellPID(QTermWidget* self) {
	return self->getShellPID();
}

void QTermWidget_changeDir(QTermWidget* self, struct miqt_string dir) {
	QString dir_QString = QString::fromUtf8(dir.data, dir.len);
	self->changeDir(dir_QString);
}

void QTermWidget_setTerminalFont(QTermWidget* self, QFont* font) {
	self->setTerminalFont(*font);
}

QFont* QTermWidget_getTerminalFont(QTermWidget* self) {
	return new QFont(self->getTerminalFont());
}

void QTermWidget_setTerminalOpacity(QTermWidget* self, double level) {
	self->setTerminalOpacity(static_cast<qreal>(level));
}

void QTermWidget_setTerminalBackgroundImage(QTermWidget* self, struct miqt_string backgroundImage) {
	QString backgroundImage_QString = QString::fromUtf8(backgroundImage.data, backgroundImage.len);
	self->setTerminalBackgroundImage(backgroundImage_QString);
}

void QTermWidget_setTerminalBackgroundMode(QTermWidget* self, int mode) {
	self->setTerminalBackgroundMode(static_cast<int>(mode));
}

void QTermWidget_setEnvironment(QTermWidget* self, struct miqt_array /* of struct miqt_string */  environment) {
	QStringList environment_QList;
	environment_QList.reserve(environment.len);
	struct miqt_string* environment_arr = static_cast<struct miqt_string*>(environment.data);
	for(size_t i = 0; i < environment.len; ++i) {
		QString environment_arr_i_QString = QString::fromUtf8(environment_arr[i].data, environment_arr[i].len);
		environment_QList.push_back(environment_arr_i_QString);
	}
	self->setEnvironment(environment_QList);
}

void QTermWidget_setShellProgram(QTermWidget* self, struct miqt_string program) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	self->setShellProgram(program_QString);
}

void QTermWidget_setWorkingDirectory(QTermWidget* self, struct miqt_string dir) {
	QString dir_QString = QString::fromUtf8(dir.data, dir.len);
	self->setWorkingDirectory(dir_QString);
}

struct miqt_string QTermWidget_workingDirectory(QTermWidget* self) {
	QString _ret = self->workingDirectory();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTermWidget_setArgs(QTermWidget* self, struct miqt_array /* of struct miqt_string */  args) {
	QStringList args_QList;
	args_QList.reserve(args.len);
	struct miqt_string* args_arr = static_cast<struct miqt_string*>(args.data);
	for(size_t i = 0; i < args.len; ++i) {
		QString args_arr_i_QString = QString::fromUtf8(args_arr[i].data, args_arr[i].len);
		args_QList.push_back(args_arr_i_QString);
	}
	self->setArgs(args_QList);
}

void QTermWidget_setTextCodec(QTermWidget* self, QTextCodec* codec) {
	self->setTextCodec(codec);
}

void QTermWidget_setColorScheme(QTermWidget* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setColorScheme(name_QString);
}

struct miqt_array /* of struct miqt_string */  QTermWidget_getAvailableColorSchemes(QTermWidget* self) {
	QStringList _ret = self->getAvailableColorSchemes();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QTermWidget_availableColorSchemes() {
	QStringList _ret = QTermWidget::availableColorSchemes();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QTermWidget_addCustomColorSchemeDir(struct miqt_string custom_dir) {
	QString custom_dir_QString = QString::fromUtf8(custom_dir.data, custom_dir.len);
	QTermWidget::addCustomColorSchemeDir(custom_dir_QString);
}

void QTermWidget_setHistorySize(QTermWidget* self, int lines) {
	self->setHistorySize(static_cast<int>(lines));
}

int QTermWidget_historySize(const QTermWidget* self) {
	return self->historySize();
}

void QTermWidget_setScrollBarPosition(QTermWidget* self, int scrollBarPosition) {
	self->setScrollBarPosition(static_cast<QTermWidgetInterface::ScrollBarPosition>(scrollBarPosition));
}

void QTermWidget_scrollToEnd(QTermWidget* self) {
	self->scrollToEnd();
}

void QTermWidget_sendText(QTermWidget* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->sendText(text_QString);
}

void QTermWidget_sendKeyEvent(QTermWidget* self, QKeyEvent* e) {
	self->sendKeyEvent(e);
}

void QTermWidget_setFlowControlEnabled(QTermWidget* self, bool enabled) {
	self->setFlowControlEnabled(enabled);
}

bool QTermWidget_flowControlEnabled(QTermWidget* self) {
	return self->flowControlEnabled();
}

void QTermWidget_setFlowControlWarningEnabled(QTermWidget* self, bool enabled) {
	self->setFlowControlWarningEnabled(enabled);
}

struct miqt_array /* of struct miqt_string */  QTermWidget_availableKeyBindings() {
	QStringList _ret = QTermWidget::availableKeyBindings();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QTermWidget_keyBindings(QTermWidget* self) {
	QString _ret = self->keyBindings();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTermWidget_setMotionAfterPasting(QTermWidget* self, int motionAfterPasting) {
	self->setMotionAfterPasting(static_cast<int>(motionAfterPasting));
}

int QTermWidget_historyLinesCount(QTermWidget* self) {
	return self->historyLinesCount();
}

int QTermWidget_screenColumnsCount(QTermWidget* self) {
	return self->screenColumnsCount();
}

int QTermWidget_screenLinesCount(QTermWidget* self) {
	return self->screenLinesCount();
}

void QTermWidget_setSelectionStart(QTermWidget* self, int row, int column) {
	self->setSelectionStart(static_cast<int>(row), static_cast<int>(column));
}

void QTermWidget_setSelectionEnd(QTermWidget* self, int row, int column) {
	self->setSelectionEnd(static_cast<int>(row), static_cast<int>(column));
}

void QTermWidget_getSelectionStart(QTermWidget* self, int* row, int* column) {
	self->getSelectionStart(static_cast<int&>(*row), static_cast<int&>(*column));
}

void QTermWidget_getSelectionEnd(QTermWidget* self, int* row, int* column) {
	self->getSelectionEnd(static_cast<int&>(*row), static_cast<int&>(*column));
}

struct miqt_string QTermWidget_selectedText(QTermWidget* self, bool preserveLineBreaks) {
	QString _ret = self->selectedText(preserveLineBreaks);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTermWidget_setMonitorActivity(QTermWidget* self, bool monitorActivity) {
	self->setMonitorActivity(monitorActivity);
}

void QTermWidget_setMonitorSilence(QTermWidget* self, bool monitorSilence) {
	self->setMonitorSilence(monitorSilence);
}

void QTermWidget_setSilenceTimeout(QTermWidget* self, int seconds) {
	self->setSilenceTimeout(static_cast<int>(seconds));
}

struct miqt_array /* of QAction* */  QTermWidget_filterActions(QTermWidget* self, QPoint* position) {
	QList<QAction *> _ret = self->filterActions(*position);
	// Convert QList<> from C++ memory to manually-managed C memory
	QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QTermWidget_getPtySlaveFd(const QTermWidget* self) {
	return self->getPtySlaveFd();
}

void QTermWidget_setKeyboardCursorShape(QTermWidget* self, int shape) {
	self->setKeyboardCursorShape(static_cast<QTermWidget::KeyboardCursorShape>(shape));
}

void QTermWidget_setBlinkingCursor(QTermWidget* self, bool blink) {
	self->setBlinkingCursor(blink);
}

void QTermWidget_setBidiEnabled(QTermWidget* self, bool enabled) {
	self->setBidiEnabled(enabled);
}

bool QTermWidget_isBidiEnabled(QTermWidget* self) {
	return self->isBidiEnabled();
}

void QTermWidget_setAutoClose(QTermWidget* self, bool autoClose) {
	self->setAutoClose(autoClose);
}

struct miqt_string QTermWidget_title(const QTermWidget* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTermWidget_icon(const QTermWidget* self) {
	QString _ret = self->icon();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTermWidget_isTitleChanged(const QTermWidget* self) {
	return self->isTitleChanged();
}

void QTermWidget_bracketText(QTermWidget* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->bracketText(text_QString);
}

void QTermWidget_disableBracketedPasteMode(QTermWidget* self, bool disable) {
	self->disableBracketedPasteMode(disable);
}

bool QTermWidget_bracketedPasteModeIsDisabled(const QTermWidget* self) {
	return self->bracketedPasteModeIsDisabled();
}

void QTermWidget_setMargin(QTermWidget* self, int margin) {
	self->setMargin(static_cast<int>(margin));
}

int QTermWidget_getMargin(const QTermWidget* self) {
	return self->getMargin();
}

void QTermWidget_setDrawLineChars(QTermWidget* self, bool drawLineChars) {
	self->setDrawLineChars(drawLineChars);
}

void QTermWidget_setBoldIntense(QTermWidget* self, bool boldIntense) {
	self->setBoldIntense(boldIntense);
}

void QTermWidget_setConfirmMultilinePaste(QTermWidget* self, bool confirmMultilinePaste) {
	self->setConfirmMultilinePaste(confirmMultilinePaste);
}

void QTermWidget_setTrimPastedTrailingNewlines(QTermWidget* self, bool trimPastedTrailingNewlines) {
	self->setTrimPastedTrailingNewlines(trimPastedTrailingNewlines);
}

QTermWidgetInterface* QTermWidget_createWidget(const QTermWidget* self, int startnow) {
	return self->createWidget(static_cast<int>(startnow));
}

void QTermWidget_finished(QTermWidget* self) {
	self->finished();
}

void QTermWidget_connect_finished(QTermWidget* self, intptr_t slot) {
	MiqtVirtualQTermWidget::connect(self, static_cast<void (QTermWidget::*)()>(&QTermWidget::finished), self, [=]() {
		miqt_exec_callback_QTermWidget_finished(slot);
	});
}

void QTermWidget_copyAvailable(QTermWidget* self, bool param1) {
	self->copyAvailable(param1);
}

void QTermWidget_connect_copyAvailable(QTermWidget* self, intptr_t slot) {
	MiqtVirtualQTermWidget::connect(self, static_cast<void (QTermWidget::*)(bool)>(&QTermWidget::copyAvailable), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QTermWidget_copyAvailable(slot, sigval1);
	});
}

void QTermWidget_termGetFocus(QTermWidget* self) {
	self->termGetFocus();
}

void QTermWidget_connect_termGetFocus(QTermWidget* self, intptr_t slot) {
	MiqtVirtualQTermWidget::connect(self, static_cast<void (QTermWidget::*)()>(&QTermWidget::termGetFocus), self, [=]() {
		miqt_exec_callback_QTermWidget_termGetFocus(slot);
	});
}

void QTermWidget_termLostFocus(QTermWidget* self) {
	self->termLostFocus();
}

void QTermWidget_connect_termLostFocus(QTermWidget* self, intptr_t slot) {
	MiqtVirtualQTermWidget::connect(self, static_cast<void (QTermWidget::*)()>(&QTermWidget::termLostFocus), self, [=]() {
		miqt_exec_callback_QTermWidget_termLostFocus(slot);
	});
}

void QTermWidget_termKeyPressed(QTermWidget* self, QKeyEvent* param1) {
	self->termKeyPressed(param1);
}

void QTermWidget_connect_termKeyPressed(QTermWidget* self, intptr_t slot) {
	MiqtVirtualQTermWidget::connect(self, static_cast<void (QTermWidget::*)(QKeyEvent*)>(&QTermWidget::termKeyPressed), self, [=](QKeyEvent* param1) {
		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QTermWidget_termKeyPressed(slot, sigval1);
	});
}

void QTermWidget_urlActivated(QTermWidget* self, QUrl* param1, bool fromContextMenu) {
	self->urlActivated(*param1, fromContextMenu);
}

void QTermWidget_connect_urlActivated(QTermWidget* self, intptr_t slot) {
	MiqtVirtualQTermWidget::connect(self, static_cast<void (QTermWidget::*)(const QUrl&, bool)>(&QTermWidget::urlActivated), self, [=](const QUrl& param1, bool fromContextMenu) {
		const QUrl& param1_ret = param1;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
		bool sigval2 = fromContextMenu;
		miqt_exec_callback_QTermWidget_urlActivated(slot, sigval1, sigval2);
	});
}

void QTermWidget_bell(QTermWidget* self, struct miqt_string message) {
	QString message_QString = QString::fromUtf8(message.data, message.len);
	self->bell(message_QString);
}

void QTermWidget_connect_bell(QTermWidget* self, intptr_t slot) {
	MiqtVirtualQTermWidget::connect(self, static_cast<void (QTermWidget::*)(const QString&)>(&QTermWidget::bell), self, [=](const QString& message) {
		const QString message_ret = message;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray message_b = message_ret.toUtf8();
		struct miqt_string message_ms;
		message_ms.len = message_b.length();
		message_ms.data = static_cast<char*>(malloc(message_ms.len));
		memcpy(message_ms.data, message_b.data(), message_ms.len);
		struct miqt_string sigval1 = message_ms;
		miqt_exec_callback_QTermWidget_bell(slot, sigval1);
	});
}

void QTermWidget_activity(QTermWidget* self) {
	self->activity();
}

void QTermWidget_connect_activity(QTermWidget* self, intptr_t slot) {
	MiqtVirtualQTermWidget::connect(self, static_cast<void (QTermWidget::*)()>(&QTermWidget::activity), self, [=]() {
		miqt_exec_callback_QTermWidget_activity(slot);
	});
}

void QTermWidget_silence(QTermWidget* self) {
	self->silence();
}

void QTermWidget_connect_silence(QTermWidget* self, intptr_t slot) {
	MiqtVirtualQTermWidget::connect(self, static_cast<void (QTermWidget::*)()>(&QTermWidget::silence), self, [=]() {
		miqt_exec_callback_QTermWidget_silence(slot);
	});
}

void QTermWidget_sendData(QTermWidget* self, const char* param1, int param2) {
	self->sendData(param1, static_cast<int>(param2));
}

void QTermWidget_connect_sendData(QTermWidget* self, intptr_t slot) {
	MiqtVirtualQTermWidget::connect(self, static_cast<void (QTermWidget::*)(const char*, int)>(&QTermWidget::sendData), self, [=](const char* param1, int param2) {
		const char* sigval1 = (const char*) param1;
		int sigval2 = param2;
		miqt_exec_callback_QTermWidget_sendData(slot, sigval1, sigval2);
	});
}

void QTermWidget_profileChanged(QTermWidget* self, struct miqt_string profile) {
	QString profile_QString = QString::fromUtf8(profile.data, profile.len);
	self->profileChanged(profile_QString);
}

void QTermWidget_connect_profileChanged(QTermWidget* self, intptr_t slot) {
	MiqtVirtualQTermWidget::connect(self, static_cast<void (QTermWidget::*)(const QString&)>(&QTermWidget::profileChanged), self, [=](const QString& profile) {
		const QString profile_ret = profile;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray profile_b = profile_ret.toUtf8();
		struct miqt_string profile_ms;
		profile_ms.len = profile_b.length();
		profile_ms.data = static_cast<char*>(malloc(profile_ms.len));
		memcpy(profile_ms.data, profile_b.data(), profile_ms.len);
		struct miqt_string sigval1 = profile_ms;
		miqt_exec_callback_QTermWidget_profileChanged(slot, sigval1);
	});
}

void QTermWidget_titleChanged(QTermWidget* self) {
	self->titleChanged();
}

void QTermWidget_connect_titleChanged(QTermWidget* self, intptr_t slot) {
	MiqtVirtualQTermWidget::connect(self, static_cast<void (QTermWidget::*)()>(&QTermWidget::titleChanged), self, [=]() {
		miqt_exec_callback_QTermWidget_titleChanged(slot);
	});
}

void QTermWidget_receivedData(QTermWidget* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->receivedData(text_QString);
}

void QTermWidget_connect_receivedData(QTermWidget* self, intptr_t slot) {
	MiqtVirtualQTermWidget::connect(self, static_cast<void (QTermWidget::*)(const QString&)>(&QTermWidget::receivedData), self, [=](const QString& text) {
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;
		miqt_exec_callback_QTermWidget_receivedData(slot, sigval1);
	});
}

void QTermWidget_copyClipboard(QTermWidget* self) {
	self->copyClipboard();
}

void QTermWidget_pasteClipboard(QTermWidget* self) {
	self->pasteClipboard();
}

void QTermWidget_pasteSelection(QTermWidget* self) {
	self->pasteSelection();
}

void QTermWidget_zoomIn(QTermWidget* self) {
	self->zoomIn();
}

void QTermWidget_zoomOut(QTermWidget* self) {
	self->zoomOut();
}

void QTermWidget_setSize(QTermWidget* self, QSize* size) {
	self->setSize(*size);
}

void QTermWidget_setKeyBindings(QTermWidget* self, struct miqt_string kb) {
	QString kb_QString = QString::fromUtf8(kb.data, kb.len);
	self->setKeyBindings(kb_QString);
}

void QTermWidget_clear(QTermWidget* self) {
	self->clear();
}

void QTermWidget_toggleShowSearchBar(QTermWidget* self) {
	self->toggleShowSearchBar();
}

void QTermWidget_saveHistory(QTermWidget* self, QIODevice* device) {
	self->saveHistory(device);
}

struct miqt_string QTermWidget_tr2(const char* s, const char* c) {
	QString _ret = QTermWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTermWidget_tr3(const char* s, const char* c, int n) {
	QString _ret = QTermWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTermWidget_trUtf82(const char* s, const char* c) {
	QString _ret = QTermWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTermWidget_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QTermWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTermWidget_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QTermWidget_virtualbase_sizeHint(const void* self) {

	return new QSize(( (const MiqtVirtualQTermWidget*)(self) )->QTermWidget::sizeHint());

}

bool QTermWidget_override_virtual_setTerminalSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setTerminalSizeHint = slot;
	return true;
}

void QTermWidget_virtualbase_setTerminalSizeHint(void* self, bool enabled) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::setTerminalSizeHint(enabled);

}

bool QTermWidget_override_virtual_terminalSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__terminalSizeHint = slot;
	return true;
}

bool QTermWidget_virtualbase_terminalSizeHint(void* self) {

	return ( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::terminalSizeHint();

}

bool QTermWidget_override_virtual_startShellProgram(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__startShellProgram = slot;
	return true;
}

void QTermWidget_virtualbase_startShellProgram(void* self) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::startShellProgram();

}

bool QTermWidget_override_virtual_startTerminalTeletype(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__startTerminalTeletype = slot;
	return true;
}

void QTermWidget_virtualbase_startTerminalTeletype(void* self) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::startTerminalTeletype();

}

bool QTermWidget_override_virtual_getShellPID(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__getShellPID = slot;
	return true;
}

int QTermWidget_virtualbase_getShellPID(void* self) {

	return ( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::getShellPID();

}

bool QTermWidget_override_virtual_changeDir(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeDir = slot;
	return true;
}

void QTermWidget_virtualbase_changeDir(void* self, struct miqt_string dir) {
	QString dir_QString = QString::fromUtf8(dir.data, dir.len);

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::changeDir(dir_QString);

}

bool QTermWidget_override_virtual_setTerminalFont(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setTerminalFont = slot;
	return true;
}

void QTermWidget_virtualbase_setTerminalFont(void* self, QFont* font) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::setTerminalFont(*font);

}

bool QTermWidget_override_virtual_getTerminalFont(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__getTerminalFont = slot;
	return true;
}

QFont* QTermWidget_virtualbase_getTerminalFont(void* self) {

	return new QFont(( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::getTerminalFont());

}

bool QTermWidget_override_virtual_setTerminalOpacity(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setTerminalOpacity = slot;
	return true;
}

void QTermWidget_virtualbase_setTerminalOpacity(void* self, double level) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::setTerminalOpacity(static_cast<qreal>(level));

}

bool QTermWidget_override_virtual_setTerminalBackgroundImage(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setTerminalBackgroundImage = slot;
	return true;
}

void QTermWidget_virtualbase_setTerminalBackgroundImage(void* self, struct miqt_string backgroundImage) {
	QString backgroundImage_QString = QString::fromUtf8(backgroundImage.data, backgroundImage.len);

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::setTerminalBackgroundImage(backgroundImage_QString);

}

bool QTermWidget_override_virtual_setTerminalBackgroundMode(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setTerminalBackgroundMode = slot;
	return true;
}

void QTermWidget_virtualbase_setTerminalBackgroundMode(void* self, int mode) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::setTerminalBackgroundMode(static_cast<int>(mode));

}

bool QTermWidget_override_virtual_setEnvironment(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setEnvironment = slot;
	return true;
}

void QTermWidget_virtualbase_setEnvironment(void* self, struct miqt_array /* of struct miqt_string */  environment) {
	QStringList environment_QList;
	environment_QList.reserve(environment.len);
	struct miqt_string* environment_arr = static_cast<struct miqt_string*>(environment.data);
	for(size_t i = 0; i < environment.len; ++i) {
		QString environment_arr_i_QString = QString::fromUtf8(environment_arr[i].data, environment_arr[i].len);
		environment_QList.push_back(environment_arr_i_QString);
	}

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::setEnvironment(environment_QList);

}

bool QTermWidget_override_virtual_setShellProgram(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setShellProgram = slot;
	return true;
}

void QTermWidget_virtualbase_setShellProgram(void* self, struct miqt_string program) {
	QString program_QString = QString::fromUtf8(program.data, program.len);

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::setShellProgram(program_QString);

}

bool QTermWidget_override_virtual_setWorkingDirectory(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setWorkingDirectory = slot;
	return true;
}

void QTermWidget_virtualbase_setWorkingDirectory(void* self, struct miqt_string dir) {
	QString dir_QString = QString::fromUtf8(dir.data, dir.len);

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::setWorkingDirectory(dir_QString);

}

bool QTermWidget_override_virtual_workingDirectory(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__workingDirectory = slot;
	return true;
}

struct miqt_string QTermWidget_virtualbase_workingDirectory(void* self) {

	QString _ret = ( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::workingDirectory();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;

}

bool QTermWidget_override_virtual_setArgs(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setArgs = slot;
	return true;
}

void QTermWidget_virtualbase_setArgs(void* self, struct miqt_array /* of struct miqt_string */  args) {
	QStringList args_QList;
	args_QList.reserve(args.len);
	struct miqt_string* args_arr = static_cast<struct miqt_string*>(args.data);
	for(size_t i = 0; i < args.len; ++i) {
		QString args_arr_i_QString = QString::fromUtf8(args_arr[i].data, args_arr[i].len);
		args_QList.push_back(args_arr_i_QString);
	}

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::setArgs(args_QList);

}

bool QTermWidget_override_virtual_setTextCodec(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setTextCodec = slot;
	return true;
}

void QTermWidget_virtualbase_setTextCodec(void* self, QTextCodec* codec) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::setTextCodec(codec);

}

bool QTermWidget_override_virtual_setColorScheme(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setColorScheme = slot;
	return true;
}

void QTermWidget_virtualbase_setColorScheme(void* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::setColorScheme(name_QString);

}

bool QTermWidget_override_virtual_getAvailableColorSchemes(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__getAvailableColorSchemes = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QTermWidget_virtualbase_getAvailableColorSchemes(void* self) {

	QStringList _ret = ( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::getAvailableColorSchemes();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;

}

bool QTermWidget_override_virtual_setHistorySize(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setHistorySize = slot;
	return true;
}

void QTermWidget_virtualbase_setHistorySize(void* self, int lines) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::setHistorySize(static_cast<int>(lines));

}

bool QTermWidget_override_virtual_historySize(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__historySize = slot;
	return true;
}

int QTermWidget_virtualbase_historySize(const void* self) {

	return ( (const MiqtVirtualQTermWidget*)(self) )->QTermWidget::historySize();

}

bool QTermWidget_override_virtual_setScrollBarPosition(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setScrollBarPosition = slot;
	return true;
}

void QTermWidget_virtualbase_setScrollBarPosition(void* self, int scrollBarPosition) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::setScrollBarPosition(static_cast<MiqtVirtualQTermWidget::ScrollBarPosition>(scrollBarPosition));

}

bool QTermWidget_override_virtual_scrollToEnd(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__scrollToEnd = slot;
	return true;
}

void QTermWidget_virtualbase_scrollToEnd(void* self) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::scrollToEnd();

}

bool QTermWidget_override_virtual_sendText(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sendText = slot;
	return true;
}

void QTermWidget_virtualbase_sendText(void* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::sendText(text_QString);

}

bool QTermWidget_override_virtual_sendKeyEvent(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sendKeyEvent = slot;
	return true;
}

void QTermWidget_virtualbase_sendKeyEvent(void* self, QKeyEvent* e) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::sendKeyEvent(e);

}

bool QTermWidget_override_virtual_setFlowControlEnabled(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setFlowControlEnabled = slot;
	return true;
}

void QTermWidget_virtualbase_setFlowControlEnabled(void* self, bool enabled) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::setFlowControlEnabled(enabled);

}

bool QTermWidget_override_virtual_flowControlEnabled(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__flowControlEnabled = slot;
	return true;
}

bool QTermWidget_virtualbase_flowControlEnabled(void* self) {

	return ( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::flowControlEnabled();

}

bool QTermWidget_override_virtual_setFlowControlWarningEnabled(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setFlowControlWarningEnabled = slot;
	return true;
}

void QTermWidget_virtualbase_setFlowControlWarningEnabled(void* self, bool enabled) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::setFlowControlWarningEnabled(enabled);

}

bool QTermWidget_override_virtual_keyBindings(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyBindings = slot;
	return true;
}

struct miqt_string QTermWidget_virtualbase_keyBindings(void* self) {

	QString _ret = ( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::keyBindings();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;

}

bool QTermWidget_override_virtual_setMotionAfterPasting(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setMotionAfterPasting = slot;
	return true;
}

void QTermWidget_virtualbase_setMotionAfterPasting(void* self, int motionAfterPasting) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::setMotionAfterPasting(static_cast<int>(motionAfterPasting));

}

bool QTermWidget_override_virtual_historyLinesCount(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__historyLinesCount = slot;
	return true;
}

int QTermWidget_virtualbase_historyLinesCount(void* self) {

	return ( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::historyLinesCount();

}

bool QTermWidget_override_virtual_screenColumnsCount(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__screenColumnsCount = slot;
	return true;
}

int QTermWidget_virtualbase_screenColumnsCount(void* self) {

	return ( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::screenColumnsCount();

}

bool QTermWidget_override_virtual_screenLinesCount(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__screenLinesCount = slot;
	return true;
}

int QTermWidget_virtualbase_screenLinesCount(void* self) {

	return ( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::screenLinesCount();

}

bool QTermWidget_override_virtual_setSelectionStart(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setSelectionStart = slot;
	return true;
}

void QTermWidget_virtualbase_setSelectionStart(void* self, int row, int column) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::setSelectionStart(static_cast<int>(row), static_cast<int>(column));

}

bool QTermWidget_override_virtual_setSelectionEnd(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setSelectionEnd = slot;
	return true;
}

void QTermWidget_virtualbase_setSelectionEnd(void* self, int row, int column) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::setSelectionEnd(static_cast<int>(row), static_cast<int>(column));

}

bool QTermWidget_override_virtual_getSelectionStart(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__getSelectionStart = slot;
	return true;
}

void QTermWidget_virtualbase_getSelectionStart(void* self, int* row, int* column) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::getSelectionStart(static_cast<int&>(*row), static_cast<int&>(*column));

}

bool QTermWidget_override_virtual_getSelectionEnd(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__getSelectionEnd = slot;
	return true;
}

void QTermWidget_virtualbase_getSelectionEnd(void* self, int* row, int* column) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::getSelectionEnd(static_cast<int&>(*row), static_cast<int&>(*column));

}

bool QTermWidget_override_virtual_selectedText(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectedText = slot;
	return true;
}

struct miqt_string QTermWidget_virtualbase_selectedText(void* self, bool preserveLineBreaks) {

	QString _ret = ( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::selectedText(preserveLineBreaks);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;

}

bool QTermWidget_override_virtual_setMonitorActivity(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setMonitorActivity = slot;
	return true;
}

void QTermWidget_virtualbase_setMonitorActivity(void* self, bool monitorActivity) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::setMonitorActivity(monitorActivity);

}

bool QTermWidget_override_virtual_setMonitorSilence(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setMonitorSilence = slot;
	return true;
}

void QTermWidget_virtualbase_setMonitorSilence(void* self, bool monitorSilence) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::setMonitorSilence(monitorSilence);

}

bool QTermWidget_override_virtual_setSilenceTimeout(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setSilenceTimeout = slot;
	return true;
}

void QTermWidget_virtualbase_setSilenceTimeout(void* self, int seconds) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::setSilenceTimeout(static_cast<int>(seconds));

}

bool QTermWidget_override_virtual_filterActions(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__filterActions = slot;
	return true;
}

struct miqt_array /* of QAction* */  QTermWidget_virtualbase_filterActions(void* self, QPoint* position) {

	QList<QAction *> _ret = ( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::filterActions(*position);
	// Convert QList<> from C++ memory to manually-managed C memory
	QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;

}

bool QTermWidget_override_virtual_getPtySlaveFd(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__getPtySlaveFd = slot;
	return true;
}

int QTermWidget_virtualbase_getPtySlaveFd(const void* self) {

	return ( (const MiqtVirtualQTermWidget*)(self) )->QTermWidget::getPtySlaveFd();

}

bool QTermWidget_override_virtual_setBlinkingCursor(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setBlinkingCursor = slot;
	return true;
}

void QTermWidget_virtualbase_setBlinkingCursor(void* self, bool blink) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::setBlinkingCursor(blink);

}

bool QTermWidget_override_virtual_setBidiEnabled(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setBidiEnabled = slot;
	return true;
}

void QTermWidget_virtualbase_setBidiEnabled(void* self, bool enabled) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::setBidiEnabled(enabled);

}

bool QTermWidget_override_virtual_isBidiEnabled(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isBidiEnabled = slot;
	return true;
}

bool QTermWidget_virtualbase_isBidiEnabled(void* self) {

	return ( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::isBidiEnabled();

}

bool QTermWidget_override_virtual_setAutoClose(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setAutoClose = slot;
	return true;
}

void QTermWidget_virtualbase_setAutoClose(void* self, bool autoClose) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::setAutoClose(autoClose);

}

bool QTermWidget_override_virtual_title(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__title = slot;
	return true;
}

struct miqt_string QTermWidget_virtualbase_title(const void* self) {

	QString _ret = ( (const MiqtVirtualQTermWidget*)(self) )->QTermWidget::title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;

}

bool QTermWidget_override_virtual_icon(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__icon = slot;
	return true;
}

struct miqt_string QTermWidget_virtualbase_icon(const void* self) {

	QString _ret = ( (const MiqtVirtualQTermWidget*)(self) )->QTermWidget::icon();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;

}

bool QTermWidget_override_virtual_isTitleChanged(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isTitleChanged = slot;
	return true;
}

bool QTermWidget_virtualbase_isTitleChanged(const void* self) {

	return ( (const MiqtVirtualQTermWidget*)(self) )->QTermWidget::isTitleChanged();

}

bool QTermWidget_override_virtual_bracketText(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__bracketText = slot;
	return true;
}

void QTermWidget_virtualbase_bracketText(void* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::bracketText(text_QString);

}

bool QTermWidget_override_virtual_disableBracketedPasteMode(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disableBracketedPasteMode = slot;
	return true;
}

void QTermWidget_virtualbase_disableBracketedPasteMode(void* self, bool disable) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::disableBracketedPasteMode(disable);

}

bool QTermWidget_override_virtual_bracketedPasteModeIsDisabled(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__bracketedPasteModeIsDisabled = slot;
	return true;
}

bool QTermWidget_virtualbase_bracketedPasteModeIsDisabled(const void* self) {

	return ( (const MiqtVirtualQTermWidget*)(self) )->QTermWidget::bracketedPasteModeIsDisabled();

}

bool QTermWidget_override_virtual_setMargin(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setMargin = slot;
	return true;
}

void QTermWidget_virtualbase_setMargin(void* self, int margin) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::setMargin(static_cast<int>(margin));

}

bool QTermWidget_override_virtual_getMargin(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__getMargin = slot;
	return true;
}

int QTermWidget_virtualbase_getMargin(const void* self) {

	return ( (const MiqtVirtualQTermWidget*)(self) )->QTermWidget::getMargin();

}

bool QTermWidget_override_virtual_setDrawLineChars(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setDrawLineChars = slot;
	return true;
}

void QTermWidget_virtualbase_setDrawLineChars(void* self, bool drawLineChars) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::setDrawLineChars(drawLineChars);

}

bool QTermWidget_override_virtual_setBoldIntense(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setBoldIntense = slot;
	return true;
}

void QTermWidget_virtualbase_setBoldIntense(void* self, bool boldIntense) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::setBoldIntense(boldIntense);

}

bool QTermWidget_override_virtual_setConfirmMultilinePaste(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setConfirmMultilinePaste = slot;
	return true;
}

void QTermWidget_virtualbase_setConfirmMultilinePaste(void* self, bool confirmMultilinePaste) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::setConfirmMultilinePaste(confirmMultilinePaste);

}

bool QTermWidget_override_virtual_setTrimPastedTrailingNewlines(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setTrimPastedTrailingNewlines = slot;
	return true;
}

void QTermWidget_virtualbase_setTrimPastedTrailingNewlines(void* self, bool trimPastedTrailingNewlines) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::setTrimPastedTrailingNewlines(trimPastedTrailingNewlines);

}

bool QTermWidget_override_virtual_createWidget(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__createWidget = slot;
	return true;
}

QTermWidgetInterface* QTermWidget_virtualbase_createWidget(const void* self, int startnow) {

	return ( (const MiqtVirtualQTermWidget*)(self) )->QTermWidget::createWidget(static_cast<int>(startnow));

}

bool QTermWidget_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QTermWidget_virtualbase_resizeEvent(void* self, QResizeEvent* param1) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::resizeEvent(param1);

}

bool QTermWidget_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QTermWidget_virtualbase_devType(const void* self) {

	return ( (const MiqtVirtualQTermWidget*)(self) )->QTermWidget::devType();

}

bool QTermWidget_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QTermWidget_virtualbase_setVisible(void* self, bool visible) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::setVisible(visible);

}

bool QTermWidget_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QTermWidget_virtualbase_minimumSizeHint(const void* self) {

	return new QSize(( (const MiqtVirtualQTermWidget*)(self) )->QTermWidget::minimumSizeHint());

}

bool QTermWidget_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QTermWidget_virtualbase_heightForWidth(const void* self, int param1) {

	return ( (const MiqtVirtualQTermWidget*)(self) )->QTermWidget::heightForWidth(static_cast<int>(param1));

}

bool QTermWidget_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QTermWidget_virtualbase_hasHeightForWidth(const void* self) {

	return ( (const MiqtVirtualQTermWidget*)(self) )->QTermWidget::hasHeightForWidth();

}

bool QTermWidget_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QTermWidget_virtualbase_paintEngine(const void* self) {

	return ( (const MiqtVirtualQTermWidget*)(self) )->QTermWidget::paintEngine();

}

bool QTermWidget_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QTermWidget_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::event(event);

}

bool QTermWidget_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QTermWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::mousePressEvent(event);

}

bool QTermWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QTermWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::mouseReleaseEvent(event);

}

bool QTermWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QTermWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::mouseDoubleClickEvent(event);

}

bool QTermWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QTermWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::mouseMoveEvent(event);

}

bool QTermWidget_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QTermWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::wheelEvent(event);

}

bool QTermWidget_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QTermWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::keyPressEvent(event);

}

bool QTermWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QTermWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::keyReleaseEvent(event);

}

bool QTermWidget_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QTermWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::focusInEvent(event);

}

bool QTermWidget_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QTermWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::focusOutEvent(event);

}

bool QTermWidget_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QTermWidget_virtualbase_enterEvent(void* self, QEvent* event) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::enterEvent(event);

}

bool QTermWidget_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QTermWidget_virtualbase_leaveEvent(void* self, QEvent* event) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::leaveEvent(event);

}

bool QTermWidget_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QTermWidget_virtualbase_paintEvent(void* self, QPaintEvent* event) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::paintEvent(event);

}

bool QTermWidget_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QTermWidget_virtualbase_moveEvent(void* self, QMoveEvent* event) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::moveEvent(event);

}

bool QTermWidget_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QTermWidget_virtualbase_closeEvent(void* self, QCloseEvent* event) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::closeEvent(event);

}

bool QTermWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QTermWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::contextMenuEvent(event);

}

bool QTermWidget_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QTermWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::tabletEvent(event);

}

bool QTermWidget_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QTermWidget_virtualbase_actionEvent(void* self, QActionEvent* event) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::actionEvent(event);

}

bool QTermWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QTermWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::dragEnterEvent(event);

}

bool QTermWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QTermWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::dragMoveEvent(event);

}

bool QTermWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QTermWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::dragLeaveEvent(event);

}

bool QTermWidget_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QTermWidget_virtualbase_dropEvent(void* self, QDropEvent* event) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::dropEvent(event);

}

bool QTermWidget_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QTermWidget_virtualbase_showEvent(void* self, QShowEvent* event) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::showEvent(event);

}

bool QTermWidget_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QTermWidget_virtualbase_hideEvent(void* self, QHideEvent* event) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::hideEvent(event);

}

bool QTermWidget_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QTermWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);

	return ( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

}

bool QTermWidget_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QTermWidget_virtualbase_changeEvent(void* self, QEvent* param1) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::changeEvent(param1);

}

bool QTermWidget_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QTermWidget_virtualbase_metric(const void* self, int param1) {

	return ( (const MiqtVirtualQTermWidget*)(self) )->QTermWidget::metric(static_cast<MiqtVirtualQTermWidget::PaintDeviceMetric>(param1));

}

bool QTermWidget_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QTermWidget_virtualbase_initPainter(const void* self, QPainter* painter) {

	( (const MiqtVirtualQTermWidget*)(self) )->QTermWidget::initPainter(painter);

}

bool QTermWidget_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QTermWidget_virtualbase_redirected(const void* self, QPoint* offset) {

	return ( (const MiqtVirtualQTermWidget*)(self) )->QTermWidget::redirected(offset);

}

bool QTermWidget_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QTermWidget_virtualbase_sharedPainter(const void* self) {

	return ( (const MiqtVirtualQTermWidget*)(self) )->QTermWidget::sharedPainter();

}

bool QTermWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QTermWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::inputMethodEvent(param1);

}

bool QTermWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QTermWidget_virtualbase_inputMethodQuery(const void* self, int param1) {

	return new QVariant(( (const MiqtVirtualQTermWidget*)(self) )->QTermWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

}

bool QTermWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QTermWidget_virtualbase_focusNextPrevChild(void* self, bool next) {

	return ( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::focusNextPrevChild(next);

}

bool QTermWidget_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QTermWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::eventFilter(watched, event);

}

bool QTermWidget_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QTermWidget_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::timerEvent(event);

}

bool QTermWidget_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QTermWidget_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::childEvent(event);

}

bool QTermWidget_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QTermWidget_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::customEvent(event);

}

bool QTermWidget_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QTermWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::connectNotify(*signal);

}

bool QTermWidget_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QTermWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQTermWidget*)(self) )->QTermWidget::disconnectNotify(*signal);

}

void QTermWidget_protectedbase_sessionFinished(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->sessionFinished();

}

void QTermWidget_protectedbase_selectionChanged(bool* _dynamic_cast_ok, void* self, bool textSelected) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->selectionChanged(textSelected);

}

void QTermWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QTermWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QTermWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QTermWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QTermWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QTermWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QTermWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QTermWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QTermWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQTermWidget* self_cast = dynamic_cast<MiqtVirtualQTermWidget*>( (QTermWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QTermWidget_delete(QTermWidget* self) {
	delete self;
}

