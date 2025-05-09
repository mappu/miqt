#include <QAction>
#include <QFont>
#include <QKeyEvent>
#include <QList>
#include <QPoint>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTermWidgetInterface>
#include <QTextCodec>
#include <qtermwidget_interface.h>
#include "gen_qtermwidget_interface.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QTermWidgetInterface_setTerminalSizeHint(QTermWidgetInterface* self, bool enabled) {
	self->setTerminalSizeHint(enabled);
}

bool QTermWidgetInterface_terminalSizeHint(QTermWidgetInterface* self) {
	return self->terminalSizeHint();
}

void QTermWidgetInterface_startShellProgram(QTermWidgetInterface* self) {
	self->startShellProgram();
}

void QTermWidgetInterface_startTerminalTeletype(QTermWidgetInterface* self) {
	self->startTerminalTeletype();
}

int QTermWidgetInterface_getShellPID(QTermWidgetInterface* self) {
	return self->getShellPID();
}

void QTermWidgetInterface_changeDir(QTermWidgetInterface* self, struct miqt_string dir) {
	QString dir_QString = QString::fromUtf8(dir.data, dir.len);
	self->changeDir(dir_QString);
}

void QTermWidgetInterface_setTerminalFont(QTermWidgetInterface* self, QFont* font) {
	self->setTerminalFont(*font);
}

QFont* QTermWidgetInterface_getTerminalFont(QTermWidgetInterface* self) {
	return new QFont(self->getTerminalFont());
}

void QTermWidgetInterface_setTerminalOpacity(QTermWidgetInterface* self, double level) {
	self->setTerminalOpacity(static_cast<qreal>(level));
}

void QTermWidgetInterface_setTerminalBackgroundImage(QTermWidgetInterface* self, struct miqt_string backgroundImage) {
	QString backgroundImage_QString = QString::fromUtf8(backgroundImage.data, backgroundImage.len);
	self->setTerminalBackgroundImage(backgroundImage_QString);
}

void QTermWidgetInterface_setTerminalBackgroundMode(QTermWidgetInterface* self, int mode) {
	self->setTerminalBackgroundMode(static_cast<int>(mode));
}

void QTermWidgetInterface_setEnvironment(QTermWidgetInterface* self, struct miqt_array /* of struct miqt_string */  environment) {
	QStringList environment_QList;
	environment_QList.reserve(environment.len);
	struct miqt_string* environment_arr = static_cast<struct miqt_string*>(environment.data);
	for(size_t i = 0; i < environment.len; ++i) {
		QString environment_arr_i_QString = QString::fromUtf8(environment_arr[i].data, environment_arr[i].len);
		environment_QList.push_back(environment_arr_i_QString);
	}
	self->setEnvironment(environment_QList);
}

void QTermWidgetInterface_setShellProgram(QTermWidgetInterface* self, struct miqt_string program) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	self->setShellProgram(program_QString);
}

void QTermWidgetInterface_setWorkingDirectory(QTermWidgetInterface* self, struct miqt_string dir) {
	QString dir_QString = QString::fromUtf8(dir.data, dir.len);
	self->setWorkingDirectory(dir_QString);
}

