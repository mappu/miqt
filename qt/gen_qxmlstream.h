#pragma once
#ifndef MIQT_QT_GEN_QXMLSTREAM_H
#define MIQT_QT_GEN_QXMLSTREAM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QIODevice;
class QTextCodec;
class QXmlStreamAttribute;
class QXmlStreamEntityDeclaration;
class QXmlStreamEntityResolver;
class QXmlStreamNamespaceDeclaration;
class QXmlStreamNotationDeclaration;
class QXmlStreamReader;
class QXmlStreamStringRef;
class QXmlStreamWriter;
#else
typedef struct QIODevice QIODevice;
typedef struct QTextCodec QTextCodec;
typedef struct QXmlStreamAttribute QXmlStreamAttribute;
typedef struct QXmlStreamEntityDeclaration QXmlStreamEntityDeclaration;
typedef struct QXmlStreamEntityResolver QXmlStreamEntityResolver;
typedef struct QXmlStreamNamespaceDeclaration QXmlStreamNamespaceDeclaration;
typedef struct QXmlStreamNotationDeclaration QXmlStreamNotationDeclaration;
typedef struct QXmlStreamReader QXmlStreamReader;
typedef struct QXmlStreamStringRef QXmlStreamStringRef;
typedef struct QXmlStreamWriter QXmlStreamWriter;
#endif

QXmlStreamStringRef* QXmlStreamStringRef_new();
QXmlStreamStringRef* QXmlStreamStringRef_new2(struct miqt_string aString);
QXmlStreamStringRef* QXmlStreamStringRef_new3(QXmlStreamStringRef* other);
void QXmlStreamStringRef_operatorAssign(QXmlStreamStringRef* self, QXmlStreamStringRef* other);
void QXmlStreamStringRef_swap(QXmlStreamStringRef* self, QXmlStreamStringRef* other);
void QXmlStreamStringRef_clear(QXmlStreamStringRef* self);
struct miqt_string QXmlStreamStringRef_string(const QXmlStreamStringRef* self);
int QXmlStreamStringRef_position(const QXmlStreamStringRef* self);
int QXmlStreamStringRef_size(const QXmlStreamStringRef* self);
void QXmlStreamStringRef_delete(QXmlStreamStringRef* self);

QXmlStreamAttribute* QXmlStreamAttribute_new();
QXmlStreamAttribute* QXmlStreamAttribute_new2(struct miqt_string qualifiedName, struct miqt_string value);
QXmlStreamAttribute* QXmlStreamAttribute_new3(struct miqt_string namespaceUri, struct miqt_string name, struct miqt_string value);
QXmlStreamAttribute* QXmlStreamAttribute_new4(QXmlStreamAttribute* param1);
void QXmlStreamAttribute_operatorAssign(QXmlStreamAttribute* self, QXmlStreamAttribute* param1);
bool QXmlStreamAttribute_isDefault(const QXmlStreamAttribute* self);
bool QXmlStreamAttribute_operatorEqual(const QXmlStreamAttribute* self, QXmlStreamAttribute* other);
bool QXmlStreamAttribute_operatorNotEqual(const QXmlStreamAttribute* self, QXmlStreamAttribute* other);
void QXmlStreamAttribute_delete(QXmlStreamAttribute* self);

QXmlStreamNamespaceDeclaration* QXmlStreamNamespaceDeclaration_new();
QXmlStreamNamespaceDeclaration* QXmlStreamNamespaceDeclaration_new2(struct miqt_string prefix, struct miqt_string namespaceUri);
QXmlStreamNamespaceDeclaration* QXmlStreamNamespaceDeclaration_new3(QXmlStreamNamespaceDeclaration* param1);
void QXmlStreamNamespaceDeclaration_operatorAssign(QXmlStreamNamespaceDeclaration* self, QXmlStreamNamespaceDeclaration* param1);
bool QXmlStreamNamespaceDeclaration_operatorEqual(const QXmlStreamNamespaceDeclaration* self, QXmlStreamNamespaceDeclaration* other);
bool QXmlStreamNamespaceDeclaration_operatorNotEqual(const QXmlStreamNamespaceDeclaration* self, QXmlStreamNamespaceDeclaration* other);
void QXmlStreamNamespaceDeclaration_delete(QXmlStreamNamespaceDeclaration* self);

QXmlStreamNotationDeclaration* QXmlStreamNotationDeclaration_new();
QXmlStreamNotationDeclaration* QXmlStreamNotationDeclaration_new2(QXmlStreamNotationDeclaration* param1);
void QXmlStreamNotationDeclaration_operatorAssign(QXmlStreamNotationDeclaration* self, QXmlStreamNotationDeclaration* param1);
bool QXmlStreamNotationDeclaration_operatorEqual(const QXmlStreamNotationDeclaration* self, QXmlStreamNotationDeclaration* other);
bool QXmlStreamNotationDeclaration_operatorNotEqual(const QXmlStreamNotationDeclaration* self, QXmlStreamNotationDeclaration* other);
void QXmlStreamNotationDeclaration_delete(QXmlStreamNotationDeclaration* self);

