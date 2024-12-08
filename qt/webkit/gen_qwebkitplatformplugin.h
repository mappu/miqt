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

int QWebSelectData_ItemType(const QWebSelectData* self, int param1);
struct miqt_string QWebSelectData_ItemText(const QWebSelectData* self, int index);
struct miqt_string QWebSelectData_ItemToolTip(const QWebSelectData* self, int index);
bool QWebSelectData_ItemIsEnabled(const QWebSelectData* self, int index);
bool QWebSelectData_ItemIsSelected(const QWebSelectData* self, int index);
int QWebSelectData_ItemCount(const QWebSelectData* self);
bool QWebSelectData_Multiple(const QWebSelectData* self);
QColor* QWebSelectData_BackgroundColor(const QWebSelectData* self);
QColor* QWebSelectData_ForegroundColor(const QWebSelectData* self);
QColor* QWebSelectData_ItemBackgroundColor(const QWebSelectData* self, int index);
QColor* QWebSelectData_ItemForegroundColor(const QWebSelectData* self, int index);
void QWebSelectData_OperatorAssign(QWebSelectData* self, QWebSelectData* param1);
void QWebSelectData_Delete(QWebSelectData* self, bool isSubclass);

void QWebSelectMethod_virtbase(QWebSelectMethod* src, QObject** outptr_QObject);
QMetaObject* QWebSelectMethod_MetaObject(const QWebSelectMethod* self);
void* QWebSelectMethod_Metacast(QWebSelectMethod* self, const char* param1);
struct miqt_string QWebSelectMethod_Tr(const char* s);
struct miqt_string QWebSelectMethod_TrUtf8(const char* s);
void QWebSelectMethod_Show(QWebSelectMethod* self, QWebSelectData* param1);
void QWebSelectMethod_Hide(QWebSelectMethod* self);
void QWebSelectMethod_SetGeometry(QWebSelectMethod* self, QRect* geometry);
void QWebSelectMethod_SetFont(QWebSelectMethod* self, QFont* font);
void QWebSelectMethod_SelectItem(QWebSelectMethod* self, int index, bool allowMultiplySelections, bool shift);
void QWebSelectMethod_connect_SelectItem(QWebSelectMethod* self, intptr_t slot);
void QWebSelectMethod_DidHide(QWebSelectMethod* self);
void QWebSelectMethod_connect_DidHide(QWebSelectMethod* self, intptr_t slot);
struct miqt_string QWebSelectMethod_Tr2(const char* s, const char* c);
struct miqt_string QWebSelectMethod_Tr3(const char* s, const char* c, int n);
struct miqt_string QWebSelectMethod_TrUtf82(const char* s, const char* c);
struct miqt_string QWebSelectMethod_TrUtf83(const char* s, const char* c, int n);
void QWebSelectMethod_Delete(QWebSelectMethod* self, bool isSubclass);

struct miqt_string QWebNotificationData_Title(const QWebNotificationData* self);
struct miqt_string QWebNotificationData_Message(const QWebNotificationData* self);
QUrl* QWebNotificationData_IconUrl(const QWebNotificationData* self);
QUrl* QWebNotificationData_OpenerPageUrl(const QWebNotificationData* self);
void QWebNotificationData_OperatorAssign(QWebNotificationData* self, QWebNotificationData* param1);
void QWebNotificationData_Delete(QWebNotificationData* self, bool isSubclass);

void QWebNotificationPresenter_virtbase(QWebNotificationPresenter* src, QObject** outptr_QObject);
QMetaObject* QWebNotificationPresenter_MetaObject(const QWebNotificationPresenter* self);
void* QWebNotificationPresenter_Metacast(QWebNotificationPresenter* self, const char* param1);
struct miqt_string QWebNotificationPresenter_Tr(const char* s);
struct miqt_string QWebNotificationPresenter_TrUtf8(const char* s);
void QWebNotificationPresenter_ShowNotification(QWebNotificationPresenter* self, QWebNotificationData* param1);
void QWebNotificationPresenter_NotificationClosed(QWebNotificationPresenter* self);
void QWebNotificationPresenter_connect_NotificationClosed(QWebNotificationPresenter* self, intptr_t slot);
void QWebNotificationPresenter_NotificationClicked(QWebNotificationPresenter* self);
void QWebNotificationPresenter_connect_NotificationClicked(QWebNotificationPresenter* self, intptr_t slot);
struct miqt_string QWebNotificationPresenter_Tr2(const char* s, const char* c);
struct miqt_string QWebNotificationPresenter_Tr3(const char* s, const char* c, int n);
struct miqt_string QWebNotificationPresenter_TrUtf82(const char* s, const char* c);
struct miqt_string QWebNotificationPresenter_TrUtf83(const char* s, const char* c, int n);
void QWebNotificationPresenter_Delete(QWebNotificationPresenter* self, bool isSubclass);

