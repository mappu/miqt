#include <QInternal>
#include <QKeyCombination>
#define WORKAROUND_INNER_CLASS_DEFINITION_Disambiguated_t
#include <qnamespace.h>
#include "gen_qnamespace.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

Disambiguated_t* Disambiguated_t_new() {
	return new Qt::Disambiguated_t();
}

Disambiguated_t* Disambiguated_t_new2(Disambiguated_t* param1) {
	return new Qt::Disambiguated_t(*param1);
}

void Disambiguated_t_delete(Disambiguated_t* self) {
	delete self;
}

void QInternal_delete(QInternal* self) {
	delete self;
}

QKeyCombination* QKeyCombination_new() {
	return new QKeyCombination();
}

QKeyCombination* QKeyCombination_new2(int modifiers) {
	return new QKeyCombination(static_cast<Qt::Modifiers>(modifiers));
}

QKeyCombination* QKeyCombination_new3(int modifiers) {
	return new QKeyCombination(static_cast<Qt::KeyboardModifiers>(modifiers));
}

QKeyCombination* QKeyCombination_new4(QKeyCombination* param1) {
	return new QKeyCombination(*param1);
}

QKeyCombination* QKeyCombination_new5(int key) {
	return new QKeyCombination(static_cast<Qt::Key>(key));
}

QKeyCombination* QKeyCombination_new6(int modifiers, int key) {
	return new QKeyCombination(static_cast<Qt::Modifiers>(modifiers), static_cast<Qt::Key>(key));
}

QKeyCombination* QKeyCombination_new7(int modifiers, int key) {
	return new QKeyCombination(static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::Key>(key));
}

int QKeyCombination_keyboardModifiers(const QKeyCombination* self) {
	Qt::KeyboardModifiers _ret = self->keyboardModifiers();
	return static_cast<int>(_ret);
}

int QKeyCombination_key(const QKeyCombination* self) {
	Qt::Key _ret = self->key();
	return static_cast<int>(_ret);
}

QKeyCombination* QKeyCombination_fromCombined(int combined) {
	return new QKeyCombination(QKeyCombination::fromCombined(static_cast<int>(combined)));
}

int QKeyCombination_toCombined(const QKeyCombination* self) {
	return self->toCombined();
}

int QKeyCombination_ToInt(const QKeyCombination* self) {
	return self->operator int();
}

void QKeyCombination_delete(QKeyCombination* self) {
	delete self;
}