QXmlStreamEntityDeclaration* QXmlStreamEntityDeclaration_new();
QXmlStreamEntityDeclaration* QXmlStreamEntityDeclaration_new2(QXmlStreamEntityDeclaration* param1);
void QXmlStreamEntityDeclaration_operatorAssign(QXmlStreamEntityDeclaration* self, QXmlStreamEntityDeclaration* param1);
bool QXmlStreamEntityDeclaration_operatorEqual(const QXmlStreamEntityDeclaration* self, QXmlStreamEntityDeclaration* other);
bool QXmlStreamEntityDeclaration_operatorNotEqual(const QXmlStreamEntityDeclaration* self, QXmlStreamEntityDeclaration* other);
void QXmlStreamEntityDeclaration_delete(QXmlStreamEntityDeclaration* self);

struct miqt_string QXmlStreamEntityResolver_resolveEntity(QXmlStreamEntityResolver* self, struct miqt_string publicId, struct miqt_string systemId);
struct miqt_string QXmlStreamEntityResolver_resolveUndeclaredEntity(QXmlStreamEntityResolver* self, struct miqt_string name);
void QXmlStreamEntityResolver_delete(QXmlStreamEntityResolver* self);

QXmlStreamReader* QXmlStreamReader_new();
QXmlStreamReader* QXmlStreamReader_new2(QIODevice* device);
QXmlStreamReader* QXmlStreamReader_new3(struct miqt_string data);
QXmlStreamReader* QXmlStreamReader_new4(struct miqt_string data);
QXmlStreamReader* QXmlStreamReader_new5(const char* data);
void QXmlStreamReader_setDevice(QXmlStreamReader* self, QIODevice* device);
QIODevice* QXmlStreamReader_device(const QXmlStreamReader* self);
void QXmlStreamReader_addData(QXmlStreamReader* self, struct miqt_string data);
void QXmlStreamReader_addDataWithData(QXmlStreamReader* self, struct miqt_string data);
void QXmlStreamReader_addData2(QXmlStreamReader* self, const char* data);
void QXmlStreamReader_clear(QXmlStreamReader* self);
bool QXmlStreamReader_atEnd(const QXmlStreamReader* self);
int QXmlStreamReader_readNext(QXmlStreamReader* self);
bool QXmlStreamReader_readNextStartElement(QXmlStreamReader* self);
void QXmlStreamReader_skipCurrentElement(QXmlStreamReader* self);
int QXmlStreamReader_tokenType(const QXmlStreamReader* self);
struct miqt_string QXmlStreamReader_tokenString(const QXmlStreamReader* self);
void QXmlStreamReader_setNamespaceProcessing(QXmlStreamReader* self, bool namespaceProcessing);
bool QXmlStreamReader_namespaceProcessing(const QXmlStreamReader* self);
bool QXmlStreamReader_isStartDocument(const QXmlStreamReader* self);
bool QXmlStreamReader_isEndDocument(const QXmlStreamReader* self);
bool QXmlStreamReader_isStartElement(const QXmlStreamReader* self);
bool QXmlStreamReader_isEndElement(const QXmlStreamReader* self);
bool QXmlStreamReader_isCharacters(const QXmlStreamReader* self);
bool QXmlStreamReader_isWhitespace(const QXmlStreamReader* self);
bool QXmlStreamReader_isCDATA(const QXmlStreamReader* self);
bool QXmlStreamReader_isComment(const QXmlStreamReader* self);
bool QXmlStreamReader_isDTD(const QXmlStreamReader* self);
bool QXmlStreamReader_isEntityReference(const QXmlStreamReader* self);
bool QXmlStreamReader_isProcessingInstruction(const QXmlStreamReader* self);
bool QXmlStreamReader_isStandaloneDocument(const QXmlStreamReader* self);
long long QXmlStreamReader_lineNumber(const QXmlStreamReader* self);
long long QXmlStreamReader_columnNumber(const QXmlStreamReader* self);
long long QXmlStreamReader_characterOffset(const QXmlStreamReader* self);
struct miqt_string QXmlStreamReader_readElementText(QXmlStreamReader* self);
struct miqt_array /* of QXmlStreamNamespaceDeclaration* */  QXmlStreamReader_namespaceDeclarations(const QXmlStreamReader* self);
void QXmlStreamReader_addExtraNamespaceDeclaration(QXmlStreamReader* self, QXmlStreamNamespaceDeclaration* extraNamespaceDeclaraction);
void QXmlStreamReader_addExtraNamespaceDeclarations(QXmlStreamReader* self, struct miqt_array /* of QXmlStreamNamespaceDeclaration* */  extraNamespaceDeclaractions);
struct miqt_array /* of QXmlStreamNotationDeclaration* */  QXmlStreamReader_notationDeclarations(const QXmlStreamReader* self);
struct miqt_array /* of QXmlStreamEntityDeclaration* */  QXmlStreamReader_entityDeclarations(const QXmlStreamReader* self);
int QXmlStreamReader_entityExpansionLimit(const QXmlStreamReader* self);
void QXmlStreamReader_setEntityExpansionLimit(QXmlStreamReader* self, int limit);
void QXmlStreamReader_raiseError(QXmlStreamReader* self);
struct miqt_string QXmlStreamReader_errorString(const QXmlStreamReader* self);
int QXmlStreamReader_error(const QXmlStreamReader* self);
bool QXmlStreamReader_hasError(const QXmlStreamReader* self);
void QXmlStreamReader_setEntityResolver(QXmlStreamReader* self, QXmlStreamEntityResolver* resolver);
QXmlStreamEntityResolver* QXmlStreamReader_entityResolver(const QXmlStreamReader* self);
struct miqt_string QXmlStreamReader_readElementText1(QXmlStreamReader* self, int behaviour);
void QXmlStreamReader_raiseError1(QXmlStreamReader* self, struct miqt_string message);
void QXmlStreamReader_delete(QXmlStreamReader* self);

