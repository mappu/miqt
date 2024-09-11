#include <QCommandLineOption>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qcommandlineoption.h"

#include "gen_qcommandlineoption.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QCommandLineOption* QCommandLineOption_new(const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	return new QCommandLineOption(name_QString);
}

QCommandLineOption* QCommandLineOption_new2(char** names, uint64_t* names_Lengths, size_t names_len) {
	QList<QString> names_QList;
	names_QList.reserve(names_len);
	for(size_t i = 0; i < names_len; ++i) {
		names_QList.push_back(QString::fromUtf8(names[i], names_Lengths[i]));
	}
	return new QCommandLineOption(names_QList);
}

QCommandLineOption* QCommandLineOption_new3(const char* name, size_t name_Strlen, const char* description, size_t description_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	QString description_QString = QString::fromUtf8(description, description_Strlen);
	return new QCommandLineOption(name_QString, description_QString);
}

QCommandLineOption* QCommandLineOption_new4(char** names, uint64_t* names_Lengths, size_t names_len, const char* description, size_t description_Strlen) {
	QList<QString> names_QList;
	names_QList.reserve(names_len);
	for(size_t i = 0; i < names_len; ++i) {
		names_QList.push_back(QString::fromUtf8(names[i], names_Lengths[i]));
	}
	QString description_QString = QString::fromUtf8(description, description_Strlen);
	return new QCommandLineOption(names_QList, description_QString);
}

QCommandLineOption* QCommandLineOption_new5(QCommandLineOption* other) {
	return new QCommandLineOption(*other);
}

QCommandLineOption* QCommandLineOption_new6(const char* name, size_t name_Strlen, const char* description, size_t description_Strlen, const char* valueName, size_t valueName_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	QString description_QString = QString::fromUtf8(description, description_Strlen);
	QString valueName_QString = QString::fromUtf8(valueName, valueName_Strlen);
	return new QCommandLineOption(name_QString, description_QString, valueName_QString);
}

QCommandLineOption* QCommandLineOption_new7(const char* name, size_t name_Strlen, const char* description, size_t description_Strlen, const char* valueName, size_t valueName_Strlen, const char* defaultValue, size_t defaultValue_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	QString description_QString = QString::fromUtf8(description, description_Strlen);
	QString valueName_QString = QString::fromUtf8(valueName, valueName_Strlen);
	QString defaultValue_QString = QString::fromUtf8(defaultValue, defaultValue_Strlen);
	return new QCommandLineOption(name_QString, description_QString, valueName_QString, defaultValue_QString);
}

QCommandLineOption* QCommandLineOption_new8(char** names, uint64_t* names_Lengths, size_t names_len, const char* description, size_t description_Strlen, const char* valueName, size_t valueName_Strlen) {
	QList<QString> names_QList;
	names_QList.reserve(names_len);
	for(size_t i = 0; i < names_len; ++i) {
		names_QList.push_back(QString::fromUtf8(names[i], names_Lengths[i]));
	}
	QString description_QString = QString::fromUtf8(description, description_Strlen);
	QString valueName_QString = QString::fromUtf8(valueName, valueName_Strlen);
	return new QCommandLineOption(names_QList, description_QString, valueName_QString);
}

QCommandLineOption* QCommandLineOption_new9(char** names, uint64_t* names_Lengths, size_t names_len, const char* description, size_t description_Strlen, const char* valueName, size_t valueName_Strlen, const char* defaultValue, size_t defaultValue_Strlen) {
	QList<QString> names_QList;
	names_QList.reserve(names_len);
	for(size_t i = 0; i < names_len; ++i) {
		names_QList.push_back(QString::fromUtf8(names[i], names_Lengths[i]));
	}
	QString description_QString = QString::fromUtf8(description, description_Strlen);
	QString valueName_QString = QString::fromUtf8(valueName, valueName_Strlen);
	QString defaultValue_QString = QString::fromUtf8(defaultValue, defaultValue_Strlen);
	return new QCommandLineOption(names_QList, description_QString, valueName_QString, defaultValue_QString);
}

void QCommandLineOption_OperatorAssign(QCommandLineOption* self, QCommandLineOption* other) {
	self->operator=(*other);
}

void QCommandLineOption_Swap(QCommandLineOption* self, QCommandLineOption* other) {
	self->swap(*other);
}

void QCommandLineOption_Names(const QCommandLineOption* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = self->names();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

void QCommandLineOption_SetValueName(QCommandLineOption* self, const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	self->setValueName(name_QString);
}

void QCommandLineOption_ValueName(const QCommandLineOption* self, char** _out, int* _out_Strlen) {
	QString ret = self->valueName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCommandLineOption_SetDescription(QCommandLineOption* self, const char* description, size_t description_Strlen) {
	QString description_QString = QString::fromUtf8(description, description_Strlen);
	self->setDescription(description_QString);
}

void QCommandLineOption_Description(const QCommandLineOption* self, char** _out, int* _out_Strlen) {
	QString ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCommandLineOption_SetDefaultValue(QCommandLineOption* self, const char* defaultValue, size_t defaultValue_Strlen) {
	QString defaultValue_QString = QString::fromUtf8(defaultValue, defaultValue_Strlen);
	self->setDefaultValue(defaultValue_QString);
}

void QCommandLineOption_SetDefaultValues(QCommandLineOption* self, char** defaultValues, uint64_t* defaultValues_Lengths, size_t defaultValues_len) {
	QList<QString> defaultValues_QList;
	defaultValues_QList.reserve(defaultValues_len);
	for(size_t i = 0; i < defaultValues_len; ++i) {
		defaultValues_QList.push_back(QString::fromUtf8(defaultValues[i], defaultValues_Lengths[i]));
	}
	self->setDefaultValues(defaultValues_QList);
}

void QCommandLineOption_DefaultValues(const QCommandLineOption* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = self->defaultValues();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

int QCommandLineOption_Flags(const QCommandLineOption* self) {
	QCommandLineOption::Flags ret = self->flags();
	return static_cast<int>(ret);
}

void QCommandLineOption_SetFlags(QCommandLineOption* self, int aflags) {
	self->setFlags(static_cast<QCommandLineOption::Flags>(aflags));
}

void QCommandLineOption_SetHidden(QCommandLineOption* self, bool hidden) {
	self->setHidden(hidden);
}

bool QCommandLineOption_IsHidden(const QCommandLineOption* self) {
	return self->isHidden();
}

void QCommandLineOption_Delete(QCommandLineOption* self) {
	delete self;
}

