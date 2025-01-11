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

void miqt_exec_callback_QDataWidgetMapper_CurrentIndexChanged(intptr_t, int);
void miqt_exec_callback_QDataWidgetMapper_SetCurrentIndex(void*, intptr_t, int);
bool miqt_exec_callback_QDataWidgetMapper_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QDataWidgetMapper_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDataWidgetMapper_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDataWidgetMapper_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDataWidgetMapper_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QDataWidgetMapper_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDataWidgetMapper_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDataWidgetMapper : public virtual QDataWidgetMapper {
public:

	MiqtVirtualQDataWidgetMapper(): QDataWidgetMapper() {};
	MiqtVirtualQDataWidgetMapper(QObject* parent): QDataWidgetMapper(parent) {};

	virtual ~MiqtVirtualQDataWidgetMapper() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetCurrentIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual void setCurrentIndex(int index) override {
		if (handle__SetCurrentIndex == 0) {
			QDataWidgetMapper::setCurrentIndex(index);
			return;
		}
		
		int sigval1 = index;

		miqt_exec_callback_QDataWidgetMapper_SetCurrentIndex(this, handle__SetCurrentIndex, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetCurrentIndex(int index) {

		QDataWidgetMapper::setCurrentIndex(static_cast<int>(index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QDataWidgetMapper::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QDataWidgetMapper_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QDataWidgetMapper::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QDataWidgetMapper::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QDataWidgetMapper_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QDataWidgetMapper::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QDataWidgetMapper::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QDataWidgetMapper_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QDataWidgetMapper::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QDataWidgetMapper::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QDataWidgetMapper_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QDataWidgetMapper::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QDataWidgetMapper::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDataWidgetMapper_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QDataWidgetMapper::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QDataWidgetMapper::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDataWidgetMapper_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QDataWidgetMapper::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QDataWidgetMapper::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDataWidgetMapper_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QDataWidgetMapper::disconnectNotify(*signal);

	}

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

QMetaObject* QDataWidgetMapper_MetaObject(const QDataWidgetMapper* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDataWidgetMapper_Metacast(QDataWidgetMapper* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDataWidgetMapper_Tr(const char* s) {
	QString _ret = QDataWidgetMapper::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDataWidgetMapper_TrUtf8(const char* s) {
	QString _ret = QDataWidgetMapper::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDataWidgetMapper_SetModel(QDataWidgetMapper* self, QAbstractItemModel* model) {
	self->setModel(model);
}

QAbstractItemModel* QDataWidgetMapper_Model(const QDataWidgetMapper* self) {
	return self->model();
}

void QDataWidgetMapper_SetItemDelegate(QDataWidgetMapper* self, QAbstractItemDelegate* delegate) {
	self->setItemDelegate(delegate);
}

QAbstractItemDelegate* QDataWidgetMapper_ItemDelegate(const QDataWidgetMapper* self) {
	return self->itemDelegate();
}

void QDataWidgetMapper_SetRootIndex(QDataWidgetMapper* self, QModelIndex* index) {
	self->setRootIndex(*index);
}

QModelIndex* QDataWidgetMapper_RootIndex(const QDataWidgetMapper* self) {
	return new QModelIndex(self->rootIndex());
}

void QDataWidgetMapper_SetOrientation(QDataWidgetMapper* self, int aOrientation) {
	self->setOrientation(static_cast<Qt::Orientation>(aOrientation));
}

int QDataWidgetMapper_Orientation(const QDataWidgetMapper* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QDataWidgetMapper_SetSubmitPolicy(QDataWidgetMapper* self, int policy) {
	self->setSubmitPolicy(static_cast<QDataWidgetMapper::SubmitPolicy>(policy));
}

int QDataWidgetMapper_SubmitPolicy(const QDataWidgetMapper* self) {
	QDataWidgetMapper::SubmitPolicy _ret = self->submitPolicy();
	return static_cast<int>(_ret);
}

void QDataWidgetMapper_AddMapping(QDataWidgetMapper* self, QWidget* widget, int section) {
	self->addMapping(widget, static_cast<int>(section));
}

void QDataWidgetMapper_AddMapping2(QDataWidgetMapper* self, QWidget* widget, int section, struct miqt_string propertyName) {
	QByteArray propertyName_QByteArray(propertyName.data, propertyName.len);
	self->addMapping(widget, static_cast<int>(section), propertyName_QByteArray);
}

void QDataWidgetMapper_RemoveMapping(QDataWidgetMapper* self, QWidget* widget) {
	self->removeMapping(widget);
}

int QDataWidgetMapper_MappedSection(const QDataWidgetMapper* self, QWidget* widget) {
	return self->mappedSection(widget);
}

struct miqt_string QDataWidgetMapper_MappedPropertyName(const QDataWidgetMapper* self, QWidget* widget) {
	QByteArray _qb = self->mappedPropertyName(widget);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QWidget* QDataWidgetMapper_MappedWidgetAt(const QDataWidgetMapper* self, int section) {
	return self->mappedWidgetAt(static_cast<int>(section));
}

void QDataWidgetMapper_ClearMapping(QDataWidgetMapper* self) {
	self->clearMapping();
}

int QDataWidgetMapper_CurrentIndex(const QDataWidgetMapper* self) {
	return self->currentIndex();
}

void QDataWidgetMapper_Revert(QDataWidgetMapper* self) {
	self->revert();
}

bool QDataWidgetMapper_Submit(QDataWidgetMapper* self) {
	return self->submit();
}

void QDataWidgetMapper_ToFirst(QDataWidgetMapper* self) {
	self->toFirst();
}

void QDataWidgetMapper_ToLast(QDataWidgetMapper* self) {
	self->toLast();
}

void QDataWidgetMapper_ToNext(QDataWidgetMapper* self) {
	self->toNext();
}

void QDataWidgetMapper_ToPrevious(QDataWidgetMapper* self) {
	self->toPrevious();
}

void QDataWidgetMapper_SetCurrentIndex(QDataWidgetMapper* self, int index) {
	self->setCurrentIndex(static_cast<int>(index));
}

void QDataWidgetMapper_SetCurrentModelIndex(QDataWidgetMapper* self, QModelIndex* index) {
	self->setCurrentModelIndex(*index);
}

void QDataWidgetMapper_CurrentIndexChanged(QDataWidgetMapper* self, int index) {
	self->currentIndexChanged(static_cast<int>(index));
}

void QDataWidgetMapper_connect_CurrentIndexChanged(QDataWidgetMapper* self, intptr_t slot) {
	MiqtVirtualQDataWidgetMapper::connect(self, static_cast<void (QDataWidgetMapper::*)(int)>(&QDataWidgetMapper::currentIndexChanged), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QDataWidgetMapper_CurrentIndexChanged(slot, sigval1);
	});
}

struct miqt_string QDataWidgetMapper_Tr2(const char* s, const char* c) {
	QString _ret = QDataWidgetMapper::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDataWidgetMapper_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDataWidgetMapper::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDataWidgetMapper_TrUtf82(const char* s, const char* c) {
	QString _ret = QDataWidgetMapper::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDataWidgetMapper_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QDataWidgetMapper::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDataWidgetMapper_override_virtual_SetCurrentIndex(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDataWidgetMapper*>( (QDataWidgetMapper*)(self) )->handle__SetCurrentIndex = slot;
}

void QDataWidgetMapper_virtualbase_SetCurrentIndex(void* self, int index) {
	( (MiqtVirtualQDataWidgetMapper*)(self) )->virtualbase_SetCurrentIndex(index);
}

void QDataWidgetMapper_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDataWidgetMapper*>( (QDataWidgetMapper*)(self) )->handle__Event = slot;
}

bool QDataWidgetMapper_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQDataWidgetMapper*)(self) )->virtualbase_Event(event);
}

void QDataWidgetMapper_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDataWidgetMapper*>( (QDataWidgetMapper*)(self) )->handle__EventFilter = slot;
}

bool QDataWidgetMapper_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQDataWidgetMapper*)(self) )->virtualbase_EventFilter(watched, event);
}

void QDataWidgetMapper_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDataWidgetMapper*>( (QDataWidgetMapper*)(self) )->handle__TimerEvent = slot;
}

void QDataWidgetMapper_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQDataWidgetMapper*)(self) )->virtualbase_TimerEvent(event);
}

void QDataWidgetMapper_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDataWidgetMapper*>( (QDataWidgetMapper*)(self) )->handle__ChildEvent = slot;
}

void QDataWidgetMapper_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQDataWidgetMapper*)(self) )->virtualbase_ChildEvent(event);
}

void QDataWidgetMapper_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDataWidgetMapper*>( (QDataWidgetMapper*)(self) )->handle__CustomEvent = slot;
}

void QDataWidgetMapper_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDataWidgetMapper*)(self) )->virtualbase_CustomEvent(event);
}

void QDataWidgetMapper_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDataWidgetMapper*>( (QDataWidgetMapper*)(self) )->handle__ConnectNotify = slot;
}

void QDataWidgetMapper_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDataWidgetMapper*)(self) )->virtualbase_ConnectNotify(signal);
}

void QDataWidgetMapper_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDataWidgetMapper*>( (QDataWidgetMapper*)(self) )->handle__DisconnectNotify = slot;
}

void QDataWidgetMapper_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDataWidgetMapper*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QDataWidgetMapper_Delete(QDataWidgetMapper* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQDataWidgetMapper*>( self );
	} else {
		delete self;
	}
}

