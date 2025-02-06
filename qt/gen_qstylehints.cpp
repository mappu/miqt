#include <QChar>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleHints>
#include <qstylehints.h>
#include "gen_qstylehints.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QStyleHints_cursorFlashTimeChanged(intptr_t, int);
void miqt_exec_callback_QStyleHints_keyboardInputIntervalChanged(intptr_t, int);
void miqt_exec_callback_QStyleHints_mouseDoubleClickIntervalChanged(intptr_t, int);
void miqt_exec_callback_QStyleHints_mousePressAndHoldIntervalChanged(intptr_t, int);
void miqt_exec_callback_QStyleHints_startDragDistanceChanged(intptr_t, int);
void miqt_exec_callback_QStyleHints_startDragTimeChanged(intptr_t, int);
void miqt_exec_callback_QStyleHints_tabFocusBehaviorChanged(intptr_t, int);
void miqt_exec_callback_QStyleHints_useHoverEffectsChanged(intptr_t, bool);
void miqt_exec_callback_QStyleHints_showShortcutsInContextMenusChanged(intptr_t, bool);
void miqt_exec_callback_QStyleHints_wheelScrollLinesChanged(intptr_t, int);
void miqt_exec_callback_QStyleHints_mouseQuickSelectionThresholdChanged(intptr_t, int);
#ifdef __cplusplus
} /* extern C */
#endif

