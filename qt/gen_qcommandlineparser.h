#ifndef GEN_QCOMMANDLINEPARSER_H
#define GEN_QCOMMANDLINEPARSER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
void QCommandLineParser_Tr(char* sourceText, char** _out, int* _out_Strlen);
void QCommandLineParser_TrUtf8(char* sourceText, char** _out, int* _out_Strlen);
bool QCommandLineParser_AddOption(QCommandLineParser* self, QCommandLineOption* commandLineOption);
bool QCommandLineParser_AddOptions(QCommandLineParser* self, QCommandLineOption** options, size_t options_len);
QCommandLineOption* QCommandLineParser_AddVersionOption(QCommandLineParser* self);
QCommandLineOption* QCommandLineParser_AddHelpOption(QCommandLineParser* self);
void QCommandLineParser_SetApplicationDescription(QCommandLineParser* self, const char* description, size_t description_Strlen);
void QCommandLineParser_ApplicationDescription(QCommandLineParser* self, char** _out, int* _out_Strlen);
void QCommandLineParser_AddPositionalArgument(QCommandLineParser* self, const char* name, size_t name_Strlen, const char* description, size_t description_Strlen);
void QCommandLineParser_ClearPositionalArguments(QCommandLineParser* self);
void QCommandLineParser_Process(QCommandLineParser* self, char** arguments, uint64_t* arguments_Lengths, size_t arguments_len);
void QCommandLineParser_ProcessWithApp(QCommandLineParser* self, QCoreApplication* app);
bool QCommandLineParser_Parse(QCommandLineParser* self, char** arguments, uint64_t* arguments_Lengths, size_t arguments_len);
void QCommandLineParser_ErrorText(QCommandLineParser* self, char** _out, int* _out_Strlen);
bool QCommandLineParser_IsSet(QCommandLineParser* self, const char* name, size_t name_Strlen);
void QCommandLineParser_Value(QCommandLineParser* self, const char* name, size_t name_Strlen, char** _out, int* _out_Strlen);
void QCommandLineParser_Values(QCommandLineParser* self, const char* name, size_t name_Strlen, char*** _out, int** _out_Lengths, size_t* _out_len);
bool QCommandLineParser_IsSetWithOption(QCommandLineParser* self, QCommandLineOption* option);
void QCommandLineParser_ValueWithOption(QCommandLineParser* self, QCommandLineOption* option, char** _out, int* _out_Strlen);
void QCommandLineParser_ValuesWithOption(QCommandLineParser* self, QCommandLineOption* option, char*** _out, int** _out_Lengths, size_t* _out_len);
void QCommandLineParser_PositionalArguments(QCommandLineParser* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QCommandLineParser_OptionNames(QCommandLineParser* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QCommandLineParser_UnknownOptionNames(QCommandLineParser* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QCommandLineParser_HelpText(QCommandLineParser* self, char** _out, int* _out_Strlen);
void QCommandLineParser_Tr2(char* sourceText, char* disambiguation, char** _out, int* _out_Strlen);
void QCommandLineParser_Tr3(char* sourceText, char* disambiguation, int n, char** _out, int* _out_Strlen);
void QCommandLineParser_TrUtf82(char* sourceText, char* disambiguation, char** _out, int* _out_Strlen);
void QCommandLineParser_TrUtf83(char* sourceText, char* disambiguation, int n, char** _out, int* _out_Strlen);
void QCommandLineParser_AddPositionalArgument3(QCommandLineParser* self, const char* name, size_t name_Strlen, const char* description, size_t description_Strlen, const char* syntax, size_t syntax_Strlen);
void QCommandLineParser_Delete(QCommandLineParser* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
