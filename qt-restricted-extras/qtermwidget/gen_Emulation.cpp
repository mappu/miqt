#define WORKAROUND_INNER_CLASS_DEFINITION_Konsole__Emulation
#include <QChildEvent>
#include <QEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextCodec>
#include <QTimerEvent>
#include <Emulation.h>
#include "gen_Emulation.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_Konsole__Emulation_sendData(intptr_t, const char*, int);
void miqt_exec_callback_Konsole__Emulation_lockPtyRequest(intptr_t, bool);
void miqt_exec_callback_Konsole__Emulation_useUtf8Request(intptr_t, bool);
void miqt_exec_callback_Konsole__Emulation_stateSet(intptr_t, int);
void miqt_exec_callback_Konsole__Emulation_zmodemDetected(intptr_t);
void miqt_exec_callback_Konsole__Emulation_changeTabTextColorRequest(intptr_t, int);
void miqt_exec_callback_Konsole__Emulation_programUsesMouseChanged(intptr_t, bool);
void miqt_exec_callback_Konsole__Emulation_programBracketedPasteModeChanged(intptr_t, bool);
void miqt_exec_callback_Konsole__Emulation_outputChanged(intptr_t);
void miqt_exec_callback_Konsole__Emulation_titleChanged(intptr_t, int, struct miqt_string);
void miqt_exec_callback_Konsole__Emulation_imageSizeChanged(intptr_t, int, int);
void miqt_exec_callback_Konsole__Emulation_imageSizeInitialized(intptr_t);
void miqt_exec_callback_Konsole__Emulation_imageResizeRequest(intptr_t, QSize*);
void miqt_exec_callback_Konsole__Emulation_profileChangeCommandReceived(intptr_t, struct miqt_string);
void miqt_exec_callback_Konsole__Emulation_flowControlKeyPressed(intptr_t, bool);
void miqt_exec_callback_Konsole__Emulation_cursorChanged(intptr_t, int, bool);
void miqt_exec_callback_Konsole__Emulation_outputFromKeypressEvent(intptr_t);
char miqt_exec_callback_Konsole__Emulation_eraseChar(const Konsole__Emulation*, intptr_t);
void miqt_exec_callback_Konsole__Emulation_clearEntireScreen(Konsole__Emulation*, intptr_t);
void miqt_exec_callback_Konsole__Emulation_reset(Konsole__Emulation*, intptr_t);
void miqt_exec_callback_Konsole__Emulation_setImageSize(Konsole__Emulation*, intptr_t, int, int);
void miqt_exec_callback_Konsole__Emulation_sendText(Konsole__Emulation*, intptr_t, struct miqt_string);
void miqt_exec_callback_Konsole__Emulation_sendKeyEvent(Konsole__Emulation*, intptr_t, QKeyEvent*, bool);
void miqt_exec_callback_Konsole__Emulation_sendMouseEvent(Konsole__Emulation*, intptr_t, int, int, int, int);
void miqt_exec_callback_Konsole__Emulation_sendString(Konsole__Emulation*, intptr_t, const char*, int);
void miqt_exec_callback_Konsole__Emulation_setMode(Konsole__Emulation*, intptr_t, int);
void miqt_exec_callback_Konsole__Emulation_resetMode(Konsole__Emulation*, intptr_t, int);
bool miqt_exec_callback_Konsole__Emulation_event(Konsole__Emulation*, intptr_t, QEvent*);
bool miqt_exec_callback_Konsole__Emulation_eventFilter(Konsole__Emulation*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_Konsole__Emulation_timerEvent(Konsole__Emulation*, intptr_t, QTimerEvent*);
void miqt_exec_callback_Konsole__Emulation_childEvent(Konsole__Emulation*, intptr_t, QChildEvent*);
void miqt_exec_callback_Konsole__Emulation_customEvent(Konsole__Emulation*, intptr_t, QEvent*);
void miqt_exec_callback_Konsole__Emulation_connectNotify(Konsole__Emulation*, intptr_t, QMetaMethod*);
void miqt_exec_callback_Konsole__Emulation_disconnectNotify(Konsole__Emulation*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualKonsoleEmulation final : public Konsole::Emulation {
public:

	MiqtVirtualKonsoleEmulation(): Konsole::Emulation() {};

	virtual ~MiqtVirtualKonsoleEmulation() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eraseChar = 0;

	// Subclass to allow providing a Go implementation
	virtual char eraseChar() const override {
		if (handle__eraseChar == 0) {
			return Konsole__Emulation::eraseChar();
		}
		

		char callback_return_value = miqt_exec_callback_Konsole__Emulation_eraseChar(this, handle__eraseChar);

		return static_cast<char>(callback_return_value);
	}

	friend char Konsole__Emulation_virtualbase_eraseChar(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clearEntireScreen = 0;

	// Subclass to allow providing a Go implementation
	virtual void clearEntireScreen() override {
		if (handle__clearEntireScreen == 0) {
			return; // Pure virtual, there is no base we can call
		}
		

		miqt_exec_callback_Konsole__Emulation_clearEntireScreen(this, handle__clearEntireScreen);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reset = 0;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (handle__reset == 0) {
			return; // Pure virtual, there is no base we can call
		}
		

		miqt_exec_callback_Konsole__Emulation_reset(this, handle__reset);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setImageSize = 0;

	// Subclass to allow providing a Go implementation
	virtual void setImageSize(int lines, int columns) override {
		if (handle__setImageSize == 0) {
			Konsole__Emulation::setImageSize(lines, columns);
			return;
		}
		
		int sigval1 = lines;
		int sigval2 = columns;

		miqt_exec_callback_Konsole__Emulation_setImageSize(this, handle__setImageSize, sigval1, sigval2);

		
	}

	friend void Konsole__Emulation_virtualbase_setImageSize(void* self, int lines, int columns);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sendText = 0;

	// Subclass to allow providing a Go implementation
	virtual void sendText(const QString& text) override {
		if (handle__sendText == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;

		miqt_exec_callback_Konsole__Emulation_sendText(this, handle__sendText, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sendKeyEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void sendKeyEvent(QKeyEvent* param1, bool fromPaste) override {
		if (handle__sendKeyEvent == 0) {
			Konsole__Emulation::sendKeyEvent(param1, fromPaste);
			return;
		}
		
		QKeyEvent* sigval1 = param1;
		bool sigval2 = fromPaste;

		miqt_exec_callback_Konsole__Emulation_sendKeyEvent(this, handle__sendKeyEvent, sigval1, sigval2);

		
	}

	friend void Konsole__Emulation_virtualbase_sendKeyEvent(void* self, QKeyEvent* param1, bool fromPaste);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sendMouseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void sendMouseEvent(int buttons, int column, int line, int eventType) override {
		if (handle__sendMouseEvent == 0) {
			Konsole__Emulation::sendMouseEvent(buttons, column, line, eventType);
			return;
		}
		
		int sigval1 = buttons;
		int sigval2 = column;
		int sigval3 = line;
		int sigval4 = eventType;

		miqt_exec_callback_Konsole__Emulation_sendMouseEvent(this, handle__sendMouseEvent, sigval1, sigval2, sigval3, sigval4);

		
	}

	friend void Konsole__Emulation_virtualbase_sendMouseEvent(void* self, int buttons, int column, int line, int eventType);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sendString = 0;

	// Subclass to allow providing a Go implementation
	virtual void sendString(const char* string, int length) override {
		if (handle__sendString == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		const char* sigval1 = (const char*) string;
		int sigval2 = length;

		miqt_exec_callback_Konsole__Emulation_sendString(this, handle__sendString, sigval1, sigval2);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setMode = 0;

	// Subclass to allow providing a Go implementation
	virtual void setMode(int mode) override {
		if (handle__setMode == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		int sigval1 = mode;

		miqt_exec_callback_Konsole__Emulation_setMode(this, handle__setMode, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resetMode = 0;

	// Subclass to allow providing a Go implementation
	virtual void resetMode(int mode) override {
		if (handle__resetMode == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		int sigval1 = mode;

		miqt_exec_callback_Konsole__Emulation_resetMode(this, handle__resetMode, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return Konsole__Emulation::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_Konsole__Emulation_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool Konsole__Emulation_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return Konsole__Emulation::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_Konsole__Emulation_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool Konsole__Emulation_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			Konsole__Emulation::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_Konsole__Emulation_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void Konsole__Emulation_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			Konsole__Emulation::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_Konsole__Emulation_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void Konsole__Emulation_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			Konsole__Emulation::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_Konsole__Emulation_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void Konsole__Emulation_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			Konsole__Emulation::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_Konsole__Emulation_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void Konsole__Emulation_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			Konsole__Emulation::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_Konsole__Emulation_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void Konsole__Emulation_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void Konsole__Emulation_protectedbase_setScreen(bool* _dynamic_cast_ok, void* self, int index);
	friend void Konsole__Emulation_protectedbase_setCodecWithCodec(bool* _dynamic_cast_ok, void* self, int codec);
	friend void Konsole__Emulation_protectedbase_bufferedUpdate(bool* _dynamic_cast_ok, void* self);
	friend QObject* Konsole__Emulation_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int Konsole__Emulation_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int Konsole__Emulation_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool Konsole__Emulation_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

Konsole__Emulation* Konsole__Emulation_new() {
	return new MiqtVirtualKonsoleEmulation();
}

void Konsole__Emulation_virtbase(Konsole__Emulation* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* Konsole__Emulation_metaObject(const Konsole__Emulation* self) {
	return (QMetaObject*) self->metaObject();
}

void* Konsole__Emulation_metacast(Konsole__Emulation* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string Konsole__Emulation_tr(const char* s) {
	QString _ret = Konsole::Emulation::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string Konsole__Emulation_trUtf8(const char* s) {
	QString _ret = Konsole::Emulation::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* Konsole__Emulation_imageSize(const Konsole__Emulation* self) {
	return new QSize(self->imageSize());
}

int Konsole__Emulation_lineCount(const Konsole__Emulation* self) {
	return self->lineCount();
}

void Konsole__Emulation_clearHistory(Konsole__Emulation* self) {
	self->clearHistory();
}

QTextCodec* Konsole__Emulation_codec(const Konsole__Emulation* self) {
	return (QTextCodec*) self->codec();
}

void Konsole__Emulation_setCodec(Konsole__Emulation* self, QTextCodec* codec) {
	self->setCodec(codec);
}

bool Konsole__Emulation_utf8(const Konsole__Emulation* self) {
	return self->utf8();
}

char Konsole__Emulation_eraseChar(const Konsole__Emulation* self) {
	return self->eraseChar();
}

void Konsole__Emulation_setKeyBindings(Konsole__Emulation* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setKeyBindings(name_QString);
}

struct miqt_string Konsole__Emulation_keyBindings(const Konsole__Emulation* self) {
	QString _ret = self->keyBindings();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void Konsole__Emulation_clearEntireScreen(Konsole__Emulation* self) {
	self->clearEntireScreen();
}

void Konsole__Emulation_reset(Konsole__Emulation* self) {
	self->reset();
}

bool Konsole__Emulation_programUsesMouse(const Konsole__Emulation* self) {
	return self->programUsesMouse();
}

bool Konsole__Emulation_programBracketedPasteMode(const Konsole__Emulation* self) {
	return self->programBracketedPasteMode();
}

void Konsole__Emulation_setImageSize(Konsole__Emulation* self, int lines, int columns) {
	self->setImageSize(static_cast<int>(lines), static_cast<int>(columns));
}

void Konsole__Emulation_sendText(Konsole__Emulation* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->sendText(text_QString);
}

void Konsole__Emulation_sendKeyEvent(Konsole__Emulation* self, QKeyEvent* param1, bool fromPaste) {
	self->sendKeyEvent(param1, fromPaste);
}

void Konsole__Emulation_sendMouseEvent(Konsole__Emulation* self, int buttons, int column, int line, int eventType) {
	self->sendMouseEvent(static_cast<int>(buttons), static_cast<int>(column), static_cast<int>(line), static_cast<int>(eventType));
}

void Konsole__Emulation_sendString(Konsole__Emulation* self, const char* string, int length) {
	self->sendString(string, static_cast<int>(length));
}

void Konsole__Emulation_receiveData(Konsole__Emulation* self, const char* buffer, int len) {
	self->receiveData(buffer, static_cast<int>(len));
}

void Konsole__Emulation_sendData(Konsole__Emulation* self, const char* data, int len) {
	self->sendData(data, static_cast<int>(len));
}

void Konsole__Emulation_connect_sendData(Konsole__Emulation* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation::connect(self, static_cast<void (Konsole::Emulation::*)(const char*, int)>(&Konsole::Emulation::sendData), self, [=](const char* data, int len) {
		const char* sigval1 = (const char*) data;
		int sigval2 = len;
		miqt_exec_callback_Konsole__Emulation_sendData(slot, sigval1, sigval2);
	});
}

void Konsole__Emulation_lockPtyRequest(Konsole__Emulation* self, bool suspend) {
	self->lockPtyRequest(suspend);
}

void Konsole__Emulation_connect_lockPtyRequest(Konsole__Emulation* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation::connect(self, static_cast<void (Konsole::Emulation::*)(bool)>(&Konsole::Emulation::lockPtyRequest), self, [=](bool suspend) {
		bool sigval1 = suspend;
		miqt_exec_callback_Konsole__Emulation_lockPtyRequest(slot, sigval1);
	});
}

void Konsole__Emulation_useUtf8Request(Konsole__Emulation* self, bool param1) {
	self->useUtf8Request(param1);
}

void Konsole__Emulation_connect_useUtf8Request(Konsole__Emulation* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation::connect(self, static_cast<void (Konsole::Emulation::*)(bool)>(&Konsole::Emulation::useUtf8Request), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_Konsole__Emulation_useUtf8Request(slot, sigval1);
	});
}

void Konsole__Emulation_stateSet(Konsole__Emulation* self, int state) {
	self->stateSet(static_cast<int>(state));
}

void Konsole__Emulation_connect_stateSet(Konsole__Emulation* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation::connect(self, static_cast<void (Konsole::Emulation::*)(int)>(&Konsole::Emulation::stateSet), self, [=](int state) {
		int sigval1 = state;
		miqt_exec_callback_Konsole__Emulation_stateSet(slot, sigval1);
	});
}

void Konsole__Emulation_zmodemDetected(Konsole__Emulation* self) {
	self->zmodemDetected();
}

void Konsole__Emulation_connect_zmodemDetected(Konsole__Emulation* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation::connect(self, static_cast<void (Konsole::Emulation::*)()>(&Konsole::Emulation::zmodemDetected), self, [=]() {
		miqt_exec_callback_Konsole__Emulation_zmodemDetected(slot);
	});
}

void Konsole__Emulation_changeTabTextColorRequest(Konsole__Emulation* self, int color) {
	self->changeTabTextColorRequest(static_cast<int>(color));
}

void Konsole__Emulation_connect_changeTabTextColorRequest(Konsole__Emulation* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation::connect(self, static_cast<void (Konsole::Emulation::*)(int)>(&Konsole::Emulation::changeTabTextColorRequest), self, [=](int color) {
		int sigval1 = color;
		miqt_exec_callback_Konsole__Emulation_changeTabTextColorRequest(slot, sigval1);
	});
}

void Konsole__Emulation_programUsesMouseChanged(Konsole__Emulation* self, bool usesMouse) {
	self->programUsesMouseChanged(usesMouse);
}

void Konsole__Emulation_connect_programUsesMouseChanged(Konsole__Emulation* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation::connect(self, static_cast<void (Konsole::Emulation::*)(bool)>(&Konsole::Emulation::programUsesMouseChanged), self, [=](bool usesMouse) {
		bool sigval1 = usesMouse;
		miqt_exec_callback_Konsole__Emulation_programUsesMouseChanged(slot, sigval1);
	});
}

void Konsole__Emulation_programBracketedPasteModeChanged(Konsole__Emulation* self, bool bracketedPasteMode) {
	self->programBracketedPasteModeChanged(bracketedPasteMode);
}

void Konsole__Emulation_connect_programBracketedPasteModeChanged(Konsole__Emulation* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation::connect(self, static_cast<void (Konsole::Emulation::*)(bool)>(&Konsole::Emulation::programBracketedPasteModeChanged), self, [=](bool bracketedPasteMode) {
		bool sigval1 = bracketedPasteMode;
		miqt_exec_callback_Konsole__Emulation_programBracketedPasteModeChanged(slot, sigval1);
	});
}

void Konsole__Emulation_outputChanged(Konsole__Emulation* self) {
	self->outputChanged();
}

void Konsole__Emulation_connect_outputChanged(Konsole__Emulation* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation::connect(self, static_cast<void (Konsole::Emulation::*)()>(&Konsole::Emulation::outputChanged), self, [=]() {
		miqt_exec_callback_Konsole__Emulation_outputChanged(slot);
	});
}

void Konsole__Emulation_titleChanged(Konsole__Emulation* self, int title, struct miqt_string newTitle) {
	QString newTitle_QString = QString::fromUtf8(newTitle.data, newTitle.len);
	self->titleChanged(static_cast<int>(title), newTitle_QString);
}

void Konsole__Emulation_connect_titleChanged(Konsole__Emulation* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation::connect(self, static_cast<void (Konsole::Emulation::*)(int, const QString&)>(&Konsole::Emulation::titleChanged), self, [=](int title, const QString& newTitle) {
		int sigval1 = title;
		const QString newTitle_ret = newTitle;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray newTitle_b = newTitle_ret.toUtf8();
		struct miqt_string newTitle_ms;
		newTitle_ms.len = newTitle_b.length();
		newTitle_ms.data = static_cast<char*>(malloc(newTitle_ms.len));
		memcpy(newTitle_ms.data, newTitle_b.data(), newTitle_ms.len);
		struct miqt_string sigval2 = newTitle_ms;
		miqt_exec_callback_Konsole__Emulation_titleChanged(slot, sigval1, sigval2);
	});
}

void Konsole__Emulation_imageSizeChanged(Konsole__Emulation* self, int lineCount, int columnCount) {
	self->imageSizeChanged(static_cast<int>(lineCount), static_cast<int>(columnCount));
}

void Konsole__Emulation_connect_imageSizeChanged(Konsole__Emulation* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation::connect(self, static_cast<void (Konsole::Emulation::*)(int, int)>(&Konsole::Emulation::imageSizeChanged), self, [=](int lineCount, int columnCount) {
		int sigval1 = lineCount;
		int sigval2 = columnCount;
		miqt_exec_callback_Konsole__Emulation_imageSizeChanged(slot, sigval1, sigval2);
	});
}

void Konsole__Emulation_imageSizeInitialized(Konsole__Emulation* self) {
	self->imageSizeInitialized();
}

void Konsole__Emulation_connect_imageSizeInitialized(Konsole__Emulation* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation::connect(self, static_cast<void (Konsole::Emulation::*)()>(&Konsole::Emulation::imageSizeInitialized), self, [=]() {
		miqt_exec_callback_Konsole__Emulation_imageSizeInitialized(slot);
	});
}

void Konsole__Emulation_imageResizeRequest(Konsole__Emulation* self, QSize* sizz) {
	self->imageResizeRequest(*sizz);
}

void Konsole__Emulation_connect_imageResizeRequest(Konsole__Emulation* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation::connect(self, static_cast<void (Konsole::Emulation::*)(const QSize&)>(&Konsole::Emulation::imageResizeRequest), self, [=](const QSize& sizz) {
		const QSize& sizz_ret = sizz;
		// Cast returned reference into pointer
		QSize* sigval1 = const_cast<QSize*>(&sizz_ret);
		miqt_exec_callback_Konsole__Emulation_imageResizeRequest(slot, sigval1);
	});
}

void Konsole__Emulation_profileChangeCommandReceived(Konsole__Emulation* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->profileChangeCommandReceived(text_QString);
}

void Konsole__Emulation_connect_profileChangeCommandReceived(Konsole__Emulation* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation::connect(self, static_cast<void (Konsole::Emulation::*)(const QString&)>(&Konsole::Emulation::profileChangeCommandReceived), self, [=](const QString& text) {
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;
		miqt_exec_callback_Konsole__Emulation_profileChangeCommandReceived(slot, sigval1);
	});
}

void Konsole__Emulation_flowControlKeyPressed(Konsole__Emulation* self, bool suspendKeyPressed) {
	self->flowControlKeyPressed(suspendKeyPressed);
}

void Konsole__Emulation_connect_flowControlKeyPressed(Konsole__Emulation* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation::connect(self, static_cast<void (Konsole::Emulation::*)(bool)>(&Konsole::Emulation::flowControlKeyPressed), self, [=](bool suspendKeyPressed) {
		bool sigval1 = suspendKeyPressed;
		miqt_exec_callback_Konsole__Emulation_flowControlKeyPressed(slot, sigval1);
	});
}

void Konsole__Emulation_cursorChanged(Konsole__Emulation* self, int cursorShape, bool blinkingCursorEnabled) {
	self->cursorChanged(static_cast<Konsole::Emulation::KeyboardCursorShape>(cursorShape), blinkingCursorEnabled);
}

void Konsole__Emulation_connect_cursorChanged(Konsole__Emulation* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation::connect(self, static_cast<void (Konsole::Emulation::*)(Konsole::Emulation::KeyboardCursorShape, bool)>(&Konsole::Emulation::cursorChanged), self, [=](Konsole::Emulation::KeyboardCursorShape cursorShape, bool blinkingCursorEnabled) {
		Konsole::Emulation::KeyboardCursorShape cursorShape_ret = cursorShape;
		int sigval1 = static_cast<int>(cursorShape_ret);
		bool sigval2 = blinkingCursorEnabled;
		miqt_exec_callback_Konsole__Emulation_cursorChanged(slot, sigval1, sigval2);
	});
}

void Konsole__Emulation_outputFromKeypressEvent(Konsole__Emulation* self) {
	self->outputFromKeypressEvent();
}

void Konsole__Emulation_connect_outputFromKeypressEvent(Konsole__Emulation* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation::connect(self, static_cast<void (Konsole::Emulation::*)()>(&Konsole::Emulation::outputFromKeypressEvent), self, [=]() {
		miqt_exec_callback_Konsole__Emulation_outputFromKeypressEvent(slot);
	});
}

struct miqt_string Konsole__Emulation_tr2(const char* s, const char* c) {
	QString _ret = Konsole::Emulation::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string Konsole__Emulation_tr3(const char* s, const char* c, int n) {
	QString _ret = Konsole::Emulation::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string Konsole__Emulation_trUtf82(const char* s, const char* c) {
	QString _ret = Konsole::Emulation::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string Konsole__Emulation_trUtf83(const char* s, const char* c, int n) {
	QString _ret = Konsole::Emulation::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool Konsole__Emulation_override_virtual_eraseChar(void* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation* self_cast = dynamic_cast<MiqtVirtualKonsoleEmulation*>( (Konsole__Emulation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eraseChar = slot;
	return true;
}

char Konsole__Emulation_virtualbase_eraseChar(const void* self) {

	return ( (const MiqtVirtualKonsoleEmulation*)(self) )->Konsole::Emulation::eraseChar();

}

bool Konsole__Emulation_override_virtual_clearEntireScreen(void* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation* self_cast = dynamic_cast<MiqtVirtualKonsoleEmulation*>( (Konsole__Emulation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__clearEntireScreen = slot;
	return true;
}

bool Konsole__Emulation_override_virtual_reset(void* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation* self_cast = dynamic_cast<MiqtVirtualKonsoleEmulation*>( (Konsole__Emulation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__reset = slot;
	return true;
}

bool Konsole__Emulation_override_virtual_setImageSize(void* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation* self_cast = dynamic_cast<MiqtVirtualKonsoleEmulation*>( (Konsole__Emulation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setImageSize = slot;
	return true;
}

void Konsole__Emulation_virtualbase_setImageSize(void* self, int lines, int columns) {

	( (MiqtVirtualKonsoleEmulation*)(self) )->Konsole::Emulation::setImageSize(static_cast<int>(lines), static_cast<int>(columns));

}

bool Konsole__Emulation_override_virtual_sendText(void* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation* self_cast = dynamic_cast<MiqtVirtualKonsoleEmulation*>( (Konsole__Emulation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sendText = slot;
	return true;
}

bool Konsole__Emulation_override_virtual_sendKeyEvent(void* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation* self_cast = dynamic_cast<MiqtVirtualKonsoleEmulation*>( (Konsole__Emulation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sendKeyEvent = slot;
	return true;
}

void Konsole__Emulation_virtualbase_sendKeyEvent(void* self, QKeyEvent* param1, bool fromPaste) {

	( (MiqtVirtualKonsoleEmulation*)(self) )->Konsole::Emulation::sendKeyEvent(param1, fromPaste);

}

bool Konsole__Emulation_override_virtual_sendMouseEvent(void* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation* self_cast = dynamic_cast<MiqtVirtualKonsoleEmulation*>( (Konsole__Emulation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sendMouseEvent = slot;
	return true;
}

void Konsole__Emulation_virtualbase_sendMouseEvent(void* self, int buttons, int column, int line, int eventType) {

	( (MiqtVirtualKonsoleEmulation*)(self) )->Konsole::Emulation::sendMouseEvent(static_cast<int>(buttons), static_cast<int>(column), static_cast<int>(line), static_cast<int>(eventType));

}

bool Konsole__Emulation_override_virtual_sendString(void* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation* self_cast = dynamic_cast<MiqtVirtualKonsoleEmulation*>( (Konsole__Emulation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sendString = slot;
	return true;
}

bool Konsole__Emulation_override_virtual_setMode(void* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation* self_cast = dynamic_cast<MiqtVirtualKonsoleEmulation*>( (Konsole__Emulation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setMode = slot;
	return true;
}

bool Konsole__Emulation_override_virtual_resetMode(void* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation* self_cast = dynamic_cast<MiqtVirtualKonsoleEmulation*>( (Konsole__Emulation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resetMode = slot;
	return true;
}

bool Konsole__Emulation_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation* self_cast = dynamic_cast<MiqtVirtualKonsoleEmulation*>( (Konsole__Emulation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool Konsole__Emulation_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualKonsoleEmulation*)(self) )->Konsole::Emulation::event(event);

}

bool Konsole__Emulation_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation* self_cast = dynamic_cast<MiqtVirtualKonsoleEmulation*>( (Konsole__Emulation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool Konsole__Emulation_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualKonsoleEmulation*)(self) )->Konsole::Emulation::eventFilter(watched, event);

}

bool Konsole__Emulation_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation* self_cast = dynamic_cast<MiqtVirtualKonsoleEmulation*>( (Konsole__Emulation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void Konsole__Emulation_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualKonsoleEmulation*)(self) )->Konsole::Emulation::timerEvent(event);

}

bool Konsole__Emulation_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation* self_cast = dynamic_cast<MiqtVirtualKonsoleEmulation*>( (Konsole__Emulation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void Konsole__Emulation_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualKonsoleEmulation*)(self) )->Konsole::Emulation::childEvent(event);

}

bool Konsole__Emulation_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation* self_cast = dynamic_cast<MiqtVirtualKonsoleEmulation*>( (Konsole__Emulation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void Konsole__Emulation_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualKonsoleEmulation*)(self) )->Konsole::Emulation::customEvent(event);

}

bool Konsole__Emulation_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation* self_cast = dynamic_cast<MiqtVirtualKonsoleEmulation*>( (Konsole__Emulation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void Konsole__Emulation_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualKonsoleEmulation*)(self) )->Konsole::Emulation::connectNotify(*signal);

}

bool Konsole__Emulation_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualKonsoleEmulation* self_cast = dynamic_cast<MiqtVirtualKonsoleEmulation*>( (Konsole__Emulation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void Konsole__Emulation_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualKonsoleEmulation*)(self) )->Konsole::Emulation::disconnectNotify(*signal);

}

void Konsole__Emulation_protectedbase_setScreen(bool* _dynamic_cast_ok, void* self, int index) {
	MiqtVirtualKonsoleEmulation* self_cast = dynamic_cast<MiqtVirtualKonsoleEmulation*>( (Konsole__Emulation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setScreen(static_cast<int>(index));

}

void Konsole__Emulation_protectedbase_setCodecWithCodec(bool* _dynamic_cast_ok, void* self, int codec) {
	MiqtVirtualKonsoleEmulation* self_cast = dynamic_cast<MiqtVirtualKonsoleEmulation*>( (Konsole__Emulation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setCodec(static_cast<MiqtVirtualKonsoleEmulation::EmulationCodec>(codec));

}

void Konsole__Emulation_protectedbase_bufferedUpdate(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualKonsoleEmulation* self_cast = dynamic_cast<MiqtVirtualKonsoleEmulation*>( (Konsole__Emulation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->bufferedUpdate();

}

QObject* Konsole__Emulation_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualKonsoleEmulation* self_cast = dynamic_cast<MiqtVirtualKonsoleEmulation*>( (Konsole__Emulation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int Konsole__Emulation_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualKonsoleEmulation* self_cast = dynamic_cast<MiqtVirtualKonsoleEmulation*>( (Konsole__Emulation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int Konsole__Emulation_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualKonsoleEmulation* self_cast = dynamic_cast<MiqtVirtualKonsoleEmulation*>( (Konsole__Emulation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool Konsole__Emulation_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualKonsoleEmulation* self_cast = dynamic_cast<MiqtVirtualKonsoleEmulation*>( (Konsole__Emulation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void Konsole__Emulation_delete(Konsole__Emulation* self) {
	delete self;
}

