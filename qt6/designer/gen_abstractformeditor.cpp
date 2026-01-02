#include <QChildEvent>
#include <QDesignerActionEditorInterface>
#include <QDesignerFormEditorInterface>
#include <QDesignerFormWindowManagerInterface>
#include <QDesignerIntegrationInterface>
#include <QDesignerMetaDataBaseInterface>
#include <QDesignerObjectInspectorInterface>
#include <QDesignerOptionsPageInterface>
#include <QDesignerPromotionInterface>
#include <QDesignerPropertyEditorInterface>
#include <QDesignerSettingsInterface>
#include <QDesignerWidgetBoxInterface>
#include <QDesignerWidgetDataBaseInterface>
#include <QDesignerWidgetFactoryInterface>
#include <QEvent>
#include <QExtensionManager>
#include <QIcon>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <abstractformeditor.h>
#include "gen_abstractformeditor.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QDesignerFormEditorInterface_event(QDesignerFormEditorInterface*, intptr_t, QEvent*);
bool miqt_exec_callback_QDesignerFormEditorInterface_eventFilter(QDesignerFormEditorInterface*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDesignerFormEditorInterface_timerEvent(QDesignerFormEditorInterface*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDesignerFormEditorInterface_childEvent(QDesignerFormEditorInterface*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDesignerFormEditorInterface_customEvent(QDesignerFormEditorInterface*, intptr_t, QEvent*);
void miqt_exec_callback_QDesignerFormEditorInterface_connectNotify(QDesignerFormEditorInterface*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDesignerFormEditorInterface_disconnectNotify(QDesignerFormEditorInterface*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDesignerFormEditorInterface final : public QDesignerFormEditorInterface {
public:

	MiqtVirtualQDesignerFormEditorInterface(): QDesignerFormEditorInterface() {}
	MiqtVirtualQDesignerFormEditorInterface(QObject* parent): QDesignerFormEditorInterface(parent) {}

	virtual ~MiqtVirtualQDesignerFormEditorInterface() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QDesignerFormEditorInterface::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QDesignerFormEditorInterface_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QDesignerFormEditorInterface_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QDesignerFormEditorInterface::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QDesignerFormEditorInterface_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QDesignerFormEditorInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QDesignerFormEditorInterface::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QDesignerFormEditorInterface_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QDesignerFormEditorInterface_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QDesignerFormEditorInterface::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QDesignerFormEditorInterface_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QDesignerFormEditorInterface_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QDesignerFormEditorInterface::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QDesignerFormEditorInterface_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QDesignerFormEditorInterface_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QDesignerFormEditorInterface::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDesignerFormEditorInterface_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QDesignerFormEditorInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QDesignerFormEditorInterface::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDesignerFormEditorInterface_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QDesignerFormEditorInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QDesignerFormEditorInterface_protectedbase_setFormManager(bool* _dynamic_cast_ok, void* self, QDesignerFormWindowManagerInterface* formWindowManager);
	friend void QDesignerFormEditorInterface_protectedbase_setMetaDataBase(bool* _dynamic_cast_ok, void* self, QDesignerMetaDataBaseInterface* metaDataBase);
	friend void QDesignerFormEditorInterface_protectedbase_setWidgetDataBase(bool* _dynamic_cast_ok, void* self, QDesignerWidgetDataBaseInterface* widgetDataBase);
	friend void QDesignerFormEditorInterface_protectedbase_setPromotion(bool* _dynamic_cast_ok, void* self, QDesignerPromotionInterface* promotion);
	friend void QDesignerFormEditorInterface_protectedbase_setWidgetFactory(bool* _dynamic_cast_ok, void* self, QDesignerWidgetFactoryInterface* widgetFactory);
	friend void QDesignerFormEditorInterface_protectedbase_setExtensionManager(bool* _dynamic_cast_ok, void* self, QExtensionManager* extensionManager);
	friend QObject* QDesignerFormEditorInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QDesignerFormEditorInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QDesignerFormEditorInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QDesignerFormEditorInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QDesignerFormEditorInterface* QDesignerFormEditorInterface_new() {
	return new (std::nothrow) MiqtVirtualQDesignerFormEditorInterface();
}

QDesignerFormEditorInterface* QDesignerFormEditorInterface_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQDesignerFormEditorInterface(parent);
}

void QDesignerFormEditorInterface_virtbase(QDesignerFormEditorInterface* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QDesignerFormEditorInterface_metaObject(const QDesignerFormEditorInterface* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDesignerFormEditorInterface_metacast(QDesignerFormEditorInterface* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDesignerFormEditorInterface_tr(const char* s) {
	QString _ret = QDesignerFormEditorInterface::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QExtensionManager* QDesignerFormEditorInterface_extensionManager(const QDesignerFormEditorInterface* self) {
	return self->extensionManager();
}

QWidget* QDesignerFormEditorInterface_topLevel(const QDesignerFormEditorInterface* self) {
	return self->topLevel();
}

QDesignerWidgetBoxInterface* QDesignerFormEditorInterface_widgetBox(const QDesignerFormEditorInterface* self) {
	return self->widgetBox();
}

QDesignerPropertyEditorInterface* QDesignerFormEditorInterface_propertyEditor(const QDesignerFormEditorInterface* self) {
	return self->propertyEditor();
}

QDesignerObjectInspectorInterface* QDesignerFormEditorInterface_objectInspector(const QDesignerFormEditorInterface* self) {
	return self->objectInspector();
}

QDesignerFormWindowManagerInterface* QDesignerFormEditorInterface_formWindowManager(const QDesignerFormEditorInterface* self) {
	return self->formWindowManager();
}

QDesignerWidgetDataBaseInterface* QDesignerFormEditorInterface_widgetDataBase(const QDesignerFormEditorInterface* self) {
	return self->widgetDataBase();
}

QDesignerMetaDataBaseInterface* QDesignerFormEditorInterface_metaDataBase(const QDesignerFormEditorInterface* self) {
	return self->metaDataBase();
}

QDesignerPromotionInterface* QDesignerFormEditorInterface_promotion(const QDesignerFormEditorInterface* self) {
	return self->promotion();
}

QDesignerWidgetFactoryInterface* QDesignerFormEditorInterface_widgetFactory(const QDesignerFormEditorInterface* self) {
	return self->widgetFactory();
}

QDesignerActionEditorInterface* QDesignerFormEditorInterface_actionEditor(const QDesignerFormEditorInterface* self) {
	return self->actionEditor();
}

QDesignerIntegrationInterface* QDesignerFormEditorInterface_integration(const QDesignerFormEditorInterface* self) {
	return self->integration();
}

QDesignerSettingsInterface* QDesignerFormEditorInterface_settingsManager(const QDesignerFormEditorInterface* self) {
	return self->settingsManager();
}

struct miqt_string QDesignerFormEditorInterface_resourceLocation(const QDesignerFormEditorInterface* self) {
	QString _ret = self->resourceLocation();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QDesignerOptionsPageInterface* */  QDesignerFormEditorInterface_optionsPages(const QDesignerFormEditorInterface* self) {
	QList<QDesignerOptionsPageInterface *> _ret = self->optionsPages();
	// Convert QList<> from C++ memory to manually-managed C memory
	QDesignerOptionsPageInterface** _arr = static_cast<QDesignerOptionsPageInterface**>(malloc(sizeof(QDesignerOptionsPageInterface*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QDesignerFormEditorInterface_setTopLevel(QDesignerFormEditorInterface* self, QWidget* topLevel) {
	self->setTopLevel(topLevel);
}

void QDesignerFormEditorInterface_setWidgetBox(QDesignerFormEditorInterface* self, QDesignerWidgetBoxInterface* widgetBox) {
	self->setWidgetBox(widgetBox);
}

void QDesignerFormEditorInterface_setPropertyEditor(QDesignerFormEditorInterface* self, QDesignerPropertyEditorInterface* propertyEditor) {
	self->setPropertyEditor(propertyEditor);
}

void QDesignerFormEditorInterface_setObjectInspector(QDesignerFormEditorInterface* self, QDesignerObjectInspectorInterface* objectInspector) {
	self->setObjectInspector(objectInspector);
}

void QDesignerFormEditorInterface_setActionEditor(QDesignerFormEditorInterface* self, QDesignerActionEditorInterface* actionEditor) {
	self->setActionEditor(actionEditor);
}

void QDesignerFormEditorInterface_setIntegration(QDesignerFormEditorInterface* self, QDesignerIntegrationInterface* integration) {
	self->setIntegration(integration);
}

void QDesignerFormEditorInterface_setSettingsManager(QDesignerFormEditorInterface* self, QDesignerSettingsInterface* settingsManager) {
	self->setSettingsManager(settingsManager);
}

void QDesignerFormEditorInterface_setOptionsPages(QDesignerFormEditorInterface* self, struct miqt_array /* of QDesignerOptionsPageInterface* */  optionsPages) {
	QList<QDesignerOptionsPageInterface *> optionsPages_QList;
	optionsPages_QList.reserve(optionsPages.len);
	QDesignerOptionsPageInterface** optionsPages_arr = static_cast<QDesignerOptionsPageInterface**>(optionsPages.data);
	for(size_t i = 0; i < optionsPages.len; ++i) {
		optionsPages_QList.push_back(optionsPages_arr[i]);
	}
	self->setOptionsPages(optionsPages_QList);
}

struct miqt_array /* of QObject* */  QDesignerFormEditorInterface_pluginInstances(const QDesignerFormEditorInterface* self) {
	QObjectList _ret = self->pluginInstances();
	// Convert QList<> from C++ memory to manually-managed C memory
	QObject** _arr = static_cast<QObject**>(malloc(sizeof(QObject*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QIcon* QDesignerFormEditorInterface_createIcon(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QIcon(QDesignerFormEditorInterface::createIcon(name_QString));
}

struct miqt_string QDesignerFormEditorInterface_tr2(const char* s, const char* c) {
	QString _ret = QDesignerFormEditorInterface::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerFormEditorInterface_tr3(const char* s, const char* c, int n) {
	QString _ret = QDesignerFormEditorInterface::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDesignerFormEditorInterface_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormEditorInterface*>( (QDesignerFormEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QDesignerFormEditorInterface_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQDesignerFormEditorInterface*>(self)->QDesignerFormEditorInterface::event(event);
}

bool QDesignerFormEditorInterface_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormEditorInterface*>( (QDesignerFormEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QDesignerFormEditorInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQDesignerFormEditorInterface*>(self)->QDesignerFormEditorInterface::eventFilter(watched, event);
}

bool QDesignerFormEditorInterface_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormEditorInterface*>( (QDesignerFormEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QDesignerFormEditorInterface_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQDesignerFormEditorInterface*>(self)->QDesignerFormEditorInterface::timerEvent(event);
}

bool QDesignerFormEditorInterface_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormEditorInterface*>( (QDesignerFormEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QDesignerFormEditorInterface_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQDesignerFormEditorInterface*>(self)->QDesignerFormEditorInterface::childEvent(event);
}

bool QDesignerFormEditorInterface_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormEditorInterface*>( (QDesignerFormEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QDesignerFormEditorInterface_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQDesignerFormEditorInterface*>(self)->QDesignerFormEditorInterface::customEvent(event);
}

bool QDesignerFormEditorInterface_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormEditorInterface*>( (QDesignerFormEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QDesignerFormEditorInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDesignerFormEditorInterface*>(self)->QDesignerFormEditorInterface::connectNotify(*signal);
}

bool QDesignerFormEditorInterface_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormEditorInterface*>( (QDesignerFormEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QDesignerFormEditorInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDesignerFormEditorInterface*>(self)->QDesignerFormEditorInterface::disconnectNotify(*signal);
}

void QDesignerFormEditorInterface_protectedbase_setFormManager(bool* _dynamic_cast_ok, void* self, QDesignerFormWindowManagerInterface* formWindowManager) {
	MiqtVirtualQDesignerFormEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormEditorInterface*>( (QDesignerFormEditorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setFormManager(formWindowManager);
}

void QDesignerFormEditorInterface_protectedbase_setMetaDataBase(bool* _dynamic_cast_ok, void* self, QDesignerMetaDataBaseInterface* metaDataBase) {
	MiqtVirtualQDesignerFormEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormEditorInterface*>( (QDesignerFormEditorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setMetaDataBase(metaDataBase);
}

void QDesignerFormEditorInterface_protectedbase_setWidgetDataBase(bool* _dynamic_cast_ok, void* self, QDesignerWidgetDataBaseInterface* widgetDataBase) {
	MiqtVirtualQDesignerFormEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormEditorInterface*>( (QDesignerFormEditorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setWidgetDataBase(widgetDataBase);
}

void QDesignerFormEditorInterface_protectedbase_setPromotion(bool* _dynamic_cast_ok, void* self, QDesignerPromotionInterface* promotion) {
	MiqtVirtualQDesignerFormEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormEditorInterface*>( (QDesignerFormEditorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setPromotion(promotion);
}

void QDesignerFormEditorInterface_protectedbase_setWidgetFactory(bool* _dynamic_cast_ok, void* self, QDesignerWidgetFactoryInterface* widgetFactory) {
	MiqtVirtualQDesignerFormEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormEditorInterface*>( (QDesignerFormEditorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setWidgetFactory(widgetFactory);
}

void QDesignerFormEditorInterface_protectedbase_setExtensionManager(bool* _dynamic_cast_ok, void* self, QExtensionManager* extensionManager) {
	MiqtVirtualQDesignerFormEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormEditorInterface*>( (QDesignerFormEditorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setExtensionManager(extensionManager);
}

QObject* QDesignerFormEditorInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDesignerFormEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormEditorInterface*>( (QDesignerFormEditorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QDesignerFormEditorInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDesignerFormEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormEditorInterface*>( (QDesignerFormEditorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QDesignerFormEditorInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQDesignerFormEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormEditorInterface*>( (QDesignerFormEditorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QDesignerFormEditorInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQDesignerFormEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormEditorInterface*>( (QDesignerFormEditorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QDesignerFormEditorInterface_delete(QDesignerFormEditorInterface* self) {
	delete self;
}

