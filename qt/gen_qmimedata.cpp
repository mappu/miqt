#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
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
#include "_cgo_export.h"

class MiqtVirtualQMimeData : public virtual QMimeData {
public:

	MiqtVirtualQMimeData(): QMimeData() {};

	virtual ~MiqtVirtualQMimeData() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasFormat = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasFormat(const QString& mimetype) const override {
		if (handle__HasFormat == 0) {
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

		bool callback_return_value = miqt_exec_callback_QMimeData_HasFormat(const_cast<MiqtVirtualQMimeData*>(this), handle__HasFormat, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasFormat(struct miqt_string mimetype) const {
		QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);

		return QMimeData::hasFormat(mimetype_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Formats = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList formats() const override {
		if (handle__Formats == 0) {
			return QMimeData::formats();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QMimeData_Formats(const_cast<MiqtVirtualQMimeData*>(this), handle__Formats);
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
	struct miqt_array /* of struct miqt_string */  virtualbase_Formats() const {

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
	intptr_t handle__RetrieveData = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant retrieveData(const QString& mimetype, QVariant::Type preferredType) const override {
		if (handle__RetrieveData == 0) {
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
		QVariant::Type preferredType_ret = preferredType;
		int sigval2 = static_cast<int>(preferredType_ret);

		QVariant* callback_return_value = miqt_exec_callback_QMimeData_RetrieveData(const_cast<MiqtVirtualQMimeData*>(this), handle__RetrieveData, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_RetrieveData(struct miqt_string mimetype, int preferredType) const {
		QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);

		return new QVariant(QMimeData::retrieveData(mimetype_QString, static_cast<QVariant::Type>(preferredType)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QMimeData::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QMimeData_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QMimeData::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QMimeData::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QMimeData_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QMimeData::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QMimeData::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QMimeData_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QMimeData::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QMimeData::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QMimeData_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QMimeData::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QMimeData::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMimeData_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QMimeData::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QMimeData::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMimeData_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QMimeData::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QMimeData::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMimeData_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QMimeData::disconnectNotify(*signal);

	}

};

QMimeData* QMimeData_new() {
	return new MiqtVirtualQMimeData();
}

void QMimeData_virtbase(QMimeData* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QMimeData_MetaObject(const QMimeData* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMimeData_Metacast(QMimeData* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMimeData_Tr(const char* s) {
	QString _ret = QMimeData::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMimeData_TrUtf8(const char* s) {
	QString _ret = QMimeData::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QUrl* */  QMimeData_Urls(const QMimeData* self) {
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

void QMimeData_SetUrls(QMimeData* self, struct miqt_array /* of QUrl* */  urls) {
	QList<QUrl> urls_QList;
	urls_QList.reserve(urls.len);
	QUrl** urls_arr = static_cast<QUrl**>(urls.data);
	for(size_t i = 0; i < urls.len; ++i) {
		urls_QList.push_back(*(urls_arr[i]));
	}
	self->setUrls(urls_QList);
}

bool QMimeData_HasUrls(const QMimeData* self) {
	return self->hasUrls();
}

struct miqt_string QMimeData_Text(const QMimeData* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMimeData_SetText(QMimeData* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

bool QMimeData_HasText(const QMimeData* self) {
	return self->hasText();
}

struct miqt_string QMimeData_Html(const QMimeData* self) {
	QString _ret = self->html();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMimeData_SetHtml(QMimeData* self, struct miqt_string html) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->setHtml(html_QString);
}

bool QMimeData_HasHtml(const QMimeData* self) {
	return self->hasHtml();
}

QVariant* QMimeData_ImageData(const QMimeData* self) {
	return new QVariant(self->imageData());
}

void QMimeData_SetImageData(QMimeData* self, QVariant* image) {
	self->setImageData(*image);
}

bool QMimeData_HasImage(const QMimeData* self) {
	return self->hasImage();
}

QVariant* QMimeData_ColorData(const QMimeData* self) {
	return new QVariant(self->colorData());
}

void QMimeData_SetColorData(QMimeData* self, QVariant* color) {
	self->setColorData(*color);
}

bool QMimeData_HasColor(const QMimeData* self) {
	return self->hasColor();
}

struct miqt_string QMimeData_Data(const QMimeData* self, struct miqt_string mimetype) {
	QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
	QByteArray _qb = self->data(mimetype_QString);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QMimeData_SetData(QMimeData* self, struct miqt_string mimetype, struct miqt_string data) {
	QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
	QByteArray data_QByteArray(data.data, data.len);
	self->setData(mimetype_QString, data_QByteArray);
}

void QMimeData_RemoveFormat(QMimeData* self, struct miqt_string mimetype) {
	QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
	self->removeFormat(mimetype_QString);
}

bool QMimeData_HasFormat(const QMimeData* self, struct miqt_string mimetype) {
	QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
	return self->hasFormat(mimetype_QString);
}

struct miqt_array /* of struct miqt_string */  QMimeData_Formats(const QMimeData* self) {
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

void QMimeData_Clear(QMimeData* self) {
	self->clear();
}

struct miqt_string QMimeData_Tr2(const char* s, const char* c) {
	QString _ret = QMimeData::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMimeData_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMimeData::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMimeData_TrUtf82(const char* s, const char* c) {
	QString _ret = QMimeData::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMimeData_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QMimeData::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMimeData_override_virtual_HasFormat(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMimeData*>( (QMimeData*)(self) )->handle__HasFormat = slot;
}

bool QMimeData_virtualbase_HasFormat(const void* self, struct miqt_string mimetype) {
	return ( (const MiqtVirtualQMimeData*)(self) )->virtualbase_HasFormat(mimetype);
}

void QMimeData_override_virtual_Formats(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMimeData*>( (QMimeData*)(self) )->handle__Formats = slot;
}

struct miqt_array /* of struct miqt_string */  QMimeData_virtualbase_Formats(const void* self) {
	return ( (const MiqtVirtualQMimeData*)(self) )->virtualbase_Formats();
}

void QMimeData_override_virtual_RetrieveData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMimeData*>( (QMimeData*)(self) )->handle__RetrieveData = slot;
}

QVariant* QMimeData_virtualbase_RetrieveData(const void* self, struct miqt_string mimetype, int preferredType) {
	return ( (const MiqtVirtualQMimeData*)(self) )->virtualbase_RetrieveData(mimetype, preferredType);
}

void QMimeData_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMimeData*>( (QMimeData*)(self) )->handle__Event = slot;
}

bool QMimeData_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQMimeData*)(self) )->virtualbase_Event(event);
}

void QMimeData_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMimeData*>( (QMimeData*)(self) )->handle__EventFilter = slot;
}

bool QMimeData_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQMimeData*)(self) )->virtualbase_EventFilter(watched, event);
}

void QMimeData_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMimeData*>( (QMimeData*)(self) )->handle__TimerEvent = slot;
}

void QMimeData_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQMimeData*)(self) )->virtualbase_TimerEvent(event);
}

void QMimeData_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMimeData*>( (QMimeData*)(self) )->handle__ChildEvent = slot;
}

void QMimeData_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQMimeData*)(self) )->virtualbase_ChildEvent(event);
}

void QMimeData_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMimeData*>( (QMimeData*)(self) )->handle__CustomEvent = slot;
}

void QMimeData_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQMimeData*)(self) )->virtualbase_CustomEvent(event);
}

void QMimeData_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMimeData*>( (QMimeData*)(self) )->handle__ConnectNotify = slot;
}

void QMimeData_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMimeData*)(self) )->virtualbase_ConnectNotify(signal);
}

void QMimeData_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMimeData*>( (QMimeData*)(self) )->handle__DisconnectNotify = slot;
}

void QMimeData_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMimeData*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QMimeData_Delete(QMimeData* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQMimeData*>( self );
	} else {
		delete self;
	}
}

