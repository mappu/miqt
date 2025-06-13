#include <QAbstractBarSeries>
#include <QAbstractItemModel>
#include <QBarModelMapper>
#include <QChildEvent>
#include <QEvent>
#include <QHBarModelMapper>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qhbarmodelmapper.h>
#include "gen_qhbarmodelmapper.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QHBarModelMapper_seriesReplaced(intptr_t);
void miqt_exec_callback_QHBarModelMapper_modelReplaced(intptr_t);
void miqt_exec_callback_QHBarModelMapper_firstBarSetRowChanged(intptr_t);
void miqt_exec_callback_QHBarModelMapper_lastBarSetRowChanged(intptr_t);
void miqt_exec_callback_QHBarModelMapper_firstColumnChanged(intptr_t);
void miqt_exec_callback_QHBarModelMapper_columnCountChanged(intptr_t);
bool miqt_exec_callback_QHBarModelMapper_event(QHBarModelMapper*, intptr_t, QEvent*);
bool miqt_exec_callback_QHBarModelMapper_eventFilter(QHBarModelMapper*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QHBarModelMapper_timerEvent(QHBarModelMapper*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QHBarModelMapper_childEvent(QHBarModelMapper*, intptr_t, QChildEvent*);
void miqt_exec_callback_QHBarModelMapper_customEvent(QHBarModelMapper*, intptr_t, QEvent*);
void miqt_exec_callback_QHBarModelMapper_connectNotify(QHBarModelMapper*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QHBarModelMapper_disconnectNotify(QHBarModelMapper*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQHBarModelMapper final : public QHBarModelMapper {
public:

	MiqtVirtualQHBarModelMapper(): QHBarModelMapper() {}
	MiqtVirtualQHBarModelMapper(QObject* parent): QHBarModelMapper(parent) {}

	virtual ~MiqtVirtualQHBarModelMapper() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QHBarModelMapper::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QHBarModelMapper_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QHBarModelMapper_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QHBarModelMapper::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QHBarModelMapper_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QHBarModelMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QHBarModelMapper::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QHBarModelMapper_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QHBarModelMapper_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QHBarModelMapper::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QHBarModelMapper_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QHBarModelMapper_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QHBarModelMapper::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QHBarModelMapper_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QHBarModelMapper_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QHBarModelMapper::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QHBarModelMapper_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QHBarModelMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QHBarModelMapper::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QHBarModelMapper_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QHBarModelMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend int QHBarModelMapper_protectedbase_first(bool* _dynamic_cast_ok, const void* self);
	friend void QHBarModelMapper_protectedbase_setFirst(bool* _dynamic_cast_ok, void* self, int first);
	friend int QHBarModelMapper_protectedbase_count(bool* _dynamic_cast_ok, const void* self);
	friend void QHBarModelMapper_protectedbase_setCount(bool* _dynamic_cast_ok, void* self, int count);
	friend int QHBarModelMapper_protectedbase_firstBarSetSection(bool* _dynamic_cast_ok, const void* self);
	friend void QHBarModelMapper_protectedbase_setFirstBarSetSection(bool* _dynamic_cast_ok, void* self, int firstBarSetSection);
	friend int QHBarModelMapper_protectedbase_lastBarSetSection(bool* _dynamic_cast_ok, const void* self);
	friend void QHBarModelMapper_protectedbase_setLastBarSetSection(bool* _dynamic_cast_ok, void* self, int lastBarSetSection);
	friend int QHBarModelMapper_protectedbase_orientation(bool* _dynamic_cast_ok, const void* self);
	friend void QHBarModelMapper_protectedbase_setOrientation(bool* _dynamic_cast_ok, void* self, int orientation);
	friend QObject* QHBarModelMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QHBarModelMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QHBarModelMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QHBarModelMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QHBarModelMapper* QHBarModelMapper_new() {
	return new (std::nothrow) MiqtVirtualQHBarModelMapper();
}

QHBarModelMapper* QHBarModelMapper_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQHBarModelMapper(parent);
}

void QHBarModelMapper_virtbase(QHBarModelMapper* src, QBarModelMapper** outptr_QBarModelMapper) {
	*outptr_QBarModelMapper = static_cast<QBarModelMapper*>(src);
}

QMetaObject* QHBarModelMapper_metaObject(const QHBarModelMapper* self) {
	return (QMetaObject*) self->metaObject();
}

void* QHBarModelMapper_metacast(QHBarModelMapper* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QHBarModelMapper_tr(const char* s) {
	QString _ret = QHBarModelMapper::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAbstractItemModel* QHBarModelMapper_model(const QHBarModelMapper* self) {
	return self->model();
}

void QHBarModelMapper_setModel(QHBarModelMapper* self, QAbstractItemModel* model) {
	self->setModel(model);
}

QAbstractBarSeries* QHBarModelMapper_series(const QHBarModelMapper* self) {
	return self->series();
}

void QHBarModelMapper_setSeries(QHBarModelMapper* self, QAbstractBarSeries* series) {
	self->setSeries(series);
}

int QHBarModelMapper_firstBarSetRow(const QHBarModelMapper* self) {
	return self->firstBarSetRow();
}

void QHBarModelMapper_setFirstBarSetRow(QHBarModelMapper* self, int firstBarSetRow) {
	self->setFirstBarSetRow(static_cast<int>(firstBarSetRow));
}

int QHBarModelMapper_lastBarSetRow(const QHBarModelMapper* self) {
	return self->lastBarSetRow();
}

void QHBarModelMapper_setLastBarSetRow(QHBarModelMapper* self, int lastBarSetRow) {
	self->setLastBarSetRow(static_cast<int>(lastBarSetRow));
}

int QHBarModelMapper_firstColumn(const QHBarModelMapper* self) {
	return self->firstColumn();
}

void QHBarModelMapper_setFirstColumn(QHBarModelMapper* self, int firstColumn) {
	self->setFirstColumn(static_cast<int>(firstColumn));
}

int QHBarModelMapper_columnCount(const QHBarModelMapper* self) {
	return self->columnCount();
}

void QHBarModelMapper_setColumnCount(QHBarModelMapper* self, int columnCount) {
	self->setColumnCount(static_cast<int>(columnCount));
}

void QHBarModelMapper_seriesReplaced(QHBarModelMapper* self) {
	self->seriesReplaced();
}

void QHBarModelMapper_connect_seriesReplaced(QHBarModelMapper* self, intptr_t slot) {
	QHBarModelMapper::connect(self, static_cast<void (QHBarModelMapper::*)()>(&QHBarModelMapper::seriesReplaced), self, [=]() {
		miqt_exec_callback_QHBarModelMapper_seriesReplaced(slot);
	});
}

void QHBarModelMapper_modelReplaced(QHBarModelMapper* self) {
	self->modelReplaced();
}

void QHBarModelMapper_connect_modelReplaced(QHBarModelMapper* self, intptr_t slot) {
	QHBarModelMapper::connect(self, static_cast<void (QHBarModelMapper::*)()>(&QHBarModelMapper::modelReplaced), self, [=]() {
		miqt_exec_callback_QHBarModelMapper_modelReplaced(slot);
	});
}

void QHBarModelMapper_firstBarSetRowChanged(QHBarModelMapper* self) {
	self->firstBarSetRowChanged();
}

void QHBarModelMapper_connect_firstBarSetRowChanged(QHBarModelMapper* self, intptr_t slot) {
	QHBarModelMapper::connect(self, static_cast<void (QHBarModelMapper::*)()>(&QHBarModelMapper::firstBarSetRowChanged), self, [=]() {
		miqt_exec_callback_QHBarModelMapper_firstBarSetRowChanged(slot);
	});
}

void QHBarModelMapper_lastBarSetRowChanged(QHBarModelMapper* self) {
	self->lastBarSetRowChanged();
}

void QHBarModelMapper_connect_lastBarSetRowChanged(QHBarModelMapper* self, intptr_t slot) {
	QHBarModelMapper::connect(self, static_cast<void (QHBarModelMapper::*)()>(&QHBarModelMapper::lastBarSetRowChanged), self, [=]() {
		miqt_exec_callback_QHBarModelMapper_lastBarSetRowChanged(slot);
	});
}

void QHBarModelMapper_firstColumnChanged(QHBarModelMapper* self) {
	self->firstColumnChanged();
}

void QHBarModelMapper_connect_firstColumnChanged(QHBarModelMapper* self, intptr_t slot) {
	QHBarModelMapper::connect(self, static_cast<void (QHBarModelMapper::*)()>(&QHBarModelMapper::firstColumnChanged), self, [=]() {
		miqt_exec_callback_QHBarModelMapper_firstColumnChanged(slot);
	});
}

void QHBarModelMapper_columnCountChanged(QHBarModelMapper* self) {
	self->columnCountChanged();
}

void QHBarModelMapper_connect_columnCountChanged(QHBarModelMapper* self, intptr_t slot) {
	QHBarModelMapper::connect(self, static_cast<void (QHBarModelMapper::*)()>(&QHBarModelMapper::columnCountChanged), self, [=]() {
		miqt_exec_callback_QHBarModelMapper_columnCountChanged(slot);
	});
}

struct miqt_string QHBarModelMapper_tr2(const char* s, const char* c) {
	QString _ret = QHBarModelMapper::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHBarModelMapper_tr3(const char* s, const char* c, int n) {
	QString _ret = QHBarModelMapper::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QHBarModelMapper_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQHBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBarModelMapper*>( (QHBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QHBarModelMapper_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQHBarModelMapper*>(self)->QHBarModelMapper::event(event);
}

bool QHBarModelMapper_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQHBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBarModelMapper*>( (QHBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QHBarModelMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQHBarModelMapper*>(self)->QHBarModelMapper::eventFilter(watched, event);
}

bool QHBarModelMapper_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQHBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBarModelMapper*>( (QHBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QHBarModelMapper_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQHBarModelMapper*>(self)->QHBarModelMapper::timerEvent(event);
}

bool QHBarModelMapper_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQHBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBarModelMapper*>( (QHBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QHBarModelMapper_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQHBarModelMapper*>(self)->QHBarModelMapper::childEvent(event);
}

bool QHBarModelMapper_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQHBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBarModelMapper*>( (QHBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QHBarModelMapper_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQHBarModelMapper*>(self)->QHBarModelMapper::customEvent(event);
}

bool QHBarModelMapper_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQHBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBarModelMapper*>( (QHBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QHBarModelMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQHBarModelMapper*>(self)->QHBarModelMapper::connectNotify(*signal);
}

bool QHBarModelMapper_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQHBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBarModelMapper*>( (QHBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QHBarModelMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQHBarModelMapper*>(self)->QHBarModelMapper::disconnectNotify(*signal);
}

int QHBarModelMapper_protectedbase_first(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBarModelMapper*>( (QHBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->first();
}

void QHBarModelMapper_protectedbase_setFirst(bool* _dynamic_cast_ok, void* self, int first) {
	MiqtVirtualQHBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBarModelMapper*>( (QHBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setFirst(static_cast<int>(first));
}

int QHBarModelMapper_protectedbase_count(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBarModelMapper*>( (QHBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->count();
}

void QHBarModelMapper_protectedbase_setCount(bool* _dynamic_cast_ok, void* self, int count) {
	MiqtVirtualQHBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBarModelMapper*>( (QHBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setCount(static_cast<int>(count));
}

int QHBarModelMapper_protectedbase_firstBarSetSection(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBarModelMapper*>( (QHBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->firstBarSetSection();
}

void QHBarModelMapper_protectedbase_setFirstBarSetSection(bool* _dynamic_cast_ok, void* self, int firstBarSetSection) {
	MiqtVirtualQHBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBarModelMapper*>( (QHBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setFirstBarSetSection(static_cast<int>(firstBarSetSection));
}

int QHBarModelMapper_protectedbase_lastBarSetSection(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBarModelMapper*>( (QHBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->lastBarSetSection();
}

void QHBarModelMapper_protectedbase_setLastBarSetSection(bool* _dynamic_cast_ok, void* self, int lastBarSetSection) {
	MiqtVirtualQHBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBarModelMapper*>( (QHBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setLastBarSetSection(static_cast<int>(lastBarSetSection));
}

int QHBarModelMapper_protectedbase_orientation(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBarModelMapper*>( (QHBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}

	*_dynamic_cast_ok = true;
	Qt::Orientation _ret = self_cast->orientation();
	return static_cast<int>(_ret);
}

void QHBarModelMapper_protectedbase_setOrientation(bool* _dynamic_cast_ok, void* self, int orientation) {
	MiqtVirtualQHBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBarModelMapper*>( (QHBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setOrientation(static_cast<Qt::Orientation>(orientation));
}

QObject* QHBarModelMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBarModelMapper*>( (QHBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QHBarModelMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBarModelMapper*>( (QHBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QHBarModelMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQHBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBarModelMapper*>( (QHBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QHBarModelMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQHBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBarModelMapper*>( (QHBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QHBarModelMapper_delete(QHBarModelMapper* self) {
	delete self;
}

