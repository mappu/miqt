#include <QAction>
#include <QObject>
#include <QPoint>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWhatsThis>
#include <QWidget>
#include "qwhatsthis.h"

#include "gen_qwhatsthis.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

void QWhatsThis_EnterWhatsThisMode() {
	QWhatsThis::enterWhatsThisMode();
}

bool QWhatsThis_InWhatsThisMode() {
	return QWhatsThis::inWhatsThisMode();
}

void QWhatsThis_LeaveWhatsThisMode() {
	QWhatsThis::leaveWhatsThisMode();
}

void QWhatsThis_ShowText(QPoint* pos, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QWhatsThis::showText(*pos, text_QString);
}

void QWhatsThis_HideText() {
	QWhatsThis::hideText();
}

QAction* QWhatsThis_CreateAction() {
	return QWhatsThis::createAction();
}

void QWhatsThis_ShowText3(QPoint* pos, const char* text, size_t text_Strlen, QWidget* w) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QWhatsThis::showText(*pos, text_QString, w);
}

QAction* QWhatsThis_CreateAction1(QObject* parent) {
	return QWhatsThis::createAction(parent);
}

void QWhatsThis_Delete(QWhatsThis* self) {
	delete self;
}

