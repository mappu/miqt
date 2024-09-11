#include <QMetaObject>
#include <QObject>
#include <QSignalMapper>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qsignalmapper.h"

#include "gen_qsignalmapper.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QSignalMapper* QSignalMapper_new() {
	return new QSignalMapper();
}

QSignalMapper* QSignalMapper_new2(QObject* parent) {
	return new QSignalMapper(parent);
}

QMetaObject* QSignalMapper_MetaObject(const QSignalMapper* self) {
	return (QMetaObject*) self->metaObject();
}

void QSignalMapper_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QSignalMapper::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSignalMapper_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QSignalMapper::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSignalMapper_SetMapping(QSignalMapper* self, QObject* sender, int id) {
	self->setMapping(sender, static_cast<int>(id));
}

void QSignalMapper_SetMapping2(QSignalMapper* self, QObject* sender, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setMapping(sender, text_QString);
}

void QSignalMapper_SetMapping3(QSignalMapper* self, QObject* sender, QWidget* widget) {
	self->setMapping(sender, widget);
}

void QSignalMapper_SetMapping4(QSignalMapper* self, QObject* sender, QObject* object) {
	self->setMapping(sender, object);
}

void QSignalMapper_RemoveMappings(QSignalMapper* self, QObject* sender) {
	self->removeMappings(sender);
}

QObject* QSignalMapper_Mapping(const QSignalMapper* self, int id) {
	return self->mapping(static_cast<int>(id));
}

QObject* QSignalMapper_MappingWithText(const QSignalMapper* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return self->mapping(text_QString);
}

QObject* QSignalMapper_MappingWithWidget(const QSignalMapper* self, QWidget* widget) {
	return self->mapping(widget);
}

QObject* QSignalMapper_MappingWithObject(const QSignalMapper* self, QObject* object) {
	return self->mapping(object);
}

void QSignalMapper_Mapped(QSignalMapper* self, int param1) {
	self->mapped(static_cast<int>(param1));
}

void QSignalMapper_connect_Mapped(QSignalMapper* self, void* slot) {
	QSignalMapper::connect(self, static_cast<void (QSignalMapper::*)(int)>(&QSignalMapper::mapped), self, [=](int param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QSignalMapper_MappedWithQString(QSignalMapper* self, const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	self->mapped(param1_QString);
}

void QSignalMapper_connect_MappedWithQString(QSignalMapper* self, void* slot) {
	QSignalMapper::connect(self, static_cast<void (QSignalMapper::*)(const QString&)>(&QSignalMapper::mapped), self, [=](const QString& param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QSignalMapper_MappedWithQWidget(QSignalMapper* self, QWidget* param1) {
	self->mapped(param1);
}

void QSignalMapper_connect_MappedWithQWidget(QSignalMapper* self, void* slot) {
	QSignalMapper::connect(self, static_cast<void (QSignalMapper::*)(QWidget*)>(&QSignalMapper::mapped), self, [=](QWidget* param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QSignalMapper_MappedWithQObject(QSignalMapper* self, QObject* param1) {
	self->mapped(param1);
}

void QSignalMapper_connect_MappedWithQObject(QSignalMapper* self, void* slot) {
	QSignalMapper::connect(self, static_cast<void (QSignalMapper::*)(QObject*)>(&QSignalMapper::mapped), self, [=](QObject* param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QSignalMapper_MappedInt(QSignalMapper* self, int param1) {
	self->mappedInt(static_cast<int>(param1));
}

void QSignalMapper_connect_MappedInt(QSignalMapper* self, void* slot) {
	QSignalMapper::connect(self, static_cast<void (QSignalMapper::*)(int)>(&QSignalMapper::mappedInt), self, [=](int param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QSignalMapper_MappedString(QSignalMapper* self, const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	self->mappedString(param1_QString);
}

void QSignalMapper_connect_MappedString(QSignalMapper* self, void* slot) {
	QSignalMapper::connect(self, static_cast<void (QSignalMapper::*)(const QString&)>(&QSignalMapper::mappedString), self, [=](const QString& param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QSignalMapper_MappedWidget(QSignalMapper* self, QWidget* param1) {
	self->mappedWidget(param1);
}

void QSignalMapper_connect_MappedWidget(QSignalMapper* self, void* slot) {
	QSignalMapper::connect(self, static_cast<void (QSignalMapper::*)(QWidget*)>(&QSignalMapper::mappedWidget), self, [=](QWidget* param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QSignalMapper_MappedObject(QSignalMapper* self, QObject* param1) {
	self->mappedObject(param1);
}

void QSignalMapper_connect_MappedObject(QSignalMapper* self, void* slot) {
	QSignalMapper::connect(self, static_cast<void (QSignalMapper::*)(QObject*)>(&QSignalMapper::mappedObject), self, [=](QObject* param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QSignalMapper_Map(QSignalMapper* self) {
	self->map();
}

void QSignalMapper_MapWithSender(QSignalMapper* self, QObject* sender) {
	self->map(sender);
}

void QSignalMapper_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QSignalMapper::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSignalMapper_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSignalMapper::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSignalMapper_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QSignalMapper::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSignalMapper_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSignalMapper::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSignalMapper_Delete(QSignalMapper* self) {
	delete self;
}

