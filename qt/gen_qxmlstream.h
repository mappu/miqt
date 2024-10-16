#ifndef GEN_QXMLSTREAM_H
#define GEN_QXMLSTREAM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
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
typedef struct QByteArray QByteArray;
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
QXmlStreamStringRef* QXmlStreamStringRef_new2(struct miqt_string* aString);
QXmlStreamStringRef* QXmlStreamStringRef_new3(QXmlStreamStringRef* other);
void QXmlStreamStringRef_OperatorAssign(QXmlStreamStringRef* self, QXmlStreamStringRef* other);
void QXmlStreamStringRef_Swap(QXmlStreamStringRef* self, QXmlStreamStringRef* other);
void QXmlStreamStringRef_Clear(QXmlStreamStringRef* self);
struct miqt_string* QXmlStreamStringRef_String(const QXmlStreamStringRef* self);
int QXmlStreamStringRef_Position(const QXmlStreamStringRef* self);
int QXmlStreamStringRef_Size(const QXmlStreamStringRef* self);
void QXmlStreamStringRef_Delete(QXmlStreamStringRef* self);

QXmlStreamAttribute* QXmlStreamAttribute_new();
QXmlStreamAttribute* QXmlStreamAttribute_new2(struct miqt_string* qualifiedName, struct miqt_string* value);
QXmlStreamAttribute* QXmlStreamAttribute_new3(struct miqt_string* namespaceUri, struct miqt_string* name, struct miqt_string* value);
QXmlStreamAttribute* QXmlStreamAttribute_new4(QXmlStreamAttribute* param1);
void QXmlStreamAttribute_OperatorAssign(QXmlStreamAttribute* self, QXmlStreamAttribute* param1);
bool QXmlStreamAttribute_IsDefault(const QXmlStreamAttribute* self);
bool QXmlStreamAttribute_OperatorEqual(const QXmlStreamAttribute* self, QXmlStreamAttribute* other);
bool QXmlStreamAttribute_OperatorNotEqual(const QXmlStreamAttribute* self, QXmlStreamAttribute* other);
void QXmlStreamAttribute_Delete(QXmlStreamAttribute* self);

QXmlStreamNamespaceDeclaration* QXmlStreamNamespaceDeclaration_new();
QXmlStreamNamespaceDeclaration* QXmlStreamNamespaceDeclaration_new2(struct miqt_string* prefix, struct miqt_string* namespaceUri);
QXmlStreamNamespaceDeclaration* QXmlStreamNamespaceDeclaration_new3(QXmlStreamNamespaceDeclaration* param1);
void QXmlStreamNamespaceDeclaration_OperatorAssign(QXmlStreamNamespaceDeclaration* self, QXmlStreamNamespaceDeclaration* param1);
bool QXmlStreamNamespaceDeclaration_OperatorEqual(const QXmlStreamNamespaceDeclaration* self, QXmlStreamNamespaceDeclaration* other);
bool QXmlStreamNamespaceDeclaration_OperatorNotEqual(const QXmlStreamNamespaceDeclaration* self, QXmlStreamNamespaceDeclaration* other);
void QXmlStreamNamespaceDeclaration_Delete(QXmlStreamNamespaceDeclaration* self);

QXmlStreamNotationDeclaration* QXmlStreamNotationDeclaration_new();
QXmlStreamNotationDeclaration* QXmlStreamNotationDeclaration_new2(QXmlStreamNotationDeclaration* param1);
void QXmlStreamNotationDeclaration_OperatorAssign(QXmlStreamNotationDeclaration* self, QXmlStreamNotationDeclaration* param1);
bool QXmlStreamNotationDeclaration_OperatorEqual(const QXmlStreamNotationDeclaration* self, QXmlStreamNotationDeclaration* other);
bool QXmlStreamNotationDeclaration_OperatorNotEqual(const QXmlStreamNotationDeclaration* self, QXmlStreamNotationDeclaration* other);
void QXmlStreamNotationDeclaration_Delete(QXmlStreamNotationDeclaration* self);

QXmlStreamEntityDeclaration* QXmlStreamEntityDeclaration_new();
QXmlStreamEntityDeclaration* QXmlStreamEntityDeclaration_new2(QXmlStreamEntityDeclaration* param1);
void QXmlStreamEntityDeclaration_OperatorAssign(QXmlStreamEntityDeclaration* self, QXmlStreamEntityDeclaration* param1);
bool QXmlStreamEntityDeclaration_OperatorEqual(const QXmlStreamEntityDeclaration* self, QXmlStreamEntityDeclaration* other);
bool QXmlStreamEntityDeclaration_OperatorNotEqual(const QXmlStreamEntityDeclaration* self, QXmlStreamEntityDeclaration* other);
void QXmlStreamEntityDeclaration_Delete(QXmlStreamEntityDeclaration* self);