void QWebHapticFeedbackPlayer_virtbase(QWebHapticFeedbackPlayer* src, QObject** outptr_QObject);
QMetaObject* QWebHapticFeedbackPlayer_MetaObject(const QWebHapticFeedbackPlayer* self);
void* QWebHapticFeedbackPlayer_Metacast(QWebHapticFeedbackPlayer* self, const char* param1);
struct miqt_string QWebHapticFeedbackPlayer_Tr(const char* s);
struct miqt_string QWebHapticFeedbackPlayer_TrUtf8(const char* s);
void QWebHapticFeedbackPlayer_PlayHapticFeedback(QWebHapticFeedbackPlayer* self, int param1, struct miqt_string hapticType, int param3);
struct miqt_string QWebHapticFeedbackPlayer_Tr2(const char* s, const char* c);
struct miqt_string QWebHapticFeedbackPlayer_Tr3(const char* s, const char* c, int n);
struct miqt_string QWebHapticFeedbackPlayer_TrUtf82(const char* s, const char* c);
struct miqt_string QWebHapticFeedbackPlayer_TrUtf83(const char* s, const char* c, int n);
void QWebHapticFeedbackPlayer_Delete(QWebHapticFeedbackPlayer* self, bool isSubclass);

void QWebTouchModifier_virtbase(QWebTouchModifier* src, QObject** outptr_QObject);
QMetaObject* QWebTouchModifier_MetaObject(const QWebTouchModifier* self);
void* QWebTouchModifier_Metacast(QWebTouchModifier* self, const char* param1);
struct miqt_string QWebTouchModifier_Tr(const char* s);
struct miqt_string QWebTouchModifier_TrUtf8(const char* s);
unsigned int QWebTouchModifier_HitTestPaddingForTouch(const QWebTouchModifier* self, int param1);
struct miqt_string QWebTouchModifier_Tr2(const char* s, const char* c);
struct miqt_string QWebTouchModifier_Tr3(const char* s, const char* c, int n);
struct miqt_string QWebTouchModifier_TrUtf82(const char* s, const char* c);
struct miqt_string QWebTouchModifier_TrUtf83(const char* s, const char* c, int n);
void QWebTouchModifier_Delete(QWebTouchModifier* self, bool isSubclass);

void QWebSpellChecker_virtbase(QWebSpellChecker* src, QObject** outptr_QObject);
QMetaObject* QWebSpellChecker_MetaObject(const QWebSpellChecker* self);
void* QWebSpellChecker_Metacast(QWebSpellChecker* self, const char* param1);
struct miqt_string QWebSpellChecker_Tr(const char* s);
struct miqt_string QWebSpellChecker_TrUtf8(const char* s);
bool QWebSpellChecker_IsContinousSpellCheckingEnabled(const QWebSpellChecker* self);
void QWebSpellChecker_ToggleContinousSpellChecking(QWebSpellChecker* self);
void QWebSpellChecker_LearnWord(QWebSpellChecker* self, struct miqt_string word);
void QWebSpellChecker_IgnoreWordInSpellDocument(QWebSpellChecker* self, struct miqt_string word);
void QWebSpellChecker_CheckSpellingOfString(QWebSpellChecker* self, struct miqt_string word, int* misspellingLocation, int* misspellingLength);
struct miqt_string QWebSpellChecker_AutoCorrectSuggestionForMisspelledWord(QWebSpellChecker* self, struct miqt_string word);
void QWebSpellChecker_GuessesForWord(QWebSpellChecker* self, struct miqt_string word, struct miqt_string context, struct miqt_array /* of struct miqt_string */  guesses);
bool QWebSpellChecker_IsGrammarCheckingEnabled(QWebSpellChecker* self);
void QWebSpellChecker_ToggleGrammarChecking(QWebSpellChecker* self);
void QWebSpellChecker_CheckGrammarOfString(QWebSpellChecker* self, struct miqt_string param1, struct miqt_array /* of QWebSpellChecker__GrammarDetail* */  param2, int* badGrammarLocation, int* badGrammarLength);
struct miqt_string QWebSpellChecker_Tr2(const char* s, const char* c);
struct miqt_string QWebSpellChecker_Tr3(const char* s, const char* c, int n);
struct miqt_string QWebSpellChecker_TrUtf82(const char* s, const char* c);
struct miqt_string QWebSpellChecker_TrUtf83(const char* s, const char* c, int n);
void QWebSpellChecker_Delete(QWebSpellChecker* self, bool isSubclass);

bool QWebKitPlatformPlugin_SupportsExtension(const QWebKitPlatformPlugin* self, int param1);
QObject* QWebKitPlatformPlugin_CreateExtension(const QWebKitPlatformPlugin* self, int param1);
void QWebKitPlatformPlugin_OperatorAssign(QWebKitPlatformPlugin* self, QWebKitPlatformPlugin* param1);
void QWebKitPlatformPlugin_Delete(QWebKitPlatformPlugin* self, bool isSubclass);

QWebSpellChecker__GrammarDetail* QWebSpellChecker__GrammarDetail_new(QWebSpellChecker__GrammarDetail* param1);
void QWebSpellChecker__GrammarDetail_OperatorAssign(QWebSpellChecker__GrammarDetail* self, QWebSpellChecker__GrammarDetail* param1);
void QWebSpellChecker__GrammarDetail_Delete(QWebSpellChecker__GrammarDetail* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
