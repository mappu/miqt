#include <QAbstractItemModel>
#include <QChildEvent>
#include <QEvent>
#include <QHXYModelMapper>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QXYModelMapper>
#include <QXYSeries>
#include <qhxymodelmapper.h>
#include "gen_qhxymodelmapper.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QHXYModelMapper_seriesReplaced(intptr_t);
void miqt_exec_callback_QHXYModelMapper_modelReplaced(intptr_t);
void miqt_exec_callback_QHXYModelMapper_xRowChanged(intptr_t);
void miqt_exec_callback_QHXYModelMapper_yRowChanged(intptr_t);
void miqt_exec_callback_QHXYModelMapper_firstColumnChanged(intptr_t);
void miqt_exec_callback_QHXYModelMapper_columnCountChanged(intptr_t);
bool miqt_exec_callback_QHXYModelMapper_event(QHXYModelMapper*, intptr_t, QEvent*);
bool miqt_exec_callback_QHXYModelMapper_eventFilter(QHXYModelMapper*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QHXYModelMapper_timerEvent(QHXYModelMapper*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QHXYModelMapper_childEvent(QHXYModelMapper*, intptr_t, QChildEvent*);
void miqt_exec_callback_QHXYModelMapper_customEvent(QHXYModelMapper*, intptr_t, QEvent*);
void miqt_exec_callback_QHXYModelMapper_connectNotify(QHXYModelMapper*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QHXYModelMapper_disconnectNotify(QHXYModelMapper*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQHXYModelMapper final : public QHXYModelMapper {
public:

	MiqtVirtualQHXYModelMapper(): QHXYModelMapper() {}
	MiqtVirtualQHXYModelMapper(QObject* parent): QHXYModelMapper(parent) {}

	virtual ~MiqtVirtualQHXYModelMapper() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QHXYModelMapper::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QHXYModelMapper_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QHXYModelMapper_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QHXYModelMapper::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QHXYModelMapper_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QHXYModelMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QHXYModelMapper::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QHXYModelMapper_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QHXYModelMapper_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QHXYModelMapper::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QHXYModelMapper_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QHXYModelMapper_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QHXYModelMapper::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QHXYModelMapper_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QHXYModelMapper_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QHXYModelMapper::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QHXYModelMapper_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QHXYModelMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QHXYModelMapper::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QHXYModelMapper_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QHXYModelMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend int QHXYModelMapper_protectedbase_first(bool* _dynamic_cast_ok, const void* self);
	friend void QHXYModelMapper_protectedbase_setFirst(bool* _dynamic_cast_ok, void* self, int first);
	friend int QHXYModelMapper_protectedbase_count(bool* _dynamic_cast_ok, const void* self);
	friend void QHXYModelMapper_protectedbase_setCount(bool* _dynamic_cast_ok, void* self, int count);
	friend int QHXYModelMapper_protectedbase_orientation(bool* _dynamic_cast_ok, const void* self);
	friend void QHXYModelMapper_protectedbase_setOrientation(bool* _dynamic_cast_ok, void* self, int orientation);
	friend int QHXYModelMapper_protectedbase_xSection(bool* _dynamic_cast_ok, const void* self);
	friend void QHXYModelMapper_protectedbase_setXSection(bool* _dynamic_cast_ok, void* self, int xSection);
	friend int QHXYModelMapper_protectedbase_ySection(bool* _dynamic_cast_ok, const void* self);
	friend void QHXYModelMapper_protectedbase_setYSection(bool* _dynamic_cast_ok, void* self, int ySection);
	friend QObject* QHXYModelMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QHXYModelMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QHXYModelMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QHXYModelMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QHXYModelMapper* QHXYModelMapper_new() {
	return new (std::nothrow) MiqtVirtualQHXYModelMapper();
}

QHXYModelMapper* QHXYModelMapper_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQHXYModelMapper(parent);
}

void QHXYModelMapper_virtbase(QHXYModelMapper* src, QXYModelMapper** outptr_QXYModelMapper) {
	*outptr_QXYModelMapper = static_cast<QXYModelMapper*>(src);
}

QMetaObject* QHXYModelMapper_metaObject(const QHXYModelMapper* self) {
	return (QMetaObject*) self->metaObject();
}

void* QHXYModelMapper_metacast(QHXYModelMapper* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QHXYModelMapper_tr(const char* s) {
	QString _ret = QHXYModelMapper::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAbstractItemModel* QHXYModelMapper_model(const QHXYModelMapper* self) {
	return self->model();
}

void QHXYModelMapper_setModel(QHXYModelMapper* self, QAbstractItemModel* model) {
	self->setModel(model);
}

QXYSeries* QHXYModelMapper_series(const QHXYModelMapper* self) {
	return self->series();
}

void QHXYModelMapper_setSeries(QHXYModelMapper* self, QXYSeries* series) {
	self->setSeries(series);
}

int QHXYModelMapper_xRow(const QHXYModelMapper* self) {
	return self->xRow();
}

void QHXYModelMapper_setXRow(QHXYModelMapper* self, int xRow) {
	self->setXRow(static_cast<int>(xRow));
}

int QHXYModelMapper_yRow(const QHXYModelMapper* self) {
	return self->yRow();
}

void QHXYModelMapper_setYRow(QHXYModelMapper* self, int yRow) {
	self->setYRow(static_cast<int>(yRow));
}

int QHXYModelMapper_firstColumn(const QHXYModelMapper* self) {
	return self->firstColumn();
}

void QHXYModelMapper_setFirstColumn(QHXYModelMapper* self, int firstColumn) {
	self->setFirstColumn(static_cast<int>(firstColumn));
}

int QHXYModelMapper_columnCount(const QHXYModelMapper* self) {
	return self->columnCount();
}

void QHXYModelMapper_setColumnCount(QHXYModelMapper* self, int columnCount) {
	self->setColumnCount(static_cast<int>(columnCount));
}

void QHXYModelMapper_seriesReplaced(QHXYModelMapper* self) {
	self->seriesReplaced();
}

void QHXYModelMapper_connect_seriesReplaced(QHXYModelMapper* self, intptr_t slot) {
	QHXYModelMapper::connect(self, static_cast<void (QHXYModelMapper::*)()>(&QHXYModelMapper::seriesReplaced), self, [=]() {
		miqt_exec_callback_QHXYModelMapper_seriesReplaced(slot);
	});
}

void QHXYModelMapper_modelReplaced(QHXYModelMapper* self) {
	self->modelReplaced();
}

void QHXYModelMapper_connect_modelReplaced(QHXYModelMapper* self, intptr_t slot) {
	QHXYModelMapper::connect(self, static_cast<void (QHXYModelMapper::*)()>(&QHXYModelMapper::modelReplaced), self, [=]() {
		miqt_exec_callback_QHXYModelMapper_modelReplaced(slot);
	});
}

void QHXYModelMapper_xRowChanged(QHXYModelMapper* self) {
	self->xRowChanged();
}

void QHXYModelMapper_connect_xRowChanged(QHXYModelMapper* self, intptr_t slot) {
	QHXYModelMapper::connect(self, static_cast<void (QHXYModelMapper::*)()>(&QHXYModelMapper::xRowChanged), self, [=]() {
		miqt_exec_callback_QHXYModelMapper_xRowChanged(slot);
	});
}

void QHXYModelMapper_yRowChanged(QHXYModelMapper* self) {
	self->yRowChanged();
}

void QHXYModelMapper_connect_yRowChanged(QHXYModelMapper* self, intptr_t slot) {
	QHXYModelMapper::connect(self, static_cast<void (QHXYModelMapper::*)()>(&QHXYModelMapper::yRowChanged), self, [=]() {
		miqt_exec_callback_QHXYModelMapper_yRowChanged(slot);
	});
}

void QHXYModelMapper_firstColumnChanged(QHXYModelMapper* self) {
	self->firstColumnChanged();
}

void QHXYModelMapper_connect_firstColumnChanged(QHXYModelMapper* self, intptr_t slot) {
	QHXYModelMapper::connect(self, static_cast<void (QHXYModelMapper::*)()>(&QHXYModelMapper::firstColumnChanged), self, [=]() {
		miqt_exec_callback_QHXYModelMapper_firstColumnChanged(slot);
	});
}

void QHXYModelMapper_columnCountChanged(QHXYModelMapper* self) {
	self->columnCountChanged();
}

void QHXYModelMapper_connect_columnCountChanged(QHXYModelMapper* self, intptr_t slot) {
	QHXYModelMapper::connect(self, static_cast<void (QHXYModelMapper::*)()>(&QHXYModelMapper::columnCountChanged), self, [=]() {
		miqt_exec_callback_QHXYModelMapper_columnCountChanged(slot);
	});
}

struct miqt_string QHXYModelMapper_tr2(const char* s, const char* c) {
	QString _ret = QHXYModelMapper::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHXYModelMapper_tr3(const char* s, const char* c, int n) {
	QString _ret = QHXYModelMapper::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QHXYModelMapper_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQHXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQHXYModelMapper*>( (QHXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QHXYModelMapper_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQHXYModelMapper*>(self)->QHXYModelMapper::event(event);
}

bool QHXYModelMapper_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQHXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQHXYModelMapper*>( (QHXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QHXYModelMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQHXYModelMapper*>(self)->QHXYModelMapper::eventFilter(watched, event);
}

bool QHXYModelMapper_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQHXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQHXYModelMapper*>( (QHXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QHXYModelMapper_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQHXYModelMapper*>(self)->QHXYModelMapper::timerEvent(event);
}

bool QHXYModelMapper_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQHXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQHXYModelMapper*>( (QHXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QHXYModelMapper_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQHXYModelMapper*>(self)->QHXYModelMapper::childEvent(event);
}

bool QHXYModelMapper_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQHXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQHXYModelMapper*>( (QHXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QHXYModelMapper_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQHXYModelMapper*>(self)->QHXYModelMapper::customEvent(event);
}

bool QHXYModelMapper_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQHXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQHXYModelMapper*>( (QHXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QHXYModelMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQHXYModelMapper*>(self)->QHXYModelMapper::connectNotify(*signal);
}

bool QHXYModelMapper_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQHXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQHXYModelMapper*>( (QHXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QHXYModelMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQHXYModelMapper*>(self)->QHXYModelMapper::disconnectNotify(*signal);
}

int QHXYModelMapper_protectedbase_first(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQHXYModelMapper*>( (QHXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->first();
}

void QHXYModelMapper_protectedbase_setFirst(bool* _dynamic_cast_ok, void* self, int first) {
	MiqtVirtualQHXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQHXYModelMapper*>( (QHXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setFirst(static_cast<int>(first));
}

int QHXYModelMapper_protectedbase_count(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQHXYModelMapper*>( (QHXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->count();
}

void QHXYModelMapper_protectedbase_setCount(bool* _dynamic_cast_ok, void* self, int count) {
	MiqtVirtualQHXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQHXYModelMapper*>( (QHXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setCount(static_cast<int>(count));
}

int QHXYModelMapper_protectedbase_orientation(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQHXYModelMapper*>( (QHXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}

	*_dynamic_cast_ok = true;
	Qt::Orientation _ret = self_cast->orientation();
	return static_cast<int>(_ret);
}

void QHXYModelMapper_protectedbase_setOrientation(bool* _dynamic_cast_ok, void* self, int orientation) {
	MiqtVirtualQHXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQHXYModelMapper*>( (QHXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QHXYModelMapper_protectedbase_xSection(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQHXYModelMapper*>( (QHXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->xSection();
}

void QHXYModelMapper_protectedbase_setXSection(bool* _dynamic_cast_ok, void* self, int xSection) {
	MiqtVirtualQHXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQHXYModelMapper*>( (QHXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setXSection(static_cast<int>(xSection));
}

int QHXYModelMapper_protectedbase_ySection(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQHXYModelMapper*>( (QHXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->ySection();
}

void QHXYModelMapper_protectedbase_setYSection(bool* _dynamic_cast_ok, void* self, int ySection) {
	MiqtVirtualQHXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQHXYModelMapper*>( (QHXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setYSection(static_cast<int>(ySection));
}

QObject* QHXYModelMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQHXYModelMapper*>( (QHXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QHXYModelMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQHXYModelMapper*>( (QHXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QHXYModelMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQHXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQHXYModelMapper*>( (QHXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QHXYModelMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQHXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQHXYModelMapper*>( (QHXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QHXYModelMapper_delete(QHXYModelMapper* self) {
	delete self;
}

