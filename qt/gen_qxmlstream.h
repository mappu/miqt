#ifndef GEN_QXMLSTREAM_H
#define GEN_QXMLSTREAM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QXmlStreamStringRef* QXmlStreamStringRef_new2(const char* aString, size_t aString_Strlen);
QXmlStreamStringRef* QXmlStreamStringRef_new3(QXmlStreamStringRef* other);
void QXmlStreamStringRef_OperatorAssign(QXmlStreamStringRef* self, QXmlStreamStringRef* other);
void QXmlStreamStringRef_Swap(QXmlStreamStringRef* self, QXmlStreamStringRef* other);
void QXmlStreamStringRef_Clear(QXmlStreamStringRef* self);
void QXmlStreamStringRef_String(QXmlStreamStringRef* self, char** _out, int* _out_Strlen);
int QXmlStreamStringRef_Position(QXmlStreamStringRef* self);
int QXmlStreamStringRef_Size(QXmlStreamStringRef* self);
void QXmlStreamStringRef_Delete(QXmlStreamStringRef* self);

QXmlStreamAttribute* QXmlStreamAttribute_new();
QXmlStreamAttribute* QXmlStreamAttribute_new2(const char* qualifiedName, size_t qualifiedName_Strlen, const char* value, size_t value_Strlen);
QXmlStreamAttribute* QXmlStreamAttribute_new3(const char* namespaceUri, size_t namespaceUri_Strlen, const char* name, size_t name_Strlen, const char* value, size_t value_Strlen);
QXmlStreamAttribute* QXmlStreamAttribute_new4(QXmlStreamAttribute* param1);
void QXmlStreamAttribute_OperatorAssign(QXmlStreamAttribute* self, QXmlStreamAttribute* param1);
bool QXmlStreamAttribute_IsDefault(QXmlStreamAttribute* self);
bool QXmlStreamAttribute_OperatorEqual(QXmlStreamAttribute* self, QXmlStreamAttribute* other);
bool QXmlStreamAttribute_OperatorNotEqual(QXmlStreamAttribute* self, QXmlStreamAttribute* other);
void QXmlStreamAttribute_Delete(QXmlStreamAttribute* self);

QXmlStreamNamespaceDeclaration* QXmlStreamNamespaceDeclaration_new();
QXmlStreamNamespaceDeclaration* QXmlStreamNamespaceDeclaration_new2(const char* prefix, size_t prefix_Strlen, const char* namespaceUri, size_t namespaceUri_Strlen);
QXmlStreamNamespaceDeclaration* QXmlStreamNamespaceDeclaration_new3(QXmlStreamNamespaceDeclaration* param1);
void QXmlStreamNamespaceDeclaration_OperatorAssign(QXmlStreamNamespaceDeclaration* self, QXmlStreamNamespaceDeclaration* param1);
bool QXmlStreamNamespaceDeclaration_OperatorEqual(QXmlStreamNamespaceDeclaration* self, QXmlStreamNamespaceDeclaration* other);
bool QXmlStreamNamespaceDeclaration_OperatorNotEqual(QXmlStreamNamespaceDeclaration* self, QXmlStreamNamespaceDeclaration* other);
void QXmlStreamNamespaceDeclaration_Delete(QXmlStreamNamespaceDeclaration* self);

QXmlStreamNotationDeclaration* QXmlStreamNotationDeclaration_new();
QXmlStreamNotationDeclaration* QXmlStreamNotationDeclaration_new2(QXmlStreamNotationDeclaration* param1);
void QXmlStreamNotationDeclaration_OperatorAssign(QXmlStreamNotationDeclaration* self, QXmlStreamNotationDeclaration* param1);
bool QXmlStreamNotationDeclaration_OperatorEqual(QXmlStreamNotationDeclaration* self, QXmlStreamNotationDeclaration* other);
bool QXmlStreamNotationDeclaration_OperatorNotEqual(QXmlStreamNotationDeclaration* self, QXmlStreamNotationDeclaration* other);
void QXmlStreamNotationDeclaration_Delete(QXmlStreamNotationDeclaration* self);

QXmlStreamEntityDeclaration* QXmlStreamEntityDeclaration_new();
QXmlStreamEntityDeclaration* QXmlStreamEntityDeclaration_new2(QXmlStreamEntityDeclaration* param1);
void QXmlStreamEntityDeclaration_OperatorAssign(QXmlStreamEntityDeclaration* self, QXmlStreamEntityDeclaration* param1);
bool QXmlStreamEntityDeclaration_OperatorEqual(QXmlStreamEntityDeclaration* self, QXmlStreamEntityDeclaration* other);
bool QXmlStreamEntityDeclaration_OperatorNotEqual(QXmlStreamEntityDeclaration* self, QXmlStreamEntityDeclaration* other);
void QXmlStreamEntityDeclaration_Delete(QXmlStreamEntityDeclaration* self);

