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
#include "_cgo_export.h"

QWebElement* QWebElement_new() {
	return new QWebElement();
}

QWebElement* QWebElement_new2(QWebElement* param1) {
	return new QWebElement(*param1);
}

void QWebElement_OperatorAssign(QWebElement* self, QWebElement* param1) {
	self->operator=(*param1);
}

bool QWebElement_OperatorEqual(const QWebElement* self, QWebElement* o) {
	return (*self == *o);
}

bool QWebElement_OperatorNotEqual(const QWebElement* self, QWebElement* o) {
	return (*self != *o);
}

bool QWebElement_IsNull(const QWebElement* self) {
	return self->isNull();
}

QWebElementCollection* QWebElement_FindAll(const QWebElement* self, struct miqt_string selectorQuery) {
	QString selectorQuery_QString = QString::fromUtf8(selectorQuery.data, selectorQuery.len);
	return new QWebElementCollection(self->findAll(selectorQuery_QString));
}

QWebElement* QWebElement_FindFirst(const QWebElement* self, struct miqt_string selectorQuery) {
	QString selectorQuery_QString = QString::fromUtf8(selectorQuery.data, selectorQuery.len);
	return new QWebElement(self->findFirst(selectorQuery_QString));
}

void QWebElement_SetPlainText(QWebElement* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setPlainText(text_QString);
}

