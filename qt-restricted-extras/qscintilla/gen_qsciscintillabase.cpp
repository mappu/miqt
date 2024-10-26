#include <QColor>
#include <QImage>
#include <QMetaObject>
#include <QPainter>
#include <QPixmap>
#include <QRect>
#include <QScrollBar>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWidget>
#include <qsciscintillabase.h>
#include "gen_qsciscintillabase.h"
#include "_cgo_export.h"

QsciScintillaBase* QsciScintillaBase_new(QWidget* parent) {
	return new QsciScintillaBase(parent);
}

QsciScintillaBase* QsciScintillaBase_new2() {
	return new QsciScintillaBase();
}

QMetaObject* QsciScintillaBase_MetaObject(const QsciScintillaBase* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciScintillaBase_Metacast(QsciScintillaBase* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciScintillaBase_Tr(const char* s) {
	QString _ret = QsciScintillaBase::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciScintillaBase_TrUtf8(const char* s) {
	QString _ret = QsciScintillaBase::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QsciScintillaBase* QsciScintillaBase_Pool() {
	return QsciScintillaBase::pool();
}

void QsciScintillaBase_ReplaceHorizontalScrollBar(QsciScintillaBase* self, QScrollBar* scrollBar) {
	self->replaceHorizontalScrollBar(scrollBar);
}

void QsciScintillaBase_ReplaceVerticalScrollBar(QsciScintillaBase* self, QScrollBar* scrollBar) {
	self->replaceVerticalScrollBar(scrollBar);
}

long QsciScintillaBase_SendScintilla(const QsciScintillaBase* self, unsigned int msg) {
	return self->SendScintilla(static_cast<unsigned int>(msg));
}

long QsciScintillaBase_SendScintilla2(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, void* lParam) {
	return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam), lParam);
}

long QsciScintillaBase_SendScintilla3(const QsciScintillaBase* self, unsigned int msg, uintptr_t wParam, const char* lParam) {
	return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<uintptr_t>(wParam), lParam);
}

long QsciScintillaBase_SendScintilla4(const QsciScintillaBase* self, unsigned int msg, const char* lParam) {
	return self->SendScintilla(static_cast<unsigned int>(msg), lParam);
}

long QsciScintillaBase_SendScintilla5(const QsciScintillaBase* self, unsigned int msg, const char* wParam, const char* lParam) {
	return self->SendScintilla(static_cast<unsigned int>(msg), wParam, lParam);
}

long QsciScintillaBase_SendScintilla6(const QsciScintillaBase* self, unsigned int msg, long wParam) {
	return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<long>(wParam));
}

long QsciScintillaBase_SendScintilla7(const QsciScintillaBase* self, unsigned int msg, int wParam) {
	return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<int>(wParam));
}

long QsciScintillaBase_SendScintilla8(const QsciScintillaBase* self, unsigned int msg, long cpMin, long cpMax, char* lpstrText) {
	return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<long>(cpMin), static_cast<long>(cpMax), lpstrText);
}

long QsciScintillaBase_SendScintilla9(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, QColor* col) {
	return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam), *col);
}

long QsciScintillaBase_SendScintilla10(const QsciScintillaBase* self, unsigned int msg, QColor* col) {
	return self->SendScintilla(static_cast<unsigned int>(msg), *col);
}

long QsciScintillaBase_SendScintilla11(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, QPainter* hdc, QRect* rc, long cpMin, long cpMax) {
	return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam), hdc, *rc, static_cast<long>(cpMin), static_cast<long>(cpMax));
}

long QsciScintillaBase_SendScintilla12(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, QPixmap* lParam) {
	return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam), *lParam);
}

long QsciScintillaBase_SendScintilla13(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, QImage* lParam) {
	return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam), *lParam);
}

void* QsciScintillaBase_SendScintillaPtrResult(const QsciScintillaBase* self, unsigned int msg) {
	return self->SendScintillaPtrResult(static_cast<unsigned int>(msg));
}

int QsciScintillaBase_CommandKey(int qt_key, int* modifiers) {
	return QsciScintillaBase::commandKey(static_cast<int>(qt_key), static_cast<int&>(*modifiers));
}

void QsciScintillaBase_QSCN_SELCHANGED(QsciScintillaBase* self, bool yes) {
	self->QSCN_SELCHANGED(yes);
}

