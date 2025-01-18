#include <QAction>
#include <QObject>
#include <QPoint>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWhatsThis>
#include <QWidget>
#include <qwhatsthis.h>
#include "gen_qwhatsthis.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QWhatsThis_EnterWhatsThisMode() {
	QWhatsThis::enterWhatsThisMode();
}

bool QWhatsThis_InWhatsThisMode() {
	return QWhatsThis::inWhatsThisMode();
}

void QWhatsThis_LeaveWhatsThisMode() {
	QWhatsThis::leaveWhatsThisMode();
}

void QWhatsThis_ShowText(QPoint* pos, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QWhatsThis::showText(*pos, text_QString);
}

void QWhatsThis_HideText() {
	QWhatsThis::hideText();
}

QAction* QWhatsThis_CreateAction() {
	return QWhatsThis::createAction();
}

void QWhatsThis_ShowText3(QPoint* pos, struct miqt_string text, QWidget* w) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QWhatsThis::showText(*pos, text_QString, w);
}

QAction* QWhatsThis_CreateAction1(QObject* parent) {
	return QWhatsThis::createAction(parent);
}

void QWhatsThis_Delete(QWhatsThis* self) {
	delete self;
}

