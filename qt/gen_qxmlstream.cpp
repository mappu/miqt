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
#include <qxmlstream.h>
#include "gen_qxmlstream.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QXmlStreamStringRef* QXmlStreamStringRef_new() {
	return new QXmlStreamStringRef();
}

QXmlStreamStringRef* QXmlStreamStringRef_new2(struct miqt_string aString) {
	QString aString_QString = QString::fromUtf8(aString.data, aString.len);
	return new QXmlStreamStringRef(aString_QString);
}

QXmlStreamStringRef* QXmlStreamStringRef_new3(QXmlStreamStringRef* other) {
	return new QXmlStreamStringRef(*other);
}

void QXmlStreamStringRef_operatorAssign(QXmlStreamStringRef* self, QXmlStreamStringRef* other) {
	self->operator=(*other);
}

void QXmlStreamStringRef_swap(QXmlStreamStringRef* self, QXmlStreamStringRef* other) {
	self->swap(*other);
}

void QXmlStreamStringRef_clear(QXmlStreamStringRef* self) {
	self->clear();
}

struct miqt_string QXmlStreamStringRef_string(const QXmlStreamStringRef* self) {
	const QString* _ret = self->string();
	// Convert QString pointer from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret->toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QXmlStreamStringRef_position(const QXmlStreamStringRef* self) {
	return self->position();
}

int QXmlStreamStringRef_size(const QXmlStreamStringRef* self) {
	return self->size();
}

void QXmlStreamStringRef_delete(QXmlStreamStringRef* self) {
	delete self;
}

QXmlStreamAttribute* QXmlStreamAttribute_new() {
	return new QXmlStreamAttribute();
}

QXmlStreamAttribute* QXmlStreamAttribute_new2(struct miqt_string qualifiedName, struct miqt_string value) {
	QString qualifiedName_QString = QString::fromUtf8(qualifiedName.data, qualifiedName.len);
	QString value_QString = QString::fromUtf8(value.data, value.len);
	return new QXmlStreamAttribute(qualifiedName_QString, value_QString);
}

QXmlStreamAttribute* QXmlStreamAttribute_new3(struct miqt_string namespaceUri, struct miqt_string name, struct miqt_string value) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString value_QString = QString::fromUtf8(value.data, value.len);
	return new QXmlStreamAttribute(namespaceUri_QString, name_QString, value_QString);
}

QXmlStreamAttribute* QXmlStreamAttribute_new4(QXmlStreamAttribute* param1) {
	return new QXmlStreamAttribute(*param1);
}

void QXmlStreamAttribute_operatorAssign(QXmlStreamAttribute* self, QXmlStreamAttribute* param1) {
	self->operator=(*param1);
}

bool QXmlStreamAttribute_isDefault(const QXmlStreamAttribute* self) {
	return self->isDefault();
}

bool QXmlStreamAttribute_operatorEqual(const QXmlStreamAttribute* self, QXmlStreamAttribute* other) {
	return (*self == *other);
}

bool QXmlStreamAttribute_operatorNotEqual(const QXmlStreamAttribute* self, QXmlStreamAttribute* other) {
	return (*self != *other);
}

void QXmlStreamAttribute_delete(QXmlStreamAttribute* self) {
	delete self;
}

QXmlStreamNamespaceDeclaration* QXmlStreamNamespaceDeclaration_new() {
	return new QXmlStreamNamespaceDeclaration();
}

QXmlStreamNamespaceDeclaration* QXmlStreamNamespaceDeclaration_new2(struct miqt_string prefix, struct miqt_string namespaceUri) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
	return new QXmlStreamNamespaceDeclaration(prefix_QString, namespaceUri_QString);
}

QXmlStreamNamespaceDeclaration* QXmlStreamNamespaceDeclaration_new3(QXmlStreamNamespaceDeclaration* param1) {
	return new QXmlStreamNamespaceDeclaration(*param1);
}

void QXmlStreamNamespaceDeclaration_operatorAssign(QXmlStreamNamespaceDeclaration* self, QXmlStreamNamespaceDeclaration* param1) {
	self->operator=(*param1);
}

bool QXmlStreamNamespaceDeclaration_operatorEqual(const QXmlStreamNamespaceDeclaration* self, QXmlStreamNamespaceDeclaration* other) {
	return (*self == *other);
}

bool QXmlStreamNamespaceDeclaration_operatorNotEqual(const QXmlStreamNamespaceDeclaration* self, QXmlStreamNamespaceDeclaration* other) {
	return (*self != *other);
}

