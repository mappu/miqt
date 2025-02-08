#include <QChildEvent>
#include <QEvent>
#include <QLocale>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QTranslator>
#include <qtranslator.h>
#include "gen_qtranslator.h"

#ifdef __cplusplus
extern "C" {
#endif

struct miqt_string miqt_exec_callback_QTranslator_translate(const QTranslator*, intptr_t, const char*, const char*, const char*, int);
bool miqt_exec_callback_QTranslator_isEmpty(const QTranslator*, intptr_t);
bool miqt_exec_callback_QTranslator_event(QTranslator*, intptr_t, QEvent*);
bool miqt_exec_callback_QTranslator_eventFilter(QTranslator*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QTranslator_timerEvent(QTranslator*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QTranslator_childEvent(QTranslator*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTranslator_customEvent(QTranslator*, intptr_t, QEvent*);
void miqt_exec_callback_QTranslator_connectNotify(QTranslator*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTranslator_disconnectNotify(QTranslator*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQTranslator final : public QTranslator {
public:

	MiqtVirtualQTranslator(): QTranslator() {};
	MiqtVirtualQTranslator(QObject* parent): QTranslator(parent) {};

	virtual ~MiqtVirtualQTranslator() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__translate = 0;

	// Subclass to allow providing a Go implementation
	virtual QString translate(const char* context, const char* sourceText, const char* disambiguation, int n) const override {
		if (handle__translate == 0) {
			return QTranslator::translate(context, sourceText, disambiguation, n);
		}
		
		const char* sigval1 = (const char*) context;
		const char* sigval2 = (const char*) sourceText;
		const char* sigval3 = (const char*) disambiguation;
		int sigval4 = n;

		struct miqt_string callback_return_value = miqt_exec_callback_QTranslator_translate(this, handle__translate, sigval1, sigval2, sigval3, sigval4);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_translate(const char* context, const char* sourceText, const char* disambiguation, int n) const {

		QString _ret = QTranslator::translate(context, sourceText, disambiguation, static_cast<int>(n));
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _b = _ret.toUtf8();
		struct miqt_string _ms;
		_ms.len = _b.length();
		_ms.data = static_cast<char*>(malloc(_ms.len));
		memcpy(_ms.data, _b.data(), _ms.len);
		return _ms;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isEmpty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isEmpty() const override {
		if (handle__isEmpty == 0) {
			return QTranslator::isEmpty();
		}
		

		bool callback_return_value = miqt_exec_callback_QTranslator_isEmpty(this, handle__isEmpty);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isEmpty() const {

		return QTranslator::isEmpty();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QTranslator::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QTranslator_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QTranslator::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QTranslator::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QTranslator_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QTranslator::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QTranslator::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QTranslator_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QTranslator::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QTranslator::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QTranslator_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QTranslator::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QTranslator::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTranslator_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QTranslator::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QTranslator::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTranslator_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QTranslator::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QTranslator::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTranslator_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QTranslator::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QTranslator_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QTranslator_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QTranslator_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QTranslator_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QTranslator* QTranslator_new() {
	return new MiqtVirtualQTranslator();
}

QTranslator* QTranslator_new2(QObject* parent) {
	return new MiqtVirtualQTranslator(parent);
}

void QTranslator_virtbase(QTranslator* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QTranslator_metaObject(const QTranslator* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTranslator_metacast(QTranslator* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTranslator_tr(const char* s) {
	QString _ret = QTranslator::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTranslator_trUtf8(const char* s) {
	QString _ret = QTranslator::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTranslator_translate(const QTranslator* self, const char* context, const char* sourceText, const char* disambiguation, int n) {
	QString _ret = self->translate(context, sourceText, disambiguation, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTranslator_isEmpty(const QTranslator* self) {
	return self->isEmpty();
}

struct miqt_string QTranslator_language(const QTranslator* self) {
	QString _ret = self->language();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTranslator_filePath(const QTranslator* self) {
	QString _ret = self->filePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTranslator_load(QTranslator* self, struct miqt_string filename) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return self->load(filename_QString);
}

bool QTranslator_load2(QTranslator* self, QLocale* locale, struct miqt_string filename) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return self->load(*locale, filename_QString);
}

bool QTranslator_load3(QTranslator* self, const unsigned char* data, int len) {
	return self->load(static_cast<const uchar*>(data), static_cast<int>(len));
}

struct miqt_string QTranslator_tr2(const char* s, const char* c) {
	QString _ret = QTranslator::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTranslator_tr3(const char* s, const char* c, int n) {
	QString _ret = QTranslator::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTranslator_trUtf82(const char* s, const char* c) {
	QString _ret = QTranslator::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTranslator_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QTranslator::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTranslator_load22(QTranslator* self, struct miqt_string filename, struct miqt_string directory) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	QString directory_QString = QString::fromUtf8(directory.data, directory.len);
	return self->load(filename_QString, directory_QString);
}

bool QTranslator_load32(QTranslator* self, struct miqt_string filename, struct miqt_string directory, struct miqt_string search_delimiters) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	QString directory_QString = QString::fromUtf8(directory.data, directory.len);
	QString search_delimiters_QString = QString::fromUtf8(search_delimiters.data, search_delimiters.len);
	return self->load(filename_QString, directory_QString, search_delimiters_QString);
}

bool QTranslator_load4(QTranslator* self, struct miqt_string filename, struct miqt_string directory, struct miqt_string search_delimiters, struct miqt_string suffix) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	QString directory_QString = QString::fromUtf8(directory.data, directory.len);
	QString search_delimiters_QString = QString::fromUtf8(search_delimiters.data, search_delimiters.len);
	QString suffix_QString = QString::fromUtf8(suffix.data, suffix.len);
	return self->load(filename_QString, directory_QString, search_delimiters_QString, suffix_QString);
}

bool QTranslator_load33(QTranslator* self, QLocale* locale, struct miqt_string filename, struct miqt_string prefix) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self->load(*locale, filename_QString, prefix_QString);
}

bool QTranslator_load42(QTranslator* self, QLocale* locale, struct miqt_string filename, struct miqt_string prefix, struct miqt_string directory) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	QString directory_QString = QString::fromUtf8(directory.data, directory.len);
	return self->load(*locale, filename_QString, prefix_QString, directory_QString);
}

bool QTranslator_load5(QTranslator* self, QLocale* locale, struct miqt_string filename, struct miqt_string prefix, struct miqt_string directory, struct miqt_string suffix) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	QString directory_QString = QString::fromUtf8(directory.data, directory.len);
	QString suffix_QString = QString::fromUtf8(suffix.data, suffix.len);
	return self->load(*locale, filename_QString, prefix_QString, directory_QString, suffix_QString);
}

bool QTranslator_load34(QTranslator* self, const unsigned char* data, int len, struct miqt_string directory) {
	QString directory_QString = QString::fromUtf8(directory.data, directory.len);
	return self->load(static_cast<const uchar*>(data), static_cast<int>(len), directory_QString);
}

bool QTranslator_override_virtual_translate(void* self, intptr_t slot) {
	MiqtVirtualQTranslator* self_cast = dynamic_cast<MiqtVirtualQTranslator*>( (QTranslator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__translate = slot;
	return true;
}

struct miqt_string QTranslator_virtualbase_translate(const void* self, const char* context, const char* sourceText, const char* disambiguation, int n) {
	return ( (const MiqtVirtualQTranslator*)(self) )->virtualbase_translate(context, sourceText, disambiguation, n);
}

bool QTranslator_override_virtual_isEmpty(void* self, intptr_t slot) {
	MiqtVirtualQTranslator* self_cast = dynamic_cast<MiqtVirtualQTranslator*>( (QTranslator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isEmpty = slot;
	return true;
}

bool QTranslator_virtualbase_isEmpty(const void* self) {
	return ( (const MiqtVirtualQTranslator*)(self) )->virtualbase_isEmpty();
}

bool QTranslator_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQTranslator* self_cast = dynamic_cast<MiqtVirtualQTranslator*>( (QTranslator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QTranslator_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQTranslator*)(self) )->virtualbase_event(event);
}

bool QTranslator_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTranslator* self_cast = dynamic_cast<MiqtVirtualQTranslator*>( (QTranslator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QTranslator_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQTranslator*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QTranslator_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQTranslator* self_cast = dynamic_cast<MiqtVirtualQTranslator*>( (QTranslator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QTranslator_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQTranslator*)(self) )->virtualbase_timerEvent(event);
}

bool QTranslator_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQTranslator* self_cast = dynamic_cast<MiqtVirtualQTranslator*>( (QTranslator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QTranslator_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQTranslator*)(self) )->virtualbase_childEvent(event);
}

bool QTranslator_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQTranslator* self_cast = dynamic_cast<MiqtVirtualQTranslator*>( (QTranslator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QTranslator_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTranslator*)(self) )->virtualbase_customEvent(event);
}

bool QTranslator_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTranslator* self_cast = dynamic_cast<MiqtVirtualQTranslator*>( (QTranslator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QTranslator_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTranslator*)(self) )->virtualbase_connectNotify(signal);
}

bool QTranslator_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTranslator* self_cast = dynamic_cast<MiqtVirtualQTranslator*>( (QTranslator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QTranslator_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTranslator*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QTranslator_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTranslator* self_cast = dynamic_cast<MiqtVirtualQTranslator*>( (QTranslator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QTranslator_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTranslator* self_cast = dynamic_cast<MiqtVirtualQTranslator*>( (QTranslator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QTranslator_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQTranslator* self_cast = dynamic_cast<MiqtVirtualQTranslator*>( (QTranslator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QTranslator_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQTranslator* self_cast = dynamic_cast<MiqtVirtualQTranslator*>( (QTranslator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QTranslator_delete(QTranslator* self) {
	delete self;
}

