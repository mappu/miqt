#include <QList>
#include <qwt_plot_dict.h>
#include "gen_qwt_plot_dict.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QwtPlotDict* QwtPlotDict_new() {
	return new (std::nothrow) QwtPlotDict();
}

void QwtPlotDict_setAutoDelete(QwtPlotDict* self, bool autoDelete) {
	self->setAutoDelete(autoDelete);
}

bool QwtPlotDict_autoDelete(const QwtPlotDict* self) {
	return self->autoDelete();
}

struct miqt_array /* of QwtPlotItem* */  QwtPlotDict_itemList(const QwtPlotDict* self) {
	const QwtPlotItemList& _ret = self->itemList();
	// Convert QList<> from C++ memory to manually-managed C memory
	QwtPlotItem** _arr = static_cast<QwtPlotItem**>(malloc(sizeof(QwtPlotItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QwtPlotItem* */  QwtPlotDict_itemListWithRtti(const QwtPlotDict* self, int rtti) {
	QwtPlotItemList _ret = self->itemList(static_cast<int>(rtti));
	// Convert QList<> from C++ memory to manually-managed C memory
	QwtPlotItem** _arr = static_cast<QwtPlotItem**>(malloc(sizeof(QwtPlotItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QwtPlotDict_detachItems(QwtPlotDict* self) {
	self->detachItems();
}

void QwtPlotDict_operatorAssign(QwtPlotDict* self, QwtPlotDict* param1) {
	self->operator=(*param1);
}

void QwtPlotDict_detachItemsWithRtti(QwtPlotDict* self, int rtti) {
	self->detachItems(static_cast<int>(rtti));
}

void QwtPlotDict_detachItems2(QwtPlotDict* self, int rtti, bool autoDelete) {
	self->detachItems(static_cast<int>(rtti), autoDelete);
}

void QwtPlotDict_delete(QwtPlotDict* self) {
	delete self;
}

