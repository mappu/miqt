#include <QBarSet>
#include <QBrush>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QFont>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPen>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qbarset.h>
#include "gen_qbarset.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QBarSet_clicked(intptr_t, int);
void miqt_exec_callback_QBarSet_hovered(intptr_t, bool, int);
void miqt_exec_callback_QBarSet_pressed(intptr_t, int);
void miqt_exec_callback_QBarSet_released(intptr_t, int);
void miqt_exec_callback_QBarSet_doubleClicked(intptr_t, int);
void miqt_exec_callback_QBarSet_penChanged(intptr_t);
void miqt_exec_callback_QBarSet_brushChanged(intptr_t);
void miqt_exec_callback_QBarSet_labelChanged(intptr_t);
void miqt_exec_callback_QBarSet_labelBrushChanged(intptr_t);
void miqt_exec_callback_QBarSet_labelFontChanged(intptr_t);
void miqt_exec_callback_QBarSet_colorChanged(intptr_t, QColor*);
void miqt_exec_callback_QBarSet_borderColorChanged(intptr_t, QColor*);
void miqt_exec_callback_QBarSet_labelColorChanged(intptr_t, QColor*);
void miqt_exec_callback_QBarSet_selectedColorChanged(intptr_t, QColor*);
void miqt_exec_callback_QBarSet_valuesAdded(intptr_t, int, int);
void miqt_exec_callback_QBarSet_valuesRemoved(intptr_t, int, int);
void miqt_exec_callback_QBarSet_valueChanged(intptr_t, int);
void miqt_exec_callback_QBarSet_selectedBarsChanged(intptr_t, struct miqt_array /* of int */ );
bool miqt_exec_callback_QBarSet_event(QBarSet*, intptr_t, QEvent*);
bool miqt_exec_callback_QBarSet_eventFilter(QBarSet*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QBarSet_timerEvent(QBarSet*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QBarSet_childEvent(QBarSet*, intptr_t, QChildEvent*);
void miqt_exec_callback_QBarSet_customEvent(QBarSet*, intptr_t, QEvent*);
void miqt_exec_callback_QBarSet_connectNotify(QBarSet*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QBarSet_disconnectNotify(QBarSet*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQBarSet final : public QBarSet {
public:

	MiqtVirtualQBarSet(const QString label): QBarSet(label) {}
	MiqtVirtualQBarSet(const QString label, QObject* parent): QBarSet(label, parent) {}

	virtual ~MiqtVirtualQBarSet() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QBarSet::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QBarSet_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QBarSet_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QBarSet::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QBarSet_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QBarSet_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QBarSet::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QBarSet_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QBarSet_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QBarSet::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QBarSet_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QBarSet_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QBarSet::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QBarSet_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QBarSet_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QBarSet::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QBarSet_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QBarSet_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QBarSet::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QBarSet_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QBarSet_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QBarSet_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QBarSet_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QBarSet_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QBarSet_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QBarSet* QBarSet_new(struct miqt_string label) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return new (std::nothrow) MiqtVirtualQBarSet(label_QString);
}

QBarSet* QBarSet_new2(struct miqt_string label, QObject* parent) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return new (std::nothrow) MiqtVirtualQBarSet(label_QString, parent);
}

void QBarSet_virtbase(QBarSet* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QBarSet_metaObject(const QBarSet* self) {
	return (QMetaObject*) self->metaObject();
}

void* QBarSet_metacast(QBarSet* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QBarSet_tr(const char* s) {
	QString _ret = QBarSet::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QBarSet_setLabel(QBarSet* self, struct miqt_string label) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	self->setLabel(label_QString);
}

struct miqt_string QBarSet_label(const QBarSet* self) {
	QString _ret = self->label();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QBarSet_append(QBarSet* self, const double value) {
	self->append(static_cast<const qreal>(value));
}

void QBarSet_appendWithValues(QBarSet* self, struct miqt_array /* of double */  values) {
	QList<double> values_QList;
	values_QList.reserve(values.len);
	double* values_arr = static_cast<double*>(values.data);
	for(size_t i = 0; i < values.len; ++i) {
		values_QList.push_back(static_cast<double>(values_arr[i]));
	}
	self->append(values_QList);
}

QBarSet* QBarSet_operatorShiftLeft(QBarSet* self, const double* value) {
	QBarSet& _ret = self->operator<<(static_cast<const qreal&>(*value));
	// Cast returned reference into pointer
	return &_ret;
}

void QBarSet_insert(QBarSet* self, const int index, const double value) {
	self->insert(static_cast<const int>(index), static_cast<const qreal>(value));
}

void QBarSet_remove(QBarSet* self, const int index) {
	self->remove(static_cast<const int>(index));
}

void QBarSet_replace(QBarSet* self, const int index, const double value) {
	self->replace(static_cast<const int>(index), static_cast<const qreal>(value));
}

double QBarSet_at(const QBarSet* self, const int index) {
	qreal _ret = self->at(static_cast<const int>(index));
	return static_cast<double>(_ret);
}

double QBarSet_operatorSubscript(const QBarSet* self, const int index) {
	qreal _ret = self->operator[](static_cast<const int>(index));
	return static_cast<double>(_ret);
}

int QBarSet_count(const QBarSet* self) {
	return self->count();
}

double QBarSet_sum(const QBarSet* self) {
	qreal _ret = self->sum();
	return static_cast<double>(_ret);
}

void QBarSet_setPen(QBarSet* self, QPen* pen) {
	self->setPen(*pen);
}

QPen* QBarSet_pen(const QBarSet* self) {
	return new QPen(self->pen());
}

void QBarSet_setBrush(QBarSet* self, QBrush* brush) {
	self->setBrush(*brush);
}

QBrush* QBarSet_brush(const QBarSet* self) {
	return new QBrush(self->brush());
}

void QBarSet_setLabelBrush(QBarSet* self, QBrush* brush) {
	self->setLabelBrush(*brush);
}

QBrush* QBarSet_labelBrush(const QBarSet* self) {
	return new QBrush(self->labelBrush());
}

void QBarSet_setLabelFont(QBarSet* self, QFont* font) {
	self->setLabelFont(*font);
}

QFont* QBarSet_labelFont(const QBarSet* self) {
	return new QFont(self->labelFont());
}

QColor* QBarSet_color(QBarSet* self) {
	return new QColor(self->color());
}

void QBarSet_setColor(QBarSet* self, QColor* color) {
	self->setColor(*color);
}

QColor* QBarSet_borderColor(QBarSet* self) {
	return new QColor(self->borderColor());
}

void QBarSet_setBorderColor(QBarSet* self, QColor* color) {
	self->setBorderColor(*color);
}

QColor* QBarSet_labelColor(QBarSet* self) {
	return new QColor(self->labelColor());
}

void QBarSet_setLabelColor(QBarSet* self, QColor* color) {
	self->setLabelColor(*color);
}

QColor* QBarSet_selectedColor(const QBarSet* self) {
	return new QColor(self->selectedColor());
}

void QBarSet_setSelectedColor(QBarSet* self, QColor* color) {
	self->setSelectedColor(*color);
}

bool QBarSet_isBarSelected(const QBarSet* self, int index) {
	return self->isBarSelected(static_cast<int>(index));
}

void QBarSet_selectBar(QBarSet* self, int index) {
	self->selectBar(static_cast<int>(index));
}

void QBarSet_deselectBar(QBarSet* self, int index) {
	self->deselectBar(static_cast<int>(index));
}

void QBarSet_setBarSelected(QBarSet* self, int index, bool selected) {
	self->setBarSelected(static_cast<int>(index), selected);
}

void QBarSet_selectAllBars(QBarSet* self) {
	self->selectAllBars();
}

void QBarSet_deselectAllBars(QBarSet* self) {
	self->deselectAllBars();
}

void QBarSet_selectBars(QBarSet* self, struct miqt_array /* of int */  indexes) {
	QList<int> indexes_QList;
	indexes_QList.reserve(indexes.len);
	int* indexes_arr = static_cast<int*>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(static_cast<int>(indexes_arr[i]));
	}
	self->selectBars(indexes_QList);
}

void QBarSet_deselectBars(QBarSet* self, struct miqt_array /* of int */  indexes) {
	QList<int> indexes_QList;
	indexes_QList.reserve(indexes.len);
	int* indexes_arr = static_cast<int*>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(static_cast<int>(indexes_arr[i]));
	}
	self->deselectBars(indexes_QList);
}

void QBarSet_toggleSelection(QBarSet* self, struct miqt_array /* of int */  indexes) {
	QList<int> indexes_QList;
	indexes_QList.reserve(indexes.len);
	int* indexes_arr = static_cast<int*>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(static_cast<int>(indexes_arr[i]));
	}
	self->toggleSelection(indexes_QList);
}

struct miqt_array /* of int */  QBarSet_selectedBars(const QBarSet* self) {
	QList<int> _ret = self->selectedBars();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
	for (size_t i = 0, e = _ret.size(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.size();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QBarSet_clicked(QBarSet* self, int index) {
	self->clicked(static_cast<int>(index));
}

void QBarSet_connect_clicked(QBarSet* self, intptr_t slot) {
	QBarSet::connect(self, static_cast<void (QBarSet::*)(int)>(&QBarSet::clicked), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QBarSet_clicked(slot, sigval1);
	});
}

void QBarSet_hovered(QBarSet* self, bool status, int index) {
	self->hovered(status, static_cast<int>(index));
}

void QBarSet_connect_hovered(QBarSet* self, intptr_t slot) {
	QBarSet::connect(self, static_cast<void (QBarSet::*)(bool, int)>(&QBarSet::hovered), self, [=](bool status, int index) {
		bool sigval1 = status;
		int sigval2 = index;
		miqt_exec_callback_QBarSet_hovered(slot, sigval1, sigval2);
	});
}

void QBarSet_pressed(QBarSet* self, int index) {
	self->pressed(static_cast<int>(index));
}

void QBarSet_connect_pressed(QBarSet* self, intptr_t slot) {
	QBarSet::connect(self, static_cast<void (QBarSet::*)(int)>(&QBarSet::pressed), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QBarSet_pressed(slot, sigval1);
	});
}

void QBarSet_released(QBarSet* self, int index) {
	self->released(static_cast<int>(index));
}

void QBarSet_connect_released(QBarSet* self, intptr_t slot) {
	QBarSet::connect(self, static_cast<void (QBarSet::*)(int)>(&QBarSet::released), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QBarSet_released(slot, sigval1);
	});
}

void QBarSet_doubleClicked(QBarSet* self, int index) {
	self->doubleClicked(static_cast<int>(index));
}

void QBarSet_connect_doubleClicked(QBarSet* self, intptr_t slot) {
	QBarSet::connect(self, static_cast<void (QBarSet::*)(int)>(&QBarSet::doubleClicked), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QBarSet_doubleClicked(slot, sigval1);
	});
}

void QBarSet_penChanged(QBarSet* self) {
	self->penChanged();
}

void QBarSet_connect_penChanged(QBarSet* self, intptr_t slot) {
	QBarSet::connect(self, static_cast<void (QBarSet::*)()>(&QBarSet::penChanged), self, [=]() {
		miqt_exec_callback_QBarSet_penChanged(slot);
	});
}

void QBarSet_brushChanged(QBarSet* self) {
	self->brushChanged();
}

void QBarSet_connect_brushChanged(QBarSet* self, intptr_t slot) {
	QBarSet::connect(self, static_cast<void (QBarSet::*)()>(&QBarSet::brushChanged), self, [=]() {
		miqt_exec_callback_QBarSet_brushChanged(slot);
	});
}

void QBarSet_labelChanged(QBarSet* self) {
	self->labelChanged();
}

void QBarSet_connect_labelChanged(QBarSet* self, intptr_t slot) {
	QBarSet::connect(self, static_cast<void (QBarSet::*)()>(&QBarSet::labelChanged), self, [=]() {
		miqt_exec_callback_QBarSet_labelChanged(slot);
	});
}

void QBarSet_labelBrushChanged(QBarSet* self) {
	self->labelBrushChanged();
}

void QBarSet_connect_labelBrushChanged(QBarSet* self, intptr_t slot) {
	QBarSet::connect(self, static_cast<void (QBarSet::*)()>(&QBarSet::labelBrushChanged), self, [=]() {
		miqt_exec_callback_QBarSet_labelBrushChanged(slot);
	});
}

void QBarSet_labelFontChanged(QBarSet* self) {
	self->labelFontChanged();
}

void QBarSet_connect_labelFontChanged(QBarSet* self, intptr_t slot) {
	QBarSet::connect(self, static_cast<void (QBarSet::*)()>(&QBarSet::labelFontChanged), self, [=]() {
		miqt_exec_callback_QBarSet_labelFontChanged(slot);
	});
}

void QBarSet_colorChanged(QBarSet* self, QColor* color) {
	self->colorChanged(*color);
}

void QBarSet_connect_colorChanged(QBarSet* self, intptr_t slot) {
	QBarSet::connect(self, static_cast<void (QBarSet::*)(QColor)>(&QBarSet::colorChanged), self, [=](QColor color) {
		QColor* sigval1 = new QColor(color);
		miqt_exec_callback_QBarSet_colorChanged(slot, sigval1);
	});
}

void QBarSet_borderColorChanged(QBarSet* self, QColor* color) {
	self->borderColorChanged(*color);
}

void QBarSet_connect_borderColorChanged(QBarSet* self, intptr_t slot) {
	QBarSet::connect(self, static_cast<void (QBarSet::*)(QColor)>(&QBarSet::borderColorChanged), self, [=](QColor color) {
		QColor* sigval1 = new QColor(color);
		miqt_exec_callback_QBarSet_borderColorChanged(slot, sigval1);
	});
}

void QBarSet_labelColorChanged(QBarSet* self, QColor* color) {
	self->labelColorChanged(*color);
}

void QBarSet_connect_labelColorChanged(QBarSet* self, intptr_t slot) {
	QBarSet::connect(self, static_cast<void (QBarSet::*)(QColor)>(&QBarSet::labelColorChanged), self, [=](QColor color) {
		QColor* sigval1 = new QColor(color);
		miqt_exec_callback_QBarSet_labelColorChanged(slot, sigval1);
	});
}

void QBarSet_selectedColorChanged(QBarSet* self, QColor* color) {
	self->selectedColorChanged(*color);
}

void QBarSet_connect_selectedColorChanged(QBarSet* self, intptr_t slot) {
	QBarSet::connect(self, static_cast<void (QBarSet::*)(const QColor&)>(&QBarSet::selectedColorChanged), self, [=](const QColor& color) {
		const QColor& color_ret = color;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&color_ret);
		miqt_exec_callback_QBarSet_selectedColorChanged(slot, sigval1);
	});
}

void QBarSet_valuesAdded(QBarSet* self, int index, int count) {
	self->valuesAdded(static_cast<int>(index), static_cast<int>(count));
}

void QBarSet_connect_valuesAdded(QBarSet* self, intptr_t slot) {
	QBarSet::connect(self, static_cast<void (QBarSet::*)(int, int)>(&QBarSet::valuesAdded), self, [=](int index, int count) {
		int sigval1 = index;
		int sigval2 = count;
		miqt_exec_callback_QBarSet_valuesAdded(slot, sigval1, sigval2);
	});
}

void QBarSet_valuesRemoved(QBarSet* self, int index, int count) {
	self->valuesRemoved(static_cast<int>(index), static_cast<int>(count));
}

void QBarSet_connect_valuesRemoved(QBarSet* self, intptr_t slot) {
	QBarSet::connect(self, static_cast<void (QBarSet::*)(int, int)>(&QBarSet::valuesRemoved), self, [=](int index, int count) {
		int sigval1 = index;
		int sigval2 = count;
		miqt_exec_callback_QBarSet_valuesRemoved(slot, sigval1, sigval2);
	});
}

void QBarSet_valueChanged(QBarSet* self, int index) {
	self->valueChanged(static_cast<int>(index));
}

void QBarSet_connect_valueChanged(QBarSet* self, intptr_t slot) {
	QBarSet::connect(self, static_cast<void (QBarSet::*)(int)>(&QBarSet::valueChanged), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QBarSet_valueChanged(slot, sigval1);
	});
}

