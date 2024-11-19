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

unsigned char QPluginMetaData_ArchRequirements();
void QPluginMetaData_Delete(QPluginMetaData* self, bool isSubclass);

QJsonObject* QStaticPlugin_MetaData(const QStaticPlugin* self);
void QStaticPlugin_Delete(QStaticPlugin* self, bool isSubclass);

void QPluginMetaData__Header_new(QPluginMetaData__Header* param1, QPluginMetaData__Header** outptr_QPluginMetaData__Header);
void QPluginMetaData__Header_Delete(QPluginMetaData__Header* self, bool isSubclass);

void QPluginMetaData__MagicHeader_new(QPluginMetaData__MagicHeader** outptr_QPluginMetaData__MagicHeader);
void QPluginMetaData__MagicHeader_Delete(QPluginMetaData__MagicHeader* self, bool isSubclass);

void QPluginMetaData__ElfNoteHeader_new(unsigned int payloadSize, QPluginMetaData__ElfNoteHeader** outptr_QPluginMetaData__ElfNoteHeader);
void QPluginMetaData__ElfNoteHeader_new2(QPluginMetaData__ElfNoteHeader* param1, QPluginMetaData__ElfNoteHeader** outptr_QPluginMetaData__ElfNoteHeader);
void QPluginMetaData__ElfNoteHeader_Delete(QPluginMetaData__ElfNoteHeader* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
