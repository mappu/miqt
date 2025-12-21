#include <QAbstractFormBuilder>
#include <QAction>
#include <QActionGroup>
#include <QDir>
#include <QIODevice>
#include <QLayout>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QWidget>
#include <abstractformbuilder.h>
#include "gen_abstractformbuilder.h"

#ifdef __cplusplus
extern "C" {
#endif

QWidget* miqt_exec_callback_QAbstractFormBuilder_load(QAbstractFormBuilder*, intptr_t, QIODevice*, QWidget*);
void miqt_exec_callback_QAbstractFormBuilder_save(QAbstractFormBuilder*, intptr_t, QIODevice*, QWidget*);
void miqt_exec_callback_QAbstractFormBuilder_addMenuAction(QAbstractFormBuilder*, intptr_t, QAction*);
QWidget* miqt_exec_callback_QAbstractFormBuilder_createWidget(QAbstractFormBuilder*, intptr_t, struct miqt_string, QWidget*, struct miqt_string);
QLayout* miqt_exec_callback_QAbstractFormBuilder_createLayout(QAbstractFormBuilder*, intptr_t, struct miqt_string, QObject*, struct miqt_string);
QAction* miqt_exec_callback_QAbstractFormBuilder_createAction(QAbstractFormBuilder*, intptr_t, QObject*, struct miqt_string);
QActionGroup* miqt_exec_callback_QAbstractFormBuilder_createActionGroup(QAbstractFormBuilder*, intptr_t, QObject*, struct miqt_string);
bool miqt_exec_callback_QAbstractFormBuilder_checkProperty(const QAbstractFormBuilder*, intptr_t, QObject*, struct miqt_string);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAbstractFormBuilder final : public QAbstractFormBuilder {
public:

	MiqtVirtualQAbstractFormBuilder(): QAbstractFormBuilder() {}

	virtual ~MiqtVirtualQAbstractFormBuilder() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__load = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* load(QIODevice* dev, QWidget* parentWidget) override {
		if (handle__load == 0) {
			return QAbstractFormBuilder::load(dev, parentWidget);
		}

		QIODevice* sigval1 = dev;
		QWidget* sigval2 = parentWidget;
		QWidget* callback_return_value = miqt_exec_callback_QAbstractFormBuilder_load(this, handle__load, sigval1, sigval2);
		return callback_return_value;
	}

	friend QWidget* QAbstractFormBuilder_virtualbase_load(void* self, QIODevice* dev, QWidget* parentWidget);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__save = 0;

	// Subclass to allow providing a Go implementation
	virtual void save(QIODevice* dev, QWidget* widget) override {
		if (handle__save == 0) {
			QAbstractFormBuilder::save(dev, widget);
			return;
		}

		QIODevice* sigval1 = dev;
		QWidget* sigval2 = widget;
		miqt_exec_callback_QAbstractFormBuilder_save(this, handle__save, sigval1, sigval2);

	}

	friend void QAbstractFormBuilder_virtualbase_save(void* self, QIODevice* dev, QWidget* widget);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__addMenuAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void addMenuAction(QAction* action) override {
		if (handle__addMenuAction == 0) {
			QAbstractFormBuilder::addMenuAction(action);
			return;
		}

		QAction* sigval1 = action;
		miqt_exec_callback_QAbstractFormBuilder_addMenuAction(this, handle__addMenuAction, sigval1);

	}

	friend void QAbstractFormBuilder_virtualbase_addMenuAction(void* self, QAction* action);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createWidget = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* createWidget(const QString& widgetName, QWidget* parentWidget, const QString& name) override {
		if (handle__createWidget == 0) {
			return QAbstractFormBuilder::createWidget(widgetName, parentWidget, name);
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
		QWidget* callback_return_value = miqt_exec_callback_QAbstractFormBuilder_createWidget(this, handle__createWidget, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend QWidget* QAbstractFormBuilder_virtualbase_createWidget(void* self, struct miqt_string widgetName, QWidget* parentWidget, struct miqt_string name);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createLayout = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayout* createLayout(const QString& layoutName, QObject* parent, const QString& name) override {
		if (handle__createLayout == 0) {
			return QAbstractFormBuilder::createLayout(layoutName, parent, name);
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
		QLayout* callback_return_value = miqt_exec_callback_QAbstractFormBuilder_createLayout(this, handle__createLayout, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend QLayout* QAbstractFormBuilder_virtualbase_createLayout(void* self, struct miqt_string layoutName, QObject* parent, struct miqt_string name);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createAction = 0;

	// Subclass to allow providing a Go implementation
	virtual QAction* createAction(QObject* parent, const QString& name) override {
		if (handle__createAction == 0) {
			return QAbstractFormBuilder::createAction(parent, name);
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
		QAction* callback_return_value = miqt_exec_callback_QAbstractFormBuilder_createAction(this, handle__createAction, sigval1, sigval2);
		return callback_return_value;
	}

	friend QAction* QAbstractFormBuilder_virtualbase_createAction(void* self, QObject* parent, struct miqt_string name);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createActionGroup = 0;

	// Subclass to allow providing a Go implementation
	virtual QActionGroup* createActionGroup(QObject* parent, const QString& name) override {
		if (handle__createActionGroup == 0) {
			return QAbstractFormBuilder::createActionGroup(parent, name);
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
		QActionGroup* callback_return_value = miqt_exec_callback_QAbstractFormBuilder_createActionGroup(this, handle__createActionGroup, sigval1, sigval2);
		return callback_return_value;
	}

	friend QActionGroup* QAbstractFormBuilder_virtualbase_createActionGroup(void* self, QObject* parent, struct miqt_string name);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__checkProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool checkProperty(QObject* obj, const QString& prop) const override {
		if (handle__checkProperty == 0) {
			return QAbstractFormBuilder::checkProperty(obj, prop);
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
		bool callback_return_value = miqt_exec_callback_QAbstractFormBuilder_checkProperty(this, handle__checkProperty, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QAbstractFormBuilder_virtualbase_checkProperty(const void* self, QObject* obj, struct miqt_string prop);

	// Wrappers to allow calling protected methods:
	friend bool QAbstractFormBuilder_protectedbase_applyPropertyInternally(bool* _dynamic_cast_ok, void* self, QObject* o, struct miqt_string propertyName, QVariant* value);
	friend void QAbstractFormBuilder_protectedbase_reset(bool* _dynamic_cast_ok, void* self);
};

QAbstractFormBuilder* QAbstractFormBuilder_new() {
	return new (std::nothrow) MiqtVirtualQAbstractFormBuilder();
}

QDir* QAbstractFormBuilder_workingDirectory(const QAbstractFormBuilder* self) {
	return new QDir(self->workingDirectory());
}

void QAbstractFormBuilder_setWorkingDirectory(QAbstractFormBuilder* self, QDir* directory) {
	self->setWorkingDirectory(*directory);
}

QWidget* QAbstractFormBuilder_load(QAbstractFormBuilder* self, QIODevice* dev, QWidget* parentWidget) {
	return self->load(dev, parentWidget);
}

void QAbstractFormBuilder_save(QAbstractFormBuilder* self, QIODevice* dev, QWidget* widget) {
	self->save(dev, widget);
}

struct miqt_string QAbstractFormBuilder_errorString(const QAbstractFormBuilder* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractFormBuilder_override_virtual_load(void* self, intptr_t slot) {
	MiqtVirtualQAbstractFormBuilder* self_cast = dynamic_cast<MiqtVirtualQAbstractFormBuilder*>( (QAbstractFormBuilder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__load = slot;
	return true;
}

QWidget* QAbstractFormBuilder_virtualbase_load(void* self, QIODevice* dev, QWidget* parentWidget) {
	return static_cast<MiqtVirtualQAbstractFormBuilder*>(self)->QAbstractFormBuilder::load(dev, parentWidget);
}

bool QAbstractFormBuilder_override_virtual_save(void* self, intptr_t slot) {
	MiqtVirtualQAbstractFormBuilder* self_cast = dynamic_cast<MiqtVirtualQAbstractFormBuilder*>( (QAbstractFormBuilder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__save = slot;
	return true;
}

void QAbstractFormBuilder_virtualbase_save(void* self, QIODevice* dev, QWidget* widget) {
	static_cast<MiqtVirtualQAbstractFormBuilder*>(self)->QAbstractFormBuilder::save(dev, widget);
}

bool QAbstractFormBuilder_override_virtual_addMenuAction(void* self, intptr_t slot) {
	MiqtVirtualQAbstractFormBuilder* self_cast = dynamic_cast<MiqtVirtualQAbstractFormBuilder*>( (QAbstractFormBuilder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__addMenuAction = slot;
	return true;
}

void QAbstractFormBuilder_virtualbase_addMenuAction(void* self, QAction* action) {
	static_cast<MiqtVirtualQAbstractFormBuilder*>(self)->QAbstractFormBuilder::addMenuAction(action);
}

bool QAbstractFormBuilder_override_virtual_createWidget(void* self, intptr_t slot) {
	MiqtVirtualQAbstractFormBuilder* self_cast = dynamic_cast<MiqtVirtualQAbstractFormBuilder*>( (QAbstractFormBuilder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__createWidget = slot;
	return true;
}

QWidget* QAbstractFormBuilder_virtualbase_createWidget(void* self, struct miqt_string widgetName, QWidget* parentWidget, struct miqt_string name) {
	QString widgetName_QString = QString::fromUtf8(widgetName.data, widgetName.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return static_cast<MiqtVirtualQAbstractFormBuilder*>(self)->QAbstractFormBuilder::createWidget(widgetName_QString, parentWidget, name_QString);
}

bool QAbstractFormBuilder_override_virtual_createLayout(void* self, intptr_t slot) {
	MiqtVirtualQAbstractFormBuilder* self_cast = dynamic_cast<MiqtVirtualQAbstractFormBuilder*>( (QAbstractFormBuilder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__createLayout = slot;
	return true;
}

QLayout* QAbstractFormBuilder_virtualbase_createLayout(void* self, struct miqt_string layoutName, QObject* parent, struct miqt_string name) {
	QString layoutName_QString = QString::fromUtf8(layoutName.data, layoutName.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return static_cast<MiqtVirtualQAbstractFormBuilder*>(self)->QAbstractFormBuilder::createLayout(layoutName_QString, parent, name_QString);
}

bool QAbstractFormBuilder_override_virtual_createAction(void* self, intptr_t slot) {
	MiqtVirtualQAbstractFormBuilder* self_cast = dynamic_cast<MiqtVirtualQAbstractFormBuilder*>( (QAbstractFormBuilder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__createAction = slot;
	return true;
}

QAction* QAbstractFormBuilder_virtualbase_createAction(void* self, QObject* parent, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return static_cast<MiqtVirtualQAbstractFormBuilder*>(self)->QAbstractFormBuilder::createAction(parent, name_QString);
}

bool QAbstractFormBuilder_override_virtual_createActionGroup(void* self, intptr_t slot) {
	MiqtVirtualQAbstractFormBuilder* self_cast = dynamic_cast<MiqtVirtualQAbstractFormBuilder*>( (QAbstractFormBuilder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__createActionGroup = slot;
	return true;
}

QActionGroup* QAbstractFormBuilder_virtualbase_createActionGroup(void* self, QObject* parent, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return static_cast<MiqtVirtualQAbstractFormBuilder*>(self)->QAbstractFormBuilder::createActionGroup(parent, name_QString);
}

bool QAbstractFormBuilder_override_virtual_checkProperty(void* self, intptr_t slot) {
	MiqtVirtualQAbstractFormBuilder* self_cast = dynamic_cast<MiqtVirtualQAbstractFormBuilder*>( (QAbstractFormBuilder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__checkProperty = slot;
	return true;
}

bool QAbstractFormBuilder_virtualbase_checkProperty(const void* self, QObject* obj, struct miqt_string prop) {
	QString prop_QString = QString::fromUtf8(prop.data, prop.len);
	return static_cast<const MiqtVirtualQAbstractFormBuilder*>(self)->QAbstractFormBuilder::checkProperty(obj, prop_QString);
}

bool QAbstractFormBuilder_protectedbase_applyPropertyInternally(bool* _dynamic_cast_ok, void* self, QObject* o, struct miqt_string propertyName, QVariant* value) {
	MiqtVirtualQAbstractFormBuilder* self_cast = dynamic_cast<MiqtVirtualQAbstractFormBuilder*>( (QAbstractFormBuilder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
		QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
	return self_cast->applyPropertyInternally(o, propertyName_QString, *value);
}

void QAbstractFormBuilder_protectedbase_reset(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractFormBuilder* self_cast = dynamic_cast<MiqtVirtualQAbstractFormBuilder*>( (QAbstractFormBuilder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->reset();
}

void QAbstractFormBuilder_delete(QAbstractFormBuilder* self) {
	delete self;
}

