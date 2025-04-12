#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QTERMWIDGET_GEN_KEYBOARDTRANSLATOR_H
#define MIQT_QT_RESTRICTED_EXTRAS_QTERMWIDGET_GEN_KEYBOARDTRANSLATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Konsole__KeyboardTranslator)
typedef Konsole::KeyboardTranslator Konsole__KeyboardTranslator;
#else
class Konsole__KeyboardTranslator;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Konsole__KeyboardTranslator__Entry)
typedef Konsole::KeyboardTranslator::Entry Konsole__KeyboardTranslator__Entry;
#else
class Konsole__KeyboardTranslator__Entry;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Konsole__KeyboardTranslatorManager)
typedef Konsole::KeyboardTranslatorManager Konsole__KeyboardTranslatorManager;
#else
class Konsole__KeyboardTranslatorManager;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Konsole__KeyboardTranslatorReader)
typedef Konsole::KeyboardTranslatorReader Konsole__KeyboardTranslatorReader;
#else
class Konsole__KeyboardTranslatorReader;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Konsole__KeyboardTranslatorWriter)
typedef Konsole::KeyboardTranslatorWriter Konsole__KeyboardTranslatorWriter;
#else
class Konsole__KeyboardTranslatorWriter;
#endif
class QIODevice;
#else
typedef struct Konsole__KeyboardTranslator Konsole__KeyboardTranslator;
typedef struct Konsole__KeyboardTranslator__Entry Konsole__KeyboardTranslator__Entry;
typedef struct Konsole__KeyboardTranslatorManager Konsole__KeyboardTranslatorManager;
typedef struct Konsole__KeyboardTranslatorReader Konsole__KeyboardTranslatorReader;
typedef struct Konsole__KeyboardTranslatorWriter Konsole__KeyboardTranslatorWriter;
typedef struct QIODevice QIODevice;
#endif

Konsole__KeyboardTranslator* Konsole__KeyboardTranslator_new(struct miqt_string name);
Konsole__KeyboardTranslator* Konsole__KeyboardTranslator_new2(Konsole__KeyboardTranslator* param1);
struct miqt_string Konsole__KeyboardTranslator_name(const Konsole__KeyboardTranslator* self);
void Konsole__KeyboardTranslator_setName(Konsole__KeyboardTranslator* self, struct miqt_string name);
struct miqt_string Konsole__KeyboardTranslator_description(const Konsole__KeyboardTranslator* self);
void Konsole__KeyboardTranslator_setDescription(Konsole__KeyboardTranslator* self, struct miqt_string description);
Konsole__KeyboardTranslator__Entry* Konsole__KeyboardTranslator_findEntry(const Konsole__KeyboardTranslator* self, int keyCode, int modifiers);
void Konsole__KeyboardTranslator_addEntry(Konsole__KeyboardTranslator* self, Konsole__KeyboardTranslator__Entry* entry);
void Konsole__KeyboardTranslator_replaceEntry(Konsole__KeyboardTranslator* self, Konsole__KeyboardTranslator__Entry* existing, Konsole__KeyboardTranslator__Entry* replacement);
void Konsole__KeyboardTranslator_removeEntry(Konsole__KeyboardTranslator* self, Konsole__KeyboardTranslator__Entry* entry);
struct miqt_array /* of Konsole__KeyboardTranslator__Entry* */  Konsole__KeyboardTranslator_entries(const Konsole__KeyboardTranslator* self);
Konsole__KeyboardTranslator__Entry* Konsole__KeyboardTranslator_findEntry2(const Konsole__KeyboardTranslator* self, int keyCode, int modifiers, int state);
void Konsole__KeyboardTranslator_delete(Konsole__KeyboardTranslator* self);

Konsole__KeyboardTranslatorReader* Konsole__KeyboardTranslatorReader_new(QIODevice* source);
Konsole__KeyboardTranslatorReader* Konsole__KeyboardTranslatorReader_new2(Konsole__KeyboardTranslatorReader* param1);
struct miqt_string Konsole__KeyboardTranslatorReader_description(const Konsole__KeyboardTranslatorReader* self);
bool Konsole__KeyboardTranslatorReader_hasNextEntry(const Konsole__KeyboardTranslatorReader* self);
bool Konsole__KeyboardTranslatorReader_parseError(Konsole__KeyboardTranslatorReader* self);
void Konsole__KeyboardTranslatorReader_delete(Konsole__KeyboardTranslatorReader* self);

Konsole__KeyboardTranslatorWriter* Konsole__KeyboardTranslatorWriter_new(QIODevice* destination);
void Konsole__KeyboardTranslatorWriter_writeHeader(Konsole__KeyboardTranslatorWriter* self, struct miqt_string description);
void Konsole__KeyboardTranslatorWriter_delete(Konsole__KeyboardTranslatorWriter* self);