struct miqt_string QWebElement_ToPlainText(const QWebElement* self) {
	QString _ret = self->toPlainText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebElement_SetOuterXml(QWebElement* self, struct miqt_string markup) {
	QString markup_QString = QString::fromUtf8(markup.data, markup.len);
	self->setOuterXml(markup_QString);
}

struct miqt_string QWebElement_ToOuterXml(const QWebElement* self) {
	QString _ret = self->toOuterXml();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebElement_SetInnerXml(QWebElement* self, struct miqt_string markup) {
	QString markup_QString = QString::fromUtf8(markup.data, markup.len);
	self->setInnerXml(markup_QString);
}

struct miqt_string QWebElement_ToInnerXml(const QWebElement* self) {
	QString _ret = self->toInnerXml();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebElement_SetAttribute(QWebElement* self, struct miqt_string name, struct miqt_string value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString value_QString = QString::fromUtf8(value.data, value.len);
	self->setAttribute(name_QString, value_QString);
}

void QWebElement_SetAttributeNS(QWebElement* self, struct miqt_string namespaceUri, struct miqt_string name, struct miqt_string value) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString value_QString = QString::fromUtf8(value.data, value.len);
	self->setAttributeNS(namespaceUri_QString, name_QString, value_QString);
}

struct miqt_string QWebElement_Attribute(const QWebElement* self, struct miqt_string name) {
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

struct miqt_string QWebElement_AttributeNS(const QWebElement* self, struct miqt_string namespaceUri, struct miqt_string name) {
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

bool QWebElement_HasAttribute(const QWebElement* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->hasAttribute(name_QString);
}

bool QWebElement_HasAttributeNS(const QWebElement* self, struct miqt_string namespaceUri, struct miqt_string name) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->hasAttributeNS(namespaceUri_QString, name_QString);
}

void QWebElement_RemoveAttribute(QWebElement* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->removeAttribute(name_QString);
}

void QWebElement_RemoveAttributeNS(QWebElement* self, struct miqt_string namespaceUri, struct miqt_string name) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->removeAttributeNS(namespaceUri_QString, name_QString);
}

bool QWebElement_HasAttributes(const QWebElement* self) {
	return self->hasAttributes();
}

struct miqt_array /* of struct miqt_string */  QWebElement_AttributeNames(const QWebElement* self) {
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

struct miqt_array /* of struct miqt_string */  QWebElement_Classes(const QWebElement* self) {
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

bool QWebElement_HasClass(const QWebElement* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->hasClass(name_QString);
}

void QWebElement_AddClass(QWebElement* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->addClass(name_QString);
}

void QWebElement_RemoveClass(QWebElement* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->removeClass(name_QString);
}

void QWebElement_ToggleClass(QWebElement* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->toggleClass(name_QString);
}

bool QWebElement_HasFocus(const QWebElement* self) {
	return self->hasFocus();
}

void QWebElement_SetFocus(QWebElement* self) {
	self->setFocus();
}

QRect* QWebElement_Geometry(const QWebElement* self) {
	return new QRect(self->geometry());
}

struct miqt_string QWebElement_TagName(const QWebElement* self) {
	QString _ret = self->tagName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebElement_Prefix(const QWebElement* self) {
	QString _ret = self->prefix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebElement_LocalName(const QWebElement* self) {
	QString _ret = self->localName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebElement_NamespaceUri(const QWebElement* self) {
	QString _ret = self->namespaceUri();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWebElement* QWebElement_Parent(const QWebElement* self) {
	return new QWebElement(self->parent());
}

QWebElement* QWebElement_FirstChild(const QWebElement* self) {
	return new QWebElement(self->firstChild());
}

QWebElement* QWebElement_LastChild(const QWebElement* self) {
	return new QWebElement(self->lastChild());
}

QWebElement* QWebElement_NextSibling(const QWebElement* self) {
	return new QWebElement(self->nextSibling());
}

QWebElement* QWebElement_PreviousSibling(const QWebElement* self) {
	return new QWebElement(self->previousSibling());
}

QWebElement* QWebElement_Document(const QWebElement* self) {
	return new QWebElement(self->document());
}

QWebFrame* QWebElement_WebFrame(const QWebElement* self) {
	return self->webFrame();
}

void QWebElement_AppendInside(QWebElement* self, struct miqt_string markup) {
	QString markup_QString = QString::fromUtf8(markup.data, markup.len);
	self->appendInside(markup_QString);
}

void QWebElement_AppendInsideWithElement(QWebElement* self, QWebElement* element) {
	self->appendInside(*element);
}

void QWebElement_PrependInside(QWebElement* self, struct miqt_string markup) {
	QString markup_QString = QString::fromUtf8(markup.data, markup.len);
	self->prependInside(markup_QString);
}

void QWebElement_PrependInsideWithElement(QWebElement* self, QWebElement* element) {
	self->prependInside(*element);
}

void QWebElement_AppendOutside(QWebElement* self, struct miqt_string markup) {
	QString markup_QString = QString::fromUtf8(markup.data, markup.len);
	self->appendOutside(markup_QString);
}

void QWebElement_AppendOutsideWithElement(QWebElement* self, QWebElement* element) {
	self->appendOutside(*element);
}

void QWebElement_PrependOutside(QWebElement* self, struct miqt_string markup) {
	QString markup_QString = QString::fromUtf8(markup.data, markup.len);
	self->prependOutside(markup_QString);
}

void QWebElement_PrependOutsideWithElement(QWebElement* self, QWebElement* element) {
	self->prependOutside(*element);
}

void QWebElement_EncloseContentsWith(QWebElement* self, QWebElement* element) {
	self->encloseContentsWith(*element);
}

void QWebElement_EncloseContentsWithWithMarkup(QWebElement* self, struct miqt_string markup) {
	QString markup_QString = QString::fromUtf8(markup.data, markup.len);
	self->encloseContentsWith(markup_QString);
}

void QWebElement_EncloseWith(QWebElement* self, struct miqt_string markup) {
	QString markup_QString = QString::fromUtf8(markup.data, markup.len);
	self->encloseWith(markup_QString);
}

void QWebElement_EncloseWithWithElement(QWebElement* self, QWebElement* element) {
	self->encloseWith(*element);
}

void QWebElement_Replace(QWebElement* self, struct miqt_string markup) {
	QString markup_QString = QString::fromUtf8(markup.data, markup.len);
	self->replace(markup_QString);
}

void QWebElement_ReplaceWithElement(QWebElement* self, QWebElement* element) {
	self->replace(*element);
}

QWebElement* QWebElement_Clone(const QWebElement* self) {
	return new QWebElement(self->clone());
}

QWebElement* QWebElement_TakeFromDocument(QWebElement* self) {
	QWebElement& _ret = self->takeFromDocument();
	// Cast returned reference into pointer
	return &_ret;
}

void QWebElement_RemoveFromDocument(QWebElement* self) {
	self->removeFromDocument();
}

void QWebElement_RemoveAllChildren(QWebElement* self) {
	self->removeAllChildren();
}

QVariant* QWebElement_EvaluateJavaScript(QWebElement* self, struct miqt_string scriptSource) {
	QString scriptSource_QString = QString::fromUtf8(scriptSource.data, scriptSource.len);
	return new QVariant(self->evaluateJavaScript(scriptSource_QString));
}

struct miqt_string QWebElement_StyleProperty(const QWebElement* self, struct miqt_string name, int strategy) {
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

void QWebElement_SetStyleProperty(QWebElement* self, struct miqt_string name, struct miqt_string value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString value_QString = QString::fromUtf8(value.data, value.len);
	self->setStyleProperty(name_QString, value_QString);
}

void QWebElement_Render(QWebElement* self, QPainter* painter) {
	self->render(painter);
}

void QWebElement_Render2(QWebElement* self, QPainter* painter, QRect* clipRect) {
	self->render(painter, *clipRect);
}

struct miqt_string QWebElement_Attribute2(const QWebElement* self, struct miqt_string name, struct miqt_string defaultValue) {
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

struct miqt_string QWebElement_AttributeNS3(const QWebElement* self, struct miqt_string namespaceUri, struct miqt_string name, struct miqt_string defaultValue) {
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

struct miqt_array /* of struct miqt_string */  QWebElement_AttributeNames1(const QWebElement* self, struct miqt_string namespaceUri) {
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

void QWebElement_Delete(QWebElement* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebElement*>( self );
	} else {
		delete self;
	}
}

QWebElementCollection* QWebElementCollection_new() {
	return new QWebElementCollection();
}

QWebElementCollection* QWebElementCollection_new2(QWebElement* contextElement, struct miqt_string query) {
	QString query_QString = QString::fromUtf8(query.data, query.len);
	return new QWebElementCollection(*contextElement, query_QString);
}

QWebElementCollection* QWebElementCollection_new3(QWebElementCollection* param1) {
	return new QWebElementCollection(*param1);
}

void QWebElementCollection_OperatorAssign(QWebElementCollection* self, QWebElementCollection* param1) {
	self->operator=(*param1);
}

QWebElementCollection* QWebElementCollection_OperatorPlus(const QWebElementCollection* self, QWebElementCollection* other) {
	return new QWebElementCollection(self->operator+(*other));
}

QWebElementCollection* QWebElementCollection_OperatorPlusAssign(QWebElementCollection* self, QWebElementCollection* other) {
	QWebElementCollection& _ret = self->operator+=(*other);
	// Cast returned reference into pointer
	return &_ret;
}

void QWebElementCollection_Append(QWebElementCollection* self, QWebElementCollection* collection) {
	self->append(*collection);
}

int QWebElementCollection_Count(const QWebElementCollection* self) {
	return self->count();
}

QWebElement* QWebElementCollection_At(const QWebElementCollection* self, int i) {
	return new QWebElement(self->at(static_cast<int>(i)));
}

QWebElement* QWebElementCollection_OperatorSubscript(const QWebElementCollection* self, int i) {
	return new QWebElement(self->operator[](static_cast<int>(i)));
}

QWebElement* QWebElementCollection_First(const QWebElementCollection* self) {
	return new QWebElement(self->first());
}

QWebElement* QWebElementCollection_Last(const QWebElementCollection* self) {
	return new QWebElement(self->last());
}

struct miqt_array /* of QWebElement* */  QWebElementCollection_ToList(const QWebElementCollection* self) {
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

QWebElementCollection__const_iterator* QWebElementCollection_Begin(const QWebElementCollection* self) {
	return new QWebElementCollection::const_iterator(self->begin());
}

QWebElementCollection__const_iterator* QWebElementCollection_End(const QWebElementCollection* self) {
	return new QWebElementCollection::const_iterator(self->end());
}

QWebElementCollection__const_iterator* QWebElementCollection_ConstBegin(const QWebElementCollection* self) {
	return new QWebElementCollection::const_iterator(self->constBegin());
}

QWebElementCollection__const_iterator* QWebElementCollection_ConstEnd(const QWebElementCollection* self) {
	return new QWebElementCollection::const_iterator(self->constEnd());
}

QWebElementCollection__iterator* QWebElementCollection_Begin2(QWebElementCollection* self) {
	return new QWebElementCollection::iterator(self->begin());
}

QWebElementCollection__iterator* QWebElementCollection_End2(QWebElementCollection* self) {
	return new QWebElementCollection::iterator(self->end());
}

void QWebElementCollection_Delete(QWebElementCollection* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebElementCollection*>( self );
	} else {
		delete self;
	}
}

QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_new(QWebElementCollection* collection_, int index) {
	return new QWebElementCollection::const_iterator(collection_, static_cast<int>(index));
}

QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_new2(QWebElementCollection__const_iterator* o) {
	return new QWebElementCollection::const_iterator(*o);
}

QWebElement* QWebElementCollection__const_iterator_OperatorMultiply(const QWebElementCollection__const_iterator* self) {
	return new QWebElement(self->operator*());
}

bool QWebElementCollection__const_iterator_OperatorEqual(const QWebElementCollection__const_iterator* self, QWebElementCollection__const_iterator* o) {
	return (*self == *o);
}

bool QWebElementCollection__const_iterator_OperatorNotEqual(const QWebElementCollection__const_iterator* self, QWebElementCollection__const_iterator* o) {
	return (*self != *o);
}

bool QWebElementCollection__const_iterator_OperatorLesser(const QWebElementCollection__const_iterator* self, QWebElementCollection__const_iterator* o) {
	return (*self < *o);
}

bool QWebElementCollection__const_iterator_OperatorLesserOrEqual(const QWebElementCollection__const_iterator* self, QWebElementCollection__const_iterator* o) {
	return (*self <= *o);
}

bool QWebElementCollection__const_iterator_OperatorGreater(const QWebElementCollection__const_iterator* self, QWebElementCollection__const_iterator* o) {
	return (*self > *o);
}

bool QWebElementCollection__const_iterator_OperatorGreaterOrEqual(const QWebElementCollection__const_iterator* self, QWebElementCollection__const_iterator* o) {
	return (*self >= *o);
}

QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_OperatorPlusPlus(QWebElementCollection__const_iterator* self) {
	QWebElementCollection::const_iterator& _ret = self->operator++();
	// Cast returned reference into pointer
	return &_ret;
}

QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_OperatorPlusPlusWithInt(QWebElementCollection__const_iterator* self, int param1) {
	return new QWebElementCollection::const_iterator(self->operator++(static_cast<int>(param1)));
}

QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_OperatorMinusMinus(QWebElementCollection__const_iterator* self) {
	QWebElementCollection::const_iterator& _ret = self->operator--();
	// Cast returned reference into pointer
	return &_ret;
}

QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_OperatorMinusMinusWithInt(QWebElementCollection__const_iterator* self, int param1) {
	return new QWebElementCollection::const_iterator(self->operator--(static_cast<int>(param1)));
}

QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_OperatorPlusAssign(QWebElementCollection__const_iterator* self, int j) {
	QWebElementCollection::const_iterator& _ret = self->operator+=(static_cast<int>(j));
	// Cast returned reference into pointer
	return &_ret;
}

QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_OperatorMinusAssign(QWebElementCollection__const_iterator* self, int j) {
	QWebElementCollection::const_iterator& _ret = self->operator-=(static_cast<int>(j));
	// Cast returned reference into pointer
	return &_ret;
}

QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_OperatorPlus(const QWebElementCollection__const_iterator* self, int j) {
	return new QWebElementCollection::const_iterator(self->operator+(static_cast<int>(j)));
}

QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_OperatorMinus(const QWebElementCollection__const_iterator* self, int j) {
	return new QWebElementCollection::const_iterator(self->operator-(static_cast<int>(j)));
}

int QWebElementCollection__const_iterator_OperatorMinusWithQWebElementCollectionconstIterator(const QWebElementCollection__const_iterator* self, QWebElementCollection__const_iterator* j) {
	return self->operator-(*j);
}

void QWebElementCollection__const_iterator_Delete(QWebElementCollection__const_iterator* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebElementCollection::const_iterator*>( self );
	} else {
		delete self;
	}
}

QWebElementCollection__iterator* QWebElementCollection__iterator_new(QWebElementCollection* collection_, int index) {
	return new QWebElementCollection::iterator(collection_, static_cast<int>(index));
}

QWebElementCollection__iterator* QWebElementCollection__iterator_new2(QWebElementCollection__iterator* o) {
	return new QWebElementCollection::iterator(*o);
}

QWebElement* QWebElementCollection__iterator_OperatorMultiply(const QWebElementCollection__iterator* self) {
	return new QWebElement(self->operator*());
}

bool QWebElementCollection__iterator_OperatorEqual(const QWebElementCollection__iterator* self, QWebElementCollection__iterator* o) {
	return (*self == *o);
}

bool QWebElementCollection__iterator_OperatorNotEqual(const QWebElementCollection__iterator* self, QWebElementCollection__iterator* o) {
	return (*self != *o);
}

bool QWebElementCollection__iterator_OperatorLesser(const QWebElementCollection__iterator* self, QWebElementCollection__iterator* o) {
	return (*self < *o);
}

bool QWebElementCollection__iterator_OperatorLesserOrEqual(const QWebElementCollection__iterator* self, QWebElementCollection__iterator* o) {
	return (*self <= *o);
}

bool QWebElementCollection__iterator_OperatorGreater(const QWebElementCollection__iterator* self, QWebElementCollection__iterator* o) {
	return (*self > *o);
}

bool QWebElementCollection__iterator_OperatorGreaterOrEqual(const QWebElementCollection__iterator* self, QWebElementCollection__iterator* o) {
	return (*self >= *o);
}

QWebElementCollection__iterator* QWebElementCollection__iterator_OperatorPlusPlus(QWebElementCollection__iterator* self) {
	QWebElementCollection::iterator& _ret = self->operator++();
	// Cast returned reference into pointer
	return &_ret;
}

QWebElementCollection__iterator* QWebElementCollection__iterator_OperatorPlusPlusWithInt(QWebElementCollection__iterator* self, int param1) {
	return new QWebElementCollection::iterator(self->operator++(static_cast<int>(param1)));
}

QWebElementCollection__iterator* QWebElementCollection__iterator_OperatorMinusMinus(QWebElementCollection__iterator* self) {
	QWebElementCollection::iterator& _ret = self->operator--();
	// Cast returned reference into pointer
	return &_ret;
}

QWebElementCollection__iterator* QWebElementCollection__iterator_OperatorMinusMinusWithInt(QWebElementCollection__iterator* self, int param1) {
	return new QWebElementCollection::iterator(self->operator--(static_cast<int>(param1)));
}

QWebElementCollection__iterator* QWebElementCollection__iterator_OperatorPlusAssign(QWebElementCollection__iterator* self, int j) {
	QWebElementCollection::iterator& _ret = self->operator+=(static_cast<int>(j));
	// Cast returned reference into pointer
	return &_ret;
}

QWebElementCollection__iterator* QWebElementCollection__iterator_OperatorMinusAssign(QWebElementCollection__iterator* self, int j) {
	QWebElementCollection::iterator& _ret = self->operator-=(static_cast<int>(j));
	// Cast returned reference into pointer
	return &_ret;
}

QWebElementCollection__iterator* QWebElementCollection__iterator_OperatorPlus(const QWebElementCollection__iterator* self, int j) {
	return new QWebElementCollection::iterator(self->operator+(static_cast<int>(j)));
}

QWebElementCollection__iterator* QWebElementCollection__iterator_OperatorMinus(const QWebElementCollection__iterator* self, int j) {
	return new QWebElementCollection::iterator(self->operator-(static_cast<int>(j)));
}

int QWebElementCollection__iterator_OperatorMinusWithQWebElementCollectioniterator(const QWebElementCollection__iterator* self, QWebElementCollection__iterator* j) {
	return self->operator-(*j);
}

void QWebElementCollection__iterator_Delete(QWebElementCollection__iterator* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebElementCollection::iterator*>( self );
	} else {
		delete self;
	}
}

