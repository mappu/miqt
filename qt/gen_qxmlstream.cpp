#include <QByteArray>
#include <QIODevice>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextCodec>
#include <QXmlStreamAttribute>
#include <QXmlStreamEntityDeclaration>
#include <QXmlStreamEntityResolver>
#include <QXmlStreamNamespaceDeclaration>
#include <QXmlStreamNotationDeclaration>
#include <QXmlStreamReader>
#include <QXmlStreamStringRef>
#include <QXmlStreamWriter>
#include "qxmlstream.h"

#include "gen_qxmlstream.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QXmlStreamStringRef* QXmlStreamStringRef_new() {
	return new QXmlStreamStringRef();
}

QXmlStreamStringRef* QXmlStreamStringRef_new2(const char* aString, size_t aString_Strlen) {
	QString aString_QString = QString::fromUtf8(aString, aString_Strlen);
	return new QXmlStreamStringRef(aString_QString);
}

QXmlStreamStringRef* QXmlStreamStringRef_new3(QXmlStreamStringRef* other) {
	return new QXmlStreamStringRef(*other);
}

void QXmlStreamStringRef_OperatorAssign(QXmlStreamStringRef* self, QXmlStreamStringRef* other) {
	self->operator=(*other);
}

void QXmlStreamStringRef_Swap(QXmlStreamStringRef* self, QXmlStreamStringRef* other) {
	self->swap(*other);
}

void QXmlStreamStringRef_Clear(QXmlStreamStringRef* self) {
	self->clear();
}

void QXmlStreamStringRef_String(QXmlStreamStringRef* self, char** _out, int* _out_Strlen) {
	const QString* ret = const_cast<const QXmlStreamStringRef*>(self)->string();
	// Convert QString pointer from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret->toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QXmlStreamStringRef_Position(QXmlStreamStringRef* self) {
	return const_cast<const QXmlStreamStringRef*>(self)->position();
}

int QXmlStreamStringRef_Size(QXmlStreamStringRef* self) {
	return const_cast<const QXmlStreamStringRef*>(self)->size();
}

void QXmlStreamStringRef_Delete(QXmlStreamStringRef* self) {
	delete self;
}

QXmlStreamAttribute* QXmlStreamAttribute_new() {
	return new QXmlStreamAttribute();
}

QXmlStreamAttribute* QXmlStreamAttribute_new2(const char* qualifiedName, size_t qualifiedName_Strlen, const char* value, size_t value_Strlen) {
	QString qualifiedName_QString = QString::fromUtf8(qualifiedName, qualifiedName_Strlen);
	QString value_QString = QString::fromUtf8(value, value_Strlen);
	return new QXmlStreamAttribute(qualifiedName_QString, value_QString);
}

QXmlStreamAttribute* QXmlStreamAttribute_new3(const char* namespaceUri, size_t namespaceUri_Strlen, const char* name, size_t name_Strlen, const char* value, size_t value_Strlen) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri, namespaceUri_Strlen);
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	QString value_QString = QString::fromUtf8(value, value_Strlen);
	return new QXmlStreamAttribute(namespaceUri_QString, name_QString, value_QString);
}

QXmlStreamAttribute* QXmlStreamAttribute_new4(QXmlStreamAttribute* param1) {
	return new QXmlStreamAttribute(*param1);
}

void QXmlStreamAttribute_OperatorAssign(QXmlStreamAttribute* self, QXmlStreamAttribute* param1) {
	self->operator=(*param1);
}

bool QXmlStreamAttribute_IsDefault(QXmlStreamAttribute* self) {
	return const_cast<const QXmlStreamAttribute*>(self)->isDefault();
}

bool QXmlStreamAttribute_OperatorEqual(QXmlStreamAttribute* self, QXmlStreamAttribute* other) {
	return const_cast<const QXmlStreamAttribute*>(self)->operator==(*other);
}

