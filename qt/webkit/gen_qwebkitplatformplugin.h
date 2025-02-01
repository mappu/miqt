#pragma once
#ifndef MIQT_QT_WEBKIT_GEN_QWEBKITPLATFORMPLUGIN_H
#define MIQT_QT_WEBKIT_GEN_QWEBKITPLATFORMPLUGIN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QColor;
class QFont;
class QMetaObject;
class QObject;
class QRect;
class QUrl;
class QWebHapticFeedbackPlayer;
class QWebKitPlatformPlugin;
class QWebNotificationData;
class QWebNotificationPresenter;
class QWebSelectData;
class QWebSelectMethod;
class QWebSpellChecker;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QWebSpellChecker__GrammarDetail)
typedef QWebSpellChecker::GrammarDetail QWebSpellChecker__GrammarDetail;
#else
class QWebSpellChecker__GrammarDetail;
#endif
class QWebTouchModifier;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QUrl QUrl;
typedef struct QWebHapticFeedbackPlayer QWebHapticFeedbackPlayer;
typedef struct QWebKitPlatformPlugin QWebKitPlatformPlugin;
typedef struct QWebNotificationData QWebNotificationData;
typedef struct QWebNotificationPresenter QWebNotificationPresenter;
typedef struct QWebSelectData QWebSelectData;
typedef struct QWebSelectMethod QWebSelectMethod;
typedef struct QWebSpellChecker QWebSpellChecker;
typedef struct QWebSpellChecker__GrammarDetail QWebSpellChecker__GrammarDetail;
typedef struct QWebTouchModifier QWebTouchModifier;
#endif

int QWebSelectData_itemType(const QWebSelectData* self, int param1);
struct miqt_string QWebSelectData_itemText(const QWebSelectData* self, int index);
struct miqt_string QWebSelectData_itemToolTip(const QWebSelectData* self, int index);
bool QWebSelectData_itemIsEnabled(const QWebSelectData* self, int index);
bool QWebSelectData_itemIsSelected(const QWebSelectData* self, int index);
int QWebSelectData_itemCount(const QWebSelectData* self);
bool QWebSelectData_multiple(const QWebSelectData* self);
QColor* QWebSelectData_backgroundColor(const QWebSelectData* self);
QColor* QWebSelectData_foregroundColor(const QWebSelectData* self);
QColor* QWebSelectData_itemBackgroundColor(const QWebSelectData* self, int index);
QColor* QWebSelectData_itemForegroundColor(const QWebSelectData* self, int index);
void QWebSelectData_operatorAssign(QWebSelectData* self, QWebSelectData* param1);
void QWebSelectData_delete(QWebSelectData* self);

void QWebSelectMethod_virtbase(QWebSelectMethod* src, QObject** outptr_QObject);
QMetaObject* QWebSelectMethod_metaObject(const QWebSelectMethod* self);
void* QWebSelectMethod_metacast(QWebSelectMethod* self, const char* param1);
struct miqt_string QWebSelectMethod_tr(const char* s);
struct miqt_string QWebSelectMethod_trUtf8(const char* s);
void QWebSelectMethod_show(QWebSelectMethod* self, QWebSelectData* param1);
void QWebSelectMethod_hide(QWebSelectMethod* self);
void QWebSelectMethod_setGeometry(QWebSelectMethod* self, QRect* geometry);
void QWebSelectMethod_setFont(QWebSelectMethod* self, QFont* font);
void QWebSelectMethod_selectItem(QWebSelectMethod* self, int index, bool allowMultiplySelections, bool shift);
void QWebSelectMethod_connect_selectItem(QWebSelectMethod* self, intptr_t slot);
void QWebSelectMethod_didHide(QWebSelectMethod* self);
void QWebSelectMethod_connect_didHide(QWebSelectMethod* self, intptr_t slot);
struct miqt_string QWebSelectMethod_tr2(const char* s, const char* c);
struct miqt_string QWebSelectMethod_tr3(const char* s, const char* c, int n);
struct miqt_string QWebSelectMethod_trUtf82(const char* s, const char* c);
struct miqt_string QWebSelectMethod_trUtf83(const char* s, const char* c, int n);
void QWebSelectMethod_delete(QWebSelectMethod* self);

struct miqt_string QWebNotificationData_title(const QWebNotificationData* self);
struct miqt_string QWebNotificationData_message(const QWebNotificationData* self);
QUrl* QWebNotificationData_iconUrl(const QWebNotificationData* self);
QUrl* QWebNotificationData_openerPageUrl(const QWebNotificationData* self);
void QWebNotificationData_operatorAssign(QWebNotificationData* self, QWebNotificationData* param1);
void QWebNotificationData_delete(QWebNotificationData* self);

void QWebNotificationPresenter_virtbase(QWebNotificationPresenter* src, QObject** outptr_QObject);
QMetaObject* QWebNotificationPresenter_metaObject(const QWebNotificationPresenter* self);
void* QWebNotificationPresenter_metacast(QWebNotificationPresenter* self, const char* param1);
struct miqt_string QWebNotificationPresenter_tr(const char* s);
struct miqt_string QWebNotificationPresenter_trUtf8(const char* s);
void QWebNotificationPresenter_showNotification(QWebNotificationPresenter* self, QWebNotificationData* param1);
void QWebNotificationPresenter_notificationClosed(QWebNotificationPresenter* self);
void QWebNotificationPresenter_connect_notificationClosed(QWebNotificationPresenter* self, intptr_t slot);
void QWebNotificationPresenter_notificationClicked(QWebNotificationPresenter* self);
void QWebNotificationPresenter_connect_notificationClicked(QWebNotificationPresenter* self, intptr_t slot);
struct miqt_string QWebNotificationPresenter_tr2(const char* s, const char* c);
struct miqt_string QWebNotificationPresenter_tr3(const char* s, const char* c, int n);
struct miqt_string QWebNotificationPresenter_trUtf82(const char* s, const char* c);
struct miqt_string QWebNotificationPresenter_trUtf83(const char* s, const char* c, int n);
void QWebNotificationPresenter_delete(QWebNotificationPresenter* self);

