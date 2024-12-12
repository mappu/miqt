#include <QAnyStringView>
#include <QByteArray>
#include <QChar>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qanystringview.h>
#include "gen_qanystringview.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

QAnyStringView* QAnyStringView_new() {
	return new QAnyStringView();
}

QAnyStringView* QAnyStringView_new2(struct miqt_string str) {
	QByteArray str_QByteArray(str.data, str.len);
	return new QAnyStringView(str_QByteArray);
}

QAnyStringView* QAnyStringView_new3(struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	return new QAnyStringView(str_QString);
}

QAnyStringView* QAnyStringView_new4(QChar* c) {
	return new QAnyStringView(*c);
}

QAnyStringView* QAnyStringView_new5(QAnyStringView* param1) {
	return new QAnyStringView(*param1);
}

struct miqt_string QAnyStringView_ToString(const QAnyStringView* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

ptrdiff_t QAnyStringView_Size(const QAnyStringView* self) {
	qsizetype _ret = self->size();
	return static_cast<ptrdiff_t>(_ret);
}

const void* QAnyStringView_Data(const QAnyStringView* self) {
	return (const void*) self->data();
}

int QAnyStringView_Compare(QAnyStringView* lhs, QAnyStringView* rhs) {
	return QAnyStringView::compare(*lhs, *rhs);
}

bool QAnyStringView_Equal(QAnyStringView* lhs, QAnyStringView* rhs) {
	return QAnyStringView::equal(*lhs, *rhs);
}

QChar* QAnyStringView_Front(const QAnyStringView* self) {
	return new QChar(self->front());
}

QChar* QAnyStringView_Back(const QAnyStringView* self) {
	return new QChar(self->back());
}

bool QAnyStringView_Empty(const QAnyStringView* self) {
	return self->empty();
}

ptrdiff_t QAnyStringView_SizeBytes(const QAnyStringView* self) {
	qsizetype _ret = self->size_bytes();
	return static_cast<ptrdiff_t>(_ret);
}

bool QAnyStringView_IsNull(const QAnyStringView* self) {
	return self->isNull();
}

bool QAnyStringView_IsEmpty(const QAnyStringView* self) {
	return self->isEmpty();
}

ptrdiff_t QAnyStringView_Length(const QAnyStringView* self) {
	qsizetype _ret = self->length();
	return static_cast<ptrdiff_t>(_ret);
}

int QAnyStringView_Compare3(QAnyStringView* lhs, QAnyStringView* rhs, int cs) {
	return QAnyStringView::compare(*lhs, *rhs, static_cast<Qt::CaseSensitivity>(cs));
}

void QAnyStringView_Delete(QAnyStringView* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QAnyStringView*>( self );
	} else {
		delete self;
	}
}

