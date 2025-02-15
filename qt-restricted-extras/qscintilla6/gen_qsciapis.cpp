#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qsciapis.h>
#include "gen_qsciapis.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QsciAPIs_apiPreparationCancelled(intptr_t);
void miqt_exec_callback_QsciAPIs_apiPreparationStarted(intptr_t);
void miqt_exec_callback_QsciAPIs_apiPreparationFinished(intptr_t);
void miqt_exec_callback_QsciAPIs_updateAutoCompletionList(QsciAPIs*, intptr_t, struct miqt_array /* of struct miqt_string */ , struct miqt_array /* of struct miqt_string */ );
void miqt_exec_callback_QsciAPIs_autoCompletionSelected(QsciAPIs*, intptr_t, struct miqt_string);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciAPIs_callTips(QsciAPIs*, intptr_t, struct miqt_array /* of struct miqt_string */ , int, int, struct miqt_array /* of int */ );
bool miqt_exec_callback_QsciAPIs_event(QsciAPIs*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciAPIs_eventFilter(QsciAPIs*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QsciAPIs_timerEvent(QsciAPIs*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciAPIs_childEvent(QsciAPIs*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciAPIs_customEvent(QsciAPIs*, intptr_t, QEvent*);
void miqt_exec_callback_QsciAPIs_connectNotify(QsciAPIs*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciAPIs_disconnectNotify(QsciAPIs*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciAPIs final : public QsciAPIs {
public:

	MiqtVirtualQsciAPIs(QsciLexer* lexer): QsciAPIs(lexer) {};

	virtual ~MiqtVirtualQsciAPIs() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateAutoCompletionList = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateAutoCompletionList(const QStringList& context, QStringList& list) override {
		if (handle__updateAutoCompletionList == 0) {
			QsciAPIs::updateAutoCompletionList(context, list);
			return;
		}
		
		const QStringList& context_ret = context;
		// Convert QList<> from C++ memory to manually-managed C memory
		struct miqt_string* context_arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * context_ret.length()));
		for (size_t i = 0, e = context_ret.length(); i < e; ++i) {
			QString context_lv_ret = context_ret[i];
			// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
			QByteArray context_lv_b = context_lv_ret.toUtf8();
			struct miqt_string context_lv_ms;
			context_lv_ms.len = context_lv_b.length();
			context_lv_ms.data = static_cast<char*>(malloc(context_lv_ms.len));
			memcpy(context_lv_ms.data, context_lv_b.data(), context_lv_ms.len);
			context_arr[i] = context_lv_ms;
		}
		struct miqt_array context_out;
		context_out.len = context_ret.length();
		context_out.data = static_cast<void*>(context_arr);
		struct miqt_array /* of struct miqt_string */  sigval1 = context_out;
		QStringList& list_ret = list;
		// Convert QList<> from C++ memory to manually-managed C memory
		struct miqt_string* list_arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * list_ret.length()));
		for (size_t i = 0, e = list_ret.length(); i < e; ++i) {
			QString list_lv_ret = list_ret[i];
			// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
			QByteArray list_lv_b = list_lv_ret.toUtf8();
			struct miqt_string list_lv_ms;
			list_lv_ms.len = list_lv_b.length();
			list_lv_ms.data = static_cast<char*>(malloc(list_lv_ms.len));
			memcpy(list_lv_ms.data, list_lv_b.data(), list_lv_ms.len);
			list_arr[i] = list_lv_ms;
		}
		struct miqt_array list_out;
		list_out.len = list_ret.length();
		list_out.data = static_cast<void*>(list_arr);
		struct miqt_array /* of struct miqt_string */  sigval2 = list_out;

		miqt_exec_callback_QsciAPIs_updateAutoCompletionList(this, handle__updateAutoCompletionList, sigval1, sigval2);

		
	}

	friend void QsciAPIs_virtualbase_updateAutoCompletionList(void* self, struct miqt_array /* of struct miqt_string */  context, struct miqt_array /* of struct miqt_string */  list);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__autoCompletionSelected = 0;

	// Subclass to allow providing a Go implementation
	virtual void autoCompletionSelected(const QString& sel) override {
		if (handle__autoCompletionSelected == 0) {
			QsciAPIs::autoCompletionSelected(sel);
			return;
		}
		
		const QString sel_ret = sel;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray sel_b = sel_ret.toUtf8();
		struct miqt_string sel_ms;
		sel_ms.len = sel_b.length();
		sel_ms.data = static_cast<char*>(malloc(sel_ms.len));
		memcpy(sel_ms.data, sel_b.data(), sel_ms.len);
		struct miqt_string sigval1 = sel_ms;

		miqt_exec_callback_QsciAPIs_autoCompletionSelected(this, handle__autoCompletionSelected, sigval1);

		
	}

	friend void QsciAPIs_virtualbase_autoCompletionSelected(void* self, struct miqt_string sel);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__callTips = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList callTips(const QStringList& context, int commas, QsciScintilla::CallTipsStyle style, QList<int>& shifts) override {
		if (handle__callTips == 0) {
			return QsciAPIs::callTips(context, commas, style, shifts);
		}
		
		const QStringList& context_ret = context;
		// Convert QList<> from C++ memory to manually-managed C memory
		struct miqt_string* context_arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * context_ret.length()));
		for (size_t i = 0, e = context_ret.length(); i < e; ++i) {
			QString context_lv_ret = context_ret[i];
			// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
			QByteArray context_lv_b = context_lv_ret.toUtf8();
			struct miqt_string context_lv_ms;
			context_lv_ms.len = context_lv_b.length();
			context_lv_ms.data = static_cast<char*>(malloc(context_lv_ms.len));
			memcpy(context_lv_ms.data, context_lv_b.data(), context_lv_ms.len);
			context_arr[i] = context_lv_ms;
		}
		struct miqt_array context_out;
		context_out.len = context_ret.length();
		context_out.data = static_cast<void*>(context_arr);
		struct miqt_array /* of struct miqt_string */  sigval1 = context_out;
		int sigval2 = commas;
		QsciScintilla::CallTipsStyle style_ret = style;
		int sigval3 = static_cast<int>(style_ret);
		QList<int>& shifts_ret = shifts;
		// Convert QList<> from C++ memory to manually-managed C memory
		int* shifts_arr = static_cast<int*>(malloc(sizeof(int) * shifts_ret.length()));
		for (size_t i = 0, e = shifts_ret.length(); i < e; ++i) {
			shifts_arr[i] = shifts_ret[i];
		}
		struct miqt_array shifts_out;
		shifts_out.len = shifts_ret.length();
		shifts_out.data = static_cast<void*>(shifts_arr);
		struct miqt_array /* of int */  sigval4 = shifts_out;

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciAPIs_callTips(this, handle__callTips, sigval1, sigval2, sigval3, sigval4);
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}

		return callback_return_value_QList;
	}

	friend struct miqt_array /* of struct miqt_string */  QsciAPIs_virtualbase_callTips(void* self, struct miqt_array /* of struct miqt_string */  context, int commas, int style, struct miqt_array /* of int */  shifts);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QsciAPIs::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QsciAPIs_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QsciAPIs_virtualbase_event(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QsciAPIs::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QsciAPIs_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QsciAPIs_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QsciAPIs::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QsciAPIs_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QsciAPIs_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QsciAPIs::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QsciAPIs_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QsciAPIs_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QsciAPIs::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QsciAPIs_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QsciAPIs_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QsciAPIs::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciAPIs_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QsciAPIs_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QsciAPIs::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciAPIs_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QsciAPIs_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QsciAPIs_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QsciAPIs_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QsciAPIs_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QsciAPIs_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QsciAPIs* QsciAPIs_new(QsciLexer* lexer) {
	return new MiqtVirtualQsciAPIs(lexer);
}

void QsciAPIs_virtbase(QsciAPIs* src, QsciAbstractAPIs** outptr_QsciAbstractAPIs) {
	*outptr_QsciAbstractAPIs = static_cast<QsciAbstractAPIs*>(src);
}

QMetaObject* QsciAPIs_metaObject(const QsciAPIs* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciAPIs_metacast(QsciAPIs* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciAPIs_tr(const char* s) {
	QString _ret = QsciAPIs::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciAPIs_add(QsciAPIs* self, struct miqt_string entry) {
	QString entry_QString = QString::fromUtf8(entry.data, entry.len);
	self->add(entry_QString);
}

void QsciAPIs_clear(QsciAPIs* self) {
	self->clear();
}

bool QsciAPIs_load(QsciAPIs* self, struct miqt_string filename) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return self->load(filename_QString);
}

void QsciAPIs_remove(QsciAPIs* self, struct miqt_string entry) {
	QString entry_QString = QString::fromUtf8(entry.data, entry.len);
	self->remove(entry_QString);
}

void QsciAPIs_prepare(QsciAPIs* self) {
	self->prepare();
}

void QsciAPIs_cancelPreparation(QsciAPIs* self) {
	self->cancelPreparation();
}

struct miqt_string QsciAPIs_defaultPreparedName(const QsciAPIs* self) {
	QString _ret = self->defaultPreparedName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QsciAPIs_isPrepared(const QsciAPIs* self) {
	return self->isPrepared();
}

bool QsciAPIs_loadPrepared(QsciAPIs* self) {
	return self->loadPrepared();
}

bool QsciAPIs_savePrepared(const QsciAPIs* self) {
	return self->savePrepared();
}

void QsciAPIs_updateAutoCompletionList(QsciAPIs* self, struct miqt_array /* of struct miqt_string */  context, struct miqt_array /* of struct miqt_string */  list) {
	QStringList context_QList;
	context_QList.reserve(context.len);
	struct miqt_string* context_arr = static_cast<struct miqt_string*>(context.data);
	for(size_t i = 0; i < context.len; ++i) {
		QString context_arr_i_QString = QString::fromUtf8(context_arr[i].data, context_arr[i].len);
		context_QList.push_back(context_arr_i_QString);
	}
	QStringList list_QList;
	list_QList.reserve(list.len);
	struct miqt_string* list_arr = static_cast<struct miqt_string*>(list.data);
	for(size_t i = 0; i < list.len; ++i) {
		QString list_arr_i_QString = QString::fromUtf8(list_arr[i].data, list_arr[i].len);
		list_QList.push_back(list_arr_i_QString);
	}
	self->updateAutoCompletionList(context_QList, list_QList);
}

void QsciAPIs_autoCompletionSelected(QsciAPIs* self, struct miqt_string sel) {
	QString sel_QString = QString::fromUtf8(sel.data, sel.len);
	self->autoCompletionSelected(sel_QString);
}

struct miqt_array /* of struct miqt_string */  QsciAPIs_callTips(QsciAPIs* self, struct miqt_array /* of struct miqt_string */  context, int commas, int style, struct miqt_array /* of int */  shifts) {
	QStringList context_QList;
	context_QList.reserve(context.len);
	struct miqt_string* context_arr = static_cast<struct miqt_string*>(context.data);
	for(size_t i = 0; i < context.len; ++i) {
		QString context_arr_i_QString = QString::fromUtf8(context_arr[i].data, context_arr[i].len);
		context_QList.push_back(context_arr_i_QString);
	}
	QList<int> shifts_QList;
	shifts_QList.reserve(shifts.len);
	int* shifts_arr = static_cast<int*>(shifts.data);
	for(size_t i = 0; i < shifts.len; ++i) {
		shifts_QList.push_back(static_cast<int>(shifts_arr[i]));
	}
	QStringList _ret = self->callTips(context_QList, static_cast<int>(commas), static_cast<QsciScintilla::CallTipsStyle>(style), shifts_QList);
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

bool QsciAPIs_event(QsciAPIs* self, QEvent* e) {
	return self->event(e);
}

struct miqt_array /* of struct miqt_string */  QsciAPIs_installedAPIFiles(const QsciAPIs* self) {
	QStringList _ret = self->installedAPIFiles();
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

void QsciAPIs_apiPreparationCancelled(QsciAPIs* self) {
	self->apiPreparationCancelled();
}

void QsciAPIs_connect_apiPreparationCancelled(QsciAPIs* self, intptr_t slot) {
	MiqtVirtualQsciAPIs::connect(self, static_cast<void (QsciAPIs::*)()>(&QsciAPIs::apiPreparationCancelled), self, [=]() {
		miqt_exec_callback_QsciAPIs_apiPreparationCancelled(slot);
	});
}

void QsciAPIs_apiPreparationStarted(QsciAPIs* self) {
	self->apiPreparationStarted();
}

void QsciAPIs_connect_apiPreparationStarted(QsciAPIs* self, intptr_t slot) {
	MiqtVirtualQsciAPIs::connect(self, static_cast<void (QsciAPIs::*)()>(&QsciAPIs::apiPreparationStarted), self, [=]() {
		miqt_exec_callback_QsciAPIs_apiPreparationStarted(slot);
	});
}

void QsciAPIs_apiPreparationFinished(QsciAPIs* self) {
	self->apiPreparationFinished();
}

void QsciAPIs_connect_apiPreparationFinished(QsciAPIs* self, intptr_t slot) {
	MiqtVirtualQsciAPIs::connect(self, static_cast<void (QsciAPIs::*)()>(&QsciAPIs::apiPreparationFinished), self, [=]() {
		miqt_exec_callback_QsciAPIs_apiPreparationFinished(slot);
	});
}

struct miqt_string QsciAPIs_tr2(const char* s, const char* c) {
	QString _ret = QsciAPIs::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciAPIs_tr3(const char* s, const char* c, int n) {
	QString _ret = QsciAPIs::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QsciAPIs_isPrepared1(const QsciAPIs* self, struct miqt_string filename) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return self->isPrepared(filename_QString);
}

bool QsciAPIs_loadPrepared1(QsciAPIs* self, struct miqt_string filename) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return self->loadPrepared(filename_QString);
}

bool QsciAPIs_savePrepared1(const QsciAPIs* self, struct miqt_string filename) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return self->savePrepared(filename_QString);
}

bool QsciAPIs_override_virtual_updateAutoCompletionList(void* self, intptr_t slot) {
	MiqtVirtualQsciAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAPIs*>( (QsciAPIs*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateAutoCompletionList = slot;
	return true;
}

void QsciAPIs_virtualbase_updateAutoCompletionList(void* self, struct miqt_array /* of struct miqt_string */  context, struct miqt_array /* of struct miqt_string */  list) {
	QStringList context_QList;
	context_QList.reserve(context.len);
	struct miqt_string* context_arr = static_cast<struct miqt_string*>(context.data);
	for(size_t i = 0; i < context.len; ++i) {
		QString context_arr_i_QString = QString::fromUtf8(context_arr[i].data, context_arr[i].len);
		context_QList.push_back(context_arr_i_QString);
	}
	QStringList list_QList;
	list_QList.reserve(list.len);
	struct miqt_string* list_arr = static_cast<struct miqt_string*>(list.data);
	for(size_t i = 0; i < list.len; ++i) {
		QString list_arr_i_QString = QString::fromUtf8(list_arr[i].data, list_arr[i].len);
		list_QList.push_back(list_arr_i_QString);
	}

	( (MiqtVirtualQsciAPIs*)(self) )->QsciAPIs::updateAutoCompletionList(context_QList, list_QList);

}

bool QsciAPIs_override_virtual_autoCompletionSelected(void* self, intptr_t slot) {
	MiqtVirtualQsciAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAPIs*>( (QsciAPIs*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__autoCompletionSelected = slot;
	return true;
}

void QsciAPIs_virtualbase_autoCompletionSelected(void* self, struct miqt_string sel) {
	QString sel_QString = QString::fromUtf8(sel.data, sel.len);

	( (MiqtVirtualQsciAPIs*)(self) )->QsciAPIs::autoCompletionSelected(sel_QString);

}

bool QsciAPIs_override_virtual_callTips(void* self, intptr_t slot) {
	MiqtVirtualQsciAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAPIs*>( (QsciAPIs*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__callTips = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QsciAPIs_virtualbase_callTips(void* self, struct miqt_array /* of struct miqt_string */  context, int commas, int style, struct miqt_array /* of int */  shifts) {
	QStringList context_QList;
	context_QList.reserve(context.len);
	struct miqt_string* context_arr = static_cast<struct miqt_string*>(context.data);
	for(size_t i = 0; i < context.len; ++i) {
		QString context_arr_i_QString = QString::fromUtf8(context_arr[i].data, context_arr[i].len);
		context_QList.push_back(context_arr_i_QString);
	}
	QList<int> shifts_QList;
	shifts_QList.reserve(shifts.len);
	int* shifts_arr = static_cast<int*>(shifts.data);
	for(size_t i = 0; i < shifts.len; ++i) {
		shifts_QList.push_back(static_cast<int>(shifts_arr[i]));
	}

	QStringList _ret = ( (MiqtVirtualQsciAPIs*)(self) )->QsciAPIs::callTips(context_QList, static_cast<int>(commas), static_cast<QsciScintilla::CallTipsStyle>(style), shifts_QList);
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

bool QsciAPIs_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQsciAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAPIs*>( (QsciAPIs*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QsciAPIs_virtualbase_event(void* self, QEvent* e) {

	return ( (MiqtVirtualQsciAPIs*)(self) )->QsciAPIs::event(e);

}

bool QsciAPIs_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQsciAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAPIs*>( (QsciAPIs*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QsciAPIs_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualQsciAPIs*)(self) )->QsciAPIs::eventFilter(watched, event);

}

bool QsciAPIs_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAPIs*>( (QsciAPIs*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QsciAPIs_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQsciAPIs*)(self) )->QsciAPIs::timerEvent(event);

}

bool QsciAPIs_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAPIs*>( (QsciAPIs*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QsciAPIs_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQsciAPIs*)(self) )->QsciAPIs::childEvent(event);

}

bool QsciAPIs_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAPIs*>( (QsciAPIs*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QsciAPIs_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQsciAPIs*)(self) )->QsciAPIs::customEvent(event);

}

bool QsciAPIs_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAPIs*>( (QsciAPIs*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QsciAPIs_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQsciAPIs*)(self) )->QsciAPIs::connectNotify(*signal);

}

bool QsciAPIs_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAPIs*>( (QsciAPIs*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QsciAPIs_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQsciAPIs*)(self) )->QsciAPIs::disconnectNotify(*signal);

}

QObject* QsciAPIs_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAPIs*>( (QsciAPIs*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QsciAPIs_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAPIs*>( (QsciAPIs*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QsciAPIs_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQsciAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAPIs*>( (QsciAPIs*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QsciAPIs_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQsciAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAPIs*>( (QsciAPIs*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QsciAPIs_delete(QsciAPIs* self) {
	delete self;
}

