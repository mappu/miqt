#ifndef GEN_QCOMMANDLINEOPTION_H
#define GEN_QCOMMANDLINEOPTION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCommandLineOption;
#else
typedef struct QCommandLineOption QCommandLineOption;
#endif

QCommandLineOption* QCommandLineOption_new(const char* name, size_t name_Strlen);
QCommandLineOption* QCommandLineOption_new2(char** names, uint64_t* names_Lengths, size_t names_len);
QCommandLineOption* QCommandLineOption_new3(const char* name, size_t name_Strlen, const char* description, size_t description_Strlen);
QCommandLineOption* QCommandLineOption_new4(char** names, uint64_t* names_Lengths, size_t names_len, const char* description, size_t description_Strlen);
QCommandLineOption* QCommandLineOption_new5(QCommandLineOption* other);
QCommandLineOption* QCommandLineOption_new6(const char* name, size_t name_Strlen, const char* description, size_t description_Strlen, const char* valueName, size_t valueName_Strlen);
QCommandLineOption* QCommandLineOption_new7(const char* name, size_t name_Strlen, const char* description, size_t description_Strlen, const char* valueName, size_t valueName_Strlen, const char* defaultValue, size_t defaultValue_Strlen);
QCommandLineOption* QCommandLineOption_new8(char** names, uint64_t* names_Lengths, size_t names_len, const char* description, size_t description_Strlen, const char* valueName, size_t valueName_Strlen);
QCommandLineOption* QCommandLineOption_new9(char** names, uint64_t* names_Lengths, size_t names_len, const char* description, size_t description_Strlen, const char* valueName, size_t valueName_Strlen, const char* defaultValue, size_t defaultValue_Strlen);
void QCommandLineOption_OperatorAssign(QCommandLineOption* self, QCommandLineOption* other);
void QCommandLineOption_Swap(QCommandLineOption* self, QCommandLineOption* other);
void QCommandLineOption_Names(QCommandLineOption* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QCommandLineOption_SetValueName(QCommandLineOption* self, const char* name, size_t name_Strlen);
void QCommandLineOption_ValueName(QCommandLineOption* self, char** _out, int* _out_Strlen);
void QCommandLineOption_SetDescription(QCommandLineOption* self, const char* description, size_t description_Strlen);
void QCommandLineOption_Description(QCommandLineOption* self, char** _out, int* _out_Strlen);
void QCommandLineOption_SetDefaultValue(QCommandLineOption* self, const char* defaultValue, size_t defaultValue_Strlen);
void QCommandLineOption_SetDefaultValues(QCommandLineOption* self, char** defaultValues, uint64_t* defaultValues_Lengths, size_t defaultValues_len);
void QCommandLineOption_DefaultValues(QCommandLineOption* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QCommandLineOption_SetHidden(QCommandLineOption* self, bool hidden);
bool QCommandLineOption_IsHidden(QCommandLineOption* self);
void QCommandLineOption_Delete(QCommandLineOption* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
