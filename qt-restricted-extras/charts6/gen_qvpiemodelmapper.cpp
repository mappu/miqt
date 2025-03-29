#include <QAbstractItemModel>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPieModelMapper>
#include <QPieSeries>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVPieModelMapper>
#include <qvpiemodelmapper.h>
#include "gen_qvpiemodelmapper.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QVPieModelMapper_seriesReplaced(intptr_t);
void miqt_exec_callback_QVPieModelMapper_modelReplaced(intptr_t);
void miqt_exec_callback_QVPieModelMapper_valuesColumnChanged(intptr_t);
void miqt_exec_callback_QVPieModelMapper_labelsColumnChanged(intptr_t);
void miqt_exec_callback_QVPieModelMapper_firstRowChanged(intptr_t);
void miqt_exec_callback_QVPieModelMapper_rowCountChanged(intptr_t);
bool miqt_exec_callback_QVPieModelMapper_event(QVPieModelMapper*, intptr_t, QEvent*);
bool miqt_exec_callback_QVPieModelMapper_eventFilter(QVPieModelMapper*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QVPieModelMapper_timerEvent(QVPieModelMapper*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QVPieModelMapper_childEvent(QVPieModelMapper*, intptr_t, QChildEvent*);
void miqt_exec_callback_QVPieModelMapper_customEvent(QVPieModelMapper*, intptr_t, QEvent*);
void miqt_exec_callback_QVPieModelMapper_connectNotify(QVPieModelMapper*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QVPieModelMapper_disconnectNotify(QVPieModelMapper*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQVPieModelMapper final : public QVPieModelMapper {
public:

	MiqtVirtualQVPieModelMapper(): QVPieModelMapper() {};
	MiqtVirtualQVPieModelMapper(QObject* parent): QVPieModelMapper(parent) {};

	virtual ~MiqtVirtualQVPieModelMapper() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QVPieModelMapper::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QVPieModelMapper_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QVPieModelMapper_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QVPieModelMapper::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QVPieModelMapper_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QVPieModelMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QVPieModelMapper::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QVPieModelMapper_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QVPieModelMapper_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QVPieModelMapper::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QVPieModelMapper_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QVPieModelMapper_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QVPieModelMapper::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QVPieModelMapper_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QVPieModelMapper_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QVPieModelMapper::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QVPieModelMapper_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QVPieModelMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QVPieModelMapper::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QVPieModelMapper_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QVPieModelMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend int QVPieModelMapper_protectedbase_first(bool* _dynamic_cast_ok, const void* self);
	friend void QVPieModelMapper_protectedbase_setFirst(bool* _dynamic_cast_ok, void* self, int first);
	friend int QVPieModelMapper_protectedbase_count(bool* _dynamic_cast_ok, const void* self);
	friend void QVPieModelMapper_protectedbase_setCount(bool* _dynamic_cast_ok, void* self, int count);
	friend int QVPieModelMapper_protectedbase_valuesSection(bool* _dynamic_cast_ok, const void* self);
	friend void QVPieModelMapper_protectedbase_setValuesSection(bool* _dynamic_cast_ok, void* self, int valuesSection);
	friend int QVPieModelMapper_protectedbase_labelsSection(bool* _dynamic_cast_ok, const void* self);
	friend void QVPieModelMapper_protectedbase_setLabelsSection(bool* _dynamic_cast_ok, void* self, int labelsSection);
	friend int QVPieModelMapper_protectedbase_orientation(bool* _dynamic_cast_ok, const void* self);
	friend void QVPieModelMapper_protectedbase_setOrientation(bool* _dynamic_cast_ok, void* self, int orientation);
	friend QObject* QVPieModelMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QVPieModelMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QVPieModelMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QVPieModelMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QVPieModelMapper* QVPieModelMapper_new() {
	return new MiqtVirtualQVPieModelMapper();
}

QVPieModelMapper* QVPieModelMapper_new2(QObject* parent) {
	return new MiqtVirtualQVPieModelMapper(parent);
}

void QVPieModelMapper_virtbase(QVPieModelMapper* src, QPieModelMapper** outptr_QPieModelMapper) {
	*outptr_QPieModelMapper = static_cast<QPieModelMapper*>(src);
}

QMetaObject* QVPieModelMapper_metaObject(const QVPieModelMapper* self) {
	return (QMetaObject*) self->metaObject();
}

void* QVPieModelMapper_metacast(QVPieModelMapper* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QVPieModelMapper_tr(const char* s) {
	QString _ret = QVPieModelMapper::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAbstractItemModel* QVPieModelMapper_model(const QVPieModelMapper* self) {
	return self->model();
}

void QVPieModelMapper_setModel(QVPieModelMapper* self, QAbstractItemModel* model) {
	self->setModel(model);
}

QPieSeries* QVPieModelMapper_series(const QVPieModelMapper* self) {
	return self->series();
}

void QVPieModelMapper_setSeries(QVPieModelMapper* self, QPieSeries* series) {
	self->setSeries(series);
}

int QVPieModelMapper_valuesColumn(const QVPieModelMapper* self) {
	return self->valuesColumn();
}

void QVPieModelMapper_setValuesColumn(QVPieModelMapper* self, int valuesColumn) {
	self->setValuesColumn(static_cast<int>(valuesColumn));
}

int QVPieModelMapper_labelsColumn(const QVPieModelMapper* self) {
	return self->labelsColumn();
}

void QVPieModelMapper_setLabelsColumn(QVPieModelMapper* self, int labelsColumn) {
	self->setLabelsColumn(static_cast<int>(labelsColumn));
}

int QVPieModelMapper_firstRow(const QVPieModelMapper* self) {
	return self->firstRow();
}

void QVPieModelMapper_setFirstRow(QVPieModelMapper* self, int firstRow) {
	self->setFirstRow(static_cast<int>(firstRow));
}

int QVPieModelMapper_rowCount(const QVPieModelMapper* self) {
	return self->rowCount();
}

void QVPieModelMapper_setRowCount(QVPieModelMapper* self, int rowCount) {
	self->setRowCount(static_cast<int>(rowCount));
}

void QVPieModelMapper_seriesReplaced(QVPieModelMapper* self) {
	self->seriesReplaced();
}

void QVPieModelMapper_connect_seriesReplaced(QVPieModelMapper* self, intptr_t slot) {
	MiqtVirtualQVPieModelMapper::connect(self, static_cast<void (QVPieModelMapper::*)()>(&QVPieModelMapper::seriesReplaced), self, [=]() {
		miqt_exec_callback_QVPieModelMapper_seriesReplaced(slot);
	});
}

void QVPieModelMapper_modelReplaced(QVPieModelMapper* self) {
	self->modelReplaced();
}

void QVPieModelMapper_connect_modelReplaced(QVPieModelMapper* self, intptr_t slot) {
	MiqtVirtualQVPieModelMapper::connect(self, static_cast<void (QVPieModelMapper::*)()>(&QVPieModelMapper::modelReplaced), self, [=]() {
		miqt_exec_callback_QVPieModelMapper_modelReplaced(slot);
	});
}

void QVPieModelMapper_valuesColumnChanged(QVPieModelMapper* self) {
	self->valuesColumnChanged();
}

void QVPieModelMapper_connect_valuesColumnChanged(QVPieModelMapper* self, intptr_t slot) {
	MiqtVirtualQVPieModelMapper::connect(self, static_cast<void (QVPieModelMapper::*)()>(&QVPieModelMapper::valuesColumnChanged), self, [=]() {
		miqt_exec_callback_QVPieModelMapper_valuesColumnChanged(slot);
	});
}

void QVPieModelMapper_labelsColumnChanged(QVPieModelMapper* self) {
	self->labelsColumnChanged();
}

void QVPieModelMapper_connect_labelsColumnChanged(QVPieModelMapper* self, intptr_t slot) {
	MiqtVirtualQVPieModelMapper::connect(self, static_cast<void (QVPieModelMapper::*)()>(&QVPieModelMapper::labelsColumnChanged), self, [=]() {
		miqt_exec_callback_QVPieModelMapper_labelsColumnChanged(slot);
	});
}

void QVPieModelMapper_firstRowChanged(QVPieModelMapper* self) {
	self->firstRowChanged();
}

void QVPieModelMapper_connect_firstRowChanged(QVPieModelMapper* self, intptr_t slot) {
	MiqtVirtualQVPieModelMapper::connect(self, static_cast<void (QVPieModelMapper::*)()>(&QVPieModelMapper::firstRowChanged), self, [=]() {
		miqt_exec_callback_QVPieModelMapper_firstRowChanged(slot);
	});
}

void QVPieModelMapper_rowCountChanged(QVPieModelMapper* self) {
	self->rowCountChanged();
}

void QVPieModelMapper_connect_rowCountChanged(QVPieModelMapper* self, intptr_t slot) {
	MiqtVirtualQVPieModelMapper::connect(self, static_cast<void (QVPieModelMapper::*)()>(&QVPieModelMapper::rowCountChanged), self, [=]() {
		miqt_exec_callback_QVPieModelMapper_rowCountChanged(slot);
	});
}

struct miqt_string QVPieModelMapper_tr2(const char* s, const char* c) {
	QString _ret = QVPieModelMapper::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVPieModelMapper_tr3(const char* s, const char* c, int n) {
	QString _ret = QVPieModelMapper::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QVPieModelMapper_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQVPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQVPieModelMapper*>( (QVPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QVPieModelMapper_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualQVPieModelMapper*)(self) )->QVPieModelMapper::event(event);

}

bool QVPieModelMapper_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQVPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQVPieModelMapper*>( (QVPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QVPieModelMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualQVPieModelMapper*)(self) )->QVPieModelMapper::eventFilter(watched, event);

}

bool QVPieModelMapper_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQVPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQVPieModelMapper*>( (QVPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QVPieModelMapper_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQVPieModelMapper*)(self) )->QVPieModelMapper::timerEvent(event);

}

bool QVPieModelMapper_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQVPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQVPieModelMapper*>( (QVPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QVPieModelMapper_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQVPieModelMapper*)(self) )->QVPieModelMapper::childEvent(event);

}

bool QVPieModelMapper_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQVPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQVPieModelMapper*>( (QVPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QVPieModelMapper_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQVPieModelMapper*)(self) )->QVPieModelMapper::customEvent(event);

}

bool QVPieModelMapper_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQVPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQVPieModelMapper*>( (QVPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QVPieModelMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQVPieModelMapper*)(self) )->QVPieModelMapper::connectNotify(*signal);

}

bool QVPieModelMapper_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQVPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQVPieModelMapper*>( (QVPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QVPieModelMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQVPieModelMapper*)(self) )->QVPieModelMapper::disconnectNotify(*signal);

}

int QVPieModelMapper_protectedbase_first(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQVPieModelMapper*>( (QVPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->first();

}

void QVPieModelMapper_protectedbase_setFirst(bool* _dynamic_cast_ok, void* self, int first) {
	MiqtVirtualQVPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQVPieModelMapper*>( (QVPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setFirst(static_cast<int>(first));

}

int QVPieModelMapper_protectedbase_count(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQVPieModelMapper*>( (QVPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->count();

}

void QVPieModelMapper_protectedbase_setCount(bool* _dynamic_cast_ok, void* self, int count) {
	MiqtVirtualQVPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQVPieModelMapper*>( (QVPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setCount(static_cast<int>(count));

}

int QVPieModelMapper_protectedbase_valuesSection(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQVPieModelMapper*>( (QVPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->valuesSection();

}

void QVPieModelMapper_protectedbase_setValuesSection(bool* _dynamic_cast_ok, void* self, int valuesSection) {
	MiqtVirtualQVPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQVPieModelMapper*>( (QVPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setValuesSection(static_cast<int>(valuesSection));

}

int QVPieModelMapper_protectedbase_labelsSection(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQVPieModelMapper*>( (QVPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->labelsSection();

}

void QVPieModelMapper_protectedbase_setLabelsSection(bool* _dynamic_cast_ok, void* self, int labelsSection) {
	MiqtVirtualQVPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQVPieModelMapper*>( (QVPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setLabelsSection(static_cast<int>(labelsSection));

}

int QVPieModelMapper_protectedbase_orientation(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQVPieModelMapper*>( (QVPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}
	
	*_dynamic_cast_ok = true;
	
	Qt::Orientation _ret = self_cast->orientation();
	return static_cast<int>(_ret);

}

void QVPieModelMapper_protectedbase_setOrientation(bool* _dynamic_cast_ok, void* self, int orientation) {
	MiqtVirtualQVPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQVPieModelMapper*>( (QVPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setOrientation(static_cast<Qt::Orientation>(orientation));

}

QObject* QVPieModelMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQVPieModelMapper*>( (QVPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QVPieModelMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQVPieModelMapper*>( (QVPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QVPieModelMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQVPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQVPieModelMapper*>( (QVPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QVPieModelMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQVPieModelMapper* self_cast = dynamic_cast<MiqtVirtualQVPieModelMapper*>( (QVPieModelMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QVPieModelMapper_delete(QVPieModelMapper* self) {
	delete self;
}

