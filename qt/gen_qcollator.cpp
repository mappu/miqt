#include <QChar>
#include <QCollator>
#include <QCollatorSortKey>
#include <QLocale>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcollator.h>
#include "gen_qcollator.h"
#include "_cgo_export.h"

void QCollatorSortKey_new(QCollatorSortKey* other, QCollatorSortKey** outptr_QCollatorSortKey) {
	QCollatorSortKey* ret = new QCollatorSortKey(*other);
	*outptr_QCollatorSortKey = ret;
}

void QCollatorSortKey_OperatorAssign(QCollatorSortKey* self, QCollatorSortKey* other) {
	self->operator=(*other);
}

void QCollatorSortKey_Swap(QCollatorSortKey* self, QCollatorSortKey* other) {
	self->swap(*other);
}

int QCollatorSortKey_Compare(const QCollatorSortKey* self, QCollatorSortKey* key) {
	return self->compare(*key);
}

void QCollatorSortKey_Delete(QCollatorSortKey* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QCollatorSortKey*>( self );
	} else {
		delete self;
	}
}

void QCollator_new(QCollator** outptr_QCollator) {
	QCollator* ret = new QCollator();
	*outptr_QCollator = ret;
}

void QCollator_new2(QLocale* locale, QCollator** outptr_QCollator) {
	QCollator* ret = new QCollator(*locale);
	*outptr_QCollator = ret;
}

void QCollator_new3(QCollator* param1, QCollator** outptr_QCollator) {
	QCollator* ret = new QCollator(*param1);
	*outptr_QCollator = ret;
}

void QCollator_OperatorAssign(QCollator* self, QCollator* param1) {
	self->operator=(*param1);
}

void QCollator_Swap(QCollator* self, QCollator* other) {
	self->swap(*other);
}

void QCollator_SetLocale(QCollator* self, QLocale* locale) {
	self->setLocale(*locale);
}

QLocale* QCollator_Locale(const QCollator* self) {
	return new QLocale(self->locale());
}

int QCollator_CaseSensitivity(const QCollator* self) {
	Qt::CaseSensitivity _ret = self->caseSensitivity();
	return static_cast<int>(_ret);
}

void QCollator_SetCaseSensitivity(QCollator* self, int cs) {
	self->setCaseSensitivity(static_cast<Qt::CaseSensitivity>(cs));
}

void QCollator_SetNumericMode(QCollator* self, bool on) {
	self->setNumericMode(on);
}

bool QCollator_NumericMode(const QCollator* self) {
	return self->numericMode();
}

void QCollator_SetIgnorePunctuation(QCollator* self, bool on) {
	self->setIgnorePunctuation(on);
}

bool QCollator_IgnorePunctuation(const QCollator* self) {
	return self->ignorePunctuation();
}

int QCollator_Compare(const QCollator* self, struct miqt_string s1, struct miqt_string s2) {
	QString s1_QString = QString::fromUtf8(s1.data, s1.len);
	QString s2_QString = QString::fromUtf8(s2.data, s2.len);
	return self->compare(s1_QString, s2_QString);
}

int QCollator_Compare3(const QCollator* self, QChar* s1, int len1, QChar* s2, int len2) {
	return self->compare(s1, static_cast<int>(len1), s2, static_cast<int>(len2));
}

bool QCollator_OperatorCall(const QCollator* self, struct miqt_string s1, struct miqt_string s2) {
	QString s1_QString = QString::fromUtf8(s1.data, s1.len);
	QString s2_QString = QString::fromUtf8(s2.data, s2.len);
	return self->operator()(s1_QString, s2_QString);
}

QCollatorSortKey* QCollator_SortKey(const QCollator* self, struct miqt_string stringVal) {
	QString stringVal_QString = QString::fromUtf8(stringVal.data, stringVal.len);
	return new QCollatorSortKey(self->sortKey(stringVal_QString));
}

void QCollator_Delete(QCollator* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QCollator*>( self );
	} else {
		delete self;
	}
}

