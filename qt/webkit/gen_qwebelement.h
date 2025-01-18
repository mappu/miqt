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
void QWebElement_OperatorAssign(QWebElement* self, QWebElement* param1);
bool QWebElement_OperatorEqual(const QWebElement* self, QWebElement* o);
bool QWebElement_OperatorNotEqual(const QWebElement* self, QWebElement* o);
bool QWebElement_IsNull(const QWebElement* self);
QWebElementCollection* QWebElement_FindAll(const QWebElement* self, struct miqt_string selectorQuery);
QWebElement* QWebElement_FindFirst(const QWebElement* self, struct miqt_string selectorQuery);
void QWebElement_SetPlainText(QWebElement* self, struct miqt_string text);
struct miqt_string QWebElement_ToPlainText(const QWebElement* self);
void QWebElement_SetOuterXml(QWebElement* self, struct miqt_string markup);
struct miqt_string QWebElement_ToOuterXml(const QWebElement* self);
void QWebElement_SetInnerXml(QWebElement* self, struct miqt_string markup);
struct miqt_string QWebElement_ToInnerXml(const QWebElement* self);
void QWebElement_SetAttribute(QWebElement* self, struct miqt_string name, struct miqt_string value);
void QWebElement_SetAttributeNS(QWebElement* self, struct miqt_string namespaceUri, struct miqt_string name, struct miqt_string value);
struct miqt_string QWebElement_Attribute(const QWebElement* self, struct miqt_string name);
struct miqt_string QWebElement_AttributeNS(const QWebElement* self, struct miqt_string namespaceUri, struct miqt_string name);
bool QWebElement_HasAttribute(const QWebElement* self, struct miqt_string name);
bool QWebElement_HasAttributeNS(const QWebElement* self, struct miqt_string namespaceUri, struct miqt_string name);
void QWebElement_RemoveAttribute(QWebElement* self, struct miqt_string name);
void QWebElement_RemoveAttributeNS(QWebElement* self, struct miqt_string namespaceUri, struct miqt_string name);
bool QWebElement_HasAttributes(const QWebElement* self);
struct miqt_array /* of struct miqt_string */  QWebElement_AttributeNames(const QWebElement* self);
struct miqt_array /* of struct miqt_string */  QWebElement_Classes(const QWebElement* self);
bool QWebElement_HasClass(const QWebElement* self, struct miqt_string name);
void QWebElement_AddClass(QWebElement* self, struct miqt_string name);
void QWebElement_RemoveClass(QWebElement* self, struct miqt_string name);
void QWebElement_ToggleClass(QWebElement* self, struct miqt_string name);
bool QWebElement_HasFocus(const QWebElement* self);
void QWebElement_SetFocus(QWebElement* self);
QRect* QWebElement_Geometry(const QWebElement* self);
struct miqt_string QWebElement_TagName(const QWebElement* self);
struct miqt_string QWebElement_Prefix(const QWebElement* self);
struct miqt_string QWebElement_LocalName(const QWebElement* self);
struct miqt_string QWebElement_NamespaceUri(const QWebElement* self);
QWebElement* QWebElement_Parent(const QWebElement* self);
QWebElement* QWebElement_FirstChild(const QWebElement* self);
QWebElement* QWebElement_LastChild(const QWebElement* self);
QWebElement* QWebElement_NextSibling(const QWebElement* self);
QWebElement* QWebElement_PreviousSibling(const QWebElement* self);
QWebElement* QWebElement_Document(const QWebElement* self);
QWebFrame* QWebElement_WebFrame(const QWebElement* self);
void QWebElement_AppendInside(QWebElement* self, struct miqt_string markup);
void QWebElement_AppendInsideWithElement(QWebElement* self, QWebElement* element);
void QWebElement_PrependInside(QWebElement* self, struct miqt_string markup);
void QWebElement_PrependInsideWithElement(QWebElement* self, QWebElement* element);
void QWebElement_AppendOutside(QWebElement* self, struct miqt_string markup);
void QWebElement_AppendOutsideWithElement(QWebElement* self, QWebElement* element);
void QWebElement_PrependOutside(QWebElement* self, struct miqt_string markup);
void QWebElement_PrependOutsideWithElement(QWebElement* self, QWebElement* element);
void QWebElement_EncloseContentsWith(QWebElement* self, QWebElement* element);
void QWebElement_EncloseContentsWithWithMarkup(QWebElement* self, struct miqt_string markup);
void QWebElement_EncloseWith(QWebElement* self, struct miqt_string markup);
void QWebElement_EncloseWithWithElement(QWebElement* self, QWebElement* element);
void QWebElement_Replace(QWebElement* self, struct miqt_string markup);
void QWebElement_ReplaceWithElement(QWebElement* self, QWebElement* element);
QWebElement* QWebElement_Clone(const QWebElement* self);
QWebElement* QWebElement_TakeFromDocument(QWebElement* self);
void QWebElement_RemoveFromDocument(QWebElement* self);
void QWebElement_RemoveAllChildren(QWebElement* self);
QVariant* QWebElement_EvaluateJavaScript(QWebElement* self, struct miqt_string scriptSource);
struct miqt_string QWebElement_StyleProperty(const QWebElement* self, struct miqt_string name, int strategy);
void QWebElement_SetStyleProperty(QWebElement* self, struct miqt_string name, struct miqt_string value);
void QWebElement_Render(QWebElement* self, QPainter* painter);
void QWebElement_Render2(QWebElement* self, QPainter* painter, QRect* clipRect);
struct miqt_string QWebElement_Attribute2(const QWebElement* self, struct miqt_string name, struct miqt_string defaultValue);
struct miqt_string QWebElement_AttributeNS3(const QWebElement* self, struct miqt_string namespaceUri, struct miqt_string name, struct miqt_string defaultValue);
struct miqt_array /* of struct miqt_string */  QWebElement_AttributeNames1(const QWebElement* self, struct miqt_string namespaceUri);
void QWebElement_Delete(QWebElement* self);

