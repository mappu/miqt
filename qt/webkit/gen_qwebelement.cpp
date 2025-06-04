#include <QList>
#include <QPainter>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QWebElement>
#include <QWebElementCollection>
#define WORKAROUND_INNER_CLASS_DEFINITION_QWebElementCollection__const_iterator
#define WORKAROUND_INNER_CLASS_DEFINITION_QWebElementCollection__iterator
#include <QWebFrame>
#include <qwebelement.h>
#include "gen_qwebelement.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QWebElement* QWebElement_new() {
	return new (std::nothrow) QWebElement();
}

QWebElement* QWebElement_new2(QWebElement* param1) {
	return new (std::nothrow) QWebElement(*param1);
}

void QWebElement_operatorAssign(QWebElement* self, QWebElement* param1) {
	self->operator=(*param1);
}

bool QWebElement_operatorEqual(const QWebElement* self, QWebElement* o) {
	return (*self == *o);
}

bool QWebElement_operatorNotEqual(const QWebElement* self, QWebElement* o) {
	return (*self != *o);
}

bool QWebElement_isNull(const QWebElement* self) {
	return self->isNull();
}

QWebElementCollection* QWebElement_findAll(const QWebElement* self, struct miqt_string selectorQuery) {
	QString selectorQuery_QString = QString::fromUtf8(selectorQuery.data, selectorQuery.len);
	return new QWebElementCollection(self->findAll(selectorQuery_QString));
}

QWebElement* QWebElement_findFirst(const QWebElement* self, struct miqt_string selectorQuery) {
	QString selectorQuery_QString = QString::fromUtf8(selectorQuery.data, selectorQuery.len);
	return new QWebElement(self->findFirst(selectorQuery_QString));
}

void QWebElement_setPlainText(QWebElement* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setPlainText(text_QString);
}