void QXmlStreamEntityResolver_ResolveEntity(QXmlStreamEntityResolver* self, const char* publicId, size_t publicId_Strlen, const char* systemId, size_t systemId_Strlen, char** _out, int* _out_Strlen);
void QXmlStreamEntityResolver_ResolveUndeclaredEntity(QXmlStreamEntityResolver* self, const char* name, size_t name_Strlen, char** _out, int* _out_Strlen);
void QXmlStreamEntityResolver_OperatorAssign(QXmlStreamEntityResolver* self, QXmlStreamEntityResolver* param1);
void QXmlStreamEntityResolver_Delete(QXmlStreamEntityResolver* self);

QXmlStreamReader* QXmlStreamReader_new();
QXmlStreamReader* QXmlStreamReader_new2(QIODevice* device);
QXmlStreamReader* QXmlStreamReader_new3(QByteArray* data);
QXmlStreamReader* QXmlStreamReader_new4(const char* data, size_t data_Strlen);
QXmlStreamReader* QXmlStreamReader_new5(char* data);
void QXmlStreamReader_SetDevice(QXmlStreamReader* self, QIODevice* device);
QIODevice* QXmlStreamReader_Device(QXmlStreamReader* self);
void QXmlStreamReader_AddData(QXmlStreamReader* self, QByteArray* data);
void QXmlStreamReader_AddDataWithData(QXmlStreamReader* self, const char* data, size_t data_Strlen);
void QXmlStreamReader_AddData2(QXmlStreamReader* self, char* data);
void QXmlStreamReader_Clear(QXmlStreamReader* self);
bool QXmlStreamReader_AtEnd(QXmlStreamReader* self);
bool QXmlStreamReader_ReadNextStartElement(QXmlStreamReader* self);
void QXmlStreamReader_SkipCurrentElement(QXmlStreamReader* self);
void QXmlStreamReader_TokenString(QXmlStreamReader* self, char** _out, int* _out_Strlen);
void QXmlStreamReader_SetNamespaceProcessing(QXmlStreamReader* self, bool namespaceProcessing);
bool QXmlStreamReader_NamespaceProcessing(QXmlStreamReader* self);
bool QXmlStreamReader_IsStartDocument(QXmlStreamReader* self);
bool QXmlStreamReader_IsEndDocument(QXmlStreamReader* self);
bool QXmlStreamReader_IsStartElement(QXmlStreamReader* self);
bool QXmlStreamReader_IsEndElement(QXmlStreamReader* self);
bool QXmlStreamReader_IsCharacters(QXmlStreamReader* self);
bool QXmlStreamReader_IsWhitespace(QXmlStreamReader* self);
bool QXmlStreamReader_IsCDATA(QXmlStreamReader* self);
bool QXmlStreamReader_IsComment(QXmlStreamReader* self);
bool QXmlStreamReader_IsDTD(QXmlStreamReader* self);
bool QXmlStreamReader_IsEntityReference(QXmlStreamReader* self);
bool QXmlStreamReader_IsProcessingInstruction(QXmlStreamReader* self);
bool QXmlStreamReader_IsStandaloneDocument(QXmlStreamReader* self);
int64_t QXmlStreamReader_LineNumber(QXmlStreamReader* self);
int64_t QXmlStreamReader_ColumnNumber(QXmlStreamReader* self);
int64_t QXmlStreamReader_CharacterOffset(QXmlStreamReader* self);
void QXmlStreamReader_AddExtraNamespaceDeclaration(QXmlStreamReader* self, QXmlStreamNamespaceDeclaration* extraNamespaceDeclaraction);
int QXmlStreamReader_EntityExpansionLimit(QXmlStreamReader* self);
void QXmlStreamReader_SetEntityExpansionLimit(QXmlStreamReader* self, int limit);
void QXmlStreamReader_RaiseError(QXmlStreamReader* self);
void QXmlStreamReader_ErrorString(QXmlStreamReader* self, char** _out, int* _out_Strlen);
bool QXmlStreamReader_HasError(QXmlStreamReader* self);
void QXmlStreamReader_SetEntityResolver(QXmlStreamReader* self, QXmlStreamEntityResolver* resolver);
QXmlStreamEntityResolver* QXmlStreamReader_EntityResolver(QXmlStreamReader* self);
void QXmlStreamReader_RaiseError1(QXmlStreamReader* self, const char* message, size_t message_Strlen);
void QXmlStreamReader_Delete(QXmlStreamReader* self);

