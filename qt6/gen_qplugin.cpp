#include <QJsonObject>
#include <QPluginMetaData>
#define WORKAROUND_INNER_CLASS_DEFINITION_QPluginMetaData__ElfNoteHeader
#define WORKAROUND_INNER_CLASS_DEFINITION_QPluginMetaData__Header
#define WORKAROUND_INNER_CLASS_DEFINITION_QPluginMetaData__MagicHeader
#include <QStaticPlugin>
#include <qplugin.h>
#include "gen_qplugin.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

unsigned char QPluginMetaData_archRequirements() {
	quint8 _ret = QPluginMetaData::archRequirements();
	return static_cast<unsigned char>(_ret);
}

size_t QPluginMetaData_size(const QPluginMetaData* self) {
	return self->size;
}

void QPluginMetaData_setSize(QPluginMetaData* self, size_t size) {
	self->size = static_cast<size_t>(size);
}

void QPluginMetaData_delete(QPluginMetaData* self) {
	delete self;
}

QJsonObject* QStaticPlugin_metaData(const QStaticPlugin* self) {
	return new QJsonObject(self->metaData());
}

void QStaticPlugin_delete(QStaticPlugin* self) {
	delete self;
}

QPluginMetaData__Header* QPluginMetaData__Header_new(QPluginMetaData__Header* param1) {
	return new (std::nothrow) QPluginMetaData::Header(*param1);
}

unsigned char QPluginMetaData__Header_version(const QPluginMetaData__Header* self) {
	quint8 version_ret = self->version;
	return static_cast<unsigned char>(version_ret);
}

void QPluginMetaData__Header_setVersion(QPluginMetaData__Header* self, unsigned char version) {
	self->version = static_cast<quint8>(version);
}

unsigned char QPluginMetaData__Header_majorVersion(const QPluginMetaData__Header* self) {
	quint8 qt_major_version_ret = self->qt_major_version;
	return static_cast<unsigned char>(qt_major_version_ret);
}

void QPluginMetaData__Header_setQtMajorVersion(QPluginMetaData__Header* self, unsigned char qt_major_version) {
	self->qt_major_version = static_cast<quint8>(qt_major_version);
}

unsigned char QPluginMetaData__Header_minorVersion(const QPluginMetaData__Header* self) {
	quint8 qt_minor_version_ret = self->qt_minor_version;
	return static_cast<unsigned char>(qt_minor_version_ret);
}

void QPluginMetaData__Header_setQtMinorVersion(QPluginMetaData__Header* self, unsigned char qt_minor_version) {
	self->qt_minor_version = static_cast<quint8>(qt_minor_version);
}

unsigned char QPluginMetaData__Header_pluginArchRequirements(const QPluginMetaData__Header* self) {
	quint8 plugin_arch_requirements_ret = self->plugin_arch_requirements;
	return static_cast<unsigned char>(plugin_arch_requirements_ret);
}

void QPluginMetaData__Header_setPluginArchRequirements(QPluginMetaData__Header* self, unsigned char plugin_arch_requirements) {
	self->plugin_arch_requirements = static_cast<quint8>(plugin_arch_requirements);
}

void QPluginMetaData__Header_delete(QPluginMetaData__Header* self) {
	delete self;
}

QPluginMetaData__MagicHeader* QPluginMetaData__MagicHeader_new() {
	return new (std::nothrow) QPluginMetaData::MagicHeader();
}

QPluginMetaData__Header* QPluginMetaData__MagicHeader_header(const QPluginMetaData__MagicHeader* self) {
	return new QPluginMetaData::Header(self->header);
}

void QPluginMetaData__MagicHeader_setHeader(QPluginMetaData__MagicHeader* self, QPluginMetaData__Header* header) {
	self->header = *header;
}

void QPluginMetaData__MagicHeader_delete(QPluginMetaData__MagicHeader* self) {
	delete self;
}

QPluginMetaData__ElfNoteHeader* QPluginMetaData__ElfNoteHeader_new(unsigned int payloadSize) {
	return new (std::nothrow) QPluginMetaData::ElfNoteHeader(static_cast<quint32>(payloadSize));
}

QPluginMetaData__ElfNoteHeader* QPluginMetaData__ElfNoteHeader_new2(QPluginMetaData__ElfNoteHeader* param1) {
	return new (std::nothrow) QPluginMetaData::ElfNoteHeader(*param1);
}

unsigned int QPluginMetaData__ElfNoteHeader_nNamesz(const QPluginMetaData__ElfNoteHeader* self) {
	quint32 n_namesz_ret = self->n_namesz;
	return static_cast<unsigned int>(n_namesz_ret);
}

void QPluginMetaData__ElfNoteHeader_setNNamesz(QPluginMetaData__ElfNoteHeader* self, unsigned int n_namesz) {
	self->n_namesz = static_cast<quint32>(n_namesz);
}

unsigned int QPluginMetaData__ElfNoteHeader_nDescsz(const QPluginMetaData__ElfNoteHeader* self) {
	quint32 n_descsz_ret = self->n_descsz;
	return static_cast<unsigned int>(n_descsz_ret);
}

void QPluginMetaData__ElfNoteHeader_setNDescsz(QPluginMetaData__ElfNoteHeader* self, unsigned int n_descsz) {
	self->n_descsz = static_cast<quint32>(n_descsz);
}

unsigned int QPluginMetaData__ElfNoteHeader_nType(const QPluginMetaData__ElfNoteHeader* self) {
	quint32 n_type_ret = self->n_type;
	return static_cast<unsigned int>(n_type_ret);
}

void QPluginMetaData__ElfNoteHeader_setNType(QPluginMetaData__ElfNoteHeader* self, unsigned int n_type) {
	self->n_type = static_cast<quint32>(n_type);
}

QPluginMetaData__Header* QPluginMetaData__ElfNoteHeader_header(const QPluginMetaData__ElfNoteHeader* self) {
	return new QPluginMetaData::Header(self->header);
}

void QPluginMetaData__ElfNoteHeader_setHeader(QPluginMetaData__ElfNoteHeader* self, QPluginMetaData__Header* header) {
	self->header = *header;
}

void QPluginMetaData__ElfNoteHeader_delete(QPluginMetaData__ElfNoteHeader* self) {
	delete self;
}