void QsciScintillaBase_connect_QSCN_SELCHANGED(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(bool)>(&QsciScintillaBase::QSCN_SELCHANGED), self, [=](bool yes) {
		bool sigval1 = yes;
		miqt_exec_callback_QsciScintillaBase_QSCN_SELCHANGED(slot, sigval1);
	});
}

void QsciScintillaBase_SCN_AUTOCCANCELLED(QsciScintillaBase* self) {
	self->SCN_AUTOCCANCELLED();
}

void QsciScintillaBase_connect_SCN_AUTOCCANCELLED(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_AUTOCCANCELLED), self, [=]() {
		miqt_exec_callback_QsciScintillaBase_SCN_AUTOCCANCELLED(slot);
	});
}

void QsciScintillaBase_SCN_AUTOCCHARDELETED(QsciScintillaBase* self) {
	self->SCN_AUTOCCHARDELETED();
}

void QsciScintillaBase_connect_SCN_AUTOCCHARDELETED(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_AUTOCCHARDELETED), self, [=]() {
		miqt_exec_callback_QsciScintillaBase_SCN_AUTOCCHARDELETED(slot);
	});
}

void QsciScintillaBase_SCN_AUTOCCOMPLETED(QsciScintillaBase* self, const char* selection, int position, int ch, int method) {
	self->SCN_AUTOCCOMPLETED(selection, static_cast<int>(position), static_cast<int>(ch), static_cast<int>(method));
}

void QsciScintillaBase_connect_SCN_AUTOCCOMPLETED(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(const char*, int, int, int)>(&QsciScintillaBase::SCN_AUTOCCOMPLETED), self, [=](const char* selection, int position, int ch, int method) {
		const char* sigval1 = (const char*) selection;
		int sigval2 = position;
		int sigval3 = ch;
		int sigval4 = method;
		miqt_exec_callback_QsciScintillaBase_SCN_AUTOCCOMPLETED(slot, sigval1, sigval2, sigval3, sigval4);
	});
}

void QsciScintillaBase_SCN_AUTOCSELECTION(QsciScintillaBase* self, const char* selection, int position, int ch, int method) {
	self->SCN_AUTOCSELECTION(selection, static_cast<int>(position), static_cast<int>(ch), static_cast<int>(method));
}

void QsciScintillaBase_connect_SCN_AUTOCSELECTION(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(const char*, int, int, int)>(&QsciScintillaBase::SCN_AUTOCSELECTION), self, [=](const char* selection, int position, int ch, int method) {
		const char* sigval1 = (const char*) selection;
		int sigval2 = position;
		int sigval3 = ch;
		int sigval4 = method;
		miqt_exec_callback_QsciScintillaBase_SCN_AUTOCSELECTION(slot, sigval1, sigval2, sigval3, sigval4);
	});
}

void QsciScintillaBase_SCN_AUTOCSELECTION2(QsciScintillaBase* self, const char* selection, int position) {
	self->SCN_AUTOCSELECTION(selection, static_cast<int>(position));
}

void QsciScintillaBase_connect_SCN_AUTOCSELECTION2(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(const char*, int)>(&QsciScintillaBase::SCN_AUTOCSELECTION), self, [=](const char* selection, int position) {
		const char* sigval1 = (const char*) selection;
		int sigval2 = position;
		miqt_exec_callback_QsciScintillaBase_SCN_AUTOCSELECTION2(slot, sigval1, sigval2);
	});
}

void QsciScintillaBase_SCN_AUTOCSELECTIONCHANGE(QsciScintillaBase* self, const char* selection, int id, int position) {
	self->SCN_AUTOCSELECTIONCHANGE(selection, static_cast<int>(id), static_cast<int>(position));
}

void QsciScintillaBase_connect_SCN_AUTOCSELECTIONCHANGE(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(const char*, int, int)>(&QsciScintillaBase::SCN_AUTOCSELECTIONCHANGE), self, [=](const char* selection, int id, int position) {
		const char* sigval1 = (const char*) selection;
		int sigval2 = id;
		int sigval3 = position;
		miqt_exec_callback_QsciScintillaBase_SCN_AUTOCSELECTIONCHANGE(slot, sigval1, sigval2, sigval3);
	});
}

void QsciScintillaBase_SCEN_CHANGE(QsciScintillaBase* self) {
	self->SCEN_CHANGE();
}

void QsciScintillaBase_connect_SCEN_CHANGE(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCEN_CHANGE), self, [=]() {
		miqt_exec_callback_QsciScintillaBase_SCEN_CHANGE(slot);
	});
}