struct miqt_string* QXmlStreamEntityResolver_ResolveEntity(QXmlStreamEntityResolver* self, struct miqt_string* publicId, struct miqt_string* systemId);
struct miqt_string* QXmlStreamEntityResolver_ResolveUndeclaredEntity(QXmlStreamEntityResolver* self, struct miqt_string* name);
void QXmlStreamEntityResolver_OperatorAssign(QXmlStreamEntityResolver* self, QXmlStreamEntityResolver* param1);
void QXmlStreamEntityResolver_Delete(QXmlStreamEntityResolver* self);

QXmlStreamReader* QXmlStreamReader_new();
QXmlStreamReader* QXmlStreamReader_new2(QIODevice* device);
QXmlStreamReader* QXmlStreamReader_new3(QByteArray* data);
QXmlStreamReader* QXmlStreamReader_new4(struct miqt_string* data);
QXmlStreamReader* QXmlStreamReader_new5(const char* data);
void QXmlStreamReader_SetDevice(QXmlStreamReader* self, QIODevice* device);
QIODevice* QXmlStreamReader_Device(const QXmlStreamReader* self);
void QXmlStreamReader_AddData(QXmlStreamReader* self, QByteArray* data);
void QXmlStreamReader_AddDataWithData(QXmlStreamReader* self, struct miqt_string* data);
void QXmlStreamReader_AddData2(QXmlStreamReader* self, const char* data);
void QXmlStreamReader_Clear(QXmlStreamReader* self);
bool QXmlStreamReader_AtEnd(const QXmlStreamReader* self);
int QXmlStreamReader_ReadNext(QXmlStreamReader* self);
bool QXmlStreamReader_ReadNextStartElement(QXmlStreamReader* self);
void QXmlStreamReader_SkipCurrentElement(QXmlStreamReader* self);
int QXmlStreamReader_TokenType(const QXmlStreamReader* self);
struct miqt_string* QXmlStreamReader_TokenString(const QXmlStreamReader* self);
void QXmlStreamReader_SetNamespaceProcessing(QXmlStreamReader* self, bool namespaceProcessing);
bool QXmlStreamReader_NamespaceProcessing(const QXmlStreamReader* self);
bool QXmlStreamReader_IsStartDocument(const QXmlStreamReader* self);
bool QXmlStreamReader_IsEndDocument(const QXmlStreamReader* self);
bool QXmlStreamReader_IsStartElement(const QXmlStreamReader* self);
bool QXmlStreamReader_IsEndElement(const QXmlStreamReader* self);
bool QXmlStreamReader_IsCharacters(const QXmlStreamReader* self);
bool QXmlStreamReader_IsWhitespace(const QXmlStreamReader* self);
bool QXmlStreamReader_IsCDATA(const QXmlStreamReader* self);
bool QXmlStreamReader_IsComment(const QXmlStreamReader* self);
bool QXmlStreamReader_IsDTD(const QXmlStreamReader* self);
bool QXmlStreamReader_IsEntityReference(const QXmlStreamReader* self);
bool QXmlStreamReader_IsProcessingInstruction(const QXmlStreamReader* self);
bool QXmlStreamReader_IsStandaloneDocument(const QXmlStreamReader* self);
long long QXmlStreamReader_LineNumber(const QXmlStreamReader* self);
long long QXmlStreamReader_ColumnNumber(const QXmlStreamReader* self);
long long QXmlStreamReader_CharacterOffset(const QXmlStreamReader* self);
struct miqt_string* QXmlStreamReader_ReadElementText(QXmlStreamReader* self);
struct miqt_array* QXmlStreamReader_NamespaceDeclarations(const QXmlStreamReader* self);
void QXmlStreamReader_AddExtraNamespaceDeclaration(QXmlStreamReader* self, QXmlStreamNamespaceDeclaration* extraNamespaceDeclaraction);
void QXmlStreamReader_AddExtraNamespaceDeclarations(QXmlStreamReader* self, struct miqt_array* /* of QXmlStreamNamespaceDeclaration* */ extraNamespaceDeclaractions);
struct miqt_array* QXmlStreamReader_NotationDeclarations(const QXmlStreamReader* self);
struct miqt_array* QXmlStreamReader_EntityDeclarations(const QXmlStreamReader* self);
int QXmlStreamReader_EntityExpansionLimit(const QXmlStreamReader* self);
void QXmlStreamReader_SetEntityExpansionLimit(QXmlStreamReader* self, int limit);
void QXmlStreamReader_RaiseError(QXmlStreamReader* self);
struct miqt_string* QXmlStreamReader_ErrorString(const QXmlStreamReader* self);
int QXmlStreamReader_Error(const QXmlStreamReader* self);
bool QXmlStreamReader_HasError(const QXmlStreamReader* self);
void QXmlStreamReader_SetEntityResolver(QXmlStreamReader* self, QXmlStreamEntityResolver* resolver);
QXmlStreamEntityResolver* QXmlStreamReader_EntityResolver(const QXmlStreamReader* self);
struct miqt_string* QXmlStreamReader_ReadElementText1(QXmlStreamReader* self, int behaviour);
void QXmlStreamReader_RaiseError1(QXmlStreamReader* self, struct miqt_string* message);
void QXmlStreamReader_Delete(QXmlStreamReader* self);