bool QXmlStreamAttribute_OperatorNotEqual(QXmlStreamAttribute* self, QXmlStreamAttribute* other) {
	return const_cast<const QXmlStreamAttribute*>(self)->operator!=(*other);
}

void QXmlStreamAttribute_Delete(QXmlStreamAttribute* self) {
	delete self;
}

QXmlStreamNamespaceDeclaration* QXmlStreamNamespaceDeclaration_new() {
	return new QXmlStreamNamespaceDeclaration();
}

QXmlStreamNamespaceDeclaration* QXmlStreamNamespaceDeclaration_new2(const char* prefix, size_t prefix_Strlen, const char* namespaceUri, size_t namespaceUri_Strlen) {
	QString prefix_QString = QString::fromUtf8(prefix, prefix_Strlen);
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri, namespaceUri_Strlen);
	return new QXmlStreamNamespaceDeclaration(prefix_QString, namespaceUri_QString);
}

QXmlStreamNamespaceDeclaration* QXmlStreamNamespaceDeclaration_new3(QXmlStreamNamespaceDeclaration* param1) {
	return new QXmlStreamNamespaceDeclaration(*param1);
}

void QXmlStreamNamespaceDeclaration_OperatorAssign(QXmlStreamNamespaceDeclaration* self, QXmlStreamNamespaceDeclaration* param1) {
	self->operator=(*param1);
}

bool QXmlStreamNamespaceDeclaration_OperatorEqual(QXmlStreamNamespaceDeclaration* self, QXmlStreamNamespaceDeclaration* other) {
	return const_cast<const QXmlStreamNamespaceDeclaration*>(self)->operator==(*other);
}

bool QXmlStreamNamespaceDeclaration_OperatorNotEqual(QXmlStreamNamespaceDeclaration* self, QXmlStreamNamespaceDeclaration* other) {
	return const_cast<const QXmlStreamNamespaceDeclaration*>(self)->operator!=(*other);
}

void QXmlStreamNamespaceDeclaration_Delete(QXmlStreamNamespaceDeclaration* self) {
	delete self;
}

QXmlStreamNotationDeclaration* QXmlStreamNotationDeclaration_new() {
	return new QXmlStreamNotationDeclaration();
}

QXmlStreamNotationDeclaration* QXmlStreamNotationDeclaration_new2(QXmlStreamNotationDeclaration* param1) {
	return new QXmlStreamNotationDeclaration(*param1);
}

void QXmlStreamNotationDeclaration_OperatorAssign(QXmlStreamNotationDeclaration* self, QXmlStreamNotationDeclaration* param1) {
	self->operator=(*param1);
}

bool QXmlStreamNotationDeclaration_OperatorEqual(QXmlStreamNotationDeclaration* self, QXmlStreamNotationDeclaration* other) {
	return const_cast<const QXmlStreamNotationDeclaration*>(self)->operator==(*other);
}

bool QXmlStreamNotationDeclaration_OperatorNotEqual(QXmlStreamNotationDeclaration* self, QXmlStreamNotationDeclaration* other) {
	return const_cast<const QXmlStreamNotationDeclaration*>(self)->operator!=(*other);
}

void QXmlStreamNotationDeclaration_Delete(QXmlStreamNotationDeclaration* self) {
	delete self;
}

QXmlStreamEntityDeclaration* QXmlStreamEntityDeclaration_new() {
	return new QXmlStreamEntityDeclaration();
}

QXmlStreamEntityDeclaration* QXmlStreamEntityDeclaration_new2(QXmlStreamEntityDeclaration* param1) {
	return new QXmlStreamEntityDeclaration(*param1);
}

void QXmlStreamEntityDeclaration_OperatorAssign(QXmlStreamEntityDeclaration* self, QXmlStreamEntityDeclaration* param1) {
	self->operator=(*param1);
}

bool QXmlStreamEntityDeclaration_OperatorEqual(QXmlStreamEntityDeclaration* self, QXmlStreamEntityDeclaration* other) {
	return const_cast<const QXmlStreamEntityDeclaration*>(self)->operator==(*other);
}

