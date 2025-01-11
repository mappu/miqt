#include <QChar>
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

void miqt_exec_callback_QStyleHints_CursorFlashTimeChanged(intptr_t, int);
void miqt_exec_callback_QStyleHints_KeyboardInputIntervalChanged(intptr_t, int);
void miqt_exec_callback_QStyleHints_MouseDoubleClickIntervalChanged(intptr_t, int);
void miqt_exec_callback_QStyleHints_MousePressAndHoldIntervalChanged(intptr_t, int);
void miqt_exec_callback_QStyleHints_StartDragDistanceChanged(intptr_t, int);
void miqt_exec_callback_QStyleHints_StartDragTimeChanged(intptr_t, int);
void miqt_exec_callback_QStyleHints_TabFocusBehaviorChanged(intptr_t, int);
void miqt_exec_callback_QStyleHints_UseHoverEffectsChanged(intptr_t, bool);
void miqt_exec_callback_QStyleHints_ShowShortcutsInContextMenusChanged(intptr_t, bool);
void miqt_exec_callback_QStyleHints_WheelScrollLinesChanged(intptr_t, int);
void miqt_exec_callback_QStyleHints_MouseQuickSelectionThresholdChanged(intptr_t, int);
#ifdef __cplusplus
} /* extern C */
#endif

