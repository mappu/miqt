#include <QInputMethod>
#include <QLocale>
#include <QMetaObject>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTransform>
#include <QVariant>
#include "qinputmethod.h"
#include "gen_qinputmethod.h"
#include "_cgo_export.h"

QMetaObject* QInputMethod_MetaObject(const QInputMethod* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QInputMethod_Tr(const char* s) {
	QString _ret = QInputMethod::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QInputMethod_TrUtf8(const char* s) {
	QString _ret = QInputMethod::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QTransform* QInputMethod_InputItemTransform(const QInputMethod* self) {
	QTransform _ret = self->inputItemTransform();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(_ret));
}

void QInputMethod_SetInputItemTransform(QInputMethod* self, QTransform* transform) {
	self->setInputItemTransform(*transform);
}

QRectF* QInputMethod_InputItemRectangle(const QInputMethod* self) {
	QRectF _ret = self->inputItemRectangle();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

void QInputMethod_SetInputItemRectangle(QInputMethod* self, QRectF* rect) {
	self->setInputItemRectangle(*rect);
}

QRectF* QInputMethod_CursorRectangle(const QInputMethod* self) {
	QRectF _ret = self->cursorRectangle();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QRectF* QInputMethod_AnchorRectangle(const QInputMethod* self) {
	QRectF _ret = self->anchorRectangle();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QRectF* QInputMethod_KeyboardRectangle(const QInputMethod* self) {
	QRectF _ret = self->keyboardRectangle();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QRectF* QInputMethod_InputItemClipRectangle(const QInputMethod* self) {
	QRectF _ret = self->inputItemClipRectangle();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

bool QInputMethod_IsVisible(const QInputMethod* self) {
	return self->isVisible();
}

void QInputMethod_SetVisible(QInputMethod* self, bool visible) {
	self->setVisible(visible);
}

bool QInputMethod_IsAnimating(const QInputMethod* self) {
	return self->isAnimating();
}

QLocale* QInputMethod_Locale(const QInputMethod* self) {
	QLocale _ret = self->locale();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLocale*>(new QLocale(_ret));
}

uintptr_t QInputMethod_InputDirection(const QInputMethod* self) {
	Qt::LayoutDirection _ret = self->inputDirection();
	return static_cast<uintptr_t>(_ret);
}

QVariant* QInputMethod_QueryFocusObject(uintptr_t query, QVariant* argument) {
	QVariant _ret = QInputMethod::queryFocusObject(static_cast<Qt::InputMethodQuery>(query), *argument);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(_ret));
}

void QInputMethod_Show(QInputMethod* self) {
	self->show();
}

void QInputMethod_Hide(QInputMethod* self) {
	self->hide();
}

void QInputMethod_Update(QInputMethod* self, int queries) {
	self->update(static_cast<Qt::InputMethodQueries>(queries));
}

void QInputMethod_Reset(QInputMethod* self) {
	self->reset();
}

void QInputMethod_Commit(QInputMethod* self) {
	self->commit();
}

void QInputMethod_InvokeAction(QInputMethod* self, uintptr_t a, int cursorPosition) {
	self->invokeAction(static_cast<QInputMethod::Action>(a), static_cast<int>(cursorPosition));
}

void QInputMethod_CursorRectangleChanged(QInputMethod* self) {
	self->cursorRectangleChanged();
}

void QInputMethod_connect_CursorRectangleChanged(QInputMethod* self, void* slot) {
	QInputMethod::connect(self, static_cast<void (QInputMethod::*)()>(&QInputMethod::cursorRectangleChanged), self, [=]() {
		miqt_exec_callback_QInputMethod_CursorRectangleChanged(slot);
	});
}

void QInputMethod_AnchorRectangleChanged(QInputMethod* self) {
	self->anchorRectangleChanged();
}

void QInputMethod_connect_AnchorRectangleChanged(QInputMethod* self, void* slot) {
	QInputMethod::connect(self, static_cast<void (QInputMethod::*)()>(&QInputMethod::anchorRectangleChanged), self, [=]() {
		miqt_exec_callback_QInputMethod_AnchorRectangleChanged(slot);
	});
}

void QInputMethod_KeyboardRectangleChanged(QInputMethod* self) {
	self->keyboardRectangleChanged();
}

void QInputMethod_connect_KeyboardRectangleChanged(QInputMethod* self, void* slot) {
	QInputMethod::connect(self, static_cast<void (QInputMethod::*)()>(&QInputMethod::keyboardRectangleChanged), self, [=]() {
		miqt_exec_callback_QInputMethod_KeyboardRectangleChanged(slot);
	});
}

void QInputMethod_InputItemClipRectangleChanged(QInputMethod* self) {
	self->inputItemClipRectangleChanged();
}

void QInputMethod_connect_InputItemClipRectangleChanged(QInputMethod* self, void* slot) {
	QInputMethod::connect(self, static_cast<void (QInputMethod::*)()>(&QInputMethod::inputItemClipRectangleChanged), self, [=]() {
		miqt_exec_callback_QInputMethod_InputItemClipRectangleChanged(slot);
	});
}

void QInputMethod_VisibleChanged(QInputMethod* self) {
	self->visibleChanged();
}

void QInputMethod_connect_VisibleChanged(QInputMethod* self, void* slot) {
	QInputMethod::connect(self, static_cast<void (QInputMethod::*)()>(&QInputMethod::visibleChanged), self, [=]() {
		miqt_exec_callback_QInputMethod_VisibleChanged(slot);
	});
}

void QInputMethod_AnimatingChanged(QInputMethod* self) {
	self->animatingChanged();
}

void QInputMethod_connect_AnimatingChanged(QInputMethod* self, void* slot) {
	QInputMethod::connect(self, static_cast<void (QInputMethod::*)()>(&QInputMethod::animatingChanged), self, [=]() {
		miqt_exec_callback_QInputMethod_AnimatingChanged(slot);
	});
}

void QInputMethod_LocaleChanged(QInputMethod* self) {
	self->localeChanged();
}

void QInputMethod_connect_LocaleChanged(QInputMethod* self, void* slot) {
	QInputMethod::connect(self, static_cast<void (QInputMethod::*)()>(&QInputMethod::localeChanged), self, [=]() {
		miqt_exec_callback_QInputMethod_LocaleChanged(slot);
	});
}

void QInputMethod_InputDirectionChanged(QInputMethod* self, uintptr_t newDirection) {
	self->inputDirectionChanged(static_cast<Qt::LayoutDirection>(newDirection));
}

void QInputMethod_connect_InputDirectionChanged(QInputMethod* self, void* slot) {
	QInputMethod::connect(self, static_cast<void (QInputMethod::*)(Qt::LayoutDirection)>(&QInputMethod::inputDirectionChanged), self, [=](Qt::LayoutDirection newDirection) {
		Qt::LayoutDirection newDirection_ret = newDirection;
		uintptr_t sigval1 = static_cast<uintptr_t>(newDirection_ret);
		miqt_exec_callback_QInputMethod_InputDirectionChanged(slot, sigval1);
	});
}

struct miqt_string* QInputMethod_Tr2(const char* s, const char* c) {
	QString _ret = QInputMethod::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QInputMethod_Tr3(const char* s, const char* c, int n) {
	QString _ret = QInputMethod::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QInputMethod_TrUtf82(const char* s, const char* c) {
	QString _ret = QInputMethod::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QInputMethod_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QInputMethod::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

