#include <QCommandLineOption>
#include <QCommandLineParser>
#include <QCoreApplication>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcommandlineparser.h>
#include "gen_qcommandlineparser.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

QCommandLineParser* QCommandLineParser_new() {
	return new QCommandLineParser();
}

struct miqt_string QCommandLineParser_Tr(const char* sourceText) {
	QString _ret = QCommandLineParser::tr(sourceText);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCommandLineParser_SetSingleDashWordOptionMode(QCommandLineParser* self, int parsingMode) {
	self->setSingleDashWordOptionMode(static_cast<QCommandLineParser::SingleDashWordOptionMode>(parsingMode));
}

void QCommandLineParser_SetOptionsAfterPositionalArgumentsMode(QCommandLineParser* self, int mode) {
	self->setOptionsAfterPositionalArgumentsMode(static_cast<QCommandLineParser::OptionsAfterPositionalArgumentsMode>(mode));
}

bool QCommandLineParser_AddOption(QCommandLineParser* self, QCommandLineOption* commandLineOption) {
	return self->addOption(*commandLineOption);
}

bool QCommandLineParser_AddOptions(QCommandLineParser* self, struct miqt_array /* of QCommandLineOption* */  options) {
	QList<QCommandLineOption> options_QList;
	options_QList.reserve(options.len);
	QCommandLineOption** options_arr = static_cast<QCommandLineOption**>(options.data);
	for(size_t i = 0; i < options.len; ++i) {
		options_QList.push_back(*(options_arr[i]));
	}
	return self->addOptions(options_QList);
}

QCommandLineOption* QCommandLineParser_AddVersionOption(QCommandLineParser* self) {
	return new QCommandLineOption(self->addVersionOption());
}

QCommandLineOption* QCommandLineParser_AddHelpOption(QCommandLineParser* self) {
	return new QCommandLineOption(self->addHelpOption());
}

void QCommandLineParser_SetApplicationDescription(QCommandLineParser* self, struct miqt_string description) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	self->setApplicationDescription(description_QString);
}

struct miqt_string QCommandLineParser_ApplicationDescription(const QCommandLineParser* self) {
	QString _ret = self->applicationDescription();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCommandLineParser_AddPositionalArgument(QCommandLineParser* self, struct miqt_string name, struct miqt_string description) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString description_QString = QString::fromUtf8(description.data, description.len);
	self->addPositionalArgument(name_QString, description_QString);
}

void QCommandLineParser_ClearPositionalArguments(QCommandLineParser* self) {
	self->clearPositionalArguments();
}

void QCommandLineParser_Process(QCommandLineParser* self, struct miqt_array /* of struct miqt_string */  arguments) {
	QStringList arguments_QList;
	arguments_QList.reserve(arguments.len);
	struct miqt_string* arguments_arr = static_cast<struct miqt_string*>(arguments.data);
	for(size_t i = 0; i < arguments.len; ++i) {
		QString arguments_arr_i_QString = QString::fromUtf8(arguments_arr[i].data, arguments_arr[i].len);
		arguments_QList.push_back(arguments_arr_i_QString);
	}
	self->process(arguments_QList);
}

void QCommandLineParser_ProcessWithApp(QCommandLineParser* self, QCoreApplication* app) {
	self->process(*app);
}

bool QCommandLineParser_Parse(QCommandLineParser* self, struct miqt_array /* of struct miqt_string */  arguments) {
	QStringList arguments_QList;
	arguments_QList.reserve(arguments.len);
	struct miqt_string* arguments_arr = static_cast<struct miqt_string*>(arguments.data);
	for(size_t i = 0; i < arguments.len; ++i) {
		QString arguments_arr_i_QString = QString::fromUtf8(arguments_arr[i].data, arguments_arr[i].len);
		arguments_QList.push_back(arguments_arr_i_QString);
	}
	return self->parse(arguments_QList);
}

struct miqt_string QCommandLineParser_ErrorText(const QCommandLineParser* self) {
	QString _ret = self->errorText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCommandLineParser_IsSet(const QCommandLineParser* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->isSet(name_QString);
}

struct miqt_string QCommandLineParser_Value(const QCommandLineParser* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString _ret = self->value(name_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QCommandLineParser_Values(const QCommandLineParser* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QStringList _ret = self->values(name_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QCommandLineParser_IsSetWithOption(const QCommandLineParser* self, QCommandLineOption* option) {
	return self->isSet(*option);
}

struct miqt_string QCommandLineParser_ValueWithOption(const QCommandLineParser* self, QCommandLineOption* option) {
	QString _ret = self->value(*option);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QCommandLineParser_ValuesWithOption(const QCommandLineParser* self, QCommandLineOption* option) {
	QStringList _ret = self->values(*option);
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QCommandLineParser_PositionalArguments(const QCommandLineParser* self) {
	QStringList _ret = self->positionalArguments();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QCommandLineParser_OptionNames(const QCommandLineParser* self) {
	QStringList _ret = self->optionNames();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QCommandLineParser_UnknownOptionNames(const QCommandLineParser* self) {
	QStringList _ret = self->unknownOptionNames();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QCommandLineParser_ShowVersion(QCommandLineParser* self) {
	self->showVersion();
}

void QCommandLineParser_ShowHelp(QCommandLineParser* self) {
	self->showHelp();
}

struct miqt_string QCommandLineParser_HelpText(const QCommandLineParser* self) {
	QString _ret = self->helpText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCommandLineParser_Tr2(const char* sourceText, const char* disambiguation) {
	QString _ret = QCommandLineParser::tr(sourceText, disambiguation);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCommandLineParser_Tr3(const char* sourceText, const char* disambiguation, int n) {
	QString _ret = QCommandLineParser::tr(sourceText, disambiguation, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCommandLineParser_AddPositionalArgument3(QCommandLineParser* self, struct miqt_string name, struct miqt_string description, struct miqt_string syntax) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString description_QString = QString::fromUtf8(description.data, description.len);
	QString syntax_QString = QString::fromUtf8(syntax.data, syntax.len);
	self->addPositionalArgument(name_QString, description_QString, syntax_QString);
}

void QCommandLineParser_ShowHelp1(QCommandLineParser* self, int exitCode) {
	self->showHelp(static_cast<int>(exitCode));
}

void QCommandLineParser_Delete(QCommandLineParser* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QCommandLineParser*>( self );
	} else {
		delete self;
	}
}