void QsciScintillaBase_SCN_CALLTIPCLICK(QsciScintillaBase* self, int direction) {
	self->SCN_CALLTIPCLICK(static_cast<int>(direction));
}

void QsciScintillaBase_connect_SCN_CALLTIPCLICK(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int)>(&QsciScintillaBase::SCN_CALLTIPCLICK), self, [=](int direction) {
		int sigval1 = direction;
		miqt_exec_callback_QsciScintillaBase_SCN_CALLTIPCLICK(slot, sigval1);
	});
}

void QsciScintillaBase_SCN_CHARADDED(QsciScintillaBase* self, int charadded) {
	self->SCN_CHARADDED(static_cast<int>(charadded));
}

void QsciScintillaBase_connect_SCN_CHARADDED(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int)>(&QsciScintillaBase::SCN_CHARADDED), self, [=](int charadded) {
		int sigval1 = charadded;
		miqt_exec_callback_QsciScintillaBase_SCN_CHARADDED(slot, sigval1);
	});
}

void QsciScintillaBase_SCN_DOUBLECLICK(QsciScintillaBase* self, int position, int line, int modifiers) {
	self->SCN_DOUBLECLICK(static_cast<int>(position), static_cast<int>(line), static_cast<int>(modifiers));
}

void QsciScintillaBase_connect_SCN_DOUBLECLICK(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int, int)>(&QsciScintillaBase::SCN_DOUBLECLICK), self, [=](int position, int line, int modifiers) {
		int sigval1 = position;
		int sigval2 = line;
		int sigval3 = modifiers;
		miqt_exec_callback_QsciScintillaBase_SCN_DOUBLECLICK(slot, sigval1, sigval2, sigval3);
	});
}

void QsciScintillaBase_SCN_DWELLEND(QsciScintillaBase* self, int position, int x, int y) {
	self->SCN_DWELLEND(static_cast<int>(position), static_cast<int>(x), static_cast<int>(y));
}

void QsciScintillaBase_connect_SCN_DWELLEND(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int, int)>(&QsciScintillaBase::SCN_DWELLEND), self, [=](int position, int x, int y) {
		int sigval1 = position;
		int sigval2 = x;
		int sigval3 = y;
		miqt_exec_callback_QsciScintillaBase_SCN_DWELLEND(slot, sigval1, sigval2, sigval3);
	});
}

void QsciScintillaBase_SCN_DWELLSTART(QsciScintillaBase* self, int position, int x, int y) {
	self->SCN_DWELLSTART(static_cast<int>(position), static_cast<int>(x), static_cast<int>(y));
}

void QsciScintillaBase_connect_SCN_DWELLSTART(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int, int)>(&QsciScintillaBase::SCN_DWELLSTART), self, [=](int position, int x, int y) {
		int sigval1 = position;
		int sigval2 = x;
		int sigval3 = y;
		miqt_exec_callback_QsciScintillaBase_SCN_DWELLSTART(slot, sigval1, sigval2, sigval3);
	});
}

void QsciScintillaBase_SCN_FOCUSIN(QsciScintillaBase* self) {
	self->SCN_FOCUSIN();
}

void QsciScintillaBase_connect_SCN_FOCUSIN(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_FOCUSIN), self, [=]() {
		miqt_exec_callback_QsciScintillaBase_SCN_FOCUSIN(slot);
	});
}

void QsciScintillaBase_SCN_FOCUSOUT(QsciScintillaBase* self) {
	self->SCN_FOCUSOUT();
}

void QsciScintillaBase_connect_SCN_FOCUSOUT(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_FOCUSOUT), self, [=]() {
		miqt_exec_callback_QsciScintillaBase_SCN_FOCUSOUT(slot);
	});
}

void QsciScintillaBase_SCN_HOTSPOTCLICK(QsciScintillaBase* self, int position, int modifiers) {
	self->SCN_HOTSPOTCLICK(static_cast<int>(position), static_cast<int>(modifiers));
}

void QsciScintillaBase_connect_SCN_HOTSPOTCLICK(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int)>(&QsciScintillaBase::SCN_HOTSPOTCLICK), self, [=](int position, int modifiers) {
		int sigval1 = position;
		int sigval2 = modifiers;
		miqt_exec_callback_QsciScintillaBase_SCN_HOTSPOTCLICK(slot, sigval1, sigval2);
	});
}

