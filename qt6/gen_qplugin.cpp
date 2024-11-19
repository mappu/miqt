#include <QJsonObject>
#include <QPluginMetaData>
#define WORKAROUND_INNER_CLASS_DEFINITION_QPluginMetaData__ElfNoteHeader
#define WORKAROUND_INNER_CLASS_DEFINITION_QPluginMetaData__Header
#define WORKAROUND_INNER_CLASS_DEFINITION_QPluginMetaData__MagicHeader
#include <QStaticPlugin>
#include <qplugin.h>
#include "gen_qplugin.h"
#include "_cgo_export.h"

unsigned char QPluginMetaData_ArchRequirements() {
	quint8 _ret = QPluginMetaData::archRequirements();
	return static_cast<unsigned char>(_ret);
}

void QPluginMetaData_Delete(QPluginMetaData* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QPluginMetaData*>( self );
	} else {
		delete self;
	}
}

QJsonObject* QStaticPlugin_MetaData(const QStaticPlugin* self) {
	return new QJsonObject(self->metaData());
}

void QStaticPlugin_Delete(QStaticPlugin* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStaticPlugin*>( self );
	} else {
		delete self;
	}
}

void QPluginMetaData__Header_new(QPluginMetaData__Header* param1, QPluginMetaData__Header** outptr_QPluginMetaData__Header) {
	QPluginMetaData::Header* ret = new QPluginMetaData::Header(*param1);
	*outptr_QPluginMetaData__Header = ret;
}

void QPluginMetaData__Header_Delete(QPluginMetaData__Header* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QPluginMetaData::Header*>( self );
	} else {
		delete self;
	}
}

void QPluginMetaData__MagicHeader_new(QPluginMetaData__MagicHeader** outptr_QPluginMetaData__MagicHeader) {
	QPluginMetaData::MagicHeader* ret = new QPluginMetaData::MagicHeader();
	*outptr_QPluginMetaData__MagicHeader = ret;
}

void QPluginMetaData__MagicHeader_Delete(QPluginMetaData__MagicHeader* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QPluginMetaData::MagicHeader*>( self );
	} else {
		delete self;
	}
}

void QPluginMetaData__ElfNoteHeader_new(unsigned int payloadSize, QPluginMetaData__ElfNoteHeader** outptr_QPluginMetaData__ElfNoteHeader) {
	QPluginMetaData::ElfNoteHeader* ret = new QPluginMetaData::ElfNoteHeader(static_cast<quint32>(payloadSize));
	*outptr_QPluginMetaData__ElfNoteHeader = ret;
}

void QPluginMetaData__ElfNoteHeader_new2(QPluginMetaData__ElfNoteHeader* param1, QPluginMetaData__ElfNoteHeader** outptr_QPluginMetaData__ElfNoteHeader) {
	QPluginMetaData::ElfNoteHeader* ret = new QPluginMetaData::ElfNoteHeader(*param1);
	*outptr_QPluginMetaData__ElfNoteHeader = ret;
}

void QPluginMetaData__ElfNoteHeader_Delete(QPluginMetaData__ElfNoteHeader* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QPluginMetaData::ElfNoteHeader*>( self );
	} else {
		delete self;
	}
}

