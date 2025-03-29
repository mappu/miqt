#include <QAbstractItemModel>
#include <QBoxPlotModelMapper>
#include <QBoxPlotSeries>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVBoxPlotModelMapper>
#include <qvboxplotmodelmapper.h>
#include "gen_qvboxplotmodelmapper.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QVBoxPlotModelMapper_seriesReplaced(intptr_t);
void miqt_exec_callback_QVBoxPlotModelMapper_modelReplaced(intptr_t);
void miqt_exec_callback_QVBoxPlotModelMapper_firstBoxSetColumnChanged(intptr_t);
void miqt_exec_callback_QVBoxPlotModelMapper_lastBoxSetColumnChanged(intptr_t);
void miqt_exec_callback_QVBoxPlotModelMapper_firstRowChanged(intptr_t);
void miqt_exec_callback_QVBoxPlotModelMapper_rowCountChanged(intptr_t);
bool miqt_exec_callback_QVBoxPlotModelMapper_event(QVBoxPlotModelMapper*, intptr_t, QEvent*);
bool miqt_exec_callback_QVBoxPlotModelMapper_eventFilter(QVBoxPlotModelMapper*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QVBoxPlotModelMapper_timerEvent(QVBoxPlotModelMapper*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QVBoxPlotModelMapper_childEvent(QVBoxPlotModelMapper*, intptr_t, QChildEvent*);
void miqt_exec_callback_QVBoxPlotModelMapper_customEvent(QVBoxPlotModelMapper*, intptr_t, QEvent*);
void miqt_exec_callback_QVBoxPlotModelMapper_connectNotify(QVBoxPlotModelMapper*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QVBoxPlotModelMapper_disconnectNotify(QVBoxPlotModelMapper*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQVBoxPlotModelMapper final : public QVBoxPlotModelMapper {
public:

	MiqtVirtualQVBoxPlotModelMapper(): QVBoxPlotModelMapper() {};
	MiqtVirtualQVBoxPlotModelMapper(QObject* parent): QVBoxPlotModelMapper(parent) {};

	virtual ~MiqtVirtualQVBoxPlotModelMapper() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QVBoxPlotModelMapper::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QVBoxPlotModelMapper_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QVBoxPlotModelMapper_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QVBoxPlotModelMapper::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QVBoxPlotModelMapper_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QVBoxPlotModelMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QVBoxPlotModelMapper::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QVBoxPlotModelMapper_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QVBoxPlotModelMapper_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QVBoxPlotModelMapper::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QVBoxPlotModelMapper_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QVBoxPlotModelMapper_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QVBoxPlotModelMapper::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QVBoxPlotModelMapper_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QVBoxPlotModelMapper_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QVBoxPlotModelMapper::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QVBoxPlotModelMapper_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QVBoxPlotModelMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QVBoxPlotModelMapper::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QVBoxPlotModelMapper_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QVBoxPlotModelMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend int QVBoxPlotModelMapper_protectedbase_first(bool* _dynamic_cast_ok, const void* self);
	friend void QVBoxPlotModelMapper_protectedbase_setFirst(bool* _dynamic_cast_ok, void* self, int first);
	friend int QVBoxPlotModelMapper_protectedbase_count(bool* _dynamic_cast_ok, const void* self);
	friend void QVBoxPlotModelMapper_protectedbase_setCount(bool* _dynamic_cast_ok, void* self, int count);
	friend int QVBoxPlotModelMapper_protectedbase_firstBoxSetSection(bool* _dynamic_cast_ok, const void* self);
	friend void QVBoxPlotModelMapper_protectedbase_setFirstBoxSetSection(bool* _dynamic_cast_ok, void* self, int firstBoxSetSection);
	friend int QVBoxPlotModelMapper_protectedbase_lastBoxSetSection(bool* _dynamic_cast_ok, const void* self);
	friend void QVBoxPlotModelMapper_protectedbase_setLastBoxSetSection(bool* _dynamic_cast_ok, void* self, int lastBoxSetSection);
	friend int QVBoxPlotModelMapper_protectedbase_orientation(bool* _dynamic_cast_ok, const void* self);
	friend void QVBoxPlotModelMapper_protectedbase_setOrientation(bool* _dynamic_cast_ok, void* self, int orientation);
	friend QObject* QVBoxPlotModelMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QVBoxPlotModelMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QVBoxPlotModelMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QVBoxPlotModelMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QVBoxPlotModelMapper* QVBoxPlotModelMapper_new() {
	return new MiqtVirtualQVBoxPlotModelMapper();
}

QVBoxPlotModelMapper* QVBoxPlotModelMapper_new2(QObject* parent) {
	return new MiqtVirtualQVBoxPlotModelMapper(parent);
}

void QVBoxPlotModelMapper_virtbase(QVBoxPlotModelMapper* src, QBoxPlotModelMapper** outptr_QBoxPlotModelMapper) {
	*outptr_QBoxPlotModelMapper = static_cast<QBoxPlotModelMapper*>(src);
}

QMetaObject* QVBoxPlotModelMapper_metaObject(const QVBoxPlotModelMapper* self) {
	return (QMetaObject*) self->metaObject();
}

void* QVBoxPlotModelMapper_metacast(QVBoxPlotModelMapper* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QVBoxPlotModelMapper_tr(const char* s) {
	QString _ret = QVBoxPlotModelMapper::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAbstractItemModel* QVBoxPlotModelMapper_model(const QVBoxPlotModelMapper* self) {
	return self->model();
}

void QVBoxPlotModelMapper_setModel(QVBoxPlotModelMapper* self, QAbstractItemModel* model) {
	self->setModel(model);
}

QBoxPlotSeries* QVBoxPlotModelMapper_series(const QVBoxPlotModelMapper* self) {
	return self->series();
}

void QVBoxPlotModelMapper_setSeries(QVBoxPlotModelMapper* self, QBoxPlotSeries* series) {
	self->setSeries(series);
}

int QVBoxPlotModelMapper_firstBoxSetColumn(const QVBoxPlotModelMapper* self) {
	return self->firstBoxSetColumn();
}

void QVBoxPlotModelMapper_setFirstBoxSetColumn(QVBoxPlotModelMapper* self, int firstBoxSetColumn) {
	self->setFirstBoxSetColumn(static_cast<int>(firstBoxSetColumn));
}

int QVBoxPlotModelMapper_lastBoxSetColumn(const QVBoxPlotModelMapper* self) {
	return self->lastBoxSetColumn();
}

void QVBoxPlotModelMapper_setLastBoxSetColumn(QVBoxPlotModelMapper* self, int lastBoxSetColumn) {
	self->setLastBoxSetColumn(static_cast<int>(lastBoxSetColumn));
}

int QVBoxPlotModelMapper_firstRow(const QVBoxPlotModelMapper* self) {
	return self->firstRow();
}

void QVBoxPlotModelMapper_setFirstRow(QVBoxPlotModelMapper* self, int firstRow) {
	self->setFirstRow(static_cast<int>(firstRow));
}

int QVBoxPlotModelMapper_rowCount(const QVBoxPlotModelMapper* self) {
	return self->rowCount();
}

void QVBoxPlotModelMapper_setRowCount(QVBoxPlotModelMapper* self, int rowCount) {
	self->setRowCount(static_cast<int>(rowCount));
}

void QVBoxPlotModelMapper_seriesReplaced(QVBoxPlotModelMapper* self) {
	self->seriesReplaced();
}

void QVBoxPlotModelMapper_connect_seriesReplaced(QVBoxPlotModelMapper* self, intptr_t slot) {
	MiqtVirtualQVBoxPlotModelMapper::connect(self, static_cast<void (QVBoxPlotModelMapper::*)()>(&QVBoxPlotModelMapper::seriesReplaced), self, [=]() {
		miqt_exec_callback_QVBoxPlotModelMapper_seriesReplaced(slot);
	});
}

void QVBoxPlotModelMapper_modelReplaced(QVBoxPlotModelMapper* self) {
	self->modelReplaced();
}

void QVBoxPlotModelMapper_connect_modelReplaced(QVBoxPlotModelMapper* self, intptr_t slot) {
	MiqtVirtualQVBoxPlotModelMapper::connect(self, static_cast<void (QVBoxPlotModelMapper::*)()>(&QVBoxPlotModelMapper::modelReplaced), self, [=]() {
		miqt_exec_callback_QVBoxPlotModelMapper_modelReplaced(slot);
	});
}

void QVBoxPlotModelMapper_firstBoxSetColumnChanged(QVBoxPlotModelMapper* self) {
	self->firstBoxSetColumnChanged();
}

void QVBoxPlotModelMapper_connect_firstBoxSetColumnChanged(QVBoxPlotModelMapper* self, intptr_t slot) {
	MiqtVirtualQVBoxPlotModelMapper::connect(self, static_cast<void (QVBoxPlotModelMapper::*)()>(&QVBoxPlotModelMapper::firstBoxSetColumnChanged), self, [=]() {
		miqt_exec_callback_QVBoxPlotModelMapper_firstBoxSetColumnChanged(slot);
	});
}

void QVBoxPlotModelMapper_lastBoxSetColumnChanged(QVBoxPlotModelMapper* self) {
	self->lastBoxSetColumnChanged();
}

void QVBoxPlotModelMapper_connect_lastBoxSetColumnChanged(QVBoxPlotModelMapper* self, intptr_t slot) {
	MiqtVirtualQVBoxPlotModelMapper::connect(self, static_cast<void (QVBoxPlotModelMapper::*)()>(&QVBoxPlotModelMapper::lastBoxSetColumnChanged), self, [=]() {
		miqt_exec_callback_QVBoxPlotModelMapper_lastBoxSetColumnChanged(slot);
	});
}

void QVBoxPlotModelMapper_firstRowChanged(QVBoxPlotModelMapper* self) {
	self->firstRowChanged();
}

void QVBoxPlotModelMapper_connect_firstRowChanged(QVBoxPlotModelMapper* self, intptr_t slot) {
	MiqtVirtualQVBoxPlotModelMapper::connect(self, static_cast<void (QVBoxPlotModelMapper::*)()>(&QVBoxPlotModelMapper::firstRowChanged), self, [=]() {
		miqt_exec_callback_QVBoxPlotModelMapper_firstRowChanged(slot);
	});
}

void QVBoxPlotModelMapper_rowCountChanged(QVBoxPlotModelMapper* self) {
	self->rowCountChanged();
}

void QVBoxPlotModelMapper_connect_rowCountChanged(QVBoxPlotModelMapper* self, intptr_t slot) {
	MiqtVirtualQVBoxPlotModelMapper::connect(self, static_cast<void (QVBoxPlotModelMapper::*)()>(&QVBoxPlotModelMapper::rowCountChanged), self, [=]() {
		miqt_exec_callback_QVBoxPlotModelMapper_rowCountChanged(slot);
	});
}

struct miqt_string QVBoxPlotModelMapper_tr2(const char* s, const char* c) {
	QString _ret = QVBoxPlotModelMapper::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVBoxPlotModelMapper_tr3(const char* s, const char* c, int n) {
	QString _ret = QVBoxPlotModelMapper::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QVBoxPlotModelMapper_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQVBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBoxPlotModelMapper*>( (QVBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QVBoxPlotModelMapper_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualQVBoxPlotModelMapper*)(self) )->QVBoxPlotModelMapper::event(event);

}

bool QVBoxPlotModelMapper_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQVBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBoxPlotModelMapper*>( (QVBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QVBoxPlotModelMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualQVBoxPlotModelMapper*)(self) )->QVBoxPlotModelMapper::eventFilter(watched, event);

}

bool QVBoxPlotModelMapper_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQVBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBoxPlotModelMapper*>( (QVBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QVBoxPlotModelMapper_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQVBoxPlotModelMapper*)(self) )->QVBoxPlotModelMapper::timerEvent(event);

}

bool QVBoxPlotModelMapper_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQVBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBoxPlotModelMapper*>( (QVBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QVBoxPlotModelMapper_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQVBoxPlotModelMapper*)(self) )->QVBoxPlotModelMapper::childEvent(event);

}

bool QVBoxPlotModelMapper_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQVBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBoxPlotModelMapper*>( (QVBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QVBoxPlotModelMapper_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQVBoxPlotModelMapper*)(self) )->QVBoxPlotModelMapper::customEvent(event);

}

bool QVBoxPlotModelMapper_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQVBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBoxPlotModelMapper*>( (QVBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QVBoxPlotModelMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQVBoxPlotModelMapper*)(self) )->QVBoxPlotModelMapper::connectNotify(*signal);

}

bool QVBoxPlotModelMapper_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQVBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBoxPlotModelMapper*>( (QVBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QVBoxPlotModelMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQVBoxPlotModelMapper*)(self) )->QVBoxPlotModelMapper::disconnectNotify(*signal);

}

int QVBoxPlotModelMapper_protectedbase_first(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBoxPlotModelMapper*>( (QVBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->first();

}

void QVBoxPlotModelMapper_protectedbase_setFirst(bool* _dynamic_cast_ok, void* self, int first) {
	MiqtVirtualQVBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBoxPlotModelMapper*>( (QVBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setFirst(static_cast<int>(first));

}

int QVBoxPlotModelMapper_protectedbase_count(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBoxPlotModelMapper*>( (QVBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->count();

}

void QVBoxPlotModelMapper_protectedbase_setCount(bool* _dynamic_cast_ok, void* self, int count) {
	MiqtVirtualQVBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBoxPlotModelMapper*>( (QVBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setCount(static_cast<int>(count));

}

int QVBoxPlotModelMapper_protectedbase_firstBoxSetSection(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBoxPlotModelMapper*>( (QVBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->firstBoxSetSection();

}

void QVBoxPlotModelMapper_protectedbase_setFirstBoxSetSection(bool* _dynamic_cast_ok, void* self, int firstBoxSetSection) {
	MiqtVirtualQVBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBoxPlotModelMapper*>( (QVBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setFirstBoxSetSection(static_cast<int>(firstBoxSetSection));

}

int QVBoxPlotModelMapper_protectedbase_lastBoxSetSection(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBoxPlotModelMapper*>( (QVBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->lastBoxSetSection();

}

void QVBoxPlotModelMapper_protectedbase_setLastBoxSetSection(bool* _dynamic_cast_ok, void* self, int lastBoxSetSection) {
	MiqtVirtualQVBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBoxPlotModelMapper*>( (QVBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setLastBoxSetSection(static_cast<int>(lastBoxSetSection));

}

int QVBoxPlotModelMapper_protectedbase_orientation(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBoxPlotModelMapper*>( (QVBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}
	
	*_dynamic_cast_ok = true;
	
	Qt::Orientation _ret = self_cast->orientation();
	return static_cast<int>(_ret);

}

void QVBoxPlotModelMapper_protectedbase_setOrientation(bool* _dynamic_cast_ok, void* self, int orientation) {
	MiqtVirtualQVBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBoxPlotModelMapper*>( (QVBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setOrientation(static_cast<Qt::Orientation>(orientation));

}

QObject* QVBoxPlotModelMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBoxPlotModelMapper*>( (QVBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QVBoxPlotModelMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBoxPlotModelMapper*>( (QVBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QVBoxPlotModelMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQVBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBoxPlotModelMapper*>( (QVBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QVBoxPlotModelMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQVBoxPlotModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBoxPlotModelMapper*>( (QVBoxPlotModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QVBoxPlotModelMapper_delete(QVBoxPlotModelMapper* self) {
	delete self;
}

