#include "gen_qstylehints.h"
#include "qstylehints.h"

#include <QChar>
#include <QMetaObject>
#include <QString>
#include <QStyleHints>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QStyleHints_MetaObject(QStyleHints* self) {
	return (QMetaObject*) self->metaObject();
}

void QStyleHints_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QStyleHints::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyleHints_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QStyleHints::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyleHints_SetMouseDoubleClickInterval(QStyleHints* self, int mouseDoubleClickInterval) {
	self->setMouseDoubleClickInterval(static_cast<int>(mouseDoubleClickInterval));
}

int QStyleHints_MouseDoubleClickInterval(QStyleHints* self) {
	return self->mouseDoubleClickInterval();
}

int QStyleHints_MouseDoubleClickDistance(QStyleHints* self) {
	return self->mouseDoubleClickDistance();
}

int QStyleHints_TouchDoubleTapDistance(QStyleHints* self) {
	return self->touchDoubleTapDistance();
}

void QStyleHints_SetMousePressAndHoldInterval(QStyleHints* self, int mousePressAndHoldInterval) {
	self->setMousePressAndHoldInterval(static_cast<int>(mousePressAndHoldInterval));
}

int QStyleHints_MousePressAndHoldInterval(QStyleHints* self) {
	return self->mousePressAndHoldInterval();
}

void QStyleHints_SetStartDragDistance(QStyleHints* self, int startDragDistance) {
	self->setStartDragDistance(static_cast<int>(startDragDistance));
}

int QStyleHints_StartDragDistance(QStyleHints* self) {
	return self->startDragDistance();
}

void QStyleHints_SetStartDragTime(QStyleHints* self, int startDragTime) {
	self->setStartDragTime(static_cast<int>(startDragTime));
}

int QStyleHints_StartDragTime(QStyleHints* self) {
	return self->startDragTime();
}

int QStyleHints_StartDragVelocity(QStyleHints* self) {
	return self->startDragVelocity();
}

void QStyleHints_SetKeyboardInputInterval(QStyleHints* self, int keyboardInputInterval) {
	self->setKeyboardInputInterval(static_cast<int>(keyboardInputInterval));
}

int QStyleHints_KeyboardInputInterval(QStyleHints* self) {
	return self->keyboardInputInterval();
}

int QStyleHints_KeyboardAutoRepeatRate(QStyleHints* self) {
	return self->keyboardAutoRepeatRate();
}

void QStyleHints_SetCursorFlashTime(QStyleHints* self, int cursorFlashTime) {
	self->setCursorFlashTime(static_cast<int>(cursorFlashTime));
}

int QStyleHints_CursorFlashTime(QStyleHints* self) {
	return self->cursorFlashTime();
}

bool QStyleHints_ShowIsFullScreen(QStyleHints* self) {
	return self->showIsFullScreen();
}

bool QStyleHints_ShowIsMaximized(QStyleHints* self) {
	return self->showIsMaximized();
}

bool QStyleHints_ShowShortcutsInContextMenus(QStyleHints* self) {
	return self->showShortcutsInContextMenus();
}

void QStyleHints_SetShowShortcutsInContextMenus(QStyleHints* self, bool showShortcutsInContextMenus) {
	self->setShowShortcutsInContextMenus(showShortcutsInContextMenus);
}

int QStyleHints_PasswordMaskDelay(QStyleHints* self) {
	return self->passwordMaskDelay();
}

