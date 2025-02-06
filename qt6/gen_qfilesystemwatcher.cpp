#include <QChildEvent>
#include <QEvent>
#include <QFileSystemWatcher>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qfilesystemwatcher.h>
#include "gen_qfilesystemwatcher.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QFileSystemWatcher_event(QFileSystemWatcher*, intptr_t, QEvent*);
bool miqt_exec_callback_QFileSystemWatcher_eventFilter(QFileSystemWatcher*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QFileSystemWatcher_timerEvent(QFileSystemWatcher*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QFileSystemWatcher_childEvent(QFileSystemWatcher*, intptr_t, QChildEvent*);
void miqt_exec_callback_QFileSystemWatcher_customEvent(QFileSystemWatcher*, intptr_t, QEvent*);
void miqt_exec_callback_QFileSystemWatcher_connectNotify(QFileSystemWatcher*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QFileSystemWatcher_disconnectNotify(QFileSystemWatcher*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQFileSystemWatcher final : public QFileSystemWatcher {
public:

	MiqtVirtualQFileSystemWatcher(): QFileSystemWatcher() {};
	MiqtVirtualQFileSystemWatcher(const QStringList& paths): QFileSystemWatcher(paths) {};
	MiqtVirtualQFileSystemWatcher(QObject* parent): QFileSystemWatcher(parent) {};
	MiqtVirtualQFileSystemWatcher(const QStringList& paths, QObject* parent): QFileSystemWatcher(paths, parent) {};

	virtual ~MiqtVirtualQFileSystemWatcher() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QFileSystemWatcher::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QFileSystemWatcher_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QFileSystemWatcher::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QFileSystemWatcher::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QFileSystemWatcher_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QFileSystemWatcher::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QFileSystemWatcher::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QFileSystemWatcher_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QFileSystemWatcher::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QFileSystemWatcher::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QFileSystemWatcher_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QFileSystemWatcher::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QFileSystemWatcher::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFileSystemWatcher_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QFileSystemWatcher::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QFileSystemWatcher::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QFileSystemWatcher_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QFileSystemWatcher::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QFileSystemWatcher::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QFileSystemWatcher_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QFileSystemWatcher::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QFileSystemWatcher_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QFileSystemWatcher_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QFileSystemWatcher_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QFileSystemWatcher_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QFileSystemWatcher* QFileSystemWatcher_new() {
	return new MiqtVirtualQFileSystemWatcher();
}

QFileSystemWatcher* QFileSystemWatcher_new2(struct miqt_array /* of struct miqt_string */  paths) {
	QStringList paths_QList;
	paths_QList.reserve(paths.len);
	struct miqt_string* paths_arr = static_cast<struct miqt_string*>(paths.data);
	for(size_t i = 0; i < paths.len; ++i) {
		QString paths_arr_i_QString = QString::fromUtf8(paths_arr[i].data, paths_arr[i].len);
		paths_QList.push_back(paths_arr_i_QString);
	}
	return new MiqtVirtualQFileSystemWatcher(paths_QList);
}

QFileSystemWatcher* QFileSystemWatcher_new3(QObject* parent) {
	return new MiqtVirtualQFileSystemWatcher(parent);
}

QFileSystemWatcher* QFileSystemWatcher_new4(struct miqt_array /* of struct miqt_string */  paths, QObject* parent) {
	QStringList paths_QList;
	paths_QList.reserve(paths.len);
	struct miqt_string* paths_arr = static_cast<struct miqt_string*>(paths.data);
	for(size_t i = 0; i < paths.len; ++i) {
		QString paths_arr_i_QString = QString::fromUtf8(paths_arr[i].data, paths_arr[i].len);
		paths_QList.push_back(paths_arr_i_QString);
	}
	return new MiqtVirtualQFileSystemWatcher(paths_QList, parent);
}

void QFileSystemWatcher_virtbase(QFileSystemWatcher* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QFileSystemWatcher_metaObject(const QFileSystemWatcher* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFileSystemWatcher_metacast(QFileSystemWatcher* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QFileSystemWatcher_tr(const char* s) {
	QString _ret = QFileSystemWatcher::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QFileSystemWatcher_addPath(QFileSystemWatcher* self, struct miqt_string file) {
	QString file_QString = QString::fromUtf8(file.data, file.len);
	return self->addPath(file_QString);
}

struct miqt_array /* of struct miqt_string */  QFileSystemWatcher_addPaths(QFileSystemWatcher* self, struct miqt_array /* of struct miqt_string */  files) {
	QStringList files_QList;
	files_QList.reserve(files.len);
	struct miqt_string* files_arr = static_cast<struct miqt_string*>(files.data);
	for(size_t i = 0; i < files.len; ++i) {
		QString files_arr_i_QString = QString::fromUtf8(files_arr[i].data, files_arr[i].len);
		files_QList.push_back(files_arr_i_QString);
	}
	QStringList _ret = self->addPaths(files_QList);
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

bool QFileSystemWatcher_removePath(QFileSystemWatcher* self, struct miqt_string file) {
	QString file_QString = QString::fromUtf8(file.data, file.len);
	return self->removePath(file_QString);
}

struct miqt_array /* of struct miqt_string */  QFileSystemWatcher_removePaths(QFileSystemWatcher* self, struct miqt_array /* of struct miqt_string */  files) {
	QStringList files_QList;
	files_QList.reserve(files.len);
	struct miqt_string* files_arr = static_cast<struct miqt_string*>(files.data);
	for(size_t i = 0; i < files.len; ++i) {
		QString files_arr_i_QString = QString::fromUtf8(files_arr[i].data, files_arr[i].len);
		files_QList.push_back(files_arr_i_QString);
	}
	QStringList _ret = self->removePaths(files_QList);
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

struct miqt_array /* of struct miqt_string */  QFileSystemWatcher_files(const QFileSystemWatcher* self) {
	QStringList _ret = self->files();
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

struct miqt_array /* of struct miqt_string */  QFileSystemWatcher_directories(const QFileSystemWatcher* self) {
	QStringList _ret = self->directories();
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

struct miqt_string QFileSystemWatcher_tr2(const char* s, const char* c) {
	QString _ret = QFileSystemWatcher::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileSystemWatcher_tr3(const char* s, const char* c, int n) {
	QString _ret = QFileSystemWatcher::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QFileSystemWatcher_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemWatcher* self_cast = dynamic_cast<MiqtVirtualQFileSystemWatcher*>( (QFileSystemWatcher*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QFileSystemWatcher_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQFileSystemWatcher*)(self) )->virtualbase_event(event);
}

bool QFileSystemWatcher_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemWatcher* self_cast = dynamic_cast<MiqtVirtualQFileSystemWatcher*>( (QFileSystemWatcher*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QFileSystemWatcher_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQFileSystemWatcher*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QFileSystemWatcher_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemWatcher* self_cast = dynamic_cast<MiqtVirtualQFileSystemWatcher*>( (QFileSystemWatcher*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QFileSystemWatcher_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQFileSystemWatcher*)(self) )->virtualbase_timerEvent(event);
}

bool QFileSystemWatcher_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemWatcher* self_cast = dynamic_cast<MiqtVirtualQFileSystemWatcher*>( (QFileSystemWatcher*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QFileSystemWatcher_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQFileSystemWatcher*)(self) )->virtualbase_childEvent(event);
}

bool QFileSystemWatcher_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemWatcher* self_cast = dynamic_cast<MiqtVirtualQFileSystemWatcher*>( (QFileSystemWatcher*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QFileSystemWatcher_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQFileSystemWatcher*)(self) )->virtualbase_customEvent(event);
}

bool QFileSystemWatcher_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemWatcher* self_cast = dynamic_cast<MiqtVirtualQFileSystemWatcher*>( (QFileSystemWatcher*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QFileSystemWatcher_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQFileSystemWatcher*)(self) )->virtualbase_connectNotify(signal);
}

bool QFileSystemWatcher_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemWatcher* self_cast = dynamic_cast<MiqtVirtualQFileSystemWatcher*>( (QFileSystemWatcher*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QFileSystemWatcher_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQFileSystemWatcher*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QFileSystemWatcher_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQFileSystemWatcher* self_cast = dynamic_cast<MiqtVirtualQFileSystemWatcher*>( (QFileSystemWatcher*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QFileSystemWatcher_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQFileSystemWatcher* self_cast = dynamic_cast<MiqtVirtualQFileSystemWatcher*>( (QFileSystemWatcher*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QFileSystemWatcher_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQFileSystemWatcher* self_cast = dynamic_cast<MiqtVirtualQFileSystemWatcher*>( (QFileSystemWatcher*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QFileSystemWatcher_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQFileSystemWatcher* self_cast = dynamic_cast<MiqtVirtualQFileSystemWatcher*>( (QFileSystemWatcher*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QFileSystemWatcher_delete(QFileSystemWatcher* self) {
	delete self;
}

