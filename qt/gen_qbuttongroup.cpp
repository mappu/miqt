#include <QAbstractButton>
#include <QButtonGroup>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qbuttongroup.h"
#include "gen_qbuttongroup.h"
#include "_cgo_export.h"

QButtonGroup* QButtonGroup_new() {
	return new QButtonGroup();
}

QButtonGroup* QButtonGroup_new2(QObject* parent) {
	return new QButtonGroup(parent);
}

QMetaObject* QButtonGroup_MetaObject(const QButtonGroup* self) {
	return (QMetaObject*) self->metaObject();
}

void* QButtonGroup_Metacast(QButtonGroup* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QButtonGroup_Tr(const char* s) {
	QString _ret = QButtonGroup::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QButtonGroup_TrUtf8(const char* s) {
	QString _ret = QButtonGroup::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QButtonGroup_SetExclusive(QButtonGroup* self, bool exclusive) {
	self->setExclusive(exclusive);
}

bool QButtonGroup_Exclusive(const QButtonGroup* self) {
	return self->exclusive();
}

void QButtonGroup_AddButton(QButtonGroup* self, QAbstractButton* param1) {
	self->addButton(param1);
}

void QButtonGroup_RemoveButton(QButtonGroup* self, QAbstractButton* param1) {
	self->removeButton(param1);
}

struct miqt_array* QButtonGroup_Buttons(const QButtonGroup* self) {
	QList<QAbstractButton *> _ret = self->buttons();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractButton** _arr = static_cast<QAbstractButton**>(malloc(sizeof(QAbstractButton*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

QAbstractButton* QButtonGroup_CheckedButton(const QButtonGroup* self) {
	return self->checkedButton();
}

QAbstractButton* QButtonGroup_Button(const QButtonGroup* self, int id) {
	return self->button(static_cast<int>(id));
}

void QButtonGroup_SetId(QButtonGroup* self, QAbstractButton* button, int id) {
	self->setId(button, static_cast<int>(id));
}

int QButtonGroup_Id(const QButtonGroup* self, QAbstractButton* button) {
	return self->id(button);
}

int QButtonGroup_CheckedId(const QButtonGroup* self) {
	return self->checkedId();
}

void QButtonGroup_ButtonClicked(QButtonGroup* self, QAbstractButton* param1) {
	self->buttonClicked(param1);
}

void QButtonGroup_connect_ButtonClicked(QButtonGroup* self, intptr_t slot) {
	QButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(QAbstractButton*)>(&QButtonGroup::buttonClicked), self, [=](QAbstractButton* param1) {
		QAbstractButton* sigval1 = param1;
		miqt_exec_callback_QButtonGroup_ButtonClicked(slot, sigval1);
	});
}

void QButtonGroup_ButtonPressed(QButtonGroup* self, QAbstractButton* param1) {
	self->buttonPressed(param1);
}

void QButtonGroup_connect_ButtonPressed(QButtonGroup* self, intptr_t slot) {
	QButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(QAbstractButton*)>(&QButtonGroup::buttonPressed), self, [=](QAbstractButton* param1) {
		QAbstractButton* sigval1 = param1;
		miqt_exec_callback_QButtonGroup_ButtonPressed(slot, sigval1);
	});
}

void QButtonGroup_ButtonReleased(QButtonGroup* self, QAbstractButton* param1) {
	self->buttonReleased(param1);
}

void QButtonGroup_connect_ButtonReleased(QButtonGroup* self, intptr_t slot) {
	QButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(QAbstractButton*)>(&QButtonGroup::buttonReleased), self, [=](QAbstractButton* param1) {
		QAbstractButton* sigval1 = param1;
		miqt_exec_callback_QButtonGroup_ButtonReleased(slot, sigval1);
	});
}

void QButtonGroup_ButtonToggled(QButtonGroup* self, QAbstractButton* param1, bool param2) {
	self->buttonToggled(param1, param2);
}

void QButtonGroup_connect_ButtonToggled(QButtonGroup* self, intptr_t slot) {
	QButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(QAbstractButton*, bool)>(&QButtonGroup::buttonToggled), self, [=](QAbstractButton* param1, bool param2) {
		QAbstractButton* sigval1 = param1;
		bool sigval2 = param2;
		miqt_exec_callback_QButtonGroup_ButtonToggled(slot, sigval1, sigval2);
	});
}

void QButtonGroup_IdClicked(QButtonGroup* self, int param1) {
	self->idClicked(static_cast<int>(param1));
}

void QButtonGroup_connect_IdClicked(QButtonGroup* self, intptr_t slot) {
	QButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(int)>(&QButtonGroup::idClicked), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QButtonGroup_IdClicked(slot, sigval1);
	});
}

void QButtonGroup_IdPressed(QButtonGroup* self, int param1) {
	self->idPressed(static_cast<int>(param1));
}

void QButtonGroup_connect_IdPressed(QButtonGroup* self, intptr_t slot) {
	QButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(int)>(&QButtonGroup::idPressed), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QButtonGroup_IdPressed(slot, sigval1);
	});
}