void QWebHapticFeedbackPlayer_virtbase(QWebHapticFeedbackPlayer* src, QObject** outptr_QObject);
QMetaObject* QWebHapticFeedbackPlayer_metaObject(const QWebHapticFeedbackPlayer* self);
void* QWebHapticFeedbackPlayer_metacast(QWebHapticFeedbackPlayer* self, const char* param1);
struct miqt_string QWebHapticFeedbackPlayer_tr(const char* s);
struct miqt_string QWebHapticFeedbackPlayer_trUtf8(const char* s);
void QWebHapticFeedbackPlayer_playHapticFeedback(QWebHapticFeedbackPlayer* self, int param1, struct miqt_string hapticType, int param3);
struct miqt_string QWebHapticFeedbackPlayer_tr2(const char* s, const char* c);
struct miqt_string QWebHapticFeedbackPlayer_tr3(const char* s, const char* c, int n);
struct miqt_string QWebHapticFeedbackPlayer_trUtf82(const char* s, const char* c);
struct miqt_string QWebHapticFeedbackPlayer_trUtf83(const char* s, const char* c, int n);
void QWebHapticFeedbackPlayer_delete(QWebHapticFeedbackPlayer* self);

void QWebTouchModifier_virtbase(QWebTouchModifier* src, QObject** outptr_QObject);
QMetaObject* QWebTouchModifier_metaObject(const QWebTouchModifier* self);
void* QWebTouchModifier_metacast(QWebTouchModifier* self, const char* param1);
struct miqt_string QWebTouchModifier_tr(const char* s);
struct miqt_string QWebTouchModifier_trUtf8(const char* s);
unsigned int QWebTouchModifier_hitTestPaddingForTouch(const QWebTouchModifier* self, int param1);
struct miqt_string QWebTouchModifier_tr2(const char* s, const char* c);
struct miqt_string QWebTouchModifier_tr3(const char* s, const char* c, int n);
struct miqt_string QWebTouchModifier_trUtf82(const char* s, const char* c);
struct miqt_string QWebTouchModifier_trUtf83(const char* s, const char* c, int n);
void QWebTouchModifier_delete(QWebTouchModifier* self);

void QWebSpellChecker_virtbase(QWebSpellChecker* src, QObject** outptr_QObject);
QMetaObject* QWebSpellChecker_metaObject(const QWebSpellChecker* self);
void* QWebSpellChecker_metacast(QWebSpellChecker* self, const char* param1);
struct miqt_string QWebSpellChecker_tr(const char* s);
struct miqt_string QWebSpellChecker_trUtf8(const char* s);
bool QWebSpellChecker_isContinousSpellCheckingEnabled(const QWebSpellChecker* self);
void QWebSpellChecker_toggleContinousSpellChecking(QWebSpellChecker* self);
void QWebSpellChecker_learnWord(QWebSpellChecker* self, struct miqt_string word);
void QWebSpellChecker_ignoreWordInSpellDocument(QWebSpellChecker* self, struct miqt_string word);
void QWebSpellChecker_checkSpellingOfString(QWebSpellChecker* self, struct miqt_string word, int* misspellingLocation, int* misspellingLength);
struct miqt_string QWebSpellChecker_autoCorrectSuggestionForMisspelledWord(QWebSpellChecker* self, struct miqt_string word);
void QWebSpellChecker_guessesForWord(QWebSpellChecker* self, struct miqt_string word, struct miqt_string context, struct miqt_array /* of struct miqt_string */  guesses);
bool QWebSpellChecker_isGrammarCheckingEnabled(QWebSpellChecker* self);
void QWebSpellChecker_toggleGrammarChecking(QWebSpellChecker* self);
void QWebSpellChecker_checkGrammarOfString(QWebSpellChecker* self, struct miqt_string param1, struct miqt_array /* of QWebSpellChecker__GrammarDetail* */  param2, int* badGrammarLocation, int* badGrammarLength);
struct miqt_string QWebSpellChecker_tr2(const char* s, const char* c);
struct miqt_string QWebSpellChecker_tr3(const char* s, const char* c, int n);
struct miqt_string QWebSpellChecker_trUtf82(const char* s, const char* c);
struct miqt_string QWebSpellChecker_trUtf83(const char* s, const char* c, int n);
void QWebSpellChecker_delete(QWebSpellChecker* self);

bool QWebKitPlatformPlugin_supportsExtension(const QWebKitPlatformPlugin* self, int param1);
QObject* QWebKitPlatformPlugin_createExtension(const QWebKitPlatformPlugin* self, int param1);
void QWebKitPlatformPlugin_operatorAssign(QWebKitPlatformPlugin* self, QWebKitPlatformPlugin* param1);
void QWebKitPlatformPlugin_delete(QWebKitPlatformPlugin* self);

QWebSpellChecker__GrammarDetail* QWebSpellChecker__GrammarDetail_new(QWebSpellChecker__GrammarDetail* param1);
void QWebSpellChecker__GrammarDetail_operatorAssign(QWebSpellChecker__GrammarDetail* self, QWebSpellChecker__GrammarDetail* param1);
void QWebSpellChecker__GrammarDetail_delete(QWebSpellChecker__GrammarDetail* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
