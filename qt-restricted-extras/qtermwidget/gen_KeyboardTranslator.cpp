#define WORKAROUND_INNER_CLASS_DEFINITION_Konsole__KeyboardTranslator
#define WORKAROUND_INNER_CLASS_DEFINITION_Konsole__KeyboardTranslator__Entry
#define WORKAROUND_INNER_CLASS_DEFINITION_Konsole__KeyboardTranslatorManager
#define WORKAROUND_INNER_CLASS_DEFINITION_Konsole__KeyboardTranslatorReader
#define WORKAROUND_INNER_CLASS_DEFINITION_Konsole__KeyboardTranslatorWriter
#include <QByteArray>
#include <QIODevice>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <KeyboardTranslator.h>
#include "gen_KeyboardTranslator.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

Konsole__KeyboardTranslator* Konsole__KeyboardTranslator_new(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new Konsole::KeyboardTranslator(name_QString);
}

Konsole__KeyboardTranslator* Konsole__KeyboardTranslator_new2(Konsole__KeyboardTranslator* param1) {
	return new Konsole::KeyboardTranslator(*param1);
}

struct miqt_string Konsole__KeyboardTranslator_name(const Konsole__KeyboardTranslator* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void Konsole__KeyboardTranslator_setName(Konsole__KeyboardTranslator* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setName(name_QString);
}

struct miqt_string Konsole__KeyboardTranslator_description(const Konsole__KeyboardTranslator* self) {
	QString _ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void Konsole__KeyboardTranslator_setDescription(Konsole__KeyboardTranslator* self, struct miqt_string description) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	self->setDescription(description_QString);
}

Konsole__KeyboardTranslator__Entry* Konsole__KeyboardTranslator_findEntry(const Konsole__KeyboardTranslator* self, int keyCode, int modifiers) {
	return new Konsole::KeyboardTranslator::Entry(self->findEntry(static_cast<int>(keyCode), static_cast<Qt::KeyboardModifiers>(modifiers)));
}

void Konsole__KeyboardTranslator_addEntry(Konsole__KeyboardTranslator* self, Konsole__KeyboardTranslator__Entry* entry) {
	self->addEntry(*entry);
}

void Konsole__KeyboardTranslator_replaceEntry(Konsole__KeyboardTranslator* self, Konsole__KeyboardTranslator__Entry* existing, Konsole__KeyboardTranslator__Entry* replacement) {
	self->replaceEntry(*existing, *replacement);
}

void Konsole__KeyboardTranslator_removeEntry(Konsole__KeyboardTranslator* self, Konsole__KeyboardTranslator__Entry* entry) {
	self->removeEntry(*entry);
}

struct miqt_array /* of Konsole__KeyboardTranslator__Entry* */  Konsole__KeyboardTranslator_entries(const Konsole__KeyboardTranslator* self) {
	QList<Konsole::KeyboardTranslator::Entry> _ret = self->entries();
	// Convert QList<> from C++ memory to manually-managed C memory
	Konsole__KeyboardTranslator__Entry** _arr = static_cast<Konsole__KeyboardTranslator__Entry**>(malloc(sizeof(Konsole__KeyboardTranslator__Entry*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new Konsole::KeyboardTranslator::Entry(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

Konsole__KeyboardTranslator__Entry* Konsole__KeyboardTranslator_findEntry2(const Konsole__KeyboardTranslator* self, int keyCode, int modifiers, int state) {
	return new Konsole::KeyboardTranslator::Entry(self->findEntry(static_cast<int>(keyCode), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Konsole::KeyboardTranslator::States>(state)));
}

void Konsole__KeyboardTranslator_delete(Konsole__KeyboardTranslator* self) {
	delete self;
}

Konsole__KeyboardTranslatorReader* Konsole__KeyboardTranslatorReader_new(QIODevice* source) {
	return new Konsole::KeyboardTranslatorReader(source);
}

Konsole__KeyboardTranslatorReader* Konsole__KeyboardTranslatorReader_new2(Konsole__KeyboardTranslatorReader* param1) {
	return new Konsole::KeyboardTranslatorReader(*param1);
}

struct miqt_string Konsole__KeyboardTranslatorReader_description(const Konsole__KeyboardTranslatorReader* self) {
	QString _ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool Konsole__KeyboardTranslatorReader_hasNextEntry(const Konsole__KeyboardTranslatorReader* self) {
	return self->hasNextEntry();
}

bool Konsole__KeyboardTranslatorReader_parseError(Konsole__KeyboardTranslatorReader* self) {
	return self->parseError();
}

void Konsole__KeyboardTranslatorReader_delete(Konsole__KeyboardTranslatorReader* self) {
	delete self;
}

Konsole__KeyboardTranslatorWriter* Konsole__KeyboardTranslatorWriter_new(QIODevice* destination) {
	return new Konsole::KeyboardTranslatorWriter(destination);
}

void Konsole__KeyboardTranslatorWriter_writeHeader(Konsole__KeyboardTranslatorWriter* self, struct miqt_string description) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	self->writeHeader(description_QString);
}

void Konsole__KeyboardTranslatorWriter_delete(Konsole__KeyboardTranslatorWriter* self) {
	delete self;
}

Konsole__KeyboardTranslatorManager* Konsole__KeyboardTranslatorManager_new() {
	return new Konsole::KeyboardTranslatorManager();
}

void Konsole__KeyboardTranslatorManager_addTranslator(Konsole__KeyboardTranslatorManager* self, Konsole__KeyboardTranslator* translator) {
	self->addTranslator(translator);
}

bool Konsole__KeyboardTranslatorManager_deleteTranslator(Konsole__KeyboardTranslatorManager* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->deleteTranslator(name_QString);
}

Konsole__KeyboardTranslator* Konsole__KeyboardTranslatorManager_defaultTranslator(Konsole__KeyboardTranslatorManager* self) {
	return (Konsole__KeyboardTranslator*) self->defaultTranslator();
}

Konsole__KeyboardTranslator* Konsole__KeyboardTranslatorManager_findTranslator(Konsole__KeyboardTranslatorManager* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return (Konsole__KeyboardTranslator*) self->findTranslator(name_QString);
}

struct miqt_array /* of struct miqt_string */  Konsole__KeyboardTranslatorManager_allTranslators(Konsole__KeyboardTranslatorManager* self) {
	QList<QString> _ret = self->allTranslators();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

Konsole__KeyboardTranslatorManager* Konsole__KeyboardTranslatorManager_instance() {
	return Konsole::KeyboardTranslatorManager::instance();
}

void Konsole__KeyboardTranslatorManager_delete(Konsole__KeyboardTranslatorManager* self) {
	delete self;
}

Konsole__KeyboardTranslator__Entry* Konsole__KeyboardTranslator__Entry_new() {
	return new Konsole::KeyboardTranslator::Entry();
}

Konsole__KeyboardTranslator__Entry* Konsole__KeyboardTranslator__Entry_new2(Konsole__KeyboardTranslator__Entry* param1) {
	return new Konsole::KeyboardTranslator::Entry(*param1);
}

bool Konsole__KeyboardTranslator__Entry_isNull(const Konsole__KeyboardTranslator__Entry* self) {
	return self->isNull();
}

int Konsole__KeyboardTranslator__Entry_command(const Konsole__KeyboardTranslator__Entry* self) {
	Konsole::KeyboardTranslator::Command _ret = self->command();
	return static_cast<int>(_ret);
}

void Konsole__KeyboardTranslator__Entry_setCommand(Konsole__KeyboardTranslator__Entry* self, int command) {
	self->setCommand(static_cast<Konsole::KeyboardTranslator::Command>(command));
}

struct miqt_string Konsole__KeyboardTranslator__Entry_text(const Konsole__KeyboardTranslator__Entry* self) {
	QByteArray _qb = self->text();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void Konsole__KeyboardTranslator__Entry_setText(Konsole__KeyboardTranslator__Entry* self, struct miqt_string text) {
	QByteArray text_QByteArray(text.data, text.len);
	self->setText(text_QByteArray);
}

struct miqt_string Konsole__KeyboardTranslator__Entry_escapedText(const Konsole__KeyboardTranslator__Entry* self) {
	QByteArray _qb = self->escapedText();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

int Konsole__KeyboardTranslator__Entry_keyCode(const Konsole__KeyboardTranslator__Entry* self) {
	return self->keyCode();
}

void Konsole__KeyboardTranslator__Entry_setKeyCode(Konsole__KeyboardTranslator__Entry* self, int keyCode) {
	self->setKeyCode(static_cast<int>(keyCode));
}

int Konsole__KeyboardTranslator__Entry_modifiers(const Konsole__KeyboardTranslator__Entry* self) {
	Qt::KeyboardModifiers _ret = self->modifiers();
	return static_cast<int>(_ret);
}

int Konsole__KeyboardTranslator__Entry_modifierMask(const Konsole__KeyboardTranslator__Entry* self) {
	Qt::KeyboardModifiers _ret = self->modifierMask();
	return static_cast<int>(_ret);
}

void Konsole__KeyboardTranslator__Entry_setModifiers(Konsole__KeyboardTranslator__Entry* self, int modifiers) {
	self->setModifiers(static_cast<Qt::KeyboardModifiers>(modifiers));
}

void Konsole__KeyboardTranslator__Entry_setModifierMask(Konsole__KeyboardTranslator__Entry* self, int modifiers) {
	self->setModifierMask(static_cast<Qt::KeyboardModifiers>(modifiers));
}

int Konsole__KeyboardTranslator__Entry_state(const Konsole__KeyboardTranslator__Entry* self) {
	Konsole::KeyboardTranslator::States _ret = self->state();
	return static_cast<int>(_ret);
}

int Konsole__KeyboardTranslator__Entry_stateMask(const Konsole__KeyboardTranslator__Entry* self) {
	Konsole::KeyboardTranslator::States _ret = self->stateMask();
	return static_cast<int>(_ret);
}

void Konsole__KeyboardTranslator__Entry_setState(Konsole__KeyboardTranslator__Entry* self, int state) {
	self->setState(static_cast<Konsole::KeyboardTranslator::States>(state));
}

void Konsole__KeyboardTranslator__Entry_setStateMask(Konsole__KeyboardTranslator__Entry* self, int mask) {
	self->setStateMask(static_cast<Konsole::KeyboardTranslator::States>(mask));
}

struct miqt_string Konsole__KeyboardTranslator__Entry_conditionToString(const Konsole__KeyboardTranslator__Entry* self) {
	QString _ret = self->conditionToString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string Konsole__KeyboardTranslator__Entry_resultToString(const Konsole__KeyboardTranslator__Entry* self) {
	QString _ret = self->resultToString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool Konsole__KeyboardTranslator__Entry_matches(const Konsole__KeyboardTranslator__Entry* self, int keyCode, int modifiers, int flags) {
	return self->matches(static_cast<int>(keyCode), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Konsole::KeyboardTranslator::States>(flags));
}

bool Konsole__KeyboardTranslator__Entry_operatorEqual(const Konsole__KeyboardTranslator__Entry* self, Konsole__KeyboardTranslator__Entry* rhs) {
	return (*self == *rhs);
}

struct miqt_string Konsole__KeyboardTranslator__Entry_textWithExpandWildCards(const Konsole__KeyboardTranslator__Entry* self, bool expandWildCards) {
	QByteArray _qb = self->text(expandWildCards);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string Konsole__KeyboardTranslator__Entry_text2(const Konsole__KeyboardTranslator__Entry* self, bool expandWildCards, int modifiers) {
	QByteArray _qb = self->text(expandWildCards, static_cast<Qt::KeyboardModifiers>(modifiers));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string Konsole__KeyboardTranslator__Entry_escapedTextWithExpandWildCards(const Konsole__KeyboardTranslator__Entry* self, bool expandWildCards) {
	QByteArray _qb = self->escapedText(expandWildCards);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string Konsole__KeyboardTranslator__Entry_escapedText2(const Konsole__KeyboardTranslator__Entry* self, bool expandWildCards, int modifiers) {
	QByteArray _qb = self->escapedText(expandWildCards, static_cast<Qt::KeyboardModifiers>(modifiers));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string Konsole__KeyboardTranslator__Entry_resultToStringWithExpandWildCards(const Konsole__KeyboardTranslator__Entry* self, bool expandWildCards) {
	QString _ret = self->resultToString(expandWildCards);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string Konsole__KeyboardTranslator__Entry_resultToString2(const Konsole__KeyboardTranslator__Entry* self, bool expandWildCards, int modifiers) {
	QString _ret = self->resultToString(expandWildCards, static_cast<Qt::KeyboardModifiers>(modifiers));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void Konsole__KeyboardTranslator__Entry_delete(Konsole__KeyboardTranslator__Entry* self) {
	delete self;
}