void QXmlStreamNamespaceDeclaration_delete(QXmlStreamNamespaceDeclaration* self) {
	delete self;
}

QXmlStreamNotationDeclaration* QXmlStreamNotationDeclaration_new() {
	return new QXmlStreamNotationDeclaration();
}

QXmlStreamNotationDeclaration* QXmlStreamNotationDeclaration_new2(QXmlStreamNotationDeclaration* param1) {
	return new QXmlStreamNotationDeclaration(*param1);
}

void QXmlStreamNotationDeclaration_operatorAssign(QXmlStreamNotationDeclaration* self, QXmlStreamNotationDeclaration* param1) {
	self->operator=(*param1);
}

bool QXmlStreamNotationDeclaration_operatorEqual(const QXmlStreamNotationDeclaration* self, QXmlStreamNotationDeclaration* other) {
	return (*self == *other);
}

bool QXmlStreamNotationDeclaration_operatorNotEqual(const QXmlStreamNotationDeclaration* self, QXmlStreamNotationDeclaration* other) {
	return (*self != *other);
}

void QXmlStreamNotationDeclaration_delete(QXmlStreamNotationDeclaration* self) {
	delete self;
}

QXmlStreamEntityDeclaration* QXmlStreamEntityDeclaration_new() {
	return new QXmlStreamEntityDeclaration();
}

QXmlStreamEntityDeclaration* QXmlStreamEntityDeclaration_new2(QXmlStreamEntityDeclaration* param1) {
	return new QXmlStreamEntityDeclaration(*param1);
}

void QXmlStreamEntityDeclaration_operatorAssign(QXmlStreamEntityDeclaration* self, QXmlStreamEntityDeclaration* param1) {
	self->operator=(*param1);
}

bool QXmlStreamEntityDeclaration_operatorEqual(const QXmlStreamEntityDeclaration* self, QXmlStreamEntityDeclaration* other) {
	return (*self == *other);
}

bool QXmlStreamEntityDeclaration_operatorNotEqual(const QXmlStreamEntityDeclaration* self, QXmlStreamEntityDeclaration* other) {
	return (*self != *other);
}

void QXmlStreamEntityDeclaration_delete(QXmlStreamEntityDeclaration* self) {
	delete self;
}

