#include <QAbstractAxis>
#include <QBarCategoryAxis>
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
#include <qbarcategoryaxis.h>
#include "gen_qbarcategoryaxis.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QBarCategoryAxis_categoriesChanged(intptr_t);
void miqt_exec_callback_QBarCategoryAxis_minChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QBarCategoryAxis_maxChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QBarCategoryAxis_rangeChanged(intptr_t, struct miqt_string, struct miqt_string);
void miqt_exec_callback_QBarCategoryAxis_countChanged(intptr_t);
int miqt_exec_callback_QBarCategoryAxis_type(const QBarCategoryAxis*, intptr_t);
bool miqt_exec_callback_QBarCategoryAxis_event(QBarCategoryAxis*, intptr_t, QEvent*);
bool miqt_exec_callback_QBarCategoryAxis_eventFilter(QBarCategoryAxis*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QBarCategoryAxis_timerEvent(QBarCategoryAxis*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QBarCategoryAxis_childEvent(QBarCategoryAxis*, intptr_t, QChildEvent*);
void miqt_exec_callback_QBarCategoryAxis_customEvent(QBarCategoryAxis*, intptr_t, QEvent*);
void miqt_exec_callback_QBarCategoryAxis_connectNotify(QBarCategoryAxis*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QBarCategoryAxis_disconnectNotify(QBarCategoryAxis*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQBarCategoryAxis final : public QBarCategoryAxis {
public:

	MiqtVirtualQBarCategoryAxis(): QBarCategoryAxis() {}
	MiqtVirtualQBarCategoryAxis(QObject* parent): QBarCategoryAxis(parent) {}

	virtual ~MiqtVirtualQBarCategoryAxis() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractAxis::AxisType type() const override {
		if (handle__type == 0) {
			return QBarCategoryAxis::type();
		}

		int callback_return_value = miqt_exec_callback_QBarCategoryAxis_type(this, handle__type);
		return static_cast<QAbstractAxis::AxisType>(callback_return_value);
	}

	friend int QBarCategoryAxis_virtualbase_type(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QBarCategoryAxis::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QBarCategoryAxis_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QBarCategoryAxis_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QBarCategoryAxis::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QBarCategoryAxis_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QBarCategoryAxis_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QBarCategoryAxis::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QBarCategoryAxis_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QBarCategoryAxis_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QBarCategoryAxis::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QBarCategoryAxis_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QBarCategoryAxis_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QBarCategoryAxis::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QBarCategoryAxis_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QBarCategoryAxis_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QBarCategoryAxis::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QBarCategoryAxis_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QBarCategoryAxis_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QBarCategoryAxis::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QBarCategoryAxis_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QBarCategoryAxis_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QBarCategoryAxis_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QBarCategoryAxis_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QBarCategoryAxis_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QBarCategoryAxis_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QBarCategoryAxis* QBarCategoryAxis_new() {
	return new (std::nothrow) MiqtVirtualQBarCategoryAxis();
}

QBarCategoryAxis* QBarCategoryAxis_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQBarCategoryAxis(parent);
}

void QBarCategoryAxis_virtbase(QBarCategoryAxis* src, QAbstractAxis** outptr_QAbstractAxis) {
	*outptr_QAbstractAxis = static_cast<QAbstractAxis*>(src);
}

QMetaObject* QBarCategoryAxis_metaObject(const QBarCategoryAxis* self) {
	return (QMetaObject*) self->metaObject();
}

void* QBarCategoryAxis_metacast(QBarCategoryAxis* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QBarCategoryAxis_tr(const char* s) {
	QString _ret = QBarCategoryAxis::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QBarCategoryAxis_type(const QBarCategoryAxis* self) {
	QAbstractAxis::AxisType _ret = self->type();
	return static_cast<int>(_ret);
}

void QBarCategoryAxis_append(QBarCategoryAxis* self, struct miqt_array /* of struct miqt_string */  categories) {
	QStringList categories_QList;
	categories_QList.reserve(categories.len);
	struct miqt_string* categories_arr = static_cast<struct miqt_string*>(categories.data);
	for(size_t i = 0; i < categories.len; ++i) {
		QString categories_arr_i_QString = QString::fromUtf8(categories_arr[i].data, categories_arr[i].len);
		categories_QList.push_back(categories_arr_i_QString);
	}
	self->append(categories_QList);
}

void QBarCategoryAxis_appendWithCategory(QBarCategoryAxis* self, struct miqt_string category) {
	QString category_QString = QString::fromUtf8(category.data, category.len);
	self->append(category_QString);
}

void QBarCategoryAxis_remove(QBarCategoryAxis* self, struct miqt_string category) {
	QString category_QString = QString::fromUtf8(category.data, category.len);
	self->remove(category_QString);
}

void QBarCategoryAxis_insert(QBarCategoryAxis* self, int index, struct miqt_string category) {
	QString category_QString = QString::fromUtf8(category.data, category.len);
	self->insert(static_cast<int>(index), category_QString);
}

void QBarCategoryAxis_replace(QBarCategoryAxis* self, struct miqt_string oldCategory, struct miqt_string newCategory) {
	QString oldCategory_QString = QString::fromUtf8(oldCategory.data, oldCategory.len);
	QString newCategory_QString = QString::fromUtf8(newCategory.data, newCategory.len);
	self->replace(oldCategory_QString, newCategory_QString);
}

void QBarCategoryAxis_clear(QBarCategoryAxis* self) {
	self->clear();
}

void QBarCategoryAxis_setCategories(QBarCategoryAxis* self, struct miqt_array /* of struct miqt_string */  categories) {
	QStringList categories_QList;
	categories_QList.reserve(categories.len);
	struct miqt_string* categories_arr = static_cast<struct miqt_string*>(categories.data);
	for(size_t i = 0; i < categories.len; ++i) {
		QString categories_arr_i_QString = QString::fromUtf8(categories_arr[i].data, categories_arr[i].len);
		categories_QList.push_back(categories_arr_i_QString);
	}
	self->setCategories(categories_QList);
}

struct miqt_array /* of struct miqt_string */  QBarCategoryAxis_categories(QBarCategoryAxis* self) {
	QStringList _ret = self->categories();
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

int QBarCategoryAxis_count(const QBarCategoryAxis* self) {
	return self->count();
}

struct miqt_string QBarCategoryAxis_at(const QBarCategoryAxis* self, int index) {
	QString _ret = self->at(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QBarCategoryAxis_setMin(QBarCategoryAxis* self, struct miqt_string minCategory) {
	QString minCategory_QString = QString::fromUtf8(minCategory.data, minCategory.len);
	self->setMin(minCategory_QString);
}

struct miqt_string QBarCategoryAxis_min(const QBarCategoryAxis* self) {
	QString _ret = self->min();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QBarCategoryAxis_setMax(QBarCategoryAxis* self, struct miqt_string maxCategory) {
	QString maxCategory_QString = QString::fromUtf8(maxCategory.data, maxCategory.len);
	self->setMax(maxCategory_QString);
}

struct miqt_string QBarCategoryAxis_max(const QBarCategoryAxis* self) {
	QString _ret = self->max();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QBarCategoryAxis_setRange(QBarCategoryAxis* self, struct miqt_string minCategory, struct miqt_string maxCategory) {
	QString minCategory_QString = QString::fromUtf8(minCategory.data, minCategory.len);
	QString maxCategory_QString = QString::fromUtf8(maxCategory.data, maxCategory.len);
	self->setRange(minCategory_QString, maxCategory_QString);
}

void QBarCategoryAxis_categoriesChanged(QBarCategoryAxis* self) {
	self->categoriesChanged();
}

void QBarCategoryAxis_connect_categoriesChanged(QBarCategoryAxis* self, intptr_t slot) {
	QBarCategoryAxis::connect(self, static_cast<void (QBarCategoryAxis::*)()>(&QBarCategoryAxis::categoriesChanged), self, [=]() {
		miqt_exec_callback_QBarCategoryAxis_categoriesChanged(slot);
	});
}

void QBarCategoryAxis_minChanged(QBarCategoryAxis* self, struct miqt_string min) {
	QString min_QString = QString::fromUtf8(min.data, min.len);
	self->minChanged(min_QString);
}

void QBarCategoryAxis_connect_minChanged(QBarCategoryAxis* self, intptr_t slot) {
	QBarCategoryAxis::connect(self, static_cast<void (QBarCategoryAxis::*)(const QString&)>(&QBarCategoryAxis::minChanged), self, [=](const QString& min) {
		const QString min_ret = min;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray min_b = min_ret.toUtf8();
		struct miqt_string min_ms;
		min_ms.len = min_b.length();
		min_ms.data = static_cast<char*>(malloc(min_ms.len));
		memcpy(min_ms.data, min_b.data(), min_ms.len);
		struct miqt_string sigval1 = min_ms;
		miqt_exec_callback_QBarCategoryAxis_minChanged(slot, sigval1);
	});
}

void QBarCategoryAxis_maxChanged(QBarCategoryAxis* self, struct miqt_string max) {
	QString max_QString = QString::fromUtf8(max.data, max.len);
	self->maxChanged(max_QString);
}

void QBarCategoryAxis_connect_maxChanged(QBarCategoryAxis* self, intptr_t slot) {
	QBarCategoryAxis::connect(self, static_cast<void (QBarCategoryAxis::*)(const QString&)>(&QBarCategoryAxis::maxChanged), self, [=](const QString& max) {
		const QString max_ret = max;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray max_b = max_ret.toUtf8();
		struct miqt_string max_ms;
		max_ms.len = max_b.length();
		max_ms.data = static_cast<char*>(malloc(max_ms.len));
		memcpy(max_ms.data, max_b.data(), max_ms.len);
		struct miqt_string sigval1 = max_ms;
		miqt_exec_callback_QBarCategoryAxis_maxChanged(slot, sigval1);
	});
}

void QBarCategoryAxis_rangeChanged(QBarCategoryAxis* self, struct miqt_string min, struct miqt_string max) {
	QString min_QString = QString::fromUtf8(min.data, min.len);
	QString max_QString = QString::fromUtf8(max.data, max.len);
	self->rangeChanged(min_QString, max_QString);
}

void QBarCategoryAxis_connect_rangeChanged(QBarCategoryAxis* self, intptr_t slot) {
	QBarCategoryAxis::connect(self, static_cast<void (QBarCategoryAxis::*)(const QString&, const QString&)>(&QBarCategoryAxis::rangeChanged), self, [=](const QString& min, const QString& max) {
		const QString min_ret = min;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray min_b = min_ret.toUtf8();
		struct miqt_string min_ms;
		min_ms.len = min_b.length();
		min_ms.data = static_cast<char*>(malloc(min_ms.len));
		memcpy(min_ms.data, min_b.data(), min_ms.len);
		struct miqt_string sigval1 = min_ms;
		const QString max_ret = max;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray max_b = max_ret.toUtf8();
		struct miqt_string max_ms;
		max_ms.len = max_b.length();
		max_ms.data = static_cast<char*>(malloc(max_ms.len));
		memcpy(max_ms.data, max_b.data(), max_ms.len);
		struct miqt_string sigval2 = max_ms;
		miqt_exec_callback_QBarCategoryAxis_rangeChanged(slot, sigval1, sigval2);
	});
}

void QBarCategoryAxis_countChanged(QBarCategoryAxis* self) {
	self->countChanged();
}

void QBarCategoryAxis_connect_countChanged(QBarCategoryAxis* self, intptr_t slot) {
	QBarCategoryAxis::connect(self, static_cast<void (QBarCategoryAxis::*)()>(&QBarCategoryAxis::countChanged), self, [=]() {
		miqt_exec_callback_QBarCategoryAxis_countChanged(slot);
	});
}

struct miqt_string QBarCategoryAxis_tr2(const char* s, const char* c) {
	QString _ret = QBarCategoryAxis::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QBarCategoryAxis_tr3(const char* s, const char* c, int n) {
	QString _ret = QBarCategoryAxis::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QBarCategoryAxis_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQBarCategoryAxis* self_cast = dynamic_cast<MiqtVirtualQBarCategoryAxis*>( (QBarCategoryAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__type = slot;
	return true;
}

int QBarCategoryAxis_virtualbase_type(const void* self) {
	MiqtVirtualQBarCategoryAxis::AxisType _ret = static_cast<const MiqtVirtualQBarCategoryAxis*>(self)->QBarCategoryAxis::type();
	return static_cast<int>(_ret);
}

bool QBarCategoryAxis_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQBarCategoryAxis* self_cast = dynamic_cast<MiqtVirtualQBarCategoryAxis*>( (QBarCategoryAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QBarCategoryAxis_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQBarCategoryAxis*>(self)->QBarCategoryAxis::event(event);
}

bool QBarCategoryAxis_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQBarCategoryAxis* self_cast = dynamic_cast<MiqtVirtualQBarCategoryAxis*>( (QBarCategoryAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QBarCategoryAxis_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQBarCategoryAxis*>(self)->QBarCategoryAxis::eventFilter(watched, event);
}

bool QBarCategoryAxis_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQBarCategoryAxis* self_cast = dynamic_cast<MiqtVirtualQBarCategoryAxis*>( (QBarCategoryAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QBarCategoryAxis_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQBarCategoryAxis*>(self)->QBarCategoryAxis::timerEvent(event);
}

bool QBarCategoryAxis_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQBarCategoryAxis* self_cast = dynamic_cast<MiqtVirtualQBarCategoryAxis*>( (QBarCategoryAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QBarCategoryAxis_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQBarCategoryAxis*>(self)->QBarCategoryAxis::childEvent(event);
}

bool QBarCategoryAxis_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQBarCategoryAxis* self_cast = dynamic_cast<MiqtVirtualQBarCategoryAxis*>( (QBarCategoryAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QBarCategoryAxis_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQBarCategoryAxis*>(self)->QBarCategoryAxis::customEvent(event);
}

bool QBarCategoryAxis_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQBarCategoryAxis* self_cast = dynamic_cast<MiqtVirtualQBarCategoryAxis*>( (QBarCategoryAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QBarCategoryAxis_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQBarCategoryAxis*>(self)->QBarCategoryAxis::connectNotify(*signal);
}

bool QBarCategoryAxis_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQBarCategoryAxis* self_cast = dynamic_cast<MiqtVirtualQBarCategoryAxis*>( (QBarCategoryAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QBarCategoryAxis_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQBarCategoryAxis*>(self)->QBarCategoryAxis::disconnectNotify(*signal);
}

QObject* QBarCategoryAxis_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQBarCategoryAxis* self_cast = dynamic_cast<MiqtVirtualQBarCategoryAxis*>( (QBarCategoryAxis*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QBarCategoryAxis_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQBarCategoryAxis* self_cast = dynamic_cast<MiqtVirtualQBarCategoryAxis*>( (QBarCategoryAxis*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QBarCategoryAxis_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQBarCategoryAxis* self_cast = dynamic_cast<MiqtVirtualQBarCategoryAxis*>( (QBarCategoryAxis*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QBarCategoryAxis_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQBarCategoryAxis* self_cast = dynamic_cast<MiqtVirtualQBarCategoryAxis*>( (QBarCategoryAxis*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QBarCategoryAxis_delete(QBarCategoryAxis* self) {
	delete self;
}