struct miqt_string QWebElement_toPlainText(const QWebElement* self) {
	QString _ret = self->toPlainText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebElement_setOuterXml(QWebElement* self, struct miqt_string markup) {
	QString markup_QString = QString::fromUtf8(markup.data, markup.len);
	self->setOuterXml(markup_QString);
}

struct miqt_string QWebElement_toOuterXml(const QWebElement* self) {
	QString _ret = self->toOuterXml();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebElement_setInnerXml(QWebElement* self, struct miqt_string markup) {
	QString markup_QString = QString::fromUtf8(markup.data, markup.len);
	self->setInnerXml(markup_QString);
}

struct miqt_string QWebElement_toInnerXml(const QWebElement* self) {
	QString _ret = self->toInnerXml();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebElement_setAttribute(QWebElement* self, struct miqt_string name, struct miqt_string value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString value_QString = QString::fromUtf8(value.data, value.len);
	self->setAttribute(name_QString, value_QString);
}

void QWebElement_setAttributeNS(QWebElement* self, struct miqt_string namespaceUri, struct miqt_string name, struct miqt_string value) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString value_QString = QString::fromUtf8(value.data, value.len);
	self->setAttributeNS(namespaceUri_QString, name_QString, value_QString);
}

struct miqt_string QWebElement_attribute(const QWebElement* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString _ret = self->attribute(name_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebElement_attributeNS(const QWebElement* self, struct miqt_string namespaceUri, struct miqt_string name) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString _ret = self->attributeNS(namespaceUri_QString, name_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWebElement_hasAttribute(const QWebElement* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->hasAttribute(name_QString);
}

bool QWebElement_hasAttributeNS(const QWebElement* self, struct miqt_string namespaceUri, struct miqt_string name) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->hasAttributeNS(namespaceUri_QString, name_QString);
}

void QWebElement_removeAttribute(QWebElement* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->removeAttribute(name_QString);
}

void QWebElement_removeAttributeNS(QWebElement* self, struct miqt_string namespaceUri, struct miqt_string name) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->removeAttributeNS(namespaceUri_QString, name_QString);
}

bool QWebElement_hasAttributes(const QWebElement* self) {
	return self->hasAttributes();
}

struct miqt_array /* of struct miqt_string */  QWebElement_attributeNames(const QWebElement* self) {
	QStringList _ret = self->attributeNames();
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

struct miqt_array /* of struct miqt_string */  QWebElement_classes(const QWebElement* self) {
	QStringList _ret = self->classes();
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

bool QWebElement_hasClass(const QWebElement* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->hasClass(name_QString);
}

void QWebElement_addClass(QWebElement* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->addClass(name_QString);
}

void QWebElement_removeClass(QWebElement* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->removeClass(name_QString);
}

void QWebElement_toggleClass(QWebElement* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->toggleClass(name_QString);
}

bool QWebElement_hasFocus(const QWebElement* self) {
	return self->hasFocus();
}

void QWebElement_setFocus(QWebElement* self) {
	self->setFocus();
}

QRect* QWebElement_geometry(const QWebElement* self) {
	return new QRect(self->geometry());
}

struct miqt_string QWebElement_tagName(const QWebElement* self) {
	QString _ret = self->tagName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebElement_prefix(const QWebElement* self) {
	QString _ret = self->prefix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebElement_localName(const QWebElement* self) {
	QString _ret = self->localName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebElement_namespaceUri(const QWebElement* self) {
	QString _ret = self->namespaceUri();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWebElement* QWebElement_parent(const QWebElement* self) {
	return new QWebElement(self->parent());
}

QWebElement* QWebElement_firstChild(const QWebElement* self) {
	return new QWebElement(self->firstChild());
}

QWebElement* QWebElement_lastChild(const QWebElement* self) {
	return new QWebElement(self->lastChild());
}

QWebElement* QWebElement_nextSibling(const QWebElement* self) {
	return new QWebElement(self->nextSibling());
}

QWebElement* QWebElement_previousSibling(const QWebElement* self) {
	return new QWebElement(self->previousSibling());
}

QWebElement* QWebElement_document(const QWebElement* self) {
	return new QWebElement(self->document());
}

QWebFrame* QWebElement_webFrame(const QWebElement* self) {
	return self->webFrame();
}

void QWebElement_appendInside(QWebElement* self, struct miqt_string markup) {
	QString markup_QString = QString::fromUtf8(markup.data, markup.len);
	self->appendInside(markup_QString);
}

void QWebElement_appendInsideWithElement(QWebElement* self, QWebElement* element) {
	self->appendInside(*element);
}

void QWebElement_prependInside(QWebElement* self, struct miqt_string markup) {
	QString markup_QString = QString::fromUtf8(markup.data, markup.len);
	self->prependInside(markup_QString);
}

void QWebElement_prependInsideWithElement(QWebElement* self, QWebElement* element) {
	self->prependInside(*element);
}

void QWebElement_appendOutside(QWebElement* self, struct miqt_string markup) {
	QString markup_QString = QString::fromUtf8(markup.data, markup.len);
	self->appendOutside(markup_QString);
}

void QWebElement_appendOutsideWithElement(QWebElement* self, QWebElement* element) {
	self->appendOutside(*element);
}

void QWebElement_prependOutside(QWebElement* self, struct miqt_string markup) {
	QString markup_QString = QString::fromUtf8(markup.data, markup.len);
	self->prependOutside(markup_QString);
}

void QWebElement_prependOutsideWithElement(QWebElement* self, QWebElement* element) {
	self->prependOutside(*element);
}

void QWebElement_encloseContentsWith(QWebElement* self, QWebElement* element) {
	self->encloseContentsWith(*element);
}

void QWebElement_encloseContentsWithWithMarkup(QWebElement* self, struct miqt_string markup) {
	QString markup_QString = QString::fromUtf8(markup.data, markup.len);
	self->encloseContentsWith(markup_QString);
}

void QWebElement_encloseWith(QWebElement* self, struct miqt_string markup) {
	QString markup_QString = QString::fromUtf8(markup.data, markup.len);
	self->encloseWith(markup_QString);
}

void QWebElement_encloseWithWithElement(QWebElement* self, QWebElement* element) {
	self->encloseWith(*element);
}

void QWebElement_replace(QWebElement* self, struct miqt_string markup) {
	QString markup_QString = QString::fromUtf8(markup.data, markup.len);
	self->replace(markup_QString);
}

void QWebElement_replaceWithElement(QWebElement* self, QWebElement* element) {
	self->replace(*element);
}

QWebElement* QWebElement_clone(const QWebElement* self) {
	return new QWebElement(self->clone());
}

QWebElement* QWebElement_takeFromDocument(QWebElement* self) {
	QWebElement& _ret = self->takeFromDocument();
	// Cast returned reference into pointer
	return &_ret;
}

void QWebElement_removeFromDocument(QWebElement* self) {
	self->removeFromDocument();
}

void QWebElement_removeAllChildren(QWebElement* self) {
	self->removeAllChildren();
}

QVariant* QWebElement_evaluateJavaScript(QWebElement* self, struct miqt_string scriptSource) {
	QString scriptSource_QString = QString::fromUtf8(scriptSource.data, scriptSource.len);
	return new QVariant(self->evaluateJavaScript(scriptSource_QString));
}

struct miqt_string QWebElement_styleProperty(const QWebElement* self, struct miqt_string name, int strategy) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString _ret = self->styleProperty(name_QString, static_cast<QWebElement::StyleResolveStrategy>(strategy));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebElement_setStyleProperty(QWebElement* self, struct miqt_string name, struct miqt_string value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString value_QString = QString::fromUtf8(value.data, value.len);
	self->setStyleProperty(name_QString, value_QString);
}

void QWebElement_render(QWebElement* self, QPainter* painter) {
	self->render(painter);
}

void QWebElement_render2(QWebElement* self, QPainter* painter, QRect* clipRect) {
	self->render(painter, *clipRect);
}

struct miqt_string QWebElement_attribute2(const QWebElement* self, struct miqt_string name, struct miqt_string defaultValue) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString defaultValue_QString = QString::fromUtf8(defaultValue.data, defaultValue.len);
	QString _ret = self->attribute(name_QString, defaultValue_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebElement_attributeNS2(const QWebElement* self, struct miqt_string namespaceUri, struct miqt_string name, struct miqt_string defaultValue) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString defaultValue_QString = QString::fromUtf8(defaultValue.data, defaultValue.len);
	QString _ret = self->attributeNS(namespaceUri_QString, name_QString, defaultValue_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QWebElement_attributeNamesWithNamespaceUri(const QWebElement* self, struct miqt_string namespaceUri) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
	QStringList _ret = self->attributeNames(namespaceUri_QString);
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

void QWebElement_delete(QWebElement* self) {
	delete self;
}

QWebElementCollection* QWebElementCollection_new() {
	return new (std::nothrow) QWebElementCollection();
}

QWebElementCollection* QWebElementCollection_new2(QWebElement* contextElement, struct miqt_string query) {
	QString query_QString = QString::fromUtf8(query.data, query.len);
	return new (std::nothrow) QWebElementCollection(*contextElement, query_QString);
}

QWebElementCollection* QWebElementCollection_new3(QWebElementCollection* param1) {
	return new (std::nothrow) QWebElementCollection(*param1);
}

void QWebElementCollection_operatorAssign(QWebElementCollection* self, QWebElementCollection* param1) {
	self->operator=(*param1);
}

QWebElementCollection* QWebElementCollection_operatorPlus(const QWebElementCollection* self, QWebElementCollection* other) {
	return new QWebElementCollection(self->operator+(*other));
}

QWebElementCollection* QWebElementCollection_operatorPlusAssign(QWebElementCollection* self, QWebElementCollection* other) {
	QWebElementCollection& _ret = self->operator+=(*other);
	// Cast returned reference into pointer
	return &_ret;
}

void QWebElementCollection_append(QWebElementCollection* self, QWebElementCollection* collection) {
	self->append(*collection);
}

int QWebElementCollection_count(const QWebElementCollection* self) {
	return self->count();
}

QWebElement* QWebElementCollection_at(const QWebElementCollection* self, int i) {
	return new QWebElement(self->at(static_cast<int>(i)));
}

QWebElement* QWebElementCollection_operatorSubscript(const QWebElementCollection* self, int i) {
	return new QWebElement(self->operator[](static_cast<int>(i)));
}

QWebElement* QWebElementCollection_first(const QWebElementCollection* self) {
	return new QWebElement(self->first());
}

QWebElement* QWebElementCollection_last(const QWebElementCollection* self) {
	return new QWebElement(self->last());
}

struct miqt_array /* of QWebElement* */  QWebElementCollection_toList(const QWebElementCollection* self) {
	QList<QWebElement> _ret = self->toList();
	// Convert QList<> from C++ memory to manually-managed C memory
	QWebElement** _arr = static_cast<QWebElement**>(malloc(sizeof(QWebElement*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QWebElement(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QWebElementCollection__const_iterator* QWebElementCollection_begin(const QWebElementCollection* self) {
	return new QWebElementCollection::const_iterator(self->begin());
}

QWebElementCollection__const_iterator* QWebElementCollection_end(const QWebElementCollection* self) {
	return new QWebElementCollection::const_iterator(self->end());
}

QWebElementCollection__const_iterator* QWebElementCollection_constBegin(const QWebElementCollection* self) {
	return new QWebElementCollection::const_iterator(self->constBegin());
}

QWebElementCollection__const_iterator* QWebElementCollection_constEnd(const QWebElementCollection* self) {
	return new QWebElementCollection::const_iterator(self->constEnd());
}

QWebElementCollection__iterator* QWebElementCollection_begin2(QWebElementCollection* self) {
	return new QWebElementCollection::iterator(self->begin());
}

QWebElementCollection__iterator* QWebElementCollection_end2(QWebElementCollection* self) {
	return new QWebElementCollection::iterator(self->end());
}

void QWebElementCollection_delete(QWebElementCollection* self) {
	delete self;
}

QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_new(QWebElementCollection* collection_, int index) {
	return new (std::nothrow) QWebElementCollection::const_iterator(collection_, static_cast<int>(index));
}

QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_new2(QWebElementCollection__const_iterator* o) {
	return new (std::nothrow) QWebElementCollection::const_iterator(*o);
}

QWebElement* QWebElementCollection__const_iterator_operatorMultiply(const QWebElementCollection__const_iterator* self) {
	return new QWebElement(self->operator*());
}

bool QWebElementCollection__const_iterator_operatorEqual(const QWebElementCollection__const_iterator* self, QWebElementCollection__const_iterator* o) {
	return (*self == *o);
}

bool QWebElementCollection__const_iterator_operatorNotEqual(const QWebElementCollection__const_iterator* self, QWebElementCollection__const_iterator* o) {
	return (*self != *o);
}

bool QWebElementCollection__const_iterator_operatorLesser(const QWebElementCollection__const_iterator* self, QWebElementCollection__const_iterator* o) {
	return (*self < *o);
}

bool QWebElementCollection__const_iterator_operatorLesserOrEqual(const QWebElementCollection__const_iterator* self, QWebElementCollection__const_iterator* o) {
	return (*self <= *o);
}

bool QWebElementCollection__const_iterator_operatorGreater(const QWebElementCollection__const_iterator* self, QWebElementCollection__const_iterator* o) {
	return (*self > *o);
}

bool QWebElementCollection__const_iterator_operatorGreaterOrEqual(const QWebElementCollection__const_iterator* self, QWebElementCollection__const_iterator* o) {
	return (*self >= *o);
}

QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_operatorPlusPlus(QWebElementCollection__const_iterator* self) {
	QWebElementCollection::const_iterator& _ret = self->operator++();
	// Cast returned reference into pointer
	return &_ret;
}

QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_operatorPlusPlusWithInt(QWebElementCollection__const_iterator* self, int param1) {
	return new QWebElementCollection::const_iterator(self->operator++(static_cast<int>(param1)));
}

QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_operatorMinusMinus(QWebElementCollection__const_iterator* self) {
	QWebElementCollection::const_iterator& _ret = self->operator--();
	// Cast returned reference into pointer
	return &_ret;
}

QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_operatorMinusMinusWithInt(QWebElementCollection__const_iterator* self, int param1) {
	return new QWebElementCollection::const_iterator(self->operator--(static_cast<int>(param1)));
}

QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_operatorPlusAssign(QWebElementCollection__const_iterator* self, int j) {
	QWebElementCollection::const_iterator& _ret = self->operator+=(static_cast<int>(j));
	// Cast returned reference into pointer
	return &_ret;
}

QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_operatorMinusAssign(QWebElementCollection__const_iterator* self, int j) {
	QWebElementCollection::const_iterator& _ret = self->operator-=(static_cast<int>(j));
	// Cast returned reference into pointer
	return &_ret;
}

QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_operatorPlus(const QWebElementCollection__const_iterator* self, int j) {
	return new QWebElementCollection::const_iterator(self->operator+(static_cast<int>(j)));
}

QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_operatorMinus(const QWebElementCollection__const_iterator* self, int j) {
	return new QWebElementCollection::const_iterator(self->operator-(static_cast<int>(j)));
}

int QWebElementCollection__const_iterator_operatorMinusWithQWebElementCollectionconstIterator(const QWebElementCollection__const_iterator* self, QWebElementCollection__const_iterator* j) {
	return self->operator-(*j);
}

void QWebElementCollection__const_iterator_delete(QWebElementCollection__const_iterator* self) {
	delete self;
}

QWebElementCollection__iterator* QWebElementCollection__iterator_new(QWebElementCollection* collection_, int index) {
	return new (std::nothrow) QWebElementCollection::iterator(collection_, static_cast<int>(index));
}

QWebElementCollection__iterator* QWebElementCollection__iterator_new2(QWebElementCollection__iterator* o) {
	return new (std::nothrow) QWebElementCollection::iterator(*o);
}

QWebElement* QWebElementCollection__iterator_operatorMultiply(const QWebElementCollection__iterator* self) {
	return new QWebElement(self->operator*());
}

bool QWebElementCollection__iterator_operatorEqual(const QWebElementCollection__iterator* self, QWebElementCollection__iterator* o) {
	return (*self == *o);
}

bool QWebElementCollection__iterator_operatorNotEqual(const QWebElementCollection__iterator* self, QWebElementCollection__iterator* o) {
	return (*self != *o);
}

bool QWebElementCollection__iterator_operatorLesser(const QWebElementCollection__iterator* self, QWebElementCollection__iterator* o) {
	return (*self < *o);
}

bool QWebElementCollection__iterator_operatorLesserOrEqual(const QWebElementCollection__iterator* self, QWebElementCollection__iterator* o) {
	return (*self <= *o);
}

bool QWebElementCollection__iterator_operatorGreater(const QWebElementCollection__iterator* self, QWebElementCollection__iterator* o) {
	return (*self > *o);
}

bool QWebElementCollection__iterator_operatorGreaterOrEqual(const QWebElementCollection__iterator* self, QWebElementCollection__iterator* o) {
	return (*self >= *o);
}

QWebElementCollection__iterator* QWebElementCollection__iterator_operatorPlusPlus(QWebElementCollection__iterator* self) {
	QWebElementCollection::iterator& _ret = self->operator++();
	// Cast returned reference into pointer
	return &_ret;
}

QWebElementCollection__iterator* QWebElementCollection__iterator_operatorPlusPlusWithInt(QWebElementCollection__iterator* self, int param1) {
	return new QWebElementCollection::iterator(self->operator++(static_cast<int>(param1)));
}

QWebElementCollection__iterator* QWebElementCollection__iterator_operatorMinusMinus(QWebElementCollection__iterator* self) {
	QWebElementCollection::iterator& _ret = self->operator--();
	// Cast returned reference into pointer
	return &_ret;
}

QWebElementCollection__iterator* QWebElementCollection__iterator_operatorMinusMinusWithInt(QWebElementCollection__iterator* self, int param1) {
	return new QWebElementCollection::iterator(self->operator--(static_cast<int>(param1)));
}

QWebElementCollection__iterator* QWebElementCollection__iterator_operatorPlusAssign(QWebElementCollection__iterator* self, int j) {
	QWebElementCollection::iterator& _ret = self->operator+=(static_cast<int>(j));
	// Cast returned reference into pointer
	return &_ret;
}

QWebElementCollection__iterator* QWebElementCollection__iterator_operatorMinusAssign(QWebElementCollection__iterator* self, int j) {
	QWebElementCollection::iterator& _ret = self->operator-=(static_cast<int>(j));
	// Cast returned reference into pointer
	return &_ret;
}

QWebElementCollection__iterator* QWebElementCollection__iterator_operatorPlus(const QWebElementCollection__iterator* self, int j) {
	return new QWebElementCollection::iterator(self->operator+(static_cast<int>(j)));
}

QWebElementCollection__iterator* QWebElementCollection__iterator_operatorMinus(const QWebElementCollection__iterator* self, int j) {
	return new QWebElementCollection::iterator(self->operator-(static_cast<int>(j)));
}

int QWebElementCollection__iterator_operatorMinusWithQWebElementCollectioniterator(const QWebElementCollection__iterator* self, QWebElementCollection__iterator* j) {
	return self->operator-(*j);
}

void QWebElementCollection__iterator_delete(QWebElementCollection__iterator* self) {
	delete self;
}