void QStyleHints_virtbase(QStyleHints* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QStyleHints_metaObject(const QStyleHints* self) {
	return (QMetaObject*) self->metaObject();
}

void* QStyleHints_metacast(QStyleHints* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QStyleHints_tr(const char* s) {
	QString _ret = QStyleHints::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStyleHints_trUtf8(const char* s) {
	QString _ret = QStyleHints::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStyleHints_setMouseDoubleClickInterval(QStyleHints* self, int mouseDoubleClickInterval) {
	self->setMouseDoubleClickInterval(static_cast<int>(mouseDoubleClickInterval));
}

int QStyleHints_mouseDoubleClickInterval(const QStyleHints* self) {
	return self->mouseDoubleClickInterval();
}

int QStyleHints_mouseDoubleClickDistance(const QStyleHints* self) {
	return self->mouseDoubleClickDistance();
}

int QStyleHints_touchDoubleTapDistance(const QStyleHints* self) {
	return self->touchDoubleTapDistance();
}

void QStyleHints_setMousePressAndHoldInterval(QStyleHints* self, int mousePressAndHoldInterval) {
	self->setMousePressAndHoldInterval(static_cast<int>(mousePressAndHoldInterval));
}

int QStyleHints_mousePressAndHoldInterval(const QStyleHints* self) {
	return self->mousePressAndHoldInterval();
}

void QStyleHints_setStartDragDistance(QStyleHints* self, int startDragDistance) {
	self->setStartDragDistance(static_cast<int>(startDragDistance));
}

int QStyleHints_startDragDistance(const QStyleHints* self) {
	return self->startDragDistance();
}

void QStyleHints_setStartDragTime(QStyleHints* self, int startDragTime) {
	self->setStartDragTime(static_cast<int>(startDragTime));
}

int QStyleHints_startDragTime(const QStyleHints* self) {
	return self->startDragTime();
}

int QStyleHints_startDragVelocity(const QStyleHints* self) {
	return self->startDragVelocity();
}

void QStyleHints_setKeyboardInputInterval(QStyleHints* self, int keyboardInputInterval) {
	self->setKeyboardInputInterval(static_cast<int>(keyboardInputInterval));
}

int QStyleHints_keyboardInputInterval(const QStyleHints* self) {
	return self->keyboardInputInterval();
}

int QStyleHints_keyboardAutoRepeatRate(const QStyleHints* self) {
	return self->keyboardAutoRepeatRate();
}

void QStyleHints_setCursorFlashTime(QStyleHints* self, int cursorFlashTime) {
	self->setCursorFlashTime(static_cast<int>(cursorFlashTime));
}

int QStyleHints_cursorFlashTime(const QStyleHints* self) {
	return self->cursorFlashTime();
}

bool QStyleHints_showIsFullScreen(const QStyleHints* self) {
	return self->showIsFullScreen();
}

bool QStyleHints_showIsMaximized(const QStyleHints* self) {
	return self->showIsMaximized();
}

bool QStyleHints_showShortcutsInContextMenus(const QStyleHints* self) {
	return self->showShortcutsInContextMenus();
}

void QStyleHints_setShowShortcutsInContextMenus(QStyleHints* self, bool showShortcutsInContextMenus) {
	self->setShowShortcutsInContextMenus(showShortcutsInContextMenus);
}

int QStyleHints_passwordMaskDelay(const QStyleHints* self) {
	return self->passwordMaskDelay();
}

QChar* QStyleHints_passwordMaskCharacter(const QStyleHints* self) {
	return new QChar(self->passwordMaskCharacter());
}

double QStyleHints_fontSmoothingGamma(const QStyleHints* self) {
	qreal _ret = self->fontSmoothingGamma();
	return static_cast<double>(_ret);
}

bool QStyleHints_useRtlExtensions(const QStyleHints* self) {
	return self->useRtlExtensions();
}

bool QStyleHints_setFocusOnTouchRelease(const QStyleHints* self) {
	return self->setFocusOnTouchRelease();
}

int QStyleHints_tabFocusBehavior(const QStyleHints* self) {
	Qt::TabFocusBehavior _ret = self->tabFocusBehavior();
	return static_cast<int>(_ret);
}

void QStyleHints_setTabFocusBehavior(QStyleHints* self, int tabFocusBehavior) {
	self->setTabFocusBehavior(static_cast<Qt::TabFocusBehavior>(tabFocusBehavior));
}

bool QStyleHints_singleClickActivation(const QStyleHints* self) {
	return self->singleClickActivation();
}

bool QStyleHints_useHoverEffects(const QStyleHints* self) {
	return self->useHoverEffects();
}

void QStyleHints_setUseHoverEffects(QStyleHints* self, bool useHoverEffects) {
	self->setUseHoverEffects(useHoverEffects);
}

int QStyleHints_wheelScrollLines(const QStyleHints* self) {
	return self->wheelScrollLines();
}

void QStyleHints_setWheelScrollLines(QStyleHints* self, int scrollLines) {
	self->setWheelScrollLines(static_cast<int>(scrollLines));
}

void QStyleHints_setMouseQuickSelectionThreshold(QStyleHints* self, int threshold) {
	self->setMouseQuickSelectionThreshold(static_cast<int>(threshold));
}

int QStyleHints_mouseQuickSelectionThreshold(const QStyleHints* self) {
	return self->mouseQuickSelectionThreshold();
}

void QStyleHints_cursorFlashTimeChanged(QStyleHints* self, int cursorFlashTime) {
	self->cursorFlashTimeChanged(static_cast<int>(cursorFlashTime));
}

void QStyleHints_connect_cursorFlashTimeChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::cursorFlashTimeChanged), self, [=](int cursorFlashTime) {
		int sigval1 = cursorFlashTime;
		miqt_exec_callback_QStyleHints_cursorFlashTimeChanged(slot, sigval1);
	});
}

void QStyleHints_keyboardInputIntervalChanged(QStyleHints* self, int keyboardInputInterval) {
	self->keyboardInputIntervalChanged(static_cast<int>(keyboardInputInterval));
}

void QStyleHints_connect_keyboardInputIntervalChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::keyboardInputIntervalChanged), self, [=](int keyboardInputInterval) {
		int sigval1 = keyboardInputInterval;
		miqt_exec_callback_QStyleHints_keyboardInputIntervalChanged(slot, sigval1);
	});
}

void QStyleHints_mouseDoubleClickIntervalChanged(QStyleHints* self, int mouseDoubleClickInterval) {
	self->mouseDoubleClickIntervalChanged(static_cast<int>(mouseDoubleClickInterval));
}

void QStyleHints_connect_mouseDoubleClickIntervalChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::mouseDoubleClickIntervalChanged), self, [=](int mouseDoubleClickInterval) {
		int sigval1 = mouseDoubleClickInterval;
		miqt_exec_callback_QStyleHints_mouseDoubleClickIntervalChanged(slot, sigval1);
	});
}

void QStyleHints_mousePressAndHoldIntervalChanged(QStyleHints* self, int mousePressAndHoldInterval) {
	self->mousePressAndHoldIntervalChanged(static_cast<int>(mousePressAndHoldInterval));
}

