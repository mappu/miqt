#pragma once
#ifndef MIQT_QT_WEBKIT_GEN_QWEBELEMENT_H
#define MIQT_QT_WEBKIT_GEN_QWEBELEMENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPainter;
class QRect;
class QVariant;
class QWebElement;
class QWebElementCollection;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QWebElementCollection__const_iterator)
typedef QWebElementCollection::const_iterator QWebElementCollection__const_iterator;
#else
class QWebElementCollection__const_iterator;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QWebElementCollection__iterator)
typedef QWebElementCollection::iterator QWebElementCollection__iterator;
#else
class QWebElementCollection__iterator;
#endif
class QWebFrame;
#else
typedef struct QPainter QPainter;
typedef struct QRect QRect;
typedef struct QVariant QVariant;
typedef struct QWebElement QWebElement;
typedef struct QWebElementCollection QWebElementCollection;
typedef struct QWebElementCollection__const_iterator QWebElementCollection__const_iterator;
typedef struct QWebElementCollection__iterator QWebElementCollection__iterator;
typedef struct QWebFrame QWebFrame;
#endif

QWebElement* QWebElement_new();
QWebElement* QWebElement_new2(QWebElement* param1);
void QWebElement_operatorAssign(QWebElement* self, QWebElement* param1);
bool QWebElement_operatorEqual(const QWebElement* self, QWebElement* o);
bool QWebElement_operatorNotEqual(const QWebElement* self, QWebElement* o);
bool QWebElement_isNull(const QWebElement* self);
QWebElementCollection* QWebElement_findAll(const QWebElement* self, struct miqt_string selectorQuery);
QWebElement* QWebElement_findFirst(const QWebElement* self, struct miqt_string selectorQuery);
void QWebElement_setPlainText(QWebElement* self, struct miqt_string text);
struct miqt_string QWebElement_toPlainText(const QWebElement* self);
void QWebElement_setOuterXml(QWebElement* self, struct miqt_string markup);
struct miqt_string QWebElement_toOuterXml(const QWebElement* self);
void QWebElement_setInnerXml(QWebElement* self, struct miqt_string markup);
struct miqt_string QWebElement_toInnerXml(const QWebElement* self);
void QWebElement_setAttribute(QWebElement* self, struct miqt_string name, struct miqt_string value);
void QWebElement_setAttributeNS(QWebElement* self, struct miqt_string namespaceUri, struct miqt_string name, struct miqt_string value);
struct miqt_string QWebElement_attribute(const QWebElement* self, struct miqt_string name);
struct miqt_string QWebElement_attributeNS(const QWebElement* self, struct miqt_string namespaceUri, struct miqt_string name);
bool QWebElement_hasAttribute(const QWebElement* self, struct miqt_string name);
bool QWebElement_hasAttributeNS(const QWebElement* self, struct miqt_string namespaceUri, struct miqt_string name);
void QWebElement_removeAttribute(QWebElement* self, struct miqt_string name);
void QWebElement_removeAttributeNS(QWebElement* self, struct miqt_string namespaceUri, struct miqt_string name);
bool QWebElement_hasAttributes(const QWebElement* self);
struct miqt_array /* of struct miqt_string */  QWebElement_attributeNames(const QWebElement* self);
struct miqt_array /* of struct miqt_string */  QWebElement_classes(const QWebElement* self);
bool QWebElement_hasClass(const QWebElement* self, struct miqt_string name);
void QWebElement_addClass(QWebElement* self, struct miqt_string name);
void QWebElement_removeClass(QWebElement* self, struct miqt_string name);
void QWebElement_toggleClass(QWebElement* self, struct miqt_string name);
bool QWebElement_hasFocus(const QWebElement* self);
void QWebElement_setFocus(QWebElement* self);
QRect* QWebElement_geometry(const QWebElement* self);
struct miqt_string QWebElement_tagName(const QWebElement* self);
struct miqt_string QWebElement_prefix(const QWebElement* self);
struct miqt_string QWebElement_localName(const QWebElement* self);
struct miqt_string QWebElement_namespaceUri(const QWebElement* self);
QWebElement* QWebElement_parent(const QWebElement* self);
QWebElement* QWebElement_firstChild(const QWebElement* self);
QWebElement* QWebElement_lastChild(const QWebElement* self);
QWebElement* QWebElement_nextSibling(const QWebElement* self);
QWebElement* QWebElement_previousSibling(const QWebElement* self);
QWebElement* QWebElement_document(const QWebElement* self);
QWebFrame* QWebElement_webFrame(const QWebElement* self);
void QWebElement_appendInside(QWebElement* self, struct miqt_string markup);
void QWebElement_appendInsideWithElement(QWebElement* self, QWebElement* element);
void QWebElement_prependInside(QWebElement* self, struct miqt_string markup);
void QWebElement_prependInsideWithElement(QWebElement* self, QWebElement* element);
void QWebElement_appendOutside(QWebElement* self, struct miqt_string markup);
void QWebElement_appendOutsideWithElement(QWebElement* self, QWebElement* element);
void QWebElement_prependOutside(QWebElement* self, struct miqt_string markup);
void QWebElement_prependOutsideWithElement(QWebElement* self, QWebElement* element);
void QWebElement_encloseContentsWith(QWebElement* self, QWebElement* element);
void QWebElement_encloseContentsWithWithMarkup(QWebElement* self, struct miqt_string markup);
void QWebElement_encloseWith(QWebElement* self, struct miqt_string markup);
void QWebElement_encloseWithWithElement(QWebElement* self, QWebElement* element);
void QWebElement_replace(QWebElement* self, struct miqt_string markup);
void QWebElement_replaceWithElement(QWebElement* self, QWebElement* element);
QWebElement* QWebElement_clone(const QWebElement* self);
QWebElement* QWebElement_takeFromDocument(QWebElement* self);
void QWebElement_removeFromDocument(QWebElement* self);
void QWebElement_removeAllChildren(QWebElement* self);
QVariant* QWebElement_evaluateJavaScript(QWebElement* self, struct miqt_string scriptSource);
struct miqt_string QWebElement_styleProperty(const QWebElement* self, struct miqt_string name, int strategy);
void QWebElement_setStyleProperty(QWebElement* self, struct miqt_string name, struct miqt_string value);
void QWebElement_render(QWebElement* self, QPainter* painter);
void QWebElement_render2(QWebElement* self, QPainter* painter, QRect* clipRect);
struct miqt_string QWebElement_attribute2(const QWebElement* self, struct miqt_string name, struct miqt_string defaultValue);
struct miqt_string QWebElement_attributeNS2(const QWebElement* self, struct miqt_string namespaceUri, struct miqt_string name, struct miqt_string defaultValue);
struct miqt_array /* of struct miqt_string */  QWebElement_attributeNamesWithNamespaceUri(const QWebElement* self, struct miqt_string namespaceUri);