void QsciScintillaBase_SCN_HOTSPOTDOUBLECLICK(QsciScintillaBase* self, int position, int modifiers) {
	self->SCN_HOTSPOTDOUBLECLICK(static_cast<int>(position), static_cast<int>(modifiers));
}

void QsciScintillaBase_connect_SCN_HOTSPOTDOUBLECLICK(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int)>(&QsciScintillaBase::SCN_HOTSPOTDOUBLECLICK), self, [=](int position, int modifiers) {
		int sigval1 = position;
		int sigval2 = modifiers;
		miqt_exec_callback_QsciScintillaBase_SCN_HOTSPOTDOUBLECLICK(slot, sigval1, sigval2);
	});
}

void QsciScintillaBase_SCN_HOTSPOTRELEASECLICK(QsciScintillaBase* self, int position, int modifiers) {
	self->SCN_HOTSPOTRELEASECLICK(static_cast<int>(position), static_cast<int>(modifiers));
}

void QsciScintillaBase_connect_SCN_HOTSPOTRELEASECLICK(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int)>(&QsciScintillaBase::SCN_HOTSPOTRELEASECLICK), self, [=](int position, int modifiers) {
		int sigval1 = position;
		int sigval2 = modifiers;
		miqt_exec_callback_QsciScintillaBase_SCN_HOTSPOTRELEASECLICK(slot, sigval1, sigval2);
	});
}

void QsciScintillaBase_SCN_INDICATORCLICK(QsciScintillaBase* self, int position, int modifiers) {
	self->SCN_INDICATORCLICK(static_cast<int>(position), static_cast<int>(modifiers));
}

void QsciScintillaBase_connect_SCN_INDICATORCLICK(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int)>(&QsciScintillaBase::SCN_INDICATORCLICK), self, [=](int position, int modifiers) {
		int sigval1 = position;
		int sigval2 = modifiers;
		miqt_exec_callback_QsciScintillaBase_SCN_INDICATORCLICK(slot, sigval1, sigval2);
	});
}

void QsciScintillaBase_SCN_INDICATORRELEASE(QsciScintillaBase* self, int position, int modifiers) {
	self->SCN_INDICATORRELEASE(static_cast<int>(position), static_cast<int>(modifiers));
}

void QsciScintillaBase_connect_SCN_INDICATORRELEASE(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int)>(&QsciScintillaBase::SCN_INDICATORRELEASE), self, [=](int position, int modifiers) {
		int sigval1 = position;
		int sigval2 = modifiers;
		miqt_exec_callback_QsciScintillaBase_SCN_INDICATORRELEASE(slot, sigval1, sigval2);
	});
}

void QsciScintillaBase_SCN_MACRORECORD(QsciScintillaBase* self, unsigned int param1, unsigned long param2, void* param3) {
	self->SCN_MACRORECORD(static_cast<unsigned int>(param1), static_cast<unsigned long>(param2), param3);
}

void QsciScintillaBase_connect_SCN_MACRORECORD(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(unsigned int, unsigned long, void*)>(&QsciScintillaBase::SCN_MACRORECORD), self, [=](unsigned int param1, unsigned long param2, void* param3) {
		unsigned int sigval1 = param1;
		unsigned long sigval2 = param2;
		void* sigval3 = param3;
		miqt_exec_callback_QsciScintillaBase_SCN_MACRORECORD(slot, sigval1, sigval2, sigval3);
	});
}

void QsciScintillaBase_SCN_MARGINCLICK(QsciScintillaBase* self, int position, int modifiers, int margin) {
	self->SCN_MARGINCLICK(static_cast<int>(position), static_cast<int>(modifiers), static_cast<int>(margin));
}

void QsciScintillaBase_connect_SCN_MARGINCLICK(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int, int)>(&QsciScintillaBase::SCN_MARGINCLICK), self, [=](int position, int modifiers, int margin) {
		int sigval1 = position;
		int sigval2 = modifiers;
		int sigval3 = margin;
		miqt_exec_callback_QsciScintillaBase_SCN_MARGINCLICK(slot, sigval1, sigval2, sigval3);
	});
}

void QsciScintillaBase_SCN_MARGINRIGHTCLICK(QsciScintillaBase* self, int position, int modifiers, int margin) {
	self->SCN_MARGINRIGHTCLICK(static_cast<int>(position), static_cast<int>(modifiers), static_cast<int>(margin));
}