struct miqt_string QXmlStreamEntityResolver_resolveEntity(QXmlStreamEntityResolver* self, struct miqt_string publicId, struct miqt_string systemId) {
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

struct miqt_string QXmlStreamEntityResolver_resolveUndeclaredEntity(QXmlStreamEntityResolver* self, struct miqt_string name) {
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

void QXmlStreamEntityResolver_delete(QXmlStreamEntityResolver* self) {
	delete self;
}

QXmlStreamReader* QXmlStreamReader_new() {
	return new QXmlStreamReader();
}

QXmlStreamReader* QXmlStreamReader_new2(QIODevice* device) {
	return new QXmlStreamReader(device);
}

QXmlStreamReader* QXmlStreamReader_new3(struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	return new QXmlStreamReader(data_QByteArray);
}

QXmlStreamReader* QXmlStreamReader_new4(struct miqt_string data) {
	QString data_QString = QString::fromUtf8(data.data, data.len);
	return new QXmlStreamReader(data_QString);
}

QXmlStreamReader* QXmlStreamReader_new5(const char* data) {
	return new QXmlStreamReader(data);
}

void QXmlStreamReader_setDevice(QXmlStreamReader* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QXmlStreamReader_device(const QXmlStreamReader* self) {
	return self->device();
}

void QXmlStreamReader_addData(QXmlStreamReader* self, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	self->addData(data_QByteArray);
}

void QXmlStreamReader_addDataWithData(QXmlStreamReader* self, struct miqt_string data) {
	QString data_QString = QString::fromUtf8(data.data, data.len);
	self->addData(data_QString);
}

void QXmlStreamReader_addData2(QXmlStreamReader* self, const char* data) {
	self->addData(data);
}

void QXmlStreamReader_clear(QXmlStreamReader* self) {
	self->clear();
}

bool QXmlStreamReader_atEnd(const QXmlStreamReader* self) {
	return self->atEnd();
}

int QXmlStreamReader_readNext(QXmlStreamReader* self) {
	QXmlStreamReader::TokenType _ret = self->readNext();
	return static_cast<int>(_ret);
}

bool QXmlStreamReader_readNextStartElement(QXmlStreamReader* self) {
	return self->readNextStartElement();
}

void QXmlStreamReader_skipCurrentElement(QXmlStreamReader* self) {
	self->skipCurrentElement();
}

int QXmlStreamReader_tokenType(const QXmlStreamReader* self) {
	QXmlStreamReader::TokenType _ret = self->tokenType();
	return static_cast<int>(_ret);
}

struct miqt_string QXmlStreamReader_tokenString(const QXmlStreamReader* self) {
	QString _ret = self->tokenString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QXmlStreamReader_setNamespaceProcessing(QXmlStreamReader* self, bool namespaceProcessing) {
	self->setNamespaceProcessing(namespaceProcessing);
}

bool QXmlStreamReader_namespaceProcessing(const QXmlStreamReader* self) {
	return self->namespaceProcessing();
}

bool QXmlStreamReader_isStartDocument(const QXmlStreamReader* self) {
	return self->isStartDocument();
}

bool QXmlStreamReader_isEndDocument(const QXmlStreamReader* self) {
	return self->isEndDocument();
}

bool QXmlStreamReader_isStartElement(const QXmlStreamReader* self) {
	return self->isStartElement();
}

bool QXmlStreamReader_isEndElement(const QXmlStreamReader* self) {
	return self->isEndElement();
}

bool QXmlStreamReader_isCharacters(const QXmlStreamReader* self) {
	return self->isCharacters();
}

bool QXmlStreamReader_isWhitespace(const QXmlStreamReader* self) {
	return self->isWhitespace();
}

bool QXmlStreamReader_isCDATA(const QXmlStreamReader* self) {
	return self->isCDATA();
}

bool QXmlStreamReader_isComment(const QXmlStreamReader* self) {
	return self->isComment();
}

bool QXmlStreamReader_isDTD(const QXmlStreamReader* self) {
	return self->isDTD();
}

bool QXmlStreamReader_isEntityReference(const QXmlStreamReader* self) {
	return self->isEntityReference();
}

bool QXmlStreamReader_isProcessingInstruction(const QXmlStreamReader* self) {
	return self->isProcessingInstruction();
}

bool QXmlStreamReader_isStandaloneDocument(const QXmlStreamReader* self) {
	return self->isStandaloneDocument();
}

long long QXmlStreamReader_lineNumber(const QXmlStreamReader* self) {
	qint64 _ret = self->lineNumber();
	return static_cast<long long>(_ret);
}

long long QXmlStreamReader_columnNumber(const QXmlStreamReader* self) {
	qint64 _ret = self->columnNumber();
	return static_cast<long long>(_ret);
}

long long QXmlStreamReader_characterOffset(const QXmlStreamReader* self) {
	qint64 _ret = self->characterOffset();
	return static_cast<long long>(_ret);
}

struct miqt_string QXmlStreamReader_readElementText(QXmlStreamReader* self) {
	QString _ret = self->readElementText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QXmlStreamNamespaceDeclaration* */  QXmlStreamReader_namespaceDeclarations(const QXmlStreamReader* self) {
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

void QXmlStreamReader_addExtraNamespaceDeclaration(QXmlStreamReader* self, QXmlStreamNamespaceDeclaration* extraNamespaceDeclaraction) {
	self->addExtraNamespaceDeclaration(*extraNamespaceDeclaraction);
}

void QXmlStreamReader_addExtraNamespaceDeclarations(QXmlStreamReader* self, struct miqt_array /* of QXmlStreamNamespaceDeclaration* */  extraNamespaceDeclaractions) {
	QXmlStreamNamespaceDeclarations extraNamespaceDeclaractions_QList;
	extraNamespaceDeclaractions_QList.reserve(extraNamespaceDeclaractions.len);
	QXmlStreamNamespaceDeclaration** extraNamespaceDeclaractions_arr = static_cast<QXmlStreamNamespaceDeclaration**>(extraNamespaceDeclaractions.data);
	for(size_t i = 0; i < extraNamespaceDeclaractions.len; ++i) {
		extraNamespaceDeclaractions_QList.push_back(*(extraNamespaceDeclaractions_arr[i]));
	}
	self->addExtraNamespaceDeclarations(extraNamespaceDeclaractions_QList);
}

struct miqt_array /* of QXmlStreamNotationDeclaration* */  QXmlStreamReader_notationDeclarations(const QXmlStreamReader* self) {
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

struct miqt_array /* of QXmlStreamEntityDeclaration* */  QXmlStreamReader_entityDeclarations(const QXmlStreamReader* self) {
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

int QXmlStreamReader_entityExpansionLimit(const QXmlStreamReader* self) {
	return self->entityExpansionLimit();
}

void QXmlStreamReader_setEntityExpansionLimit(QXmlStreamReader* self, int limit) {
	self->setEntityExpansionLimit(static_cast<int>(limit));
}

void QXmlStreamReader_raiseError(QXmlStreamReader* self) {
	self->raiseError();
}

struct miqt_string QXmlStreamReader_errorString(const QXmlStreamReader* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QXmlStreamReader_error(const QXmlStreamReader* self) {
	QXmlStreamReader::Error _ret = self->error();
	return static_cast<int>(_ret);
}

bool QXmlStreamReader_hasError(const QXmlStreamReader* self) {
	return self->hasError();
}

void QXmlStreamReader_setEntityResolver(QXmlStreamReader* self, QXmlStreamEntityResolver* resolver) {
	self->setEntityResolver(resolver);
}

QXmlStreamEntityResolver* QXmlStreamReader_entityResolver(const QXmlStreamReader* self) {
	return self->entityResolver();
}

struct miqt_string QXmlStreamReader_readElementText1(QXmlStreamReader* self, int behaviour) {
	QString _ret = self->readElementText(static_cast<QXmlStreamReader::ReadElementTextBehaviour>(behaviour));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QXmlStreamReader_raiseError1(QXmlStreamReader* self, struct miqt_string message) {
	QString message_QString = QString::fromUtf8(message.data, message.len);
	self->raiseError(message_QString);
}

void QXmlStreamReader_delete(QXmlStreamReader* self) {
	delete self;
}

QXmlStreamWriter* QXmlStreamWriter_new() {
	return new QXmlStreamWriter();
}

QXmlStreamWriter* QXmlStreamWriter_new2(QIODevice* device) {
	return new QXmlStreamWriter(device);
}

void QXmlStreamWriter_setDevice(QXmlStreamWriter* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QXmlStreamWriter_device(const QXmlStreamWriter* self) {
	return self->device();
}

void QXmlStreamWriter_setCodec(QXmlStreamWriter* self, QTextCodec* codec) {
	self->setCodec(codec);
}

void QXmlStreamWriter_setCodecWithCodecName(QXmlStreamWriter* self, const char* codecName) {
	self->setCodec(codecName);
}

QTextCodec* QXmlStreamWriter_codec(const QXmlStreamWriter* self) {
	return self->codec();
}

void QXmlStreamWriter_setAutoFormatting(QXmlStreamWriter* self, bool autoFormatting) {
	self->setAutoFormatting(autoFormatting);
}

bool QXmlStreamWriter_autoFormatting(const QXmlStreamWriter* self) {
	return self->autoFormatting();
}

void QXmlStreamWriter_setAutoFormattingIndent(QXmlStreamWriter* self, int spacesOrTabs) {
	self->setAutoFormattingIndent(static_cast<int>(spacesOrTabs));
}

int QXmlStreamWriter_autoFormattingIndent(const QXmlStreamWriter* self) {
	return self->autoFormattingIndent();
}

void QXmlStreamWriter_writeAttribute(QXmlStreamWriter* self, struct miqt_string qualifiedName, struct miqt_string value) {
	QString qualifiedName_QString = QString::fromUtf8(qualifiedName.data, qualifiedName.len);
	QString value_QString = QString::fromUtf8(value.data, value.len);
	self->writeAttribute(qualifiedName_QString, value_QString);
}

void QXmlStreamWriter_writeAttribute2(QXmlStreamWriter* self, struct miqt_string namespaceUri, struct miqt_string name, struct miqt_string value) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString value_QString = QString::fromUtf8(value.data, value.len);
	self->writeAttribute(namespaceUri_QString, name_QString, value_QString);
}

void QXmlStreamWriter_writeAttributeWithAttribute(QXmlStreamWriter* self, QXmlStreamAttribute* attribute) {
	self->writeAttribute(*attribute);
}

void QXmlStreamWriter_writeCDATA(QXmlStreamWriter* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->writeCDATA(text_QString);
}

void QXmlStreamWriter_writeCharacters(QXmlStreamWriter* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->writeCharacters(text_QString);
}

void QXmlStreamWriter_writeComment(QXmlStreamWriter* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->writeComment(text_QString);
}

void QXmlStreamWriter_writeDTD(QXmlStreamWriter* self, struct miqt_string dtd) {
	QString dtd_QString = QString::fromUtf8(dtd.data, dtd.len);
	self->writeDTD(dtd_QString);
}

void QXmlStreamWriter_writeEmptyElement(QXmlStreamWriter* self, struct miqt_string qualifiedName) {
	QString qualifiedName_QString = QString::fromUtf8(qualifiedName.data, qualifiedName.len);
	self->writeEmptyElement(qualifiedName_QString);
}

void QXmlStreamWriter_writeEmptyElement2(QXmlStreamWriter* self, struct miqt_string namespaceUri, struct miqt_string name) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->writeEmptyElement(namespaceUri_QString, name_QString);
}

void QXmlStreamWriter_writeTextElement(QXmlStreamWriter* self, struct miqt_string qualifiedName, struct miqt_string text) {
	QString qualifiedName_QString = QString::fromUtf8(qualifiedName.data, qualifiedName.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->writeTextElement(qualifiedName_QString, text_QString);
}

void QXmlStreamWriter_writeTextElement2(QXmlStreamWriter* self, struct miqt_string namespaceUri, struct miqt_string name, struct miqt_string text) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->writeTextElement(namespaceUri_QString, name_QString, text_QString);
}

void QXmlStreamWriter_writeEndDocument(QXmlStreamWriter* self) {
	self->writeEndDocument();
}

void QXmlStreamWriter_writeEndElement(QXmlStreamWriter* self) {
	self->writeEndElement();
}

void QXmlStreamWriter_writeEntityReference(QXmlStreamWriter* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->writeEntityReference(name_QString);
}

void QXmlStreamWriter_writeNamespace(QXmlStreamWriter* self, struct miqt_string namespaceUri) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
	self->writeNamespace(namespaceUri_QString);
}

void QXmlStreamWriter_writeDefaultNamespace(QXmlStreamWriter* self, struct miqt_string namespaceUri) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
	self->writeDefaultNamespace(namespaceUri_QString);
}

void QXmlStreamWriter_writeProcessingInstruction(QXmlStreamWriter* self, struct miqt_string target) {
	QString target_QString = QString::fromUtf8(target.data, target.len);
	self->writeProcessingInstruction(target_QString);
}

void QXmlStreamWriter_writeStartDocument(QXmlStreamWriter* self) {
	self->writeStartDocument();
}

void QXmlStreamWriter_writeStartDocumentWithVersion(QXmlStreamWriter* self, struct miqt_string version) {
	QString version_QString = QString::fromUtf8(version.data, version.len);
	self->writeStartDocument(version_QString);
}

void QXmlStreamWriter_writeStartDocument2(QXmlStreamWriter* self, struct miqt_string version, bool standalone) {
	QString version_QString = QString::fromUtf8(version.data, version.len);
	self->writeStartDocument(version_QString, standalone);
}

void QXmlStreamWriter_writeStartElement(QXmlStreamWriter* self, struct miqt_string qualifiedName) {
	QString qualifiedName_QString = QString::fromUtf8(qualifiedName.data, qualifiedName.len);
	self->writeStartElement(qualifiedName_QString);
}

void QXmlStreamWriter_writeStartElement2(QXmlStreamWriter* self, struct miqt_string namespaceUri, struct miqt_string name) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->writeStartElement(namespaceUri_QString, name_QString);
}

void QXmlStreamWriter_writeCurrentToken(QXmlStreamWriter* self, QXmlStreamReader* reader) {
	self->writeCurrentToken(*reader);
}

bool QXmlStreamWriter_hasError(const QXmlStreamWriter* self) {
	return self->hasError();
}

void QXmlStreamWriter_writeNamespace2(QXmlStreamWriter* self, struct miqt_string namespaceUri, struct miqt_string prefix) {
	QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	self->writeNamespace(namespaceUri_QString, prefix_QString);
}

void QXmlStreamWriter_writeProcessingInstruction2(QXmlStreamWriter* self, struct miqt_string target, struct miqt_string data) {
	QString target_QString = QString::fromUtf8(target.data, target.len);
	QString data_QString = QString::fromUtf8(data.data, data.len);
	self->writeProcessingInstruction(target_QString, data_QString);
}

void QXmlStreamWriter_delete(QXmlStreamWriter* self) {
	delete self;
}

