#include <QChar>
#include <QCollator>
#include <QCollatorSortKey>
#include <QLocale>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcollator.h>
#include "gen_qcollator.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QCollatorSortKey* QCollatorSortKey_new(QCollatorSortKey* other) {
	return new QCollatorSortKey(*other);
}

void QCollatorSortKey_operatorAssign(QCollatorSortKey* self, QCollatorSortKey* other) {
	self->operator=(*other);
}

void QCollatorSortKey_swap(QCollatorSortKey* self, QCollatorSortKey* other) {
	self->swap(*other);
}

int QCollatorSortKey_compare(const QCollatorSortKey* self, QCollatorSortKey* key) {
	return self->compare(*key);
}

void QCollatorSortKey_delete(QCollatorSortKey* self) {
	delete self;
}

QCollator* QCollator_new() {
	return new QCollator();
}

QCollator* QCollator_new2(QLocale* locale) {
	return new QCollator(*locale);
}

QCollator* QCollator_new3(QCollator* param1) {
	return new QCollator(*param1);
}

void QCollator_operatorAssign(QCollator* self, QCollator* param1) {
	self->operator=(*param1);
}

void QCollator_swap(QCollator* self, QCollator* other) {
	self->swap(*other);
}

void QCollator_setLocale(QCollator* self, QLocale* locale) {
	self->setLocale(*locale);
}

QLocale* QCollator_locale(const QCollator* self) {
	return new QLocale(self->locale());
}

int QCollator_caseSensitivity(const QCollator* self) {
	Qt::CaseSensitivity _ret = self->caseSensitivity();
	return static_cast<int>(_ret);
}

void QCollator_setCaseSensitivity(QCollator* self, int cs) {
	self->setCaseSensitivity(static_cast<Qt::CaseSensitivity>(cs));
}

void QCollator_setNumericMode(QCollator* self, bool on) {
	self->setNumericMode(on);
}

bool QCollator_numericMode(const QCollator* self) {
	return self->numericMode();
}

void QCollator_setIgnorePunctuation(QCollator* self, bool on) {
	self->setIgnorePunctuation(on);
}

bool QCollator_ignorePunctuation(const QCollator* self) {
	return self->ignorePunctuation();
}

int QCollator_compare(const QCollator* self, struct miqt_string s1, struct miqt_string s2) {
	QString s1_QString = QString::fromUtf8(s1.data, s1.len);
	QString s2_QString = QString::fromUtf8(s2.data, s2.len);
	return self->compare(s1_QString, s2_QString);
}

int QCollator_compare2(const QCollator* self, QChar* s1, ptrdiff_t len1, QChar* s2, ptrdiff_t len2) {
	return self->compare(s1, (qsizetype)(len1), s2, (qsizetype)(len2));
}

bool QCollator_operatorCall(const QCollator* self, struct miqt_string s1, struct miqt_string s2) {
	QString s1_QString = QString::fromUtf8(s1.data, s1.len);
	QString s2_QString = QString::fromUtf8(s2.data, s2.len);
	return self->operator()(s1_QString, s2_QString);
}

QCollatorSortKey* QCollator_sortKey(const QCollator* self, struct miqt_string string) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	return new QCollatorSortKey(self->sortKey(string_QString));
}

void QCollator_delete(QCollator* self) {
	delete self;
}

