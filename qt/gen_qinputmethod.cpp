#include "gen_qinputmethod.h"
#include "qinputmethod.h"

#include <QInputMethod>
#include <QLocale>
#include <QMetaObject>
#include <QRectF>
#include <QString>
#include <QTransform>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QInputMethod_MetaObject(QInputMethod* self) {
	return (QMetaObject*) self->metaObject();
}

void QInputMethod_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QInputMethod::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputMethod_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QInputMethod::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QTransform* QInputMethod_InputItemTransform(QInputMethod* self) {
	QTransform ret = self->inputItemTransform();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(ret));
}

void QInputMethod_SetInputItemTransform(QInputMethod* self, QTransform* transform) {
	self->setInputItemTransform(*transform);
}

QRectF* QInputMethod_InputItemRectangle(QInputMethod* self) {
	QRectF ret = self->inputItemRectangle();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

void QInputMethod_SetInputItemRectangle(QInputMethod* self, QRectF* rect) {
	self->setInputItemRectangle(*rect);
}

QRectF* QInputMethod_CursorRectangle(QInputMethod* self) {
	QRectF ret = self->cursorRectangle();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRectF* QInputMethod_AnchorRectangle(QInputMethod* self) {
	QRectF ret = self->anchorRectangle();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRectF* QInputMethod_KeyboardRectangle(QInputMethod* self) {
	QRectF ret = self->keyboardRectangle();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRectF* QInputMethod_InputItemClipRectangle(QInputMethod* self) {
	QRectF ret = self->inputItemClipRectangle();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

bool QInputMethod_IsVisible(QInputMethod* self) {
	return self->isVisible();
}

void QInputMethod_SetVisible(QInputMethod* self, bool visible) {
	self->setVisible(visible);
}

bool QInputMethod_IsAnimating(QInputMethod* self) {
	return self->isAnimating();
}

QLocale* QInputMethod_Locale(QInputMethod* self) {
	QLocale ret = self->locale();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLocale*>(new QLocale(ret));
}

void QInputMethod_Show(QInputMethod* self) {
	self->show();
}

void QInputMethod_Hide(QInputMethod* self) {
	self->hide();
}

void QInputMethod_Reset(QInputMethod* self) {
	self->reset();
}

void QInputMethod_Commit(QInputMethod* self) {
	self->commit();
}

void QInputMethod_CursorRectangleChanged(QInputMethod* self) {
	self->cursorRectangleChanged();
}

void QInputMethod_connect_CursorRectangleChanged(QInputMethod* self, void* slot) {
	QInputMethod::connect(self, static_cast<void (QInputMethod::*)()>(&QInputMethod::cursorRectangleChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QInputMethod_AnchorRectangleChanged(QInputMethod* self) {
	self->anchorRectangleChanged();
}

void QInputMethod_connect_AnchorRectangleChanged(QInputMethod* self, void* slot) {
	QInputMethod::connect(self, static_cast<void (QInputMethod::*)()>(&QInputMethod::anchorRectangleChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QInputMethod_KeyboardRectangleChanged(QInputMethod* self) {
	self->keyboardRectangleChanged();
}

void QInputMethod_connect_KeyboardRectangleChanged(QInputMethod* self, void* slot) {
	QInputMethod::connect(self, static_cast<void (QInputMethod::*)()>(&QInputMethod::keyboardRectangleChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QInputMethod_InputItemClipRectangleChanged(QInputMethod* self) {
	self->inputItemClipRectangleChanged();
}

void QInputMethod_connect_InputItemClipRectangleChanged(QInputMethod* self, void* slot) {
	QInputMethod::connect(self, static_cast<void (QInputMethod::*)()>(&QInputMethod::inputItemClipRectangleChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QInputMethod_VisibleChanged(QInputMethod* self) {
	self->visibleChanged();
}

void QInputMethod_connect_VisibleChanged(QInputMethod* self, void* slot) {
	QInputMethod::connect(self, static_cast<void (QInputMethod::*)()>(&QInputMethod::visibleChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QInputMethod_AnimatingChanged(QInputMethod* self) {
	self->animatingChanged();
}

void QInputMethod_connect_AnimatingChanged(QInputMethod* self, void* slot) {
	QInputMethod::connect(self, static_cast<void (QInputMethod::*)()>(&QInputMethod::animatingChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QInputMethod_LocaleChanged(QInputMethod* self) {
	self->localeChanged();
}

void QInputMethod_connect_LocaleChanged(QInputMethod* self, void* slot) {
	QInputMethod::connect(self, static_cast<void (QInputMethod::*)()>(&QInputMethod::localeChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QInputMethod_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QInputMethod::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputMethod_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QInputMethod::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputMethod_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QInputMethod::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputMethod_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QInputMethod::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}
