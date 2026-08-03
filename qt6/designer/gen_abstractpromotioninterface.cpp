#include <QDesignerPromotionInterface>
#define WORKAROUND_INNER_CLASS_DEFINITION_QDesignerPromotionInterface__PromotedClass
#include <QDesignerWidgetDataBaseItemInterface>
#include <QList>
#include <QSet>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <abstractpromotioninterface.h>
#include "gen_abstractpromotioninterface.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

struct miqt_array /* of QDesignerPromotionInterface__PromotedClass* */  QDesignerPromotionInterface_promotedClasses(const QDesignerPromotionInterface* self) {
	QDesignerPromotionInterface::PromotedClasses _ret = self->promotedClasses();
	// Convert QList<> from C++ memory to manually-managed C memory
	QDesignerPromotionInterface__PromotedClass** _arr = static_cast<QDesignerPromotionInterface__PromotedClass**>(malloc(sizeof(QDesignerPromotionInterface__PromotedClass*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QDesignerPromotionInterface::PromotedClass(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* set of struct miqt_string */  QDesignerPromotionInterface_referencedPromotedClassNames(const QDesignerPromotionInterface* self) {
	QSet<QString> _ret = self->referencedPromotedClassNames();
	// Convert QSet<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
	int _ctr = 0;
	QSetIterator<QString> _itr(_ret);
	while (_itr.hasNext()) {
		QString _sv_ret = _itr.next();
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _sv_b = _sv_ret.toUtf8();
		struct miqt_string _sv_ms;
		_sv_ms.len = _sv_b.length();
		_sv_ms.data = static_cast<char*>(malloc(_sv_ms.len));
		memcpy(_sv_ms.data, _sv_b.data(), _sv_ms.len);
		_arr[_ctr++] = _sv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.size();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QDesignerWidgetDataBaseItemInterface* */  QDesignerPromotionInterface_promotionBaseClasses(const QDesignerPromotionInterface* self) {
	QList<QDesignerWidgetDataBaseItemInterface *> _ret = self->promotionBaseClasses();
	// Convert QList<> from C++ memory to manually-managed C memory
	QDesignerWidgetDataBaseItemInterface** _arr = static_cast<QDesignerWidgetDataBaseItemInterface**>(malloc(sizeof(QDesignerWidgetDataBaseItemInterface*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QDesignerPromotionInterface_delete(QDesignerPromotionInterface* self) {
	delete self;
}

QDesignerWidgetDataBaseItemInterface* QDesignerPromotionInterface__PromotedClass_baseItem(const QDesignerPromotionInterface__PromotedClass* self) {
	return self->baseItem;
}

void QDesignerPromotionInterface__PromotedClass_setBaseItem(QDesignerPromotionInterface__PromotedClass* self, QDesignerWidgetDataBaseItemInterface* baseItem) {
	self->baseItem = baseItem;
}

QDesignerWidgetDataBaseItemInterface* QDesignerPromotionInterface__PromotedClass_promotedItem(const QDesignerPromotionInterface__PromotedClass* self) {
	return self->promotedItem;
}

void QDesignerPromotionInterface__PromotedClass_setPromotedItem(QDesignerPromotionInterface__PromotedClass* self, QDesignerWidgetDataBaseItemInterface* promotedItem) {
	self->promotedItem = promotedItem;
}

void QDesignerPromotionInterface__PromotedClass_delete(QDesignerPromotionInterface__PromotedClass* self) {
	delete self;
}

