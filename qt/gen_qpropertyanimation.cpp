#include <QAbstractAnimation>
#include <QByteArray>
#include <QEvent>
#include <QMetaObject>
#include <QObject>
#include <QPropertyAnimation>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QVariantAnimation>
#include <qpropertyanimation.h>
#include "gen_qpropertyanimation.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QPropertyAnimation_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QPropertyAnimation_UpdateCurrentValue(void*, intptr_t, QVariant*);
void miqt_exec_callback_QPropertyAnimation_UpdateState(void*, intptr_t, int, int);
int miqt_exec_callback_QPropertyAnimation_Duration(void*, intptr_t);
void miqt_exec_callback_QPropertyAnimation_UpdateCurrentTime(void*, intptr_t, int);
QVariant* miqt_exec_callback_QPropertyAnimation_Interpolated(void*, intptr_t, QVariant*, QVariant*, double);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPropertyAnimation final : public QPropertyAnimation {
public:

	MiqtVirtualQPropertyAnimation(): QPropertyAnimation() {};
	MiqtVirtualQPropertyAnimation(QObject* target, const QByteArray& propertyName): QPropertyAnimation(target, propertyName) {};
	MiqtVirtualQPropertyAnimation(QObject* parent): QPropertyAnimation(parent) {};
	MiqtVirtualQPropertyAnimation(QObject* target, const QByteArray& propertyName, QObject* parent): QPropertyAnimation(target, propertyName, parent) {};

	virtual ~MiqtVirtualQPropertyAnimation() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QPropertyAnimation::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QPropertyAnimation_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QPropertyAnimation::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateCurrentValue = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateCurrentValue(const QVariant& value) override {
		if (handle__UpdateCurrentValue == 0) {
			QPropertyAnimation::updateCurrentValue(value);
			return;
		}
		
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&value_ret);

		miqt_exec_callback_QPropertyAnimation_UpdateCurrentValue(this, handle__UpdateCurrentValue, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateCurrentValue(QVariant* value) {

		QPropertyAnimation::updateCurrentValue(*value);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateState = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
		if (handle__UpdateState == 0) {
			QPropertyAnimation::updateState(newState, oldState);
			return;
		}
		
		QAbstractAnimation::State newState_ret = newState;
		int sigval1 = static_cast<int>(newState_ret);
		QAbstractAnimation::State oldState_ret = oldState;
		int sigval2 = static_cast<int>(oldState_ret);

		miqt_exec_callback_QPropertyAnimation_UpdateState(this, handle__UpdateState, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateState(int newState, int oldState) {

		QPropertyAnimation::updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Duration = 0;

	// Subclass to allow providing a Go implementation
	virtual int duration() const override {
		if (handle__Duration == 0) {
			return QPropertyAnimation::duration();
		}
		

		int callback_return_value = miqt_exec_callback_QPropertyAnimation_Duration(const_cast<MiqtVirtualQPropertyAnimation*>(this), handle__Duration);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Duration() const {

		return QPropertyAnimation::duration();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateCurrentTime = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateCurrentTime(int param1) override {
		if (handle__UpdateCurrentTime == 0) {
			QPropertyAnimation::updateCurrentTime(param1);
			return;
		}
		
		int sigval1 = param1;

		miqt_exec_callback_QPropertyAnimation_UpdateCurrentTime(this, handle__UpdateCurrentTime, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateCurrentTime(int param1) {

		QPropertyAnimation::updateCurrentTime(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Interpolated = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant interpolated(const QVariant& from, const QVariant& to, qreal progress) const override {
		if (handle__Interpolated == 0) {
			return QPropertyAnimation::interpolated(from, to, progress);
		}
		
		const QVariant& from_ret = from;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&from_ret);
		const QVariant& to_ret = to;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&to_ret);
		qreal progress_ret = progress;
		double sigval3 = static_cast<double>(progress_ret);

		QVariant* callback_return_value = miqt_exec_callback_QPropertyAnimation_Interpolated(const_cast<MiqtVirtualQPropertyAnimation*>(this), handle__Interpolated, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Interpolated(QVariant* from, QVariant* to, double progress) const {

		return new QVariant(QPropertyAnimation::interpolated(*from, *to, static_cast<qreal>(progress)));

	}

};

QPropertyAnimation* QPropertyAnimation_new() {
	return new MiqtVirtualQPropertyAnimation();
}

QPropertyAnimation* QPropertyAnimation_new2(QObject* target, struct miqt_string propertyName) {
	QByteArray propertyName_QByteArray(propertyName.data, propertyName.len);
	return new MiqtVirtualQPropertyAnimation(target, propertyName_QByteArray);
}

QPropertyAnimation* QPropertyAnimation_new3(QObject* parent) {
	return new MiqtVirtualQPropertyAnimation(parent);
}

QPropertyAnimation* QPropertyAnimation_new4(QObject* target, struct miqt_string propertyName, QObject* parent) {
	QByteArray propertyName_QByteArray(propertyName.data, propertyName.len);
	return new MiqtVirtualQPropertyAnimation(target, propertyName_QByteArray, parent);
}

void QPropertyAnimation_virtbase(QPropertyAnimation* src, QVariantAnimation** outptr_QVariantAnimation) {
	*outptr_QVariantAnimation = static_cast<QVariantAnimation*>(src);
}

QMetaObject* QPropertyAnimation_MetaObject(const QPropertyAnimation* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPropertyAnimation_Metacast(QPropertyAnimation* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPropertyAnimation_Tr(const char* s) {
	QString _ret = QPropertyAnimation::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPropertyAnimation_TrUtf8(const char* s) {
	QString _ret = QPropertyAnimation::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QObject* QPropertyAnimation_TargetObject(const QPropertyAnimation* self) {
	return self->targetObject();
}

void QPropertyAnimation_SetTargetObject(QPropertyAnimation* self, QObject* target) {
	self->setTargetObject(target);
}

struct miqt_string QPropertyAnimation_PropertyName(const QPropertyAnimation* self) {
	QByteArray _qb = self->propertyName();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QPropertyAnimation_SetPropertyName(QPropertyAnimation* self, struct miqt_string propertyName) {
	QByteArray propertyName_QByteArray(propertyName.data, propertyName.len);
	self->setPropertyName(propertyName_QByteArray);
}

struct miqt_string QPropertyAnimation_Tr2(const char* s, const char* c) {
	QString _ret = QPropertyAnimation::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPropertyAnimation_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPropertyAnimation::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPropertyAnimation_TrUtf82(const char* s, const char* c) {
	QString _ret = QPropertyAnimation::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPropertyAnimation_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QPropertyAnimation::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPropertyAnimation_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QPropertyAnimation_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQPropertyAnimation*)(self) )->virtualbase_Event(event);
}

bool QPropertyAnimation_override_virtual_UpdateCurrentValue(void* self, intptr_t slot) {
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateCurrentValue = slot;
	return true;
}

void QPropertyAnimation_virtualbase_UpdateCurrentValue(void* self, QVariant* value) {
	( (MiqtVirtualQPropertyAnimation*)(self) )->virtualbase_UpdateCurrentValue(value);
}

bool QPropertyAnimation_override_virtual_UpdateState(void* self, intptr_t slot) {
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateState = slot;
	return true;
}

void QPropertyAnimation_virtualbase_UpdateState(void* self, int newState, int oldState) {
	( (MiqtVirtualQPropertyAnimation*)(self) )->virtualbase_UpdateState(newState, oldState);
}

bool QPropertyAnimation_override_virtual_Duration(void* self, intptr_t slot) {
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Duration = slot;
	return true;
}

int QPropertyAnimation_virtualbase_Duration(const void* self) {
	return ( (const MiqtVirtualQPropertyAnimation*)(self) )->virtualbase_Duration();
}

bool QPropertyAnimation_override_virtual_UpdateCurrentTime(void* self, intptr_t slot) {
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateCurrentTime = slot;
	return true;
}

void QPropertyAnimation_virtualbase_UpdateCurrentTime(void* self, int param1) {
	( (MiqtVirtualQPropertyAnimation*)(self) )->virtualbase_UpdateCurrentTime(param1);
}

bool QPropertyAnimation_override_virtual_Interpolated(void* self, intptr_t slot) {
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Interpolated = slot;
	return true;
}

QVariant* QPropertyAnimation_virtualbase_Interpolated(const void* self, QVariant* from, QVariant* to, double progress) {
	return ( (const MiqtVirtualQPropertyAnimation*)(self) )->virtualbase_Interpolated(from, to, progress);
}

void QPropertyAnimation_Delete(QPropertyAnimation* self) {
	delete self;
}

