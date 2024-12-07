#include <QColor>
#include <QFont>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebHapticFeedbackPlayer>
#include <QWebKitPlatformPlugin>
#include <QWebNotificationData>
#include <QWebNotificationPresenter>
#include <QWebSelectData>
#include <QWebSelectMethod>
#include <QWebSpellChecker>
#define WORKAROUND_INNER_CLASS_DEFINITION_QWebSpellChecker__GrammarDetail
#include <QWebTouchModifier>
#include <qwebkitplatformplugin.h>
#include "gen_qwebkitplatformplugin.h"
#include "_cgo_export.h"

int QWebSelectData_ItemType(const QWebSelectData* self, int param1) {
	QWebSelectData::ItemType _ret = self->itemType(static_cast<int>(param1));
	return static_cast<int>(_ret);
}

struct miqt_string QWebSelectData_ItemText(const QWebSelectData* self, int index) {
	QString _ret = self->itemText(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebSelectData_ItemToolTip(const QWebSelectData* self, int index) {
	QString _ret = self->itemToolTip(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWebSelectData_ItemIsEnabled(const QWebSelectData* self, int index) {
	return self->itemIsEnabled(static_cast<int>(index));
}

bool QWebSelectData_ItemIsSelected(const QWebSelectData* self, int index) {
	return self->itemIsSelected(static_cast<int>(index));
}

int QWebSelectData_ItemCount(const QWebSelectData* self) {
	return self->itemCount();
}

bool QWebSelectData_Multiple(const QWebSelectData* self) {
	return self->multiple();
}

QColor* QWebSelectData_BackgroundColor(const QWebSelectData* self) {
	return new QColor(self->backgroundColor());
}

QColor* QWebSelectData_ForegroundColor(const QWebSelectData* self) {
	return new QColor(self->foregroundColor());
}

QColor* QWebSelectData_ItemBackgroundColor(const QWebSelectData* self, int index) {
	return new QColor(self->itemBackgroundColor(static_cast<int>(index)));
}

QColor* QWebSelectData_ItemForegroundColor(const QWebSelectData* self, int index) {
	return new QColor(self->itemForegroundColor(static_cast<int>(index)));
}

void QWebSelectData_OperatorAssign(QWebSelectData* self, QWebSelectData* param1) {
	self->operator=(*param1);
}

void QWebSelectData_Delete(QWebSelectData* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebSelectData*>( self );
	} else {
		delete self;
	}
}

void QWebSelectMethod_virtbase(QWebSelectMethod* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QWebSelectMethod_MetaObject(const QWebSelectMethod* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebSelectMethod_Metacast(QWebSelectMethod* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebSelectMethod_Tr(const char* s) {
	QString _ret = QWebSelectMethod::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebSelectMethod_TrUtf8(const char* s) {
	QString _ret = QWebSelectMethod::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebSelectMethod_Show(QWebSelectMethod* self, QWebSelectData* param1) {
	self->show(*param1);
}

void QWebSelectMethod_Hide(QWebSelectMethod* self) {
	self->hide();
}

void QWebSelectMethod_SetGeometry(QWebSelectMethod* self, QRect* geometry) {
	self->setGeometry(*geometry);
}

void QWebSelectMethod_SetFont(QWebSelectMethod* self, QFont* font) {
	self->setFont(*font);
}

void QWebSelectMethod_SelectItem(QWebSelectMethod* self, int index, bool allowMultiplySelections, bool shift) {
	self->selectItem(static_cast<int>(index), allowMultiplySelections, shift);
}

void QWebSelectMethod_connect_SelectItem(QWebSelectMethod* self, intptr_t slot) {
	QWebSelectMethod::connect(self, static_cast<void (QWebSelectMethod::*)(int, bool, bool)>(&QWebSelectMethod::selectItem), self, [=](int index, bool allowMultiplySelections, bool shift) {
		int sigval1 = index;
		bool sigval2 = allowMultiplySelections;
		bool sigval3 = shift;
		miqt_exec_callback_QWebSelectMethod_SelectItem(slot, sigval1, sigval2, sigval3);
	});
}

void QWebSelectMethod_DidHide(QWebSelectMethod* self) {
	self->didHide();
}

void QWebSelectMethod_connect_DidHide(QWebSelectMethod* self, intptr_t slot) {
	QWebSelectMethod::connect(self, static_cast<void (QWebSelectMethod::*)()>(&QWebSelectMethod::didHide), self, [=]() {
		miqt_exec_callback_QWebSelectMethod_DidHide(slot);
	});
}

struct miqt_string QWebSelectMethod_Tr2(const char* s, const char* c) {
	QString _ret = QWebSelectMethod::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebSelectMethod_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWebSelectMethod::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebSelectMethod_TrUtf82(const char* s, const char* c) {
	QString _ret = QWebSelectMethod::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebSelectMethod_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QWebSelectMethod::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebSelectMethod_Delete(QWebSelectMethod* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebSelectMethod*>( self );
	} else {
		delete self;
	}
}

struct miqt_string QWebNotificationData_Title(const QWebNotificationData* self) {
	const QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebNotificationData_Message(const QWebNotificationData* self) {
	const QString _ret = self->message();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUrl* QWebNotificationData_IconUrl(const QWebNotificationData* self) {
	return new QUrl(self->iconUrl());
}

QUrl* QWebNotificationData_OpenerPageUrl(const QWebNotificationData* self) {
	return new QUrl(self->openerPageUrl());
}

void QWebNotificationData_OperatorAssign(QWebNotificationData* self, QWebNotificationData* param1) {
	self->operator=(*param1);
}

void QWebNotificationData_Delete(QWebNotificationData* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebNotificationData*>( self );
	} else {
		delete self;
	}
}

void QWebNotificationPresenter_virtbase(QWebNotificationPresenter* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QWebNotificationPresenter_MetaObject(const QWebNotificationPresenter* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebNotificationPresenter_Metacast(QWebNotificationPresenter* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebNotificationPresenter_Tr(const char* s) {
	QString _ret = QWebNotificationPresenter::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebNotificationPresenter_TrUtf8(const char* s) {
	QString _ret = QWebNotificationPresenter::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebNotificationPresenter_ShowNotification(QWebNotificationPresenter* self, QWebNotificationData* param1) {
	self->showNotification(param1);
}

void QWebNotificationPresenter_NotificationClosed(QWebNotificationPresenter* self) {
	self->notificationClosed();
}

void QWebNotificationPresenter_connect_NotificationClosed(QWebNotificationPresenter* self, intptr_t slot) {
	QWebNotificationPresenter::connect(self, static_cast<void (QWebNotificationPresenter::*)()>(&QWebNotificationPresenter::notificationClosed), self, [=]() {
		miqt_exec_callback_QWebNotificationPresenter_NotificationClosed(slot);
	});
}

void QWebNotificationPresenter_NotificationClicked(QWebNotificationPresenter* self) {
	self->notificationClicked();
}

void QWebNotificationPresenter_connect_NotificationClicked(QWebNotificationPresenter* self, intptr_t slot) {
	QWebNotificationPresenter::connect(self, static_cast<void (QWebNotificationPresenter::*)()>(&QWebNotificationPresenter::notificationClicked), self, [=]() {
		miqt_exec_callback_QWebNotificationPresenter_NotificationClicked(slot);
	});
}

struct miqt_string QWebNotificationPresenter_Tr2(const char* s, const char* c) {
	QString _ret = QWebNotificationPresenter::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebNotificationPresenter_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWebNotificationPresenter::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebNotificationPresenter_TrUtf82(const char* s, const char* c) {
	QString _ret = QWebNotificationPresenter::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebNotificationPresenter_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QWebNotificationPresenter::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebNotificationPresenter_Delete(QWebNotificationPresenter* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebNotificationPresenter*>( self );
	} else {
		delete self;
	}
}

void QWebHapticFeedbackPlayer_virtbase(QWebHapticFeedbackPlayer* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QWebHapticFeedbackPlayer_MetaObject(const QWebHapticFeedbackPlayer* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebHapticFeedbackPlayer_Metacast(QWebHapticFeedbackPlayer* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebHapticFeedbackPlayer_Tr(const char* s) {
	QString _ret = QWebHapticFeedbackPlayer::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebHapticFeedbackPlayer_TrUtf8(const char* s) {
	QString _ret = QWebHapticFeedbackPlayer::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebHapticFeedbackPlayer_PlayHapticFeedback(QWebHapticFeedbackPlayer* self, int param1, struct miqt_string hapticType, int param3) {
	QString hapticType_QString = QString::fromUtf8(hapticType.data, hapticType.len);
	self->playHapticFeedback(static_cast<const QWebHapticFeedbackPlayer::HapticEvent>(param1), hapticType_QString, static_cast<const QWebHapticFeedbackPlayer::HapticStrength>(param3));
}

struct miqt_string QWebHapticFeedbackPlayer_Tr2(const char* s, const char* c) {
	QString _ret = QWebHapticFeedbackPlayer::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebHapticFeedbackPlayer_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWebHapticFeedbackPlayer::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebHapticFeedbackPlayer_TrUtf82(const char* s, const char* c) {
	QString _ret = QWebHapticFeedbackPlayer::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebHapticFeedbackPlayer_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QWebHapticFeedbackPlayer::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebHapticFeedbackPlayer_Delete(QWebHapticFeedbackPlayer* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebHapticFeedbackPlayer*>( self );
	} else {
		delete self;
	}
}

void QWebTouchModifier_virtbase(QWebTouchModifier* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QWebTouchModifier_MetaObject(const QWebTouchModifier* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebTouchModifier_Metacast(QWebTouchModifier* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebTouchModifier_Tr(const char* s) {
	QString _ret = QWebTouchModifier::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebTouchModifier_TrUtf8(const char* s) {
	QString _ret = QWebTouchModifier::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

unsigned int QWebTouchModifier_HitTestPaddingForTouch(const QWebTouchModifier* self, int param1) {
	return self->hitTestPaddingForTouch(static_cast<const QWebTouchModifier::PaddingDirection>(param1));
}

struct miqt_string QWebTouchModifier_Tr2(const char* s, const char* c) {
	QString _ret = QWebTouchModifier::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebTouchModifier_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWebTouchModifier::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebTouchModifier_TrUtf82(const char* s, const char* c) {
	QString _ret = QWebTouchModifier::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebTouchModifier_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QWebTouchModifier::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebTouchModifier_Delete(QWebTouchModifier* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebTouchModifier*>( self );
	} else {
		delete self;
	}
}

void QWebSpellChecker_virtbase(QWebSpellChecker* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QWebSpellChecker_MetaObject(const QWebSpellChecker* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebSpellChecker_Metacast(QWebSpellChecker* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebSpellChecker_Tr(const char* s) {
	QString _ret = QWebSpellChecker::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebSpellChecker_TrUtf8(const char* s) {
	QString _ret = QWebSpellChecker::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWebSpellChecker_IsContinousSpellCheckingEnabled(const QWebSpellChecker* self) {
	return self->isContinousSpellCheckingEnabled();
}

void QWebSpellChecker_ToggleContinousSpellChecking(QWebSpellChecker* self) {
	self->toggleContinousSpellChecking();
}

void QWebSpellChecker_LearnWord(QWebSpellChecker* self, struct miqt_string word) {
	QString word_QString = QString::fromUtf8(word.data, word.len);
	self->learnWord(word_QString);
}

void QWebSpellChecker_IgnoreWordInSpellDocument(QWebSpellChecker* self, struct miqt_string word) {
	QString word_QString = QString::fromUtf8(word.data, word.len);
	self->ignoreWordInSpellDocument(word_QString);
}

void QWebSpellChecker_CheckSpellingOfString(QWebSpellChecker* self, struct miqt_string word, int* misspellingLocation, int* misspellingLength) {
	QString word_QString = QString::fromUtf8(word.data, word.len);
	self->checkSpellingOfString(word_QString, static_cast<int*>(misspellingLocation), static_cast<int*>(misspellingLength));
}

struct miqt_string QWebSpellChecker_AutoCorrectSuggestionForMisspelledWord(QWebSpellChecker* self, struct miqt_string word) {
	QString word_QString = QString::fromUtf8(word.data, word.len);
	QString _ret = self->autoCorrectSuggestionForMisspelledWord(word_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebSpellChecker_GuessesForWord(QWebSpellChecker* self, struct miqt_string word, struct miqt_string context, struct miqt_array /* of struct miqt_string */  guesses) {
	QString word_QString = QString::fromUtf8(word.data, word.len);
	QString context_QString = QString::fromUtf8(context.data, context.len);
	QStringList guesses_QList;
	guesses_QList.reserve(guesses.len);
	struct miqt_string* guesses_arr = static_cast<struct miqt_string*>(guesses.data);
	for(size_t i = 0; i < guesses.len; ++i) {
		QString guesses_arr_i_QString = QString::fromUtf8(guesses_arr[i].data, guesses_arr[i].len);
		guesses_QList.push_back(guesses_arr_i_QString);
	}
	self->guessesForWord(word_QString, context_QString, guesses_QList);
}

bool QWebSpellChecker_IsGrammarCheckingEnabled(QWebSpellChecker* self) {
	return self->isGrammarCheckingEnabled();
}

void QWebSpellChecker_ToggleGrammarChecking(QWebSpellChecker* self) {
	self->toggleGrammarChecking();
}

void QWebSpellChecker_CheckGrammarOfString(QWebSpellChecker* self, struct miqt_string param1, struct miqt_array /* of QWebSpellChecker__GrammarDetail* */  param2, int* badGrammarLocation, int* badGrammarLength) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QList<QWebSpellChecker::GrammarDetail> param2_QList;
	param2_QList.reserve(param2.len);
	QWebSpellChecker__GrammarDetail** param2_arr = static_cast<QWebSpellChecker__GrammarDetail**>(param2.data);
	for(size_t i = 0; i < param2.len; ++i) {
		param2_QList.push_back(*(param2_arr[i]));
	}
	self->checkGrammarOfString(param1_QString, param2_QList, static_cast<int*>(badGrammarLocation), static_cast<int*>(badGrammarLength));
}

struct miqt_string QWebSpellChecker_Tr2(const char* s, const char* c) {
	QString _ret = QWebSpellChecker::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebSpellChecker_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWebSpellChecker::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebSpellChecker_TrUtf82(const char* s, const char* c) {
	QString _ret = QWebSpellChecker::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebSpellChecker_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QWebSpellChecker::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebSpellChecker_Delete(QWebSpellChecker* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebSpellChecker*>( self );
	} else {
		delete self;
	}
}

bool QWebKitPlatformPlugin_SupportsExtension(const QWebKitPlatformPlugin* self, int param1) {
	return self->supportsExtension(static_cast<QWebKitPlatformPlugin::Extension>(param1));
}

QObject* QWebKitPlatformPlugin_CreateExtension(const QWebKitPlatformPlugin* self, int param1) {
	return self->createExtension(static_cast<QWebKitPlatformPlugin::Extension>(param1));
}

void QWebKitPlatformPlugin_OperatorAssign(QWebKitPlatformPlugin* self, QWebKitPlatformPlugin* param1) {
	self->operator=(*param1);
}

void QWebKitPlatformPlugin_Delete(QWebKitPlatformPlugin* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebKitPlatformPlugin*>( self );
	} else {
		delete self;
	}
}

QWebSpellChecker__GrammarDetail* QWebSpellChecker__GrammarDetail_new(QWebSpellChecker__GrammarDetail* param1) {
	return new QWebSpellChecker::GrammarDetail(*param1);
}

void QWebSpellChecker__GrammarDetail_OperatorAssign(QWebSpellChecker__GrammarDetail* self, QWebSpellChecker__GrammarDetail* param1) {
	self->operator=(*param1);
}

void QWebSpellChecker__GrammarDetail_Delete(QWebSpellChecker__GrammarDetail* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebSpellChecker::GrammarDetail*>( self );
	} else {
		delete self;
	}
}