QChar* QStyleHints_PasswordMaskCharacter(QStyleHints* self) {
	QChar ret = self->passwordMaskCharacter();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

double QStyleHints_FontSmoothingGamma(QStyleHints* self) {
	return self->fontSmoothingGamma();
}

bool QStyleHints_UseRtlExtensions(QStyleHints* self) {
	return self->useRtlExtensions();
}

bool QStyleHints_SetFocusOnTouchRelease(QStyleHints* self) {
	return self->setFocusOnTouchRelease();
}

bool QStyleHints_SingleClickActivation(QStyleHints* self) {
	return self->singleClickActivation();
}

bool QStyleHints_UseHoverEffects(QStyleHints* self) {
	return self->useHoverEffects();
}

void QStyleHints_SetUseHoverEffects(QStyleHints* self, bool useHoverEffects) {
	self->setUseHoverEffects(useHoverEffects);
}

int QStyleHints_WheelScrollLines(QStyleHints* self) {
	return self->wheelScrollLines();
}

void QStyleHints_SetWheelScrollLines(QStyleHints* self, int scrollLines) {
	self->setWheelScrollLines(static_cast<int>(scrollLines));
}

void QStyleHints_SetMouseQuickSelectionThreshold(QStyleHints* self, int threshold) {
	self->setMouseQuickSelectionThreshold(static_cast<int>(threshold));
}

int QStyleHints_MouseQuickSelectionThreshold(QStyleHints* self) {
	return self->mouseQuickSelectionThreshold();
}

void QStyleHints_CursorFlashTimeChanged(QStyleHints* self, int cursorFlashTime) {
	self->cursorFlashTimeChanged(static_cast<int>(cursorFlashTime));
}

void QStyleHints_connect_CursorFlashTimeChanged(QStyleHints* self, void* slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::cursorFlashTimeChanged), self, [=](int cursorFlashTime) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QStyleHints_KeyboardInputIntervalChanged(QStyleHints* self, int keyboardInputInterval) {
	self->keyboardInputIntervalChanged(static_cast<int>(keyboardInputInterval));
}

void QStyleHints_connect_KeyboardInputIntervalChanged(QStyleHints* self, void* slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::keyboardInputIntervalChanged), self, [=](int keyboardInputInterval) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QStyleHints_MouseDoubleClickIntervalChanged(QStyleHints* self, int mouseDoubleClickInterval) {
	self->mouseDoubleClickIntervalChanged(static_cast<int>(mouseDoubleClickInterval));
}

void QStyleHints_connect_MouseDoubleClickIntervalChanged(QStyleHints* self, void* slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::mouseDoubleClickIntervalChanged), self, [=](int mouseDoubleClickInterval) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QStyleHints_MousePressAndHoldIntervalChanged(QStyleHints* self, int mousePressAndHoldInterval) {
	self->mousePressAndHoldIntervalChanged(static_cast<int>(mousePressAndHoldInterval));
}

void QStyleHints_connect_MousePressAndHoldIntervalChanged(QStyleHints* self, void* slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::mousePressAndHoldIntervalChanged), self, [=](int mousePressAndHoldInterval) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QStyleHints_StartDragDistanceChanged(QStyleHints* self, int startDragDistance) {
	self->startDragDistanceChanged(static_cast<int>(startDragDistance));
}

void QStyleHints_connect_StartDragDistanceChanged(QStyleHints* self, void* slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::startDragDistanceChanged), self, [=](int startDragDistance) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QStyleHints_StartDragTimeChanged(QStyleHints* self, int startDragTime) {
	self->startDragTimeChanged(static_cast<int>(startDragTime));
}

void QStyleHints_connect_StartDragTimeChanged(QStyleHints* self, void* slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::startDragTimeChanged), self, [=](int startDragTime) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QStyleHints_UseHoverEffectsChanged(QStyleHints* self, bool useHoverEffects) {
	self->useHoverEffectsChanged(useHoverEffects);
}

void QStyleHints_connect_UseHoverEffectsChanged(QStyleHints* self, void* slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(bool)>(&QStyleHints::useHoverEffectsChanged), self, [=](bool useHoverEffects) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QStyleHints_ShowShortcutsInContextMenusChanged(QStyleHints* self, bool param1) {
	self->showShortcutsInContextMenusChanged(param1);
}

void QStyleHints_connect_ShowShortcutsInContextMenusChanged(QStyleHints* self, void* slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(bool)>(&QStyleHints::showShortcutsInContextMenusChanged), self, [=](bool param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QStyleHints_WheelScrollLinesChanged(QStyleHints* self, int scrollLines) {
	self->wheelScrollLinesChanged(static_cast<int>(scrollLines));
}

void QStyleHints_connect_WheelScrollLinesChanged(QStyleHints* self, void* slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::wheelScrollLinesChanged), self, [=](int scrollLines) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QStyleHints_MouseQuickSelectionThresholdChanged(QStyleHints* self, int threshold) {
	self->mouseQuickSelectionThresholdChanged(static_cast<int>(threshold));
}

void QStyleHints_connect_MouseQuickSelectionThresholdChanged(QStyleHints* self, void* slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::mouseQuickSelectionThresholdChanged), self, [=](int threshold) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QStyleHints_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QStyleHints::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyleHints_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QStyleHints::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyleHints_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QStyleHints::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyleHints_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QStyleHints::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyleHints_Delete(QStyleHints* self) {
	delete self;
}

