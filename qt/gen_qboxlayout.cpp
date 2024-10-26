#include <QBoxLayout>
#include <QHBoxLayout>
#include <QLayout>
#include <QLayoutItem>
#include <QMetaObject>
#include <QRect>
#include <QSize>
#include <QSpacerItem>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVBoxLayout>
#include <QWidget>
#include <qboxlayout.h>
#include "gen_qboxlayout.h"
#include "_cgo_export.h"

QBoxLayout* QBoxLayout_new(int param1) {
	return new QBoxLayout(static_cast<QBoxLayout::Direction>(param1));
}

QBoxLayout* QBoxLayout_new2(int param1, QWidget* parent) {
	return new QBoxLayout(static_cast<QBoxLayout::Direction>(param1), parent);
}

QMetaObject* QBoxLayout_MetaObject(const QBoxLayout* self) {
	return (QMetaObject*) self->metaObject();
}

void* QBoxLayout_Metacast(QBoxLayout* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QBoxLayout_Tr(const char* s) {
	QString _ret = QBoxLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QBoxLayout_TrUtf8(const char* s) {
	QString _ret = QBoxLayout::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QBoxLayout_Direction(const QBoxLayout* self) {
	QBoxLayout::Direction _ret = self->direction();
	return static_cast<int>(_ret);
}

void QBoxLayout_SetDirection(QBoxLayout* self, int direction) {
	self->setDirection(static_cast<QBoxLayout::Direction>(direction));
}

void QBoxLayout_AddSpacing(QBoxLayout* self, int size) {
	self->addSpacing(static_cast<int>(size));
}

void QBoxLayout_AddStretch(QBoxLayout* self) {
	self->addStretch();
}

void QBoxLayout_AddSpacerItem(QBoxLayout* self, QSpacerItem* spacerItem) {
	self->addSpacerItem(spacerItem);
}

void QBoxLayout_AddWidget(QBoxLayout* self, QWidget* param1) {
	self->addWidget(param1);
}

void QBoxLayout_AddLayout(QBoxLayout* self, QLayout* layout) {
	self->addLayout(layout);
}

void QBoxLayout_AddStrut(QBoxLayout* self, int param1) {
	self->addStrut(static_cast<int>(param1));
}

void QBoxLayout_AddItem(QBoxLayout* self, QLayoutItem* param1) {
	self->addItem(param1);
}

void QBoxLayout_InsertSpacing(QBoxLayout* self, int index, int size) {
	self->insertSpacing(static_cast<int>(index), static_cast<int>(size));
}

void QBoxLayout_InsertStretch(QBoxLayout* self, int index) {
	self->insertStretch(static_cast<int>(index));
}

void QBoxLayout_InsertSpacerItem(QBoxLayout* self, int index, QSpacerItem* spacerItem) {
	self->insertSpacerItem(static_cast<int>(index), spacerItem);
}

void QBoxLayout_InsertWidget(QBoxLayout* self, int index, QWidget* widget) {
	self->insertWidget(static_cast<int>(index), widget);
}

void QBoxLayout_InsertLayout(QBoxLayout* self, int index, QLayout* layout) {
	self->insertLayout(static_cast<int>(index), layout);
}

void QBoxLayout_InsertItem(QBoxLayout* self, int index, QLayoutItem* param2) {
	self->insertItem(static_cast<int>(index), param2);
}

int QBoxLayout_Spacing(const QBoxLayout* self) {
	return self->spacing();
}

void QBoxLayout_SetSpacing(QBoxLayout* self, int spacing) {
	self->setSpacing(static_cast<int>(spacing));
}

bool QBoxLayout_SetStretchFactor(QBoxLayout* self, QWidget* w, int stretch) {
	return self->setStretchFactor(w, static_cast<int>(stretch));
}

bool QBoxLayout_SetStretchFactor2(QBoxLayout* self, QLayout* l, int stretch) {
	return self->setStretchFactor(l, static_cast<int>(stretch));
}

void QBoxLayout_SetStretch(QBoxLayout* self, int index, int stretch) {
	self->setStretch(static_cast<int>(index), static_cast<int>(stretch));
}

int QBoxLayout_Stretch(const QBoxLayout* self, int index) {
	return self->stretch(static_cast<int>(index));
}

QSize* QBoxLayout_SizeHint(const QBoxLayout* self) {
	return new QSize(self->sizeHint());
}

QSize* QBoxLayout_MinimumSize(const QBoxLayout* self) {
	return new QSize(self->minimumSize());
}

QSize* QBoxLayout_MaximumSize(const QBoxLayout* self) {
	return new QSize(self->maximumSize());
}

bool QBoxLayout_HasHeightForWidth(const QBoxLayout* self) {
	return self->hasHeightForWidth();
}

int QBoxLayout_HeightForWidth(const QBoxLayout* self, int param1) {
	return self->heightForWidth(static_cast<int>(param1));
}

int QBoxLayout_MinimumHeightForWidth(const QBoxLayout* self, int param1) {
	return self->minimumHeightForWidth(static_cast<int>(param1));
}

int QBoxLayout_ExpandingDirections(const QBoxLayout* self) {
	Qt::Orientations _ret = self->expandingDirections();
	return static_cast<int>(_ret);
}

void QBoxLayout_Invalidate(QBoxLayout* self) {
	self->invalidate();
}

QLayoutItem* QBoxLayout_ItemAt(const QBoxLayout* self, int param1) {
	return self->itemAt(static_cast<int>(param1));
}

QLayoutItem* QBoxLayout_TakeAt(QBoxLayout* self, int param1) {
	return self->takeAt(static_cast<int>(param1));
}

int QBoxLayout_Count(const QBoxLayout* self) {
	return self->count();
}

void QBoxLayout_SetGeometry(QBoxLayout* self, QRect* geometry) {
	self->setGeometry(*geometry);
}

struct miqt_string QBoxLayout_Tr2(const char* s, const char* c) {
	QString _ret = QBoxLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QBoxLayout_Tr3(const char* s, const char* c, int n) {
	QString _ret = QBoxLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QBoxLayout_TrUtf82(const char* s, const char* c) {
	QString _ret = QBoxLayout::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QBoxLayout_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QBoxLayout::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QBoxLayout_AddStretch1(QBoxLayout* self, int stretch) {
	self->addStretch(static_cast<int>(stretch));
}

void QBoxLayout_AddWidget2(QBoxLayout* self, QWidget* param1, int stretch) {
	self->addWidget(param1, static_cast<int>(stretch));
}

void QBoxLayout_AddWidget3(QBoxLayout* self, QWidget* param1, int stretch, int alignment) {
	self->addWidget(param1, static_cast<int>(stretch), static_cast<Qt::Alignment>(alignment));
}

void QBoxLayout_AddLayout2(QBoxLayout* self, QLayout* layout, int stretch) {
	self->addLayout(layout, static_cast<int>(stretch));
}

void QBoxLayout_InsertStretch2(QBoxLayout* self, int index, int stretch) {
	self->insertStretch(static_cast<int>(index), static_cast<int>(stretch));
}

void QBoxLayout_InsertWidget3(QBoxLayout* self, int index, QWidget* widget, int stretch) {
	self->insertWidget(static_cast<int>(index), widget, static_cast<int>(stretch));
}

void QBoxLayout_InsertWidget4(QBoxLayout* self, int index, QWidget* widget, int stretch, int alignment) {
	self->insertWidget(static_cast<int>(index), widget, static_cast<int>(stretch), static_cast<Qt::Alignment>(alignment));
}

void QBoxLayout_InsertLayout3(QBoxLayout* self, int index, QLayout* layout, int stretch) {
	self->insertLayout(static_cast<int>(index), layout, static_cast<int>(stretch));
}

void QBoxLayout_Delete(QBoxLayout* self) {
	delete self;
}

QHBoxLayout* QHBoxLayout_new(QWidget* parent) {
	return new QHBoxLayout(parent);
}

QHBoxLayout* QHBoxLayout_new2() {
	return new QHBoxLayout();
}

QMetaObject* QHBoxLayout_MetaObject(const QHBoxLayout* self) {
	return (QMetaObject*) self->metaObject();
}

void* QHBoxLayout_Metacast(QHBoxLayout* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QHBoxLayout_Tr(const char* s) {
	QString _ret = QHBoxLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHBoxLayout_TrUtf8(const char* s) {
	QString _ret = QHBoxLayout::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHBoxLayout_Tr2(const char* s, const char* c) {
	QString _ret = QHBoxLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHBoxLayout_Tr3(const char* s, const char* c, int n) {
	QString _ret = QHBoxLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHBoxLayout_TrUtf82(const char* s, const char* c) {
	QString _ret = QHBoxLayout::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHBoxLayout_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QHBoxLayout::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QHBoxLayout_Delete(QHBoxLayout* self) {
	delete self;
}

QVBoxLayout* QVBoxLayout_new(QWidget* parent) {
	return new QVBoxLayout(parent);
}

QVBoxLayout* QVBoxLayout_new2() {
	return new QVBoxLayout();
}

QMetaObject* QVBoxLayout_MetaObject(const QVBoxLayout* self) {
	return (QMetaObject*) self->metaObject();
}

void* QVBoxLayout_Metacast(QVBoxLayout* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QVBoxLayout_Tr(const char* s) {
	QString _ret = QVBoxLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVBoxLayout_TrUtf8(const char* s) {
	QString _ret = QVBoxLayout::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVBoxLayout_Tr2(const char* s, const char* c) {
	QString _ret = QVBoxLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVBoxLayout_Tr3(const char* s, const char* c, int n) {
	QString _ret = QVBoxLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVBoxLayout_TrUtf82(const char* s, const char* c) {
	QString _ret = QVBoxLayout::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVBoxLayout_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QVBoxLayout::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QVBoxLayout_Delete(QVBoxLayout* self) {
	delete self;
}