QXmlStreamWriter* QXmlStreamWriter_new();
QXmlStreamWriter* QXmlStreamWriter_new2(QIODevice* device);
QXmlStreamWriter* QXmlStreamWriter_new3(QByteArray* array);
void QXmlStreamWriter_SetDevice(QXmlStreamWriter* self, QIODevice* device);
QIODevice* QXmlStreamWriter_Device(const QXmlStreamWriter* self);
void QXmlStreamWriter_SetCodec(QXmlStreamWriter* self, QTextCodec* codec);
void QXmlStreamWriter_SetCodecWithCodecName(QXmlStreamWriter* self, const char* codecName);
QTextCodec* QXmlStreamWriter_Codec(const QXmlStreamWriter* self);
void QXmlStreamWriter_SetAutoFormatting(QXmlStreamWriter* self, bool autoFormatting);
bool QXmlStreamWriter_AutoFormatting(const QXmlStreamWriter* self);
void QXmlStreamWriter_SetAutoFormattingIndent(QXmlStreamWriter* self, int spacesOrTabs);
int QXmlStreamWriter_AutoFormattingIndent(const QXmlStreamWriter* self);
void QXmlStreamWriter_WriteAttribute(QXmlStreamWriter* self, struct miqt_string* qualifiedName, struct miqt_string* value);
void QXmlStreamWriter_WriteAttribute2(QXmlStreamWriter* self, struct miqt_string* namespaceUri, struct miqt_string* name, struct miqt_string* value);
void QXmlStreamWriter_WriteAttributeWithAttribute(QXmlStreamWriter* self, QXmlStreamAttribute* attribute);
void QXmlStreamWriter_WriteCDATA(QXmlStreamWriter* self, struct miqt_string* text);
void QXmlStreamWriter_WriteCharacters(QXmlStreamWriter* self, struct miqt_string* text);
void QXmlStreamWriter_WriteComment(QXmlStreamWriter* self, struct miqt_string* text);
void QXmlStreamWriter_WriteDTD(QXmlStreamWriter* self, struct miqt_string* dtd);
void QXmlStreamWriter_WriteEmptyElement(QXmlStreamWriter* self, struct miqt_string* qualifiedName);
void QXmlStreamWriter_WriteEmptyElement2(QXmlStreamWriter* self, struct miqt_string* namespaceUri, struct miqt_string* name);
void QXmlStreamWriter_WriteTextElement(QXmlStreamWriter* self, struct miqt_string* qualifiedName, struct miqt_string* text);
void QXmlStreamWriter_WriteTextElement2(QXmlStreamWriter* self, struct miqt_string* namespaceUri, struct miqt_string* name, struct miqt_string* text);
void QXmlStreamWriter_WriteEndDocument(QXmlStreamWriter* self);
void QXmlStreamWriter_WriteEndElement(QXmlStreamWriter* self);
void QXmlStreamWriter_WriteEntityReference(QXmlStreamWriter* self, struct miqt_string* name);
void QXmlStreamWriter_WriteNamespace(QXmlStreamWriter* self, struct miqt_string* namespaceUri);
void QXmlStreamWriter_WriteDefaultNamespace(QXmlStreamWriter* self, struct miqt_string* namespaceUri);
void QXmlStreamWriter_WriteProcessingInstruction(QXmlStreamWriter* self, struct miqt_string* target);
void QXmlStreamWriter_WriteStartDocument(QXmlStreamWriter* self);
void QXmlStreamWriter_WriteStartDocumentWithVersion(QXmlStreamWriter* self, struct miqt_string* version);
void QXmlStreamWriter_WriteStartDocument2(QXmlStreamWriter* self, struct miqt_string* version, bool standalone);
void QXmlStreamWriter_WriteStartElement(QXmlStreamWriter* self, struct miqt_string* qualifiedName);
void QXmlStreamWriter_WriteStartElement2(QXmlStreamWriter* self, struct miqt_string* namespaceUri, struct miqt_string* name);
void QXmlStreamWriter_WriteCurrentToken(QXmlStreamWriter* self, QXmlStreamReader* reader);
bool QXmlStreamWriter_HasError(const QXmlStreamWriter* self);
void QXmlStreamWriter_WriteNamespace2(QXmlStreamWriter* self, struct miqt_string* namespaceUri, struct miqt_string* prefix);
void QXmlStreamWriter_WriteProcessingInstruction2(QXmlStreamWriter* self, struct miqt_string* target, struct miqt_string* data);
void QXmlStreamWriter_Delete(QXmlStreamWriter* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
