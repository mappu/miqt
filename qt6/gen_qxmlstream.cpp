#include <QByteArray>
#include <QIODevice>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QXmlStreamAttribute>
#include <QXmlStreamEntityDeclaration>
#include <QXmlStreamEntityResolver>
#include <QXmlStreamNamespaceDeclaration>
#include <QXmlStreamNotationDeclaration>
#include <QXmlStreamReader>
#include <QXmlStreamWriter>
#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__QXmlString
#include <qxmlstream.h>
#include "gen_qxmlstream.h"
#include "_cgo_export.h"

void QtPrivate__QXmlString_new(struct miqt_string s, QtPrivate__QXmlString** outptr_QtPrivate__QXmlString) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	QtPrivate::QXmlString* ret = new QtPrivate::QXmlString(s_QString);
	*outptr_QtPrivate__QXmlString = ret;
}

void QtPrivate__QXmlString_new2(QtPrivate__QXmlString** outptr_QtPrivate__QXmlString) {
	QtPrivate::QXmlString* ret = new QtPrivate::QXmlString();
	*outptr_QtPrivate__QXmlString = ret;
}

void QtPrivate__QXmlString_OperatorAssign(QtPrivate__QXmlString* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	self->operator=(s_QString);
}

ptrdiff_t QtPrivate__QXmlString_Size(const QtPrivate__QXmlString* self) {
	qsizetype _ret = self->size();
	return static_cast<ptrdiff_t>(_ret);
}

void QtPrivate__QXmlString_Delete(QtPrivate__QXmlString* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QtPrivate::QXmlString*>( self );
	} else {
		delete self;
	}
}

void QXmlStreamAttribute_new(QXmlStreamAttribute** outptr_QXmlStreamAttribute) {
	QXmlStreamAttribute* ret = new QXmlStreamAttribute();
	*outptr_QXmlStreamAttribute = ret;
}

void QXmlStreamAttribute_new2(struct miqt_string qualifiedName, struct miqt_string value, QXmlStreamAttribute** outptr_QXmlStreamAttribute) {
	QString qualifiedName_QString = QString::fromUtf8(qualifiedName.data, qualifiedName.len);
	QString value_QString = QString::fromUtf8(value.data, value.len);
	QXmlStreamAttribute* ret = new QXmlStreamAttribute(qualifiedName_QString, value_QString);
	*outptr_QXmlStreamAttribute = ret;
}

void QXmlStreamAttribute_new3(struct miqt_string namespaceUri, struct miqt_string name, struct miqt_string value, QXmlStreamAttribute** outptr_QXmlStreamAttribute) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString value_QString = QString::fromUtf8(value.data, value.len);
	QXmlStreamAttribute* ret = new QXmlStreamAttribute(namespaceUri_QString, name_QString, value_QString);
	*outptr_QXmlStreamAttribute = ret;
}

void QXmlStreamAttribute_new4(QXmlStreamAttribute* param1, QXmlStreamAttribute** outptr_QXmlStreamAttribute) {
	QXmlStreamAttribute* ret = new QXmlStreamAttribute(*param1);
	*outptr_QXmlStreamAttribute = ret;
}

bool QXmlStreamAttribute_IsDefault(const QXmlStreamAttribute* self) {
	return self->isDefault();
}

bool QXmlStreamAttribute_OperatorEqual(const QXmlStreamAttribute* self, QXmlStreamAttribute* other) {
	return self->operator==(*other);
}

bool QXmlStreamAttribute_OperatorNotEqual(const QXmlStreamAttribute* self, QXmlStreamAttribute* other) {
	return self->operator!=(*other);
}

void QXmlStreamAttribute_OperatorAssign(QXmlStreamAttribute* self, QXmlStreamAttribute* param1) {
	self->operator=(*param1);
}

void QXmlStreamAttribute_Delete(QXmlStreamAttribute* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QXmlStreamAttribute*>( self );
	} else {
		delete self;
	}
}

void QXmlStreamNamespaceDeclaration_new(QXmlStreamNamespaceDeclaration** outptr_QXmlStreamNamespaceDeclaration) {
	QXmlStreamNamespaceDeclaration* ret = new QXmlStreamNamespaceDeclaration();
	*outptr_QXmlStreamNamespaceDeclaration = ret;
}

