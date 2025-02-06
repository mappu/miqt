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

void miqt_exec_callback_QCompleter_activated(intptr_t, struct miqt_string);
void miqt_exec_callback_QCompleter_activatedWithIndex(intptr_t, QModelIndex*);
void miqt_exec_callback_QCompleter_highlighted(intptr_t, struct miqt_string);
void miqt_exec_callback_QCompleter_highlightedWithIndex(intptr_t, QModelIndex*);
struct miqt_string miqt_exec_callback_QCompleter_pathFromIndex(const QCompleter*, intptr_t, QModelIndex*);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QCompleter_splitPath(const QCompleter*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QCompleter_eventFilter(QCompleter*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QCompleter_event(QCompleter*, intptr_t, QEvent*);
void miqt_exec_callback_QCompleter_timerEvent(QCompleter*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QCompleter_childEvent(QCompleter*, intptr_t, QChildEvent*);
void miqt_exec_callback_QCompleter_customEvent(QCompleter*, intptr_t, QEvent*);
void miqt_exec_callback_QCompleter_connectNotify(QCompleter*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QCompleter_disconnectNotify(QCompleter*, intptr_t, QMetaMethod*);
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
	intptr_t handle__pathFromIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual QString pathFromIndex(const QModelIndex& index) const override {
		if (handle__pathFromIndex == 0) {
			return QCompleter::pathFromIndex(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		struct miqt_string callback_return_value = miqt_exec_callback_QCompleter_pathFromIndex(this, handle__pathFromIndex, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_pathFromIndex(QModelIndex* index) const {

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
	intptr_t handle__splitPath = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList splitPath(const QString& path) const override {
		if (handle__splitPath == 0) {
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

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QCompleter_splitPath(this, handle__splitPath, sigval1);
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
	struct miqt_array /* of struct miqt_string */  virtualbase_splitPath(struct miqt_string path) const {
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
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* o, QEvent* e) override {
		if (handle__eventFilter == 0) {
			return QCompleter::eventFilter(o, e);
		}
		
		QObject* sigval1 = o;
		QEvent* sigval2 = e;

		bool callback_return_value = miqt_exec_callback_QCompleter_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* o, QEvent* e) {

		return QCompleter::eventFilter(o, e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__event == 0) {
			return QCompleter::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QCompleter_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* param1) {

		return QCompleter::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QCompleter::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QCompleter_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QCompleter::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QCompleter::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QCompleter_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QCompleter::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QCompleter::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QCompleter_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QCompleter::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QCompleter::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QCompleter_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QCompleter::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QCompleter::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QCompleter_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QCompleter::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QCompleter_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QCompleter_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QCompleter_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QCompleter_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QCompleter_metaObject(const QCompleter* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCompleter_metacast(QCompleter* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCompleter_tr(const char* s) {
	QString _ret = QCompleter::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCompleter_setWidget(QCompleter* self, QWidget* widget) {
	self->setWidget(widget);
}

QWidget* QCompleter_widget(const QCompleter* self) {
	return self->widget();
}

void QCompleter_setModel(QCompleter* self, QAbstractItemModel* c) {
	self->setModel(c);
}

QAbstractItemModel* QCompleter_model(const QCompleter* self) {
	return self->model();
}

void QCompleter_setCompletionMode(QCompleter* self, int mode) {
	self->setCompletionMode(static_cast<QCompleter::CompletionMode>(mode));
}

int QCompleter_completionMode(const QCompleter* self) {
	QCompleter::CompletionMode _ret = self->completionMode();
	return static_cast<int>(_ret);
}

void QCompleter_setFilterMode(QCompleter* self, int filterMode) {
	self->setFilterMode(static_cast<Qt::MatchFlags>(filterMode));
}

int QCompleter_filterMode(const QCompleter* self) {
	Qt::MatchFlags _ret = self->filterMode();
	return static_cast<int>(_ret);
}

QAbstractItemView* QCompleter_popup(const QCompleter* self) {
	return self->popup();
}

void QCompleter_setPopup(QCompleter* self, QAbstractItemView* popup) {
	self->setPopup(popup);
}

void QCompleter_setCaseSensitivity(QCompleter* self, int caseSensitivity) {
	self->setCaseSensitivity(static_cast<Qt::CaseSensitivity>(caseSensitivity));
}

int QCompleter_caseSensitivity(const QCompleter* self) {
	Qt::CaseSensitivity _ret = self->caseSensitivity();
	return static_cast<int>(_ret);
}

void QCompleter_setModelSorting(QCompleter* self, int sorting) {
	self->setModelSorting(static_cast<QCompleter::ModelSorting>(sorting));
}

int QCompleter_modelSorting(const QCompleter* self) {
	QCompleter::ModelSorting _ret = self->modelSorting();
	return static_cast<int>(_ret);
}

void QCompleter_setCompletionColumn(QCompleter* self, int column) {
	self->setCompletionColumn(static_cast<int>(column));
}

int QCompleter_completionColumn(const QCompleter* self) {
	return self->completionColumn();
}

void QCompleter_setCompletionRole(QCompleter* self, int role) {
	self->setCompletionRole(static_cast<int>(role));
}

int QCompleter_completionRole(const QCompleter* self) {
	return self->completionRole();
}

bool QCompleter_wrapAround(const QCompleter* self) {
	return self->wrapAround();
}

int QCompleter_maxVisibleItems(const QCompleter* self) {
	return self->maxVisibleItems();
}

void QCompleter_setMaxVisibleItems(QCompleter* self, int maxItems) {
	self->setMaxVisibleItems(static_cast<int>(maxItems));
}

int QCompleter_completionCount(const QCompleter* self) {
	return self->completionCount();
}

bool QCompleter_setCurrentRow(QCompleter* self, int row) {
	return self->setCurrentRow(static_cast<int>(row));
}

int QCompleter_currentRow(const QCompleter* self) {
	return self->currentRow();
}

QModelIndex* QCompleter_currentIndex(const QCompleter* self) {
	return new QModelIndex(self->currentIndex());
}

struct miqt_string QCompleter_currentCompletion(const QCompleter* self) {
	QString _ret = self->currentCompletion();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAbstractItemModel* QCompleter_completionModel(const QCompleter* self) {
	return self->completionModel();
}

struct miqt_string QCompleter_completionPrefix(const QCompleter* self) {
	QString _ret = self->completionPrefix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCompleter_setCompletionPrefix(QCompleter* self, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	self->setCompletionPrefix(prefix_QString);
}

void QCompleter_complete(QCompleter* self) {
	self->complete();
}

void QCompleter_setWrapAround(QCompleter* self, bool wrap) {
	self->setWrapAround(wrap);
}

struct miqt_string QCompleter_pathFromIndex(const QCompleter* self, QModelIndex* index) {
	QString _ret = self->pathFromIndex(*index);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QCompleter_splitPath(const QCompleter* self, struct miqt_string path) {
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

void QCompleter_activated(QCompleter* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->activated(text_QString);
}

void QCompleter_connect_activated(QCompleter* self, intptr_t slot) {
	MiqtVirtualQCompleter::connect(self, static_cast<void (QCompleter::*)(const QString&)>(&QCompleter::activated), self, [=](const QString& text) {
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;
		miqt_exec_callback_QCompleter_activated(slot, sigval1);
	});
}

void QCompleter_activatedWithIndex(QCompleter* self, QModelIndex* index) {
	self->activated(*index);
}

void QCompleter_connect_activatedWithIndex(QCompleter* self, intptr_t slot) {
	MiqtVirtualQCompleter::connect(self, static_cast<void (QCompleter::*)(const QModelIndex&)>(&QCompleter::activated), self, [=](const QModelIndex& index) {
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QCompleter_activatedWithIndex(slot, sigval1);
	});
}

void QCompleter_highlighted(QCompleter* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->highlighted(text_QString);
}

void QCompleter_connect_highlighted(QCompleter* self, intptr_t slot) {
	MiqtVirtualQCompleter::connect(self, static_cast<void (QCompleter::*)(const QString&)>(&QCompleter::highlighted), self, [=](const QString& text) {
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;
		miqt_exec_callback_QCompleter_highlighted(slot, sigval1);
	});
}

void QCompleter_highlightedWithIndex(QCompleter* self, QModelIndex* index) {
	self->highlighted(*index);
}

void QCompleter_connect_highlightedWithIndex(QCompleter* self, intptr_t slot) {
	MiqtVirtualQCompleter::connect(self, static_cast<void (QCompleter::*)(const QModelIndex&)>(&QCompleter::highlighted), self, [=](const QModelIndex& index) {
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QCompleter_highlightedWithIndex(slot, sigval1);
	});
}

struct miqt_string QCompleter_tr2(const char* s, const char* c) {
	QString _ret = QCompleter::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCompleter_tr3(const char* s, const char* c, int n) {
	QString _ret = QCompleter::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCompleter_complete1(QCompleter* self, QRect* rect) {
	self->complete(*rect);
}

bool QCompleter_override_virtual_pathFromIndex(void* self, intptr_t slot) {
	MiqtVirtualQCompleter* self_cast = dynamic_cast<MiqtVirtualQCompleter*>( (QCompleter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__pathFromIndex = slot;
	return true;
}

struct miqt_string QCompleter_virtualbase_pathFromIndex(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQCompleter*)(self) )->virtualbase_pathFromIndex(index);
}

bool QCompleter_override_virtual_splitPath(void* self, intptr_t slot) {
	MiqtVirtualQCompleter* self_cast = dynamic_cast<MiqtVirtualQCompleter*>( (QCompleter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__splitPath = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QCompleter_virtualbase_splitPath(const void* self, struct miqt_string path) {
	return ( (const MiqtVirtualQCompleter*)(self) )->virtualbase_splitPath(path);
}

bool QCompleter_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQCompleter* self_cast = dynamic_cast<MiqtVirtualQCompleter*>( (QCompleter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QCompleter_virtualbase_eventFilter(void* self, QObject* o, QEvent* e) {
	return ( (MiqtVirtualQCompleter*)(self) )->virtualbase_eventFilter(o, e);
}

bool QCompleter_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQCompleter* self_cast = dynamic_cast<MiqtVirtualQCompleter*>( (QCompleter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QCompleter_virtualbase_event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQCompleter*)(self) )->virtualbase_event(param1);
}

bool QCompleter_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQCompleter* self_cast = dynamic_cast<MiqtVirtualQCompleter*>( (QCompleter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QCompleter_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQCompleter*)(self) )->virtualbase_timerEvent(event);
}

bool QCompleter_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQCompleter* self_cast = dynamic_cast<MiqtVirtualQCompleter*>( (QCompleter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QCompleter_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQCompleter*)(self) )->virtualbase_childEvent(event);
}

bool QCompleter_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQCompleter* self_cast = dynamic_cast<MiqtVirtualQCompleter*>( (QCompleter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QCompleter_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQCompleter*)(self) )->virtualbase_customEvent(event);
}

bool QCompleter_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQCompleter* self_cast = dynamic_cast<MiqtVirtualQCompleter*>( (QCompleter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QCompleter_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQCompleter*)(self) )->virtualbase_connectNotify(signal);
}

bool QCompleter_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQCompleter* self_cast = dynamic_cast<MiqtVirtualQCompleter*>( (QCompleter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QCompleter_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQCompleter*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QCompleter_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCompleter* self_cast = dynamic_cast<MiqtVirtualQCompleter*>( (QCompleter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QCompleter_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCompleter* self_cast = dynamic_cast<MiqtVirtualQCompleter*>( (QCompleter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QCompleter_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQCompleter* self_cast = dynamic_cast<MiqtVirtualQCompleter*>( (QCompleter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QCompleter_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQCompleter* self_cast = dynamic_cast<MiqtVirtualQCompleter*>( (QCompleter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QCompleter_delete(QCompleter* self) {
	delete self;
}

