#ifndef GEN_QNAMESPACE_H
#define GEN_QNAMESPACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QInternal;
class QKeyCombination;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Disambiguated_t)
typedef Qt::Disambiguated_t Disambiguated_t;
#else
class Disambiguated_t;
#endif
#else
typedef struct QInternal QInternal;
typedef struct QKeyCombination QKeyCombination;
typedef struct Disambiguated_t Disambiguated_t;
#endif

Disambiguated_t* Disambiguated_t_new();
Disambiguated_t* Disambiguated_t_new2(Disambiguated_t* param1);
void Disambiguated_t_Delete(Disambiguated_t* self);

void QInternal_Delete(QInternal* self);

QKeyCombination* QKeyCombination_new();
QKeyCombination* QKeyCombination_new2(int modifiers);
QKeyCombination* QKeyCombination_new3(int modifiers);
QKeyCombination* QKeyCombination_new4(QKeyCombination* param1);
QKeyCombination* QKeyCombination_new5(int key);
QKeyCombination* QKeyCombination_new6(int modifiers, int key);
QKeyCombination* QKeyCombination_new7(int modifiers, int key);
int QKeyCombination_KeyboardModifiers(const QKeyCombination* self);
int QKeyCombination_Key(const QKeyCombination* self);
QKeyCombination* QKeyCombination_FromCombined(int combined);
int QKeyCombination_ToCombined(const QKeyCombination* self);
void QKeyCombination_Delete(QKeyCombination* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
