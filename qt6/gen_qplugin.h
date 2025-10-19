#pragma once
#ifndef MIQT_QT6_GEN_QPLUGIN_H
#define MIQT_QT6_GEN_QPLUGIN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QJsonObject;
class QPluginMetaData;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QPluginMetaData__ElfNoteHeader)
typedef QPluginMetaData::ElfNoteHeader QPluginMetaData__ElfNoteHeader;
#else
class QPluginMetaData__ElfNoteHeader;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QPluginMetaData__Header)
typedef QPluginMetaData::Header QPluginMetaData__Header;
#else
class QPluginMetaData__Header;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QPluginMetaData__MagicHeader)
typedef QPluginMetaData::MagicHeader QPluginMetaData__MagicHeader;
#else
class QPluginMetaData__MagicHeader;
#endif
class QStaticPlugin;
#else
typedef struct QJsonObject QJsonObject;
typedef struct QPluginMetaData QPluginMetaData;
typedef struct QPluginMetaData__ElfNoteHeader QPluginMetaData__ElfNoteHeader;
typedef struct QPluginMetaData__Header QPluginMetaData__Header;
typedef struct QPluginMetaData__MagicHeader QPluginMetaData__MagicHeader;
typedef struct QStaticPlugin QStaticPlugin;
#endif

unsigned char QPluginMetaData_archRequirements();
size_t QPluginMetaData_size(const QPluginMetaData* self);
void QPluginMetaData_setSize(QPluginMetaData* self, size_t size);

void QPluginMetaData_delete(QPluginMetaData* self);

QJsonObject* QStaticPlugin_metaData(const QStaticPlugin* self);

void QStaticPlugin_delete(QStaticPlugin* self);

QPluginMetaData__Header* QPluginMetaData__Header_new(QPluginMetaData__Header* param1);
unsigned char QPluginMetaData__Header_version(const QPluginMetaData__Header* self);
void QPluginMetaData__Header_setVersion(QPluginMetaData__Header* self, unsigned char version);
unsigned char QPluginMetaData__Header_majorVersion(const QPluginMetaData__Header* self);
void QPluginMetaData__Header_setQtMajorVersion(QPluginMetaData__Header* self, unsigned char qt_major_version);
unsigned char QPluginMetaData__Header_minorVersion(const QPluginMetaData__Header* self);
void QPluginMetaData__Header_setQtMinorVersion(QPluginMetaData__Header* self, unsigned char qt_minor_version);
unsigned char QPluginMetaData__Header_pluginArchRequirements(const QPluginMetaData__Header* self);
void QPluginMetaData__Header_setPluginArchRequirements(QPluginMetaData__Header* self, unsigned char plugin_arch_requirements);

void QPluginMetaData__Header_delete(QPluginMetaData__Header* self);

QPluginMetaData__MagicHeader* QPluginMetaData__MagicHeader_new();
QPluginMetaData__Header* QPluginMetaData__MagicHeader_header(const QPluginMetaData__MagicHeader* self);
void QPluginMetaData__MagicHeader_setHeader(QPluginMetaData__MagicHeader* self, QPluginMetaData__Header* header);

void QPluginMetaData__MagicHeader_delete(QPluginMetaData__MagicHeader* self);

QPluginMetaData__ElfNoteHeader* QPluginMetaData__ElfNoteHeader_new(unsigned int payloadSize);
QPluginMetaData__ElfNoteHeader* QPluginMetaData__ElfNoteHeader_new2(QPluginMetaData__ElfNoteHeader* param1);
unsigned int QPluginMetaData__ElfNoteHeader_nNamesz(const QPluginMetaData__ElfNoteHeader* self);
void QPluginMetaData__ElfNoteHeader_setNNamesz(QPluginMetaData__ElfNoteHeader* self, unsigned int n_namesz);
unsigned int QPluginMetaData__ElfNoteHeader_nDescsz(const QPluginMetaData__ElfNoteHeader* self);
void QPluginMetaData__ElfNoteHeader_setNDescsz(QPluginMetaData__ElfNoteHeader* self, unsigned int n_descsz);
unsigned int QPluginMetaData__ElfNoteHeader_nType(const QPluginMetaData__ElfNoteHeader* self);
void QPluginMetaData__ElfNoteHeader_setNType(QPluginMetaData__ElfNoteHeader* self, unsigned int n_type);
QPluginMetaData__Header* QPluginMetaData__ElfNoteHeader_header(const QPluginMetaData__ElfNoteHeader* self);
void QPluginMetaData__ElfNoteHeader_setHeader(QPluginMetaData__ElfNoteHeader* self, QPluginMetaData__Header* header);

void QPluginMetaData__ElfNoteHeader_delete(QPluginMetaData__ElfNoteHeader* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
