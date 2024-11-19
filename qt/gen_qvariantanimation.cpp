#include <QAbstractAnimation>
#include <QEasingCurve>
#include <QEvent>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QVariantAnimation>
#include <qvariantanimation.h>
#include "gen_qvariantanimation.h"
#include "_cgo_export.h"

class MiqtVirtualQVariantAnimation : public virtual QVariantAnimation {
public:

	MiqtVirtualQVariantAnimation(): QVariantAnimation() {};
	MiqtVirtualQVariantAnimation(QObject* parent): QVariantAnimation(parent) {};

	virtual ~MiqtVirtualQVariantAnimation() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Duration = 0;

	// Subclass to allow providing a Go implementation
	virtual int duration() const override {
		if (handle__Duration == 0) {
			return QVariantAnimation::duration();
		}
		

		int callback_return_value = miqt_exec_callback_QVariantAnimation_Duration(const_cast<MiqtVirtualQVariantAnimation*>(this), handle__Duration);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Duration() const {

		return QVariantAnimation::duration();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QVariantAnimation::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QVariantAnimation_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QVariantAnimation::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateCurrentTime = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateCurrentTime(int param1) override {
		if (handle__UpdateCurrentTime == 0) {
			QVariantAnimation::updateCurrentTime(param1);
			return;
		}
		
		int sigval1 = param1;

		miqt_exec_callback_QVariantAnimation_UpdateCurrentTime(this, handle__UpdateCurrentTime, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateCurrentTime(int param1) {

		QVariantAnimation::updateCurrentTime(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateState = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
		if (handle__UpdateState == 0) {
			QVariantAnimation::updateState(newState, oldState);
			return;
		}
		
		QAbstractAnimation::State newState_ret = newState;
		int sigval1 = static_cast<int>(newState_ret);
		QAbstractAnimation::State oldState_ret = oldState;
		int sigval2 = static_cast<int>(oldState_ret);

		miqt_exec_callback_QVariantAnimation_UpdateState(this, handle__UpdateState, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateState(int newState, int oldState) {

		QVariantAnimation::updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateCurrentValue = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateCurrentValue(const QVariant& value) override {
		if (handle__UpdateCurrentValue == 0) {
			QVariantAnimation::updateCurrentValue(value);
			return;
		}
		
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&value_ret);

		miqt_exec_callback_QVariantAnimation_UpdateCurrentValue(this, handle__UpdateCurrentValue, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateCurrentValue(QVariant* value) {

		QVariantAnimation::updateCurrentValue(*value);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Interpolated = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant interpolated(const QVariant& from, const QVariant& to, qreal progress) const override {
		if (handle__Interpolated == 0) {
			return QVariantAnimation::interpolated(from, to, progress);
		}
		
		const QVariant& from_ret = from;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&from_ret);
		const QVariant& to_ret = to;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&to_ret);
		qreal progress_ret = progress;
		double sigval3 = static_cast<double>(progress_ret);

		QVariant* callback_return_value = miqt_exec_callback_QVariantAnimation_Interpolated(const_cast<MiqtVirtualQVariantAnimation*>(this), handle__Interpolated, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Interpolated(QVariant* from, QVariant* to, double progress) const {

		return new QVariant(QVariantAnimation::interpolated(*from, *to, static_cast<qreal>(progress)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateDirection = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateDirection(QAbstractAnimation::Direction direction) override {
		if (handle__UpdateDirection == 0) {
			QVariantAnimation::updateDirection(direction);
			return;
		}
		
		QAbstractAnimation::Direction direction_ret = direction;
		int sigval1 = static_cast<int>(direction_ret);

		miqt_exec_callback_QVariantAnimation_UpdateDirection(this, handle__UpdateDirection, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateDirection(int direction) {

		QVariantAnimation::updateDirection(static_cast<QAbstractAnimation::Direction>(direction));

	}

};

void QVariantAnimation_new(QVariantAnimation** outptr_QVariantAnimation, QAbstractAnimation** outptr_QAbstractAnimation, QObject** outptr_QObject) {
	MiqtVirtualQVariantAnimation* ret = new MiqtVirtualQVariantAnimation();
	*outptr_QVariantAnimation = ret;
	*outptr_QAbstractAnimation = static_cast<QAbstractAnimation*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
}

void QVariantAnimation_new2(QObject* parent, QVariantAnimation** outptr_QVariantAnimation, QAbstractAnimation** outptr_QAbstractAnimation, QObject** outptr_QObject) {
	MiqtVirtualQVariantAnimation* ret = new MiqtVirtualQVariantAnimation(parent);
	*outptr_QVariantAnimation = ret;
	*outptr_QAbstractAnimation = static_cast<QAbstractAnimation*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
}

QMetaObject* QVariantAnimation_MetaObject(const QVariantAnimation* self) {
	return (QMetaObject*) self->metaObject();
}

void* QVariantAnimation_Metacast(QVariantAnimation* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QVariantAnimation_Tr(const char* s) {
	QString _ret = QVariantAnimation::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVariantAnimation_TrUtf8(const char* s) {
	QString _ret = QVariantAnimation::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QVariant* QVariantAnimation_StartValue(const QVariantAnimation* self) {
	return new QVariant(self->startValue());
}

void QVariantAnimation_SetStartValue(QVariantAnimation* self, QVariant* value) {
	self->setStartValue(*value);
}

QVariant* QVariantAnimation_EndValue(const QVariantAnimation* self) {
	return new QVariant(self->endValue());
}

void QVariantAnimation_SetEndValue(QVariantAnimation* self, QVariant* value) {
	self->setEndValue(*value);
}

QVariant* QVariantAnimation_KeyValueAt(const QVariantAnimation* self, double step) {
	return new QVariant(self->keyValueAt(static_cast<qreal>(step)));
}

void QVariantAnimation_SetKeyValueAt(QVariantAnimation* self, double step, QVariant* value) {
	self->setKeyValueAt(static_cast<qreal>(step), *value);
}

struct miqt_array /* of struct miqt_map  tuple of double and QVariant*   */  QVariantAnimation_KeyValues(const QVariantAnimation* self) {
	QVariantAnimation::KeyValues _ret = self->keyValues();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_map /* tuple of double and QVariant* */ * _arr = static_cast<struct miqt_map /* tuple of double and QVariant* */ *>(malloc(sizeof(struct miqt_map /* tuple of double and QVariant* */ ) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QPair<double, QVariant> _vv_ret = _ret[i];
		// Convert QPair<> from C++ memory to manually-managed C memory
		double* _vv_first_arr = static_cast<double*>(malloc(sizeof(double)));
		QVariant** _vv_second_arr = static_cast<QVariant**>(malloc(sizeof(QVariant*)));
		_vv_first_arr[0] = _vv_ret.first;
		_vv_second_arr[0] = new QVariant(_vv_ret.second);
		struct miqt_map _vv_out;
		_vv_out.len = 1;
		_vv_out.keys = static_cast<void*>(_vv_first_arr);
		_vv_out.values = static_cast<void*>(_vv_second_arr);
		_arr[i] = _vv_out;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QVariantAnimation_SetKeyValues(QVariantAnimation* self, struct miqt_array /* of struct miqt_map  tuple of double and QVariant*   */  values) {
	QVariantAnimation::KeyValues values_QList;
	values_QList.reserve(values.len);
	struct miqt_map /* tuple of double and QVariant* */ * values_arr = static_cast<struct miqt_map /* tuple of double and QVariant* */ *>(values.data);
	for(size_t i = 0; i < values.len; ++i) {
		QPair<double, QVariant> values_arr_i_QPair;
		double* values_arr_i_first_arr = static_cast<double*>(values_arr[i].keys);
		QVariant** values_arr_i_second_arr = static_cast<QVariant**>(values_arr[i].values);
		values_arr_i_QPair.first = static_cast<double>(values_arr_i_first_arr[0]);
		values_arr_i_QPair.second = *(values_arr_i_second_arr[0]);
		values_QList.push_back(values_arr_i_QPair);
	}
	self->setKeyValues(values_QList);
}

QVariant* QVariantAnimation_CurrentValue(const QVariantAnimation* self) {
	return new QVariant(self->currentValue());
}

int QVariantAnimation_Duration(const QVariantAnimation* self) {
	return self->duration();
}

void QVariantAnimation_SetDuration(QVariantAnimation* self, int msecs) {
	self->setDuration(static_cast<int>(msecs));
}

QEasingCurve* QVariantAnimation_EasingCurve(const QVariantAnimation* self) {
	return new QEasingCurve(self->easingCurve());
}

void QVariantAnimation_SetEasingCurve(QVariantAnimation* self, QEasingCurve* easing) {
	self->setEasingCurve(*easing);
}

void QVariantAnimation_ValueChanged(QVariantAnimation* self, QVariant* value) {
	self->valueChanged(*value);
}

void QVariantAnimation_connect_ValueChanged(QVariantAnimation* self, intptr_t slot) {
	MiqtVirtualQVariantAnimation::connect(self, static_cast<void (QVariantAnimation::*)(const QVariant&)>(&QVariantAnimation::valueChanged), self, [=](const QVariant& value) {
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&value_ret);
		miqt_exec_callback_QVariantAnimation_ValueChanged(slot, sigval1);
	});
}

struct miqt_string QVariantAnimation_Tr2(const char* s, const char* c) {
	QString _ret = QVariantAnimation::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVariantAnimation_Tr3(const char* s, const char* c, int n) {
	QString _ret = QVariantAnimation::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVariantAnimation_TrUtf82(const char* s, const char* c) {
	QString _ret = QVariantAnimation::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVariantAnimation_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QVariantAnimation::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QVariantAnimation_override_virtual_Duration(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVariantAnimation*>( (QVariantAnimation*)(self) )->handle__Duration = slot;
}

int QVariantAnimation_virtualbase_Duration(const void* self) {
	return ( (const MiqtVirtualQVariantAnimation*)(self) )->virtualbase_Duration();
}

void QVariantAnimation_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVariantAnimation*>( (QVariantAnimation*)(self) )->handle__Event = slot;
}

bool QVariantAnimation_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQVariantAnimation*)(self) )->virtualbase_Event(event);
}

void QVariantAnimation_override_virtual_UpdateCurrentTime(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVariantAnimation*>( (QVariantAnimation*)(self) )->handle__UpdateCurrentTime = slot;
}

void QVariantAnimation_virtualbase_UpdateCurrentTime(void* self, int param1) {
	( (MiqtVirtualQVariantAnimation*)(self) )->virtualbase_UpdateCurrentTime(param1);
}

void QVariantAnimation_override_virtual_UpdateState(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVariantAnimation*>( (QVariantAnimation*)(self) )->handle__UpdateState = slot;
}

void QVariantAnimation_virtualbase_UpdateState(void* self, int newState, int oldState) {
	( (MiqtVirtualQVariantAnimation*)(self) )->virtualbase_UpdateState(newState, oldState);
}

void QVariantAnimation_override_virtual_UpdateCurrentValue(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVariantAnimation*>( (QVariantAnimation*)(self) )->handle__UpdateCurrentValue = slot;
}

void QVariantAnimation_virtualbase_UpdateCurrentValue(void* self, QVariant* value) {
	( (MiqtVirtualQVariantAnimation*)(self) )->virtualbase_UpdateCurrentValue(value);
}

void QVariantAnimation_override_virtual_Interpolated(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVariantAnimation*>( (QVariantAnimation*)(self) )->handle__Interpolated = slot;
}

QVariant* QVariantAnimation_virtualbase_Interpolated(const void* self, QVariant* from, QVariant* to, double progress) {
	return ( (const MiqtVirtualQVariantAnimation*)(self) )->virtualbase_Interpolated(from, to, progress);
}

void QVariantAnimation_override_virtual_UpdateDirection(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVariantAnimation*>( (QVariantAnimation*)(self) )->handle__UpdateDirection = slot;
}

void QVariantAnimation_virtualbase_UpdateDirection(void* self, int direction) {
	( (MiqtVirtualQVariantAnimation*)(self) )->virtualbase_UpdateDirection(direction);
}

void QVariantAnimation_Delete(QVariantAnimation* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQVariantAnimation*>( self );
	} else {
		delete self;
	}
}

