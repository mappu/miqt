#include <QInputMethod>
#include <QLocale>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTransform>
#include <QVariant>
#include <qinputmethod.h>
#include "gen_qinputmethod.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QInputMethod_cursorRectangleChanged(intptr_t);
void miqt_exec_callback_QInputMethod_anchorRectangleChanged(intptr_t);
void miqt_exec_callback_QInputMethod_keyboardRectangleChanged(intptr_t);
void miqt_exec_callback_QInputMethod_inputItemClipRectangleChanged(intptr_t);
void miqt_exec_callback_QInputMethod_visibleChanged(intptr_t);
void miqt_exec_callback_QInputMethod_animatingChanged(intptr_t);
void miqt_exec_callback_QInputMethod_localeChanged(intptr_t);
void miqt_exec_callback_QInputMethod_inputDirectionChanged(intptr_t, int);
#ifdef __cplusplus
} /* extern C */
#endif

void QInputMethod_virtbase(QInputMethod* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QInputMethod_metaObject(const QInputMethod* self) {
	return (QMetaObject*) self->metaObject();
}

void* QInputMethod_metacast(QInputMethod* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QInputMethod_tr(const char* s) {
	QString _ret = QInputMethod::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QTransform* QInputMethod_inputItemTransform(const QInputMethod* self) {
	return new QTransform(self->inputItemTransform());
}

void QInputMethod_setInputItemTransform(QInputMethod* self, QTransform* transform) {
	self->setInputItemTransform(*transform);
}

QRectF* QInputMethod_inputItemRectangle(const QInputMethod* self) {
	return new QRectF(self->inputItemRectangle());
}

void QInputMethod_setInputItemRectangle(QInputMethod* self, QRectF* rect) {
	self->setInputItemRectangle(*rect);
}

QRectF* QInputMethod_cursorRectangle(const QInputMethod* self) {
	return new QRectF(self->cursorRectangle());
}

QRectF* QInputMethod_anchorRectangle(const QInputMethod* self) {
	return new QRectF(self->anchorRectangle());
}

QRectF* QInputMethod_keyboardRectangle(const QInputMethod* self) {
	return new QRectF(self->keyboardRectangle());
}

QRectF* QInputMethod_inputItemClipRectangle(const QInputMethod* self) {
	return new QRectF(self->inputItemClipRectangle());
}

bool QInputMethod_isVisible(const QInputMethod* self) {
	return self->isVisible();
}

void QInputMethod_setVisible(QInputMethod* self, bool visible) {
	self->setVisible(visible);
}

bool QInputMethod_isAnimating(const QInputMethod* self) {
	return self->isAnimating();
}

QLocale* QInputMethod_locale(const QInputMethod* self) {
	return new QLocale(self->locale());
}

int QInputMethod_inputDirection(const QInputMethod* self) {
	Qt::LayoutDirection _ret = self->inputDirection();
	return static_cast<int>(_ret);
}

QVariant* QInputMethod_queryFocusObject(int query, QVariant* argument) {
	return new QVariant(QInputMethod::queryFocusObject(static_cast<Qt::InputMethodQuery>(query), *argument));
}

void QInputMethod_show(QInputMethod* self) {
	self->show();
}

void QInputMethod_hide(QInputMethod* self) {
	self->hide();
}

void QInputMethod_update(QInputMethod* self, int queries) {
	self->update(static_cast<Qt::InputMethodQueries>(queries));
}

void QInputMethod_reset(QInputMethod* self) {
	self->reset();
}

void QInputMethod_commit(QInputMethod* self) {
	self->commit();
}

void QInputMethod_invokeAction(QInputMethod* self, int a, int cursorPosition) {
	self->invokeAction(static_cast<QInputMethod::Action>(a), static_cast<int>(cursorPosition));
}

void QInputMethod_cursorRectangleChanged(QInputMethod* self) {
	self->cursorRectangleChanged();
}

void QInputMethod_connect_cursorRectangleChanged(QInputMethod* self, intptr_t slot) {
	QInputMethod::connect(self, static_cast<void (QInputMethod::*)()>(&QInputMethod::cursorRectangleChanged), self, [=]() {
		miqt_exec_callback_QInputMethod_cursorRectangleChanged(slot);
	});
}

void QInputMethod_anchorRectangleChanged(QInputMethod* self) {
	self->anchorRectangleChanged();
}

void QInputMethod_connect_anchorRectangleChanged(QInputMethod* self, intptr_t slot) {
	QInputMethod::connect(self, static_cast<void (QInputMethod::*)()>(&QInputMethod::anchorRectangleChanged), self, [=]() {
		miqt_exec_callback_QInputMethod_anchorRectangleChanged(slot);
	});
}

void QInputMethod_keyboardRectangleChanged(QInputMethod* self) {
	self->keyboardRectangleChanged();
}

void QInputMethod_connect_keyboardRectangleChanged(QInputMethod* self, intptr_t slot) {
	QInputMethod::connect(self, static_cast<void (QInputMethod::*)()>(&QInputMethod::keyboardRectangleChanged), self, [=]() {
		miqt_exec_callback_QInputMethod_keyboardRectangleChanged(slot);
	});
}

void QInputMethod_inputItemClipRectangleChanged(QInputMethod* self) {
	self->inputItemClipRectangleChanged();
}

void QInputMethod_connect_inputItemClipRectangleChanged(QInputMethod* self, intptr_t slot) {
	QInputMethod::connect(self, static_cast<void (QInputMethod::*)()>(&QInputMethod::inputItemClipRectangleChanged), self, [=]() {
		miqt_exec_callback_QInputMethod_inputItemClipRectangleChanged(slot);
	});
}

void QInputMethod_visibleChanged(QInputMethod* self) {
	self->visibleChanged();
}

void QInputMethod_connect_visibleChanged(QInputMethod* self, intptr_t slot) {
	QInputMethod::connect(self, static_cast<void (QInputMethod::*)()>(&QInputMethod::visibleChanged), self, [=]() {
		miqt_exec_callback_QInputMethod_visibleChanged(slot);
	});
}

void QInputMethod_animatingChanged(QInputMethod* self) {
	self->animatingChanged();
}

void QInputMethod_connect_animatingChanged(QInputMethod* self, intptr_t slot) {
	QInputMethod::connect(self, static_cast<void (QInputMethod::*)()>(&QInputMethod::animatingChanged), self, [=]() {
		miqt_exec_callback_QInputMethod_animatingChanged(slot);
	});
}

void QInputMethod_localeChanged(QInputMethod* self) {
	self->localeChanged();
}

void QInputMethod_connect_localeChanged(QInputMethod* self, intptr_t slot) {
	QInputMethod::connect(self, static_cast<void (QInputMethod::*)()>(&QInputMethod::localeChanged), self, [=]() {
		miqt_exec_callback_QInputMethod_localeChanged(slot);
	});
}

void QInputMethod_inputDirectionChanged(QInputMethod* self, int newDirection) {
	self->inputDirectionChanged(static_cast<Qt::LayoutDirection>(newDirection));
}

void QInputMethod_connect_inputDirectionChanged(QInputMethod* self, intptr_t slot) {
	QInputMethod::connect(self, static_cast<void (QInputMethod::*)(Qt::LayoutDirection)>(&QInputMethod::inputDirectionChanged), self, [=](Qt::LayoutDirection newDirection) {
		Qt::LayoutDirection newDirection_ret = newDirection;
		int sigval1 = static_cast<int>(newDirection_ret);
		miqt_exec_callback_QInputMethod_inputDirectionChanged(slot, sigval1);
	});
}

struct miqt_string QInputMethod_tr2(const char* s, const char* c) {
	QString _ret = QInputMethod::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputMethod_tr3(const char* s, const char* c, int n) {
	QString _ret = QInputMethod::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

