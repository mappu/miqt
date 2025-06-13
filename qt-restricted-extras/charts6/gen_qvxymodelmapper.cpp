#include <QAbstractItemModel>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVXYModelMapper>
#include <QXYModelMapper>
#include <QXYSeries>
#include <qvxymodelmapper.h>
#include "gen_qvxymodelmapper.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QVXYModelMapper_seriesReplaced(intptr_t);
void miqt_exec_callback_QVXYModelMapper_modelReplaced(intptr_t);
void miqt_exec_callback_QVXYModelMapper_xColumnChanged(intptr_t);
void miqt_exec_callback_QVXYModelMapper_yColumnChanged(intptr_t);
void miqt_exec_callback_QVXYModelMapper_firstRowChanged(intptr_t);
void miqt_exec_callback_QVXYModelMapper_rowCountChanged(intptr_t);
bool miqt_exec_callback_QVXYModelMapper_event(QVXYModelMapper*, intptr_t, QEvent*);
bool miqt_exec_callback_QVXYModelMapper_eventFilter(QVXYModelMapper*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QVXYModelMapper_timerEvent(QVXYModelMapper*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QVXYModelMapper_childEvent(QVXYModelMapper*, intptr_t, QChildEvent*);
void miqt_exec_callback_QVXYModelMapper_customEvent(QVXYModelMapper*, intptr_t, QEvent*);
void miqt_exec_callback_QVXYModelMapper_connectNotify(QVXYModelMapper*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QVXYModelMapper_disconnectNotify(QVXYModelMapper*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQVXYModelMapper final : public QVXYModelMapper {
public:

	MiqtVirtualQVXYModelMapper(): QVXYModelMapper() {}
	MiqtVirtualQVXYModelMapper(QObject* parent): QVXYModelMapper(parent) {}

	virtual ~MiqtVirtualQVXYModelMapper() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QVXYModelMapper::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QVXYModelMapper_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QVXYModelMapper_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QVXYModelMapper::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QVXYModelMapper_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QVXYModelMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QVXYModelMapper::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QVXYModelMapper_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QVXYModelMapper_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QVXYModelMapper::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QVXYModelMapper_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QVXYModelMapper_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QVXYModelMapper::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QVXYModelMapper_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QVXYModelMapper_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QVXYModelMapper::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QVXYModelMapper_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QVXYModelMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QVXYModelMapper::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QVXYModelMapper_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QVXYModelMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend int QVXYModelMapper_protectedbase_first(bool* _dynamic_cast_ok, const void* self);
	friend void QVXYModelMapper_protectedbase_setFirst(bool* _dynamic_cast_ok, void* self, int first);
	friend int QVXYModelMapper_protectedbase_count(bool* _dynamic_cast_ok, const void* self);
	friend void QVXYModelMapper_protectedbase_setCount(bool* _dynamic_cast_ok, void* self, int count);
	friend int QVXYModelMapper_protectedbase_orientation(bool* _dynamic_cast_ok, const void* self);
	friend void QVXYModelMapper_protectedbase_setOrientation(bool* _dynamic_cast_ok, void* self, int orientation);
	friend int QVXYModelMapper_protectedbase_xSection(bool* _dynamic_cast_ok, const void* self);
	friend void QVXYModelMapper_protectedbase_setXSection(bool* _dynamic_cast_ok, void* self, int xSection);
	friend int QVXYModelMapper_protectedbase_ySection(bool* _dynamic_cast_ok, const void* self);
	friend void QVXYModelMapper_protectedbase_setYSection(bool* _dynamic_cast_ok, void* self, int ySection);
	friend QObject* QVXYModelMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QVXYModelMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QVXYModelMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QVXYModelMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QVXYModelMapper* QVXYModelMapper_new() {
	return new (std::nothrow) MiqtVirtualQVXYModelMapper();
}

QVXYModelMapper* QVXYModelMapper_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQVXYModelMapper(parent);
}

void QVXYModelMapper_virtbase(QVXYModelMapper* src, QXYModelMapper** outptr_QXYModelMapper) {
	*outptr_QXYModelMapper = static_cast<QXYModelMapper*>(src);
}

QMetaObject* QVXYModelMapper_metaObject(const QVXYModelMapper* self) {
	return (QMetaObject*) self->metaObject();
}

void* QVXYModelMapper_metacast(QVXYModelMapper* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QVXYModelMapper_tr(const char* s) {
	QString _ret = QVXYModelMapper::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAbstractItemModel* QVXYModelMapper_model(const QVXYModelMapper* self) {
	return self->model();
}

void QVXYModelMapper_setModel(QVXYModelMapper* self, QAbstractItemModel* model) {
	self->setModel(model);
}

QXYSeries* QVXYModelMapper_series(const QVXYModelMapper* self) {
	return self->series();
}

void QVXYModelMapper_setSeries(QVXYModelMapper* self, QXYSeries* series) {
	self->setSeries(series);
}

int QVXYModelMapper_xColumn(const QVXYModelMapper* self) {
	return self->xColumn();
}

void QVXYModelMapper_setXColumn(QVXYModelMapper* self, int xColumn) {
	self->setXColumn(static_cast<int>(xColumn));
}

int QVXYModelMapper_yColumn(const QVXYModelMapper* self) {
	return self->yColumn();
}

void QVXYModelMapper_setYColumn(QVXYModelMapper* self, int yColumn) {
	self->setYColumn(static_cast<int>(yColumn));
}

int QVXYModelMapper_firstRow(const QVXYModelMapper* self) {
	return self->firstRow();
}

void QVXYModelMapper_setFirstRow(QVXYModelMapper* self, int firstRow) {
	self->setFirstRow(static_cast<int>(firstRow));
}

int QVXYModelMapper_rowCount(const QVXYModelMapper* self) {
	return self->rowCount();
}

void QVXYModelMapper_setRowCount(QVXYModelMapper* self, int rowCount) {
	self->setRowCount(static_cast<int>(rowCount));
}

void QVXYModelMapper_seriesReplaced(QVXYModelMapper* self) {
	self->seriesReplaced();
}

void QVXYModelMapper_connect_seriesReplaced(QVXYModelMapper* self, intptr_t slot) {
	QVXYModelMapper::connect(self, static_cast<void (QVXYModelMapper::*)()>(&QVXYModelMapper::seriesReplaced), self, [=]() {
		miqt_exec_callback_QVXYModelMapper_seriesReplaced(slot);
	});
}

void QVXYModelMapper_modelReplaced(QVXYModelMapper* self) {
	self->modelReplaced();
}

void QVXYModelMapper_connect_modelReplaced(QVXYModelMapper* self, intptr_t slot) {
	QVXYModelMapper::connect(self, static_cast<void (QVXYModelMapper::*)()>(&QVXYModelMapper::modelReplaced), self, [=]() {
		miqt_exec_callback_QVXYModelMapper_modelReplaced(slot);
	});
}

void QVXYModelMapper_xColumnChanged(QVXYModelMapper* self) {
	self->xColumnChanged();
}

void QVXYModelMapper_connect_xColumnChanged(QVXYModelMapper* self, intptr_t slot) {
	QVXYModelMapper::connect(self, static_cast<void (QVXYModelMapper::*)()>(&QVXYModelMapper::xColumnChanged), self, [=]() {
		miqt_exec_callback_QVXYModelMapper_xColumnChanged(slot);
	});
}

void QVXYModelMapper_yColumnChanged(QVXYModelMapper* self) {
	self->yColumnChanged();
}

void QVXYModelMapper_connect_yColumnChanged(QVXYModelMapper* self, intptr_t slot) {
	QVXYModelMapper::connect(self, static_cast<void (QVXYModelMapper::*)()>(&QVXYModelMapper::yColumnChanged), self, [=]() {
		miqt_exec_callback_QVXYModelMapper_yColumnChanged(slot);
	});
}

void QVXYModelMapper_firstRowChanged(QVXYModelMapper* self) {
	self->firstRowChanged();
}

void QVXYModelMapper_connect_firstRowChanged(QVXYModelMapper* self, intptr_t slot) {
	QVXYModelMapper::connect(self, static_cast<void (QVXYModelMapper::*)()>(&QVXYModelMapper::firstRowChanged), self, [=]() {
		miqt_exec_callback_QVXYModelMapper_firstRowChanged(slot);
	});
}

void QVXYModelMapper_rowCountChanged(QVXYModelMapper* self) {
	self->rowCountChanged();
}

void QVXYModelMapper_connect_rowCountChanged(QVXYModelMapper* self, intptr_t slot) {
	QVXYModelMapper::connect(self, static_cast<void (QVXYModelMapper::*)()>(&QVXYModelMapper::rowCountChanged), self, [=]() {
		miqt_exec_callback_QVXYModelMapper_rowCountChanged(slot);
	});
}

struct miqt_string QVXYModelMapper_tr2(const char* s, const char* c) {
	QString _ret = QVXYModelMapper::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVXYModelMapper_tr3(const char* s, const char* c, int n) {
	QString _ret = QVXYModelMapper::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QVXYModelMapper_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQVXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQVXYModelMapper*>( (QVXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QVXYModelMapper_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQVXYModelMapper*>(self)->QVXYModelMapper::event(event);
}

bool QVXYModelMapper_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQVXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQVXYModelMapper*>( (QVXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QVXYModelMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQVXYModelMapper*>(self)->QVXYModelMapper::eventFilter(watched, event);
}

bool QVXYModelMapper_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQVXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQVXYModelMapper*>( (QVXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QVXYModelMapper_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQVXYModelMapper*>(self)->QVXYModelMapper::timerEvent(event);
}

bool QVXYModelMapper_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQVXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQVXYModelMapper*>( (QVXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QVXYModelMapper_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQVXYModelMapper*>(self)->QVXYModelMapper::childEvent(event);
}

bool QVXYModelMapper_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQVXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQVXYModelMapper*>( (QVXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QVXYModelMapper_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQVXYModelMapper*>(self)->QVXYModelMapper::customEvent(event);
}

bool QVXYModelMapper_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQVXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQVXYModelMapper*>( (QVXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QVXYModelMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQVXYModelMapper*>(self)->QVXYModelMapper::connectNotify(*signal);
}

bool QVXYModelMapper_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQVXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQVXYModelMapper*>( (QVXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QVXYModelMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQVXYModelMapper*>(self)->QVXYModelMapper::disconnectNotify(*signal);
}

int QVXYModelMapper_protectedbase_first(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQVXYModelMapper*>( (QVXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->first();
}

void QVXYModelMapper_protectedbase_setFirst(bool* _dynamic_cast_ok, void* self, int first) {
	MiqtVirtualQVXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQVXYModelMapper*>( (QVXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setFirst(static_cast<int>(first));
}

int QVXYModelMapper_protectedbase_count(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQVXYModelMapper*>( (QVXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->count();
}

void QVXYModelMapper_protectedbase_setCount(bool* _dynamic_cast_ok, void* self, int count) {
	MiqtVirtualQVXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQVXYModelMapper*>( (QVXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setCount(static_cast<int>(count));
}

int QVXYModelMapper_protectedbase_orientation(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQVXYModelMapper*>( (QVXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}

	*_dynamic_cast_ok = true;
	Qt::Orientation _ret = self_cast->orientation();
	return static_cast<int>(_ret);
}

void QVXYModelMapper_protectedbase_setOrientation(bool* _dynamic_cast_ok, void* self, int orientation) {
	MiqtVirtualQVXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQVXYModelMapper*>( (QVXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QVXYModelMapper_protectedbase_xSection(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQVXYModelMapper*>( (QVXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->xSection();
}

void QVXYModelMapper_protectedbase_setXSection(bool* _dynamic_cast_ok, void* self, int xSection) {
	MiqtVirtualQVXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQVXYModelMapper*>( (QVXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setXSection(static_cast<int>(xSection));
}

int QVXYModelMapper_protectedbase_ySection(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQVXYModelMapper*>( (QVXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->ySection();
}

void QVXYModelMapper_protectedbase_setYSection(bool* _dynamic_cast_ok, void* self, int ySection) {
	MiqtVirtualQVXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQVXYModelMapper*>( (QVXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setYSection(static_cast<int>(ySection));
}

QObject* QVXYModelMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQVXYModelMapper*>( (QVXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QVXYModelMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQVXYModelMapper*>( (QVXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QVXYModelMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQVXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQVXYModelMapper*>( (QVXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QVXYModelMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQVXYModelMapper* self_cast = dynamic_cast<MiqtVirtualQVXYModelMapper*>( (QVXYModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QVXYModelMapper_delete(QVXYModelMapper* self) {
	delete self;
}