void QStyleHints_virtbase(QStyleHints* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QStyleHints_MetaObject(const QStyleHints* self) {
	return (QMetaObject*) self->metaObject();
}

void* QStyleHints_Metacast(QStyleHints* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QStyleHints_Tr(const char* s) {
	QString _ret = QStyleHints::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStyleHints_TrUtf8(const char* s) {
	QString _ret = QStyleHints::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStyleHints_SetMouseDoubleClickInterval(QStyleHints* self, int mouseDoubleClickInterval) {
	self->setMouseDoubleClickInterval(static_cast<int>(mouseDoubleClickInterval));
}

int QStyleHints_MouseDoubleClickInterval(const QStyleHints* self) {
	return self->mouseDoubleClickInterval();
}

int QStyleHints_MouseDoubleClickDistance(const QStyleHints* self) {
	return self->mouseDoubleClickDistance();
}

int QStyleHints_TouchDoubleTapDistance(const QStyleHints* self) {
	return self->touchDoubleTapDistance();
}

void QStyleHints_SetMousePressAndHoldInterval(QStyleHints* self, int mousePressAndHoldInterval) {
	self->setMousePressAndHoldInterval(static_cast<int>(mousePressAndHoldInterval));
}

int QStyleHints_MousePressAndHoldInterval(const QStyleHints* self) {
	return self->mousePressAndHoldInterval();
}

void QStyleHints_SetStartDragDistance(QStyleHints* self, int startDragDistance) {
	self->setStartDragDistance(static_cast<int>(startDragDistance));
}

int QStyleHints_StartDragDistance(const QStyleHints* self) {
	return self->startDragDistance();
}

void QStyleHints_SetStartDragTime(QStyleHints* self, int startDragTime) {
	self->setStartDragTime(static_cast<int>(startDragTime));
}

int QStyleHints_StartDragTime(const QStyleHints* self) {
	return self->startDragTime();
}

int QStyleHints_StartDragVelocity(const QStyleHints* self) {
	return self->startDragVelocity();
}

void QStyleHints_SetKeyboardInputInterval(QStyleHints* self, int keyboardInputInterval) {
	self->setKeyboardInputInterval(static_cast<int>(keyboardInputInterval));
}

int QStyleHints_KeyboardInputInterval(const QStyleHints* self) {
	return self->keyboardInputInterval();
}

int QStyleHints_KeyboardAutoRepeatRate(const QStyleHints* self) {
	return self->keyboardAutoRepeatRate();
}

void QStyleHints_SetCursorFlashTime(QStyleHints* self, int cursorFlashTime) {
	self->setCursorFlashTime(static_cast<int>(cursorFlashTime));
}

int QStyleHints_CursorFlashTime(const QStyleHints* self) {
	return self->cursorFlashTime();
}

bool QStyleHints_ShowIsFullScreen(const QStyleHints* self) {
	return self->showIsFullScreen();
}

bool QStyleHints_ShowIsMaximized(const QStyleHints* self) {
	return self->showIsMaximized();
}

bool QStyleHints_ShowShortcutsInContextMenus(const QStyleHints* self) {
	return self->showShortcutsInContextMenus();
}

void QStyleHints_SetShowShortcutsInContextMenus(QStyleHints* self, bool showShortcutsInContextMenus) {
	self->setShowShortcutsInContextMenus(showShortcutsInContextMenus);
}

int QStyleHints_PasswordMaskDelay(const QStyleHints* self) {
	return self->passwordMaskDelay();
}

QChar* QStyleHints_PasswordMaskCharacter(const QStyleHints* self) {
	return new QChar(self->passwordMaskCharacter());
}

double QStyleHints_FontSmoothingGamma(const QStyleHints* self) {
	qreal _ret = self->fontSmoothingGamma();
	return static_cast<double>(_ret);
}

bool QStyleHints_UseRtlExtensions(const QStyleHints* self) {
	return self->useRtlExtensions();
}

bool QStyleHints_SetFocusOnTouchRelease(const QStyleHints* self) {
	return self->setFocusOnTouchRelease();
}

int QStyleHints_TabFocusBehavior(const QStyleHints* self) {
	Qt::TabFocusBehavior _ret = self->tabFocusBehavior();
	return static_cast<int>(_ret);
}

void QStyleHints_SetTabFocusBehavior(QStyleHints* self, int tabFocusBehavior) {
	self->setTabFocusBehavior(static_cast<Qt::TabFocusBehavior>(tabFocusBehavior));
}

bool QStyleHints_SingleClickActivation(const QStyleHints* self) {
	return self->singleClickActivation();
}

bool QStyleHints_UseHoverEffects(const QStyleHints* self) {
	return self->useHoverEffects();
}

void QStyleHints_SetUseHoverEffects(QStyleHints* self, bool useHoverEffects) {
	self->setUseHoverEffects(useHoverEffects);
}

int QStyleHints_WheelScrollLines(const QStyleHints* self) {
	return self->wheelScrollLines();
}

void QStyleHints_SetWheelScrollLines(QStyleHints* self, int scrollLines) {
	self->setWheelScrollLines(static_cast<int>(scrollLines));
}

void QStyleHints_SetMouseQuickSelectionThreshold(QStyleHints* self, int threshold) {
	self->setMouseQuickSelectionThreshold(static_cast<int>(threshold));
}

int QStyleHints_MouseQuickSelectionThreshold(const QStyleHints* self) {
	return self->mouseQuickSelectionThreshold();
}

void QStyleHints_CursorFlashTimeChanged(QStyleHints* self, int cursorFlashTime) {
	self->cursorFlashTimeChanged(static_cast<int>(cursorFlashTime));
}

void QStyleHints_connect_CursorFlashTimeChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::cursorFlashTimeChanged), self, [=](int cursorFlashTime) {
		int sigval1 = cursorFlashTime;
		miqt_exec_callback_QStyleHints_CursorFlashTimeChanged(slot, sigval1);
	});
}

void QStyleHints_KeyboardInputIntervalChanged(QStyleHints* self, int keyboardInputInterval) {
	self->keyboardInputIntervalChanged(static_cast<int>(keyboardInputInterval));
}

void QStyleHints_connect_KeyboardInputIntervalChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::keyboardInputIntervalChanged), self, [=](int keyboardInputInterval) {
		int sigval1 = keyboardInputInterval;
		miqt_exec_callback_QStyleHints_KeyboardInputIntervalChanged(slot, sigval1);
	});
}

void QStyleHints_MouseDoubleClickIntervalChanged(QStyleHints* self, int mouseDoubleClickInterval) {
	self->mouseDoubleClickIntervalChanged(static_cast<int>(mouseDoubleClickInterval));
}

void QStyleHints_connect_MouseDoubleClickIntervalChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::mouseDoubleClickIntervalChanged), self, [=](int mouseDoubleClickInterval) {
		int sigval1 = mouseDoubleClickInterval;
		miqt_exec_callback_QStyleHints_MouseDoubleClickIntervalChanged(slot, sigval1);
	});
}

void QStyleHints_MousePressAndHoldIntervalChanged(QStyleHints* self, int mousePressAndHoldInterval) {
	self->mousePressAndHoldIntervalChanged(static_cast<int>(mousePressAndHoldInterval));
}