QXmlStreamWriter* QXmlStreamWriter_new();
QXmlStreamWriter* QXmlStreamWriter_new2(QIODevice* device);
void QXmlStreamWriter_setDevice(QXmlStreamWriter* self, QIODevice* device);
QIODevice* QXmlStreamWriter_device(const QXmlStreamWriter* self);
void QXmlStreamWriter_setCodec(QXmlStreamWriter* self, QTextCodec* codec);
void QXmlStreamWriter_setCodecWithCodecName(QXmlStreamWriter* self, const char* codecName);
QTextCodec* QXmlStreamWriter_codec(const QXmlStreamWriter* self);
void QXmlStreamWriter_setAutoFormatting(QXmlStreamWriter* self, bool autoFormatting);
bool QXmlStreamWriter_autoFormatting(const QXmlStreamWriter* self);
void QXmlStreamWriter_setAutoFormattingIndent(QXmlStreamWriter* self, int spacesOrTabs);
int QXmlStreamWriter_autoFormattingIndent(const QXmlStreamWriter* self);
void QXmlStreamWriter_writeAttribute(QXmlStreamWriter* self, struct miqt_string qualifiedName, struct miqt_string value);
void QXmlStreamWriter_writeAttribute2(QXmlStreamWriter* self, struct miqt_string namespaceUri, struct miqt_string name, struct miqt_string value);
void QXmlStreamWriter_writeAttributeWithAttribute(QXmlStreamWriter* self, QXmlStreamAttribute* attribute);
void QXmlStreamWriter_writeCDATA(QXmlStreamWriter* self, struct miqt_string text);
void QXmlStreamWriter_writeCharacters(QXmlStreamWriter* self, struct miqt_string text);
void QXmlStreamWriter_writeComment(QXmlStreamWriter* self, struct miqt_string text);
void QXmlStreamWriter_writeDTD(QXmlStreamWriter* self, struct miqt_string dtd);
void QXmlStreamWriter_writeEmptyElement(QXmlStreamWriter* self, struct miqt_string qualifiedName);
void QXmlStreamWriter_writeEmptyElement2(QXmlStreamWriter* self, struct miqt_string namespaceUri, struct miqt_string name);
void QXmlStreamWriter_writeTextElement(QXmlStreamWriter* self, struct miqt_string qualifiedName, struct miqt_string text);
void QXmlStreamWriter_writeTextElement2(QXmlStreamWriter* self, struct miqt_string namespaceUri, struct miqt_string name, struct miqt_string text);
void QXmlStreamWriter_writeEndDocument(QXmlStreamWriter* self);
void QXmlStreamWriter_writeEndElement(QXmlStreamWriter* self);
void QXmlStreamWriter_writeEntityReference(QXmlStreamWriter* self, struct miqt_string name);
void QXmlStreamWriter_writeNamespace(QXmlStreamWriter* self, struct miqt_string namespaceUri);
void QXmlStreamWriter_writeDefaultNamespace(QXmlStreamWriter* self, struct miqt_string namespaceUri);
void QXmlStreamWriter_writeProcessingInstruction(QXmlStreamWriter* self, struct miqt_string target);
void QXmlStreamWriter_writeStartDocument(QXmlStreamWriter* self);
void QXmlStreamWriter_writeStartDocumentWithVersion(QXmlStreamWriter* self, struct miqt_string version);
void QXmlStreamWriter_writeStartDocument2(QXmlStreamWriter* self, struct miqt_string version, bool standalone);
void QXmlStreamWriter_writeStartElement(QXmlStreamWriter* self, struct miqt_string qualifiedName);
void QXmlStreamWriter_writeStartElement2(QXmlStreamWriter* self, struct miqt_string namespaceUri, struct miqt_string name);
void QXmlStreamWriter_writeCurrentToken(QXmlStreamWriter* self, QXmlStreamReader* reader);
bool QXmlStreamWriter_hasError(const QXmlStreamWriter* self);
void QXmlStreamWriter_writeNamespace2(QXmlStreamWriter* self, struct miqt_string namespaceUri, struct miqt_string prefix);
void QXmlStreamWriter_writeProcessingInstruction2(QXmlStreamWriter* self, struct miqt_string target, struct miqt_string data);
void QXmlStreamWriter_delete(QXmlStreamWriter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
