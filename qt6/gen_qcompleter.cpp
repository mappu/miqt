#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QChildEvent>
#include <QCompleter>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <qcompleter.h>
#include "gen_qcompleter.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QCompleter_Activated(intptr_t, struct miqt_string);
void miqt_exec_callback_QCompleter_ActivatedWithIndex(intptr_t, QModelIndex*);
void miqt_exec_callback_QCompleter_Highlighted(intptr_t, struct miqt_string);
void miqt_exec_callback_QCompleter_HighlightedWithIndex(intptr_t, QModelIndex*);
struct miqt_string miqt_exec_callback_QCompleter_PathFromIndex(void*, intptr_t, QModelIndex*);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QCompleter_SplitPath(void*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QCompleter_EventFilter(void*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QCompleter_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QCompleter_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QCompleter_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QCompleter_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QCompleter_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QCompleter_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQCompleter final : public QCompleter {
public:

	MiqtVirtualQCompleter(): QCompleter() {};
	MiqtVirtualQCompleter(QAbstractItemModel* model): QCompleter(model) {};
	MiqtVirtualQCompleter(const QStringList& completions): QCompleter(completions) {};
	MiqtVirtualQCompleter(QObject* parent): QCompleter(parent) {};
	MiqtVirtualQCompleter(QAbstractItemModel* model, QObject* parent): QCompleter(model, parent) {};
	MiqtVirtualQCompleter(const QStringList& completions, QObject* parent): QCompleter(completions, parent) {};

	virtual ~MiqtVirtualQCompleter() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PathFromIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual QString pathFromIndex(const QModelIndex& index) const override {
		if (handle__PathFromIndex == 0) {
			return QCompleter::pathFromIndex(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		struct miqt_string callback_return_value = miqt_exec_callback_QCompleter_PathFromIndex(const_cast<MiqtVirtualQCompleter*>(this), handle__PathFromIndex, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_PathFromIndex(QModelIndex* index) const {

		QString _ret = QCompleter::pathFromIndex(*index);
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _b = _ret.toUtf8();
		struct miqt_string _ms;
		_ms.len = _b.length();
		_ms.data = static_cast<char*>(malloc(_ms.len));
		memcpy(_ms.data, _b.data(), _ms.len);
		return _ms;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SplitPath = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList splitPath(const QString& path) const override {
		if (handle__SplitPath == 0) {
			return QCompleter::splitPath(path);
		}
		
		const QString path_ret = path;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray path_b = path_ret.toUtf8();
		struct miqt_string path_ms;
		path_ms.len = path_b.length();
		path_ms.data = static_cast<char*>(malloc(path_ms.len));
		memcpy(path_ms.data, path_b.data(), path_ms.len);
		struct miqt_string sigval1 = path_ms;

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QCompleter_SplitPath(const_cast<MiqtVirtualQCompleter*>(this), handle__SplitPath, sigval1);
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
	struct miqt_array /* of struct miqt_string */  virtualbase_SplitPath(struct miqt_string path) const {
		QString path_QString = QString::fromUtf8(path.data, path.len);

		QStringList _ret = QCompleter::splitPath(path_QString);
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
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* o, QEvent* e) override {
		if (handle__EventFilter == 0) {
			return QCompleter::eventFilter(o, e);
		}
		
		QObject* sigval1 = o;
		QEvent* sigval2 = e;

		bool callback_return_value = miqt_exec_callback_QCompleter_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* o, QEvent* e) {

		return QCompleter::eventFilter(o, e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__Event == 0) {
			return QCompleter::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QCompleter_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* param1) {

		return QCompleter::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QCompleter::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QCompleter_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QCompleter::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QCompleter::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QCompleter_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QCompleter::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QCompleter::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QCompleter_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QCompleter::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QCompleter::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QCompleter_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QCompleter::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QCompleter::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QCompleter_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QCompleter::disconnectNotify(*signal);

	}

};

QCompleter* QCompleter_new() {
	return new MiqtVirtualQCompleter();
}

QCompleter* QCompleter_new2(QAbstractItemModel* model) {
	return new MiqtVirtualQCompleter(model);
}

QCompleter* QCompleter_new3(struct miqt_array /* of struct miqt_string */  completions) {
	QStringList completions_QList;
	completions_QList.reserve(completions.len);
	struct miqt_string* completions_arr = static_cast<struct miqt_string*>(completions.data);
	for(size_t i = 0; i < completions.len; ++i) {
		QString completions_arr_i_QString = QString::fromUtf8(completions_arr[i].data, completions_arr[i].len);
		completions_QList.push_back(completions_arr_i_QString);
	}
	return new MiqtVirtualQCompleter(completions_QList);
}

QCompleter* QCompleter_new4(QObject* parent) {
	return new MiqtVirtualQCompleter(parent);
}

QCompleter* QCompleter_new5(QAbstractItemModel* model, QObject* parent) {
	return new MiqtVirtualQCompleter(model, parent);
}

QCompleter* QCompleter_new6(struct miqt_array /* of struct miqt_string */  completions, QObject* parent) {
	QStringList completions_QList;
	completions_QList.reserve(completions.len);
	struct miqt_string* completions_arr = static_cast<struct miqt_string*>(completions.data);
	for(size_t i = 0; i < completions.len; ++i) {
		QString completions_arr_i_QString = QString::fromUtf8(completions_arr[i].data, completions_arr[i].len);
		completions_QList.push_back(completions_arr_i_QString);
	}
	return new MiqtVirtualQCompleter(completions_QList, parent);
}

void QCompleter_virtbase(QCompleter* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QCompleter_MetaObject(const QCompleter* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCompleter_Metacast(QCompleter* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCompleter_Tr(const char* s) {
	QString _ret = QCompleter::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCompleter_SetWidget(QCompleter* self, QWidget* widget) {
	self->setWidget(widget);
}

QWidget* QCompleter_Widget(const QCompleter* self) {
	return self->widget();
}

void QCompleter_SetModel(QCompleter* self, QAbstractItemModel* c) {
	self->setModel(c);
}

QAbstractItemModel* QCompleter_Model(const QCompleter* self) {
	return self->model();
}

void QCompleter_SetCompletionMode(QCompleter* self, int mode) {
	self->setCompletionMode(static_cast<QCompleter::CompletionMode>(mode));
}

int QCompleter_CompletionMode(const QCompleter* self) {
	QCompleter::CompletionMode _ret = self->completionMode();
	return static_cast<int>(_ret);
}

void QCompleter_SetFilterMode(QCompleter* self, int filterMode) {
	self->setFilterMode(static_cast<Qt::MatchFlags>(filterMode));
}

int QCompleter_FilterMode(const QCompleter* self) {
	Qt::MatchFlags _ret = self->filterMode();
	return static_cast<int>(_ret);
}

QAbstractItemView* QCompleter_Popup(const QCompleter* self) {
	return self->popup();
}

void QCompleter_SetPopup(QCompleter* self, QAbstractItemView* popup) {
	self->setPopup(popup);
}

void QCompleter_SetCaseSensitivity(QCompleter* self, int caseSensitivity) {
	self->setCaseSensitivity(static_cast<Qt::CaseSensitivity>(caseSensitivity));
}

int QCompleter_CaseSensitivity(const QCompleter* self) {
	Qt::CaseSensitivity _ret = self->caseSensitivity();
	return static_cast<int>(_ret);
}

void QCompleter_SetModelSorting(QCompleter* self, int sorting) {
	self->setModelSorting(static_cast<QCompleter::ModelSorting>(sorting));
}

int QCompleter_ModelSorting(const QCompleter* self) {
	QCompleter::ModelSorting _ret = self->modelSorting();
	return static_cast<int>(_ret);
}

void QCompleter_SetCompletionColumn(QCompleter* self, int column) {
	self->setCompletionColumn(static_cast<int>(column));
}

int QCompleter_CompletionColumn(const QCompleter* self) {
	return self->completionColumn();
}

void QCompleter_SetCompletionRole(QCompleter* self, int role) {
	self->setCompletionRole(static_cast<int>(role));
}

int QCompleter_CompletionRole(const QCompleter* self) {
	return self->completionRole();
}

bool QCompleter_WrapAround(const QCompleter* self) {
	return self->wrapAround();
}

int QCompleter_MaxVisibleItems(const QCompleter* self) {
	return self->maxVisibleItems();
}

void QCompleter_SetMaxVisibleItems(QCompleter* self, int maxItems) {
	self->setMaxVisibleItems(static_cast<int>(maxItems));
}

int QCompleter_CompletionCount(const QCompleter* self) {
	return self->completionCount();
}

bool QCompleter_SetCurrentRow(QCompleter* self, int row) {
	return self->setCurrentRow(static_cast<int>(row));
}

int QCompleter_CurrentRow(const QCompleter* self) {
	return self->currentRow();
}

QModelIndex* QCompleter_CurrentIndex(const QCompleter* self) {
	return new QModelIndex(self->currentIndex());
}

struct miqt_string QCompleter_CurrentCompletion(const QCompleter* self) {
	QString _ret = self->currentCompletion();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAbstractItemModel* QCompleter_CompletionModel(const QCompleter* self) {
	return self->completionModel();
}

struct miqt_string QCompleter_CompletionPrefix(const QCompleter* self) {
	QString _ret = self->completionPrefix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCompleter_SetCompletionPrefix(QCompleter* self, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	self->setCompletionPrefix(prefix_QString);
}

void QCompleter_Complete(QCompleter* self) {
	self->complete();
}

void QCompleter_SetWrapAround(QCompleter* self, bool wrap) {
	self->setWrapAround(wrap);
}

struct miqt_string QCompleter_PathFromIndex(const QCompleter* self, QModelIndex* index) {
	QString _ret = self->pathFromIndex(*index);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QCompleter_SplitPath(const QCompleter* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	QStringList _ret = self->splitPath(path_QString);
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

void QCompleter_Activated(QCompleter* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->activated(text_QString);
}

void QCompleter_connect_Activated(QCompleter* self, intptr_t slot) {
	MiqtVirtualQCompleter::connect(self, static_cast<void (QCompleter::*)(const QString&)>(&QCompleter::activated), self, [=](const QString& text) {
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;
		miqt_exec_callback_QCompleter_Activated(slot, sigval1);
	});
}

void QCompleter_ActivatedWithIndex(QCompleter* self, QModelIndex* index) {
	self->activated(*index);
}

void QCompleter_connect_ActivatedWithIndex(QCompleter* self, intptr_t slot) {
	MiqtVirtualQCompleter::connect(self, static_cast<void (QCompleter::*)(const QModelIndex&)>(&QCompleter::activated), self, [=](const QModelIndex& index) {
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QCompleter_ActivatedWithIndex(slot, sigval1);
	});
}

void QCompleter_Highlighted(QCompleter* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->highlighted(text_QString);
}

void QCompleter_connect_Highlighted(QCompleter* self, intptr_t slot) {
	MiqtVirtualQCompleter::connect(self, static_cast<void (QCompleter::*)(const QString&)>(&QCompleter::highlighted), self, [=](const QString& text) {
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;
		miqt_exec_callback_QCompleter_Highlighted(slot, sigval1);
	});
}

void QCompleter_HighlightedWithIndex(QCompleter* self, QModelIndex* index) {
	self->highlighted(*index);
}

void QCompleter_connect_HighlightedWithIndex(QCompleter* self, intptr_t slot) {
	MiqtVirtualQCompleter::connect(self, static_cast<void (QCompleter::*)(const QModelIndex&)>(&QCompleter::highlighted), self, [=](const QModelIndex& index) {
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QCompleter_HighlightedWithIndex(slot, sigval1);
	});
}

struct miqt_string QCompleter_Tr2(const char* s, const char* c) {
	QString _ret = QCompleter::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCompleter_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCompleter::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCompleter_Complete1(QCompleter* self, QRect* rect) {
	self->complete(*rect);
}

void QCompleter_override_virtual_PathFromIndex(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCompleter*>( (QCompleter*)(self) )->handle__PathFromIndex = slot;
}

struct miqt_string QCompleter_virtualbase_PathFromIndex(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQCompleter*)(self) )->virtualbase_PathFromIndex(index);
}

void QCompleter_override_virtual_SplitPath(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCompleter*>( (QCompleter*)(self) )->handle__SplitPath = slot;
}

struct miqt_array /* of struct miqt_string */  QCompleter_virtualbase_SplitPath(const void* self, struct miqt_string path) {
	return ( (const MiqtVirtualQCompleter*)(self) )->virtualbase_SplitPath(path);
}

void QCompleter_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCompleter*>( (QCompleter*)(self) )->handle__EventFilter = slot;
}

bool QCompleter_virtualbase_EventFilter(void* self, QObject* o, QEvent* e) {
	return ( (MiqtVirtualQCompleter*)(self) )->virtualbase_EventFilter(o, e);
}

void QCompleter_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCompleter*>( (QCompleter*)(self) )->handle__Event = slot;
}

bool QCompleter_virtualbase_Event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQCompleter*)(self) )->virtualbase_Event(param1);
}

void QCompleter_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCompleter*>( (QCompleter*)(self) )->handle__TimerEvent = slot;
}

void QCompleter_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQCompleter*)(self) )->virtualbase_TimerEvent(event);
}

void QCompleter_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCompleter*>( (QCompleter*)(self) )->handle__ChildEvent = slot;
}

void QCompleter_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQCompleter*)(self) )->virtualbase_ChildEvent(event);
}

void QCompleter_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCompleter*>( (QCompleter*)(self) )->handle__CustomEvent = slot;
}

void QCompleter_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQCompleter*)(self) )->virtualbase_CustomEvent(event);
}

void QCompleter_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCompleter*>( (QCompleter*)(self) )->handle__ConnectNotify = slot;
}

void QCompleter_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQCompleter*)(self) )->virtualbase_ConnectNotify(signal);
}

void QCompleter_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCompleter*>( (QCompleter*)(self) )->handle__DisconnectNotify = slot;
}

void QCompleter_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQCompleter*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QCompleter_Delete(QCompleter* self) {
	delete self;
}

