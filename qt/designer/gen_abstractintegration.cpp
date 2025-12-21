#include <QChildEvent>
#include <QDesignerFormEditorInterface>
#include <QDesignerFormWindowInterface>
#include <QDesignerIntegration>
#include <QDesignerIntegrationInterface>
#include <QDesignerResourceBrowserInterface>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <abstractintegration.h>
#include "gen_abstractintegration.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QDesignerIntegrationInterface_propertyChanged(intptr_t, QDesignerFormWindowInterface*, struct miqt_string, QVariant*);
void miqt_exec_callback_QDesignerIntegrationInterface_objectNameChanged(intptr_t, QDesignerFormWindowInterface*, QObject*, struct miqt_string, struct miqt_string);
void miqt_exec_callback_QDesignerIntegrationInterface_helpRequested(intptr_t, struct miqt_string, struct miqt_string);
void miqt_exec_callback_QDesignerIntegrationInterface_navigateToSlot(intptr_t, struct miqt_string, struct miqt_string, struct miqt_array /* of struct miqt_string */ );
void miqt_exec_callback_QDesignerIntegrationInterface_navigateToSlotWithSlotSignature(intptr_t, struct miqt_string);
QWidget* miqt_exec_callback_QDesignerIntegrationInterface_containerWindow(const QDesignerIntegrationInterface*, intptr_t, QWidget*);
QDesignerResourceBrowserInterface* miqt_exec_callback_QDesignerIntegrationInterface_createResourceBrowser(QDesignerIntegrationInterface*, intptr_t, QWidget*);
struct miqt_string miqt_exec_callback_QDesignerIntegrationInterface_headerSuffix(const QDesignerIntegrationInterface*, intptr_t);
void miqt_exec_callback_QDesignerIntegrationInterface_setHeaderSuffix(QDesignerIntegrationInterface*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QDesignerIntegrationInterface_isHeaderLowercase(const QDesignerIntegrationInterface*, intptr_t);
void miqt_exec_callback_QDesignerIntegrationInterface_setHeaderLowercase(QDesignerIntegrationInterface*, intptr_t, bool);
int miqt_exec_callback_QDesignerIntegrationInterface_features(const QDesignerIntegrationInterface*, intptr_t);
int miqt_exec_callback_QDesignerIntegrationInterface_resourceFileWatcherBehaviour(const QDesignerIntegrationInterface*, intptr_t);
void miqt_exec_callback_QDesignerIntegrationInterface_setResourceFileWatcherBehaviour(QDesignerIntegrationInterface*, intptr_t, int);
struct miqt_string miqt_exec_callback_QDesignerIntegrationInterface_contextHelpId(const QDesignerIntegrationInterface*, intptr_t);
void miqt_exec_callback_QDesignerIntegrationInterface_setFeatures(QDesignerIntegrationInterface*, intptr_t, int);
void miqt_exec_callback_QDesignerIntegrationInterface_updateProperty(QDesignerIntegrationInterface*, intptr_t, struct miqt_string, QVariant*, bool);
void miqt_exec_callback_QDesignerIntegrationInterface_updateProperty2(QDesignerIntegrationInterface*, intptr_t, struct miqt_string, QVariant*);
void miqt_exec_callback_QDesignerIntegrationInterface_resetProperty(QDesignerIntegrationInterface*, intptr_t, struct miqt_string);
void miqt_exec_callback_QDesignerIntegrationInterface_addDynamicProperty(QDesignerIntegrationInterface*, intptr_t, struct miqt_string, QVariant*);
void miqt_exec_callback_QDesignerIntegrationInterface_removeDynamicProperty(QDesignerIntegrationInterface*, intptr_t, struct miqt_string);
void miqt_exec_callback_QDesignerIntegrationInterface_updateActiveFormWindow(QDesignerIntegrationInterface*, intptr_t, QDesignerFormWindowInterface*);
void miqt_exec_callback_QDesignerIntegrationInterface_setupFormWindow(QDesignerIntegrationInterface*, intptr_t, QDesignerFormWindowInterface*);
void miqt_exec_callback_QDesignerIntegrationInterface_updateSelection(QDesignerIntegrationInterface*, intptr_t);
void miqt_exec_callback_QDesignerIntegrationInterface_updateCustomWidgetPlugins(QDesignerIntegrationInterface*, intptr_t);
bool miqt_exec_callback_QDesignerIntegrationInterface_event(QDesignerIntegrationInterface*, intptr_t, QEvent*);
bool miqt_exec_callback_QDesignerIntegrationInterface_eventFilter(QDesignerIntegrationInterface*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDesignerIntegrationInterface_timerEvent(QDesignerIntegrationInterface*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDesignerIntegrationInterface_childEvent(QDesignerIntegrationInterface*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDesignerIntegrationInterface_customEvent(QDesignerIntegrationInterface*, intptr_t, QEvent*);
void miqt_exec_callback_QDesignerIntegrationInterface_connectNotify(QDesignerIntegrationInterface*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDesignerIntegrationInterface_disconnectNotify(QDesignerIntegrationInterface*, intptr_t, QMetaMethod*);
struct miqt_string miqt_exec_callback_QDesignerIntegration_headerSuffix(const QDesignerIntegration*, intptr_t);
void miqt_exec_callback_QDesignerIntegration_setHeaderSuffix(QDesignerIntegration*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QDesignerIntegration_isHeaderLowercase(const QDesignerIntegration*, intptr_t);
void miqt_exec_callback_QDesignerIntegration_setHeaderLowercase(QDesignerIntegration*, intptr_t, bool);
int miqt_exec_callback_QDesignerIntegration_features(const QDesignerIntegration*, intptr_t);
void miqt_exec_callback_QDesignerIntegration_setFeatures(QDesignerIntegration*, intptr_t, int);
int miqt_exec_callback_QDesignerIntegration_resourceFileWatcherBehaviour(const QDesignerIntegration*, intptr_t);
void miqt_exec_callback_QDesignerIntegration_setResourceFileWatcherBehaviour(QDesignerIntegration*, intptr_t, int);
QWidget* miqt_exec_callback_QDesignerIntegration_containerWindow(const QDesignerIntegration*, intptr_t, QWidget*);
QDesignerResourceBrowserInterface* miqt_exec_callback_QDesignerIntegration_createResourceBrowser(QDesignerIntegration*, intptr_t, QWidget*);
struct miqt_string miqt_exec_callback_QDesignerIntegration_contextHelpId(const QDesignerIntegration*, intptr_t);
void miqt_exec_callback_QDesignerIntegration_updateProperty(QDesignerIntegration*, intptr_t, struct miqt_string, QVariant*, bool);
void miqt_exec_callback_QDesignerIntegration_updateProperty2(QDesignerIntegration*, intptr_t, struct miqt_string, QVariant*);
void miqt_exec_callback_QDesignerIntegration_resetProperty(QDesignerIntegration*, intptr_t, struct miqt_string);
void miqt_exec_callback_QDesignerIntegration_addDynamicProperty(QDesignerIntegration*, intptr_t, struct miqt_string, QVariant*);
void miqt_exec_callback_QDesignerIntegration_removeDynamicProperty(QDesignerIntegration*, intptr_t, struct miqt_string);
void miqt_exec_callback_QDesignerIntegration_updateActiveFormWindow(QDesignerIntegration*, intptr_t, QDesignerFormWindowInterface*);
void miqt_exec_callback_QDesignerIntegration_setupFormWindow(QDesignerIntegration*, intptr_t, QDesignerFormWindowInterface*);
void miqt_exec_callback_QDesignerIntegration_updateSelection(QDesignerIntegration*, intptr_t);
void miqt_exec_callback_QDesignerIntegration_updateCustomWidgetPlugins(QDesignerIntegration*, intptr_t);
bool miqt_exec_callback_QDesignerIntegration_event(QDesignerIntegration*, intptr_t, QEvent*);
bool miqt_exec_callback_QDesignerIntegration_eventFilter(QDesignerIntegration*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDesignerIntegration_timerEvent(QDesignerIntegration*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDesignerIntegration_childEvent(QDesignerIntegration*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDesignerIntegration_customEvent(QDesignerIntegration*, intptr_t, QEvent*);
void miqt_exec_callback_QDesignerIntegration_connectNotify(QDesignerIntegration*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDesignerIntegration_disconnectNotify(QDesignerIntegration*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDesignerIntegrationInterface final : public QDesignerIntegrationInterface {
public:

	MiqtVirtualQDesignerIntegrationInterface(QDesignerFormEditorInterface* core): QDesignerIntegrationInterface(core) {}
	MiqtVirtualQDesignerIntegrationInterface(QDesignerFormEditorInterface* core, QObject* parent): QDesignerIntegrationInterface(core, parent) {}

	virtual ~MiqtVirtualQDesignerIntegrationInterface() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__containerWindow = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* containerWindow(QWidget* widget) const override {
		if (handle__containerWindow == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QWidget* sigval1 = widget;
		QWidget* callback_return_value = miqt_exec_callback_QDesignerIntegrationInterface_containerWindow(this, handle__containerWindow, sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createResourceBrowser = 0;

	// Subclass to allow providing a Go implementation
	virtual QDesignerResourceBrowserInterface* createResourceBrowser(QWidget* parent) override {
		if (handle__createResourceBrowser == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QWidget* sigval1 = parent;
		QDesignerResourceBrowserInterface* callback_return_value = miqt_exec_callback_QDesignerIntegrationInterface_createResourceBrowser(this, handle__createResourceBrowser, sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__headerSuffix = 0;

	// Subclass to allow providing a Go implementation
	virtual QString headerSuffix() const override {
		if (handle__headerSuffix == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}

		struct miqt_string callback_return_value = miqt_exec_callback_QDesignerIntegrationInterface_headerSuffix(this, handle__headerSuffix);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setHeaderSuffix = 0;

	// Subclass to allow providing a Go implementation
	virtual void setHeaderSuffix(const QString& headerSuffix) override {
		if (handle__setHeaderSuffix == 0) {
			return; // Pure virtual, there is no base we can call
		}

		const QString headerSuffix_ret = headerSuffix;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray headerSuffix_b = headerSuffix_ret.toUtf8();
		struct miqt_string headerSuffix_ms;
		headerSuffix_ms.len = headerSuffix_b.length();
		headerSuffix_ms.data = static_cast<char*>(malloc(headerSuffix_ms.len));
		memcpy(headerSuffix_ms.data, headerSuffix_b.data(), headerSuffix_ms.len);
		struct miqt_string sigval1 = headerSuffix_ms;
		miqt_exec_callback_QDesignerIntegrationInterface_setHeaderSuffix(this, handle__setHeaderSuffix, sigval1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isHeaderLowercase = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isHeaderLowercase() const override {
		if (handle__isHeaderLowercase == 0) {
			return false; // Pure virtual, there is no base we can call
		}

		bool callback_return_value = miqt_exec_callback_QDesignerIntegrationInterface_isHeaderLowercase(this, handle__isHeaderLowercase);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setHeaderLowercase = 0;

	// Subclass to allow providing a Go implementation
	virtual void setHeaderLowercase(bool headerLowerCase) override {
		if (handle__setHeaderLowercase == 0) {
			return; // Pure virtual, there is no base we can call
		}

		bool sigval1 = headerLowerCase;
		miqt_exec_callback_QDesignerIntegrationInterface_setHeaderLowercase(this, handle__setHeaderLowercase, sigval1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__features = 0;

	// Subclass to allow providing a Go implementation
	virtual QDesignerIntegrationInterface::Feature features() const override {
		if (handle__features == 0) {
			return QDesignerIntegrationInterface::Feature(); // Pure virtual, there is no base we can call
		}

		int callback_return_value = miqt_exec_callback_QDesignerIntegrationInterface_features(this, handle__features);
		return static_cast<QDesignerIntegrationInterface::Feature>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resourceFileWatcherBehaviour = 0;

	// Subclass to allow providing a Go implementation
	virtual QDesignerIntegrationInterface::ResourceFileWatcherBehaviour resourceFileWatcherBehaviour() const override {
		if (handle__resourceFileWatcherBehaviour == 0) {
			return (QDesignerIntegrationInterface::ResourceFileWatcherBehaviour)(0); // Pure virtual, there is no base we can call
		}

		int callback_return_value = miqt_exec_callback_QDesignerIntegrationInterface_resourceFileWatcherBehaviour(this, handle__resourceFileWatcherBehaviour);
		return static_cast<QDesignerIntegrationInterface::ResourceFileWatcherBehaviour>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setResourceFileWatcherBehaviour = 0;

	// Subclass to allow providing a Go implementation
	virtual void setResourceFileWatcherBehaviour(QDesignerIntegrationInterface::ResourceFileWatcherBehaviour behaviour) override {
		if (handle__setResourceFileWatcherBehaviour == 0) {
			return; // Pure virtual, there is no base we can call
		}

		QDesignerIntegrationInterface::ResourceFileWatcherBehaviour behaviour_ret = behaviour;
		int sigval1 = static_cast<int>(behaviour_ret);
		miqt_exec_callback_QDesignerIntegrationInterface_setResourceFileWatcherBehaviour(this, handle__setResourceFileWatcherBehaviour, sigval1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextHelpId = 0;

	// Subclass to allow providing a Go implementation
	virtual QString contextHelpId() const override {
		if (handle__contextHelpId == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}

		struct miqt_string callback_return_value = miqt_exec_callback_QDesignerIntegrationInterface_contextHelpId(this, handle__contextHelpId);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFeatures = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFeatures(QDesignerIntegrationInterface::Feature f) override {
		if (handle__setFeatures == 0) {
			return; // Pure virtual, there is no base we can call
		}

		QDesignerIntegrationInterface::Feature f_ret = f;
		int sigval1 = static_cast<int>(f_ret);
		miqt_exec_callback_QDesignerIntegrationInterface_setFeatures(this, handle__setFeatures, sigval1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateProperty(const QString& name, const QVariant& value, bool enableSubPropertyHandling) override {
		if (handle__updateProperty == 0) {
			return; // Pure virtual, there is no base we can call
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		bool sigval3 = enableSubPropertyHandling;
		miqt_exec_callback_QDesignerIntegrationInterface_updateProperty(this, handle__updateProperty, sigval1, sigval2, sigval3);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateProperty2 = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateProperty(const QString& name, const QVariant& value) override {
		if (handle__updateProperty2 == 0) {
			return; // Pure virtual, there is no base we can call
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		miqt_exec_callback_QDesignerIntegrationInterface_updateProperty2(this, handle__updateProperty2, sigval1, sigval2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resetProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual void resetProperty(const QString& name) override {
		if (handle__resetProperty == 0) {
			return; // Pure virtual, there is no base we can call
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		miqt_exec_callback_QDesignerIntegrationInterface_resetProperty(this, handle__resetProperty, sigval1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__addDynamicProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual void addDynamicProperty(const QString& name, const QVariant& value) override {
		if (handle__addDynamicProperty == 0) {
			return; // Pure virtual, there is no base we can call
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		miqt_exec_callback_QDesignerIntegrationInterface_addDynamicProperty(this, handle__addDynamicProperty, sigval1, sigval2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeDynamicProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual void removeDynamicProperty(const QString& name) override {
		if (handle__removeDynamicProperty == 0) {
			return; // Pure virtual, there is no base we can call
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		miqt_exec_callback_QDesignerIntegrationInterface_removeDynamicProperty(this, handle__removeDynamicProperty, sigval1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateActiveFormWindow = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateActiveFormWindow(QDesignerFormWindowInterface* formWindow) override {
		if (handle__updateActiveFormWindow == 0) {
			return; // Pure virtual, there is no base we can call
		}

		QDesignerFormWindowInterface* sigval1 = formWindow;
		miqt_exec_callback_QDesignerIntegrationInterface_updateActiveFormWindow(this, handle__updateActiveFormWindow, sigval1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setupFormWindow = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupFormWindow(QDesignerFormWindowInterface* formWindow) override {
		if (handle__setupFormWindow == 0) {
			return; // Pure virtual, there is no base we can call
		}

		QDesignerFormWindowInterface* sigval1 = formWindow;
		miqt_exec_callback_QDesignerIntegrationInterface_setupFormWindow(this, handle__setupFormWindow, sigval1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateSelection() override {
		if (handle__updateSelection == 0) {
			return; // Pure virtual, there is no base we can call
		}

		miqt_exec_callback_QDesignerIntegrationInterface_updateSelection(this, handle__updateSelection);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateCustomWidgetPlugins = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateCustomWidgetPlugins() override {
		if (handle__updateCustomWidgetPlugins == 0) {
			return; // Pure virtual, there is no base we can call
		}

		miqt_exec_callback_QDesignerIntegrationInterface_updateCustomWidgetPlugins(this, handle__updateCustomWidgetPlugins);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QDesignerIntegrationInterface::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QDesignerIntegrationInterface_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QDesignerIntegrationInterface_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QDesignerIntegrationInterface::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QDesignerIntegrationInterface_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QDesignerIntegrationInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QDesignerIntegrationInterface::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QDesignerIntegrationInterface_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QDesignerIntegrationInterface_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QDesignerIntegrationInterface::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QDesignerIntegrationInterface_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QDesignerIntegrationInterface_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QDesignerIntegrationInterface::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QDesignerIntegrationInterface_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QDesignerIntegrationInterface_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QDesignerIntegrationInterface::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDesignerIntegrationInterface_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QDesignerIntegrationInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QDesignerIntegrationInterface::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDesignerIntegrationInterface_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QDesignerIntegrationInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QDesignerIntegrationInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QDesignerIntegrationInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QDesignerIntegrationInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QDesignerIntegrationInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QDesignerIntegrationInterface* QDesignerIntegrationInterface_new(QDesignerFormEditorInterface* core) {
	return new (std::nothrow) MiqtVirtualQDesignerIntegrationInterface(core);
}

QDesignerIntegrationInterface* QDesignerIntegrationInterface_new2(QDesignerFormEditorInterface* core, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQDesignerIntegrationInterface(core, parent);
}

void QDesignerIntegrationInterface_virtbase(QDesignerIntegrationInterface* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QDesignerIntegrationInterface_metaObject(const QDesignerIntegrationInterface* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDesignerIntegrationInterface_metacast(QDesignerIntegrationInterface* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDesignerIntegrationInterface_tr(const char* s) {
	QString _ret = QDesignerIntegrationInterface::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerIntegrationInterface_trUtf8(const char* s) {
	QString _ret = QDesignerIntegrationInterface::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDesignerFormEditorInterface* QDesignerIntegrationInterface_core(const QDesignerIntegrationInterface* self) {
	return self->core();
}

QWidget* QDesignerIntegrationInterface_containerWindow(const QDesignerIntegrationInterface* self, QWidget* widget) {
	return self->containerWindow(widget);
}

QDesignerResourceBrowserInterface* QDesignerIntegrationInterface_createResourceBrowser(QDesignerIntegrationInterface* self, QWidget* parent) {
	return self->createResourceBrowser(parent);
}

struct miqt_string QDesignerIntegrationInterface_headerSuffix(const QDesignerIntegrationInterface* self) {
	QString _ret = self->headerSuffix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerIntegrationInterface_setHeaderSuffix(QDesignerIntegrationInterface* self, struct miqt_string headerSuffix) {
	QString headerSuffix_QString = QString::fromUtf8(headerSuffix.data, headerSuffix.len);
	self->setHeaderSuffix(headerSuffix_QString);
}

bool QDesignerIntegrationInterface_isHeaderLowercase(const QDesignerIntegrationInterface* self) {
	return self->isHeaderLowercase();
}

void QDesignerIntegrationInterface_setHeaderLowercase(QDesignerIntegrationInterface* self, bool headerLowerCase) {
	self->setHeaderLowercase(headerLowerCase);
}

int QDesignerIntegrationInterface_features(const QDesignerIntegrationInterface* self) {
	QDesignerIntegrationInterface::Feature _ret = self->features();
	return static_cast<int>(_ret);
}

bool QDesignerIntegrationInterface_hasFeature(const QDesignerIntegrationInterface* self, int f) {
	return self->hasFeature(static_cast<QDesignerIntegrationInterface::Feature>(f));
}

int QDesignerIntegrationInterface_resourceFileWatcherBehaviour(const QDesignerIntegrationInterface* self) {
	QDesignerIntegrationInterface::ResourceFileWatcherBehaviour _ret = self->resourceFileWatcherBehaviour();
	return static_cast<int>(_ret);
}

void QDesignerIntegrationInterface_setResourceFileWatcherBehaviour(QDesignerIntegrationInterface* self, int behaviour) {
	self->setResourceFileWatcherBehaviour(static_cast<QDesignerIntegrationInterface::ResourceFileWatcherBehaviour>(behaviour));
}

struct miqt_string QDesignerIntegrationInterface_contextHelpId(const QDesignerIntegrationInterface* self) {
	QString _ret = self->contextHelpId();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerIntegrationInterface_emitObjectNameChanged(QDesignerIntegrationInterface* self, QDesignerFormWindowInterface* formWindow, QObject* object, struct miqt_string newName, struct miqt_string oldName) {
	QString newName_QString = QString::fromUtf8(newName.data, newName.len);
	QString oldName_QString = QString::fromUtf8(oldName.data, oldName.len);
	self->emitObjectNameChanged(formWindow, object, newName_QString, oldName_QString);
}

void QDesignerIntegrationInterface_emitNavigateToSlot(QDesignerIntegrationInterface* self, struct miqt_string objectName, struct miqt_string signalSignature, struct miqt_array /* of struct miqt_string */  parameterNames) {
	QString objectName_QString = QString::fromUtf8(objectName.data, objectName.len);
	QString signalSignature_QString = QString::fromUtf8(signalSignature.data, signalSignature.len);
	QStringList parameterNames_QList;
	parameterNames_QList.reserve(parameterNames.len);
	struct miqt_string* parameterNames_arr = static_cast<struct miqt_string*>(parameterNames.data);
	for(size_t i = 0; i < parameterNames.len; ++i) {
		QString parameterNames_arr_i_QString = QString::fromUtf8(parameterNames_arr[i].data, parameterNames_arr[i].len);
		parameterNames_QList.push_back(parameterNames_arr_i_QString);
	}
	self->emitNavigateToSlot(objectName_QString, signalSignature_QString, parameterNames_QList);
}

void QDesignerIntegrationInterface_emitNavigateToSlotWithSlotSignature(QDesignerIntegrationInterface* self, struct miqt_string slotSignature) {
	QString slotSignature_QString = QString::fromUtf8(slotSignature.data, slotSignature.len);
	self->emitNavigateToSlot(slotSignature_QString);
}

void QDesignerIntegrationInterface_emitHelpRequested(QDesignerIntegrationInterface* self, struct miqt_string manual, struct miqt_string document) {
	QString manual_QString = QString::fromUtf8(manual.data, manual.len);
	QString document_QString = QString::fromUtf8(document.data, document.len);
	self->emitHelpRequested(manual_QString, document_QString);
}

void QDesignerIntegrationInterface_propertyChanged(QDesignerIntegrationInterface* self, QDesignerFormWindowInterface* formWindow, struct miqt_string name, QVariant* value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->propertyChanged(formWindow, name_QString, *value);
}

void QDesignerIntegrationInterface_connect_propertyChanged(QDesignerIntegrationInterface* self, intptr_t slot) {
	QDesignerIntegrationInterface::connect(self, static_cast<void (QDesignerIntegrationInterface::*)(QDesignerFormWindowInterface*, const QString&, const QVariant&)>(&QDesignerIntegrationInterface::propertyChanged), self, [=](QDesignerFormWindowInterface* formWindow, const QString& name, const QVariant& value) {
		QDesignerFormWindowInterface* sigval1 = formWindow;
		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval2 = name_ms;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		miqt_exec_callback_QDesignerIntegrationInterface_propertyChanged(slot, sigval1, sigval2, sigval3);
	});
}

void QDesignerIntegrationInterface_objectNameChanged(QDesignerIntegrationInterface* self, QDesignerFormWindowInterface* formWindow, QObject* object, struct miqt_string newName, struct miqt_string oldName) {
	QString newName_QString = QString::fromUtf8(newName.data, newName.len);
	QString oldName_QString = QString::fromUtf8(oldName.data, oldName.len);
	self->objectNameChanged(formWindow, object, newName_QString, oldName_QString);
}

void QDesignerIntegrationInterface_connect_objectNameChanged(QDesignerIntegrationInterface* self, intptr_t slot) {
	QDesignerIntegrationInterface::connect(self, static_cast<void (QDesignerIntegrationInterface::*)(QDesignerFormWindowInterface*, QObject*, const QString&, const QString&)>(&QDesignerIntegrationInterface::objectNameChanged), self, [=](QDesignerFormWindowInterface* formWindow, QObject* object, const QString& newName, const QString& oldName) {
		QDesignerFormWindowInterface* sigval1 = formWindow;
		QObject* sigval2 = object;
		const QString newName_ret = newName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray newName_b = newName_ret.toUtf8();
		struct miqt_string newName_ms;
		newName_ms.len = newName_b.length();
		newName_ms.data = static_cast<char*>(malloc(newName_ms.len));
		memcpy(newName_ms.data, newName_b.data(), newName_ms.len);
		struct miqt_string sigval3 = newName_ms;
		const QString oldName_ret = oldName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray oldName_b = oldName_ret.toUtf8();
		struct miqt_string oldName_ms;
		oldName_ms.len = oldName_b.length();
		oldName_ms.data = static_cast<char*>(malloc(oldName_ms.len));
		memcpy(oldName_ms.data, oldName_b.data(), oldName_ms.len);
		struct miqt_string sigval4 = oldName_ms;
		miqt_exec_callback_QDesignerIntegrationInterface_objectNameChanged(slot, sigval1, sigval2, sigval3, sigval4);
	});
}

void QDesignerIntegrationInterface_helpRequested(QDesignerIntegrationInterface* self, struct miqt_string manual, struct miqt_string document) {
	QString manual_QString = QString::fromUtf8(manual.data, manual.len);
	QString document_QString = QString::fromUtf8(document.data, document.len);
	self->helpRequested(manual_QString, document_QString);
}

void QDesignerIntegrationInterface_connect_helpRequested(QDesignerIntegrationInterface* self, intptr_t slot) {
	QDesignerIntegrationInterface::connect(self, static_cast<void (QDesignerIntegrationInterface::*)(const QString&, const QString&)>(&QDesignerIntegrationInterface::helpRequested), self, [=](const QString& manual, const QString& document) {
		const QString manual_ret = manual;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray manual_b = manual_ret.toUtf8();
		struct miqt_string manual_ms;
		manual_ms.len = manual_b.length();
		manual_ms.data = static_cast<char*>(malloc(manual_ms.len));
		memcpy(manual_ms.data, manual_b.data(), manual_ms.len);
		struct miqt_string sigval1 = manual_ms;
		const QString document_ret = document;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray document_b = document_ret.toUtf8();
		struct miqt_string document_ms;
		document_ms.len = document_b.length();
		document_ms.data = static_cast<char*>(malloc(document_ms.len));
		memcpy(document_ms.data, document_b.data(), document_ms.len);
		struct miqt_string sigval2 = document_ms;
		miqt_exec_callback_QDesignerIntegrationInterface_helpRequested(slot, sigval1, sigval2);
	});
}

void QDesignerIntegrationInterface_navigateToSlot(QDesignerIntegrationInterface* self, struct miqt_string objectName, struct miqt_string signalSignature, struct miqt_array /* of struct miqt_string */  parameterNames) {
	QString objectName_QString = QString::fromUtf8(objectName.data, objectName.len);
	QString signalSignature_QString = QString::fromUtf8(signalSignature.data, signalSignature.len);
	QStringList parameterNames_QList;
	parameterNames_QList.reserve(parameterNames.len);
	struct miqt_string* parameterNames_arr = static_cast<struct miqt_string*>(parameterNames.data);
	for(size_t i = 0; i < parameterNames.len; ++i) {
		QString parameterNames_arr_i_QString = QString::fromUtf8(parameterNames_arr[i].data, parameterNames_arr[i].len);
		parameterNames_QList.push_back(parameterNames_arr_i_QString);
	}
	self->navigateToSlot(objectName_QString, signalSignature_QString, parameterNames_QList);
}

void QDesignerIntegrationInterface_connect_navigateToSlot(QDesignerIntegrationInterface* self, intptr_t slot) {
	QDesignerIntegrationInterface::connect(self, static_cast<void (QDesignerIntegrationInterface::*)(const QString&, const QString&, const QStringList&)>(&QDesignerIntegrationInterface::navigateToSlot), self, [=](const QString& objectName, const QString& signalSignature, const QStringList& parameterNames) {
		const QString objectName_ret = objectName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray objectName_b = objectName_ret.toUtf8();
		struct miqt_string objectName_ms;
		objectName_ms.len = objectName_b.length();
		objectName_ms.data = static_cast<char*>(malloc(objectName_ms.len));
		memcpy(objectName_ms.data, objectName_b.data(), objectName_ms.len);
		struct miqt_string sigval1 = objectName_ms;
		const QString signalSignature_ret = signalSignature;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray signalSignature_b = signalSignature_ret.toUtf8();
		struct miqt_string signalSignature_ms;
		signalSignature_ms.len = signalSignature_b.length();
		signalSignature_ms.data = static_cast<char*>(malloc(signalSignature_ms.len));
		memcpy(signalSignature_ms.data, signalSignature_b.data(), signalSignature_ms.len);
		struct miqt_string sigval2 = signalSignature_ms;
		const QStringList& parameterNames_ret = parameterNames;
		// Convert QList<> from C++ memory to manually-managed C memory
		struct miqt_string* parameterNames_arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * parameterNames_ret.length()));
		for (size_t i = 0, e = parameterNames_ret.length(); i < e; ++i) {
			QString parameterNames_lv_ret = parameterNames_ret[i];
			// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
			QByteArray parameterNames_lv_b = parameterNames_lv_ret.toUtf8();
			struct miqt_string parameterNames_lv_ms;
			parameterNames_lv_ms.len = parameterNames_lv_b.length();
			parameterNames_lv_ms.data = static_cast<char*>(malloc(parameterNames_lv_ms.len));
			memcpy(parameterNames_lv_ms.data, parameterNames_lv_b.data(), parameterNames_lv_ms.len);
			parameterNames_arr[i] = parameterNames_lv_ms;
		}
		struct miqt_array parameterNames_out;
		parameterNames_out.len = parameterNames_ret.length();
		parameterNames_out.data = static_cast<void*>(parameterNames_arr);
		struct miqt_array /* of struct miqt_string */  sigval3 = parameterNames_out;
		miqt_exec_callback_QDesignerIntegrationInterface_navigateToSlot(slot, sigval1, sigval2, sigval3);
	});
}

void QDesignerIntegrationInterface_navigateToSlotWithSlotSignature(QDesignerIntegrationInterface* self, struct miqt_string slotSignature) {
	QString slotSignature_QString = QString::fromUtf8(slotSignature.data, slotSignature.len);
	self->navigateToSlot(slotSignature_QString);
}

void QDesignerIntegrationInterface_connect_navigateToSlotWithSlotSignature(QDesignerIntegrationInterface* self, intptr_t slot) {
	QDesignerIntegrationInterface::connect(self, static_cast<void (QDesignerIntegrationInterface::*)(const QString&)>(&QDesignerIntegrationInterface::navigateToSlot), self, [=](const QString& slotSignature) {
		const QString slotSignature_ret = slotSignature;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray slotSignature_b = slotSignature_ret.toUtf8();
		struct miqt_string slotSignature_ms;
		slotSignature_ms.len = slotSignature_b.length();
		slotSignature_ms.data = static_cast<char*>(malloc(slotSignature_ms.len));
		memcpy(slotSignature_ms.data, slotSignature_b.data(), slotSignature_ms.len);
		struct miqt_string sigval1 = slotSignature_ms;
		miqt_exec_callback_QDesignerIntegrationInterface_navigateToSlotWithSlotSignature(slot, sigval1);
	});
}

void QDesignerIntegrationInterface_setFeatures(QDesignerIntegrationInterface* self, int f) {
	self->setFeatures(static_cast<QDesignerIntegrationInterface::Feature>(f));
}

void QDesignerIntegrationInterface_updateProperty(QDesignerIntegrationInterface* self, struct miqt_string name, QVariant* value, bool enableSubPropertyHandling) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->updateProperty(name_QString, *value, enableSubPropertyHandling);
}

void QDesignerIntegrationInterface_updateProperty2(QDesignerIntegrationInterface* self, struct miqt_string name, QVariant* value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->updateProperty(name_QString, *value);
}

void QDesignerIntegrationInterface_resetProperty(QDesignerIntegrationInterface* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->resetProperty(name_QString);
}

void QDesignerIntegrationInterface_addDynamicProperty(QDesignerIntegrationInterface* self, struct miqt_string name, QVariant* value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->addDynamicProperty(name_QString, *value);
}

void QDesignerIntegrationInterface_removeDynamicProperty(QDesignerIntegrationInterface* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->removeDynamicProperty(name_QString);
}

void QDesignerIntegrationInterface_updateActiveFormWindow(QDesignerIntegrationInterface* self, QDesignerFormWindowInterface* formWindow) {
	self->updateActiveFormWindow(formWindow);
}

void QDesignerIntegrationInterface_setupFormWindow(QDesignerIntegrationInterface* self, QDesignerFormWindowInterface* formWindow) {
	self->setupFormWindow(formWindow);
}

void QDesignerIntegrationInterface_updateSelection(QDesignerIntegrationInterface* self) {
	self->updateSelection();
}

void QDesignerIntegrationInterface_updateCustomWidgetPlugins(QDesignerIntegrationInterface* self) {
	self->updateCustomWidgetPlugins();
}

struct miqt_string QDesignerIntegrationInterface_tr2(const char* s, const char* c) {
	QString _ret = QDesignerIntegrationInterface::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerIntegrationInterface_tr3(const char* s, const char* c, int n) {
	QString _ret = QDesignerIntegrationInterface::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerIntegrationInterface_trUtf82(const char* s, const char* c) {
	QString _ret = QDesignerIntegrationInterface::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerIntegrationInterface_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QDesignerIntegrationInterface::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDesignerIntegrationInterface_override_virtual_containerWindow(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegrationInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegrationInterface*>( (QDesignerIntegrationInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__containerWindow = slot;
	return true;
}

bool QDesignerIntegrationInterface_override_virtual_createResourceBrowser(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegrationInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegrationInterface*>( (QDesignerIntegrationInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__createResourceBrowser = slot;
	return true;
}

bool QDesignerIntegrationInterface_override_virtual_headerSuffix(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegrationInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegrationInterface*>( (QDesignerIntegrationInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__headerSuffix = slot;
	return true;
}

bool QDesignerIntegrationInterface_override_virtual_setHeaderSuffix(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegrationInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegrationInterface*>( (QDesignerIntegrationInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setHeaderSuffix = slot;
	return true;
}

bool QDesignerIntegrationInterface_override_virtual_isHeaderLowercase(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegrationInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegrationInterface*>( (QDesignerIntegrationInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isHeaderLowercase = slot;
	return true;
}

bool QDesignerIntegrationInterface_override_virtual_setHeaderLowercase(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegrationInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegrationInterface*>( (QDesignerIntegrationInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setHeaderLowercase = slot;
	return true;
}

bool QDesignerIntegrationInterface_override_virtual_features(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegrationInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegrationInterface*>( (QDesignerIntegrationInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__features = slot;
	return true;
}

bool QDesignerIntegrationInterface_override_virtual_resourceFileWatcherBehaviour(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegrationInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegrationInterface*>( (QDesignerIntegrationInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resourceFileWatcherBehaviour = slot;
	return true;
}

bool QDesignerIntegrationInterface_override_virtual_setResourceFileWatcherBehaviour(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegrationInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegrationInterface*>( (QDesignerIntegrationInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setResourceFileWatcherBehaviour = slot;
	return true;
}

bool QDesignerIntegrationInterface_override_virtual_contextHelpId(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegrationInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegrationInterface*>( (QDesignerIntegrationInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextHelpId = slot;
	return true;
}

bool QDesignerIntegrationInterface_override_virtual_setFeatures(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegrationInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegrationInterface*>( (QDesignerIntegrationInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFeatures = slot;
	return true;
}

bool QDesignerIntegrationInterface_override_virtual_updateProperty(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegrationInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegrationInterface*>( (QDesignerIntegrationInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateProperty = slot;
	return true;
}

bool QDesignerIntegrationInterface_override_virtual_updateProperty2(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegrationInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegrationInterface*>( (QDesignerIntegrationInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateProperty2 = slot;
	return true;
}

bool QDesignerIntegrationInterface_override_virtual_resetProperty(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegrationInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegrationInterface*>( (QDesignerIntegrationInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resetProperty = slot;
	return true;
}

bool QDesignerIntegrationInterface_override_virtual_addDynamicProperty(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegrationInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegrationInterface*>( (QDesignerIntegrationInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__addDynamicProperty = slot;
	return true;
}

bool QDesignerIntegrationInterface_override_virtual_removeDynamicProperty(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegrationInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegrationInterface*>( (QDesignerIntegrationInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__removeDynamicProperty = slot;
	return true;
}

bool QDesignerIntegrationInterface_override_virtual_updateActiveFormWindow(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegrationInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegrationInterface*>( (QDesignerIntegrationInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateActiveFormWindow = slot;
	return true;
}

bool QDesignerIntegrationInterface_override_virtual_setupFormWindow(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegrationInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegrationInterface*>( (QDesignerIntegrationInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setupFormWindow = slot;
	return true;
}

bool QDesignerIntegrationInterface_override_virtual_updateSelection(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegrationInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegrationInterface*>( (QDesignerIntegrationInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateSelection = slot;
	return true;
}

bool QDesignerIntegrationInterface_override_virtual_updateCustomWidgetPlugins(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegrationInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegrationInterface*>( (QDesignerIntegrationInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateCustomWidgetPlugins = slot;
	return true;
}

bool QDesignerIntegrationInterface_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegrationInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegrationInterface*>( (QDesignerIntegrationInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QDesignerIntegrationInterface_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQDesignerIntegrationInterface*>(self)->QDesignerIntegrationInterface::event(event);
}

bool QDesignerIntegrationInterface_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegrationInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegrationInterface*>( (QDesignerIntegrationInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QDesignerIntegrationInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQDesignerIntegrationInterface*>(self)->QDesignerIntegrationInterface::eventFilter(watched, event);
}

bool QDesignerIntegrationInterface_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegrationInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegrationInterface*>( (QDesignerIntegrationInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QDesignerIntegrationInterface_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQDesignerIntegrationInterface*>(self)->QDesignerIntegrationInterface::timerEvent(event);
}

bool QDesignerIntegrationInterface_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegrationInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegrationInterface*>( (QDesignerIntegrationInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QDesignerIntegrationInterface_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQDesignerIntegrationInterface*>(self)->QDesignerIntegrationInterface::childEvent(event);
}

bool QDesignerIntegrationInterface_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegrationInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegrationInterface*>( (QDesignerIntegrationInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QDesignerIntegrationInterface_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQDesignerIntegrationInterface*>(self)->QDesignerIntegrationInterface::customEvent(event);
}

bool QDesignerIntegrationInterface_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegrationInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegrationInterface*>( (QDesignerIntegrationInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QDesignerIntegrationInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDesignerIntegrationInterface*>(self)->QDesignerIntegrationInterface::connectNotify(*signal);
}

bool QDesignerIntegrationInterface_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegrationInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegrationInterface*>( (QDesignerIntegrationInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QDesignerIntegrationInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDesignerIntegrationInterface*>(self)->QDesignerIntegrationInterface::disconnectNotify(*signal);
}

QObject* QDesignerIntegrationInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDesignerIntegrationInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegrationInterface*>( (QDesignerIntegrationInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QDesignerIntegrationInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDesignerIntegrationInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegrationInterface*>( (QDesignerIntegrationInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QDesignerIntegrationInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQDesignerIntegrationInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegrationInterface*>( (QDesignerIntegrationInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QDesignerIntegrationInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQDesignerIntegrationInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegrationInterface*>( (QDesignerIntegrationInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QDesignerIntegrationInterface_delete(QDesignerIntegrationInterface* self) {
	delete self;
}

class MiqtVirtualQDesignerIntegration final : public QDesignerIntegration {
public:

	MiqtVirtualQDesignerIntegration(QDesignerFormEditorInterface* core): QDesignerIntegration(core) {}
	MiqtVirtualQDesignerIntegration(QDesignerFormEditorInterface* core, QObject* parent): QDesignerIntegration(core, parent) {}

	virtual ~MiqtVirtualQDesignerIntegration() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__headerSuffix = 0;

	// Subclass to allow providing a Go implementation
	virtual QString headerSuffix() const override {
		if (handle__headerSuffix == 0) {
			return QDesignerIntegration::headerSuffix();
		}

		struct miqt_string callback_return_value = miqt_exec_callback_QDesignerIntegration_headerSuffix(this, handle__headerSuffix);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	friend struct miqt_string QDesignerIntegration_virtualbase_headerSuffix(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setHeaderSuffix = 0;

	// Subclass to allow providing a Go implementation
	virtual void setHeaderSuffix(const QString& headerSuffix) override {
		if (handle__setHeaderSuffix == 0) {
			QDesignerIntegration::setHeaderSuffix(headerSuffix);
			return;
		}

		const QString headerSuffix_ret = headerSuffix;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray headerSuffix_b = headerSuffix_ret.toUtf8();
		struct miqt_string headerSuffix_ms;
		headerSuffix_ms.len = headerSuffix_b.length();
		headerSuffix_ms.data = static_cast<char*>(malloc(headerSuffix_ms.len));
		memcpy(headerSuffix_ms.data, headerSuffix_b.data(), headerSuffix_ms.len);
		struct miqt_string sigval1 = headerSuffix_ms;
		miqt_exec_callback_QDesignerIntegration_setHeaderSuffix(this, handle__setHeaderSuffix, sigval1);

	}

	friend void QDesignerIntegration_virtualbase_setHeaderSuffix(void* self, struct miqt_string headerSuffix);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isHeaderLowercase = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isHeaderLowercase() const override {
		if (handle__isHeaderLowercase == 0) {
			return QDesignerIntegration::isHeaderLowercase();
		}

		bool callback_return_value = miqt_exec_callback_QDesignerIntegration_isHeaderLowercase(this, handle__isHeaderLowercase);
		return callback_return_value;
	}

	friend bool QDesignerIntegration_virtualbase_isHeaderLowercase(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setHeaderLowercase = 0;

	// Subclass to allow providing a Go implementation
	virtual void setHeaderLowercase(bool headerLowerCase) override {
		if (handle__setHeaderLowercase == 0) {
			QDesignerIntegration::setHeaderLowercase(headerLowerCase);
			return;
		}

		bool sigval1 = headerLowerCase;
		miqt_exec_callback_QDesignerIntegration_setHeaderLowercase(this, handle__setHeaderLowercase, sigval1);

	}

	friend void QDesignerIntegration_virtualbase_setHeaderLowercase(void* self, bool headerLowerCase);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__features = 0;

	// Subclass to allow providing a Go implementation
	virtual QDesignerIntegrationInterface::Feature features() const override {
		if (handle__features == 0) {
			return QDesignerIntegration::features();
		}

		int callback_return_value = miqt_exec_callback_QDesignerIntegration_features(this, handle__features);
		return static_cast<QDesignerIntegrationInterface::Feature>(callback_return_value);
	}

	friend int QDesignerIntegration_virtualbase_features(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFeatures = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFeatures(QDesignerIntegrationInterface::Feature f) override {
		if (handle__setFeatures == 0) {
			QDesignerIntegration::setFeatures(f);
			return;
		}

		QDesignerIntegrationInterface::Feature f_ret = f;
		int sigval1 = static_cast<int>(f_ret);
		miqt_exec_callback_QDesignerIntegration_setFeatures(this, handle__setFeatures, sigval1);

	}

	friend void QDesignerIntegration_virtualbase_setFeatures(void* self, int f);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resourceFileWatcherBehaviour = 0;

	// Subclass to allow providing a Go implementation
	virtual QDesignerIntegrationInterface::ResourceFileWatcherBehaviour resourceFileWatcherBehaviour() const override {
		if (handle__resourceFileWatcherBehaviour == 0) {
			return QDesignerIntegration::resourceFileWatcherBehaviour();
		}

		int callback_return_value = miqt_exec_callback_QDesignerIntegration_resourceFileWatcherBehaviour(this, handle__resourceFileWatcherBehaviour);
		return static_cast<QDesignerIntegrationInterface::ResourceFileWatcherBehaviour>(callback_return_value);
	}

	friend int QDesignerIntegration_virtualbase_resourceFileWatcherBehaviour(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setResourceFileWatcherBehaviour = 0;

	// Subclass to allow providing a Go implementation
	virtual void setResourceFileWatcherBehaviour(QDesignerIntegrationInterface::ResourceFileWatcherBehaviour behaviour) override {
		if (handle__setResourceFileWatcherBehaviour == 0) {
			QDesignerIntegration::setResourceFileWatcherBehaviour(behaviour);
			return;
		}

		QDesignerIntegrationInterface::ResourceFileWatcherBehaviour behaviour_ret = behaviour;
		int sigval1 = static_cast<int>(behaviour_ret);
		miqt_exec_callback_QDesignerIntegration_setResourceFileWatcherBehaviour(this, handle__setResourceFileWatcherBehaviour, sigval1);

	}

	friend void QDesignerIntegration_virtualbase_setResourceFileWatcherBehaviour(void* self, int behaviour);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__containerWindow = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* containerWindow(QWidget* widget) const override {
		if (handle__containerWindow == 0) {
			return QDesignerIntegration::containerWindow(widget);
		}

		QWidget* sigval1 = widget;
		QWidget* callback_return_value = miqt_exec_callback_QDesignerIntegration_containerWindow(this, handle__containerWindow, sigval1);
		return callback_return_value;
	}

	friend QWidget* QDesignerIntegration_virtualbase_containerWindow(const void* self, QWidget* widget);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createResourceBrowser = 0;

	// Subclass to allow providing a Go implementation
	virtual QDesignerResourceBrowserInterface* createResourceBrowser(QWidget* parent) override {
		if (handle__createResourceBrowser == 0) {
			return QDesignerIntegration::createResourceBrowser(parent);
		}

		QWidget* sigval1 = parent;
		QDesignerResourceBrowserInterface* callback_return_value = miqt_exec_callback_QDesignerIntegration_createResourceBrowser(this, handle__createResourceBrowser, sigval1);
		return callback_return_value;
	}

	friend QDesignerResourceBrowserInterface* QDesignerIntegration_virtualbase_createResourceBrowser(void* self, QWidget* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextHelpId = 0;

	// Subclass to allow providing a Go implementation
	virtual QString contextHelpId() const override {
		if (handle__contextHelpId == 0) {
			return QDesignerIntegration::contextHelpId();
		}

		struct miqt_string callback_return_value = miqt_exec_callback_QDesignerIntegration_contextHelpId(this, handle__contextHelpId);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	friend struct miqt_string QDesignerIntegration_virtualbase_contextHelpId(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateProperty(const QString& name, const QVariant& value, bool enableSubPropertyHandling) override {
		if (handle__updateProperty == 0) {
			QDesignerIntegration::updateProperty(name, value, enableSubPropertyHandling);
			return;
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		bool sigval3 = enableSubPropertyHandling;
		miqt_exec_callback_QDesignerIntegration_updateProperty(this, handle__updateProperty, sigval1, sigval2, sigval3);

	}

	friend void QDesignerIntegration_virtualbase_updateProperty(void* self, struct miqt_string name, QVariant* value, bool enableSubPropertyHandling);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateProperty2 = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateProperty(const QString& name, const QVariant& value) override {
		if (handle__updateProperty2 == 0) {
			QDesignerIntegration::updateProperty(name, value);
			return;
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		miqt_exec_callback_QDesignerIntegration_updateProperty2(this, handle__updateProperty2, sigval1, sigval2);

	}

	friend void QDesignerIntegration_virtualbase_updateProperty2(void* self, struct miqt_string name, QVariant* value);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resetProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual void resetProperty(const QString& name) override {
		if (handle__resetProperty == 0) {
			QDesignerIntegration::resetProperty(name);
			return;
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		miqt_exec_callback_QDesignerIntegration_resetProperty(this, handle__resetProperty, sigval1);

	}

	friend void QDesignerIntegration_virtualbase_resetProperty(void* self, struct miqt_string name);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__addDynamicProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual void addDynamicProperty(const QString& name, const QVariant& value) override {
		if (handle__addDynamicProperty == 0) {
			QDesignerIntegration::addDynamicProperty(name, value);
			return;
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		miqt_exec_callback_QDesignerIntegration_addDynamicProperty(this, handle__addDynamicProperty, sigval1, sigval2);

	}

	friend void QDesignerIntegration_virtualbase_addDynamicProperty(void* self, struct miqt_string name, QVariant* value);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeDynamicProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual void removeDynamicProperty(const QString& name) override {
		if (handle__removeDynamicProperty == 0) {
			QDesignerIntegration::removeDynamicProperty(name);
			return;
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		miqt_exec_callback_QDesignerIntegration_removeDynamicProperty(this, handle__removeDynamicProperty, sigval1);

	}

	friend void QDesignerIntegration_virtualbase_removeDynamicProperty(void* self, struct miqt_string name);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateActiveFormWindow = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateActiveFormWindow(QDesignerFormWindowInterface* formWindow) override {
		if (handle__updateActiveFormWindow == 0) {
			QDesignerIntegration::updateActiveFormWindow(formWindow);
			return;
		}

		QDesignerFormWindowInterface* sigval1 = formWindow;
		miqt_exec_callback_QDesignerIntegration_updateActiveFormWindow(this, handle__updateActiveFormWindow, sigval1);

	}

	friend void QDesignerIntegration_virtualbase_updateActiveFormWindow(void* self, QDesignerFormWindowInterface* formWindow);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setupFormWindow = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupFormWindow(QDesignerFormWindowInterface* formWindow) override {
		if (handle__setupFormWindow == 0) {
			QDesignerIntegration::setupFormWindow(formWindow);
			return;
		}

		QDesignerFormWindowInterface* sigval1 = formWindow;
		miqt_exec_callback_QDesignerIntegration_setupFormWindow(this, handle__setupFormWindow, sigval1);

	}

	friend void QDesignerIntegration_virtualbase_setupFormWindow(void* self, QDesignerFormWindowInterface* formWindow);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateSelection() override {
		if (handle__updateSelection == 0) {
			QDesignerIntegration::updateSelection();
			return;
		}

		miqt_exec_callback_QDesignerIntegration_updateSelection(this, handle__updateSelection);

	}

	friend void QDesignerIntegration_virtualbase_updateSelection(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateCustomWidgetPlugins = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateCustomWidgetPlugins() override {
		if (handle__updateCustomWidgetPlugins == 0) {
			QDesignerIntegration::updateCustomWidgetPlugins();
			return;
		}

		miqt_exec_callback_QDesignerIntegration_updateCustomWidgetPlugins(this, handle__updateCustomWidgetPlugins);

	}

	friend void QDesignerIntegration_virtualbase_updateCustomWidgetPlugins(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QDesignerIntegration::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QDesignerIntegration_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QDesignerIntegration_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QDesignerIntegration::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QDesignerIntegration_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QDesignerIntegration_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QDesignerIntegration::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QDesignerIntegration_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QDesignerIntegration_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QDesignerIntegration::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QDesignerIntegration_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QDesignerIntegration_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QDesignerIntegration::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QDesignerIntegration_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QDesignerIntegration_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QDesignerIntegration::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDesignerIntegration_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QDesignerIntegration_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QDesignerIntegration::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDesignerIntegration_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QDesignerIntegration_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QDesignerIntegration_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QDesignerIntegration_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QDesignerIntegration_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QDesignerIntegration_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QDesignerIntegration* QDesignerIntegration_new(QDesignerFormEditorInterface* core) {
	return new (std::nothrow) MiqtVirtualQDesignerIntegration(core);
}

QDesignerIntegration* QDesignerIntegration_new2(QDesignerFormEditorInterface* core, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQDesignerIntegration(core, parent);
}

void QDesignerIntegration_virtbase(QDesignerIntegration* src, QDesignerIntegrationInterface** outptr_QDesignerIntegrationInterface) {
	*outptr_QDesignerIntegrationInterface = static_cast<QDesignerIntegrationInterface*>(src);
}

QMetaObject* QDesignerIntegration_metaObject(const QDesignerIntegration* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDesignerIntegration_metacast(QDesignerIntegration* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDesignerIntegration_tr(const char* s) {
	QString _ret = QDesignerIntegration::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerIntegration_trUtf8(const char* s) {
	QString _ret = QDesignerIntegration::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerIntegration_headerSuffix(const QDesignerIntegration* self) {
	QString _ret = self->headerSuffix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerIntegration_setHeaderSuffix(QDesignerIntegration* self, struct miqt_string headerSuffix) {
	QString headerSuffix_QString = QString::fromUtf8(headerSuffix.data, headerSuffix.len);
	self->setHeaderSuffix(headerSuffix_QString);
}

bool QDesignerIntegration_isHeaderLowercase(const QDesignerIntegration* self) {
	return self->isHeaderLowercase();
}

void QDesignerIntegration_setHeaderLowercase(QDesignerIntegration* self, bool headerLowerCase) {
	self->setHeaderLowercase(headerLowerCase);
}

int QDesignerIntegration_features(const QDesignerIntegration* self) {
	QDesignerIntegrationInterface::Feature _ret = self->features();
	return static_cast<int>(_ret);
}

void QDesignerIntegration_setFeatures(QDesignerIntegration* self, int f) {
	self->setFeatures(static_cast<QDesignerIntegrationInterface::Feature>(f));
}

int QDesignerIntegration_resourceFileWatcherBehaviour(const QDesignerIntegration* self) {
	QDesignerIntegrationInterface::ResourceFileWatcherBehaviour _ret = self->resourceFileWatcherBehaviour();
	return static_cast<int>(_ret);
}

void QDesignerIntegration_setResourceFileWatcherBehaviour(QDesignerIntegration* self, int behaviour) {
	self->setResourceFileWatcherBehaviour(static_cast<QDesignerIntegrationInterface::ResourceFileWatcherBehaviour>(behaviour));
}

QWidget* QDesignerIntegration_containerWindow(const QDesignerIntegration* self, QWidget* widget) {
	return self->containerWindow(widget);
}

void QDesignerIntegration_initializePlugins(QDesignerFormEditorInterface* formEditor) {
	QDesignerIntegration::initializePlugins(formEditor);
}

QDesignerResourceBrowserInterface* QDesignerIntegration_createResourceBrowser(QDesignerIntegration* self, QWidget* parent) {
	return self->createResourceBrowser(parent);
}

struct miqt_string QDesignerIntegration_contextHelpId(const QDesignerIntegration* self) {
	QString _ret = self->contextHelpId();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerIntegration_updateProperty(QDesignerIntegration* self, struct miqt_string name, QVariant* value, bool enableSubPropertyHandling) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->updateProperty(name_QString, *value, enableSubPropertyHandling);
}

void QDesignerIntegration_updateProperty2(QDesignerIntegration* self, struct miqt_string name, QVariant* value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->updateProperty(name_QString, *value);
}

void QDesignerIntegration_resetProperty(QDesignerIntegration* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->resetProperty(name_QString);
}

void QDesignerIntegration_addDynamicProperty(QDesignerIntegration* self, struct miqt_string name, QVariant* value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->addDynamicProperty(name_QString, *value);
}

void QDesignerIntegration_removeDynamicProperty(QDesignerIntegration* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->removeDynamicProperty(name_QString);
}

void QDesignerIntegration_updateActiveFormWindow(QDesignerIntegration* self, QDesignerFormWindowInterface* formWindow) {
	self->updateActiveFormWindow(formWindow);
}

void QDesignerIntegration_setupFormWindow(QDesignerIntegration* self, QDesignerFormWindowInterface* formWindow) {
	self->setupFormWindow(formWindow);
}

void QDesignerIntegration_updateSelection(QDesignerIntegration* self) {
	self->updateSelection();
}

void QDesignerIntegration_updateCustomWidgetPlugins(QDesignerIntegration* self) {
	self->updateCustomWidgetPlugins();
}

struct miqt_string QDesignerIntegration_tr2(const char* s, const char* c) {
	QString _ret = QDesignerIntegration::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerIntegration_tr3(const char* s, const char* c, int n) {
	QString _ret = QDesignerIntegration::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerIntegration_trUtf82(const char* s, const char* c) {
	QString _ret = QDesignerIntegration::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerIntegration_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QDesignerIntegration::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDesignerIntegration_override_virtual_headerSuffix(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegration* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegration*>( (QDesignerIntegration*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__headerSuffix = slot;
	return true;
}

struct miqt_string QDesignerIntegration_virtualbase_headerSuffix(const void* self) {
	QString _ret = static_cast<const MiqtVirtualQDesignerIntegration*>(self)->QDesignerIntegration::headerSuffix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDesignerIntegration_override_virtual_setHeaderSuffix(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegration* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegration*>( (QDesignerIntegration*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setHeaderSuffix = slot;
	return true;
}

void QDesignerIntegration_virtualbase_setHeaderSuffix(void* self, struct miqt_string headerSuffix) {
	QString headerSuffix_QString = QString::fromUtf8(headerSuffix.data, headerSuffix.len);
	static_cast<MiqtVirtualQDesignerIntegration*>(self)->QDesignerIntegration::setHeaderSuffix(headerSuffix_QString);
}

bool QDesignerIntegration_override_virtual_isHeaderLowercase(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegration* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegration*>( (QDesignerIntegration*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isHeaderLowercase = slot;
	return true;
}

bool QDesignerIntegration_virtualbase_isHeaderLowercase(const void* self) {
	return static_cast<const MiqtVirtualQDesignerIntegration*>(self)->QDesignerIntegration::isHeaderLowercase();
}

bool QDesignerIntegration_override_virtual_setHeaderLowercase(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegration* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegration*>( (QDesignerIntegration*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setHeaderLowercase = slot;
	return true;
}

void QDesignerIntegration_virtualbase_setHeaderLowercase(void* self, bool headerLowerCase) {
	static_cast<MiqtVirtualQDesignerIntegration*>(self)->QDesignerIntegration::setHeaderLowercase(headerLowerCase);
}

bool QDesignerIntegration_override_virtual_features(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegration* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegration*>( (QDesignerIntegration*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__features = slot;
	return true;
}

int QDesignerIntegration_virtualbase_features(const void* self) {
	MiqtVirtualQDesignerIntegration::Feature _ret = static_cast<const MiqtVirtualQDesignerIntegration*>(self)->QDesignerIntegration::features();
	return static_cast<int>(_ret);
}

bool QDesignerIntegration_override_virtual_setFeatures(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegration* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegration*>( (QDesignerIntegration*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFeatures = slot;
	return true;
}

void QDesignerIntegration_virtualbase_setFeatures(void* self, int f) {
	static_cast<MiqtVirtualQDesignerIntegration*>(self)->QDesignerIntegration::setFeatures(static_cast<MiqtVirtualQDesignerIntegration::Feature>(f));
}

bool QDesignerIntegration_override_virtual_resourceFileWatcherBehaviour(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegration* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegration*>( (QDesignerIntegration*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resourceFileWatcherBehaviour = slot;
	return true;
}

int QDesignerIntegration_virtualbase_resourceFileWatcherBehaviour(const void* self) {
	MiqtVirtualQDesignerIntegration::ResourceFileWatcherBehaviour _ret = static_cast<const MiqtVirtualQDesignerIntegration*>(self)->QDesignerIntegration::resourceFileWatcherBehaviour();
	return static_cast<int>(_ret);
}

bool QDesignerIntegration_override_virtual_setResourceFileWatcherBehaviour(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegration* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegration*>( (QDesignerIntegration*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setResourceFileWatcherBehaviour = slot;
	return true;
}

void QDesignerIntegration_virtualbase_setResourceFileWatcherBehaviour(void* self, int behaviour) {
	static_cast<MiqtVirtualQDesignerIntegration*>(self)->QDesignerIntegration::setResourceFileWatcherBehaviour(static_cast<MiqtVirtualQDesignerIntegration::ResourceFileWatcherBehaviour>(behaviour));
}

bool QDesignerIntegration_override_virtual_containerWindow(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegration* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegration*>( (QDesignerIntegration*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__containerWindow = slot;
	return true;
}

QWidget* QDesignerIntegration_virtualbase_containerWindow(const void* self, QWidget* widget) {
	return static_cast<const MiqtVirtualQDesignerIntegration*>(self)->QDesignerIntegration::containerWindow(widget);
}

bool QDesignerIntegration_override_virtual_createResourceBrowser(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegration* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegration*>( (QDesignerIntegration*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__createResourceBrowser = slot;
	return true;
}

QDesignerResourceBrowserInterface* QDesignerIntegration_virtualbase_createResourceBrowser(void* self, QWidget* parent) {
	return static_cast<MiqtVirtualQDesignerIntegration*>(self)->QDesignerIntegration::createResourceBrowser(parent);
}

bool QDesignerIntegration_override_virtual_contextHelpId(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegration* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegration*>( (QDesignerIntegration*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextHelpId = slot;
	return true;
}

struct miqt_string QDesignerIntegration_virtualbase_contextHelpId(const void* self) {
	QString _ret = static_cast<const MiqtVirtualQDesignerIntegration*>(self)->QDesignerIntegration::contextHelpId();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDesignerIntegration_override_virtual_updateProperty(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegration* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegration*>( (QDesignerIntegration*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateProperty = slot;
	return true;
}

void QDesignerIntegration_virtualbase_updateProperty(void* self, struct miqt_string name, QVariant* value, bool enableSubPropertyHandling) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	static_cast<MiqtVirtualQDesignerIntegration*>(self)->QDesignerIntegration::updateProperty(name_QString, *value, enableSubPropertyHandling);
}

bool QDesignerIntegration_override_virtual_updateProperty2(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegration* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegration*>( (QDesignerIntegration*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateProperty2 = slot;
	return true;
}

void QDesignerIntegration_virtualbase_updateProperty2(void* self, struct miqt_string name, QVariant* value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	static_cast<MiqtVirtualQDesignerIntegration*>(self)->QDesignerIntegration::updateProperty(name_QString, *value);
}

bool QDesignerIntegration_override_virtual_resetProperty(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegration* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegration*>( (QDesignerIntegration*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resetProperty = slot;
	return true;
}

void QDesignerIntegration_virtualbase_resetProperty(void* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	static_cast<MiqtVirtualQDesignerIntegration*>(self)->QDesignerIntegration::resetProperty(name_QString);
}

bool QDesignerIntegration_override_virtual_addDynamicProperty(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegration* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegration*>( (QDesignerIntegration*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__addDynamicProperty = slot;
	return true;
}

void QDesignerIntegration_virtualbase_addDynamicProperty(void* self, struct miqt_string name, QVariant* value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	static_cast<MiqtVirtualQDesignerIntegration*>(self)->QDesignerIntegration::addDynamicProperty(name_QString, *value);
}

bool QDesignerIntegration_override_virtual_removeDynamicProperty(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegration* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegration*>( (QDesignerIntegration*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__removeDynamicProperty = slot;
	return true;
}

void QDesignerIntegration_virtualbase_removeDynamicProperty(void* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	static_cast<MiqtVirtualQDesignerIntegration*>(self)->QDesignerIntegration::removeDynamicProperty(name_QString);
}

bool QDesignerIntegration_override_virtual_updateActiveFormWindow(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegration* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegration*>( (QDesignerIntegration*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateActiveFormWindow = slot;
	return true;
}

void QDesignerIntegration_virtualbase_updateActiveFormWindow(void* self, QDesignerFormWindowInterface* formWindow) {
	static_cast<MiqtVirtualQDesignerIntegration*>(self)->QDesignerIntegration::updateActiveFormWindow(formWindow);
}

bool QDesignerIntegration_override_virtual_setupFormWindow(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegration* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegration*>( (QDesignerIntegration*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setupFormWindow = slot;
	return true;
}

void QDesignerIntegration_virtualbase_setupFormWindow(void* self, QDesignerFormWindowInterface* formWindow) {
	static_cast<MiqtVirtualQDesignerIntegration*>(self)->QDesignerIntegration::setupFormWindow(formWindow);
}

bool QDesignerIntegration_override_virtual_updateSelection(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegration* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegration*>( (QDesignerIntegration*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateSelection = slot;
	return true;
}

void QDesignerIntegration_virtualbase_updateSelection(void* self) {
	static_cast<MiqtVirtualQDesignerIntegration*>(self)->QDesignerIntegration::updateSelection();
}

bool QDesignerIntegration_override_virtual_updateCustomWidgetPlugins(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegration* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegration*>( (QDesignerIntegration*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateCustomWidgetPlugins = slot;
	return true;
}

void QDesignerIntegration_virtualbase_updateCustomWidgetPlugins(void* self) {
	static_cast<MiqtVirtualQDesignerIntegration*>(self)->QDesignerIntegration::updateCustomWidgetPlugins();
}

bool QDesignerIntegration_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegration* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegration*>( (QDesignerIntegration*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QDesignerIntegration_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQDesignerIntegration*>(self)->QDesignerIntegration::event(event);
}

bool QDesignerIntegration_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegration* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegration*>( (QDesignerIntegration*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QDesignerIntegration_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQDesignerIntegration*>(self)->QDesignerIntegration::eventFilter(watched, event);
}

bool QDesignerIntegration_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegration* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegration*>( (QDesignerIntegration*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QDesignerIntegration_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQDesignerIntegration*>(self)->QDesignerIntegration::timerEvent(event);
}

bool QDesignerIntegration_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegration* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegration*>( (QDesignerIntegration*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QDesignerIntegration_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQDesignerIntegration*>(self)->QDesignerIntegration::childEvent(event);
}

bool QDesignerIntegration_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegration* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegration*>( (QDesignerIntegration*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QDesignerIntegration_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQDesignerIntegration*>(self)->QDesignerIntegration::customEvent(event);
}

bool QDesignerIntegration_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegration* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegration*>( (QDesignerIntegration*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QDesignerIntegration_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDesignerIntegration*>(self)->QDesignerIntegration::connectNotify(*signal);
}

bool QDesignerIntegration_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDesignerIntegration* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegration*>( (QDesignerIntegration*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QDesignerIntegration_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDesignerIntegration*>(self)->QDesignerIntegration::disconnectNotify(*signal);
}

QObject* QDesignerIntegration_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDesignerIntegration* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegration*>( (QDesignerIntegration*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QDesignerIntegration_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDesignerIntegration* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegration*>( (QDesignerIntegration*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QDesignerIntegration_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQDesignerIntegration* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegration*>( (QDesignerIntegration*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QDesignerIntegration_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQDesignerIntegration* self_cast = dynamic_cast<MiqtVirtualQDesignerIntegration*>( (QDesignerIntegration*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QDesignerIntegration_delete(QDesignerIntegration* self) {
	delete self;
}

