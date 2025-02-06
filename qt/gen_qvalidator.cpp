#include <QChildEvent>
#include <QDoubleValidator>
#include <QEvent>
#include <QIntValidator>
#include <QLocale>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRegExp>
#include <QRegExpValidator>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QValidator>
#include <qvalidator.h>
#include "gen_qvalidator.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QValidator_changed(intptr_t);
int miqt_exec_callback_QValidator_validate(const QValidator*, intptr_t, struct miqt_string, int*);
void miqt_exec_callback_QValidator_fixup(const QValidator*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QValidator_event(QValidator*, intptr_t, QEvent*);
bool miqt_exec_callback_QValidator_eventFilter(QValidator*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QValidator_timerEvent(QValidator*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QValidator_childEvent(QValidator*, intptr_t, QChildEvent*);
void miqt_exec_callback_QValidator_customEvent(QValidator*, intptr_t, QEvent*);
void miqt_exec_callback_QValidator_connectNotify(QValidator*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QValidator_disconnectNotify(QValidator*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QIntValidator_bottomChanged(intptr_t, int);
void miqt_exec_callback_QIntValidator_topChanged(intptr_t, int);
int miqt_exec_callback_QIntValidator_validate(const QIntValidator*, intptr_t, struct miqt_string, int*);
void miqt_exec_callback_QIntValidator_fixup(const QIntValidator*, intptr_t, struct miqt_string);
void miqt_exec_callback_QIntValidator_setRange(QIntValidator*, intptr_t, int, int);
bool miqt_exec_callback_QIntValidator_event(QIntValidator*, intptr_t, QEvent*);
bool miqt_exec_callback_QIntValidator_eventFilter(QIntValidator*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QIntValidator_timerEvent(QIntValidator*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QIntValidator_childEvent(QIntValidator*, intptr_t, QChildEvent*);
void miqt_exec_callback_QIntValidator_customEvent(QIntValidator*, intptr_t, QEvent*);
void miqt_exec_callback_QIntValidator_connectNotify(QIntValidator*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QIntValidator_disconnectNotify(QIntValidator*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDoubleValidator_bottomChanged(intptr_t, double);
void miqt_exec_callback_QDoubleValidator_topChanged(intptr_t, double);
void miqt_exec_callback_QDoubleValidator_decimalsChanged(intptr_t, int);
void miqt_exec_callback_QDoubleValidator_notationChanged(intptr_t, int);
int miqt_exec_callback_QDoubleValidator_validate(const QDoubleValidator*, intptr_t, struct miqt_string, int*);
void miqt_exec_callback_QDoubleValidator_setRange(QDoubleValidator*, intptr_t, double, double, int);
void miqt_exec_callback_QDoubleValidator_fixup(const QDoubleValidator*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QDoubleValidator_event(QDoubleValidator*, intptr_t, QEvent*);
bool miqt_exec_callback_QDoubleValidator_eventFilter(QDoubleValidator*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDoubleValidator_timerEvent(QDoubleValidator*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDoubleValidator_childEvent(QDoubleValidator*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDoubleValidator_customEvent(QDoubleValidator*, intptr_t, QEvent*);
void miqt_exec_callback_QDoubleValidator_connectNotify(QDoubleValidator*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDoubleValidator_disconnectNotify(QDoubleValidator*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QRegExpValidator_regExpChanged(intptr_t, QRegExp*);
int miqt_exec_callback_QRegExpValidator_validate(const QRegExpValidator*, intptr_t, struct miqt_string, int*);
void miqt_exec_callback_QRegExpValidator_fixup(const QRegExpValidator*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QRegExpValidator_event(QRegExpValidator*, intptr_t, QEvent*);
bool miqt_exec_callback_QRegExpValidator_eventFilter(QRegExpValidator*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QRegExpValidator_timerEvent(QRegExpValidator*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QRegExpValidator_childEvent(QRegExpValidator*, intptr_t, QChildEvent*);
void miqt_exec_callback_QRegExpValidator_customEvent(QRegExpValidator*, intptr_t, QEvent*);
void miqt_exec_callback_QRegExpValidator_connectNotify(QRegExpValidator*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QRegExpValidator_disconnectNotify(QRegExpValidator*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QRegularExpressionValidator_regularExpressionChanged(intptr_t, QRegularExpression*);
int miqt_exec_callback_QRegularExpressionValidator_validate(const QRegularExpressionValidator*, intptr_t, struct miqt_string, int*);
void miqt_exec_callback_QRegularExpressionValidator_fixup(const QRegularExpressionValidator*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QRegularExpressionValidator_event(QRegularExpressionValidator*, intptr_t, QEvent*);
bool miqt_exec_callback_QRegularExpressionValidator_eventFilter(QRegularExpressionValidator*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QRegularExpressionValidator_timerEvent(QRegularExpressionValidator*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QRegularExpressionValidator_childEvent(QRegularExpressionValidator*, intptr_t, QChildEvent*);
void miqt_exec_callback_QRegularExpressionValidator_customEvent(QRegularExpressionValidator*, intptr_t, QEvent*);
void miqt_exec_callback_QRegularExpressionValidator_connectNotify(QRegularExpressionValidator*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QRegularExpressionValidator_disconnectNotify(QRegularExpressionValidator*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQValidator final : public QValidator {
public:

	MiqtVirtualQValidator(): QValidator() {};
	MiqtVirtualQValidator(QObject* parent): QValidator(parent) {};

	virtual ~MiqtVirtualQValidator() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__validate = 0;

	// Subclass to allow providing a Go implementation
	virtual QValidator::State validate(QString& param1, int& param2) const override {
		if (handle__validate == 0) {
			return (QValidator::State)(0); // Pure virtual, there is no base we can call
		}
		
		QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		int* sigval2 = &param2;

		int callback_return_value = miqt_exec_callback_QValidator_validate(this, handle__validate, sigval1, sigval2);

		return static_cast<QValidator::State>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__fixup = 0;

	// Subclass to allow providing a Go implementation
	virtual void fixup(QString& param1) const override {
		if (handle__fixup == 0) {
			QValidator::fixup(param1);
			return;
		}
		
		QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;

		miqt_exec_callback_QValidator_fixup(this, handle__fixup, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_fixup(struct miqt_string param1) const {
		QString param1_QString = QString::fromUtf8(param1.data, param1.len);

		QValidator::fixup(param1_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QValidator::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QValidator_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QValidator::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QValidator::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QValidator_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QValidator::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QValidator::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QValidator_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QValidator::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QValidator::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QValidator_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QValidator::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QValidator::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QValidator_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QValidator::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QValidator::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QValidator_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QValidator::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QValidator::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QValidator_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QValidator::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QValidator_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QValidator_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QValidator_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QValidator_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QValidator* QValidator_new() {
	return new MiqtVirtualQValidator();
}

QValidator* QValidator_new2(QObject* parent) {
	return new MiqtVirtualQValidator(parent);
}

void QValidator_virtbase(QValidator* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QValidator_metaObject(const QValidator* self) {
	return (QMetaObject*) self->metaObject();
}

void* QValidator_metacast(QValidator* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QValidator_tr(const char* s) {
	QString _ret = QValidator::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QValidator_trUtf8(const char* s) {
	QString _ret = QValidator::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QValidator_setLocale(QValidator* self, QLocale* locale) {
	self->setLocale(*locale);
}

QLocale* QValidator_locale(const QValidator* self) {
	return new QLocale(self->locale());
}

int QValidator_validate(const QValidator* self, struct miqt_string param1, int* param2) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QValidator::State _ret = self->validate(param1_QString, static_cast<int&>(*param2));
	return static_cast<int>(_ret);
}

void QValidator_fixup(const QValidator* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->fixup(param1_QString);
}

void QValidator_changed(QValidator* self) {
	self->changed();
}

void QValidator_connect_changed(QValidator* self, intptr_t slot) {
	MiqtVirtualQValidator::connect(self, static_cast<void (QValidator::*)()>(&QValidator::changed), self, [=]() {
		miqt_exec_callback_QValidator_changed(slot);
	});
}

struct miqt_string QValidator_tr2(const char* s, const char* c) {
	QString _ret = QValidator::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QValidator_tr3(const char* s, const char* c, int n) {
	QString _ret = QValidator::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QValidator_trUtf82(const char* s, const char* c) {
	QString _ret = QValidator::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QValidator_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QValidator::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QValidator_override_virtual_validate(void* self, intptr_t slot) {
	MiqtVirtualQValidator* self_cast = dynamic_cast<MiqtVirtualQValidator*>( (QValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__validate = slot;
	return true;
}

bool QValidator_override_virtual_fixup(void* self, intptr_t slot) {
	MiqtVirtualQValidator* self_cast = dynamic_cast<MiqtVirtualQValidator*>( (QValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__fixup = slot;
	return true;
}

void QValidator_virtualbase_fixup(const void* self, struct miqt_string param1) {
	( (const MiqtVirtualQValidator*)(self) )->virtualbase_fixup(param1);
}

bool QValidator_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQValidator* self_cast = dynamic_cast<MiqtVirtualQValidator*>( (QValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QValidator_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQValidator*)(self) )->virtualbase_event(event);
}

bool QValidator_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQValidator* self_cast = dynamic_cast<MiqtVirtualQValidator*>( (QValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QValidator_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQValidator*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QValidator_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQValidator* self_cast = dynamic_cast<MiqtVirtualQValidator*>( (QValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QValidator_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQValidator*)(self) )->virtualbase_timerEvent(event);
}

bool QValidator_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQValidator* self_cast = dynamic_cast<MiqtVirtualQValidator*>( (QValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QValidator_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQValidator*)(self) )->virtualbase_childEvent(event);
}

bool QValidator_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQValidator* self_cast = dynamic_cast<MiqtVirtualQValidator*>( (QValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QValidator_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQValidator*)(self) )->virtualbase_customEvent(event);
}

bool QValidator_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQValidator* self_cast = dynamic_cast<MiqtVirtualQValidator*>( (QValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QValidator_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQValidator*)(self) )->virtualbase_connectNotify(signal);
}

bool QValidator_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQValidator* self_cast = dynamic_cast<MiqtVirtualQValidator*>( (QValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QValidator_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQValidator*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QValidator_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQValidator* self_cast = dynamic_cast<MiqtVirtualQValidator*>( (QValidator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QValidator_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQValidator* self_cast = dynamic_cast<MiqtVirtualQValidator*>( (QValidator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QValidator_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQValidator* self_cast = dynamic_cast<MiqtVirtualQValidator*>( (QValidator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QValidator_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQValidator* self_cast = dynamic_cast<MiqtVirtualQValidator*>( (QValidator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QValidator_delete(QValidator* self) {
	delete self;
}

class MiqtVirtualQIntValidator final : public QIntValidator {
public:

	MiqtVirtualQIntValidator(): QIntValidator() {};
	MiqtVirtualQIntValidator(int bottom, int top): QIntValidator(bottom, top) {};
	MiqtVirtualQIntValidator(QObject* parent): QIntValidator(parent) {};
	MiqtVirtualQIntValidator(int bottom, int top, QObject* parent): QIntValidator(bottom, top, parent) {};

	virtual ~MiqtVirtualQIntValidator() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__validate = 0;

	// Subclass to allow providing a Go implementation
	virtual QValidator::State validate(QString& param1, int& param2) const override {
		if (handle__validate == 0) {
			return QIntValidator::validate(param1, param2);
		}
		
		QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		int* sigval2 = &param2;

		int callback_return_value = miqt_exec_callback_QIntValidator_validate(this, handle__validate, sigval1, sigval2);

		return static_cast<QValidator::State>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_validate(struct miqt_string param1, int* param2) const {
		QString param1_QString = QString::fromUtf8(param1.data, param1.len);

		QValidator::State _ret = QIntValidator::validate(param1_QString, static_cast<int&>(*param2));
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__fixup = 0;

	// Subclass to allow providing a Go implementation
	virtual void fixup(QString& input) const override {
		if (handle__fixup == 0) {
			QIntValidator::fixup(input);
			return;
		}
		
		QString input_ret = input;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray input_b = input_ret.toUtf8();
		struct miqt_string input_ms;
		input_ms.len = input_b.length();
		input_ms.data = static_cast<char*>(malloc(input_ms.len));
		memcpy(input_ms.data, input_b.data(), input_ms.len);
		struct miqt_string sigval1 = input_ms;

		miqt_exec_callback_QIntValidator_fixup(this, handle__fixup, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_fixup(struct miqt_string input) const {
		QString input_QString = QString::fromUtf8(input.data, input.len);

		QIntValidator::fixup(input_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setRange = 0;

	// Subclass to allow providing a Go implementation
	virtual void setRange(int bottom, int top) override {
		if (handle__setRange == 0) {
			QIntValidator::setRange(bottom, top);
			return;
		}
		
		int sigval1 = bottom;
		int sigval2 = top;

		miqt_exec_callback_QIntValidator_setRange(this, handle__setRange, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setRange(int bottom, int top) {

		QIntValidator::setRange(static_cast<int>(bottom), static_cast<int>(top));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QIntValidator::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QIntValidator_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QIntValidator::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QIntValidator::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QIntValidator_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QIntValidator::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QIntValidator::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QIntValidator_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QIntValidator::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QIntValidator::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QIntValidator_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QIntValidator::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QIntValidator::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QIntValidator_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QIntValidator::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QIntValidator::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QIntValidator_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QIntValidator::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QIntValidator::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QIntValidator_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QIntValidator::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QIntValidator_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QIntValidator_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QIntValidator_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QIntValidator_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QIntValidator* QIntValidator_new() {
	return new MiqtVirtualQIntValidator();
}

QIntValidator* QIntValidator_new2(int bottom, int top) {
	return new MiqtVirtualQIntValidator(static_cast<int>(bottom), static_cast<int>(top));
}

QIntValidator* QIntValidator_new3(QObject* parent) {
	return new MiqtVirtualQIntValidator(parent);
}

QIntValidator* QIntValidator_new4(int bottom, int top, QObject* parent) {
	return new MiqtVirtualQIntValidator(static_cast<int>(bottom), static_cast<int>(top), parent);
}

void QIntValidator_virtbase(QIntValidator* src, QValidator** outptr_QValidator) {
	*outptr_QValidator = static_cast<QValidator*>(src);
}

QMetaObject* QIntValidator_metaObject(const QIntValidator* self) {
	return (QMetaObject*) self->metaObject();
}

void* QIntValidator_metacast(QIntValidator* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QIntValidator_tr(const char* s) {
	QString _ret = QIntValidator::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QIntValidator_trUtf8(const char* s) {
	QString _ret = QIntValidator::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QIntValidator_validate(const QIntValidator* self, struct miqt_string param1, int* param2) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QValidator::State _ret = self->validate(param1_QString, static_cast<int&>(*param2));
	return static_cast<int>(_ret);
}

void QIntValidator_fixup(const QIntValidator* self, struct miqt_string input) {
	QString input_QString = QString::fromUtf8(input.data, input.len);
	self->fixup(input_QString);
}

void QIntValidator_setBottom(QIntValidator* self, int bottom) {
	self->setBottom(static_cast<int>(bottom));
}

void QIntValidator_setTop(QIntValidator* self, int top) {
	self->setTop(static_cast<int>(top));
}

void QIntValidator_setRange(QIntValidator* self, int bottom, int top) {
	self->setRange(static_cast<int>(bottom), static_cast<int>(top));
}

int QIntValidator_bottom(const QIntValidator* self) {
	return self->bottom();
}

int QIntValidator_top(const QIntValidator* self) {
	return self->top();
}

void QIntValidator_bottomChanged(QIntValidator* self, int bottom) {
	self->bottomChanged(static_cast<int>(bottom));
}

void QIntValidator_connect_bottomChanged(QIntValidator* self, intptr_t slot) {
	MiqtVirtualQIntValidator::connect(self, static_cast<void (QIntValidator::*)(int)>(&QIntValidator::bottomChanged), self, [=](int bottom) {
		int sigval1 = bottom;
		miqt_exec_callback_QIntValidator_bottomChanged(slot, sigval1);
	});
}

void QIntValidator_topChanged(QIntValidator* self, int top) {
	self->topChanged(static_cast<int>(top));
}

void QIntValidator_connect_topChanged(QIntValidator* self, intptr_t slot) {
	MiqtVirtualQIntValidator::connect(self, static_cast<void (QIntValidator::*)(int)>(&QIntValidator::topChanged), self, [=](int top) {
		int sigval1 = top;
		miqt_exec_callback_QIntValidator_topChanged(slot, sigval1);
	});
}

struct miqt_string QIntValidator_tr2(const char* s, const char* c) {
	QString _ret = QIntValidator::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QIntValidator_tr3(const char* s, const char* c, int n) {
	QString _ret = QIntValidator::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QIntValidator_trUtf82(const char* s, const char* c) {
	QString _ret = QIntValidator::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QIntValidator_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QIntValidator::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QIntValidator_override_virtual_validate(void* self, intptr_t slot) {
	MiqtVirtualQIntValidator* self_cast = dynamic_cast<MiqtVirtualQIntValidator*>( (QIntValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__validate = slot;
	return true;
}

int QIntValidator_virtualbase_validate(const void* self, struct miqt_string param1, int* param2) {
	return ( (const MiqtVirtualQIntValidator*)(self) )->virtualbase_validate(param1, param2);
}

bool QIntValidator_override_virtual_fixup(void* self, intptr_t slot) {
	MiqtVirtualQIntValidator* self_cast = dynamic_cast<MiqtVirtualQIntValidator*>( (QIntValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__fixup = slot;
	return true;
}

void QIntValidator_virtualbase_fixup(const void* self, struct miqt_string input) {
	( (const MiqtVirtualQIntValidator*)(self) )->virtualbase_fixup(input);
}

bool QIntValidator_override_virtual_setRange(void* self, intptr_t slot) {
	MiqtVirtualQIntValidator* self_cast = dynamic_cast<MiqtVirtualQIntValidator*>( (QIntValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setRange = slot;
	return true;
}

void QIntValidator_virtualbase_setRange(void* self, int bottom, int top) {
	( (MiqtVirtualQIntValidator*)(self) )->virtualbase_setRange(bottom, top);
}

bool QIntValidator_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQIntValidator* self_cast = dynamic_cast<MiqtVirtualQIntValidator*>( (QIntValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QIntValidator_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQIntValidator*)(self) )->virtualbase_event(event);
}

bool QIntValidator_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQIntValidator* self_cast = dynamic_cast<MiqtVirtualQIntValidator*>( (QIntValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QIntValidator_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQIntValidator*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QIntValidator_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQIntValidator* self_cast = dynamic_cast<MiqtVirtualQIntValidator*>( (QIntValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QIntValidator_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQIntValidator*)(self) )->virtualbase_timerEvent(event);
}

bool QIntValidator_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQIntValidator* self_cast = dynamic_cast<MiqtVirtualQIntValidator*>( (QIntValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QIntValidator_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQIntValidator*)(self) )->virtualbase_childEvent(event);
}

bool QIntValidator_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQIntValidator* self_cast = dynamic_cast<MiqtVirtualQIntValidator*>( (QIntValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QIntValidator_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQIntValidator*)(self) )->virtualbase_customEvent(event);
}

bool QIntValidator_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQIntValidator* self_cast = dynamic_cast<MiqtVirtualQIntValidator*>( (QIntValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QIntValidator_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQIntValidator*)(self) )->virtualbase_connectNotify(signal);
}

bool QIntValidator_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQIntValidator* self_cast = dynamic_cast<MiqtVirtualQIntValidator*>( (QIntValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QIntValidator_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQIntValidator*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QIntValidator_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQIntValidator* self_cast = dynamic_cast<MiqtVirtualQIntValidator*>( (QIntValidator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QIntValidator_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQIntValidator* self_cast = dynamic_cast<MiqtVirtualQIntValidator*>( (QIntValidator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QIntValidator_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQIntValidator* self_cast = dynamic_cast<MiqtVirtualQIntValidator*>( (QIntValidator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QIntValidator_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQIntValidator* self_cast = dynamic_cast<MiqtVirtualQIntValidator*>( (QIntValidator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QIntValidator_delete(QIntValidator* self) {
	delete self;
}

class MiqtVirtualQDoubleValidator final : public QDoubleValidator {
public:

	MiqtVirtualQDoubleValidator(): QDoubleValidator() {};
	MiqtVirtualQDoubleValidator(double bottom, double top, int decimals): QDoubleValidator(bottom, top, decimals) {};
	MiqtVirtualQDoubleValidator(QObject* parent): QDoubleValidator(parent) {};
	MiqtVirtualQDoubleValidator(double bottom, double top, int decimals, QObject* parent): QDoubleValidator(bottom, top, decimals, parent) {};

	virtual ~MiqtVirtualQDoubleValidator() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__validate = 0;

	// Subclass to allow providing a Go implementation
	virtual QValidator::State validate(QString& param1, int& param2) const override {
		if (handle__validate == 0) {
			return QDoubleValidator::validate(param1, param2);
		}
		
		QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		int* sigval2 = &param2;

		int callback_return_value = miqt_exec_callback_QDoubleValidator_validate(this, handle__validate, sigval1, sigval2);

		return static_cast<QValidator::State>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_validate(struct miqt_string param1, int* param2) const {
		QString param1_QString = QString::fromUtf8(param1.data, param1.len);

		QValidator::State _ret = QDoubleValidator::validate(param1_QString, static_cast<int&>(*param2));
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setRange = 0;

	// Subclass to allow providing a Go implementation
	virtual void setRange(double bottom, double top, int decimals) override {
		if (handle__setRange == 0) {
			QDoubleValidator::setRange(bottom, top, decimals);
			return;
		}
		
		double sigval1 = bottom;
		double sigval2 = top;
		int sigval3 = decimals;

		miqt_exec_callback_QDoubleValidator_setRange(this, handle__setRange, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setRange(double bottom, double top, int decimals) {

		QDoubleValidator::setRange(static_cast<double>(bottom), static_cast<double>(top), static_cast<int>(decimals));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__fixup = 0;

	// Subclass to allow providing a Go implementation
	virtual void fixup(QString& param1) const override {
		if (handle__fixup == 0) {
			QDoubleValidator::fixup(param1);
			return;
		}
		
		QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;

		miqt_exec_callback_QDoubleValidator_fixup(this, handle__fixup, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_fixup(struct miqt_string param1) const {
		QString param1_QString = QString::fromUtf8(param1.data, param1.len);

		QDoubleValidator::fixup(param1_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QDoubleValidator::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QDoubleValidator_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QDoubleValidator::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QDoubleValidator::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QDoubleValidator_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QDoubleValidator::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QDoubleValidator::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QDoubleValidator_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QDoubleValidator::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QDoubleValidator::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QDoubleValidator_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QDoubleValidator::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QDoubleValidator::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDoubleValidator_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QDoubleValidator::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QDoubleValidator::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDoubleValidator_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QDoubleValidator::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QDoubleValidator::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDoubleValidator_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QDoubleValidator::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QDoubleValidator_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QDoubleValidator_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QDoubleValidator_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QDoubleValidator_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QDoubleValidator* QDoubleValidator_new() {
	return new MiqtVirtualQDoubleValidator();
}

QDoubleValidator* QDoubleValidator_new2(double bottom, double top, int decimals) {
	return new MiqtVirtualQDoubleValidator(static_cast<double>(bottom), static_cast<double>(top), static_cast<int>(decimals));
}

QDoubleValidator* QDoubleValidator_new3(QObject* parent) {
	return new MiqtVirtualQDoubleValidator(parent);
}

QDoubleValidator* QDoubleValidator_new4(double bottom, double top, int decimals, QObject* parent) {
	return new MiqtVirtualQDoubleValidator(static_cast<double>(bottom), static_cast<double>(top), static_cast<int>(decimals), parent);
}

void QDoubleValidator_virtbase(QDoubleValidator* src, QValidator** outptr_QValidator) {
	*outptr_QValidator = static_cast<QValidator*>(src);
}

QMetaObject* QDoubleValidator_metaObject(const QDoubleValidator* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDoubleValidator_metacast(QDoubleValidator* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDoubleValidator_tr(const char* s) {
	QString _ret = QDoubleValidator::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDoubleValidator_trUtf8(const char* s) {
	QString _ret = QDoubleValidator::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QDoubleValidator_validate(const QDoubleValidator* self, struct miqt_string param1, int* param2) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QValidator::State _ret = self->validate(param1_QString, static_cast<int&>(*param2));
	return static_cast<int>(_ret);
}

void QDoubleValidator_setRange(QDoubleValidator* self, double bottom, double top, int decimals) {
	self->setRange(static_cast<double>(bottom), static_cast<double>(top), static_cast<int>(decimals));
}

void QDoubleValidator_setBottom(QDoubleValidator* self, double bottom) {
	self->setBottom(static_cast<double>(bottom));
}

void QDoubleValidator_setTop(QDoubleValidator* self, double top) {
	self->setTop(static_cast<double>(top));
}

void QDoubleValidator_setDecimals(QDoubleValidator* self, int decimals) {
	self->setDecimals(static_cast<int>(decimals));
}

void QDoubleValidator_setNotation(QDoubleValidator* self, int notation) {
	self->setNotation(static_cast<QDoubleValidator::Notation>(notation));
}

double QDoubleValidator_bottom(const QDoubleValidator* self) {
	return self->bottom();
}

double QDoubleValidator_top(const QDoubleValidator* self) {
	return self->top();
}

int QDoubleValidator_decimals(const QDoubleValidator* self) {
	return self->decimals();
}

int QDoubleValidator_notation(const QDoubleValidator* self) {
	QDoubleValidator::Notation _ret = self->notation();
	return static_cast<int>(_ret);
}

void QDoubleValidator_bottomChanged(QDoubleValidator* self, double bottom) {
	self->bottomChanged(static_cast<double>(bottom));
}

void QDoubleValidator_connect_bottomChanged(QDoubleValidator* self, intptr_t slot) {
	MiqtVirtualQDoubleValidator::connect(self, static_cast<void (QDoubleValidator::*)(double)>(&QDoubleValidator::bottomChanged), self, [=](double bottom) {
		double sigval1 = bottom;
		miqt_exec_callback_QDoubleValidator_bottomChanged(slot, sigval1);
	});
}

void QDoubleValidator_topChanged(QDoubleValidator* self, double top) {
	self->topChanged(static_cast<double>(top));
}

void QDoubleValidator_connect_topChanged(QDoubleValidator* self, intptr_t slot) {
	MiqtVirtualQDoubleValidator::connect(self, static_cast<void (QDoubleValidator::*)(double)>(&QDoubleValidator::topChanged), self, [=](double top) {
		double sigval1 = top;
		miqt_exec_callback_QDoubleValidator_topChanged(slot, sigval1);
	});
}

void QDoubleValidator_decimalsChanged(QDoubleValidator* self, int decimals) {
	self->decimalsChanged(static_cast<int>(decimals));
}

void QDoubleValidator_connect_decimalsChanged(QDoubleValidator* self, intptr_t slot) {
	MiqtVirtualQDoubleValidator::connect(self, static_cast<void (QDoubleValidator::*)(int)>(&QDoubleValidator::decimalsChanged), self, [=](int decimals) {
		int sigval1 = decimals;
		miqt_exec_callback_QDoubleValidator_decimalsChanged(slot, sigval1);
	});
}

void QDoubleValidator_notationChanged(QDoubleValidator* self, int notation) {
	self->notationChanged(static_cast<QDoubleValidator::Notation>(notation));
}

void QDoubleValidator_connect_notationChanged(QDoubleValidator* self, intptr_t slot) {
	MiqtVirtualQDoubleValidator::connect(self, static_cast<void (QDoubleValidator::*)(QDoubleValidator::Notation)>(&QDoubleValidator::notationChanged), self, [=](QDoubleValidator::Notation notation) {
		QDoubleValidator::Notation notation_ret = notation;
		int sigval1 = static_cast<int>(notation_ret);
		miqt_exec_callback_QDoubleValidator_notationChanged(slot, sigval1);
	});
}

struct miqt_string QDoubleValidator_tr2(const char* s, const char* c) {
	QString _ret = QDoubleValidator::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDoubleValidator_tr3(const char* s, const char* c, int n) {
	QString _ret = QDoubleValidator::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDoubleValidator_trUtf82(const char* s, const char* c) {
	QString _ret = QDoubleValidator::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDoubleValidator_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QDoubleValidator::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDoubleValidator_override_virtual_validate(void* self, intptr_t slot) {
	MiqtVirtualQDoubleValidator* self_cast = dynamic_cast<MiqtVirtualQDoubleValidator*>( (QDoubleValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__validate = slot;
	return true;
}

int QDoubleValidator_virtualbase_validate(const void* self, struct miqt_string param1, int* param2) {
	return ( (const MiqtVirtualQDoubleValidator*)(self) )->virtualbase_validate(param1, param2);
}

bool QDoubleValidator_override_virtual_setRange(void* self, intptr_t slot) {
	MiqtVirtualQDoubleValidator* self_cast = dynamic_cast<MiqtVirtualQDoubleValidator*>( (QDoubleValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setRange = slot;
	return true;
}

void QDoubleValidator_virtualbase_setRange(void* self, double bottom, double top, int decimals) {
	( (MiqtVirtualQDoubleValidator*)(self) )->virtualbase_setRange(bottom, top, decimals);
}

bool QDoubleValidator_override_virtual_fixup(void* self, intptr_t slot) {
	MiqtVirtualQDoubleValidator* self_cast = dynamic_cast<MiqtVirtualQDoubleValidator*>( (QDoubleValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__fixup = slot;
	return true;
}

void QDoubleValidator_virtualbase_fixup(const void* self, struct miqt_string param1) {
	( (const MiqtVirtualQDoubleValidator*)(self) )->virtualbase_fixup(param1);
}

bool QDoubleValidator_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQDoubleValidator* self_cast = dynamic_cast<MiqtVirtualQDoubleValidator*>( (QDoubleValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QDoubleValidator_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQDoubleValidator*)(self) )->virtualbase_event(event);
}

bool QDoubleValidator_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDoubleValidator* self_cast = dynamic_cast<MiqtVirtualQDoubleValidator*>( (QDoubleValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QDoubleValidator_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQDoubleValidator*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QDoubleValidator_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleValidator* self_cast = dynamic_cast<MiqtVirtualQDoubleValidator*>( (QDoubleValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QDoubleValidator_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQDoubleValidator*)(self) )->virtualbase_timerEvent(event);
}

bool QDoubleValidator_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleValidator* self_cast = dynamic_cast<MiqtVirtualQDoubleValidator*>( (QDoubleValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QDoubleValidator_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQDoubleValidator*)(self) )->virtualbase_childEvent(event);
}

bool QDoubleValidator_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleValidator* self_cast = dynamic_cast<MiqtVirtualQDoubleValidator*>( (QDoubleValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QDoubleValidator_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDoubleValidator*)(self) )->virtualbase_customEvent(event);
}

bool QDoubleValidator_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDoubleValidator* self_cast = dynamic_cast<MiqtVirtualQDoubleValidator*>( (QDoubleValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QDoubleValidator_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDoubleValidator*)(self) )->virtualbase_connectNotify(signal);
}

bool QDoubleValidator_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDoubleValidator* self_cast = dynamic_cast<MiqtVirtualQDoubleValidator*>( (QDoubleValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QDoubleValidator_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDoubleValidator*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QDoubleValidator_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDoubleValidator* self_cast = dynamic_cast<MiqtVirtualQDoubleValidator*>( (QDoubleValidator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QDoubleValidator_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDoubleValidator* self_cast = dynamic_cast<MiqtVirtualQDoubleValidator*>( (QDoubleValidator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QDoubleValidator_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQDoubleValidator* self_cast = dynamic_cast<MiqtVirtualQDoubleValidator*>( (QDoubleValidator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QDoubleValidator_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQDoubleValidator* self_cast = dynamic_cast<MiqtVirtualQDoubleValidator*>( (QDoubleValidator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QDoubleValidator_delete(QDoubleValidator* self) {
	delete self;
}

class MiqtVirtualQRegExpValidator final : public QRegExpValidator {
public:

	MiqtVirtualQRegExpValidator(): QRegExpValidator() {};
	MiqtVirtualQRegExpValidator(const QRegExp& rx): QRegExpValidator(rx) {};
	MiqtVirtualQRegExpValidator(QObject* parent): QRegExpValidator(parent) {};
	MiqtVirtualQRegExpValidator(const QRegExp& rx, QObject* parent): QRegExpValidator(rx, parent) {};

	virtual ~MiqtVirtualQRegExpValidator() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__validate = 0;

	// Subclass to allow providing a Go implementation
	virtual QValidator::State validate(QString& input, int& pos) const override {
		if (handle__validate == 0) {
			return QRegExpValidator::validate(input, pos);
		}
		
		QString input_ret = input;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray input_b = input_ret.toUtf8();
		struct miqt_string input_ms;
		input_ms.len = input_b.length();
		input_ms.data = static_cast<char*>(malloc(input_ms.len));
		memcpy(input_ms.data, input_b.data(), input_ms.len);
		struct miqt_string sigval1 = input_ms;
		int* sigval2 = &pos;

		int callback_return_value = miqt_exec_callback_QRegExpValidator_validate(this, handle__validate, sigval1, sigval2);

		return static_cast<QValidator::State>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_validate(struct miqt_string input, int* pos) const {
		QString input_QString = QString::fromUtf8(input.data, input.len);

		QValidator::State _ret = QRegExpValidator::validate(input_QString, static_cast<int&>(*pos));
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__fixup = 0;

	// Subclass to allow providing a Go implementation
	virtual void fixup(QString& param1) const override {
		if (handle__fixup == 0) {
			QRegExpValidator::fixup(param1);
			return;
		}
		
		QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;

		miqt_exec_callback_QRegExpValidator_fixup(this, handle__fixup, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_fixup(struct miqt_string param1) const {
		QString param1_QString = QString::fromUtf8(param1.data, param1.len);

		QRegExpValidator::fixup(param1_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QRegExpValidator::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QRegExpValidator_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QRegExpValidator::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QRegExpValidator::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QRegExpValidator_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QRegExpValidator::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QRegExpValidator::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QRegExpValidator_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QRegExpValidator::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QRegExpValidator::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QRegExpValidator_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QRegExpValidator::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QRegExpValidator::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QRegExpValidator_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QRegExpValidator::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QRegExpValidator::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QRegExpValidator_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QRegExpValidator::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QRegExpValidator::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QRegExpValidator_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QRegExpValidator::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QRegExpValidator_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QRegExpValidator_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QRegExpValidator_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QRegExpValidator_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QRegExpValidator* QRegExpValidator_new() {
	return new MiqtVirtualQRegExpValidator();
}

QRegExpValidator* QRegExpValidator_new2(QRegExp* rx) {
	return new MiqtVirtualQRegExpValidator(*rx);
}

QRegExpValidator* QRegExpValidator_new3(QObject* parent) {
	return new MiqtVirtualQRegExpValidator(parent);
}

QRegExpValidator* QRegExpValidator_new4(QRegExp* rx, QObject* parent) {
	return new MiqtVirtualQRegExpValidator(*rx, parent);
}

void QRegExpValidator_virtbase(QRegExpValidator* src, QValidator** outptr_QValidator) {
	*outptr_QValidator = static_cast<QValidator*>(src);
}

QMetaObject* QRegExpValidator_metaObject(const QRegExpValidator* self) {
	return (QMetaObject*) self->metaObject();
}

void* QRegExpValidator_metacast(QRegExpValidator* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QRegExpValidator_tr(const char* s) {
	QString _ret = QRegExpValidator::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRegExpValidator_trUtf8(const char* s) {
	QString _ret = QRegExpValidator::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QRegExpValidator_validate(const QRegExpValidator* self, struct miqt_string input, int* pos) {
	QString input_QString = QString::fromUtf8(input.data, input.len);
	QValidator::State _ret = self->validate(input_QString, static_cast<int&>(*pos));
	return static_cast<int>(_ret);
}

void QRegExpValidator_setRegExp(QRegExpValidator* self, QRegExp* rx) {
	self->setRegExp(*rx);
}

QRegExp* QRegExpValidator_regExp(const QRegExpValidator* self) {
	const QRegExp& _ret = self->regExp();
	// Cast returned reference into pointer
	return const_cast<QRegExp*>(&_ret);
}

void QRegExpValidator_regExpChanged(QRegExpValidator* self, QRegExp* regExp) {
	self->regExpChanged(*regExp);
}

void QRegExpValidator_connect_regExpChanged(QRegExpValidator* self, intptr_t slot) {
	MiqtVirtualQRegExpValidator::connect(self, static_cast<void (QRegExpValidator::*)(const QRegExp&)>(&QRegExpValidator::regExpChanged), self, [=](const QRegExp& regExp) {
		const QRegExp& regExp_ret = regExp;
		// Cast returned reference into pointer
		QRegExp* sigval1 = const_cast<QRegExp*>(&regExp_ret);
		miqt_exec_callback_QRegExpValidator_regExpChanged(slot, sigval1);
	});
}

struct miqt_string QRegExpValidator_tr2(const char* s, const char* c) {
	QString _ret = QRegExpValidator::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRegExpValidator_tr3(const char* s, const char* c, int n) {
	QString _ret = QRegExpValidator::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRegExpValidator_trUtf82(const char* s, const char* c) {
	QString _ret = QRegExpValidator::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRegExpValidator_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QRegExpValidator::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QRegExpValidator_override_virtual_validate(void* self, intptr_t slot) {
	MiqtVirtualQRegExpValidator* self_cast = dynamic_cast<MiqtVirtualQRegExpValidator*>( (QRegExpValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__validate = slot;
	return true;
}

int QRegExpValidator_virtualbase_validate(const void* self, struct miqt_string input, int* pos) {
	return ( (const MiqtVirtualQRegExpValidator*)(self) )->virtualbase_validate(input, pos);
}

bool QRegExpValidator_override_virtual_fixup(void* self, intptr_t slot) {
	MiqtVirtualQRegExpValidator* self_cast = dynamic_cast<MiqtVirtualQRegExpValidator*>( (QRegExpValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__fixup = slot;
	return true;
}

void QRegExpValidator_virtualbase_fixup(const void* self, struct miqt_string param1) {
	( (const MiqtVirtualQRegExpValidator*)(self) )->virtualbase_fixup(param1);
}

bool QRegExpValidator_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQRegExpValidator* self_cast = dynamic_cast<MiqtVirtualQRegExpValidator*>( (QRegExpValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QRegExpValidator_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQRegExpValidator*)(self) )->virtualbase_event(event);
}

bool QRegExpValidator_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQRegExpValidator* self_cast = dynamic_cast<MiqtVirtualQRegExpValidator*>( (QRegExpValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QRegExpValidator_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQRegExpValidator*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QRegExpValidator_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQRegExpValidator* self_cast = dynamic_cast<MiqtVirtualQRegExpValidator*>( (QRegExpValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QRegExpValidator_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQRegExpValidator*)(self) )->virtualbase_timerEvent(event);
}

bool QRegExpValidator_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQRegExpValidator* self_cast = dynamic_cast<MiqtVirtualQRegExpValidator*>( (QRegExpValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QRegExpValidator_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQRegExpValidator*)(self) )->virtualbase_childEvent(event);
}

bool QRegExpValidator_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQRegExpValidator* self_cast = dynamic_cast<MiqtVirtualQRegExpValidator*>( (QRegExpValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QRegExpValidator_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQRegExpValidator*)(self) )->virtualbase_customEvent(event);
}

bool QRegExpValidator_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQRegExpValidator* self_cast = dynamic_cast<MiqtVirtualQRegExpValidator*>( (QRegExpValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QRegExpValidator_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQRegExpValidator*)(self) )->virtualbase_connectNotify(signal);
}

bool QRegExpValidator_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQRegExpValidator* self_cast = dynamic_cast<MiqtVirtualQRegExpValidator*>( (QRegExpValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QRegExpValidator_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQRegExpValidator*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QRegExpValidator_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQRegExpValidator* self_cast = dynamic_cast<MiqtVirtualQRegExpValidator*>( (QRegExpValidator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QRegExpValidator_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQRegExpValidator* self_cast = dynamic_cast<MiqtVirtualQRegExpValidator*>( (QRegExpValidator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QRegExpValidator_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQRegExpValidator* self_cast = dynamic_cast<MiqtVirtualQRegExpValidator*>( (QRegExpValidator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QRegExpValidator_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQRegExpValidator* self_cast = dynamic_cast<MiqtVirtualQRegExpValidator*>( (QRegExpValidator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QRegExpValidator_delete(QRegExpValidator* self) {
	delete self;
}

class MiqtVirtualQRegularExpressionValidator final : public QRegularExpressionValidator {
public:

	MiqtVirtualQRegularExpressionValidator(): QRegularExpressionValidator() {};
	MiqtVirtualQRegularExpressionValidator(const QRegularExpression& re): QRegularExpressionValidator(re) {};
	MiqtVirtualQRegularExpressionValidator(QObject* parent): QRegularExpressionValidator(parent) {};
	MiqtVirtualQRegularExpressionValidator(const QRegularExpression& re, QObject* parent): QRegularExpressionValidator(re, parent) {};

	virtual ~MiqtVirtualQRegularExpressionValidator() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__validate = 0;

	// Subclass to allow providing a Go implementation
	virtual QValidator::State validate(QString& input, int& pos) const override {
		if (handle__validate == 0) {
			return QRegularExpressionValidator::validate(input, pos);
		}
		
		QString input_ret = input;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray input_b = input_ret.toUtf8();
		struct miqt_string input_ms;
		input_ms.len = input_b.length();
		input_ms.data = static_cast<char*>(malloc(input_ms.len));
		memcpy(input_ms.data, input_b.data(), input_ms.len);
		struct miqt_string sigval1 = input_ms;
		int* sigval2 = &pos;

		int callback_return_value = miqt_exec_callback_QRegularExpressionValidator_validate(this, handle__validate, sigval1, sigval2);

		return static_cast<QValidator::State>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_validate(struct miqt_string input, int* pos) const {
		QString input_QString = QString::fromUtf8(input.data, input.len);

		QValidator::State _ret = QRegularExpressionValidator::validate(input_QString, static_cast<int&>(*pos));
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__fixup = 0;

	// Subclass to allow providing a Go implementation
	virtual void fixup(QString& param1) const override {
		if (handle__fixup == 0) {
			QRegularExpressionValidator::fixup(param1);
			return;
		}
		
		QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;

		miqt_exec_callback_QRegularExpressionValidator_fixup(this, handle__fixup, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_fixup(struct miqt_string param1) const {
		QString param1_QString = QString::fromUtf8(param1.data, param1.len);

		QRegularExpressionValidator::fixup(param1_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QRegularExpressionValidator::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QRegularExpressionValidator_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QRegularExpressionValidator::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QRegularExpressionValidator::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QRegularExpressionValidator_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QRegularExpressionValidator::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QRegularExpressionValidator::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QRegularExpressionValidator_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QRegularExpressionValidator::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QRegularExpressionValidator::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QRegularExpressionValidator_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QRegularExpressionValidator::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QRegularExpressionValidator::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QRegularExpressionValidator_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QRegularExpressionValidator::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QRegularExpressionValidator::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QRegularExpressionValidator_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QRegularExpressionValidator::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QRegularExpressionValidator::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QRegularExpressionValidator_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QRegularExpressionValidator::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QRegularExpressionValidator_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QRegularExpressionValidator_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QRegularExpressionValidator_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QRegularExpressionValidator_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QRegularExpressionValidator* QRegularExpressionValidator_new() {
	return new MiqtVirtualQRegularExpressionValidator();
}

QRegularExpressionValidator* QRegularExpressionValidator_new2(QRegularExpression* re) {
	return new MiqtVirtualQRegularExpressionValidator(*re);
}

QRegularExpressionValidator* QRegularExpressionValidator_new3(QObject* parent) {
	return new MiqtVirtualQRegularExpressionValidator(parent);
}

QRegularExpressionValidator* QRegularExpressionValidator_new4(QRegularExpression* re, QObject* parent) {
	return new MiqtVirtualQRegularExpressionValidator(*re, parent);
}

void QRegularExpressionValidator_virtbase(QRegularExpressionValidator* src, QValidator** outptr_QValidator) {
	*outptr_QValidator = static_cast<QValidator*>(src);
}

QMetaObject* QRegularExpressionValidator_metaObject(const QRegularExpressionValidator* self) {
	return (QMetaObject*) self->metaObject();
}

void* QRegularExpressionValidator_metacast(QRegularExpressionValidator* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QRegularExpressionValidator_tr(const char* s) {
	QString _ret = QRegularExpressionValidator::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRegularExpressionValidator_trUtf8(const char* s) {
	QString _ret = QRegularExpressionValidator::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QRegularExpressionValidator_validate(const QRegularExpressionValidator* self, struct miqt_string input, int* pos) {
	QString input_QString = QString::fromUtf8(input.data, input.len);
	QValidator::State _ret = self->validate(input_QString, static_cast<int&>(*pos));
	return static_cast<int>(_ret);
}

QRegularExpression* QRegularExpressionValidator_regularExpression(const QRegularExpressionValidator* self) {
	return new QRegularExpression(self->regularExpression());
}

void QRegularExpressionValidator_setRegularExpression(QRegularExpressionValidator* self, QRegularExpression* re) {
	self->setRegularExpression(*re);
}

void QRegularExpressionValidator_regularExpressionChanged(QRegularExpressionValidator* self, QRegularExpression* re) {
	self->regularExpressionChanged(*re);
}

void QRegularExpressionValidator_connect_regularExpressionChanged(QRegularExpressionValidator* self, intptr_t slot) {
	MiqtVirtualQRegularExpressionValidator::connect(self, static_cast<void (QRegularExpressionValidator::*)(const QRegularExpression&)>(&QRegularExpressionValidator::regularExpressionChanged), self, [=](const QRegularExpression& re) {
		const QRegularExpression& re_ret = re;
		// Cast returned reference into pointer
		QRegularExpression* sigval1 = const_cast<QRegularExpression*>(&re_ret);
		miqt_exec_callback_QRegularExpressionValidator_regularExpressionChanged(slot, sigval1);
	});
}

struct miqt_string QRegularExpressionValidator_tr2(const char* s, const char* c) {
	QString _ret = QRegularExpressionValidator::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRegularExpressionValidator_tr3(const char* s, const char* c, int n) {
	QString _ret = QRegularExpressionValidator::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRegularExpressionValidator_trUtf82(const char* s, const char* c) {
	QString _ret = QRegularExpressionValidator::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRegularExpressionValidator_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QRegularExpressionValidator::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QRegularExpressionValidator_override_virtual_validate(void* self, intptr_t slot) {
	MiqtVirtualQRegularExpressionValidator* self_cast = dynamic_cast<MiqtVirtualQRegularExpressionValidator*>( (QRegularExpressionValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__validate = slot;
	return true;
}

int QRegularExpressionValidator_virtualbase_validate(const void* self, struct miqt_string input, int* pos) {
	return ( (const MiqtVirtualQRegularExpressionValidator*)(self) )->virtualbase_validate(input, pos);
}

bool QRegularExpressionValidator_override_virtual_fixup(void* self, intptr_t slot) {
	MiqtVirtualQRegularExpressionValidator* self_cast = dynamic_cast<MiqtVirtualQRegularExpressionValidator*>( (QRegularExpressionValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__fixup = slot;
	return true;
}

void QRegularExpressionValidator_virtualbase_fixup(const void* self, struct miqt_string param1) {
	( (const MiqtVirtualQRegularExpressionValidator*)(self) )->virtualbase_fixup(param1);
}

bool QRegularExpressionValidator_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQRegularExpressionValidator* self_cast = dynamic_cast<MiqtVirtualQRegularExpressionValidator*>( (QRegularExpressionValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QRegularExpressionValidator_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQRegularExpressionValidator*)(self) )->virtualbase_event(event);
}

bool QRegularExpressionValidator_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQRegularExpressionValidator* self_cast = dynamic_cast<MiqtVirtualQRegularExpressionValidator*>( (QRegularExpressionValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QRegularExpressionValidator_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQRegularExpressionValidator*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QRegularExpressionValidator_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQRegularExpressionValidator* self_cast = dynamic_cast<MiqtVirtualQRegularExpressionValidator*>( (QRegularExpressionValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QRegularExpressionValidator_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQRegularExpressionValidator*)(self) )->virtualbase_timerEvent(event);
}

bool QRegularExpressionValidator_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQRegularExpressionValidator* self_cast = dynamic_cast<MiqtVirtualQRegularExpressionValidator*>( (QRegularExpressionValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QRegularExpressionValidator_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQRegularExpressionValidator*)(self) )->virtualbase_childEvent(event);
}

bool QRegularExpressionValidator_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQRegularExpressionValidator* self_cast = dynamic_cast<MiqtVirtualQRegularExpressionValidator*>( (QRegularExpressionValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QRegularExpressionValidator_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQRegularExpressionValidator*)(self) )->virtualbase_customEvent(event);
}

bool QRegularExpressionValidator_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQRegularExpressionValidator* self_cast = dynamic_cast<MiqtVirtualQRegularExpressionValidator*>( (QRegularExpressionValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QRegularExpressionValidator_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQRegularExpressionValidator*)(self) )->virtualbase_connectNotify(signal);
}

bool QRegularExpressionValidator_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQRegularExpressionValidator* self_cast = dynamic_cast<MiqtVirtualQRegularExpressionValidator*>( (QRegularExpressionValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QRegularExpressionValidator_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQRegularExpressionValidator*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QRegularExpressionValidator_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQRegularExpressionValidator* self_cast = dynamic_cast<MiqtVirtualQRegularExpressionValidator*>( (QRegularExpressionValidator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QRegularExpressionValidator_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQRegularExpressionValidator* self_cast = dynamic_cast<MiqtVirtualQRegularExpressionValidator*>( (QRegularExpressionValidator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QRegularExpressionValidator_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQRegularExpressionValidator* self_cast = dynamic_cast<MiqtVirtualQRegularExpressionValidator*>( (QRegularExpressionValidator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QRegularExpressionValidator_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQRegularExpressionValidator* self_cast = dynamic_cast<MiqtVirtualQRegularExpressionValidator*>( (QRegularExpressionValidator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QRegularExpressionValidator_delete(QRegularExpressionValidator* self) {
	delete self;
}

