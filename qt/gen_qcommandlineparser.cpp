#include <QCommandLineOption>
#include <QCommandLineParser>
#include <QCoreApplication>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qcommandlineparser.h"

#include "gen_qcommandlineparser.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QCommandLineParser* QCommandLineParser_new() {
	return new QCommandLineParser();
}

void QCommandLineParser_Tr(const char* sourceText, char** _out, int* _out_Strlen) {
	QString ret = QCommandLineParser::tr(sourceText);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCommandLineParser_TrUtf8(const char* sourceText, char** _out, int* _out_Strlen) {
	QString ret = QCommandLineParser::trUtf8(sourceText);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCommandLineParser_SetSingleDashWordOptionMode(QCommandLineParser* self, uintptr_t parsingMode) {
	self->setSingleDashWordOptionMode(static_cast<QCommandLineParser::SingleDashWordOptionMode>(parsingMode));
}

void QCommandLineParser_SetOptionsAfterPositionalArgumentsMode(QCommandLineParser* self, uintptr_t mode) {
	self->setOptionsAfterPositionalArgumentsMode(static_cast<QCommandLineParser::OptionsAfterPositionalArgumentsMode>(mode));
}

bool QCommandLineParser_AddOption(QCommandLineParser* self, QCommandLineOption* commandLineOption) {
	return self->addOption(*commandLineOption);
}

bool QCommandLineParser_AddOptions(QCommandLineParser* self, QCommandLineOption** options, size_t options_len) {
	QList<QCommandLineOption> options_QList;
	options_QList.reserve(options_len);
	for(size_t i = 0; i < options_len; ++i) {
		options_QList.push_back(*(options[i]));
	}
	return self->addOptions(options_QList);
}

QCommandLineOption* QCommandLineParser_AddVersionOption(QCommandLineParser* self) {
	QCommandLineOption ret = self->addVersionOption();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCommandLineOption*>(new QCommandLineOption(ret));
}

QCommandLineOption* QCommandLineParser_AddHelpOption(QCommandLineParser* self) {
	QCommandLineOption ret = self->addHelpOption();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCommandLineOption*>(new QCommandLineOption(ret));
}

void QCommandLineParser_SetApplicationDescription(QCommandLineParser* self, const char* description, size_t description_Strlen) {
	QString description_QString = QString::fromUtf8(description, description_Strlen);
	self->setApplicationDescription(description_QString);
}

void QCommandLineParser_ApplicationDescription(QCommandLineParser* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QCommandLineParser*>(self)->applicationDescription();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCommandLineParser_AddPositionalArgument(QCommandLineParser* self, const char* name, size_t name_Strlen, const char* description, size_t description_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	QString description_QString = QString::fromUtf8(description, description_Strlen);
	self->addPositionalArgument(name_QString, description_QString);
}

void QCommandLineParser_ClearPositionalArguments(QCommandLineParser* self) {
	self->clearPositionalArguments();
}

void QCommandLineParser_Process(QCommandLineParser* self, char** arguments, uint64_t* arguments_Lengths, size_t arguments_len) {
	QList<QString> arguments_QList;
	arguments_QList.reserve(arguments_len);
	for(size_t i = 0; i < arguments_len; ++i) {
		arguments_QList.push_back(QString::fromUtf8(arguments[i], arguments_Lengths[i]));
	}
	self->process(arguments_QList);
}

void QCommandLineParser_ProcessWithApp(QCommandLineParser* self, QCoreApplication* app) {
	self->process(*app);
}

bool QCommandLineParser_Parse(QCommandLineParser* self, char** arguments, uint64_t* arguments_Lengths, size_t arguments_len) {
	QList<QString> arguments_QList;
	arguments_QList.reserve(arguments_len);
	for(size_t i = 0; i < arguments_len; ++i) {
		arguments_QList.push_back(QString::fromUtf8(arguments[i], arguments_Lengths[i]));
	}
	return self->parse(arguments_QList);
}

void QCommandLineParser_ErrorText(QCommandLineParser* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QCommandLineParser*>(self)->errorText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QCommandLineParser_IsSet(QCommandLineParser* self, const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	return const_cast<const QCommandLineParser*>(self)->isSet(name_QString);
}

void QCommandLineParser_Value(QCommandLineParser* self, const char* name, size_t name_Strlen, char** _out, int* _out_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	QString ret = const_cast<const QCommandLineParser*>(self)->value(name_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCommandLineParser_Values(QCommandLineParser* self, const char* name, size_t name_Strlen, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	QStringList ret = const_cast<const QCommandLineParser*>(self)->values(name_QString);
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

bool QCommandLineParser_IsSetWithOption(QCommandLineParser* self, QCommandLineOption* option) {
	return const_cast<const QCommandLineParser*>(self)->isSet(*option);
}

void QCommandLineParser_ValueWithOption(QCommandLineParser* self, QCommandLineOption* option, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QCommandLineParser*>(self)->value(*option);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCommandLineParser_ValuesWithOption(QCommandLineParser* self, QCommandLineOption* option, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = const_cast<const QCommandLineParser*>(self)->values(*option);
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

void QCommandLineParser_PositionalArguments(QCommandLineParser* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = const_cast<const QCommandLineParser*>(self)->positionalArguments();
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

void QCommandLineParser_OptionNames(QCommandLineParser* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = const_cast<const QCommandLineParser*>(self)->optionNames();
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

void QCommandLineParser_UnknownOptionNames(QCommandLineParser* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = const_cast<const QCommandLineParser*>(self)->unknownOptionNames();
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

void QCommandLineParser_HelpText(QCommandLineParser* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QCommandLineParser*>(self)->helpText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCommandLineParser_Tr2(const char* sourceText, const char* disambiguation, char** _out, int* _out_Strlen) {
	QString ret = QCommandLineParser::tr(sourceText, disambiguation);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCommandLineParser_Tr3(const char* sourceText, const char* disambiguation, int n, char** _out, int* _out_Strlen) {
	QString ret = QCommandLineParser::tr(sourceText, disambiguation, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCommandLineParser_TrUtf82(const char* sourceText, const char* disambiguation, char** _out, int* _out_Strlen) {
	QString ret = QCommandLineParser::trUtf8(sourceText, disambiguation);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCommandLineParser_TrUtf83(const char* sourceText, const char* disambiguation, int n, char** _out, int* _out_Strlen) {
	QString ret = QCommandLineParser::trUtf8(sourceText, disambiguation, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCommandLineParser_AddPositionalArgument3(QCommandLineParser* self, const char* name, size_t name_Strlen, const char* description, size_t description_Strlen, const char* syntax, size_t syntax_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	QString description_QString = QString::fromUtf8(description, description_Strlen);
	QString syntax_QString = QString::fromUtf8(syntax, syntax_Strlen);
	self->addPositionalArgument(name_QString, description_QString, syntax_QString);
}

void QCommandLineParser_Delete(QCommandLineParser* self) {
	delete self;
}

