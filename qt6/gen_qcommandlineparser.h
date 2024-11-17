#pragma once
#ifndef MIQT_QT6_GEN_QCOMMANDLINEPARSER_H
#define MIQT_QT6_GEN_QCOMMANDLINEPARSER_H

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
struct miqt_string QCommandLineParser_Tr(const char* sourceText);
void QCommandLineParser_SetSingleDashWordOptionMode(QCommandLineParser* self, int parsingMode);
void QCommandLineParser_SetOptionsAfterPositionalArgumentsMode(QCommandLineParser* self, int mode);
bool QCommandLineParser_AddOption(QCommandLineParser* self, QCommandLineOption* commandLineOption);
bool QCommandLineParser_AddOptions(QCommandLineParser* self, struct miqt_array /* of QCommandLineOption* */  options);
QCommandLineOption* QCommandLineParser_AddVersionOption(QCommandLineParser* self);
QCommandLineOption* QCommandLineParser_AddHelpOption(QCommandLineParser* self);
void QCommandLineParser_SetApplicationDescription(QCommandLineParser* self, struct miqt_string description);
struct miqt_string QCommandLineParser_ApplicationDescription(const QCommandLineParser* self);
void QCommandLineParser_AddPositionalArgument(QCommandLineParser* self, struct miqt_string name, struct miqt_string description);
void QCommandLineParser_ClearPositionalArguments(QCommandLineParser* self);
void QCommandLineParser_Process(QCommandLineParser* self, struct miqt_array /* of struct miqt_string */  arguments);
void QCommandLineParser_ProcessWithApp(QCommandLineParser* self, QCoreApplication* app);
bool QCommandLineParser_Parse(QCommandLineParser* self, struct miqt_array /* of struct miqt_string */  arguments);
struct miqt_string QCommandLineParser_ErrorText(const QCommandLineParser* self);
bool QCommandLineParser_IsSet(const QCommandLineParser* self, struct miqt_string name);
struct miqt_string QCommandLineParser_Value(const QCommandLineParser* self, struct miqt_string name);
struct miqt_array /* of struct miqt_string */  QCommandLineParser_Values(const QCommandLineParser* self, struct miqt_string name);
bool QCommandLineParser_IsSetWithOption(const QCommandLineParser* self, QCommandLineOption* option);
struct miqt_string QCommandLineParser_ValueWithOption(const QCommandLineParser* self, QCommandLineOption* option);
struct miqt_array /* of struct miqt_string */  QCommandLineParser_ValuesWithOption(const QCommandLineParser* self, QCommandLineOption* option);
struct miqt_array /* of struct miqt_string */  QCommandLineParser_PositionalArguments(const QCommandLineParser* self);
struct miqt_array /* of struct miqt_string */  QCommandLineParser_OptionNames(const QCommandLineParser* self);
struct miqt_array /* of struct miqt_string */  QCommandLineParser_UnknownOptionNames(const QCommandLineParser* self);
void QCommandLineParser_ShowVersion(QCommandLineParser* self);
void QCommandLineParser_ShowHelp(QCommandLineParser* self);
struct miqt_string QCommandLineParser_HelpText(const QCommandLineParser* self);
struct miqt_string QCommandLineParser_Tr2(const char* sourceText, const char* disambiguation);
struct miqt_string QCommandLineParser_Tr3(const char* sourceText, const char* disambiguation, int n);
void QCommandLineParser_AddPositionalArgument3(QCommandLineParser* self, struct miqt_string name, struct miqt_string description, struct miqt_string syntax);
void QCommandLineParser_ShowHelp1(QCommandLineParser* self, int exitCode);
void QCommandLineParser_Delete(QCommandLineParser* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
