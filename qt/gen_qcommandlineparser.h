#pragma once
#ifndef MIQT_QT_GEN_QCOMMANDLINEPARSER_H
#define MIQT_QT_GEN_QCOMMANDLINEPARSER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCommandLineOption;
class QCommandLineParser;
class QCoreApplication;
#else
typedef struct QCommandLineOption QCommandLineOption;
typedef struct QCommandLineParser QCommandLineParser;
typedef struct QCoreApplication QCoreApplication;
#endif

QCommandLineParser* QCommandLineParser_new();
struct miqt_string QCommandLineParser_tr(const char* sourceText);
struct miqt_string QCommandLineParser_trUtf8(const char* sourceText);
void QCommandLineParser_setSingleDashWordOptionMode(QCommandLineParser* self, int parsingMode);
void QCommandLineParser_setOptionsAfterPositionalArgumentsMode(QCommandLineParser* self, int mode);
bool QCommandLineParser_addOption(QCommandLineParser* self, QCommandLineOption* commandLineOption);
bool QCommandLineParser_addOptions(QCommandLineParser* self, struct miqt_array /* of QCommandLineOption* */  options);
QCommandLineOption* QCommandLineParser_addVersionOption(QCommandLineParser* self);
QCommandLineOption* QCommandLineParser_addHelpOption(QCommandLineParser* self);
void QCommandLineParser_setApplicationDescription(QCommandLineParser* self, struct miqt_string description);
struct miqt_string QCommandLineParser_applicationDescription(const QCommandLineParser* self);
void QCommandLineParser_addPositionalArgument(QCommandLineParser* self, struct miqt_string name, struct miqt_string description);
void QCommandLineParser_clearPositionalArguments(QCommandLineParser* self);
void QCommandLineParser_process(QCommandLineParser* self, struct miqt_array /* of struct miqt_string */  arguments);
void QCommandLineParser_processWithApp(QCommandLineParser* self, QCoreApplication* app);
bool QCommandLineParser_parse(QCommandLineParser* self, struct miqt_array /* of struct miqt_string */  arguments);
struct miqt_string QCommandLineParser_errorText(const QCommandLineParser* self);
bool QCommandLineParser_isSet(const QCommandLineParser* self, struct miqt_string name);
struct miqt_string QCommandLineParser_value(const QCommandLineParser* self, struct miqt_string name);
struct miqt_array /* of struct miqt_string */  QCommandLineParser_values(const QCommandLineParser* self, struct miqt_string name);
bool QCommandLineParser_isSetWithOption(const QCommandLineParser* self, QCommandLineOption* option);
struct miqt_string QCommandLineParser_valueWithOption(const QCommandLineParser* self, QCommandLineOption* option);
struct miqt_array /* of struct miqt_string */  QCommandLineParser_valuesWithOption(const QCommandLineParser* self, QCommandLineOption* option);
struct miqt_array /* of struct miqt_string */  QCommandLineParser_positionalArguments(const QCommandLineParser* self);
struct miqt_array /* of struct miqt_string */  QCommandLineParser_optionNames(const QCommandLineParser* self);
struct miqt_array /* of struct miqt_string */  QCommandLineParser_unknownOptionNames(const QCommandLineParser* self);
void QCommandLineParser_showVersion(QCommandLineParser* self);
void QCommandLineParser_showHelp(QCommandLineParser* self);
struct miqt_string QCommandLineParser_helpText(const QCommandLineParser* self);
struct miqt_string QCommandLineParser_tr2(const char* sourceText, const char* disambiguation);
struct miqt_string QCommandLineParser_tr3(const char* sourceText, const char* disambiguation, int n);
struct miqt_string QCommandLineParser_trUtf82(const char* sourceText, const char* disambiguation);
struct miqt_string QCommandLineParser_trUtf83(const char* sourceText, const char* disambiguation, int n);
void QCommandLineParser_addPositionalArgument2(QCommandLineParser* self, struct miqt_string name, struct miqt_string description, struct miqt_string syntax);
void QCommandLineParser_showHelpWithExitCode(QCommandLineParser* self, int exitCode);

void QCommandLineParser_delete(QCommandLineParser* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