void QXmlStreamNamespaceDeclaration_new2(struct miqt_string prefix, struct miqt_string namespaceUri, QXmlStreamNamespaceDeclaration** outptr_QXmlStreamNamespaceDeclaration) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
	QXmlStreamNamespaceDeclaration* ret = new QXmlStreamNamespaceDeclaration(prefix_QString, namespaceUri_QString);
	*outptr_QXmlStreamNamespaceDeclaration = ret;
}

bool QXmlStreamNamespaceDeclaration_OperatorEqual(const QXmlStreamNamespaceDeclaration* self, QXmlStreamNamespaceDeclaration* other) {
	return self->operator==(*other);
}

bool QXmlStreamNamespaceDeclaration_OperatorNotEqual(const QXmlStreamNamespaceDeclaration* self, QXmlStreamNamespaceDeclaration* other) {
	return self->operator!=(*other);
}

void QXmlStreamNamespaceDeclaration_Delete(QXmlStreamNamespaceDeclaration* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QXmlStreamNamespaceDeclaration*>( self );
	} else {
		delete self;
	}
}

void QXmlStreamNotationDeclaration_new(QXmlStreamNotationDeclaration** outptr_QXmlStreamNotationDeclaration) {
	QXmlStreamNotationDeclaration* ret = new QXmlStreamNotationDeclaration();
	*outptr_QXmlStreamNotationDeclaration = ret;
}

bool QXmlStreamNotationDeclaration_OperatorEqual(const QXmlStreamNotationDeclaration* self, QXmlStreamNotationDeclaration* other) {
	return self->operator==(*other);
}

bool QXmlStreamNotationDeclaration_OperatorNotEqual(const QXmlStreamNotationDeclaration* self, QXmlStreamNotationDeclaration* other) {
	return self->operator!=(*other);
}

void QXmlStreamNotationDeclaration_Delete(QXmlStreamNotationDeclaration* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QXmlStreamNotationDeclaration*>( self );
	} else {
		delete self;
	}
}

void QXmlStreamEntityDeclaration_new(QXmlStreamEntityDeclaration** outptr_QXmlStreamEntityDeclaration) {
	QXmlStreamEntityDeclaration* ret = new QXmlStreamEntityDeclaration();
	*outptr_QXmlStreamEntityDeclaration = ret;
}

bool QXmlStreamEntityDeclaration_OperatorEqual(const QXmlStreamEntityDeclaration* self, QXmlStreamEntityDeclaration* other) {
	return self->operator==(*other);
}

bool QXmlStreamEntityDeclaration_OperatorNotEqual(const QXmlStreamEntityDeclaration* self, QXmlStreamEntityDeclaration* other) {
	return self->operator!=(*other);
}

void QXmlStreamEntityDeclaration_Delete(QXmlStreamEntityDeclaration* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QXmlStreamEntityDeclaration*>( self );
	} else {
		delete self;
	}
}