QWebElementCollection* QWebElementCollection_new();
QWebElementCollection* QWebElementCollection_new2(QWebElement* contextElement, struct miqt_string query);
QWebElementCollection* QWebElementCollection_new3(QWebElementCollection* param1);
void QWebElementCollection_OperatorAssign(QWebElementCollection* self, QWebElementCollection* param1);
QWebElementCollection* QWebElementCollection_OperatorPlus(const QWebElementCollection* self, QWebElementCollection* other);
QWebElementCollection* QWebElementCollection_OperatorPlusAssign(QWebElementCollection* self, QWebElementCollection* other);
void QWebElementCollection_Append(QWebElementCollection* self, QWebElementCollection* collection);
int QWebElementCollection_Count(const QWebElementCollection* self);
QWebElement* QWebElementCollection_At(const QWebElementCollection* self, int i);
QWebElement* QWebElementCollection_OperatorSubscript(const QWebElementCollection* self, int i);
QWebElement* QWebElementCollection_First(const QWebElementCollection* self);
QWebElement* QWebElementCollection_Last(const QWebElementCollection* self);
struct miqt_array /* of QWebElement* */  QWebElementCollection_ToList(const QWebElementCollection* self);
QWebElementCollection__const_iterator* QWebElementCollection_Begin(const QWebElementCollection* self);
QWebElementCollection__const_iterator* QWebElementCollection_End(const QWebElementCollection* self);
QWebElementCollection__const_iterator* QWebElementCollection_ConstBegin(const QWebElementCollection* self);
QWebElementCollection__const_iterator* QWebElementCollection_ConstEnd(const QWebElementCollection* self);
QWebElementCollection__iterator* QWebElementCollection_Begin2(QWebElementCollection* self);
QWebElementCollection__iterator* QWebElementCollection_End2(QWebElementCollection* self);
void QWebElementCollection_Delete(QWebElementCollection* self);

QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_new(QWebElementCollection* collection_, int index);
QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_new2(QWebElementCollection__const_iterator* o);
QWebElement* QWebElementCollection__const_iterator_OperatorMultiply(const QWebElementCollection__const_iterator* self);
bool QWebElementCollection__const_iterator_OperatorEqual(const QWebElementCollection__const_iterator* self, QWebElementCollection__const_iterator* o);
bool QWebElementCollection__const_iterator_OperatorNotEqual(const QWebElementCollection__const_iterator* self, QWebElementCollection__const_iterator* o);
bool QWebElementCollection__const_iterator_OperatorLesser(const QWebElementCollection__const_iterator* self, QWebElementCollection__const_iterator* o);
bool QWebElementCollection__const_iterator_OperatorLesserOrEqual(const QWebElementCollection__const_iterator* self, QWebElementCollection__const_iterator* o);
bool QWebElementCollection__const_iterator_OperatorGreater(const QWebElementCollection__const_iterator* self, QWebElementCollection__const_iterator* o);
bool QWebElementCollection__const_iterator_OperatorGreaterOrEqual(const QWebElementCollection__const_iterator* self, QWebElementCollection__const_iterator* o);
QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_OperatorPlusPlus(QWebElementCollection__const_iterator* self);
QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_OperatorPlusPlusWithInt(QWebElementCollection__const_iterator* self, int param1);
QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_OperatorMinusMinus(QWebElementCollection__const_iterator* self);
QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_OperatorMinusMinusWithInt(QWebElementCollection__const_iterator* self, int param1);
QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_OperatorPlusAssign(QWebElementCollection__const_iterator* self, int j);
QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_OperatorMinusAssign(QWebElementCollection__const_iterator* self, int j);
QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_OperatorPlus(const QWebElementCollection__const_iterator* self, int j);
QWebElementCollection__const_iterator* QWebElementCollection__const_iterator_OperatorMinus(const QWebElementCollection__const_iterator* self, int j);
int QWebElementCollection__const_iterator_OperatorMinusWithQWebElementCollectionconstIterator(const QWebElementCollection__const_iterator* self, QWebElementCollection__const_iterator* j);
void QWebElementCollection__const_iterator_Delete(QWebElementCollection__const_iterator* self);

QWebElementCollection__iterator* QWebElementCollection__iterator_new(QWebElementCollection* collection_, int index);
QWebElementCollection__iterator* QWebElementCollection__iterator_new2(QWebElementCollection__iterator* o);
QWebElement* QWebElementCollection__iterator_OperatorMultiply(const QWebElementCollection__iterator* self);
bool QWebElementCollection__iterator_OperatorEqual(const QWebElementCollection__iterator* self, QWebElementCollection__iterator* o);
bool QWebElementCollection__iterator_OperatorNotEqual(const QWebElementCollection__iterator* self, QWebElementCollection__iterator* o);
bool QWebElementCollection__iterator_OperatorLesser(const QWebElementCollection__iterator* self, QWebElementCollection__iterator* o);
bool QWebElementCollection__iterator_OperatorLesserOrEqual(const QWebElementCollection__iterator* self, QWebElementCollection__iterator* o);
bool QWebElementCollection__iterator_OperatorGreater(const QWebElementCollection__iterator* self, QWebElementCollection__iterator* o);
bool QWebElementCollection__iterator_OperatorGreaterOrEqual(const QWebElementCollection__iterator* self, QWebElementCollection__iterator* o);
QWebElementCollection__iterator* QWebElementCollection__iterator_OperatorPlusPlus(QWebElementCollection__iterator* self);
QWebElementCollection__iterator* QWebElementCollection__iterator_OperatorPlusPlusWithInt(QWebElementCollection__iterator* self, int param1);
QWebElementCollection__iterator* QWebElementCollection__iterator_OperatorMinusMinus(QWebElementCollection__iterator* self);
QWebElementCollection__iterator* QWebElementCollection__iterator_OperatorMinusMinusWithInt(QWebElementCollection__iterator* self, int param1);
QWebElementCollection__iterator* QWebElementCollection__iterator_OperatorPlusAssign(QWebElementCollection__iterator* self, int j);
QWebElementCollection__iterator* QWebElementCollection__iterator_OperatorMinusAssign(QWebElementCollection__iterator* self, int j);
QWebElementCollection__iterator* QWebElementCollection__iterator_OperatorPlus(const QWebElementCollection__iterator* self, int j);
QWebElementCollection__iterator* QWebElementCollection__iterator_OperatorMinus(const QWebElementCollection__iterator* self, int j);
int QWebElementCollection__iterator_OperatorMinusWithQWebElementCollectioniterator(const QWebElementCollection__iterator* self, QWebElementCollection__iterator* j);
void QWebElementCollection__iterator_Delete(QWebElementCollection__iterator* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
