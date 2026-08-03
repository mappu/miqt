#include <QAbstractFormBuilder>
#include <QAction>
#include <QActionGroup>
#include <QFormBuilder>
#include <QIODevice>
#include <QLayout>
#include <QList>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QWidget>
#include <formbuilder.h>
#include "gen_formbuilder.h"

#ifdef __cplusplus
extern "C" {
#endif

QWidget* miqt_exec_callback_QFormBuilder_createWidget(QFormBuilder*, intptr_t, struct miqt_string, QWidget*, struct miqt_string);
QLayout* miqt_exec_callback_QFormBuilder_createLayout(QFormBuilder*, intptr_t, struct miqt_string, QObject*, struct miqt_string);
void miqt_exec_callback_QFormBuilder_updateCustomWidgets(QFormBuilder*, intptr_t);
QWidget* miqt_exec_callback_QFormBuilder_load(QFormBuilder*, intptr_t, QIODevice*, QWidget*);
void miqt_exec_callback_QFormBuilder_save(QFormBuilder*, intptr_t, QIODevice*, QWidget*);
void miqt_exec_callback_QFormBuilder_addMenuAction(QFormBuilder*, intptr_t, QAction*);
QAction* miqt_exec_callback_QFormBuilder_createAction(QFormBuilder*, intptr_t, QObject*, struct miqt_string);
QActionGroup* miqt_exec_callback_QFormBuilder_createActionGroup(QFormBuilder*, intptr_t, QObject*, struct miqt_string);
bool miqt_exec_callback_QFormBuilder_checkProperty(const QFormBuilder*, intptr_t, QObject*, struct miqt_string);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQFormBuilder final : public QFormBuilder {
public:

	MiqtVirtualQFormBuilder(): QFormBuilder() {}

	virtual ~MiqtVirtualQFormBuilder() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createWidget = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* createWidget(const QString& widgetName, QWidget* parentWidget, const QString& name) override {
		if (handle__createWidget == 0) {
			return QFormBuilder::createWidget(widgetName, parentWidget, name);
		}

		const QString widgetName_ret = widgetName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray widgetName_b = widgetName_ret.toUtf8();
		struct miqt_string widgetName_ms;
		widgetName_ms.len = widgetName_b.length();
		widgetName_ms.data = static_cast<char*>(malloc(widgetName_ms.len));
		memcpy(widgetName_ms.data, widgetName_b.data(), widgetName_ms.len);
		struct miqt_string sigval1 = widgetName_ms;
		QWidget* sigval2 = parentWidget;
		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval3 = name_ms;
		QWidget* callback_return_value = miqt_exec_callback_QFormBuilder_createWidget(this, handle__createWidget, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend QWidget* QFormBuilder_virtualbase_createWidget(void* self, struct miqt_string widgetName, QWidget* parentWidget, struct miqt_string name);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createLayout = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayout* createLayout(const QString& layoutName, QObject* parent, const QString& name) override {
		if (handle__createLayout == 0) {
			return QFormBuilder::createLayout(layoutName, parent, name);
		}

		const QString layoutName_ret = layoutName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray layoutName_b = layoutName_ret.toUtf8();
		struct miqt_string layoutName_ms;
		layoutName_ms.len = layoutName_b.length();
		layoutName_ms.data = static_cast<char*>(malloc(layoutName_ms.len));
		memcpy(layoutName_ms.data, layoutName_b.data(), layoutName_ms.len);
		struct miqt_string sigval1 = layoutName_ms;
		QObject* sigval2 = parent;
		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval3 = name_ms;
		QLayout* callback_return_value = miqt_exec_callback_QFormBuilder_createLayout(this, handle__createLayout, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend QLayout* QFormBuilder_virtualbase_createLayout(void* self, struct miqt_string layoutName, QObject* parent, struct miqt_string name);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateCustomWidgets = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateCustomWidgets() override {
		if (handle__updateCustomWidgets == 0) {
			QFormBuilder::updateCustomWidgets();
			return;
		}

		miqt_exec_callback_QFormBuilder_updateCustomWidgets(this, handle__updateCustomWidgets);

	}

	friend void QFormBuilder_virtualbase_updateCustomWidgets(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__load = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* load(QIODevice* dev, QWidget* parentWidget) override {
		if (handle__load == 0) {
			return QFormBuilder::load(dev, parentWidget);
		}

		QIODevice* sigval1 = dev;
		QWidget* sigval2 = parentWidget;
		QWidget* callback_return_value = miqt_exec_callback_QFormBuilder_load(this, handle__load, sigval1, sigval2);
		return callback_return_value;
	}

	friend QWidget* QFormBuilder_virtualbase_load(void* self, QIODevice* dev, QWidget* parentWidget);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__save = 0;

	// Subclass to allow providing a Go implementation
	virtual void save(QIODevice* dev, QWidget* widget) override {
		if (handle__save == 0) {
			QFormBuilder::save(dev, widget);
			return;
		}

		QIODevice* sigval1 = dev;
		QWidget* sigval2 = widget;
		miqt_exec_callback_QFormBuilder_save(this, handle__save, sigval1, sigval2);

	}

	friend void QFormBuilder_virtualbase_save(void* self, QIODevice* dev, QWidget* widget);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__addMenuAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void addMenuAction(QAction* action) override {
		if (handle__addMenuAction == 0) {
			QFormBuilder::addMenuAction(action);
			return;
		}

		QAction* sigval1 = action;
		miqt_exec_callback_QFormBuilder_addMenuAction(this, handle__addMenuAction, sigval1);

	}

	friend void QFormBuilder_virtualbase_addMenuAction(void* self, QAction* action);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createAction = 0;

	// Subclass to allow providing a Go implementation
	virtual QAction* createAction(QObject* parent, const QString& name) override {
		if (handle__createAction == 0) {
			return QFormBuilder::createAction(parent, name);
		}

		QObject* sigval1 = parent;
		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval2 = name_ms;
		QAction* callback_return_value = miqt_exec_callback_QFormBuilder_createAction(this, handle__createAction, sigval1, sigval2);
		return callback_return_value;
	}

	friend QAction* QFormBuilder_virtualbase_createAction(void* self, QObject* parent, struct miqt_string name);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createActionGroup = 0;

	// Subclass to allow providing a Go implementation
	virtual QActionGroup* createActionGroup(QObject* parent, const QString& name) override {
		if (handle__createActionGroup == 0) {
			return QFormBuilder::createActionGroup(parent, name);
		}

		QObject* sigval1 = parent;
		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval2 = name_ms;
		QActionGroup* callback_return_value = miqt_exec_callback_QFormBuilder_createActionGroup(this, handle__createActionGroup, sigval1, sigval2);
		return callback_return_value;
	}

	friend QActionGroup* QFormBuilder_virtualbase_createActionGroup(void* self, QObject* parent, struct miqt_string name);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__checkProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool checkProperty(QObject* obj, const QString& prop) const override {
		if (handle__checkProperty == 0) {
			return QFormBuilder::checkProperty(obj, prop);
		}

		QObject* sigval1 = obj;
		const QString prop_ret = prop;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray prop_b = prop_ret.toUtf8();
		struct miqt_string prop_ms;
		prop_ms.len = prop_b.length();
		prop_ms.data = static_cast<char*>(malloc(prop_ms.len));
		memcpy(prop_ms.data, prop_b.data(), prop_ms.len);
		struct miqt_string sigval2 = prop_ms;
		bool callback_return_value = miqt_exec_callback_QFormBuilder_checkProperty(this, handle__checkProperty, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QFormBuilder_virtualbase_checkProperty(const void* self, QObject* obj, struct miqt_string prop);

	// Wrappers to allow calling protected methods:
	friend bool QFormBuilder_protectedbase_applyPropertyInternally(bool* _dynamic_cast_ok, void* self, QObject* o, struct miqt_string propertyName, QVariant* value);
	friend void QFormBuilder_protectedbase_reset(bool* _dynamic_cast_ok, void* self);
};

QFormBuilder* QFormBuilder_new() {
	return new (std::nothrow) MiqtVirtualQFormBuilder();
}

void QFormBuilder_virtbase(QFormBuilder* src, QAbstractFormBuilder** outptr_QAbstractFormBuilder) {
	*outptr_QAbstractFormBuilder = static_cast<QAbstractFormBuilder*>(src);
}

struct miqt_array /* of struct miqt_string */  QFormBuilder_pluginPaths(const QFormBuilder* self) {
	QStringList _ret = self->pluginPaths();
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

void QFormBuilder_clearPluginPaths(QFormBuilder* self) {
	self->clearPluginPaths();
}

void QFormBuilder_addPluginPath(QFormBuilder* self, struct miqt_string pluginPath) {
	QString pluginPath_QString = QString::fromUtf8(pluginPath.data, pluginPath.len);
	self->addPluginPath(pluginPath_QString);
}

void QFormBuilder_setPluginPath(QFormBuilder* self, struct miqt_array /* of struct miqt_string */  pluginPaths) {
	QStringList pluginPaths_QList;
	pluginPaths_QList.reserve(pluginPaths.len);
	struct miqt_string* pluginPaths_arr = static_cast<struct miqt_string*>(pluginPaths.data);
	for(size_t i = 0; i < pluginPaths.len; ++i) {
		QString pluginPaths_arr_i_QString = QString::fromUtf8(pluginPaths_arr[i].data, pluginPaths_arr[i].len);
		pluginPaths_QList.push_back(pluginPaths_arr_i_QString);
	}
	self->setPluginPath(pluginPaths_QList);
}

bool QFormBuilder_override_virtual_createWidget(void* self, intptr_t slot) {
	MiqtVirtualQFormBuilder* self_cast = dynamic_cast<MiqtVirtualQFormBuilder*>( (QFormBuilder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__createWidget = slot;
	return true;
}

QWidget* QFormBuilder_virtualbase_createWidget(void* self, struct miqt_string widgetName, QWidget* parentWidget, struct miqt_string name) {
	QString widgetName_QString = QString::fromUtf8(widgetName.data, widgetName.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return static_cast<MiqtVirtualQFormBuilder*>(self)->QFormBuilder::createWidget(widgetName_QString, parentWidget, name_QString);
}

bool QFormBuilder_override_virtual_createLayout(void* self, intptr_t slot) {
	MiqtVirtualQFormBuilder* self_cast = dynamic_cast<MiqtVirtualQFormBuilder*>( (QFormBuilder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__createLayout = slot;
	return true;
}

QLayout* QFormBuilder_virtualbase_createLayout(void* self, struct miqt_string layoutName, QObject* parent, struct miqt_string name) {
	QString layoutName_QString = QString::fromUtf8(layoutName.data, layoutName.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return static_cast<MiqtVirtualQFormBuilder*>(self)->QFormBuilder::createLayout(layoutName_QString, parent, name_QString);
}

bool QFormBuilder_override_virtual_updateCustomWidgets(void* self, intptr_t slot) {
	MiqtVirtualQFormBuilder* self_cast = dynamic_cast<MiqtVirtualQFormBuilder*>( (QFormBuilder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateCustomWidgets = slot;
	return true;
}

void QFormBuilder_virtualbase_updateCustomWidgets(void* self) {
	static_cast<MiqtVirtualQFormBuilder*>(self)->QFormBuilder::updateCustomWidgets();
}

bool QFormBuilder_override_virtual_load(void* self, intptr_t slot) {
	MiqtVirtualQFormBuilder* self_cast = dynamic_cast<MiqtVirtualQFormBuilder*>( (QFormBuilder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__load = slot;
	return true;
}

QWidget* QFormBuilder_virtualbase_load(void* self, QIODevice* dev, QWidget* parentWidget) {
	return static_cast<MiqtVirtualQFormBuilder*>(self)->QFormBuilder::load(dev, parentWidget);
}

bool QFormBuilder_override_virtual_save(void* self, intptr_t slot) {
	MiqtVirtualQFormBuilder* self_cast = dynamic_cast<MiqtVirtualQFormBuilder*>( (QFormBuilder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__save = slot;
	return true;
}

void QFormBuilder_virtualbase_save(void* self, QIODevice* dev, QWidget* widget) {
	static_cast<MiqtVirtualQFormBuilder*>(self)->QFormBuilder::save(dev, widget);
}

bool QFormBuilder_override_virtual_addMenuAction(void* self, intptr_t slot) {
	MiqtVirtualQFormBuilder* self_cast = dynamic_cast<MiqtVirtualQFormBuilder*>( (QFormBuilder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__addMenuAction = slot;
	return true;
}

void QFormBuilder_virtualbase_addMenuAction(void* self, QAction* action) {
	static_cast<MiqtVirtualQFormBuilder*>(self)->QFormBuilder::addMenuAction(action);
}

bool QFormBuilder_override_virtual_createAction(void* self, intptr_t slot) {
	MiqtVirtualQFormBuilder* self_cast = dynamic_cast<MiqtVirtualQFormBuilder*>( (QFormBuilder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__createAction = slot;
	return true;
}

QAction* QFormBuilder_virtualbase_createAction(void* self, QObject* parent, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return static_cast<MiqtVirtualQFormBuilder*>(self)->QFormBuilder::createAction(parent, name_QString);
}

bool QFormBuilder_override_virtual_createActionGroup(void* self, intptr_t slot) {
	MiqtVirtualQFormBuilder* self_cast = dynamic_cast<MiqtVirtualQFormBuilder*>( (QFormBuilder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__createActionGroup = slot;
	return true;
}

QActionGroup* QFormBuilder_virtualbase_createActionGroup(void* self, QObject* parent, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return static_cast<MiqtVirtualQFormBuilder*>(self)->QFormBuilder::createActionGroup(parent, name_QString);
}

bool QFormBuilder_override_virtual_checkProperty(void* self, intptr_t slot) {
	MiqtVirtualQFormBuilder* self_cast = dynamic_cast<MiqtVirtualQFormBuilder*>( (QFormBuilder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__checkProperty = slot;
	return true;
}

bool QFormBuilder_virtualbase_checkProperty(const void* self, QObject* obj, struct miqt_string prop) {
	QString prop_QString = QString::fromUtf8(prop.data, prop.len);
	return static_cast<const MiqtVirtualQFormBuilder*>(self)->QFormBuilder::checkProperty(obj, prop_QString);
}

bool QFormBuilder_protectedbase_applyPropertyInternally(bool* _dynamic_cast_ok, void* self, QObject* o, struct miqt_string propertyName, QVariant* value) {
	MiqtVirtualQFormBuilder* self_cast = dynamic_cast<MiqtVirtualQFormBuilder*>( (QFormBuilder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
		QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
	return self_cast->applyPropertyInternally(o, propertyName_QString, *value);
}

void QFormBuilder_protectedbase_reset(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFormBuilder* self_cast = dynamic_cast<MiqtVirtualQFormBuilder*>( (QFormBuilder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->reset();
}

void QFormBuilder_delete(QFormBuilder* self) {
	delete self;
}