void QWebElement_delete(QWebElement* self);

QWebElementCollection* QWebElementCollection_new();
QWebElementCollection* QWebElementCollection_new2(QWebElement* contextElement, struct miqt_string query);
QWebElementCollection* QWebElementCollection_new3(QWebElementCollection* param1);
void QWebElementCollection_operatorAssign(QWebElementCollection* self, QWebElementCollection* param1);
QWebElementCollection* QWebElementCollection_operatorPlus(const QWebElementCollection* self, QWebElementCollection* other);
QWebElementCollection* QWebElementCollection_operatorPlusAssign(QWebElementCollection* self, QWebElementCollection* other);
void QWebElementCollection_append(QWebElementCollection* self, QWebElementCollection* collection);
int QWebElementCollection_count(const QWebElementCollection* self);
QWebElement* QWebElementCollection_at(const QWebElementCollection* self, int i);
QWebElement* QWebElementCollection_operatorSubscript(const QWebElementCollection* self, int i);
QWebElement* QWebElementCollection_first(const QWebElementCollection* self);
QWebElement* QWebElementCollection_last(const QWebElementCollection* self);
struct miqt_array /* of QWebElement* */  QWebElementCollection_toList(const QWebElementCollection* self);
QWebElementCollection__const_iterator* QWebElementCollection_begin(const QWebElementCollection* self);
QWebElementCollection__const_iterator* QWebElementCollection_end(const QWebElementCollection* self);
QWebElementCollection__const_iterator* QWebElementCollection_constBegin(const QWebElementCollection* self);
QWebElementCollection__const_iterator* QWebElementCollection_constEnd(const QWebElementCollection* self);
QWebElementCollection__iterator* QWebElementCollection_begin2(QWebElementCollection* self);
QWebElementCollection__iterator* QWebElementCollection_end2(QWebElementCollection* self);

void QWebElementCollection_delete(QWebElementCollection* self);

QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_new(QWebElementCollection* collection_, int index);
QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_new2(QWebElementCollection__const_iterator* o);
QWebElement* QWebElementCollection__const_iterator_operatorMultiply(const QWebElementCollection__const_iterator* self);
bool QWebElementCollection__const_iterator_operatorEqual(const QWebElementCollection__const_iterator* self, QWebElementCollection__const_iterator* o);
bool QWebElementCollection__const_iterator_operatorNotEqual(const QWebElementCollection__const_iterator* self, QWebElementCollection__const_iterator* o);
bool QWebElementCollection__const_iterator_operatorLesser(const QWebElementCollection__const_iterator* self, QWebElementCollection__const_iterator* o);
bool QWebElementCollection__const_iterator_operatorLesserOrEqual(const QWebElementCollection__const_iterator* self, QWebElementCollection__const_iterator* o);
bool QWebElementCollection__const_iterator_operatorGreater(const QWebElementCollection__const_iterator* self, QWebElementCollection__const_iterator* o);
bool QWebElementCollection__const_iterator_operatorGreaterOrEqual(const QWebElementCollection__const_iterator* self, QWebElementCollection__const_iterator* o);
QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_operatorPlusPlus(QWebElementCollection__const_iterator* self);
QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_operatorPlusPlusWithInt(QWebElementCollection__const_iterator* self, int param1);
QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_operatorMinusMinus(QWebElementCollection__const_iterator* self);
QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_operatorMinusMinusWithInt(QWebElementCollection__const_iterator* self, int param1);
QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_operatorPlusAssign(QWebElementCollection__const_iterator* self, int j);
QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_operatorMinusAssign(QWebElementCollection__const_iterator* self, int j);
QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_operatorPlus(const QWebElementCollection__const_iterator* self, int j);
QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_operatorMinus(const QWebElementCollection__const_iterator* self, int j);
int QWebElementCollection__const_iterator_operatorMinusWithQWebElementCollectionconstIterator(const QWebElementCollection__const_iterator* self, QWebElementCollection__const_iterator* j);

void QWebElementCollection__const_iterator_delete(QWebElementCollection__const_iterator* self);

QWebElementCollection__iterator* QWebElementCollection__iterator_new(QWebElementCollection* collection_, int index);
QWebElementCollection__iterator* QWebElementCollection__iterator_new2(QWebElementCollection__iterator* o);
QWebElement* QWebElementCollection__iterator_operatorMultiply(const QWebElementCollection__iterator* self);
bool QWebElementCollection__iterator_operatorEqual(const QWebElementCollection__iterator* self, QWebElementCollection__iterator* o);
bool QWebElementCollection__iterator_operatorNotEqual(const QWebElementCollection__iterator* self, QWebElementCollection__iterator* o);
bool QWebElementCollection__iterator_operatorLesser(const QWebElementCollection__iterator* self, QWebElementCollection__iterator* o);
bool QWebElementCollection__iterator_operatorLesserOrEqual(const QWebElementCollection__iterator* self, QWebElementCollection__iterator* o);
bool QWebElementCollection__iterator_operatorGreater(const QWebElementCollection__iterator* self, QWebElementCollection__iterator* o);
bool QWebElementCollection__iterator_operatorGreaterOrEqual(const QWebElementCollection__iterator* self, QWebElementCollection__iterator* o);
QWebElementCollection__iterator* QWebElementCollection__iterator_operatorPlusPlus(QWebElementCollection__iterator* self);
QWebElementCollection__iterator* QWebElementCollection__iterator_operatorPlusPlusWithInt(QWebElementCollection__iterator* self, int param1);
QWebElementCollection__iterator* QWebElementCollection__iterator_operatorMinusMinus(QWebElementCollection__iterator* self);
QWebElementCollection__iterator* QWebElementCollection__iterator_operatorMinusMinusWithInt(QWebElementCollection__iterator* self, int param1);
QWebElementCollection__iterator* QWebElementCollection__iterator_operatorPlusAssign(QWebElementCollection__iterator* self, int j);
QWebElementCollection__iterator* QWebElementCollection__iterator_operatorMinusAssign(QWebElementCollection__iterator* self, int j);
QWebElementCollection__iterator* QWebElementCollection__iterator_operatorPlus(const QWebElementCollection__iterator* self, int j);
QWebElementCollection__iterator* QWebElementCollection__iterator_operatorMinus(const QWebElementCollection__iterator* self, int j);
int QWebElementCollection__iterator_operatorMinusWithQWebElementCollectioniterator(const QWebElementCollection__iterator* self, QWebElementCollection__iterator* j);

void QWebElementCollection__iterator_delete(QWebElementCollection__iterator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
