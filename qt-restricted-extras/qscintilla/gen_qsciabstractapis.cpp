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
#include <qsciabstractapis.h>
#include "gen_qsciabstractapis.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QsciAbstractAPIs_updateAutoCompletionList(QsciAbstractAPIs*, intptr_t, struct miqt_array /* of struct miqt_string */ , struct miqt_array /* of struct miqt_string */ );
void miqt_exec_callback_QsciAbstractAPIs_autoCompletionSelected(QsciAbstractAPIs*, intptr_t, struct miqt_string);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciAbstractAPIs_callTips(QsciAbstractAPIs*, intptr_t, struct miqt_array /* of struct miqt_string */ , int, int, struct miqt_array /* of int */ );
bool miqt_exec_callback_QsciAbstractAPIs_event(QsciAbstractAPIs*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciAbstractAPIs_eventFilter(QsciAbstractAPIs*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QsciAbstractAPIs_timerEvent(QsciAbstractAPIs*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciAbstractAPIs_childEvent(QsciAbstractAPIs*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciAbstractAPIs_customEvent(QsciAbstractAPIs*, intptr_t, QEvent*);
void miqt_exec_callback_QsciAbstractAPIs_connectNotify(QsciAbstractAPIs*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciAbstractAPIs_disconnectNotify(QsciAbstractAPIs*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciAbstractAPIs final : public QsciAbstractAPIs {
public:

	MiqtVirtualQsciAbstractAPIs(QsciLexer* lexer): QsciAbstractAPIs(lexer) {};

	virtual ~MiqtVirtualQsciAbstractAPIs() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateAutoCompletionList = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateAutoCompletionList(const QStringList& context, QStringList& list) override {
		if (handle__updateAutoCompletionList == 0) {
			return; // Pure virtual, there is no base we can call
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

		miqt_exec_callback_QsciAbstractAPIs_updateAutoCompletionList(this, handle__updateAutoCompletionList, sigval1, sigval2);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__autoCompletionSelected = 0;

	// Subclass to allow providing a Go implementation
	virtual void autoCompletionSelected(const QString& selection) override {
		if (handle__autoCompletionSelected == 0) {
			QsciAbstractAPIs::autoCompletionSelected(selection);
			return;
		}
		
		const QString selection_ret = selection;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray selection_b = selection_ret.toUtf8();
		struct miqt_string selection_ms;
		selection_ms.len = selection_b.length();
		selection_ms.data = static_cast<char*>(malloc(selection_ms.len));
		memcpy(selection_ms.data, selection_b.data(), selection_ms.len);
		struct miqt_string sigval1 = selection_ms;

		miqt_exec_callback_QsciAbstractAPIs_autoCompletionSelected(this, handle__autoCompletionSelected, sigval1);

		
	}

	friend void QsciAbstractAPIs_virtualbase_autoCompletionSelected(void* self, struct miqt_string selection);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__callTips = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList callTips(const QStringList& context, int commas, QsciScintilla::CallTipsStyle style, QList<int>& shifts) override {
		if (handle__callTips == 0) {
			return QStringList(); // Pure virtual, there is no base we can call
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

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciAbstractAPIs_callTips(this, handle__callTips, sigval1, sigval2, sigval3, sigval4);
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}

		return callback_return_value_QList;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QsciAbstractAPIs::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QsciAbstractAPIs_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QsciAbstractAPIs_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QsciAbstractAPIs::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QsciAbstractAPIs_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QsciAbstractAPIs_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QsciAbstractAPIs::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QsciAbstractAPIs_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QsciAbstractAPIs_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QsciAbstractAPIs::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QsciAbstractAPIs_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QsciAbstractAPIs_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QsciAbstractAPIs::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QsciAbstractAPIs_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QsciAbstractAPIs_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QsciAbstractAPIs::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciAbstractAPIs_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QsciAbstractAPIs_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QsciAbstractAPIs::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciAbstractAPIs_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QsciAbstractAPIs_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QsciAbstractAPIs_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QsciAbstractAPIs_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QsciAbstractAPIs_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QsciAbstractAPIs_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QsciAbstractAPIs* QsciAbstractAPIs_new(QsciLexer* lexer) {
	return new MiqtVirtualQsciAbstractAPIs(lexer);
}

void QsciAbstractAPIs_virtbase(QsciAbstractAPIs* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QsciAbstractAPIs_metaObject(const QsciAbstractAPIs* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciAbstractAPIs_metacast(QsciAbstractAPIs* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciAbstractAPIs_tr(const char* s) {
	QString _ret = QsciAbstractAPIs::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciAbstractAPIs_trUtf8(const char* s) {
	QString _ret = QsciAbstractAPIs::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QsciLexer* QsciAbstractAPIs_lexer(const QsciAbstractAPIs* self) {
	return self->lexer();
}

void QsciAbstractAPIs_updateAutoCompletionList(QsciAbstractAPIs* self, struct miqt_array /* of struct miqt_string */  context, struct miqt_array /* of struct miqt_string */  list) {
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

void QsciAbstractAPIs_autoCompletionSelected(QsciAbstractAPIs* self, struct miqt_string selection) {
	QString selection_QString = QString::fromUtf8(selection.data, selection.len);
	self->autoCompletionSelected(selection_QString);
}

struct miqt_array /* of struct miqt_string */  QsciAbstractAPIs_callTips(QsciAbstractAPIs* self, struct miqt_array /* of struct miqt_string */  context, int commas, int style, struct miqt_array /* of int */  shifts) {
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

struct miqt_string QsciAbstractAPIs_tr2(const char* s, const char* c) {
	QString _ret = QsciAbstractAPIs::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciAbstractAPIs_tr3(const char* s, const char* c, int n) {
	QString _ret = QsciAbstractAPIs::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciAbstractAPIs_trUtf82(const char* s, const char* c) {
	QString _ret = QsciAbstractAPIs::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciAbstractAPIs_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciAbstractAPIs::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QsciAbstractAPIs_override_virtual_updateAutoCompletionList(void* self, intptr_t slot) {
	MiqtVirtualQsciAbstractAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAbstractAPIs*>( (QsciAbstractAPIs*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateAutoCompletionList = slot;
	return true;
}

bool QsciAbstractAPIs_override_virtual_autoCompletionSelected(void* self, intptr_t slot) {
	MiqtVirtualQsciAbstractAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAbstractAPIs*>( (QsciAbstractAPIs*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__autoCompletionSelected = slot;
	return true;
}

void QsciAbstractAPIs_virtualbase_autoCompletionSelected(void* self, struct miqt_string selection) {
	QString selection_QString = QString::fromUtf8(selection.data, selection.len);

	( (MiqtVirtualQsciAbstractAPIs*)(self) )->MiqtVirtualQsciAbstractAPIs::autoCompletionSelected(selection_QString);

}

bool QsciAbstractAPIs_override_virtual_callTips(void* self, intptr_t slot) {
	MiqtVirtualQsciAbstractAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAbstractAPIs*>( (QsciAbstractAPIs*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__callTips = slot;
	return true;
}

bool QsciAbstractAPIs_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQsciAbstractAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAbstractAPIs*>( (QsciAbstractAPIs*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QsciAbstractAPIs_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualQsciAbstractAPIs*)(self) )->MiqtVirtualQsciAbstractAPIs::event(event);

}

bool QsciAbstractAPIs_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQsciAbstractAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAbstractAPIs*>( (QsciAbstractAPIs*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QsciAbstractAPIs_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualQsciAbstractAPIs*)(self) )->MiqtVirtualQsciAbstractAPIs::eventFilter(watched, event);

}

bool QsciAbstractAPIs_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciAbstractAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAbstractAPIs*>( (QsciAbstractAPIs*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QsciAbstractAPIs_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQsciAbstractAPIs*)(self) )->MiqtVirtualQsciAbstractAPIs::timerEvent(event);

}

bool QsciAbstractAPIs_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciAbstractAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAbstractAPIs*>( (QsciAbstractAPIs*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QsciAbstractAPIs_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQsciAbstractAPIs*)(self) )->MiqtVirtualQsciAbstractAPIs::childEvent(event);

}

bool QsciAbstractAPIs_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciAbstractAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAbstractAPIs*>( (QsciAbstractAPIs*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QsciAbstractAPIs_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQsciAbstractAPIs*)(self) )->MiqtVirtualQsciAbstractAPIs::customEvent(event);

}

bool QsciAbstractAPIs_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciAbstractAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAbstractAPIs*>( (QsciAbstractAPIs*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QsciAbstractAPIs_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQsciAbstractAPIs*)(self) )->MiqtVirtualQsciAbstractAPIs::connectNotify(*signal);

}

bool QsciAbstractAPIs_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciAbstractAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAbstractAPIs*>( (QsciAbstractAPIs*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QsciAbstractAPIs_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQsciAbstractAPIs*)(self) )->MiqtVirtualQsciAbstractAPIs::disconnectNotify(*signal);

}

QObject* QsciAbstractAPIs_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciAbstractAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAbstractAPIs*>( (QsciAbstractAPIs*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QsciAbstractAPIs_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciAbstractAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAbstractAPIs*>( (QsciAbstractAPIs*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QsciAbstractAPIs_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQsciAbstractAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAbstractAPIs*>( (QsciAbstractAPIs*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QsciAbstractAPIs_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQsciAbstractAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAbstractAPIs*>( (QsciAbstractAPIs*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QsciAbstractAPIs_delete(QsciAbstractAPIs* self) {
	delete self;
}