void QBarSet_selectedBarsChanged(QBarSet* self, struct miqt_array /* of int */  indexes) {
	QList<int> indexes_QList;
	indexes_QList.reserve(indexes.len);
	int* indexes_arr = static_cast<int*>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(static_cast<int>(indexes_arr[i]));
	}
	self->selectedBarsChanged(indexes_QList);
}

void QBarSet_connect_selectedBarsChanged(QBarSet* self, intptr_t slot) {
	QBarSet::connect(self, static_cast<void (QBarSet::*)(const QList<int>&)>(&QBarSet::selectedBarsChanged), self, [=](const QList<int>& indexes) {
		const QList<int>& indexes_ret = indexes;
		// Convert QList<> from C++ memory to manually-managed C memory
		int* indexes_arr = static_cast<int*>(malloc(sizeof(int) * indexes_ret.size()));
		for (size_t i = 0, e = indexes_ret.size(); i < e; ++i) {
			indexes_arr[i] = indexes_ret[i];
		}
		struct miqt_array indexes_out;
		indexes_out.len = indexes_ret.size();
		indexes_out.data = static_cast<void*>(indexes_arr);
		struct miqt_array /* of int */  sigval1 = indexes_out;
		miqt_exec_callback_QBarSet_selectedBarsChanged(slot, sigval1);
	});
}