QXmlStreamWriter* QXmlStreamWriter_new();
QXmlStreamWriter* QXmlStreamWriter_new2(QIODevice* device);
QXmlStreamWriter* QXmlStreamWriter_new3(QByteArray* array);
void QXmlStreamWriter_SetDevice(QXmlStreamWriter* self, QIODevice* device);
QIODevice* QXmlStreamWriter_Device(QXmlStreamWriter* self);
void QXmlStreamWriter_SetCodec(QXmlStreamWriter* self, QTextCodec* codec);
void QXmlStreamWriter_SetCodecWithCodecName(QXmlStreamWriter* self, char* codecName);
QTextCodec* QXmlStreamWriter_Codec(QXmlStreamWriter* self);
void QXmlStreamWriter_SetAutoFormatting(QXmlStreamWriter* self, bool autoFormatting);
bool QXmlStreamWriter_AutoFormatting(QXmlStreamWriter* self);
void QXmlStreamWriter_SetAutoFormattingIndent(QXmlStreamWriter* self, int spacesOrTabs);
int QXmlStreamWriter_AutoFormattingIndent(QXmlStreamWriter* self);
void QXmlStreamWriter_WriteAttribute(QXmlStreamWriter* self, const char* qualifiedName, size_t qualifiedName_Strlen, const char* value, size_t value_Strlen);
void QXmlStreamWriter_WriteAttribute2(QXmlStreamWriter* self, const char* namespaceUri, size_t namespaceUri_Strlen, const char* name, size_t name_Strlen, const char* value, size_t value_Strlen);
void QXmlStreamWriter_WriteAttributeWithAttribute(QXmlStreamWriter* self, QXmlStreamAttribute* attribute);
void QXmlStreamWriter_WriteCDATA(QXmlStreamWriter* self, const char* text, size_t text_Strlen);
void QXmlStreamWriter_WriteCharacters(QXmlStreamWriter* self, const char* text, size_t text_Strlen);
void QXmlStreamWriter_WriteComment(QXmlStreamWriter* self, const char* text, size_t text_Strlen);
void QXmlStreamWriter_WriteDTD(QXmlStreamWriter* self, const char* dtd, size_t dtd_Strlen);
void QXmlStreamWriter_WriteEmptyElement(QXmlStreamWriter* self, const char* qualifiedName, size_t qualifiedName_Strlen);
void QXmlStreamWriter_WriteEmptyElement2(QXmlStreamWriter* self, const char* namespaceUri, size_t namespaceUri_Strlen, const char* name, size_t name_Strlen);
void QXmlStreamWriter_WriteTextElement(QXmlStreamWriter* self, const char* qualifiedName, size_t qualifiedName_Strlen, const char* text, size_t text_Strlen);
void QXmlStreamWriter_WriteTextElement2(QXmlStreamWriter* self, const char* namespaceUri, size_t namespaceUri_Strlen, const char* name, size_t name_Strlen, const char* text, size_t text_Strlen);
void QXmlStreamWriter_WriteEndDocument(QXmlStreamWriter* self);
void QXmlStreamWriter_WriteEndElement(QXmlStreamWriter* self);
void QXmlStreamWriter_WriteEntityReference(QXmlStreamWriter* self, const char* name, size_t name_Strlen);
void QXmlStreamWriter_WriteNamespace(QXmlStreamWriter* self, const char* namespaceUri, size_t namespaceUri_Strlen);
void QXmlStreamWriter_WriteDefaultNamespace(QXmlStreamWriter* self, const char* namespaceUri, size_t namespaceUri_Strlen);
void QXmlStreamWriter_WriteProcessingInstruction(QXmlStreamWriter* self, const char* target, size_t target_Strlen);
void QXmlStreamWriter_WriteStartDocument(QXmlStreamWriter* self);
void QXmlStreamWriter_WriteStartDocumentWithVersion(QXmlStreamWriter* self, const char* version, size_t version_Strlen);
void QXmlStreamWriter_WriteStartDocument2(QXmlStreamWriter* self, const char* version, size_t version_Strlen, bool standalone);
void QXmlStreamWriter_WriteStartElement(QXmlStreamWriter* self, const char* qualifiedName, size_t qualifiedName_Strlen);
void QXmlStreamWriter_WriteStartElement2(QXmlStreamWriter* self, const char* namespaceUri, size_t namespaceUri_Strlen, const char* name, size_t name_Strlen);
void QXmlStreamWriter_WriteCurrentToken(QXmlStreamWriter* self, QXmlStreamReader* reader);
bool QXmlStreamWriter_HasError(QXmlStreamWriter* self);
void QXmlStreamWriter_WriteNamespace2(QXmlStreamWriter* self, const char* namespaceUri, size_t namespaceUri_Strlen, const char* prefix, size_t prefix_Strlen);
void QXmlStreamWriter_WriteProcessingInstruction2(QXmlStreamWriter* self, const char* target, size_t target_Strlen, const char* data, size_t data_Strlen);
void QXmlStreamWriter_Delete(QXmlStreamWriter* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
