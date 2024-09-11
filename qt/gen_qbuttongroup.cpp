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

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QButtonGroup* QButtonGroup_new() {
	return new QButtonGroup();
}

QButtonGroup* QButtonGroup_new2(QObject* parent) {
	return new QButtonGroup(parent);
}

QMetaObject* QButtonGroup_MetaObject(const QButtonGroup* self) {
	return (QMetaObject*) self->metaObject();
}

void QButtonGroup_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QButtonGroup::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QButtonGroup_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QButtonGroup::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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

void QButtonGroup_Buttons(const QButtonGroup* self, QAbstractButton*** _out, size_t* _out_len) {
	QList<QAbstractButton*> ret = self->buttons();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractButton** __out = static_cast<QAbstractButton**>(malloc(sizeof(QAbstractButton*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
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

void QButtonGroup_connect_ButtonClicked(QButtonGroup* self, void* slot) {
	QButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(QAbstractButton*)>(&QButtonGroup::buttonClicked), self, [=](QAbstractButton* param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QButtonGroup_ButtonPressed(QButtonGroup* self, QAbstractButton* param1) {
	self->buttonPressed(param1);
}

void QButtonGroup_connect_ButtonPressed(QButtonGroup* self, void* slot) {
	QButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(QAbstractButton*)>(&QButtonGroup::buttonPressed), self, [=](QAbstractButton* param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QButtonGroup_ButtonReleased(QButtonGroup* self, QAbstractButton* param1) {
	self->buttonReleased(param1);
}

void QButtonGroup_connect_ButtonReleased(QButtonGroup* self, void* slot) {
	QButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(QAbstractButton*)>(&QButtonGroup::buttonReleased), self, [=](QAbstractButton* param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QButtonGroup_ButtonToggled(QButtonGroup* self, QAbstractButton* param1, bool param2) {
	self->buttonToggled(param1, param2);
}

void QButtonGroup_connect_ButtonToggled(QButtonGroup* self, void* slot) {
	QButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(QAbstractButton*, bool)>(&QButtonGroup::buttonToggled), self, [=](QAbstractButton* param1, bool param2) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QButtonGroup_IdClicked(QButtonGroup* self, int param1) {
	self->idClicked(static_cast<int>(param1));
}

void QButtonGroup_connect_IdClicked(QButtonGroup* self, void* slot) {
	QButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(int)>(&QButtonGroup::idClicked), self, [=](int param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QButtonGroup_IdPressed(QButtonGroup* self, int param1) {
	self->idPressed(static_cast<int>(param1));
}

void QButtonGroup_connect_IdPressed(QButtonGroup* self, void* slot) {
	QButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(int)>(&QButtonGroup::idPressed), self, [=](int param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QButtonGroup_IdReleased(QButtonGroup* self, int param1) {
	self->idReleased(static_cast<int>(param1));
}

void QButtonGroup_connect_IdReleased(QButtonGroup* self, void* slot) {
	QButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(int)>(&QButtonGroup::idReleased), self, [=](int param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QButtonGroup_IdToggled(QButtonGroup* self, int param1, bool param2) {
	self->idToggled(static_cast<int>(param1), param2);
}

void QButtonGroup_connect_IdToggled(QButtonGroup* self, void* slot) {
	QButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(int, bool)>(&QButtonGroup::idToggled), self, [=](int param1, bool param2) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QButtonGroup_ButtonClickedWithInt(QButtonGroup* self, int param1) {
	self->buttonClicked(static_cast<int>(param1));
}

void QButtonGroup_connect_ButtonClickedWithInt(QButtonGroup* self, void* slot) {
	QButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(int)>(&QButtonGroup::buttonClicked), self, [=](int param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QButtonGroup_ButtonPressedWithInt(QButtonGroup* self, int param1) {
	self->buttonPressed(static_cast<int>(param1));
}

void QButtonGroup_connect_ButtonPressedWithInt(QButtonGroup* self, void* slot) {
	QButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(int)>(&QButtonGroup::buttonPressed), self, [=](int param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QButtonGroup_ButtonReleasedWithInt(QButtonGroup* self, int param1) {
	self->buttonReleased(static_cast<int>(param1));
}

void QButtonGroup_connect_ButtonReleasedWithInt(QButtonGroup* self, void* slot) {
	QButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(int)>(&QButtonGroup::buttonReleased), self, [=](int param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QButtonGroup_ButtonToggled2(QButtonGroup* self, int param1, bool param2) {
	self->buttonToggled(static_cast<int>(param1), param2);
}

void QButtonGroup_connect_ButtonToggled2(QButtonGroup* self, void* slot) {
	QButtonGroup::connect(self, static_cast<void (QButtonGroup::*)(int, bool)>(&QButtonGroup::buttonToggled), self, [=](int param1, bool param2) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QButtonGroup_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QButtonGroup::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QButtonGroup_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QButtonGroup::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QButtonGroup_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QButtonGroup::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QButtonGroup_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QButtonGroup::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QButtonGroup_AddButton2(QButtonGroup* self, QAbstractButton* param1, int id) {
	self->addButton(param1, static_cast<int>(id));
}

void QButtonGroup_Delete(QButtonGroup* self) {
	delete self;
}

