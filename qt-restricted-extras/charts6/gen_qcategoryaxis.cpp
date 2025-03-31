#include <QAbstractAxis>
#include <QCategoryAxis>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QValueAxis>
#include <qcategoryaxis.h>
#include "gen_qcategoryaxis.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QCategoryAxis_categoriesChanged(intptr_t);
void miqt_exec_callback_QCategoryAxis_labelsPositionChanged(intptr_t, int);
int miqt_exec_callback_QCategoryAxis_type(const QCategoryAxis*, intptr_t);
bool miqt_exec_callback_QCategoryAxis_event(QCategoryAxis*, intptr_t, QEvent*);
bool miqt_exec_callback_QCategoryAxis_eventFilter(QCategoryAxis*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QCategoryAxis_timerEvent(QCategoryAxis*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QCategoryAxis_childEvent(QCategoryAxis*, intptr_t, QChildEvent*);
void miqt_exec_callback_QCategoryAxis_customEvent(QCategoryAxis*, intptr_t, QEvent*);
void miqt_exec_callback_QCategoryAxis_connectNotify(QCategoryAxis*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QCategoryAxis_disconnectNotify(QCategoryAxis*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQCategoryAxis final : public QCategoryAxis {
public:

	MiqtVirtualQCategoryAxis(): QCategoryAxis() {};
	MiqtVirtualQCategoryAxis(QObject* parent): QCategoryAxis(parent) {};

	virtual ~MiqtVirtualQCategoryAxis() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractAxis::AxisType type() const override {
		if (handle__type == 0) {
			return QCategoryAxis::type();
		}
		

		int callback_return_value = miqt_exec_callback_QCategoryAxis_type(this, handle__type);

		return static_cast<QAbstractAxis::AxisType>(callback_return_value);
	}

	friend int QCategoryAxis_virtualbase_type(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QCategoryAxis::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QCategoryAxis_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QCategoryAxis_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QCategoryAxis::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QCategoryAxis_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QCategoryAxis_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QCategoryAxis::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QCategoryAxis_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QCategoryAxis_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QCategoryAxis::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QCategoryAxis_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QCategoryAxis_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QCategoryAxis::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QCategoryAxis_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QCategoryAxis_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QCategoryAxis::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QCategoryAxis_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QCategoryAxis_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QCategoryAxis::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QCategoryAxis_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QCategoryAxis_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QCategoryAxis_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QCategoryAxis_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QCategoryAxis_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QCategoryAxis_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QCategoryAxis* QCategoryAxis_new() {
	return new MiqtVirtualQCategoryAxis();
}

QCategoryAxis* QCategoryAxis_new2(QObject* parent) {
	return new MiqtVirtualQCategoryAxis(parent);
}

void QCategoryAxis_virtbase(QCategoryAxis* src, QValueAxis** outptr_QValueAxis) {
	*outptr_QValueAxis = static_cast<QValueAxis*>(src);
}

QMetaObject* QCategoryAxis_metaObject(const QCategoryAxis* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCategoryAxis_metacast(QCategoryAxis* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCategoryAxis_tr(const char* s) {
	QString _ret = QCategoryAxis::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QCategoryAxis_type(const QCategoryAxis* self) {
	QAbstractAxis::AxisType _ret = self->type();
	return static_cast<int>(_ret);
}

void QCategoryAxis_append(QCategoryAxis* self, struct miqt_string label, double categoryEndValue) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	self->append(label_QString, static_cast<qreal>(categoryEndValue));
}

void QCategoryAxis_remove(QCategoryAxis* self, struct miqt_string label) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	self->remove(label_QString);
}

void QCategoryAxis_replaceLabel(QCategoryAxis* self, struct miqt_string oldLabel, struct miqt_string newLabel) {
	QString oldLabel_QString = QString::fromUtf8(oldLabel.data, oldLabel.len);
	QString newLabel_QString = QString::fromUtf8(newLabel.data, newLabel.len);
	self->replaceLabel(oldLabel_QString, newLabel_QString);
}

double QCategoryAxis_startValue(const QCategoryAxis* self) {
	qreal _ret = self->startValue();
	return static_cast<double>(_ret);
}

void QCategoryAxis_setStartValue(QCategoryAxis* self, double min) {
	self->setStartValue(static_cast<qreal>(min));
}

double QCategoryAxis_endValue(const QCategoryAxis* self, struct miqt_string categoryLabel) {
	QString categoryLabel_QString = QString::fromUtf8(categoryLabel.data, categoryLabel.len);
	qreal _ret = self->endValue(categoryLabel_QString);
	return static_cast<double>(_ret);
}

struct miqt_array /* of struct miqt_string */  QCategoryAxis_categoriesLabels(QCategoryAxis* self) {
	QStringList _ret = self->categoriesLabels();
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

int QCategoryAxis_count(const QCategoryAxis* self) {
	return self->count();
}

int QCategoryAxis_labelsPosition(const QCategoryAxis* self) {
	QCategoryAxis::AxisLabelsPosition _ret = self->labelsPosition();
	return static_cast<int>(_ret);
}

void QCategoryAxis_setLabelsPosition(QCategoryAxis* self, int position) {
	self->setLabelsPosition(static_cast<QCategoryAxis::AxisLabelsPosition>(position));
}

void QCategoryAxis_categoriesChanged(QCategoryAxis* self) {
	self->categoriesChanged();
}

void QCategoryAxis_connect_categoriesChanged(QCategoryAxis* self, intptr_t slot) {
	MiqtVirtualQCategoryAxis::connect(self, static_cast<void (QCategoryAxis::*)()>(&QCategoryAxis::categoriesChanged), self, [=]() {
		miqt_exec_callback_QCategoryAxis_categoriesChanged(slot);
	});
}

void QCategoryAxis_labelsPositionChanged(QCategoryAxis* self, int position) {
	self->labelsPositionChanged(static_cast<QCategoryAxis::AxisLabelsPosition>(position));
}

void QCategoryAxis_connect_labelsPositionChanged(QCategoryAxis* self, intptr_t slot) {
	MiqtVirtualQCategoryAxis::connect(self, static_cast<void (QCategoryAxis::*)(QCategoryAxis::AxisLabelsPosition)>(&QCategoryAxis::labelsPositionChanged), self, [=](QCategoryAxis::AxisLabelsPosition position) {
		QCategoryAxis::AxisLabelsPosition position_ret = position;
		int sigval1 = static_cast<int>(position_ret);
		miqt_exec_callback_QCategoryAxis_labelsPositionChanged(slot, sigval1);
	});
}

struct miqt_string QCategoryAxis_tr2(const char* s, const char* c) {
	QString _ret = QCategoryAxis::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCategoryAxis_tr3(const char* s, const char* c, int n) {
	QString _ret = QCategoryAxis::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

double QCategoryAxis_startValue1(const QCategoryAxis* self, struct miqt_string categoryLabel) {
	QString categoryLabel_QString = QString::fromUtf8(categoryLabel.data, categoryLabel.len);
	qreal _ret = self->startValue(categoryLabel_QString);
	return static_cast<double>(_ret);
}

bool QCategoryAxis_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQCategoryAxis* self_cast = dynamic_cast<MiqtVirtualQCategoryAxis*>( (QCategoryAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__type = slot;
	return true;
}

int QCategoryAxis_virtualbase_type(const void* self) {

	MiqtVirtualQCategoryAxis::AxisType _ret = ( (const MiqtVirtualQCategoryAxis*)(self) )->QCategoryAxis::type();
	return static_cast<int>(_ret);

}

bool QCategoryAxis_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQCategoryAxis* self_cast = dynamic_cast<MiqtVirtualQCategoryAxis*>( (QCategoryAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QCategoryAxis_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualQCategoryAxis*)(self) )->QCategoryAxis::event(event);

}

bool QCategoryAxis_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQCategoryAxis* self_cast = dynamic_cast<MiqtVirtualQCategoryAxis*>( (QCategoryAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QCategoryAxis_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualQCategoryAxis*)(self) )->QCategoryAxis::eventFilter(watched, event);

}

bool QCategoryAxis_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQCategoryAxis* self_cast = dynamic_cast<MiqtVirtualQCategoryAxis*>( (QCategoryAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QCategoryAxis_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQCategoryAxis*)(self) )->QCategoryAxis::timerEvent(event);

}

bool QCategoryAxis_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQCategoryAxis* self_cast = dynamic_cast<MiqtVirtualQCategoryAxis*>( (QCategoryAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QCategoryAxis_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQCategoryAxis*)(self) )->QCategoryAxis::childEvent(event);

}

bool QCategoryAxis_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQCategoryAxis* self_cast = dynamic_cast<MiqtVirtualQCategoryAxis*>( (QCategoryAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QCategoryAxis_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQCategoryAxis*)(self) )->QCategoryAxis::customEvent(event);

}

bool QCategoryAxis_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQCategoryAxis* self_cast = dynamic_cast<MiqtVirtualQCategoryAxis*>( (QCategoryAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QCategoryAxis_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQCategoryAxis*)(self) )->QCategoryAxis::connectNotify(*signal);

}

bool QCategoryAxis_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQCategoryAxis* self_cast = dynamic_cast<MiqtVirtualQCategoryAxis*>( (QCategoryAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QCategoryAxis_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQCategoryAxis*)(self) )->QCategoryAxis::disconnectNotify(*signal);

}

QObject* QCategoryAxis_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCategoryAxis* self_cast = dynamic_cast<MiqtVirtualQCategoryAxis*>( (QCategoryAxis*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QCategoryAxis_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCategoryAxis* self_cast = dynamic_cast<MiqtVirtualQCategoryAxis*>( (QCategoryAxis*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QCategoryAxis_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQCategoryAxis* self_cast = dynamic_cast<MiqtVirtualQCategoryAxis*>( (QCategoryAxis*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QCategoryAxis_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQCategoryAxis* self_cast = dynamic_cast<MiqtVirtualQCategoryAxis*>( (QCategoryAxis*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QCategoryAxis_delete(QCategoryAxis* self) {
	delete self;
}

