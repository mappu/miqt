#include <QAbstractItemModel>
#include <QBoxPlotModelMapper>
#include <QBoxPlotSeries>
#include <QChildEvent>
#include <QEvent>
#include <QHBoxPlotModelMapper>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qhboxplotmodelmapper.h>
#include "gen_qhboxplotmodelmapper.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QHBoxPlotModelMapper_seriesReplaced(intptr_t);
void miqt_exec_callback_QHBoxPlotModelMapper_modelReplaced(intptr_t);
void miqt_exec_callback_QHBoxPlotModelMapper_firstBoxSetRowChanged(intptr_t);
void miqt_exec_callback_QHBoxPlotModelMapper_lastBoxSetRowChanged(intptr_t);
void miqt_exec_callback_QHBoxPlotModelMapper_firstColumnChanged(intptr_t);
void miqt_exec_callback_QHBoxPlotModelMapper_columnCountChanged(intptr_t);
bool miqt_exec_callback_QHBoxPlotModelMapper_event(QHBoxPlotModelMapper*, intptr_t, QEvent*);
bool miqt_exec_callback_QHBoxPlotModelMapper_eventFilter(QHBoxPlotModelMapper*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QHBoxPlotModelMapper_timerEvent(QHBoxPlotModelMapper*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QHBoxPlotModelMapper_childEvent(QHBoxPlotModelMapper*, intptr_t, QChildEvent*);
void miqt_exec_callback_QHBoxPlotModelMapper_customEvent(QHBoxPlotModelMapper*, intptr_t, QEvent*);
void miqt_exec_callback_QHBoxPlotModelMapper_connectNotify(QHBoxPlotModelMapper*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QHBoxPlotModelMapper_disconnectNotify(QHBoxPlotModelMapper*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQHBoxPlotModelMapper final : public QHBoxPlotModelMapper {
public:

	MiqtVirtualQHBoxPlotModelMapper(): QHBoxPlotModelMapper() {}
	MiqtVirtualQHBoxPlotModelMapper(QObject* parent): QHBoxPlotModelMapper(parent) {}

	virtual ~MiqtVirtualQHBoxPlotModelMapper() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QHBoxPlotModelMapper::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QHBoxPlotModelMapper_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QHBoxPlotModelMapper_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QHBoxPlotModelMapper::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QHBoxPlotModelMapper_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QHBoxPlotModelMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QHBoxPlotModelMapper::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QHBoxPlotModelMapper_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QHBoxPlotModelMapper_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QHBoxPlotModelMapper::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QHBoxPlotModelMapper_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QHBoxPlotModelMapper_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QHBoxPlotModelMapper::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QHBoxPlotModelMapper_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QHBoxPlotModelMapper_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QHBoxPlotModelMapper::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QHBoxPlotModelMapper_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QHBoxPlotModelMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QHBoxPlotModelMapper::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QHBoxPlotModelMapper_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QHBoxPlotModelMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend int QHBoxPlotModelMapper_protectedbase_first(bool* _dynamic_cast_ok, const void* self);
	friend void QHBoxPlotModelMapper_protectedbase_setFirst(bool* _dynamic_cast_ok, void* self, int first);
	friend int QHBoxPlotModelMapper_protectedbase_count(bool* _dynamic_cast_ok, const void* self);
	friend void QHBoxPlotModelMapper_protectedbase_setCount(bool* _dynamic_cast_ok, void* self, int count);
	friend int QHBoxPlotModelMapper_protectedbase_firstBoxSetSection(bool* _dynamic_cast_ok, const void* self);
	friend void QHBoxPlotModelMapper_protectedbase_setFirstBoxSetSection(bool* _dynamic_cast_ok, void* self, int firstBoxSetSection);
	friend int QHBoxPlotModelMapper_protectedbase_lastBoxSetSection(bool* _dynamic_cast_ok, const void* self);
	friend void QHBoxPlotModelMapper_protectedbase_setLastBoxSetSection(bool* _dynamic_cast_ok, void* self, int lastBoxSetSection);
	friend int QHBoxPlotModelMapper_protectedbase_orientation(bool* _dynamic_cast_ok, const void* self);
	friend void QHBoxPlotModelMapper_protectedbase_setOrientation(bool* _dynamic_cast_ok, void* self, int orientation);
	friend QObject* QHBoxPlotModelMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QHBoxPlotModelMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QHBoxPlotModelMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QHBoxPlotModelMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QHBoxPlotModelMapper* QHBoxPlotModelMapper_new() {
	return new (std::nothrow) MiqtVirtualQHBoxPlotModelMapper();
}

QHBoxPlotModelMapper* QHBoxPlotModelMapper_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQHBoxPlotModelMapper(parent);
}

void QHBoxPlotModelMapper_virtbase(QHBoxPlotModelMapper* src, QBoxPlotModelMapper** outptr_QBoxPlotModelMapper) {
	*outptr_QBoxPlotModelMapper = static_cast<QBoxPlotModelMapper*>(src);
}

QMetaObject* QHBoxPlotModelMapper_metaObject(const QHBoxPlotModelMapper* self) {
	return (QMetaObject*) self->metaObject();
}

void* QHBoxPlotModelMapper_metacast(QHBoxPlotModelMapper* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QHBoxPlotModelMapper_tr(const char* s) {
	QString _ret = QHBoxPlotModelMapper::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAbstractItemModel* QHBoxPlotModelMapper_model(const QHBoxPlotModelMapper* self) {
	return self->model();
}

void QHBoxPlotModelMapper_setModel(QHBoxPlotModelMapper* self, QAbstractItemModel* model) {
	self->setModel(model);
}

QBoxPlotSeries* QHBoxPlotModelMapper_series(const QHBoxPlotModelMapper* self) {
	return self->series();
}

void QHBoxPlotModelMapper_setSeries(QHBoxPlotModelMapper* self, QBoxPlotSeries* series) {
	self->setSeries(series);
}

int QHBoxPlotModelMapper_firstBoxSetRow(const QHBoxPlotModelMapper* self) {
	return self->firstBoxSetRow();
}

void QHBoxPlotModelMapper_setFirstBoxSetRow(QHBoxPlotModelMapper* self, int firstBoxSetRow) {
	self->setFirstBoxSetRow(static_cast<int>(firstBoxSetRow));
}

int QHBoxPlotModelMapper_lastBoxSetRow(const QHBoxPlotModelMapper* self) {
	return self->lastBoxSetRow();
}

void QHBoxPlotModelMapper_setLastBoxSetRow(QHBoxPlotModelMapper* self, int lastBoxSetRow) {
	self->setLastBoxSetRow(static_cast<int>(lastBoxSetRow));
}

int QHBoxPlotModelMapper_firstColumn(const QHBoxPlotModelMapper* self) {
	return self->firstColumn();
}

void QHBoxPlotModelMapper_setFirstColumn(QHBoxPlotModelMapper* self, int firstColumn) {
	self->setFirstColumn(static_cast<int>(firstColumn));
}

int QHBoxPlotModelMapper_columnCount(const QHBoxPlotModelMapper* self) {
	return self->columnCount();
}

void QHBoxPlotModelMapper_setColumnCount(QHBoxPlotModelMapper* self, int rowCount) {
	self->setColumnCount(static_cast<int>(rowCount));
}

void QHBoxPlotModelMapper_seriesReplaced(QHBoxPlotModelMapper* self) {
	self->seriesReplaced();
}

void QHBoxPlotModelMapper_connect_seriesReplaced(QHBoxPlotModelMapper* self, intptr_t slot) {
	QHBoxPlotModelMapper::connect(self, static_cast<void (QHBoxPlotModelMapper::*)()>(&QHBoxPlotModelMapper::seriesReplaced), self, [=]() {
		miqt_exec_callback_QHBoxPlotModelMapper_seriesReplaced(slot);
	});
}

void QHBoxPlotModelMapper_modelReplaced(QHBoxPlotModelMapper* self) {
	self->modelReplaced();
}

void QHBoxPlotModelMapper_connect_modelReplaced(QHBoxPlotModelMapper* self, intptr_t slot) {
	QHBoxPlotModelMapper::connect(self, static_cast<void (QHBoxPlotModelMapper::*)()>(&QHBoxPlotModelMapper::modelReplaced), self, [=]() {
		miqt_exec_callback_QHBoxPlotModelMapper_modelReplaced(slot);
	});
}

void QHBoxPlotModelMapper_firstBoxSetRowChanged(QHBoxPlotModelMapper* self) {
	self->firstBoxSetRowChanged();
}

void QHBoxPlotModelMapper_connect_firstBoxSetRowChanged(QHBoxPlotModelMapper* self, intptr_t slot) {
	QHBoxPlotModelMapper::connect(self, static_cast<void (QHBoxPlotModelMapper::*)()>(&QHBoxPlotModelMapper::firstBoxSetRowChanged), self, [=]() {
		miqt_exec_callback_QHBoxPlotModelMapper_firstBoxSetRowChanged(slot);
	});
}

void QHBoxPlotModelMapper_lastBoxSetRowChanged(QHBoxPlotModelMapper* self) {
	self->lastBoxSetRowChanged();
}

void QHBoxPlotModelMapper_connect_lastBoxSetRowChanged(QHBoxPlotModelMapper* self, intptr_t slot) {
	QHBoxPlotModelMapper::connect(self, static_cast<void (QHBoxPlotModelMapper::*)()>(&QHBoxPlotModelMapper::lastBoxSetRowChanged), self, [=]() {
		miqt_exec_callback_QHBoxPlotModelMapper_lastBoxSetRowChanged(slot);
	});
}

void QHBoxPlotModelMapper_firstColumnChanged(QHBoxPlotModelMapper* self) {
	self->firstColumnChanged();
}

void QHBoxPlotModelMapper_connect_firstColumnChanged(QHBoxPlotModelMapper* self, intptr_t slot) {
	QHBoxPlotModelMapper::connect(self, static_cast<void (QHBoxPlotModelMapper::*)()>(&QHBoxPlotModelMapper::firstColumnChanged), self, [=]() {
		miqt_exec_callback_QHBoxPlotModelMapper_firstColumnChanged(slot);
	});
}

void QHBoxPlotModelMapper_columnCountChanged(QHBoxPlotModelMapper* self) {
	self->columnCountChanged();
}

void QHBoxPlotModelMapper_connect_columnCountChanged(QHBoxPlotModelMapper* self, intptr_t slot) {
	QHBoxPlotModelMapper::connect(self, static_cast<void (QHBoxPlotModelMapper::*)()>(&QHBoxPlotModelMapper::columnCountChanged), self, [=]() {
		miqt_exec_callback_QHBoxPlotModelMapper_columnCountChanged(slot);
	});
}

struct miqt_string QHBoxPlotModelMapper_tr2(const char* s, const char* c) {
	QString _ret = QHBoxPlotModelMapper::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHBoxPlotModelMapper_tr3(const char* s, const char* c, int n) {
	QString _ret = QHBoxPlotModelMapper::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QHBoxPlotModelMapper_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQHBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBoxPlotModelMapper*>( (QHBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QHBoxPlotModelMapper_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQHBoxPlotModelMapper*>(self)->QHBoxPlotModelMapper::event(event);
}

bool QHBoxPlotModelMapper_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQHBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBoxPlotModelMapper*>( (QHBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QHBoxPlotModelMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQHBoxPlotModelMapper*>(self)->QHBoxPlotModelMapper::eventFilter(watched, event);
}

bool QHBoxPlotModelMapper_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQHBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBoxPlotModelMapper*>( (QHBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QHBoxPlotModelMapper_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQHBoxPlotModelMapper*>(self)->QHBoxPlotModelMapper::timerEvent(event);
}

bool QHBoxPlotModelMapper_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQHBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBoxPlotModelMapper*>( (QHBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QHBoxPlotModelMapper_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQHBoxPlotModelMapper*>(self)->QHBoxPlotModelMapper::childEvent(event);
}

bool QHBoxPlotModelMapper_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQHBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBoxPlotModelMapper*>( (QHBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QHBoxPlotModelMapper_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQHBoxPlotModelMapper*>(self)->QHBoxPlotModelMapper::customEvent(event);
}

bool QHBoxPlotModelMapper_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQHBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBoxPlotModelMapper*>( (QHBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QHBoxPlotModelMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQHBoxPlotModelMapper*>(self)->QHBoxPlotModelMapper::connectNotify(*signal);
}

bool QHBoxPlotModelMapper_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQHBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBoxPlotModelMapper*>( (QHBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QHBoxPlotModelMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQHBoxPlotModelMapper*>(self)->QHBoxPlotModelMapper::disconnectNotify(*signal);
}

int QHBoxPlotModelMapper_protectedbase_first(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBoxPlotModelMapper*>( (QHBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->first();
}

void QHBoxPlotModelMapper_protectedbase_setFirst(bool* _dynamic_cast_ok, void* self, int first) {
	MiqtVirtualQHBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBoxPlotModelMapper*>( (QHBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setFirst(static_cast<int>(first));
}

int QHBoxPlotModelMapper_protectedbase_count(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBoxPlotModelMapper*>( (QHBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->count();
}

void QHBoxPlotModelMapper_protectedbase_setCount(bool* _dynamic_cast_ok, void* self, int count) {
	MiqtVirtualQHBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBoxPlotModelMapper*>( (QHBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setCount(static_cast<int>(count));
}

int QHBoxPlotModelMapper_protectedbase_firstBoxSetSection(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBoxPlotModelMapper*>( (QHBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->firstBoxSetSection();
}

void QHBoxPlotModelMapper_protectedbase_setFirstBoxSetSection(bool* _dynamic_cast_ok, void* self, int firstBoxSetSection) {
	MiqtVirtualQHBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBoxPlotModelMapper*>( (QHBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setFirstBoxSetSection(static_cast<int>(firstBoxSetSection));
}

int QHBoxPlotModelMapper_protectedbase_lastBoxSetSection(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBoxPlotModelMapper*>( (QHBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->lastBoxSetSection();
}

void QHBoxPlotModelMapper_protectedbase_setLastBoxSetSection(bool* _dynamic_cast_ok, void* self, int lastBoxSetSection) {
	MiqtVirtualQHBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBoxPlotModelMapper*>( (QHBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setLastBoxSetSection(static_cast<int>(lastBoxSetSection));
}

int QHBoxPlotModelMapper_protectedbase_orientation(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBoxPlotModelMapper*>( (QHBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}

	*_dynamic_cast_ok = true;
	Qt::Orientation _ret = self_cast->orientation();
	return static_cast<int>(_ret);
}

void QHBoxPlotModelMapper_protectedbase_setOrientation(bool* _dynamic_cast_ok, void* self, int orientation) {
	MiqtVirtualQHBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBoxPlotModelMapper*>( (QHBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setOrientation(static_cast<Qt::Orientation>(orientation));
}

QObject* QHBoxPlotModelMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBoxPlotModelMapper*>( (QHBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QHBoxPlotModelMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBoxPlotModelMapper*>( (QHBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QHBoxPlotModelMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQHBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBoxPlotModelMapper*>( (QHBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QHBoxPlotModelMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQHBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQHBoxPlotModelMapper*>( (QHBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QHBoxPlotModelMapper_delete(QHBoxPlotModelMapper* self) {
	delete self;
}