void QsciScintillaBase_connect_SCN_MARGINRIGHTCLICK(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int, int)>(&QsciScintillaBase::SCN_MARGINRIGHTCLICK), self, [=](int position, int modifiers, int margin) {
		int sigval1 = position;
		int sigval2 = modifiers;
		int sigval3 = margin;
		miqt_exec_callback_QsciScintillaBase_SCN_MARGINRIGHTCLICK(slot, sigval1, sigval2, sigval3);
	});
}

void QsciScintillaBase_SCN_MODIFIED(QsciScintillaBase* self, int param1, int param2, const char* param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10) {
	self->SCN_MODIFIED(static_cast<int>(param1), static_cast<int>(param2), param3, static_cast<int>(param4), static_cast<int>(param5), static_cast<int>(param6), static_cast<int>(param7), static_cast<int>(param8), static_cast<int>(param9), static_cast<int>(param10));
}

void QsciScintillaBase_connect_SCN_MODIFIED(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int, const char*, int, int, int, int, int, int, int)>(&QsciScintillaBase::SCN_MODIFIED), self, [=](int param1, int param2, const char* param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10) {
		int sigval1 = param1;
		int sigval2 = param2;
		const char* sigval3 = (const char*) param3;
		int sigval4 = param4;
		int sigval5 = param5;
		int sigval6 = param6;
		int sigval7 = param7;
		int sigval8 = param8;
		int sigval9 = param9;
		int sigval10 = param10;
		miqt_exec_callback_QsciScintillaBase_SCN_MODIFIED(slot, sigval1, sigval2, sigval3, sigval4, sigval5, sigval6, sigval7, sigval8, sigval9, sigval10);
	});
}

void QsciScintillaBase_SCN_MODIFYATTEMPTRO(QsciScintillaBase* self) {
	self->SCN_MODIFYATTEMPTRO();
}

void QsciScintillaBase_connect_SCN_MODIFYATTEMPTRO(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_MODIFYATTEMPTRO), self, [=]() {
		miqt_exec_callback_QsciScintillaBase_SCN_MODIFYATTEMPTRO(slot);
	});
}

void QsciScintillaBase_SCN_NEEDSHOWN(QsciScintillaBase* self, int param1, int param2) {
	self->SCN_NEEDSHOWN(static_cast<int>(param1), static_cast<int>(param2));
}

void QsciScintillaBase_connect_SCN_NEEDSHOWN(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int)>(&QsciScintillaBase::SCN_NEEDSHOWN), self, [=](int param1, int param2) {
		int sigval1 = param1;
		int sigval2 = param2;
		miqt_exec_callback_QsciScintillaBase_SCN_NEEDSHOWN(slot, sigval1, sigval2);
	});
}

void QsciScintillaBase_SCN_PAINTED(QsciScintillaBase* self) {
	self->SCN_PAINTED();
}

void QsciScintillaBase_connect_SCN_PAINTED(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_PAINTED), self, [=]() {
		miqt_exec_callback_QsciScintillaBase_SCN_PAINTED(slot);
	});
}

void QsciScintillaBase_SCN_SAVEPOINTLEFT(QsciScintillaBase* self) {
	self->SCN_SAVEPOINTLEFT();
}

void QsciScintillaBase_connect_SCN_SAVEPOINTLEFT(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_SAVEPOINTLEFT), self, [=]() {
		miqt_exec_callback_QsciScintillaBase_SCN_SAVEPOINTLEFT(slot);
	});
}

void QsciScintillaBase_SCN_SAVEPOINTREACHED(QsciScintillaBase* self) {
	self->SCN_SAVEPOINTREACHED();
}

void QsciScintillaBase_connect_SCN_SAVEPOINTREACHED(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_SAVEPOINTREACHED), self, [=]() {
		miqt_exec_callback_QsciScintillaBase_SCN_SAVEPOINTREACHED(slot);
	});
}

void QsciScintillaBase_SCN_STYLENEEDED(QsciScintillaBase* self, int position) {
	self->SCN_STYLENEEDED(static_cast<int>(position));
}

void QsciScintillaBase_connect_SCN_STYLENEEDED(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int)>(&QsciScintillaBase::SCN_STYLENEEDED), self, [=](int position) {
		int sigval1 = position;
		miqt_exec_callback_QsciScintillaBase_SCN_STYLENEEDED(slot, sigval1);
	});
}

