#include <QAbstractBarSeries>
#include <QAbstractItemModel>
#include <QBarModelMapper>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVBarModelMapper>
#include <qvbarmodelmapper.h>
#include "gen_qvbarmodelmapper.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QVBarModelMapper_seriesReplaced(intptr_t);
void miqt_exec_callback_QVBarModelMapper_modelReplaced(intptr_t);
void miqt_exec_callback_QVBarModelMapper_firstBarSetColumnChanged(intptr_t);
void miqt_exec_callback_QVBarModelMapper_lastBarSetColumnChanged(intptr_t);
void miqt_exec_callback_QVBarModelMapper_firstRowChanged(intptr_t);
void miqt_exec_callback_QVBarModelMapper_rowCountChanged(intptr_t);
bool miqt_exec_callback_QVBarModelMapper_event(QVBarModelMapper*, intptr_t, QEvent*);
bool miqt_exec_callback_QVBarModelMapper_eventFilter(QVBarModelMapper*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QVBarModelMapper_timerEvent(QVBarModelMapper*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QVBarModelMapper_childEvent(QVBarModelMapper*, intptr_t, QChildEvent*);
void miqt_exec_callback_QVBarModelMapper_customEvent(QVBarModelMapper*, intptr_t, QEvent*);
void miqt_exec_callback_QVBarModelMapper_connectNotify(QVBarModelMapper*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QVBarModelMapper_disconnectNotify(QVBarModelMapper*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQVBarModelMapper final : public QVBarModelMapper {
public:

	MiqtVirtualQVBarModelMapper(): QVBarModelMapper() {};
	MiqtVirtualQVBarModelMapper(QObject* parent): QVBarModelMapper(parent) {};

	virtual ~MiqtVirtualQVBarModelMapper() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QVBarModelMapper::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QVBarModelMapper_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QVBarModelMapper_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QVBarModelMapper::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QVBarModelMapper_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QVBarModelMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QVBarModelMapper::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QVBarModelMapper_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QVBarModelMapper_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QVBarModelMapper::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QVBarModelMapper_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QVBarModelMapper_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QVBarModelMapper::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QVBarModelMapper_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QVBarModelMapper_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QVBarModelMapper::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QVBarModelMapper_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QVBarModelMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QVBarModelMapper::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QVBarModelMapper_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QVBarModelMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend int QVBarModelMapper_protectedbase_first(bool* _dynamic_cast_ok, const void* self);
	friend void QVBarModelMapper_protectedbase_setFirst(bool* _dynamic_cast_ok, void* self, int first);
	friend int QVBarModelMapper_protectedbase_count(bool* _dynamic_cast_ok, const void* self);
	friend void QVBarModelMapper_protectedbase_setCount(bool* _dynamic_cast_ok, void* self, int count);
	friend int QVBarModelMapper_protectedbase_firstBarSetSection(bool* _dynamic_cast_ok, const void* self);
	friend void QVBarModelMapper_protectedbase_setFirstBarSetSection(bool* _dynamic_cast_ok, void* self, int firstBarSetSection);
	friend int QVBarModelMapper_protectedbase_lastBarSetSection(bool* _dynamic_cast_ok, const void* self);
	friend void QVBarModelMapper_protectedbase_setLastBarSetSection(bool* _dynamic_cast_ok, void* self, int lastBarSetSection);
	friend int QVBarModelMapper_protectedbase_orientation(bool* _dynamic_cast_ok, const void* self);
	friend void QVBarModelMapper_protectedbase_setOrientation(bool* _dynamic_cast_ok, void* self, int orientation);
	friend QObject* QVBarModelMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QVBarModelMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QVBarModelMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QVBarModelMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QVBarModelMapper* QVBarModelMapper_new() {
	return new MiqtVirtualQVBarModelMapper();
}

QVBarModelMapper* QVBarModelMapper_new2(QObject* parent) {
	return new MiqtVirtualQVBarModelMapper(parent);
}

void QVBarModelMapper_virtbase(QVBarModelMapper* src, QBarModelMapper** outptr_QBarModelMapper) {
	*outptr_QBarModelMapper = static_cast<QBarModelMapper*>(src);
}

QMetaObject* QVBarModelMapper_metaObject(const QVBarModelMapper* self) {
	return (QMetaObject*) self->metaObject();
}

void* QVBarModelMapper_metacast(QVBarModelMapper* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QVBarModelMapper_tr(const char* s) {
	QString _ret = QVBarModelMapper::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAbstractItemModel* QVBarModelMapper_model(const QVBarModelMapper* self) {
	return self->model();
}

void QVBarModelMapper_setModel(QVBarModelMapper* self, QAbstractItemModel* model) {
	self->setModel(model);
}

QAbstractBarSeries* QVBarModelMapper_series(const QVBarModelMapper* self) {
	return self->series();
}

void QVBarModelMapper_setSeries(QVBarModelMapper* self, QAbstractBarSeries* series) {
	self->setSeries(series);
}

int QVBarModelMapper_firstBarSetColumn(const QVBarModelMapper* self) {
	return self->firstBarSetColumn();
}

void QVBarModelMapper_setFirstBarSetColumn(QVBarModelMapper* self, int firstBarSetColumn) {
	self->setFirstBarSetColumn(static_cast<int>(firstBarSetColumn));
}

int QVBarModelMapper_lastBarSetColumn(const QVBarModelMapper* self) {
	return self->lastBarSetColumn();
}

void QVBarModelMapper_setLastBarSetColumn(QVBarModelMapper* self, int lastBarSetColumn) {
	self->setLastBarSetColumn(static_cast<int>(lastBarSetColumn));
}

int QVBarModelMapper_firstRow(const QVBarModelMapper* self) {
	return self->firstRow();
}

void QVBarModelMapper_setFirstRow(QVBarModelMapper* self, int firstRow) {
	self->setFirstRow(static_cast<int>(firstRow));
}

int QVBarModelMapper_rowCount(const QVBarModelMapper* self) {
	return self->rowCount();
}

void QVBarModelMapper_setRowCount(QVBarModelMapper* self, int rowCount) {
	self->setRowCount(static_cast<int>(rowCount));
}

void QVBarModelMapper_seriesReplaced(QVBarModelMapper* self) {
	self->seriesReplaced();
}

void QVBarModelMapper_connect_seriesReplaced(QVBarModelMapper* self, intptr_t slot) {
	MiqtVirtualQVBarModelMapper::connect(self, static_cast<void (QVBarModelMapper::*)()>(&QVBarModelMapper::seriesReplaced), self, [=]() {
		miqt_exec_callback_QVBarModelMapper_seriesReplaced(slot);
	});
}

void QVBarModelMapper_modelReplaced(QVBarModelMapper* self) {
	self->modelReplaced();
}

void QVBarModelMapper_connect_modelReplaced(QVBarModelMapper* self, intptr_t slot) {
	MiqtVirtualQVBarModelMapper::connect(self, static_cast<void (QVBarModelMapper::*)()>(&QVBarModelMapper::modelReplaced), self, [=]() {
		miqt_exec_callback_QVBarModelMapper_modelReplaced(slot);
	});
}

void QVBarModelMapper_firstBarSetColumnChanged(QVBarModelMapper* self) {
	self->firstBarSetColumnChanged();
}

void QVBarModelMapper_connect_firstBarSetColumnChanged(QVBarModelMapper* self, intptr_t slot) {
	MiqtVirtualQVBarModelMapper::connect(self, static_cast<void (QVBarModelMapper::*)()>(&QVBarModelMapper::firstBarSetColumnChanged), self, [=]() {
		miqt_exec_callback_QVBarModelMapper_firstBarSetColumnChanged(slot);
	});
}

void QVBarModelMapper_lastBarSetColumnChanged(QVBarModelMapper* self) {
	self->lastBarSetColumnChanged();
}

void QVBarModelMapper_connect_lastBarSetColumnChanged(QVBarModelMapper* self, intptr_t slot) {
	MiqtVirtualQVBarModelMapper::connect(self, static_cast<void (QVBarModelMapper::*)()>(&QVBarModelMapper::lastBarSetColumnChanged), self, [=]() {
		miqt_exec_callback_QVBarModelMapper_lastBarSetColumnChanged(slot);
	});
}

void QVBarModelMapper_firstRowChanged(QVBarModelMapper* self) {
	self->firstRowChanged();
}

void QVBarModelMapper_connect_firstRowChanged(QVBarModelMapper* self, intptr_t slot) {
	MiqtVirtualQVBarModelMapper::connect(self, static_cast<void (QVBarModelMapper::*)()>(&QVBarModelMapper::firstRowChanged), self, [=]() {
		miqt_exec_callback_QVBarModelMapper_firstRowChanged(slot);
	});
}

void QVBarModelMapper_rowCountChanged(QVBarModelMapper* self) {
	self->rowCountChanged();
}

void QVBarModelMapper_connect_rowCountChanged(QVBarModelMapper* self, intptr_t slot) {
	MiqtVirtualQVBarModelMapper::connect(self, static_cast<void (QVBarModelMapper::*)()>(&QVBarModelMapper::rowCountChanged), self, [=]() {
		miqt_exec_callback_QVBarModelMapper_rowCountChanged(slot);
	});
}

struct miqt_string QVBarModelMapper_tr2(const char* s, const char* c) {
	QString _ret = QVBarModelMapper::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVBarModelMapper_tr3(const char* s, const char* c, int n) {
	QString _ret = QVBarModelMapper::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QVBarModelMapper_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQVBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBarModelMapper*>( (QVBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QVBarModelMapper_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualQVBarModelMapper*)(self) )->QVBarModelMapper::event(event);

}

bool QVBarModelMapper_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQVBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBarModelMapper*>( (QVBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QVBarModelMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualQVBarModelMapper*)(self) )->QVBarModelMapper::eventFilter(watched, event);

}

bool QVBarModelMapper_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQVBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBarModelMapper*>( (QVBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QVBarModelMapper_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQVBarModelMapper*)(self) )->QVBarModelMapper::timerEvent(event);

}

bool QVBarModelMapper_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQVBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBarModelMapper*>( (QVBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QVBarModelMapper_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQVBarModelMapper*)(self) )->QVBarModelMapper::childEvent(event);

}

bool QVBarModelMapper_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQVBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBarModelMapper*>( (QVBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QVBarModelMapper_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQVBarModelMapper*)(self) )->QVBarModelMapper::customEvent(event);

}

bool QVBarModelMapper_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQVBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBarModelMapper*>( (QVBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QVBarModelMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQVBarModelMapper*)(self) )->QVBarModelMapper::connectNotify(*signal);

}

bool QVBarModelMapper_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQVBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBarModelMapper*>( (QVBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QVBarModelMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQVBarModelMapper*)(self) )->QVBarModelMapper::disconnectNotify(*signal);

}

int QVBarModelMapper_protectedbase_first(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBarModelMapper*>( (QVBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->first();

}

void QVBarModelMapper_protectedbase_setFirst(bool* _dynamic_cast_ok, void* self, int first) {
	MiqtVirtualQVBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBarModelMapper*>( (QVBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setFirst(static_cast<int>(first));

}

int QVBarModelMapper_protectedbase_count(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBarModelMapper*>( (QVBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->count();

}

void QVBarModelMapper_protectedbase_setCount(bool* _dynamic_cast_ok, void* self, int count) {
	MiqtVirtualQVBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBarModelMapper*>( (QVBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setCount(static_cast<int>(count));

}

int QVBarModelMapper_protectedbase_firstBarSetSection(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBarModelMapper*>( (QVBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->firstBarSetSection();

}

void QVBarModelMapper_protectedbase_setFirstBarSetSection(bool* _dynamic_cast_ok, void* self, int firstBarSetSection) {
	MiqtVirtualQVBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBarModelMapper*>( (QVBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setFirstBarSetSection(static_cast<int>(firstBarSetSection));

}

int QVBarModelMapper_protectedbase_lastBarSetSection(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBarModelMapper*>( (QVBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->lastBarSetSection();

}

void QVBarModelMapper_protectedbase_setLastBarSetSection(bool* _dynamic_cast_ok, void* self, int lastBarSetSection) {
	MiqtVirtualQVBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBarModelMapper*>( (QVBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setLastBarSetSection(static_cast<int>(lastBarSetSection));

}

int QVBarModelMapper_protectedbase_orientation(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBarModelMapper*>( (QVBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}
	
	*_dynamic_cast_ok = true;
	
	Qt::Orientation _ret = self_cast->orientation();
	return static_cast<int>(_ret);

}

void QVBarModelMapper_protectedbase_setOrientation(bool* _dynamic_cast_ok, void* self, int orientation) {
	MiqtVirtualQVBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBarModelMapper*>( (QVBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setOrientation(static_cast<Qt::Orientation>(orientation));

}

QObject* QVBarModelMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBarModelMapper*>( (QVBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QVBarModelMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBarModelMapper*>( (QVBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QVBarModelMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQVBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBarModelMapper*>( (QVBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QVBarModelMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQVBarModelMapper* self_cast = dynamic_cast<MiqtVirtualQVBarModelMapper*>( (QVBarModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QVBarModelMapper_delete(QVBarModelMapper* self) {
	delete self;
}