void QButtonGroup_IdReleased(QButtonGroup* self, int param1) {
	self->idReleased(static_cast<int>(param1));
}

void QButtonGroup_connect_IdReleased(QButtonGroup* self, intptr_t slot) {
	QButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(int)>(&QButtonGroup::idReleased), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QButtonGroup_IdReleased(slot, sigval1);
	});
}

void QButtonGroup_IdToggled(QButtonGroup* self, int param1, bool param2) {
	self->idToggled(static_cast<int>(param1), param2);
}

void QButtonGroup_connect_IdToggled(QButtonGroup* self, intptr_t slot) {
	QButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(int, bool)>(&QButtonGroup::idToggled), self, [=](int param1, bool param2) {
		int sigval1 = param1;
		bool sigval2 = param2;
		miqt_exec_callback_QButtonGroup_IdToggled(slot, sigval1, sigval2);
	});
}

void QButtonGroup_ButtonClickedWithInt(QButtonGroup* self, int param1) {
	self->buttonClicked(static_cast<int>(param1));
}

void QButtonGroup_connect_ButtonClickedWithInt(QButtonGroup* self, intptr_t slot) {
	QButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(int)>(&QButtonGroup::buttonClicked), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QButtonGroup_ButtonClickedWithInt(slot, sigval1);
	});
}

void QButtonGroup_ButtonPressedWithInt(QButtonGroup* self, int param1) {
	self->buttonPressed(static_cast<int>(param1));
}

void QButtonGroup_connect_ButtonPressedWithInt(QButtonGroup* self, intptr_t slot) {
	QButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(int)>(&QButtonGroup::buttonPressed), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QButtonGroup_ButtonPressedWithInt(slot, sigval1);
	});
}

void QButtonGroup_ButtonReleasedWithInt(QButtonGroup* self, int param1) {
	self->buttonReleased(static_cast<int>(param1));
}

void QButtonGroup_connect_ButtonReleasedWithInt(QButtonGroup* self, intptr_t slot) {
	QButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(int)>(&QButtonGroup::buttonReleased), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QButtonGroup_ButtonReleasedWithInt(slot, sigval1);
	});
}

void QButtonGroup_ButtonToggled2(QButtonGroup* self, int param1, bool param2) {
	self->buttonToggled(static_cast<int>(param1), param2);
}

void QButtonGroup_connect_ButtonToggled2(QButtonGroup* self, intptr_t slot) {
	QButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(int, bool)>(&QButtonGroup::buttonToggled), self, [=](int param1, bool param2) {
		int sigval1 = param1;
		bool sigval2 = param2;
		miqt_exec_callback_QButtonGroup_ButtonToggled2(slot, sigval1, sigval2);
	});
}

struct miqt_string* QButtonGroup_Tr2(const char* s, const char* c) {
	QString _ret = QButtonGroup::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QButtonGroup_Tr3(const char* s, const char* c, int n) {
	QString _ret = QButtonGroup::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QButtonGroup_TrUtf82(const char* s, const char* c) {
	QString _ret = QButtonGroup::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QButtonGroup_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QButtonGroup::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QButtonGroup_AddButton2(QButtonGroup* self, QAbstractButton* param1, int id) {
	self->addButton(param1, static_cast<int>(id));
}

void QButtonGroup_Delete(QButtonGroup* self) {
	delete self;
}