struct miqt_string QXmlStreamEntityResolver_ResolveEntity(QXmlStreamEntityResolver* self, struct miqt_string publicId, struct miqt_string systemId) {
	QString publicId_QString = QString::fromUtf8(publicId.data, publicId.len);
	QString systemId_QString = QString::fromUtf8(systemId.data, systemId.len);
	QString _ret = self->resolveEntity(publicId_QString, systemId_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QXmlStreamEntityResolver_ResolveUndeclaredEntity(QXmlStreamEntityResolver* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString _ret = self->resolveUndeclaredEntity(name_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QXmlStreamEntityResolver_OperatorAssign(QXmlStreamEntityResolver* self, QXmlStreamEntityResolver* param1) {
	self->operator=(*param1);
}

void QXmlStreamEntityResolver_Delete(QXmlStreamEntityResolver* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QXmlStreamEntityResolver*>( self );
	} else {
		delete self;
	}
}

void QXmlStreamReader_new(QXmlStreamReader** outptr_QXmlStreamReader) {
	QXmlStreamReader* ret = new QXmlStreamReader();
	*outptr_QXmlStreamReader = ret;
}

void QXmlStreamReader_new2(QIODevice* device, QXmlStreamReader** outptr_QXmlStreamReader) {
	QXmlStreamReader* ret = new QXmlStreamReader(device);
	*outptr_QXmlStreamReader = ret;
}

void QXmlStreamReader_new3(struct miqt_string data, QXmlStreamReader** outptr_QXmlStreamReader) {
	QByteArray data_QByteArray(data.data, data.len);
	QXmlStreamReader* ret = new QXmlStreamReader(data_QByteArray);
	*outptr_QXmlStreamReader = ret;
}

void QXmlStreamReader_new4(struct miqt_string data, QXmlStreamReader** outptr_QXmlStreamReader) {
	QString data_QString = QString::fromUtf8(data.data, data.len);
	QXmlStreamReader* ret = new QXmlStreamReader(data_QString);
	*outptr_QXmlStreamReader = ret;
}

void QXmlStreamReader_new5(const char* data, QXmlStreamReader** outptr_QXmlStreamReader) {
	QXmlStreamReader* ret = new QXmlStreamReader(data);
	*outptr_QXmlStreamReader = ret;
}

void QXmlStreamReader_SetDevice(QXmlStreamReader* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QXmlStreamReader_Device(const QXmlStreamReader* self) {
	return self->device();
}

void QXmlStreamReader_AddData(QXmlStreamReader* self, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	self->addData(data_QByteArray);
}

void QXmlStreamReader_AddDataWithData(QXmlStreamReader* self, struct miqt_string data) {
	QString data_QString = QString::fromUtf8(data.data, data.len);
	self->addData(data_QString);
}

void QXmlStreamReader_AddData2(QXmlStreamReader* self, const char* data) {
	self->addData(data);
}

void QXmlStreamReader_Clear(QXmlStreamReader* self) {
	self->clear();
}

bool QXmlStreamReader_AtEnd(const QXmlStreamReader* self) {
	return self->atEnd();
}

int QXmlStreamReader_ReadNext(QXmlStreamReader* self) {
	QXmlStreamReader::TokenType _ret = self->readNext();
	return static_cast<int>(_ret);
}

bool QXmlStreamReader_ReadNextStartElement(QXmlStreamReader* self) {
	return self->readNextStartElement();
}

void QXmlStreamReader_SkipCurrentElement(QXmlStreamReader* self) {
	self->skipCurrentElement();
}

int QXmlStreamReader_TokenType(const QXmlStreamReader* self) {
	QXmlStreamReader::TokenType _ret = self->tokenType();
	return static_cast<int>(_ret);
}

struct miqt_string QXmlStreamReader_TokenString(const QXmlStreamReader* self) {
	QString _ret = self->tokenString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QXmlStreamReader_SetNamespaceProcessing(QXmlStreamReader* self, bool namespaceProcessing) {
	self->setNamespaceProcessing(namespaceProcessing);
}

bool QXmlStreamReader_NamespaceProcessing(const QXmlStreamReader* self) {
	return self->namespaceProcessing();
}

bool QXmlStreamReader_IsStartDocument(const QXmlStreamReader* self) {
	return self->isStartDocument();
}

bool QXmlStreamReader_IsEndDocument(const QXmlStreamReader* self) {
	return self->isEndDocument();
}

bool QXmlStreamReader_IsStartElement(const QXmlStreamReader* self) {
	return self->isStartElement();
}

bool QXmlStreamReader_IsEndElement(const QXmlStreamReader* self) {
	return self->isEndElement();
}

bool QXmlStreamReader_IsCharacters(const QXmlStreamReader* self) {
	return self->isCharacters();
}

bool QXmlStreamReader_IsWhitespace(const QXmlStreamReader* self) {
	return self->isWhitespace();
}

bool QXmlStreamReader_IsCDATA(const QXmlStreamReader* self) {
	return self->isCDATA();
}

bool QXmlStreamReader_IsComment(const QXmlStreamReader* self) {
	return self->isComment();
}

bool QXmlStreamReader_IsDTD(const QXmlStreamReader* self) {
	return self->isDTD();
}

bool QXmlStreamReader_IsEntityReference(const QXmlStreamReader* self) {
	return self->isEntityReference();
}

bool QXmlStreamReader_IsProcessingInstruction(const QXmlStreamReader* self) {
	return self->isProcessingInstruction();
}

bool QXmlStreamReader_IsStandaloneDocument(const QXmlStreamReader* self) {
	return self->isStandaloneDocument();
}

long long QXmlStreamReader_LineNumber(const QXmlStreamReader* self) {
	qint64 _ret = self->lineNumber();
	return static_cast<long long>(_ret);
}

long long QXmlStreamReader_ColumnNumber(const QXmlStreamReader* self) {
	qint64 _ret = self->columnNumber();
	return static_cast<long long>(_ret);
}

long long QXmlStreamReader_CharacterOffset(const QXmlStreamReader* self) {
	qint64 _ret = self->characterOffset();
	return static_cast<long long>(_ret);
}

struct miqt_string QXmlStreamReader_ReadElementText(QXmlStreamReader* self) {
	QString _ret = self->readElementText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QXmlStreamNamespaceDeclaration* */  QXmlStreamReader_NamespaceDeclarations(const QXmlStreamReader* self) {
	QXmlStreamNamespaceDeclarations _ret = self->namespaceDeclarations();
	// Convert QList<> from C++ memory to manually-managed C memory
	QXmlStreamNamespaceDeclaration** _arr = static_cast<QXmlStreamNamespaceDeclaration**>(malloc(sizeof(QXmlStreamNamespaceDeclaration*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QXmlStreamNamespaceDeclaration(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QXmlStreamReader_AddExtraNamespaceDeclaration(QXmlStreamReader* self, QXmlStreamNamespaceDeclaration* extraNamespaceDeclaraction) {
	self->addExtraNamespaceDeclaration(*extraNamespaceDeclaraction);
}

void QXmlStreamReader_AddExtraNamespaceDeclarations(QXmlStreamReader* self, struct miqt_array /* of QXmlStreamNamespaceDeclaration* */  extraNamespaceDeclaractions) {
	QXmlStreamNamespaceDeclarations extraNamespaceDeclaractions_QList;
	extraNamespaceDeclaractions_QList.reserve(extraNamespaceDeclaractions.len);
	QXmlStreamNamespaceDeclaration** extraNamespaceDeclaractions_arr = static_cast<QXmlStreamNamespaceDeclaration**>(extraNamespaceDeclaractions.data);
	for(size_t i = 0; i < extraNamespaceDeclaractions.len; ++i) {
		extraNamespaceDeclaractions_QList.push_back(*(extraNamespaceDeclaractions_arr[i]));
	}
	self->addExtraNamespaceDeclarations(extraNamespaceDeclaractions_QList);
}

struct miqt_array /* of QXmlStreamNotationDeclaration* */  QXmlStreamReader_NotationDeclarations(const QXmlStreamReader* self) {
	QXmlStreamNotationDeclarations _ret = self->notationDeclarations();
	// Convert QList<> from C++ memory to manually-managed C memory
	QXmlStreamNotationDeclaration** _arr = static_cast<QXmlStreamNotationDeclaration**>(malloc(sizeof(QXmlStreamNotationDeclaration*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QXmlStreamNotationDeclaration(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QXmlStreamEntityDeclaration* */  QXmlStreamReader_EntityDeclarations(const QXmlStreamReader* self) {
	QXmlStreamEntityDeclarations _ret = self->entityDeclarations();
	// Convert QList<> from C++ memory to manually-managed C memory
	QXmlStreamEntityDeclaration** _arr = static_cast<QXmlStreamEntityDeclaration**>(malloc(sizeof(QXmlStreamEntityDeclaration*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QXmlStreamEntityDeclaration(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QXmlStreamReader_EntityExpansionLimit(const QXmlStreamReader* self) {
	return self->entityExpansionLimit();
}

void QXmlStreamReader_SetEntityExpansionLimit(QXmlStreamReader* self, int limit) {
	self->setEntityExpansionLimit(static_cast<int>(limit));
}

void QXmlStreamReader_RaiseError(QXmlStreamReader* self) {
	self->raiseError();
}

struct miqt_string QXmlStreamReader_ErrorString(const QXmlStreamReader* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QXmlStreamReader_Error(const QXmlStreamReader* self) {
	QXmlStreamReader::Error _ret = self->error();
	return static_cast<int>(_ret);
}

bool QXmlStreamReader_HasError(const QXmlStreamReader* self) {
	return self->hasError();
}

void QXmlStreamReader_SetEntityResolver(QXmlStreamReader* self, QXmlStreamEntityResolver* resolver) {
	self->setEntityResolver(resolver);
}

QXmlStreamEntityResolver* QXmlStreamReader_EntityResolver(const QXmlStreamReader* self) {
	return self->entityResolver();
}

struct miqt_string QXmlStreamReader_ReadElementText1(QXmlStreamReader* self, int behaviour) {
	QString _ret = self->readElementText(static_cast<QXmlStreamReader::ReadElementTextBehaviour>(behaviour));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QXmlStreamReader_RaiseError1(QXmlStreamReader* self, struct miqt_string message) {
	QString message_QString = QString::fromUtf8(message.data, message.len);
	self->raiseError(message_QString);
}

void QXmlStreamReader_Delete(QXmlStreamReader* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QXmlStreamReader*>( self );
	} else {
		delete self;
	}
}

void QXmlStreamWriter_new(QXmlStreamWriter** outptr_QXmlStreamWriter) {
	QXmlStreamWriter* ret = new QXmlStreamWriter();
	*outptr_QXmlStreamWriter = ret;
}

void QXmlStreamWriter_new2(QIODevice* device, QXmlStreamWriter** outptr_QXmlStreamWriter) {
	QXmlStreamWriter* ret = new QXmlStreamWriter(device);
	*outptr_QXmlStreamWriter = ret;
}

void QXmlStreamWriter_SetDevice(QXmlStreamWriter* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QXmlStreamWriter_Device(const QXmlStreamWriter* self) {
	return self->device();
}

void QXmlStreamWriter_SetAutoFormatting(QXmlStreamWriter* self, bool autoFormatting) {
	self->setAutoFormatting(autoFormatting);
}

bool QXmlStreamWriter_AutoFormatting(const QXmlStreamWriter* self) {
	return self->autoFormatting();
}

void QXmlStreamWriter_SetAutoFormattingIndent(QXmlStreamWriter* self, int spacesOrTabs) {
	self->setAutoFormattingIndent(static_cast<int>(spacesOrTabs));
}

int QXmlStreamWriter_AutoFormattingIndent(const QXmlStreamWriter* self) {
	return self->autoFormattingIndent();
}

void QXmlStreamWriter_WriteAttribute(QXmlStreamWriter* self, struct miqt_string qualifiedName, struct miqt_string value) {
	QString qualifiedName_QString = QString::fromUtf8(qualifiedName.data, qualifiedName.len);
	QString value_QString = QString::fromUtf8(value.data, value.len);
	self->writeAttribute(qualifiedName_QString, value_QString);
}

void QXmlStreamWriter_WriteAttribute2(QXmlStreamWriter* self, struct miqt_string namespaceUri, struct miqt_string name, struct miqt_string value) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString value_QString = QString::fromUtf8(value.data, value.len);
	self->writeAttribute(namespaceUri_QString, name_QString, value_QString);
}

void QXmlStreamWriter_WriteAttributeWithAttribute(QXmlStreamWriter* self, QXmlStreamAttribute* attribute) {
	self->writeAttribute(*attribute);
}

void QXmlStreamWriter_WriteCDATA(QXmlStreamWriter* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->writeCDATA(text_QString);
}

void QXmlStreamWriter_WriteCharacters(QXmlStreamWriter* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->writeCharacters(text_QString);
}

void QXmlStreamWriter_WriteComment(QXmlStreamWriter* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->writeComment(text_QString);
}

void QXmlStreamWriter_WriteDTD(QXmlStreamWriter* self, struct miqt_string dtd) {
	QString dtd_QString = QString::fromUtf8(dtd.data, dtd.len);
	self->writeDTD(dtd_QString);
}

void QXmlStreamWriter_WriteEmptyElement(QXmlStreamWriter* self, struct miqt_string qualifiedName) {
	QString qualifiedName_QString = QString::fromUtf8(qualifiedName.data, qualifiedName.len);
	self->writeEmptyElement(qualifiedName_QString);
}

void QXmlStreamWriter_WriteEmptyElement2(QXmlStreamWriter* self, struct miqt_string namespaceUri, struct miqt_string name) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->writeEmptyElement(namespaceUri_QString, name_QString);
}

void QXmlStreamWriter_WriteTextElement(QXmlStreamWriter* self, struct miqt_string qualifiedName, struct miqt_string text) {
	QString qualifiedName_QString = QString::fromUtf8(qualifiedName.data, qualifiedName.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->writeTextElement(qualifiedName_QString, text_QString);
}

void QXmlStreamWriter_WriteTextElement2(QXmlStreamWriter* self, struct miqt_string namespaceUri, struct miqt_string name, struct miqt_string text) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->writeTextElement(namespaceUri_QString, name_QString, text_QString);
}

void QXmlStreamWriter_WriteEndDocument(QXmlStreamWriter* self) {
	self->writeEndDocument();
}

void QXmlStreamWriter_WriteEndElement(QXmlStreamWriter* self) {
	self->writeEndElement();
}

void QXmlStreamWriter_WriteEntityReference(QXmlStreamWriter* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->writeEntityReference(name_QString);
}

void QXmlStreamWriter_WriteNamespace(QXmlStreamWriter* self, struct miqt_string namespaceUri) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
	self->writeNamespace(namespaceUri_QString);
}

void QXmlStreamWriter_WriteDefaultNamespace(QXmlStreamWriter* self, struct miqt_string namespaceUri) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
	self->writeDefaultNamespace(namespaceUri_QString);
}

void QXmlStreamWriter_WriteProcessingInstruction(QXmlStreamWriter* self, struct miqt_string target) {
	QString target_QString = QString::fromUtf8(target.data, target.len);
	self->writeProcessingInstruction(target_QString);
}

void QXmlStreamWriter_WriteStartDocument(QXmlStreamWriter* self) {
	self->writeStartDocument();
}

void QXmlStreamWriter_WriteStartDocumentWithVersion(QXmlStreamWriter* self, struct miqt_string version) {
	QString version_QString = QString::fromUtf8(version.data, version.len);
	self->writeStartDocument(version_QString);
}

void QXmlStreamWriter_WriteStartDocument2(QXmlStreamWriter* self, struct miqt_string version, bool standalone) {
	QString version_QString = QString::fromUtf8(version.data, version.len);
	self->writeStartDocument(version_QString, standalone);
}

void QXmlStreamWriter_WriteStartElement(QXmlStreamWriter* self, struct miqt_string qualifiedName) {
	QString qualifiedName_QString = QString::fromUtf8(qualifiedName.data, qualifiedName.len);
	self->writeStartElement(qualifiedName_QString);
}

void QXmlStreamWriter_WriteStartElement2(QXmlStreamWriter* self, struct miqt_string namespaceUri, struct miqt_string name) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->writeStartElement(namespaceUri_QString, name_QString);
}

void QXmlStreamWriter_WriteCurrentToken(QXmlStreamWriter* self, QXmlStreamReader* reader) {
	self->writeCurrentToken(*reader);
}

bool QXmlStreamWriter_HasError(const QXmlStreamWriter* self) {
	return self->hasError();
}

void QXmlStreamWriter_WriteNamespace2(QXmlStreamWriter* self, struct miqt_string namespaceUri, struct miqt_string prefix) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	self->writeNamespace(namespaceUri_QString, prefix_QString);
}

void QXmlStreamWriter_WriteProcessingInstruction2(QXmlStreamWriter* self, struct miqt_string target, struct miqt_string data) {
	QString target_QString = QString::fromUtf8(target.data, target.len);
	QString data_QString = QString::fromUtf8(data.data, data.len);
	self->writeProcessingInstruction(target_QString, data_QString);
}

void QXmlStreamWriter_Delete(QXmlStreamWriter* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QXmlStreamWriter*>( self );
	} else {
		delete self;
	}
}