void QsciScintillaBase_SCN_URIDROPPED(QsciScintillaBase* self, QUrl* url) {
	self->SCN_URIDROPPED(*url);
}

void QsciScintillaBase_connect_SCN_URIDROPPED(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(const QUrl&)>(&QsciScintillaBase::SCN_URIDROPPED), self, [=](const QUrl& url) {
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
		miqt_exec_callback_QsciScintillaBase_SCN_URIDROPPED(slot, sigval1);
	});
}

void QsciScintillaBase_SCN_UPDATEUI(QsciScintillaBase* self, int updated) {
	self->SCN_UPDATEUI(static_cast<int>(updated));
}

void QsciScintillaBase_connect_SCN_UPDATEUI(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int)>(&QsciScintillaBase::SCN_UPDATEUI), self, [=](int updated) {
		int sigval1 = updated;
		miqt_exec_callback_QsciScintillaBase_SCN_UPDATEUI(slot, sigval1);
	});
}

void QsciScintillaBase_SCN_USERLISTSELECTION(QsciScintillaBase* self, const char* selection, int id, int ch, int method, int position) {
	self->SCN_USERLISTSELECTION(selection, static_cast<int>(id), static_cast<int>(ch), static_cast<int>(method), static_cast<int>(position));
}

void QsciScintillaBase_connect_SCN_USERLISTSELECTION(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(const char*, int, int, int, int)>(&QsciScintillaBase::SCN_USERLISTSELECTION), self, [=](const char* selection, int id, int ch, int method, int position) {
		const char* sigval1 = (const char*) selection;
		int sigval2 = id;
		int sigval3 = ch;
		int sigval4 = method;
		int sigval5 = position;
		miqt_exec_callback_QsciScintillaBase_SCN_USERLISTSELECTION(slot, sigval1, sigval2, sigval3, sigval4, sigval5);
	});
}

void QsciScintillaBase_SCN_USERLISTSELECTION2(QsciScintillaBase* self, const char* selection, int id, int ch, int method) {
	self->SCN_USERLISTSELECTION(selection, static_cast<int>(id), static_cast<int>(ch), static_cast<int>(method));
}

void QsciScintillaBase_connect_SCN_USERLISTSELECTION2(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(const char*, int, int, int)>(&QsciScintillaBase::SCN_USERLISTSELECTION), self, [=](const char* selection, int id, int ch, int method) {
		const char* sigval1 = (const char*) selection;
		int sigval2 = id;
		int sigval3 = ch;
		int sigval4 = method;
		miqt_exec_callback_QsciScintillaBase_SCN_USERLISTSELECTION2(slot, sigval1, sigval2, sigval3, sigval4);
	});
}

void QsciScintillaBase_SCN_USERLISTSELECTION3(QsciScintillaBase* self, const char* selection, int id) {
	self->SCN_USERLISTSELECTION(selection, static_cast<int>(id));
}

void QsciScintillaBase_connect_SCN_USERLISTSELECTION3(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(const char*, int)>(&QsciScintillaBase::SCN_USERLISTSELECTION), self, [=](const char* selection, int id) {
		const char* sigval1 = (const char*) selection;
		int sigval2 = id;
		miqt_exec_callback_QsciScintillaBase_SCN_USERLISTSELECTION3(slot, sigval1, sigval2);
	});
}

void QsciScintillaBase_SCN_ZOOM(QsciScintillaBase* self) {
	self->SCN_ZOOM();
}

void QsciScintillaBase_connect_SCN_ZOOM(QsciScintillaBase* self, intptr_t slot) {
	QsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_ZOOM), self, [=]() {
		miqt_exec_callback_QsciScintillaBase_SCN_ZOOM(slot);
	});
}

struct miqt_string QsciScintillaBase_Tr2(const char* s, const char* c) {
	QString _ret = QsciScintillaBase::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciScintillaBase_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciScintillaBase::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciScintillaBase_TrUtf82(const char* s, const char* c) {
	QString _ret = QsciScintillaBase::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciScintillaBase_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciScintillaBase::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

long QsciScintillaBase_SendScintilla22(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam) {
	return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam));
}

long QsciScintillaBase_SendScintilla32(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, long lParam) {
	return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam), static_cast<long>(lParam));
}

void QsciScintillaBase_Delete(QsciScintillaBase* self) {
	delete self;
}

