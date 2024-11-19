#include <QInternal>
#include <QKeyCombination>
#define WORKAROUND_INNER_CLASS_DEFINITION_Disambiguated_t
#include <qnamespace.h>
#include "gen_qnamespace.h"
#include "_cgo_export.h"

void Disambiguated_t_new(Disambiguated_t** outptr_Disambiguated_t) {
	Qt::Disambiguated_t* ret = new Qt::Disambiguated_t();
	*outptr_Disambiguated_t = ret;
}

void Disambiguated_t_new2(Disambiguated_t* param1, Disambiguated_t** outptr_Disambiguated_t) {
	Qt::Disambiguated_t* ret = new Qt::Disambiguated_t(*param1);
	*outptr_Disambiguated_t = ret;
}

void Disambiguated_t_Delete(Disambiguated_t* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Qt::Disambiguated_t*>( self );
	} else {
		delete self;
	}
}

void QInternal_Delete(QInternal* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QInternal*>( self );
	} else {
		delete self;
	}
}

void QKeyCombination_new(QKeyCombination** outptr_QKeyCombination) {
	QKeyCombination* ret = new QKeyCombination();
	*outptr_QKeyCombination = ret;
}

void QKeyCombination_new2(int modifiers, QKeyCombination** outptr_QKeyCombination) {
	QKeyCombination* ret = new QKeyCombination(static_cast<Qt::Modifiers>(modifiers));
	*outptr_QKeyCombination = ret;
}

void QKeyCombination_new3(int modifiers, QKeyCombination** outptr_QKeyCombination) {
	QKeyCombination* ret = new QKeyCombination(static_cast<Qt::KeyboardModifiers>(modifiers));
	*outptr_QKeyCombination = ret;
}

void QKeyCombination_new4(QKeyCombination* param1, QKeyCombination** outptr_QKeyCombination) {
	QKeyCombination* ret = new QKeyCombination(*param1);
	*outptr_QKeyCombination = ret;
}

void QKeyCombination_new5(int key, QKeyCombination** outptr_QKeyCombination) {
	QKeyCombination* ret = new QKeyCombination(static_cast<Qt::Key>(key));
	*outptr_QKeyCombination = ret;
}

void QKeyCombination_new6(int modifiers, int key, QKeyCombination** outptr_QKeyCombination) {
	QKeyCombination* ret = new QKeyCombination(static_cast<Qt::Modifiers>(modifiers), static_cast<Qt::Key>(key));
	*outptr_QKeyCombination = ret;
}

void QKeyCombination_new7(int modifiers, int key, QKeyCombination** outptr_QKeyCombination) {
	QKeyCombination* ret = new QKeyCombination(static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::Key>(key));
	*outptr_QKeyCombination = ret;
}

int QKeyCombination_KeyboardModifiers(const QKeyCombination* self) {
	Qt::KeyboardModifiers _ret = self->keyboardModifiers();
	return static_cast<int>(_ret);
}

int QKeyCombination_Key(const QKeyCombination* self) {
	Qt::Key _ret = self->key();
	return static_cast<int>(_ret);
}

QKeyCombination* QKeyCombination_FromCombined(int combined) {
	return new QKeyCombination(QKeyCombination::fromCombined(static_cast<int>(combined)));
}

int QKeyCombination_ToCombined(const QKeyCombination* self) {
	return self->toCombined();
}

void QKeyCombination_Delete(QKeyCombination* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QKeyCombination*>( self );
	} else {
		delete self;
	}
}

