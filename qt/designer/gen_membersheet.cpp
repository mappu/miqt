#include <QByteArray>
#include <QDesignerMemberSheetExtension>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <membersheet.h>
#include "gen_membersheet.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

int QDesignerMemberSheetExtension_count(const QDesignerMemberSheetExtension* self) {
	return self->count();
}

int QDesignerMemberSheetExtension_indexOf(const QDesignerMemberSheetExtension* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->indexOf(name_QString);
}

struct miqt_string QDesignerMemberSheetExtension_memberName(const QDesignerMemberSheetExtension* self, int index) {
	QString _ret = self->memberName(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerMemberSheetExtension_memberGroup(const QDesignerMemberSheetExtension* self, int index) {
	QString _ret = self->memberGroup(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerMemberSheetExtension_setMemberGroup(QDesignerMemberSheetExtension* self, int index, struct miqt_string group) {
	QString group_QString = QString::fromUtf8(group.data, group.len);
	self->setMemberGroup(static_cast<int>(index), group_QString);
}

bool QDesignerMemberSheetExtension_isVisible(const QDesignerMemberSheetExtension* self, int index) {
	return self->isVisible(static_cast<int>(index));
}

void QDesignerMemberSheetExtension_setVisible(QDesignerMemberSheetExtension* self, int index, bool b) {
	self->setVisible(static_cast<int>(index), b);
}

bool QDesignerMemberSheetExtension_isSignal(const QDesignerMemberSheetExtension* self, int index) {
	return self->isSignal(static_cast<int>(index));
}

bool QDesignerMemberSheetExtension_isSlot(const QDesignerMemberSheetExtension* self, int index) {
	return self->isSlot(static_cast<int>(index));
}

bool QDesignerMemberSheetExtension_inheritedFromWidget(const QDesignerMemberSheetExtension* self, int index) {
	return self->inheritedFromWidget(static_cast<int>(index));
}

struct miqt_string QDesignerMemberSheetExtension_declaredInClass(const QDesignerMemberSheetExtension* self, int index) {
	QString _ret = self->declaredInClass(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerMemberSheetExtension_signature(const QDesignerMemberSheetExtension* self, int index) {
	QString _ret = self->signature(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QDesignerMemberSheetExtension_parameterTypes(const QDesignerMemberSheetExtension* self, int index) {
	QList<QByteArray> _ret = self->parameterTypes(static_cast<int>(index));
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QDesignerMemberSheetExtension_parameterNames(const QDesignerMemberSheetExtension* self, int index) {
	QList<QByteArray> _ret = self->parameterNames(static_cast<int>(index));
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QDesignerMemberSheetExtension_operatorAssign(QDesignerMemberSheetExtension* self, QDesignerMemberSheetExtension* param1) {
	self->operator=(*param1);
}

void QDesignerMemberSheetExtension_delete(QDesignerMemberSheetExtension* self) {
	delete self;
}

