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

void QWhatsThis_enterWhatsThisMode() {
	QWhatsThis::enterWhatsThisMode();
}

bool QWhatsThis_inWhatsThisMode() {
	return QWhatsThis::inWhatsThisMode();
}

void QWhatsThis_leaveWhatsThisMode() {
	QWhatsThis::leaveWhatsThisMode();
}

void QWhatsThis_showText(QPoint* pos, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QWhatsThis::showText(*pos, text_QString);
}

void QWhatsThis_hideText() {
	QWhatsThis::hideText();
}

QAction* QWhatsThis_createAction() {
	return QWhatsThis::createAction();
}

void QWhatsThis_showText3(QPoint* pos, struct miqt_string text, QWidget* w) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QWhatsThis::showText(*pos, text_QString, w);
}

QAction* QWhatsThis_createAction1(QObject* parent) {
	return QWhatsThis::createAction(parent);
}

void QWhatsThis_delete(QWhatsThis* self) {
	delete self;
}