Konsole__KeyboardTranslatorManager* Konsole__KeyboardTranslatorManager_new();
void Konsole__KeyboardTranslatorManager_addTranslator(Konsole__KeyboardTranslatorManager* self, Konsole__KeyboardTranslator* translator);
bool Konsole__KeyboardTranslatorManager_deleteTranslator(Konsole__KeyboardTranslatorManager* self, struct miqt_string name);
Konsole__KeyboardTranslator* Konsole__KeyboardTranslatorManager_defaultTranslator(Konsole__KeyboardTranslatorManager* self);
Konsole__KeyboardTranslator* Konsole__KeyboardTranslatorManager_findTranslator(Konsole__KeyboardTranslatorManager* self, struct miqt_string name);
struct miqt_array /* of struct miqt_string */  Konsole__KeyboardTranslatorManager_allTranslators(Konsole__KeyboardTranslatorManager* self);
Konsole__KeyboardTranslatorManager* Konsole__KeyboardTranslatorManager_instance();
void Konsole__KeyboardTranslatorManager_delete(Konsole__KeyboardTranslatorManager* self);

Konsole__KeyboardTranslator__Entry* Konsole__KeyboardTranslator__Entry_new();
Konsole__KeyboardTranslator__Entry* Konsole__KeyboardTranslator__Entry_new2(Konsole__KeyboardTranslator__Entry* param1);
bool Konsole__KeyboardTranslator__Entry_isNull(const Konsole__KeyboardTranslator__Entry* self);
int Konsole__KeyboardTranslator__Entry_command(const Konsole__KeyboardTranslator__Entry* self);
void Konsole__KeyboardTranslator__Entry_setCommand(Konsole__KeyboardTranslator__Entry* self, int command);
struct miqt_string Konsole__KeyboardTranslator__Entry_text(const Konsole__KeyboardTranslator__Entry* self);
void Konsole__KeyboardTranslator__Entry_setText(Konsole__KeyboardTranslator__Entry* self, struct miqt_string text);
struct miqt_string Konsole__KeyboardTranslator__Entry_escapedText(const Konsole__KeyboardTranslator__Entry* self);
int Konsole__KeyboardTranslator__Entry_keyCode(const Konsole__KeyboardTranslator__Entry* self);
void Konsole__KeyboardTranslator__Entry_setKeyCode(Konsole__KeyboardTranslator__Entry* self, int keyCode);
int Konsole__KeyboardTranslator__Entry_modifiers(const Konsole__KeyboardTranslator__Entry* self);
int Konsole__KeyboardTranslator__Entry_modifierMask(const Konsole__KeyboardTranslator__Entry* self);
void Konsole__KeyboardTranslator__Entry_setModifiers(Konsole__KeyboardTranslator__Entry* self, int modifiers);
void Konsole__KeyboardTranslator__Entry_setModifierMask(Konsole__KeyboardTranslator__Entry* self, int modifiers);
int Konsole__KeyboardTranslator__Entry_state(const Konsole__KeyboardTranslator__Entry* self);
int Konsole__KeyboardTranslator__Entry_stateMask(const Konsole__KeyboardTranslator__Entry* self);
void Konsole__KeyboardTranslator__Entry_setState(Konsole__KeyboardTranslator__Entry* self, int state);
void Konsole__KeyboardTranslator__Entry_setStateMask(Konsole__KeyboardTranslator__Entry* self, int mask);
struct miqt_string Konsole__KeyboardTranslator__Entry_conditionToString(const Konsole__KeyboardTranslator__Entry* self);
struct miqt_string Konsole__KeyboardTranslator__Entry_resultToString(const Konsole__KeyboardTranslator__Entry* self);
bool Konsole__KeyboardTranslator__Entry_matches(const Konsole__KeyboardTranslator__Entry* self, int keyCode, int modifiers, int flags);
bool Konsole__KeyboardTranslator__Entry_operatorEqual(const Konsole__KeyboardTranslator__Entry* self, Konsole__KeyboardTranslator__Entry* rhs);
struct miqt_string Konsole__KeyboardTranslator__Entry_textWithExpandWildCards(const Konsole__KeyboardTranslator__Entry* self, bool expandWildCards);
struct miqt_string Konsole__KeyboardTranslator__Entry_text2(const Konsole__KeyboardTranslator__Entry* self, bool expandWildCards, int modifiers);
struct miqt_string Konsole__KeyboardTranslator__Entry_escapedTextWithExpandWildCards(const Konsole__KeyboardTranslator__Entry* self, bool expandWildCards);
struct miqt_string Konsole__KeyboardTranslator__Entry_escapedText2(const Konsole__KeyboardTranslator__Entry* self, bool expandWildCards, int modifiers);
struct miqt_string Konsole__KeyboardTranslator__Entry_resultToStringWithExpandWildCards(const Konsole__KeyboardTranslator__Entry* self, bool expandWildCards);
struct miqt_string Konsole__KeyboardTranslator__Entry_resultToString2(const Konsole__KeyboardTranslator__Entry* self, bool expandWildCards, int modifiers);
void Konsole__KeyboardTranslator__Entry_delete(Konsole__KeyboardTranslator__Entry* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