void QStyleHints_connect_mousePressAndHoldIntervalChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::mousePressAndHoldIntervalChanged), self, [=](int mousePressAndHoldInterval) {
		int sigval1 = mousePressAndHoldInterval;
		miqt_exec_callback_QStyleHints_mousePressAndHoldIntervalChanged(slot, sigval1);
	});
}

void QStyleHints_startDragDistanceChanged(QStyleHints* self, int startDragDistance) {
	self->startDragDistanceChanged(static_cast<int>(startDragDistance));
}

void QStyleHints_connect_startDragDistanceChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::startDragDistanceChanged), self, [=](int startDragDistance) {
		int sigval1 = startDragDistance;
		miqt_exec_callback_QStyleHints_startDragDistanceChanged(slot, sigval1);
	});
}

void QStyleHints_startDragTimeChanged(QStyleHints* self, int startDragTime) {
	self->startDragTimeChanged(static_cast<int>(startDragTime));
}

void QStyleHints_connect_startDragTimeChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::startDragTimeChanged), self, [=](int startDragTime) {
		int sigval1 = startDragTime;
		miqt_exec_callback_QStyleHints_startDragTimeChanged(slot, sigval1);
	});
}

void QStyleHints_tabFocusBehaviorChanged(QStyleHints* self, int tabFocusBehavior) {
	self->tabFocusBehaviorChanged(static_cast<Qt::TabFocusBehavior>(tabFocusBehavior));
}

void QStyleHints_connect_tabFocusBehaviorChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(Qt::TabFocusBehavior)>(&QStyleHints::tabFocusBehaviorChanged), self, [=](Qt::TabFocusBehavior tabFocusBehavior) {
		Qt::TabFocusBehavior tabFocusBehavior_ret = tabFocusBehavior;
		int sigval1 = static_cast<int>(tabFocusBehavior_ret);
		miqt_exec_callback_QStyleHints_tabFocusBehaviorChanged(slot, sigval1);
	});
}

void QStyleHints_useHoverEffectsChanged(QStyleHints* self, bool useHoverEffects) {
	self->useHoverEffectsChanged(useHoverEffects);
}

void QStyleHints_connect_useHoverEffectsChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(bool)>(&QStyleHints::useHoverEffectsChanged), self, [=](bool useHoverEffects) {
		bool sigval1 = useHoverEffects;
		miqt_exec_callback_QStyleHints_useHoverEffectsChanged(slot, sigval1);
	});
}

void QStyleHints_showShortcutsInContextMenusChanged(QStyleHints* self, bool param1) {
	self->showShortcutsInContextMenusChanged(param1);
}

void QStyleHints_connect_showShortcutsInContextMenusChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(bool)>(&QStyleHints::showShortcutsInContextMenusChanged), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QStyleHints_showShortcutsInContextMenusChanged(slot, sigval1);
	});
}

void QStyleHints_wheelScrollLinesChanged(QStyleHints* self, int scrollLines) {
	self->wheelScrollLinesChanged(static_cast<int>(scrollLines));
}

void QStyleHints_connect_wheelScrollLinesChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::wheelScrollLinesChanged), self, [=](int scrollLines) {
		int sigval1 = scrollLines;
		miqt_exec_callback_QStyleHints_wheelScrollLinesChanged(slot, sigval1);
	});
}

void QStyleHints_mouseQuickSelectionThresholdChanged(QStyleHints* self, int threshold) {
	self->mouseQuickSelectionThresholdChanged(static_cast<int>(threshold));
}

void QStyleHints_connect_mouseQuickSelectionThresholdChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::mouseQuickSelectionThresholdChanged), self, [=](int threshold) {
		int sigval1 = threshold;
		miqt_exec_callback_QStyleHints_mouseQuickSelectionThresholdChanged(slot, sigval1);
	});
}

struct miqt_string QStyleHints_tr2(const char* s, const char* c) {
	QString _ret = QStyleHints::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStyleHints_tr3(const char* s, const char* c, int n) {
	QString _ret = QStyleHints::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStyleHints_trUtf82(const char* s, const char* c) {
	QString _ret = QStyleHints::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStyleHints_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QStyleHints::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStyleHints_delete(QStyleHints* self) {
	delete self;
}

