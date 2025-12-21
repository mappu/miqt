#include <QChildEvent>
#include <QDesignerFormEditorInterface>
#include <QDesignerWidgetDataBaseInterface>
#include <QDesignerWidgetDataBaseItemInterface>
#include <QEvent>
#include <QIcon>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <abstractwidgetdatabase.h>
#include "gen_abstractwidgetdatabase.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QDesignerWidgetDataBaseInterface_changed(intptr_t);
int miqt_exec_callback_QDesignerWidgetDataBaseInterface_count(const QDesignerWidgetDataBaseInterface*, intptr_t);
QDesignerWidgetDataBaseItemInterface* miqt_exec_callback_QDesignerWidgetDataBaseInterface_item(const QDesignerWidgetDataBaseInterface*, intptr_t, int);
int miqt_exec_callback_QDesignerWidgetDataBaseInterface_indexOf(const QDesignerWidgetDataBaseInterface*, intptr_t, QDesignerWidgetDataBaseItemInterface*);
void miqt_exec_callback_QDesignerWidgetDataBaseInterface_insert(QDesignerWidgetDataBaseInterface*, intptr_t, int, QDesignerWidgetDataBaseItemInterface*);
void miqt_exec_callback_QDesignerWidgetDataBaseInterface_append(QDesignerWidgetDataBaseInterface*, intptr_t, QDesignerWidgetDataBaseItemInterface*);
int miqt_exec_callback_QDesignerWidgetDataBaseInterface_indexOfObject(const QDesignerWidgetDataBaseInterface*, intptr_t, QObject*, bool);
int miqt_exec_callback_QDesignerWidgetDataBaseInterface_indexOfClassName(const QDesignerWidgetDataBaseInterface*, intptr_t, struct miqt_string, bool);
QDesignerFormEditorInterface* miqt_exec_callback_QDesignerWidgetDataBaseInterface_core(const QDesignerWidgetDataBaseInterface*, intptr_t);
bool miqt_exec_callback_QDesignerWidgetDataBaseInterface_event(QDesignerWidgetDataBaseInterface*, intptr_t, QEvent*);
bool miqt_exec_callback_QDesignerWidgetDataBaseInterface_eventFilter(QDesignerWidgetDataBaseInterface*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDesignerWidgetDataBaseInterface_timerEvent(QDesignerWidgetDataBaseInterface*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDesignerWidgetDataBaseInterface_childEvent(QDesignerWidgetDataBaseInterface*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDesignerWidgetDataBaseInterface_customEvent(QDesignerWidgetDataBaseInterface*, intptr_t, QEvent*);
void miqt_exec_callback_QDesignerWidgetDataBaseInterface_connectNotify(QDesignerWidgetDataBaseInterface*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDesignerWidgetDataBaseInterface_disconnectNotify(QDesignerWidgetDataBaseInterface*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

struct miqt_string QDesignerWidgetDataBaseItemInterface_name(const QDesignerWidgetDataBaseItemInterface* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerWidgetDataBaseItemInterface_setName(QDesignerWidgetDataBaseItemInterface* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setName(name_QString);
}

struct miqt_string QDesignerWidgetDataBaseItemInterface_group(const QDesignerWidgetDataBaseItemInterface* self) {
	QString _ret = self->group();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerWidgetDataBaseItemInterface_setGroup(QDesignerWidgetDataBaseItemInterface* self, struct miqt_string group) {
	QString group_QString = QString::fromUtf8(group.data, group.len);
	self->setGroup(group_QString);
}

struct miqt_string QDesignerWidgetDataBaseItemInterface_toolTip(const QDesignerWidgetDataBaseItemInterface* self) {
	QString _ret = self->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerWidgetDataBaseItemInterface_setToolTip(QDesignerWidgetDataBaseItemInterface* self, struct miqt_string toolTip) {
	QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
	self->setToolTip(toolTip_QString);
}

struct miqt_string QDesignerWidgetDataBaseItemInterface_whatsThis(const QDesignerWidgetDataBaseItemInterface* self) {
	QString _ret = self->whatsThis();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerWidgetDataBaseItemInterface_setWhatsThis(QDesignerWidgetDataBaseItemInterface* self, struct miqt_string whatsThis) {
	QString whatsThis_QString = QString::fromUtf8(whatsThis.data, whatsThis.len);
	self->setWhatsThis(whatsThis_QString);
}

struct miqt_string QDesignerWidgetDataBaseItemInterface_includeFile(const QDesignerWidgetDataBaseItemInterface* self) {
	QString _ret = self->includeFile();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerWidgetDataBaseItemInterface_setIncludeFile(QDesignerWidgetDataBaseItemInterface* self, struct miqt_string includeFile) {
	QString includeFile_QString = QString::fromUtf8(includeFile.data, includeFile.len);
	self->setIncludeFile(includeFile_QString);
}

QIcon* QDesignerWidgetDataBaseItemInterface_icon(const QDesignerWidgetDataBaseItemInterface* self) {
	return new QIcon(self->icon());
}

void QDesignerWidgetDataBaseItemInterface_setIcon(QDesignerWidgetDataBaseItemInterface* self, QIcon* icon) {
	self->setIcon(*icon);
}

bool QDesignerWidgetDataBaseItemInterface_isCompat(const QDesignerWidgetDataBaseItemInterface* self) {
	return self->isCompat();
}

void QDesignerWidgetDataBaseItemInterface_setCompat(QDesignerWidgetDataBaseItemInterface* self, bool compat) {
	self->setCompat(compat);
}

bool QDesignerWidgetDataBaseItemInterface_isContainer(const QDesignerWidgetDataBaseItemInterface* self) {
	return self->isContainer();
}

void QDesignerWidgetDataBaseItemInterface_setContainer(QDesignerWidgetDataBaseItemInterface* self, bool container) {
	self->setContainer(container);
}

bool QDesignerWidgetDataBaseItemInterface_isCustom(const QDesignerWidgetDataBaseItemInterface* self) {
	return self->isCustom();
}

void QDesignerWidgetDataBaseItemInterface_setCustom(QDesignerWidgetDataBaseItemInterface* self, bool custom) {
	self->setCustom(custom);
}

struct miqt_string QDesignerWidgetDataBaseItemInterface_pluginPath(const QDesignerWidgetDataBaseItemInterface* self) {
	QString _ret = self->pluginPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerWidgetDataBaseItemInterface_setPluginPath(QDesignerWidgetDataBaseItemInterface* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	self->setPluginPath(path_QString);
}

bool QDesignerWidgetDataBaseItemInterface_isPromoted(const QDesignerWidgetDataBaseItemInterface* self) {
	return self->isPromoted();
}

void QDesignerWidgetDataBaseItemInterface_setPromoted(QDesignerWidgetDataBaseItemInterface* self, bool b) {
	self->setPromoted(b);
}

struct miqt_string QDesignerWidgetDataBaseItemInterface_extends(const QDesignerWidgetDataBaseItemInterface* self) {
	QString _ret = self->extends();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerWidgetDataBaseItemInterface_setExtends(QDesignerWidgetDataBaseItemInterface* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	self->setExtends(s_QString);
}

void QDesignerWidgetDataBaseItemInterface_setDefaultPropertyValues(QDesignerWidgetDataBaseItemInterface* self, struct miqt_array /* of QVariant* */  list) {
	QList<QVariant> list_QList;
	list_QList.reserve(list.len);
	QVariant** list_arr = static_cast<QVariant**>(list.data);
	for(size_t i = 0; i < list.len; ++i) {
		list_QList.push_back(*(list_arr[i]));
	}
	self->setDefaultPropertyValues(list_QList);
}

struct miqt_array /* of QVariant* */  QDesignerWidgetDataBaseItemInterface_defaultPropertyValues(const QDesignerWidgetDataBaseItemInterface* self) {
	QList<QVariant> _ret = self->defaultPropertyValues();
	// Convert QList<> from C++ memory to manually-managed C memory
	QVariant** _arr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QVariant(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QDesignerWidgetDataBaseItemInterface_operatorAssign(QDesignerWidgetDataBaseItemInterface* self, QDesignerWidgetDataBaseItemInterface* param1) {
	self->operator=(*param1);
}

void QDesignerWidgetDataBaseItemInterface_delete(QDesignerWidgetDataBaseItemInterface* self) {
	delete self;
}

class MiqtVirtualQDesignerWidgetDataBaseInterface final : public QDesignerWidgetDataBaseInterface {
public:

	MiqtVirtualQDesignerWidgetDataBaseInterface(): QDesignerWidgetDataBaseInterface() {}
	MiqtVirtualQDesignerWidgetDataBaseInterface(QObject* parent): QDesignerWidgetDataBaseInterface(parent) {}

	virtual ~MiqtVirtualQDesignerWidgetDataBaseInterface() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__count = 0;

	// Subclass to allow providing a Go implementation
	virtual int count() const override {
		if (handle__count == 0) {
			return QDesignerWidgetDataBaseInterface::count();
		}

		int callback_return_value = miqt_exec_callback_QDesignerWidgetDataBaseInterface_count(this, handle__count);
		return static_cast<int>(callback_return_value);
	}

	friend int QDesignerWidgetDataBaseInterface_virtualbase_count(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__item = 0;

	// Subclass to allow providing a Go implementation
	virtual QDesignerWidgetDataBaseItemInterface* item(int index) const override {
		if (handle__item == 0) {
			return QDesignerWidgetDataBaseInterface::item(index);
		}

		int sigval1 = index;
		QDesignerWidgetDataBaseItemInterface* callback_return_value = miqt_exec_callback_QDesignerWidgetDataBaseInterface_item(this, handle__item, sigval1);
		return callback_return_value;
	}

	friend QDesignerWidgetDataBaseItemInterface* QDesignerWidgetDataBaseInterface_virtualbase_item(const void* self, int index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indexOf = 0;

	// Subclass to allow providing a Go implementation
	virtual int indexOf(QDesignerWidgetDataBaseItemInterface* item) const override {
		if (handle__indexOf == 0) {
			return QDesignerWidgetDataBaseInterface::indexOf(item);
		}

		QDesignerWidgetDataBaseItemInterface* sigval1 = item;
		int callback_return_value = miqt_exec_callback_QDesignerWidgetDataBaseInterface_indexOf(this, handle__indexOf, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QDesignerWidgetDataBaseInterface_virtualbase_indexOf(const void* self, QDesignerWidgetDataBaseItemInterface* item);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insert = 0;

	// Subclass to allow providing a Go implementation
	virtual void insert(int index, QDesignerWidgetDataBaseItemInterface* item) override {
		if (handle__insert == 0) {
			QDesignerWidgetDataBaseInterface::insert(index, item);
			return;
		}

		int sigval1 = index;
		QDesignerWidgetDataBaseItemInterface* sigval2 = item;
		miqt_exec_callback_QDesignerWidgetDataBaseInterface_insert(this, handle__insert, sigval1, sigval2);

	}

	friend void QDesignerWidgetDataBaseInterface_virtualbase_insert(void* self, int index, QDesignerWidgetDataBaseItemInterface* item);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__append = 0;

	// Subclass to allow providing a Go implementation
	virtual void append(QDesignerWidgetDataBaseItemInterface* item) override {
		if (handle__append == 0) {
			QDesignerWidgetDataBaseInterface::append(item);
			return;
		}

		QDesignerWidgetDataBaseItemInterface* sigval1 = item;
		miqt_exec_callback_QDesignerWidgetDataBaseInterface_append(this, handle__append, sigval1);

	}

	friend void QDesignerWidgetDataBaseInterface_virtualbase_append(void* self, QDesignerWidgetDataBaseItemInterface* item);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indexOfObject = 0;

	// Subclass to allow providing a Go implementation
	virtual int indexOfObject(QObject* object, bool resolveName) const override {
		if (handle__indexOfObject == 0) {
			return QDesignerWidgetDataBaseInterface::indexOfObject(object, resolveName);
		}

		QObject* sigval1 = object;
		bool sigval2 = resolveName;
		int callback_return_value = miqt_exec_callback_QDesignerWidgetDataBaseInterface_indexOfObject(this, handle__indexOfObject, sigval1, sigval2);
		return static_cast<int>(callback_return_value);
	}

	friend int QDesignerWidgetDataBaseInterface_virtualbase_indexOfObject(const void* self, QObject* object, bool resolveName);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indexOfClassName = 0;

	// Subclass to allow providing a Go implementation
	virtual int indexOfClassName(const QString& className, bool resolveName) const override {
		if (handle__indexOfClassName == 0) {
			return QDesignerWidgetDataBaseInterface::indexOfClassName(className, resolveName);
		}

		const QString className_ret = className;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray className_b = className_ret.toUtf8();
		struct miqt_string className_ms;
		className_ms.len = className_b.length();
		className_ms.data = static_cast<char*>(malloc(className_ms.len));
		memcpy(className_ms.data, className_b.data(), className_ms.len);
		struct miqt_string sigval1 = className_ms;
		bool sigval2 = resolveName;
		int callback_return_value = miqt_exec_callback_QDesignerWidgetDataBaseInterface_indexOfClassName(this, handle__indexOfClassName, sigval1, sigval2);
		return static_cast<int>(callback_return_value);
	}

	friend int QDesignerWidgetDataBaseInterface_virtualbase_indexOfClassName(const void* self, struct miqt_string className, bool resolveName);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__core = 0;

	// Subclass to allow providing a Go implementation
	virtual QDesignerFormEditorInterface* core() const override {
		if (handle__core == 0) {
			return QDesignerWidgetDataBaseInterface::core();
		}

		QDesignerFormEditorInterface* callback_return_value = miqt_exec_callback_QDesignerWidgetDataBaseInterface_core(this, handle__core);
		return callback_return_value;
	}

	friend QDesignerFormEditorInterface* QDesignerWidgetDataBaseInterface_virtualbase_core(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QDesignerWidgetDataBaseInterface::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QDesignerWidgetDataBaseInterface_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QDesignerWidgetDataBaseInterface_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QDesignerWidgetDataBaseInterface::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QDesignerWidgetDataBaseInterface_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QDesignerWidgetDataBaseInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QDesignerWidgetDataBaseInterface::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetDataBaseInterface_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QDesignerWidgetDataBaseInterface_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QDesignerWidgetDataBaseInterface::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetDataBaseInterface_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QDesignerWidgetDataBaseInterface_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QDesignerWidgetDataBaseInterface::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetDataBaseInterface_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QDesignerWidgetDataBaseInterface_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QDesignerWidgetDataBaseInterface::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDesignerWidgetDataBaseInterface_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QDesignerWidgetDataBaseInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QDesignerWidgetDataBaseInterface::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDesignerWidgetDataBaseInterface_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QDesignerWidgetDataBaseInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QDesignerWidgetDataBaseInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QDesignerWidgetDataBaseInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QDesignerWidgetDataBaseInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QDesignerWidgetDataBaseInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QDesignerWidgetDataBaseInterface* QDesignerWidgetDataBaseInterface_new() {
	return new (std::nothrow) MiqtVirtualQDesignerWidgetDataBaseInterface();
}

QDesignerWidgetDataBaseInterface* QDesignerWidgetDataBaseInterface_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQDesignerWidgetDataBaseInterface(parent);
}

void QDesignerWidgetDataBaseInterface_virtbase(QDesignerWidgetDataBaseInterface* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QDesignerWidgetDataBaseInterface_metaObject(const QDesignerWidgetDataBaseInterface* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDesignerWidgetDataBaseInterface_metacast(QDesignerWidgetDataBaseInterface* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDesignerWidgetDataBaseInterface_tr(const char* s) {
	QString _ret = QDesignerWidgetDataBaseInterface::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerWidgetDataBaseInterface_trUtf8(const char* s) {
	QString _ret = QDesignerWidgetDataBaseInterface::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QDesignerWidgetDataBaseInterface_count(const QDesignerWidgetDataBaseInterface* self) {
	return self->count();
}

QDesignerWidgetDataBaseItemInterface* QDesignerWidgetDataBaseInterface_item(const QDesignerWidgetDataBaseInterface* self, int index) {
	return self->item(static_cast<int>(index));
}

int QDesignerWidgetDataBaseInterface_indexOf(const QDesignerWidgetDataBaseInterface* self, QDesignerWidgetDataBaseItemInterface* item) {
	return self->indexOf(item);
}

void QDesignerWidgetDataBaseInterface_insert(QDesignerWidgetDataBaseInterface* self, int index, QDesignerWidgetDataBaseItemInterface* item) {
	self->insert(static_cast<int>(index), item);
}

void QDesignerWidgetDataBaseInterface_append(QDesignerWidgetDataBaseInterface* self, QDesignerWidgetDataBaseItemInterface* item) {
	self->append(item);
}

int QDesignerWidgetDataBaseInterface_indexOfObject(const QDesignerWidgetDataBaseInterface* self, QObject* object, bool resolveName) {
	return self->indexOfObject(object, resolveName);
}

int QDesignerWidgetDataBaseInterface_indexOfClassName(const QDesignerWidgetDataBaseInterface* self, struct miqt_string className, bool resolveName) {
	QString className_QString = QString::fromUtf8(className.data, className.len);
	return self->indexOfClassName(className_QString, resolveName);
}

QDesignerFormEditorInterface* QDesignerWidgetDataBaseInterface_core(const QDesignerWidgetDataBaseInterface* self) {
	return self->core();
}

bool QDesignerWidgetDataBaseInterface_isContainer(const QDesignerWidgetDataBaseInterface* self, QObject* object) {
	return self->isContainer(object);
}

bool QDesignerWidgetDataBaseInterface_isCustom(const QDesignerWidgetDataBaseInterface* self, QObject* object) {
	return self->isCustom(object);
}

void QDesignerWidgetDataBaseInterface_changed(QDesignerWidgetDataBaseInterface* self) {
	self->changed();
}

void QDesignerWidgetDataBaseInterface_connect_changed(QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
	QDesignerWidgetDataBaseInterface::connect(self, static_cast<void (QDesignerWidgetDataBaseInterface::*)()>(&QDesignerWidgetDataBaseInterface::changed), self, [=]() {
		miqt_exec_callback_QDesignerWidgetDataBaseInterface_changed(slot);
	});
}

struct miqt_string QDesignerWidgetDataBaseInterface_tr2(const char* s, const char* c) {
	QString _ret = QDesignerWidgetDataBaseInterface::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerWidgetDataBaseInterface_tr3(const char* s, const char* c, int n) {
	QString _ret = QDesignerWidgetDataBaseInterface::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerWidgetDataBaseInterface_trUtf82(const char* s, const char* c) {
	QString _ret = QDesignerWidgetDataBaseInterface::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerWidgetDataBaseInterface_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QDesignerWidgetDataBaseInterface::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDesignerWidgetDataBaseInterface_isContainer2(const QDesignerWidgetDataBaseInterface* self, QObject* object, bool resolveName) {
	return self->isContainer(object, resolveName);
}

bool QDesignerWidgetDataBaseInterface_isCustom2(const QDesignerWidgetDataBaseInterface* self, QObject* object, bool resolveName) {
	return self->isCustom(object, resolveName);
}

bool QDesignerWidgetDataBaseInterface_override_virtual_count(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__count = slot;
	return true;
}

int QDesignerWidgetDataBaseInterface_virtualbase_count(const void* self) {
	return static_cast<const MiqtVirtualQDesignerWidgetDataBaseInterface*>(self)->QDesignerWidgetDataBaseInterface::count();
}

bool QDesignerWidgetDataBaseInterface_override_virtual_item(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__item = slot;
	return true;
}

QDesignerWidgetDataBaseItemInterface* QDesignerWidgetDataBaseInterface_virtualbase_item(const void* self, int index) {
	return static_cast<const MiqtVirtualQDesignerWidgetDataBaseInterface*>(self)->QDesignerWidgetDataBaseInterface::item(static_cast<int>(index));
}

bool QDesignerWidgetDataBaseInterface_override_virtual_indexOf(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indexOf = slot;
	return true;
}

int QDesignerWidgetDataBaseInterface_virtualbase_indexOf(const void* self, QDesignerWidgetDataBaseItemInterface* item) {
	return static_cast<const MiqtVirtualQDesignerWidgetDataBaseInterface*>(self)->QDesignerWidgetDataBaseInterface::indexOf(item);
}

bool QDesignerWidgetDataBaseInterface_override_virtual_insert(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__insert = slot;
	return true;
}

void QDesignerWidgetDataBaseInterface_virtualbase_insert(void* self, int index, QDesignerWidgetDataBaseItemInterface* item) {
	static_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>(self)->QDesignerWidgetDataBaseInterface::insert(static_cast<int>(index), item);
}

bool QDesignerWidgetDataBaseInterface_override_virtual_append(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__append = slot;
	return true;
}

void QDesignerWidgetDataBaseInterface_virtualbase_append(void* self, QDesignerWidgetDataBaseItemInterface* item) {
	static_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>(self)->QDesignerWidgetDataBaseInterface::append(item);
}

bool QDesignerWidgetDataBaseInterface_override_virtual_indexOfObject(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indexOfObject = slot;
	return true;
}

int QDesignerWidgetDataBaseInterface_virtualbase_indexOfObject(const void* self, QObject* object, bool resolveName) {
	return static_cast<const MiqtVirtualQDesignerWidgetDataBaseInterface*>(self)->QDesignerWidgetDataBaseInterface::indexOfObject(object, resolveName);
}

bool QDesignerWidgetDataBaseInterface_override_virtual_indexOfClassName(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indexOfClassName = slot;
	return true;
}

int QDesignerWidgetDataBaseInterface_virtualbase_indexOfClassName(const void* self, struct miqt_string className, bool resolveName) {
	QString className_QString = QString::fromUtf8(className.data, className.len);
	return static_cast<const MiqtVirtualQDesignerWidgetDataBaseInterface*>(self)->QDesignerWidgetDataBaseInterface::indexOfClassName(className_QString, resolveName);
}

bool QDesignerWidgetDataBaseInterface_override_virtual_core(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__core = slot;
	return true;
}

QDesignerFormEditorInterface* QDesignerWidgetDataBaseInterface_virtualbase_core(const void* self) {
	return static_cast<const MiqtVirtualQDesignerWidgetDataBaseInterface*>(self)->QDesignerWidgetDataBaseInterface::core();
}

bool QDesignerWidgetDataBaseInterface_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QDesignerWidgetDataBaseInterface_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>(self)->QDesignerWidgetDataBaseInterface::event(event);
}

bool QDesignerWidgetDataBaseInterface_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QDesignerWidgetDataBaseInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>(self)->QDesignerWidgetDataBaseInterface::eventFilter(watched, event);
}

bool QDesignerWidgetDataBaseInterface_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QDesignerWidgetDataBaseInterface_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>(self)->QDesignerWidgetDataBaseInterface::timerEvent(event);
}

bool QDesignerWidgetDataBaseInterface_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QDesignerWidgetDataBaseInterface_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>(self)->QDesignerWidgetDataBaseInterface::childEvent(event);
}

bool QDesignerWidgetDataBaseInterface_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QDesignerWidgetDataBaseInterface_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>(self)->QDesignerWidgetDataBaseInterface::customEvent(event);
}

bool QDesignerWidgetDataBaseInterface_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QDesignerWidgetDataBaseInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>(self)->QDesignerWidgetDataBaseInterface::connectNotify(*signal);
}

bool QDesignerWidgetDataBaseInterface_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QDesignerWidgetDataBaseInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>(self)->QDesignerWidgetDataBaseInterface::disconnectNotify(*signal);
}

QObject* QDesignerWidgetDataBaseInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QDesignerWidgetDataBaseInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QDesignerWidgetDataBaseInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QDesignerWidgetDataBaseInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QDesignerWidgetDataBaseInterface_delete(QDesignerWidgetDataBaseInterface* self) {
	delete self;
}

