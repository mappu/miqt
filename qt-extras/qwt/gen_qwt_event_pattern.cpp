#include <QKeyEvent>
#include <QMouseEvent>
#include <QVector>
#define WORKAROUND_INNER_CLASS_DEFINITION_QwtEventPattern__KeyPattern
#define WORKAROUND_INNER_CLASS_DEFINITION_QwtEventPattern__MousePattern
#include <qwt_event_pattern.h>
#include "gen_qwt_event_pattern.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QwtEventPattern_mouseMatch2(const QwtEventPattern*, intptr_t, QwtEventPattern__MousePattern*, QMouseEvent*);
bool miqt_exec_callback_QwtEventPattern_keyMatch2(const QwtEventPattern*, intptr_t, QwtEventPattern__KeyPattern*, QKeyEvent*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtEventPattern final : public QwtEventPattern {
public:

	MiqtVirtualQwtEventPattern(): QwtEventPattern() {}
	MiqtVirtualQwtEventPattern(const QwtEventPattern& param1): QwtEventPattern(param1) {}

	virtual ~MiqtVirtualQwtEventPattern() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMatch2 = 0;

	// Subclass to allow providing a Go implementation
	virtual bool mouseMatch(const QwtEventPattern::MousePattern& param1, const QMouseEvent* param2) const override {
		if (handle__mouseMatch2 == 0) {
			return QwtEventPattern::mouseMatch(param1, param2);
		}

		const QwtEventPattern::MousePattern& param1_ret = param1;
		// Cast returned reference into pointer
		QwtEventPattern__MousePattern* sigval1 = const_cast<QwtEventPattern::MousePattern*>(&param1_ret);
		QMouseEvent* sigval2 = (QMouseEvent*) param2;
		bool callback_return_value = miqt_exec_callback_QwtEventPattern_mouseMatch2(this, handle__mouseMatch2, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtEventPattern_virtualbase_mouseMatch2(const void* self, QwtEventPattern__MousePattern* param1, QMouseEvent* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyMatch2 = 0;

	// Subclass to allow providing a Go implementation
	virtual bool keyMatch(const QwtEventPattern::KeyPattern& param1, const QKeyEvent* param2) const override {
		if (handle__keyMatch2 == 0) {
			return QwtEventPattern::keyMatch(param1, param2);
		}

		const QwtEventPattern::KeyPattern& param1_ret = param1;
		// Cast returned reference into pointer
		QwtEventPattern__KeyPattern* sigval1 = const_cast<QwtEventPattern::KeyPattern*>(&param1_ret);
		QKeyEvent* sigval2 = (QKeyEvent*) param2;
		bool callback_return_value = miqt_exec_callback_QwtEventPattern_keyMatch2(this, handle__keyMatch2, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtEventPattern_virtualbase_keyMatch2(const void* self, QwtEventPattern__KeyPattern* param1, QKeyEvent* param2);

};

QwtEventPattern* QwtEventPattern_new() {
	return new (std::nothrow) MiqtVirtualQwtEventPattern();
}

QwtEventPattern* QwtEventPattern_new2(QwtEventPattern* param1) {
	return new (std::nothrow) MiqtVirtualQwtEventPattern(*param1);
}

void QwtEventPattern_initMousePattern(QwtEventPattern* self, int numButtons) {
	self->initMousePattern(static_cast<int>(numButtons));
}

void QwtEventPattern_initKeyPattern(QwtEventPattern* self) {
	self->initKeyPattern();
}

void QwtEventPattern_setMousePattern(QwtEventPattern* self, int param1, int button) {
	self->setMousePattern(static_cast<QwtEventPattern::MousePatternCode>(param1), static_cast<Qt::MouseButton>(button));
}

void QwtEventPattern_setKeyPattern(QwtEventPattern* self, int param1, int key) {
	self->setKeyPattern(static_cast<QwtEventPattern::KeyPatternCode>(param1), static_cast<int>(key));
}

void QwtEventPattern_setMousePatternWithMousePattern(QwtEventPattern* self, struct miqt_array /* of QwtEventPattern__MousePattern* */  mousePattern) {
	QVector<QwtEventPattern::MousePattern> mousePattern_QList;
	mousePattern_QList.reserve(mousePattern.len);
	QwtEventPattern__MousePattern** mousePattern_arr = static_cast<QwtEventPattern__MousePattern**>(mousePattern.data);
	for(size_t i = 0; i < mousePattern.len; ++i) {
		mousePattern_QList.push_back(*(mousePattern_arr[i]));
	}
	self->setMousePattern(mousePattern_QList);
}

void QwtEventPattern_setKeyPatternWithKeyPattern(QwtEventPattern* self, struct miqt_array /* of QwtEventPattern__KeyPattern* */  keyPattern) {
	QVector<QwtEventPattern::KeyPattern> keyPattern_QList;
	keyPattern_QList.reserve(keyPattern.len);
	QwtEventPattern__KeyPattern** keyPattern_arr = static_cast<QwtEventPattern__KeyPattern**>(keyPattern.data);
	for(size_t i = 0; i < keyPattern.len; ++i) {
		keyPattern_QList.push_back(*(keyPattern_arr[i]));
	}
	self->setKeyPattern(keyPattern_QList);
}

struct miqt_array /* of QwtEventPattern__MousePattern* */  QwtEventPattern_mousePattern(const QwtEventPattern* self) {
	const QVector<QwtEventPattern::MousePattern>& _ret = self->mousePattern();
	// Convert QList<> from C++ memory to manually-managed C memory
	QwtEventPattern__MousePattern** _arr = static_cast<QwtEventPattern__MousePattern**>(malloc(sizeof(QwtEventPattern__MousePattern*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QwtEventPattern::MousePattern(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QwtEventPattern__KeyPattern* */  QwtEventPattern_keyPattern(const QwtEventPattern* self) {
	const QVector<QwtEventPattern::KeyPattern>& _ret = self->keyPattern();
	// Convert QList<> from C++ memory to manually-managed C memory
	QwtEventPattern__KeyPattern** _arr = static_cast<QwtEventPattern__KeyPattern**>(malloc(sizeof(QwtEventPattern__KeyPattern*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QwtEventPattern::KeyPattern(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QwtEventPattern__MousePattern* */  QwtEventPattern_mousePattern2(QwtEventPattern* self) {
	QVector<QwtEventPattern::MousePattern>& _ret = self->mousePattern();
	// Convert QList<> from C++ memory to manually-managed C memory
	QwtEventPattern__MousePattern** _arr = static_cast<QwtEventPattern__MousePattern**>(malloc(sizeof(QwtEventPattern__MousePattern*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QwtEventPattern::MousePattern(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QwtEventPattern__KeyPattern* */  QwtEventPattern_keyPattern2(QwtEventPattern* self) {
	QVector<QwtEventPattern::KeyPattern>& _ret = self->keyPattern();
	// Convert QList<> from C++ memory to manually-managed C memory
	QwtEventPattern__KeyPattern** _arr = static_cast<QwtEventPattern__KeyPattern**>(malloc(sizeof(QwtEventPattern__KeyPattern*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QwtEventPattern::KeyPattern(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QwtEventPattern_mouseMatch(const QwtEventPattern* self, int param1, QMouseEvent* param2) {
	return self->mouseMatch(static_cast<QwtEventPattern::MousePatternCode>(param1), param2);
}

bool QwtEventPattern_keyMatch(const QwtEventPattern* self, int param1, QKeyEvent* param2) {
	return self->keyMatch(static_cast<QwtEventPattern::KeyPatternCode>(param1), param2);
}

void QwtEventPattern_operatorAssign(QwtEventPattern* self, QwtEventPattern* param1) {
	self->operator=(*param1);
}

void QwtEventPattern_setMousePattern2(QwtEventPattern* self, int param1, int button, int param3) {
	self->setMousePattern(static_cast<QwtEventPattern::MousePatternCode>(param1), static_cast<Qt::MouseButton>(button), static_cast<Qt::KeyboardModifiers>(param3));
}

void QwtEventPattern_setKeyPattern2(QwtEventPattern* self, int param1, int key, int modifiers) {
	self->setKeyPattern(static_cast<QwtEventPattern::KeyPatternCode>(param1), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers));
}

bool QwtEventPattern_override_virtual_mouseMatch2(void* self, intptr_t slot) {
	MiqtVirtualQwtEventPattern* self_cast = dynamic_cast<MiqtVirtualQwtEventPattern*>( (QwtEventPattern*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMatch2 = slot;
	return true;
}

bool QwtEventPattern_virtualbase_mouseMatch2(const void* self, QwtEventPattern__MousePattern* param1, QMouseEvent* param2) {
	return static_cast<const MiqtVirtualQwtEventPattern*>(self)->QwtEventPattern::mouseMatch(*param1, param2);
}

bool QwtEventPattern_override_virtual_keyMatch2(void* self, intptr_t slot) {
	MiqtVirtualQwtEventPattern* self_cast = dynamic_cast<MiqtVirtualQwtEventPattern*>( (QwtEventPattern*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyMatch2 = slot;
	return true;
}

bool QwtEventPattern_virtualbase_keyMatch2(const void* self, QwtEventPattern__KeyPattern* param1, QKeyEvent* param2) {
	return static_cast<const MiqtVirtualQwtEventPattern*>(self)->QwtEventPattern::keyMatch(*param1, param2);
}

void QwtEventPattern_delete(QwtEventPattern* self) {
	delete self;
}

QwtEventPattern__MousePattern* QwtEventPattern__MousePattern_new() {
	return new (std::nothrow) QwtEventPattern::MousePattern();
}

QwtEventPattern__MousePattern* QwtEventPattern__MousePattern_new2(QwtEventPattern__MousePattern* param1) {
	return new (std::nothrow) QwtEventPattern::MousePattern(*param1);
}

QwtEventPattern__MousePattern* QwtEventPattern__MousePattern_new3(int btn) {
	return new (std::nothrow) QwtEventPattern::MousePattern(static_cast<Qt::MouseButton>(btn));
}

QwtEventPattern__MousePattern* QwtEventPattern__MousePattern_new4(int btn, int modifierCodes) {
	return new (std::nothrow) QwtEventPattern::MousePattern(static_cast<Qt::MouseButton>(btn), static_cast<Qt::KeyboardModifiers>(modifierCodes));
}

int QwtEventPattern__MousePattern_button(const QwtEventPattern__MousePattern* self) {
	Qt::MouseButton button_ret = self->button;
	return static_cast<int>(button_ret);
}

void QwtEventPattern__MousePattern_setButton(QwtEventPattern__MousePattern* self, int button) {
	self->button = static_cast<Qt::MouseButton>(button);
}

int QwtEventPattern__MousePattern_modifiers(const QwtEventPattern__MousePattern* self) {
	Qt::KeyboardModifiers modifiers_ret = self->modifiers;
	return static_cast<int>(modifiers_ret);
}

void QwtEventPattern__MousePattern_setModifiers(QwtEventPattern__MousePattern* self, int modifiers) {
	self->modifiers = static_cast<Qt::KeyboardModifiers>(modifiers);
}

void QwtEventPattern__MousePattern_delete(QwtEventPattern__MousePattern* self) {
	delete self;
}

QwtEventPattern__KeyPattern* QwtEventPattern__KeyPattern_new() {
	return new (std::nothrow) QwtEventPattern::KeyPattern();
}

QwtEventPattern__KeyPattern* QwtEventPattern__KeyPattern_new2(QwtEventPattern__KeyPattern* param1) {
	return new (std::nothrow) QwtEventPattern::KeyPattern(*param1);
}

QwtEventPattern__KeyPattern* QwtEventPattern__KeyPattern_new3(int keyCode) {
	return new (std::nothrow) QwtEventPattern::KeyPattern(static_cast<int>(keyCode));
}

QwtEventPattern__KeyPattern* QwtEventPattern__KeyPattern_new4(int keyCode, int modifierCodes) {
	return new (std::nothrow) QwtEventPattern::KeyPattern(static_cast<int>(keyCode), static_cast<Qt::KeyboardModifiers>(modifierCodes));
}

int QwtEventPattern__KeyPattern_key(const QwtEventPattern__KeyPattern* self) {
	return self->key;
}

void QwtEventPattern__KeyPattern_setKey(QwtEventPattern__KeyPattern* self, int key) {
	self->key = static_cast<int>(key);
}

int QwtEventPattern__KeyPattern_modifiers(const QwtEventPattern__KeyPattern* self) {
	Qt::KeyboardModifiers modifiers_ret = self->modifiers;
	return static_cast<int>(modifiers_ret);
}

void QwtEventPattern__KeyPattern_setModifiers(QwtEventPattern__KeyPattern* self, int modifiers) {
	self->modifiers = static_cast<Qt::KeyboardModifiers>(modifiers);
}

void QwtEventPattern__KeyPattern_delete(QwtEventPattern__KeyPattern* self) {
	delete self;
}

