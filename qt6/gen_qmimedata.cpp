#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMetaType>
#include <QMimeData>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <qmimedata.h>
#include "gen_qmimedata.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QMimeData_hasFormat(const QMimeData*, intptr_t, struct miqt_string);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QMimeData_formats(const QMimeData*, intptr_t);
QVariant* miqt_exec_callback_QMimeData_retrieveData(const QMimeData*, intptr_t, struct miqt_string, QMetaType*);
bool miqt_exec_callback_QMimeData_event(QMimeData*, intptr_t, QEvent*);
bool miqt_exec_callback_QMimeData_eventFilter(QMimeData*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QMimeData_timerEvent(QMimeData*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QMimeData_childEvent(QMimeData*, intptr_t, QChildEvent*);
void miqt_exec_callback_QMimeData_customEvent(QMimeData*, intptr_t, QEvent*);
void miqt_exec_callback_QMimeData_connectNotify(QMimeData*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QMimeData_disconnectNotify(QMimeData*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQMimeData final : public QMimeData {
public:

	MiqtVirtualQMimeData(): QMimeData() {};

	virtual ~MiqtVirtualQMimeData() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasFormat = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasFormat(const QString& mimetype) const override {
		if (handle__hasFormat == 0) {
			return QMimeData::hasFormat(mimetype);
		}
		
		const QString mimetype_ret = mimetype;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray mimetype_b = mimetype_ret.toUtf8();
		struct miqt_string mimetype_ms;
		mimetype_ms.len = mimetype_b.length();
		mimetype_ms.data = static_cast<char*>(malloc(mimetype_ms.len));
		memcpy(mimetype_ms.data, mimetype_b.data(), mimetype_ms.len);
		struct miqt_string sigval1 = mimetype_ms;

		bool callback_return_value = miqt_exec_callback_QMimeData_hasFormat(this, handle__hasFormat, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasFormat(struct miqt_string mimetype) const {
		QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);

		return QMimeData::hasFormat(mimetype_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__formats = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList formats() const override {
		if (handle__formats == 0) {
			return QMimeData::formats();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QMimeData_formats(this, handle__formats);
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}

		return callback_return_value_QList;
	}

	// Wrapper to allow calling protected method
	struct miqt_array /* of struct miqt_string */  virtualbase_formats() const {

		QStringList _ret = QMimeData::formats();
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

	// cgo.Handle value for overwritten implementation
	intptr_t handle__retrieveData = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant retrieveData(const QString& mimetype, QMetaType preferredType) const override {
		if (handle__retrieveData == 0) {
			return QMimeData::retrieveData(mimetype, preferredType);
		}
		
		const QString mimetype_ret = mimetype;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray mimetype_b = mimetype_ret.toUtf8();
		struct miqt_string mimetype_ms;
		mimetype_ms.len = mimetype_b.length();
		mimetype_ms.data = static_cast<char*>(malloc(mimetype_ms.len));
		memcpy(mimetype_ms.data, mimetype_b.data(), mimetype_ms.len);
		struct miqt_string sigval1 = mimetype_ms;
		QMetaType* sigval2 = new QMetaType(preferredType);

		QVariant* callback_return_value = miqt_exec_callback_QMimeData_retrieveData(this, handle__retrieveData, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_retrieveData(struct miqt_string mimetype, QMetaType* preferredType) const {
		QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);

		return new QVariant(QMimeData::retrieveData(mimetype_QString, *preferredType));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QMimeData::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QMimeData_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QMimeData::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QMimeData::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QMimeData_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QMimeData::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QMimeData::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QMimeData_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QMimeData::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QMimeData::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QMimeData_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QMimeData::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QMimeData::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMimeData_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QMimeData::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QMimeData::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMimeData_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QMimeData::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QMimeData::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMimeData_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QMimeData::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QMimeData_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QMimeData_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QMimeData_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QMimeData_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QMimeData* QMimeData_new() {
	return new MiqtVirtualQMimeData();
}

void QMimeData_virtbase(QMimeData* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QMimeData_metaObject(const QMimeData* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMimeData_metacast(QMimeData* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMimeData_tr(const char* s) {
	QString _ret = QMimeData::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QUrl* */  QMimeData_urls(const QMimeData* self) {
	QList<QUrl> _ret = self->urls();
	// Convert QList<> from C++ memory to manually-managed C memory
	QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QUrl(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QMimeData_setUrls(QMimeData* self, struct miqt_array /* of QUrl* */  urls) {
	QList<QUrl> urls_QList;
	urls_QList.reserve(urls.len);
	QUrl** urls_arr = static_cast<QUrl**>(urls.data);
	for(size_t i = 0; i < urls.len; ++i) {
		urls_QList.push_back(*(urls_arr[i]));
	}
	self->setUrls(urls_QList);
}

bool QMimeData_hasUrls(const QMimeData* self) {
	return self->hasUrls();
}

struct miqt_string QMimeData_text(const QMimeData* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMimeData_setText(QMimeData* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

bool QMimeData_hasText(const QMimeData* self) {
	return self->hasText();
}

struct miqt_string QMimeData_html(const QMimeData* self) {
	QString _ret = self->html();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMimeData_setHtml(QMimeData* self, struct miqt_string html) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->setHtml(html_QString);
}

bool QMimeData_hasHtml(const QMimeData* self) {
	return self->hasHtml();
}

QVariant* QMimeData_imageData(const QMimeData* self) {
	return new QVariant(self->imageData());
}

void QMimeData_setImageData(QMimeData* self, QVariant* image) {
	self->setImageData(*image);
}

bool QMimeData_hasImage(const QMimeData* self) {
	return self->hasImage();
}

QVariant* QMimeData_colorData(const QMimeData* self) {
	return new QVariant(self->colorData());
}

void QMimeData_setColorData(QMimeData* self, QVariant* color) {
	self->setColorData(*color);
}

bool QMimeData_hasColor(const QMimeData* self) {
	return self->hasColor();
}

struct miqt_string QMimeData_data(const QMimeData* self, struct miqt_string mimetype) {
	QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
	QByteArray _qb = self->data(mimetype_QString);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QMimeData_setData(QMimeData* self, struct miqt_string mimetype, struct miqt_string data) {
	QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
	QByteArray data_QByteArray(data.data, data.len);
	self->setData(mimetype_QString, data_QByteArray);
}

void QMimeData_removeFormat(QMimeData* self, struct miqt_string mimetype) {
	QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
	self->removeFormat(mimetype_QString);
}

bool QMimeData_hasFormat(const QMimeData* self, struct miqt_string mimetype) {
	QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
	return self->hasFormat(mimetype_QString);
}

struct miqt_array /* of struct miqt_string */  QMimeData_formats(const QMimeData* self) {
	QStringList _ret = self->formats();
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

void QMimeData_clear(QMimeData* self) {
	self->clear();
}

struct miqt_string QMimeData_tr2(const char* s, const char* c) {
	QString _ret = QMimeData::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMimeData_tr3(const char* s, const char* c, int n) {
	QString _ret = QMimeData::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QMimeData_override_virtual_hasFormat(void* self, intptr_t slot) {
	MiqtVirtualQMimeData* self_cast = dynamic_cast<MiqtVirtualQMimeData*>( (QMimeData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasFormat = slot;
	return true;
}

bool QMimeData_virtualbase_hasFormat(const void* self, struct miqt_string mimetype) {
	return ( (const MiqtVirtualQMimeData*)(self) )->virtualbase_hasFormat(mimetype);
}

bool QMimeData_override_virtual_formats(void* self, intptr_t slot) {
	MiqtVirtualQMimeData* self_cast = dynamic_cast<MiqtVirtualQMimeData*>( (QMimeData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__formats = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QMimeData_virtualbase_formats(const void* self) {
	return ( (const MiqtVirtualQMimeData*)(self) )->virtualbase_formats();
}

bool QMimeData_override_virtual_retrieveData(void* self, intptr_t slot) {
	MiqtVirtualQMimeData* self_cast = dynamic_cast<MiqtVirtualQMimeData*>( (QMimeData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__retrieveData = slot;
	return true;
}

QVariant* QMimeData_virtualbase_retrieveData(const void* self, struct miqt_string mimetype, QMetaType* preferredType) {
	return ( (const MiqtVirtualQMimeData*)(self) )->virtualbase_retrieveData(mimetype, preferredType);
}

bool QMimeData_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQMimeData* self_cast = dynamic_cast<MiqtVirtualQMimeData*>( (QMimeData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QMimeData_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQMimeData*)(self) )->virtualbase_event(event);
}

bool QMimeData_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQMimeData* self_cast = dynamic_cast<MiqtVirtualQMimeData*>( (QMimeData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QMimeData_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQMimeData*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QMimeData_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQMimeData* self_cast = dynamic_cast<MiqtVirtualQMimeData*>( (QMimeData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QMimeData_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQMimeData*)(self) )->virtualbase_timerEvent(event);
}

bool QMimeData_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQMimeData* self_cast = dynamic_cast<MiqtVirtualQMimeData*>( (QMimeData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QMimeData_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQMimeData*)(self) )->virtualbase_childEvent(event);
}

bool QMimeData_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQMimeData* self_cast = dynamic_cast<MiqtVirtualQMimeData*>( (QMimeData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QMimeData_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQMimeData*)(self) )->virtualbase_customEvent(event);
}

bool QMimeData_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMimeData* self_cast = dynamic_cast<MiqtVirtualQMimeData*>( (QMimeData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QMimeData_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMimeData*)(self) )->virtualbase_connectNotify(signal);
}

bool QMimeData_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMimeData* self_cast = dynamic_cast<MiqtVirtualQMimeData*>( (QMimeData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QMimeData_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMimeData*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QMimeData_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMimeData* self_cast = dynamic_cast<MiqtVirtualQMimeData*>( (QMimeData*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QMimeData_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMimeData* self_cast = dynamic_cast<MiqtVirtualQMimeData*>( (QMimeData*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QMimeData_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQMimeData* self_cast = dynamic_cast<MiqtVirtualQMimeData*>( (QMimeData*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QMimeData_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQMimeData* self_cast = dynamic_cast<MiqtVirtualQMimeData*>( (QMimeData*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QMimeData_delete(QMimeData* self) {
	delete self;
}

