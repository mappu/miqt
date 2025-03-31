#include <QAbstractItemModel>
#include <QChildEvent>
#include <QEvent>
#include <QHPieModelMapper>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPieModelMapper>
#include <QPieSeries>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qhpiemodelmapper.h>
#include "gen_qhpiemodelmapper.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QHPieModelMapper_seriesReplaced(intptr_t);
void miqt_exec_callback_QHPieModelMapper_modelReplaced(intptr_t);
void miqt_exec_callback_QHPieModelMapper_valuesRowChanged(intptr_t);
void miqt_exec_callback_QHPieModelMapper_labelsRowChanged(intptr_t);
void miqt_exec_callback_QHPieModelMapper_firstColumnChanged(intptr_t);
void miqt_exec_callback_QHPieModelMapper_columnCountChanged(intptr_t);
bool miqt_exec_callback_QHPieModelMapper_event(QHPieModelMapper*, intptr_t, QEvent*);
bool miqt_exec_callback_QHPieModelMapper_eventFilter(QHPieModelMapper*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QHPieModelMapper_timerEvent(QHPieModelMapper*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QHPieModelMapper_childEvent(QHPieModelMapper*, intptr_t, QChildEvent*);
void miqt_exec_callback_QHPieModelMapper_customEvent(QHPieModelMapper*, intptr_t, QEvent*);
void miqt_exec_callback_QHPieModelMapper_connectNotify(QHPieModelMapper*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QHPieModelMapper_disconnectNotify(QHPieModelMapper*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQHPieModelMapper final : public QHPieModelMapper {
public:

	MiqtVirtualQHPieModelMapper(): QHPieModelMapper() {};
	MiqtVirtualQHPieModelMapper(QObject* parent): QHPieModelMapper(parent) {};

	virtual ~MiqtVirtualQHPieModelMapper() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QHPieModelMapper::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QHPieModelMapper_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QHPieModelMapper_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QHPieModelMapper::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QHPieModelMapper_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QHPieModelMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QHPieModelMapper::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QHPieModelMapper_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QHPieModelMapper_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QHPieModelMapper::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QHPieModelMapper_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QHPieModelMapper_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QHPieModelMapper::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QHPieModelMapper_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QHPieModelMapper_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QHPieModelMapper::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QHPieModelMapper_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QHPieModelMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QHPieModelMapper::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QHPieModelMapper_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QHPieModelMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend int QHPieModelMapper_protectedbase_first(bool* _dynamic_cast_ok, const void* self);
	friend void QHPieModelMapper_protectedbase_setFirst(bool* _dynamic_cast_ok, void* self, int first);
	friend int QHPieModelMapper_protectedbase_count(bool* _dynamic_cast_ok, const void* self);
	friend void QHPieModelMapper_protectedbase_setCount(bool* _dynamic_cast_ok, void* self, int count);
	friend int QHPieModelMapper_protectedbase_valuesSection(bool* _dynamic_cast_ok, const void* self);
	friend void QHPieModelMapper_protectedbase_setValuesSection(bool* _dynamic_cast_ok, void* self, int valuesSection);
	friend int QHPieModelMapper_protectedbase_labelsSection(bool* _dynamic_cast_ok, const void* self);
	friend void QHPieModelMapper_protectedbase_setLabelsSection(bool* _dynamic_cast_ok, void* self, int labelsSection);
	friend int QHPieModelMapper_protectedbase_orientation(bool* _dynamic_cast_ok, const void* self);
	friend void QHPieModelMapper_protectedbase_setOrientation(bool* _dynamic_cast_ok, void* self, int orientation);
	friend QObject* QHPieModelMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QHPieModelMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QHPieModelMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QHPieModelMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QHPieModelMapper* QHPieModelMapper_new() {
	return new MiqtVirtualQHPieModelMapper();
}

QHPieModelMapper* QHPieModelMapper_new2(QObject* parent) {
	return new MiqtVirtualQHPieModelMapper(parent);
}

void QHPieModelMapper_virtbase(QHPieModelMapper* src, QPieModelMapper** outptr_QPieModelMapper) {
	*outptr_QPieModelMapper = static_cast<QPieModelMapper*>(src);
}

QMetaObject* QHPieModelMapper_metaObject(const QHPieModelMapper* self) {
	return (QMetaObject*) self->metaObject();
}

void* QHPieModelMapper_metacast(QHPieModelMapper* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QHPieModelMapper_tr(const char* s) {
	QString _ret = QHPieModelMapper::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAbstractItemModel* QHPieModelMapper_model(const QHPieModelMapper* self) {
	return self->model();
}

void QHPieModelMapper_setModel(QHPieModelMapper* self, QAbstractItemModel* model) {
	self->setModel(model);
}

QPieSeries* QHPieModelMapper_series(const QHPieModelMapper* self) {
	return self->series();
}

void QHPieModelMapper_setSeries(QHPieModelMapper* self, QPieSeries* series) {
	self->setSeries(series);
}

int QHPieModelMapper_valuesRow(const QHPieModelMapper* self) {
	return self->valuesRow();
}

void QHPieModelMapper_setValuesRow(QHPieModelMapper* self, int valuesRow) {
	self->setValuesRow(static_cast<int>(valuesRow));
}

int QHPieModelMapper_labelsRow(const QHPieModelMapper* self) {
	return self->labelsRow();
}

void QHPieModelMapper_setLabelsRow(QHPieModelMapper* self, int labelsRow) {
	self->setLabelsRow(static_cast<int>(labelsRow));
}

int QHPieModelMapper_firstColumn(const QHPieModelMapper* self) {
	return self->firstColumn();
}

void QHPieModelMapper_setFirstColumn(QHPieModelMapper* self, int firstColumn) {
	self->setFirstColumn(static_cast<int>(firstColumn));
}

int QHPieModelMapper_columnCount(const QHPieModelMapper* self) {
	return self->columnCount();
}

void QHPieModelMapper_setColumnCount(QHPieModelMapper* self, int columnCount) {
	self->setColumnCount(static_cast<int>(columnCount));
}

void QHPieModelMapper_seriesReplaced(QHPieModelMapper* self) {
	self->seriesReplaced();
}

void QHPieModelMapper_connect_seriesReplaced(QHPieModelMapper* self, intptr_t slot) {
	MiqtVirtualQHPieModelMapper::connect(self, static_cast<void (QHPieModelMapper::*)()>(&QHPieModelMapper::seriesReplaced), self, [=]() {
		miqt_exec_callback_QHPieModelMapper_seriesReplaced(slot);
	});
}

void QHPieModelMapper_modelReplaced(QHPieModelMapper* self) {
	self->modelReplaced();
}

void QHPieModelMapper_connect_modelReplaced(QHPieModelMapper* self, intptr_t slot) {
	MiqtVirtualQHPieModelMapper::connect(self, static_cast<void (QHPieModelMapper::*)()>(&QHPieModelMapper::modelReplaced), self, [=]() {
		miqt_exec_callback_QHPieModelMapper_modelReplaced(slot);
	});
}

void QHPieModelMapper_valuesRowChanged(QHPieModelMapper* self) {
	self->valuesRowChanged();
}

void QHPieModelMapper_connect_valuesRowChanged(QHPieModelMapper* self, intptr_t slot) {
	MiqtVirtualQHPieModelMapper::connect(self, static_cast<void (QHPieModelMapper::*)()>(&QHPieModelMapper::valuesRowChanged), self, [=]() {
		miqt_exec_callback_QHPieModelMapper_valuesRowChanged(slot);
	});
}

void QHPieModelMapper_labelsRowChanged(QHPieModelMapper* self) {
	self->labelsRowChanged();
}

void QHPieModelMapper_connect_labelsRowChanged(QHPieModelMapper* self, intptr_t slot) {
	MiqtVirtualQHPieModelMapper::connect(self, static_cast<void (QHPieModelMapper::*)()>(&QHPieModelMapper::labelsRowChanged), self, [=]() {
		miqt_exec_callback_QHPieModelMapper_labelsRowChanged(slot);
	});
}

void QHPieModelMapper_firstColumnChanged(QHPieModelMapper* self) {
	self->firstColumnChanged();
}

void QHPieModelMapper_connect_firstColumnChanged(QHPieModelMapper* self, intptr_t slot) {
	MiqtVirtualQHPieModelMapper::connect(self, static_cast<void (QHPieModelMapper::*)()>(&QHPieModelMapper::firstColumnChanged), self, [=]() {
		miqt_exec_callback_QHPieModelMapper_firstColumnChanged(slot);
	});
}

void QHPieModelMapper_columnCountChanged(QHPieModelMapper* self) {
	self->columnCountChanged();
}

void QHPieModelMapper_connect_columnCountChanged(QHPieModelMapper* self, intptr_t slot) {
	MiqtVirtualQHPieModelMapper::connect(self, static_cast<void (QHPieModelMapper::*)()>(&QHPieModelMapper::columnCountChanged), self, [=]() {
		miqt_exec_callback_QHPieModelMapper_columnCountChanged(slot);
	});
}

struct miqt_string QHPieModelMapper_tr2(const char* s, const char* c) {
	QString _ret = QHPieModelMapper::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHPieModelMapper_tr3(const char* s, const char* c, int n) {
	QString _ret = QHPieModelMapper::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QHPieModelMapper_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQHPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQHPieModelMapper*>( (QHPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QHPieModelMapper_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualQHPieModelMapper*)(self) )->QHPieModelMapper::event(event);

}

bool QHPieModelMapper_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQHPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQHPieModelMapper*>( (QHPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QHPieModelMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualQHPieModelMapper*)(self) )->QHPieModelMapper::eventFilter(watched, event);

}

bool QHPieModelMapper_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQHPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQHPieModelMapper*>( (QHPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QHPieModelMapper_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQHPieModelMapper*)(self) )->QHPieModelMapper::timerEvent(event);

}

bool QHPieModelMapper_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQHPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQHPieModelMapper*>( (QHPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QHPieModelMapper_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQHPieModelMapper*)(self) )->QHPieModelMapper::childEvent(event);

}

bool QHPieModelMapper_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQHPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQHPieModelMapper*>( (QHPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QHPieModelMapper_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQHPieModelMapper*)(self) )->QHPieModelMapper::customEvent(event);

}

bool QHPieModelMapper_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQHPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQHPieModelMapper*>( (QHPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QHPieModelMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQHPieModelMapper*)(self) )->QHPieModelMapper::connectNotify(*signal);

}

bool QHPieModelMapper_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQHPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQHPieModelMapper*>( (QHPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QHPieModelMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQHPieModelMapper*)(self) )->QHPieModelMapper::disconnectNotify(*signal);

}

int QHPieModelMapper_protectedbase_first(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQHPieModelMapper*>( (QHPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->first();

}

void QHPieModelMapper_protectedbase_setFirst(bool* _dynamic_cast_ok, void* self, int first) {
	MiqtVirtualQHPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQHPieModelMapper*>( (QHPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setFirst(static_cast<int>(first));

}

int QHPieModelMapper_protectedbase_count(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQHPieModelMapper*>( (QHPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->count();

}

void QHPieModelMapper_protectedbase_setCount(bool* _dynamic_cast_ok, void* self, int count) {
	MiqtVirtualQHPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQHPieModelMapper*>( (QHPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setCount(static_cast<int>(count));

}

int QHPieModelMapper_protectedbase_valuesSection(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQHPieModelMapper*>( (QHPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->valuesSection();

}

void QHPieModelMapper_protectedbase_setValuesSection(bool* _dynamic_cast_ok, void* self, int valuesSection) {
	MiqtVirtualQHPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQHPieModelMapper*>( (QHPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setValuesSection(static_cast<int>(valuesSection));

}

int QHPieModelMapper_protectedbase_labelsSection(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQHPieModelMapper*>( (QHPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->labelsSection();

}

void QHPieModelMapper_protectedbase_setLabelsSection(bool* _dynamic_cast_ok, void* self, int labelsSection) {
	MiqtVirtualQHPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQHPieModelMapper*>( (QHPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setLabelsSection(static_cast<int>(labelsSection));

}

int QHPieModelMapper_protectedbase_orientation(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQHPieModelMapper*>( (QHPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}
	
	*_dynamic_cast_ok = true;
	
	Qt::Orientation _ret = self_cast->orientation();
	return static_cast<int>(_ret);

}

void QHPieModelMapper_protectedbase_setOrientation(bool* _dynamic_cast_ok, void* self, int orientation) {
	MiqtVirtualQHPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQHPieModelMapper*>( (QHPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setOrientation(static_cast<Qt::Orientation>(orientation));

}

QObject* QHPieModelMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQHPieModelMapper*>( (QHPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QHPieModelMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQHPieModelMapper*>( (QHPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QHPieModelMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQHPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQHPieModelMapper*>( (QHPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QHPieModelMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQHPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQHPieModelMapper*>( (QHPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QHPieModelMapper_delete(QHPieModelMapper* self) {
	delete self;
}

