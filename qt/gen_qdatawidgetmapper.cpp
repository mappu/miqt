#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QByteArray>
#include <QChildEvent>
#include <QDataWidgetMapper>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <qdatawidgetmapper.h>
#include "gen_qdatawidgetmapper.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QDataWidgetMapper_currentIndexChanged(intptr_t, int);
void miqt_exec_callback_QDataWidgetMapper_setCurrentIndex(QDataWidgetMapper*, intptr_t, int);
bool miqt_exec_callback_QDataWidgetMapper_event(QDataWidgetMapper*, intptr_t, QEvent*);
bool miqt_exec_callback_QDataWidgetMapper_eventFilter(QDataWidgetMapper*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDataWidgetMapper_timerEvent(QDataWidgetMapper*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDataWidgetMapper_childEvent(QDataWidgetMapper*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDataWidgetMapper_customEvent(QDataWidgetMapper*, intptr_t, QEvent*);
void miqt_exec_callback_QDataWidgetMapper_connectNotify(QDataWidgetMapper*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDataWidgetMapper_disconnectNotify(QDataWidgetMapper*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDataWidgetMapper final : public QDataWidgetMapper {
public:

	MiqtVirtualQDataWidgetMapper(): QDataWidgetMapper() {};
	MiqtVirtualQDataWidgetMapper(QObject* parent): QDataWidgetMapper(parent) {};

	virtual ~MiqtVirtualQDataWidgetMapper() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setCurrentIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual void setCurrentIndex(int index) override {
		if (handle__setCurrentIndex == 0) {
			QDataWidgetMapper::setCurrentIndex(index);
			return;
		}
		
		int sigval1 = index;

		miqt_exec_callback_QDataWidgetMapper_setCurrentIndex(this, handle__setCurrentIndex, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setCurrentIndex(int index) {

		QDataWidgetMapper::setCurrentIndex(static_cast<int>(index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QDataWidgetMapper::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QDataWidgetMapper_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QDataWidgetMapper::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QDataWidgetMapper::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QDataWidgetMapper_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QDataWidgetMapper::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QDataWidgetMapper::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QDataWidgetMapper_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QDataWidgetMapper::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QDataWidgetMapper::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QDataWidgetMapper_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QDataWidgetMapper::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QDataWidgetMapper::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDataWidgetMapper_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QDataWidgetMapper::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QDataWidgetMapper::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDataWidgetMapper_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QDataWidgetMapper::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QDataWidgetMapper::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDataWidgetMapper_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QDataWidgetMapper::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QDataWidgetMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QDataWidgetMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QDataWidgetMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QDataWidgetMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QDataWidgetMapper* QDataWidgetMapper_new() {
	return new MiqtVirtualQDataWidgetMapper();
}

QDataWidgetMapper* QDataWidgetMapper_new2(QObject* parent) {
	return new MiqtVirtualQDataWidgetMapper(parent);
}

void QDataWidgetMapper_virtbase(QDataWidgetMapper* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QDataWidgetMapper_metaObject(const QDataWidgetMapper* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDataWidgetMapper_metacast(QDataWidgetMapper* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDataWidgetMapper_tr(const char* s) {
	QString _ret = QDataWidgetMapper::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDataWidgetMapper_trUtf8(const char* s) {
	QString _ret = QDataWidgetMapper::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDataWidgetMapper_setModel(QDataWidgetMapper* self, QAbstractItemModel* model) {
	self->setModel(model);
}

QAbstractItemModel* QDataWidgetMapper_model(const QDataWidgetMapper* self) {
	return self->model();
}

void QDataWidgetMapper_setItemDelegate(QDataWidgetMapper* self, QAbstractItemDelegate* delegate) {
	self->setItemDelegate(delegate);
}

QAbstractItemDelegate* QDataWidgetMapper_itemDelegate(const QDataWidgetMapper* self) {
	return self->itemDelegate();
}

void QDataWidgetMapper_setRootIndex(QDataWidgetMapper* self, QModelIndex* index) {
	self->setRootIndex(*index);
}

QModelIndex* QDataWidgetMapper_rootIndex(const QDataWidgetMapper* self) {
	return new QModelIndex(self->rootIndex());
}

void QDataWidgetMapper_setOrientation(QDataWidgetMapper* self, int aOrientation) {
	self->setOrientation(static_cast<Qt::Orientation>(aOrientation));
}

int QDataWidgetMapper_orientation(const QDataWidgetMapper* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QDataWidgetMapper_setSubmitPolicy(QDataWidgetMapper* self, int policy) {
	self->setSubmitPolicy(static_cast<QDataWidgetMapper::SubmitPolicy>(policy));
}

int QDataWidgetMapper_submitPolicy(const QDataWidgetMapper* self) {
	QDataWidgetMapper::SubmitPolicy _ret = self->submitPolicy();
	return static_cast<int>(_ret);
}

void QDataWidgetMapper_addMapping(QDataWidgetMapper* self, QWidget* widget, int section) {
	self->addMapping(widget, static_cast<int>(section));
}

void QDataWidgetMapper_addMapping2(QDataWidgetMapper* self, QWidget* widget, int section, struct miqt_string propertyName) {
	QByteArray propertyName_QByteArray(propertyName.data, propertyName.len);
	self->addMapping(widget, static_cast<int>(section), propertyName_QByteArray);
}

void QDataWidgetMapper_removeMapping(QDataWidgetMapper* self, QWidget* widget) {
	self->removeMapping(widget);
}

int QDataWidgetMapper_mappedSection(const QDataWidgetMapper* self, QWidget* widget) {
	return self->mappedSection(widget);
}

struct miqt_string QDataWidgetMapper_mappedPropertyName(const QDataWidgetMapper* self, QWidget* widget) {
	QByteArray _qb = self->mappedPropertyName(widget);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QWidget* QDataWidgetMapper_mappedWidgetAt(const QDataWidgetMapper* self, int section) {
	return self->mappedWidgetAt(static_cast<int>(section));
}

void QDataWidgetMapper_clearMapping(QDataWidgetMapper* self) {
	self->clearMapping();
}

int QDataWidgetMapper_currentIndex(const QDataWidgetMapper* self) {
	return self->currentIndex();
}

void QDataWidgetMapper_revert(QDataWidgetMapper* self) {
	self->revert();
}

bool QDataWidgetMapper_submit(QDataWidgetMapper* self) {
	return self->submit();
}

void QDataWidgetMapper_toFirst(QDataWidgetMapper* self) {
	self->toFirst();
}

void QDataWidgetMapper_toLast(QDataWidgetMapper* self) {
	self->toLast();
}

void QDataWidgetMapper_toNext(QDataWidgetMapper* self) {
	self->toNext();
}

void QDataWidgetMapper_toPrevious(QDataWidgetMapper* self) {
	self->toPrevious();
}

void QDataWidgetMapper_setCurrentIndex(QDataWidgetMapper* self, int index) {
	self->setCurrentIndex(static_cast<int>(index));
}

void QDataWidgetMapper_setCurrentModelIndex(QDataWidgetMapper* self, QModelIndex* index) {
	self->setCurrentModelIndex(*index);
}

void QDataWidgetMapper_currentIndexChanged(QDataWidgetMapper* self, int index) {
	self->currentIndexChanged(static_cast<int>(index));
}

void QDataWidgetMapper_connect_currentIndexChanged(QDataWidgetMapper* self, intptr_t slot) {
	MiqtVirtualQDataWidgetMapper::connect(self, static_cast<void (QDataWidgetMapper::*)(int)>(&QDataWidgetMapper::currentIndexChanged), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QDataWidgetMapper_currentIndexChanged(slot, sigval1);
	});
}

struct miqt_string QDataWidgetMapper_tr2(const char* s, const char* c) {
	QString _ret = QDataWidgetMapper::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDataWidgetMapper_tr3(const char* s, const char* c, int n) {
	QString _ret = QDataWidgetMapper::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDataWidgetMapper_trUtf82(const char* s, const char* c) {
	QString _ret = QDataWidgetMapper::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDataWidgetMapper_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QDataWidgetMapper::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDataWidgetMapper_override_virtual_setCurrentIndex(void* self, intptr_t slot) {
	MiqtVirtualQDataWidgetMapper* self_cast = dynamic_cast<MiqtVirtualQDataWidgetMapper*>( (QDataWidgetMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setCurrentIndex = slot;
	return true;
}

void QDataWidgetMapper_virtualbase_setCurrentIndex(void* self, int index) {
	( (MiqtVirtualQDataWidgetMapper*)(self) )->virtualbase_setCurrentIndex(index);
}

bool QDataWidgetMapper_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQDataWidgetMapper* self_cast = dynamic_cast<MiqtVirtualQDataWidgetMapper*>( (QDataWidgetMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QDataWidgetMapper_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQDataWidgetMapper*)(self) )->virtualbase_event(event);
}

bool QDataWidgetMapper_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDataWidgetMapper* self_cast = dynamic_cast<MiqtVirtualQDataWidgetMapper*>( (QDataWidgetMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QDataWidgetMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQDataWidgetMapper*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QDataWidgetMapper_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDataWidgetMapper* self_cast = dynamic_cast<MiqtVirtualQDataWidgetMapper*>( (QDataWidgetMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QDataWidgetMapper_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQDataWidgetMapper*)(self) )->virtualbase_timerEvent(event);
}

bool QDataWidgetMapper_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQDataWidgetMapper* self_cast = dynamic_cast<MiqtVirtualQDataWidgetMapper*>( (QDataWidgetMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QDataWidgetMapper_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQDataWidgetMapper*)(self) )->virtualbase_childEvent(event);
}

bool QDataWidgetMapper_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQDataWidgetMapper* self_cast = dynamic_cast<MiqtVirtualQDataWidgetMapper*>( (QDataWidgetMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QDataWidgetMapper_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDataWidgetMapper*)(self) )->virtualbase_customEvent(event);
}

bool QDataWidgetMapper_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDataWidgetMapper* self_cast = dynamic_cast<MiqtVirtualQDataWidgetMapper*>( (QDataWidgetMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QDataWidgetMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDataWidgetMapper*)(self) )->virtualbase_connectNotify(signal);
}

bool QDataWidgetMapper_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDataWidgetMapper* self_cast = dynamic_cast<MiqtVirtualQDataWidgetMapper*>( (QDataWidgetMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QDataWidgetMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDataWidgetMapper*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QDataWidgetMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDataWidgetMapper* self_cast = dynamic_cast<MiqtVirtualQDataWidgetMapper*>( (QDataWidgetMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QDataWidgetMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDataWidgetMapper* self_cast = dynamic_cast<MiqtVirtualQDataWidgetMapper*>( (QDataWidgetMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QDataWidgetMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQDataWidgetMapper* self_cast = dynamic_cast<MiqtVirtualQDataWidgetMapper*>( (QDataWidgetMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QDataWidgetMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQDataWidgetMapper* self_cast = dynamic_cast<MiqtVirtualQDataWidgetMapper*>( (QDataWidgetMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QDataWidgetMapper_delete(QDataWidgetMapper* self) {
	delete self;
}