bool QXmlStreamEntityDeclaration_OperatorNotEqual(QXmlStreamEntityDeclaration* self, QXmlStreamEntityDeclaration* other) {
	return const_cast<const QXmlStreamEntityDeclaration*>(self)->operator!=(*other);
}

void QXmlStreamEntityDeclaration_Delete(QXmlStreamEntityDeclaration* self) {
	delete self;
}

void QXmlStreamEntityResolver_ResolveEntity(QXmlStreamEntityResolver* self, const char* publicId, size_t publicId_Strlen, const char* systemId, size_t systemId_Strlen, char** _out, int* _out_Strlen) {
	QString publicId_QString = QString::fromUtf8(publicId, publicId_Strlen);
	QString systemId_QString = QString::fromUtf8(systemId, systemId_Strlen);
	QString ret = self->resolveEntity(publicId_QString, systemId_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QXmlStreamEntityResolver_ResolveUndeclaredEntity(QXmlStreamEntityResolver* self, const char* name, size_t name_Strlen, char** _out, int* _out_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	QString ret = self->resolveUndeclaredEntity(name_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QXmlStreamEntityResolver_OperatorAssign(QXmlStreamEntityResolver* self, QXmlStreamEntityResolver* param1) {
	self->operator=(*param1);
}

void QXmlStreamEntityResolver_Delete(QXmlStreamEntityResolver* self) {
	delete self;
}

QXmlStreamReader* QXmlStreamReader_new() {
	return new QXmlStreamReader();
}

QXmlStreamReader* QXmlStreamReader_new2(QIODevice* device) {
	return new QXmlStreamReader(device);
}

QXmlStreamReader* QXmlStreamReader_new3(QByteArray* data) {
	return new QXmlStreamReader(*data);
}

QXmlStreamReader* QXmlStreamReader_new4(const char* data, size_t data_Strlen) {
	QString data_QString = QString::fromUtf8(data, data_Strlen);
	return new QXmlStreamReader(data_QString);
}

QXmlStreamReader* QXmlStreamReader_new5(const char* data) {
	return new QXmlStreamReader(data);
}

void QXmlStreamReader_SetDevice(QXmlStreamReader* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QXmlStreamReader_Device(QXmlStreamReader* self) {
	return const_cast<const QXmlStreamReader*>(self)->device();
}

void QXmlStreamReader_AddData(QXmlStreamReader* self, QByteArray* data) {
	self->addData(*data);
}

void QXmlStreamReader_AddDataWithData(QXmlStreamReader* self, const char* data, size_t data_Strlen) {
	QString data_QString = QString::fromUtf8(data, data_Strlen);
	self->addData(data_QString);
}

void QXmlStreamReader_AddData2(QXmlStreamReader* self, const char* data) {
	self->addData(data);
}

void QXmlStreamReader_Clear(QXmlStreamReader* self) {
	self->clear();
}

bool QXmlStreamReader_AtEnd(QXmlStreamReader* self) {
	return const_cast<const QXmlStreamReader*>(self)->atEnd();
}

uintptr_t QXmlStreamReader_ReadNext(QXmlStreamReader* self) {
	QXmlStreamReader::TokenType ret = self->readNext();
	return static_cast<uintptr_t>(ret);
}

bool QXmlStreamReader_ReadNextStartElement(QXmlStreamReader* self) {
	return self->readNextStartElement();
}

void QXmlStreamReader_SkipCurrentElement(QXmlStreamReader* self) {
	self->skipCurrentElement();
}

uintptr_t QXmlStreamReader_TokenType(QXmlStreamReader* self) {
	QXmlStreamReader::TokenType ret = const_cast<const QXmlStreamReader*>(self)->tokenType();
	return static_cast<uintptr_t>(ret);
}

void QXmlStreamReader_TokenString(QXmlStreamReader* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QXmlStreamReader*>(self)->tokenString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QXmlStreamReader_SetNamespaceProcessing(QXmlStreamReader* self, bool namespaceProcessing) {
	self->setNamespaceProcessing(namespaceProcessing);
}

bool QXmlStreamReader_NamespaceProcessing(QXmlStreamReader* self) {
	return const_cast<const QXmlStreamReader*>(self)->namespaceProcessing();
}

bool QXmlStreamReader_IsStartDocument(QXmlStreamReader* self) {
	return const_cast<const QXmlStreamReader*>(self)->isStartDocument();
}

bool QXmlStreamReader_IsEndDocument(QXmlStreamReader* self) {
	return const_cast<const QXmlStreamReader*>(self)->isEndDocument();
}

bool QXmlStreamReader_IsStartElement(QXmlStreamReader* self) {
	return const_cast<const QXmlStreamReader*>(self)->isStartElement();
}

bool QXmlStreamReader_IsEndElement(QXmlStreamReader* self) {
	return const_cast<const QXmlStreamReader*>(self)->isEndElement();
}

bool QXmlStreamReader_IsCharacters(QXmlStreamReader* self) {
	return const_cast<const QXmlStreamReader*>(self)->isCharacters();
}

bool QXmlStreamReader_IsWhitespace(QXmlStreamReader* self) {
	return const_cast<const QXmlStreamReader*>(self)->isWhitespace();
}

bool QXmlStreamReader_IsCDATA(QXmlStreamReader* self) {
	return const_cast<const QXmlStreamReader*>(self)->isCDATA();
}

bool QXmlStreamReader_IsComment(QXmlStreamReader* self) {
	return const_cast<const QXmlStreamReader*>(self)->isComment();
}

bool QXmlStreamReader_IsDTD(QXmlStreamReader* self) {
	return const_cast<const QXmlStreamReader*>(self)->isDTD();
}

bool QXmlStreamReader_IsEntityReference(QXmlStreamReader* self) {
	return const_cast<const QXmlStreamReader*>(self)->isEntityReference();
}

bool QXmlStreamReader_IsProcessingInstruction(QXmlStreamReader* self) {
	return const_cast<const QXmlStreamReader*>(self)->isProcessingInstruction();
}

bool QXmlStreamReader_IsStandaloneDocument(QXmlStreamReader* self) {
	return const_cast<const QXmlStreamReader*>(self)->isStandaloneDocument();
}

long long QXmlStreamReader_LineNumber(QXmlStreamReader* self) {
	return const_cast<const QXmlStreamReader*>(self)->lineNumber();
}

long long QXmlStreamReader_ColumnNumber(QXmlStreamReader* self) {
	return const_cast<const QXmlStreamReader*>(self)->columnNumber();
}

long long QXmlStreamReader_CharacterOffset(QXmlStreamReader* self) {
	return const_cast<const QXmlStreamReader*>(self)->characterOffset();
}

void QXmlStreamReader_ReadElementText(QXmlStreamReader* self, char** _out, int* _out_Strlen) {
	QString ret = self->readElementText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QXmlStreamReader_NamespaceDeclarations(QXmlStreamReader* self, QXmlStreamNamespaceDeclaration*** _out, size_t* _out_len) {
	QXmlStreamNamespaceDeclarations ret = const_cast<const QXmlStreamReader*>(self)->namespaceDeclarations();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QXmlStreamNamespaceDeclaration** __out = static_cast<QXmlStreamNamespaceDeclaration**>(malloc(sizeof(QXmlStreamNamespaceDeclaration**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QXmlStreamNamespaceDeclaration(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QXmlStreamReader_AddExtraNamespaceDeclaration(QXmlStreamReader* self, QXmlStreamNamespaceDeclaration* extraNamespaceDeclaraction) {
	self->addExtraNamespaceDeclaration(*extraNamespaceDeclaraction);
}

void QXmlStreamReader_AddExtraNamespaceDeclarations(QXmlStreamReader* self, QXmlStreamNamespaceDeclaration** extraNamespaceDeclaractions, size_t extraNamespaceDeclaractions_len) {
	QVector<QXmlStreamNamespaceDeclaration> extraNamespaceDeclaractions_QList;
	extraNamespaceDeclaractions_QList.reserve(extraNamespaceDeclaractions_len);
	for(size_t i = 0; i < extraNamespaceDeclaractions_len; ++i) {
		extraNamespaceDeclaractions_QList.push_back(*(extraNamespaceDeclaractions[i]));
	}
	self->addExtraNamespaceDeclarations(extraNamespaceDeclaractions_QList);
}

void QXmlStreamReader_NotationDeclarations(QXmlStreamReader* self, QXmlStreamNotationDeclaration*** _out, size_t* _out_len) {
	QXmlStreamNotationDeclarations ret = const_cast<const QXmlStreamReader*>(self)->notationDeclarations();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QXmlStreamNotationDeclaration** __out = static_cast<QXmlStreamNotationDeclaration**>(malloc(sizeof(QXmlStreamNotationDeclaration**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QXmlStreamNotationDeclaration(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QXmlStreamReader_EntityDeclarations(QXmlStreamReader* self, QXmlStreamEntityDeclaration*** _out, size_t* _out_len) {
	QXmlStreamEntityDeclarations ret = const_cast<const QXmlStreamReader*>(self)->entityDeclarations();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QXmlStreamEntityDeclaration** __out = static_cast<QXmlStreamEntityDeclaration**>(malloc(sizeof(QXmlStreamEntityDeclaration**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QXmlStreamEntityDeclaration(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

int QXmlStreamReader_EntityExpansionLimit(QXmlStreamReader* self) {
	return const_cast<const QXmlStreamReader*>(self)->entityExpansionLimit();
}

void QXmlStreamReader_SetEntityExpansionLimit(QXmlStreamReader* self, int limit) {
	self->setEntityExpansionLimit(static_cast<int>(limit));
}

void QXmlStreamReader_RaiseError(QXmlStreamReader* self) {
	self->raiseError();
}

void QXmlStreamReader_ErrorString(QXmlStreamReader* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QXmlStreamReader*>(self)->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

uintptr_t QXmlStreamReader_Error(QXmlStreamReader* self) {
	QXmlStreamReader::Error ret = const_cast<const QXmlStreamReader*>(self)->error();
	return static_cast<uintptr_t>(ret);
}

bool QXmlStreamReader_HasError(QXmlStreamReader* self) {
	return const_cast<const QXmlStreamReader*>(self)->hasError();
}

void QXmlStreamReader_SetEntityResolver(QXmlStreamReader* self, QXmlStreamEntityResolver* resolver) {
	self->setEntityResolver(resolver);
}

QXmlStreamEntityResolver* QXmlStreamReader_EntityResolver(QXmlStreamReader* self) {
	return const_cast<const QXmlStreamReader*>(self)->entityResolver();
}

void QXmlStreamReader_ReadElementText1(QXmlStreamReader* self, uintptr_t behaviour, char** _out, int* _out_Strlen) {
	QString ret = self->readElementText(static_cast<QXmlStreamReader::ReadElementTextBehaviour>(behaviour));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QXmlStreamReader_RaiseError1(QXmlStreamReader* self, const char* message, size_t message_Strlen) {
	QString message_QString = QString::fromUtf8(message, message_Strlen);
	self->raiseError(message_QString);
}

void QXmlStreamReader_Delete(QXmlStreamReader* self) {
	delete self;
}

QXmlStreamWriter* QXmlStreamWriter_new() {
	return new QXmlStreamWriter();
}

QXmlStreamWriter* QXmlStreamWriter_new2(QIODevice* device) {
	return new QXmlStreamWriter(device);
}

QXmlStreamWriter* QXmlStreamWriter_new3(QByteArray* array) {
	return new QXmlStreamWriter(array);
}

void QXmlStreamWriter_SetDevice(QXmlStreamWriter* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QXmlStreamWriter_Device(QXmlStreamWriter* self) {
	return const_cast<const QXmlStreamWriter*>(self)->device();
}

void QXmlStreamWriter_SetCodec(QXmlStreamWriter* self, QTextCodec* codec) {
	self->setCodec(codec);
}

void QXmlStreamWriter_SetCodecWithCodecName(QXmlStreamWriter* self, const char* codecName) {
	self->setCodec(codecName);
}

QTextCodec* QXmlStreamWriter_Codec(QXmlStreamWriter* self) {
	return const_cast<const QXmlStreamWriter*>(self)->codec();
}

void QXmlStreamWriter_SetAutoFormatting(QXmlStreamWriter* self, bool autoFormatting) {
	self->setAutoFormatting(autoFormatting);
}

bool QXmlStreamWriter_AutoFormatting(QXmlStreamWriter* self) {
	return const_cast<const QXmlStreamWriter*>(self)->autoFormatting();
}

void QXmlStreamWriter_SetAutoFormattingIndent(QXmlStreamWriter* self, int spacesOrTabs) {
	self->setAutoFormattingIndent(static_cast<int>(spacesOrTabs));
}

int QXmlStreamWriter_AutoFormattingIndent(QXmlStreamWriter* self) {
	return const_cast<const QXmlStreamWriter*>(self)->autoFormattingIndent();
}

void QXmlStreamWriter_WriteAttribute(QXmlStreamWriter* self, const char* qualifiedName, size_t qualifiedName_Strlen, const char* value, size_t value_Strlen) {
	QString qualifiedName_QString = QString::fromUtf8(qualifiedName, qualifiedName_Strlen);
	QString value_QString = QString::fromUtf8(value, value_Strlen);
	self->writeAttribute(qualifiedName_QString, value_QString);
}

void QXmlStreamWriter_WriteAttribute2(QXmlStreamWriter* self, const char* namespaceUri, size_t namespaceUri_Strlen, const char* name, size_t name_Strlen, const char* value, size_t value_Strlen) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri, namespaceUri_Strlen);
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	QString value_QString = QString::fromUtf8(value, value_Strlen);
	self->writeAttribute(namespaceUri_QString, name_QString, value_QString);
}

void QXmlStreamWriter_WriteAttributeWithAttribute(QXmlStreamWriter* self, QXmlStreamAttribute* attribute) {
	self->writeAttribute(*attribute);
}

void QXmlStreamWriter_WriteCDATA(QXmlStreamWriter* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->writeCDATA(text_QString);
}

void QXmlStreamWriter_WriteCharacters(QXmlStreamWriter* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->writeCharacters(text_QString);
}

void QXmlStreamWriter_WriteComment(QXmlStreamWriter* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->writeComment(text_QString);
}

void QXmlStreamWriter_WriteDTD(QXmlStreamWriter* self, const char* dtd, size_t dtd_Strlen) {
	QString dtd_QString = QString::fromUtf8(dtd, dtd_Strlen);
	self->writeDTD(dtd_QString);
}

void QXmlStreamWriter_WriteEmptyElement(QXmlStreamWriter* self, const char* qualifiedName, size_t qualifiedName_Strlen) {
	QString qualifiedName_QString = QString::fromUtf8(qualifiedName, qualifiedName_Strlen);
	self->writeEmptyElement(qualifiedName_QString);
}

void QXmlStreamWriter_WriteEmptyElement2(QXmlStreamWriter* self, const char* namespaceUri, size_t namespaceUri_Strlen, const char* name, size_t name_Strlen) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri, namespaceUri_Strlen);
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	self->writeEmptyElement(namespaceUri_QString, name_QString);
}

void QXmlStreamWriter_WriteTextElement(QXmlStreamWriter* self, const char* qualifiedName, size_t qualifiedName_Strlen, const char* text, size_t text_Strlen) {
	QString qualifiedName_QString = QString::fromUtf8(qualifiedName, qualifiedName_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->writeTextElement(qualifiedName_QString, text_QString);
}

void QXmlStreamWriter_WriteTextElement2(QXmlStreamWriter* self, const char* namespaceUri, size_t namespaceUri_Strlen, const char* name, size_t name_Strlen, const char* text, size_t text_Strlen) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri, namespaceUri_Strlen);
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->writeTextElement(namespaceUri_QString, name_QString, text_QString);
}

void QXmlStreamWriter_WriteEndDocument(QXmlStreamWriter* self) {
	self->writeEndDocument();
}

void QXmlStreamWriter_WriteEndElement(QXmlStreamWriter* self) {
	self->writeEndElement();
}

void QXmlStreamWriter_WriteEntityReference(QXmlStreamWriter* self, const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	self->writeEntityReference(name_QString);
}

void QXmlStreamWriter_WriteNamespace(QXmlStreamWriter* self, const char* namespaceUri, size_t namespaceUri_Strlen) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri, namespaceUri_Strlen);
	self->writeNamespace(namespaceUri_QString);
}

void QXmlStreamWriter_WriteDefaultNamespace(QXmlStreamWriter* self, const char* namespaceUri, size_t namespaceUri_Strlen) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri, namespaceUri_Strlen);
	self->writeDefaultNamespace(namespaceUri_QString);
}

void QXmlStreamWriter_WriteProcessingInstruction(QXmlStreamWriter* self, const char* target, size_t target_Strlen) {
	QString target_QString = QString::fromUtf8(target, target_Strlen);
	self->writeProcessingInstruction(target_QString);
}

void QXmlStreamWriter_WriteStartDocument(QXmlStreamWriter* self) {
	self->writeStartDocument();
}

void QXmlStreamWriter_WriteStartDocumentWithVersion(QXmlStreamWriter* self, const char* version, size_t version_Strlen) {
	QString version_QString = QString::fromUtf8(version, version_Strlen);
	self->writeStartDocument(version_QString);
}

void QXmlStreamWriter_WriteStartDocument2(QXmlStreamWriter* self, const char* version, size_t version_Strlen, bool standalone) {
	QString version_QString = QString::fromUtf8(version, version_Strlen);
	self->writeStartDocument(version_QString, standalone);
}

void QXmlStreamWriter_WriteStartElement(QXmlStreamWriter* self, const char* qualifiedName, size_t qualifiedName_Strlen) {
	QString qualifiedName_QString = QString::fromUtf8(qualifiedName, qualifiedName_Strlen);
	self->writeStartElement(qualifiedName_QString);
}

void QXmlStreamWriter_WriteStartElement2(QXmlStreamWriter* self, const char* namespaceUri, size_t namespaceUri_Strlen, const char* name, size_t name_Strlen) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri, namespaceUri_Strlen);
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	self->writeStartElement(namespaceUri_QString, name_QString);
}

void QXmlStreamWriter_WriteCurrentToken(QXmlStreamWriter* self, QXmlStreamReader* reader) {
	self->writeCurrentToken(*reader);
}

bool QXmlStreamWriter_HasError(QXmlStreamWriter* self) {
	return const_cast<const QXmlStreamWriter*>(self)->hasError();
}

void QXmlStreamWriter_WriteNamespace2(QXmlStreamWriter* self, const char* namespaceUri, size_t namespaceUri_Strlen, const char* prefix, size_t prefix_Strlen) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri, namespaceUri_Strlen);
	QString prefix_QString = QString::fromUtf8(prefix, prefix_Strlen);
	self->writeNamespace(namespaceUri_QString, prefix_QString);
}

void QXmlStreamWriter_WriteProcessingInstruction2(QXmlStreamWriter* self, const char* target, size_t target_Strlen, const char* data, size_t data_Strlen) {
	QString target_QString = QString::fromUtf8(target, target_Strlen);
	QString data_QString = QString::fromUtf8(data, data_Strlen);
	self->writeProcessingInstruction(target_QString, data_QString);
}

void QXmlStreamWriter_Delete(QXmlStreamWriter* self) {
	delete self;
}

