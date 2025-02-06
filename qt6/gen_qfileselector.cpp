#include <QChildEvent>
#include <QEvent>
#include <QFileSelector>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <qfileselector.h>
#include "gen_qfileselector.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QFileSelector_event(QFileSelector*, intptr_t, QEvent*);
bool miqt_exec_callback_QFileSelector_eventFilter(QFileSelector*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QFileSelector_timerEvent(QFileSelector*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QFileSelector_childEvent(QFileSelector*, intptr_t, QChildEvent*);
void miqt_exec_callback_QFileSelector_customEvent(QFileSelector*, intptr_t, QEvent*);
void miqt_exec_callback_QFileSelector_connectNotify(QFileSelector*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QFileSelector_disconnectNotify(QFileSelector*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQFileSelector final : public QFileSelector {
public:

	MiqtVirtualQFileSelector(): QFileSelector() {};
	MiqtVirtualQFileSelector(QObject* parent): QFileSelector(parent) {};

	virtual ~MiqtVirtualQFileSelector() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QFileSelector::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QFileSelector_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QFileSelector::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QFileSelector::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QFileSelector_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QFileSelector::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QFileSelector::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QFileSelector_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QFileSelector::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QFileSelector::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QFileSelector_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QFileSelector::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QFileSelector::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFileSelector_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QFileSelector::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QFileSelector::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QFileSelector_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QFileSelector::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QFileSelector::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QFileSelector_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QFileSelector::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QFileSelector_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QFileSelector_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QFileSelector_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QFileSelector_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QFileSelector* QFileSelector_new() {
	return new MiqtVirtualQFileSelector();
}

QFileSelector* QFileSelector_new2(QObject* parent) {
	return new MiqtVirtualQFileSelector(parent);
}

void QFileSelector_virtbase(QFileSelector* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QFileSelector_metaObject(const QFileSelector* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFileSelector_metacast(QFileSelector* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QFileSelector_tr(const char* s) {
	QString _ret = QFileSelector::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileSelector_select(const QFileSelector* self, struct miqt_string filePath) {
	QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
	QString _ret = self->select(filePath_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUrl* QFileSelector_selectWithFilePath(const QFileSelector* self, QUrl* filePath) {
	return new QUrl(self->select(*filePath));
}

struct miqt_array /* of struct miqt_string */  QFileSelector_extraSelectors(const QFileSelector* self) {
	QStringList _ret = self->extraSelectors();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QFileSelector_setExtraSelectors(QFileSelector* self, struct miqt_array /* of struct miqt_string */  list) {
	QStringList list_QList;
	list_QList.reserve(list.len);
	struct miqt_string* list_arr = static_cast<struct miqt_string*>(list.data);
	for(size_t i = 0; i < list.len; ++i) {
		QString list_arr_i_QString = QString::fromUtf8(list_arr[i].data, list_arr[i].len);
		list_QList.push_back(list_arr_i_QString);
	}
	self->setExtraSelectors(list_QList);
}

struct miqt_array /* of struct miqt_string */  QFileSelector_allSelectors(const QFileSelector* self) {
	QStringList _ret = self->allSelectors();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QFileSelector_tr2(const char* s, const char* c) {
	QString _ret = QFileSelector::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileSelector_tr3(const char* s, const char* c, int n) {
	QString _ret = QFileSelector::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QFileSelector_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQFileSelector* self_cast = dynamic_cast<MiqtVirtualQFileSelector*>( (QFileSelector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QFileSelector_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQFileSelector*)(self) )->virtualbase_event(event);
}

bool QFileSelector_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQFileSelector* self_cast = dynamic_cast<MiqtVirtualQFileSelector*>( (QFileSelector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QFileSelector_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQFileSelector*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QFileSelector_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileSelector* self_cast = dynamic_cast<MiqtVirtualQFileSelector*>( (QFileSelector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QFileSelector_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQFileSelector*)(self) )->virtualbase_timerEvent(event);
}

bool QFileSelector_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileSelector* self_cast = dynamic_cast<MiqtVirtualQFileSelector*>( (QFileSelector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QFileSelector_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQFileSelector*)(self) )->virtualbase_childEvent(event);
}

bool QFileSelector_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileSelector* self_cast = dynamic_cast<MiqtVirtualQFileSelector*>( (QFileSelector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QFileSelector_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQFileSelector*)(self) )->virtualbase_customEvent(event);
}

bool QFileSelector_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFileSelector* self_cast = dynamic_cast<MiqtVirtualQFileSelector*>( (QFileSelector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QFileSelector_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQFileSelector*)(self) )->virtualbase_connectNotify(signal);
}

bool QFileSelector_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFileSelector* self_cast = dynamic_cast<MiqtVirtualQFileSelector*>( (QFileSelector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QFileSelector_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQFileSelector*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QFileSelector_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQFileSelector* self_cast = dynamic_cast<MiqtVirtualQFileSelector*>( (QFileSelector*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QFileSelector_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQFileSelector* self_cast = dynamic_cast<MiqtVirtualQFileSelector*>( (QFileSelector*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QFileSelector_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQFileSelector* self_cast = dynamic_cast<MiqtVirtualQFileSelector*>( (QFileSelector*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QFileSelector_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQFileSelector* self_cast = dynamic_cast<MiqtVirtualQFileSelector*>( (QFileSelector*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QFileSelector_delete(QFileSelector* self) {
	delete self;
}