struct miqt_string QBarSet_tr2(const char* s, const char* c) {
	QString _ret = QBarSet::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QBarSet_tr3(const char* s, const char* c, int n) {
	QString _ret = QBarSet::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QBarSet_remove2(QBarSet* self, const int index, const int count) {
	self->remove(static_cast<const int>(index), static_cast<const int>(count));
}

bool QBarSet_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQBarSet* self_cast = dynamic_cast<MiqtVirtualQBarSet*>( (QBarSet*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QBarSet_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQBarSet*>(self)->QBarSet::event(event);
}

bool QBarSet_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQBarSet* self_cast = dynamic_cast<MiqtVirtualQBarSet*>( (QBarSet*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QBarSet_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQBarSet*>(self)->QBarSet::eventFilter(watched, event);
}

bool QBarSet_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQBarSet* self_cast = dynamic_cast<MiqtVirtualQBarSet*>( (QBarSet*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QBarSet_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQBarSet*>(self)->QBarSet::timerEvent(event);
}

bool QBarSet_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQBarSet* self_cast = dynamic_cast<MiqtVirtualQBarSet*>( (QBarSet*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QBarSet_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQBarSet*>(self)->QBarSet::childEvent(event);
}

bool QBarSet_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQBarSet* self_cast = dynamic_cast<MiqtVirtualQBarSet*>( (QBarSet*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QBarSet_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQBarSet*>(self)->QBarSet::customEvent(event);
}

bool QBarSet_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQBarSet* self_cast = dynamic_cast<MiqtVirtualQBarSet*>( (QBarSet*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QBarSet_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQBarSet*>(self)->QBarSet::connectNotify(*signal);
}

bool QBarSet_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQBarSet* self_cast = dynamic_cast<MiqtVirtualQBarSet*>( (QBarSet*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QBarSet_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQBarSet*>(self)->QBarSet::disconnectNotify(*signal);
}

QObject* QBarSet_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQBarSet* self_cast = dynamic_cast<MiqtVirtualQBarSet*>( (QBarSet*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QBarSet_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQBarSet* self_cast = dynamic_cast<MiqtVirtualQBarSet*>( (QBarSet*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QBarSet_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQBarSet* self_cast = dynamic_cast<MiqtVirtualQBarSet*>( (QBarSet*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QBarSet_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQBarSet* self_cast = dynamic_cast<MiqtVirtualQBarSet*>( (QBarSet*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QBarSet_delete(QBarSet* self) {
	delete self;
}