void QStyleHints_connect_MousePressAndHoldIntervalChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::mousePressAndHoldIntervalChanged), self, [=](int mousePressAndHoldInterval) {
		int sigval1 = mousePressAndHoldInterval;
		miqt_exec_callback_QStyleHints_MousePressAndHoldIntervalChanged(slot, sigval1);
	});
}

void QStyleHints_StartDragDistanceChanged(QStyleHints* self, int startDragDistance) {
	self->startDragDistanceChanged(static_cast<int>(startDragDistance));
}

void QStyleHints_connect_StartDragDistanceChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::startDragDistanceChanged), self, [=](int startDragDistance) {
		int sigval1 = startDragDistance;
		miqt_exec_callback_QStyleHints_StartDragDistanceChanged(slot, sigval1);
	});
}

void QStyleHints_StartDragTimeChanged(QStyleHints* self, int startDragTime) {
	self->startDragTimeChanged(static_cast<int>(startDragTime));
}

void QStyleHints_connect_StartDragTimeChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::startDragTimeChanged), self, [=](int startDragTime) {
		int sigval1 = startDragTime;
		miqt_exec_callback_QStyleHints_StartDragTimeChanged(slot, sigval1);
	});
}

void QStyleHints_TabFocusBehaviorChanged(QStyleHints* self, int tabFocusBehavior) {
	self->tabFocusBehaviorChanged(static_cast<Qt::TabFocusBehavior>(tabFocusBehavior));
}

void QStyleHints_connect_TabFocusBehaviorChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(Qt::TabFocusBehavior)>(&QStyleHints::tabFocusBehaviorChanged), self, [=](Qt::TabFocusBehavior tabFocusBehavior) {
		Qt::TabFocusBehavior tabFocusBehavior_ret = tabFocusBehavior;
		int sigval1 = static_cast<int>(tabFocusBehavior_ret);
		miqt_exec_callback_QStyleHints_TabFocusBehaviorChanged(slot, sigval1);
	});
}

void QStyleHints_UseHoverEffectsChanged(QStyleHints* self, bool useHoverEffects) {
	self->useHoverEffectsChanged(useHoverEffects);
}

void QStyleHints_connect_UseHoverEffectsChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(bool)>(&QStyleHints::useHoverEffectsChanged), self, [=](bool useHoverEffects) {
		bool sigval1 = useHoverEffects;
		miqt_exec_callback_QStyleHints_UseHoverEffectsChanged(slot, sigval1);
	});
}

void QStyleHints_ShowShortcutsInContextMenusChanged(QStyleHints* self, bool param1) {
	self->showShortcutsInContextMenusChanged(param1);
}

void QStyleHints_connect_ShowShortcutsInContextMenusChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(bool)>(&QStyleHints::showShortcutsInContextMenusChanged), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QStyleHints_ShowShortcutsInContextMenusChanged(slot, sigval1);
	});
}

void QStyleHints_WheelScrollLinesChanged(QStyleHints* self, int scrollLines) {
	self->wheelScrollLinesChanged(static_cast<int>(scrollLines));
}

void QStyleHints_connect_WheelScrollLinesChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::wheelScrollLinesChanged), self, [=](int scrollLines) {
		int sigval1 = scrollLines;
		miqt_exec_callback_QStyleHints_WheelScrollLinesChanged(slot, sigval1);
	});
}

void QStyleHints_MouseQuickSelectionThresholdChanged(QStyleHints* self, int threshold) {
	self->mouseQuickSelectionThresholdChanged(static_cast<int>(threshold));
}

void QStyleHints_connect_MouseQuickSelectionThresholdChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::mouseQuickSelectionThresholdChanged), self, [=](int threshold) {
		int sigval1 = threshold;
		miqt_exec_callback_QStyleHints_MouseQuickSelectionThresholdChanged(slot, sigval1);
	});
}

struct miqt_string QStyleHints_Tr2(const char* s, const char* c) {
	QString _ret = QStyleHints::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStyleHints_Tr3(const char* s, const char* c, int n) {
	QString _ret = QStyleHints::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStyleHints_TrUtf82(const char* s, const char* c) {
	QString _ret = QStyleHints::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStyleHints_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QStyleHints::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStyleHints_Delete(QStyleHints* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleHints*>( self );
	} else {
		delete self;
	}
}