struct miqt_string QTermWidgetInterface_workingDirectory(QTermWidgetInterface* self) {
	QString _ret = self->workingDirectory();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTermWidgetInterface_setArgs(QTermWidgetInterface* self, struct miqt_array /* of struct miqt_string */  args) {
	QStringList args_QList;
	args_QList.reserve(args.len);
	struct miqt_string* args_arr = static_cast<struct miqt_string*>(args.data);
	for(size_t i = 0; i < args.len; ++i) {
		QString args_arr_i_QString = QString::fromUtf8(args_arr[i].data, args_arr[i].len);
		args_QList.push_back(args_arr_i_QString);
	}
	self->setArgs(args_QList);
}

void QTermWidgetInterface_setTextCodec(QTermWidgetInterface* self, QTextCodec* codec) {
	self->setTextCodec(codec);
}

void QTermWidgetInterface_setColorScheme(QTermWidgetInterface* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setColorScheme(name_QString);
}

struct miqt_array /* of struct miqt_string */  QTermWidgetInterface_getAvailableColorSchemes(QTermWidgetInterface* self) {
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

void QTermWidgetInterface_setHistorySize(QTermWidgetInterface* self, int lines) {
	self->setHistorySize(static_cast<int>(lines));
}

int QTermWidgetInterface_historySize(const QTermWidgetInterface* self) {
	return self->historySize();
}

void QTermWidgetInterface_setScrollBarPosition(QTermWidgetInterface* self, int scrollBarPosition) {
	self->setScrollBarPosition(static_cast<QTermWidgetInterface::ScrollBarPosition>(scrollBarPosition));
}

void QTermWidgetInterface_scrollToEnd(QTermWidgetInterface* self) {
	self->scrollToEnd();
}

void QTermWidgetInterface_sendText(QTermWidgetInterface* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->sendText(text_QString);
}

void QTermWidgetInterface_sendKeyEvent(QTermWidgetInterface* self, QKeyEvent* e) {
	self->sendKeyEvent(e);
}

void QTermWidgetInterface_setFlowControlEnabled(QTermWidgetInterface* self, bool enabled) {
	self->setFlowControlEnabled(enabled);
}

bool QTermWidgetInterface_flowControlEnabled(QTermWidgetInterface* self) {
	return self->flowControlEnabled();
}

void QTermWidgetInterface_setFlowControlWarningEnabled(QTermWidgetInterface* self, bool enabled) {
	self->setFlowControlWarningEnabled(enabled);
}

struct miqt_string QTermWidgetInterface_keyBindings(QTermWidgetInterface* self) {
	QString _ret = self->keyBindings();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTermWidgetInterface_setMotionAfterPasting(QTermWidgetInterface* self, int motionAfterPasting) {
	self->setMotionAfterPasting(static_cast<int>(motionAfterPasting));
}

int QTermWidgetInterface_historyLinesCount(QTermWidgetInterface* self) {
	return self->historyLinesCount();
}

int QTermWidgetInterface_screenColumnsCount(QTermWidgetInterface* self) {
	return self->screenColumnsCount();
}

int QTermWidgetInterface_screenLinesCount(QTermWidgetInterface* self) {
	return self->screenLinesCount();
}

void QTermWidgetInterface_setSelectionStart(QTermWidgetInterface* self, int row, int column) {
	self->setSelectionStart(static_cast<int>(row), static_cast<int>(column));
}

void QTermWidgetInterface_setSelectionEnd(QTermWidgetInterface* self, int row, int column) {
	self->setSelectionEnd(static_cast<int>(row), static_cast<int>(column));
}

void QTermWidgetInterface_getSelectionStart(QTermWidgetInterface* self, int* row, int* column) {
	self->getSelectionStart(static_cast<int&>(*row), static_cast<int&>(*column));
}

void QTermWidgetInterface_getSelectionEnd(QTermWidgetInterface* self, int* row, int* column) {
	self->getSelectionEnd(static_cast<int&>(*row), static_cast<int&>(*column));
}

struct miqt_string QTermWidgetInterface_selectedText(QTermWidgetInterface* self, bool preserveLineBreaks) {
	QString _ret = self->selectedText(preserveLineBreaks);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTermWidgetInterface_setMonitorActivity(QTermWidgetInterface* self, bool monitorActivity) {
	self->setMonitorActivity(monitorActivity);
}

void QTermWidgetInterface_setMonitorSilence(QTermWidgetInterface* self, bool monitorSilence) {
	self->setMonitorSilence(monitorSilence);
}

void QTermWidgetInterface_setSilenceTimeout(QTermWidgetInterface* self, int seconds) {
	self->setSilenceTimeout(static_cast<int>(seconds));
}

struct miqt_array /* of QAction* */  QTermWidgetInterface_filterActions(QTermWidgetInterface* self, QPoint* position) {
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

int QTermWidgetInterface_getPtySlaveFd(const QTermWidgetInterface* self) {
	return self->getPtySlaveFd();
}

void QTermWidgetInterface_setBlinkingCursor(QTermWidgetInterface* self, bool blink) {
	self->setBlinkingCursor(blink);
}

void QTermWidgetInterface_setBidiEnabled(QTermWidgetInterface* self, bool enabled) {
	self->setBidiEnabled(enabled);
}

bool QTermWidgetInterface_isBidiEnabled(QTermWidgetInterface* self) {
	return self->isBidiEnabled();
}

void QTermWidgetInterface_setAutoClose(QTermWidgetInterface* self, bool autoClose) {
	self->setAutoClose(autoClose);
}

struct miqt_string QTermWidgetInterface_title(const QTermWidgetInterface* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTermWidgetInterface_icon(const QTermWidgetInterface* self) {
	QString _ret = self->icon();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTermWidgetInterface_isTitleChanged(const QTermWidgetInterface* self) {
	return self->isTitleChanged();
}

void QTermWidgetInterface_bracketText(QTermWidgetInterface* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->bracketText(text_QString);
}

void QTermWidgetInterface_disableBracketedPasteMode(QTermWidgetInterface* self, bool disable) {
	self->disableBracketedPasteMode(disable);
}

bool QTermWidgetInterface_bracketedPasteModeIsDisabled(const QTermWidgetInterface* self) {
	return self->bracketedPasteModeIsDisabled();
}

void QTermWidgetInterface_setMargin(QTermWidgetInterface* self, int margin) {
	self->setMargin(static_cast<int>(margin));
}

int QTermWidgetInterface_getMargin(const QTermWidgetInterface* self) {
	return self->getMargin();
}

void QTermWidgetInterface_setDrawLineChars(QTermWidgetInterface* self, bool drawLineChars) {
	self->setDrawLineChars(drawLineChars);
}

void QTermWidgetInterface_setBoldIntense(QTermWidgetInterface* self, bool boldIntense) {
	self->setBoldIntense(boldIntense);
}

void QTermWidgetInterface_setConfirmMultilinePaste(QTermWidgetInterface* self, bool confirmMultilinePaste) {
	self->setConfirmMultilinePaste(confirmMultilinePaste);
}

void QTermWidgetInterface_setTrimPastedTrailingNewlines(QTermWidgetInterface* self, bool trimPastedTrailingNewlines) {
	self->setTrimPastedTrailingNewlines(trimPastedTrailingNewlines);
}

QTermWidgetInterface* QTermWidgetInterface_createWidget(const QTermWidgetInterface* self, int startnow) {
	return self->createWidget(static_cast<int>(startnow));
}

void QTermWidgetInterface_operatorAssign(QTermWidgetInterface* self, QTermWidgetInterface* param1) {
	self->operator=(*param1);
}

void QTermWidgetInterface_delete(QTermWidgetInterface* self) {
	delete self;
}

