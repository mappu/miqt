#include <QCommandLineOption>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcommandlineoption.h>
#include "gen_qcommandlineoption.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QCommandLineOption* QCommandLineOption_new(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QCommandLineOption(name_QString);
}

QCommandLineOption* QCommandLineOption_new2(struct miqt_array /* of struct miqt_string */  names) {
	QStringList names_QList;
	names_QList.reserve(names.len);
	struct miqt_string* names_arr = static_cast<struct miqt_string*>(names.data);
	for(size_t i = 0; i < names.len; ++i) {
		QString names_arr_i_QString = QString::fromUtf8(names_arr[i].data, names_arr[i].len);
		names_QList.push_back(names_arr_i_QString);
	}
	return new QCommandLineOption(names_QList);
}

QCommandLineOption* QCommandLineOption_new3(struct miqt_string name, struct miqt_string description) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString description_QString = QString::fromUtf8(description.data, description.len);
	return new QCommandLineOption(name_QString, description_QString);
}

QCommandLineOption* QCommandLineOption_new4(struct miqt_array /* of struct miqt_string */  names, struct miqt_string description) {
	QStringList names_QList;
	names_QList.reserve(names.len);
	struct miqt_string* names_arr = static_cast<struct miqt_string*>(names.data);
	for(size_t i = 0; i < names.len; ++i) {
		QString names_arr_i_QString = QString::fromUtf8(names_arr[i].data, names_arr[i].len);
		names_QList.push_back(names_arr_i_QString);
	}
	QString description_QString = QString::fromUtf8(description.data, description.len);
	return new QCommandLineOption(names_QList, description_QString);
}

QCommandLineOption* QCommandLineOption_new5(QCommandLineOption* other) {
	return new QCommandLineOption(*other);
}

QCommandLineOption* QCommandLineOption_new6(struct miqt_string name, struct miqt_string description, struct miqt_string valueName) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString description_QString = QString::fromUtf8(description.data, description.len);
	QString valueName_QString = QString::fromUtf8(valueName.data, valueName.len);
	return new QCommandLineOption(name_QString, description_QString, valueName_QString);
}

QCommandLineOption* QCommandLineOption_new7(struct miqt_string name, struct miqt_string description, struct miqt_string valueName, struct miqt_string defaultValue) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString description_QString = QString::fromUtf8(description.data, description.len);
	QString valueName_QString = QString::fromUtf8(valueName.data, valueName.len);
	QString defaultValue_QString = QString::fromUtf8(defaultValue.data, defaultValue.len);
	return new QCommandLineOption(name_QString, description_QString, valueName_QString, defaultValue_QString);
}

QCommandLineOption* QCommandLineOption_new8(struct miqt_array /* of struct miqt_string */  names, struct miqt_string description, struct miqt_string valueName) {
	QStringList names_QList;
	names_QList.reserve(names.len);
	struct miqt_string* names_arr = static_cast<struct miqt_string*>(names.data);
	for(size_t i = 0; i < names.len; ++i) {
		QString names_arr_i_QString = QString::fromUtf8(names_arr[i].data, names_arr[i].len);
		names_QList.push_back(names_arr_i_QString);
	}
	QString description_QString = QString::fromUtf8(description.data, description.len);
	QString valueName_QString = QString::fromUtf8(valueName.data, valueName.len);
	return new QCommandLineOption(names_QList, description_QString, valueName_QString);
}

QCommandLineOption* QCommandLineOption_new9(struct miqt_array /* of struct miqt_string */  names, struct miqt_string description, struct miqt_string valueName, struct miqt_string defaultValue) {
	QStringList names_QList;
	names_QList.reserve(names.len);
	struct miqt_string* names_arr = static_cast<struct miqt_string*>(names.data);
	for(size_t i = 0; i < names.len; ++i) {
		QString names_arr_i_QString = QString::fromUtf8(names_arr[i].data, names_arr[i].len);
		names_QList.push_back(names_arr_i_QString);
	}
	QString description_QString = QString::fromUtf8(description.data, description.len);
	QString valueName_QString = QString::fromUtf8(valueName.data, valueName.len);
	QString defaultValue_QString = QString::fromUtf8(defaultValue.data, defaultValue.len);
	return new QCommandLineOption(names_QList, description_QString, valueName_QString, defaultValue_QString);
}

void QCommandLineOption_operatorAssign(QCommandLineOption* self, QCommandLineOption* other) {
	self->operator=(*other);
}

void QCommandLineOption_swap(QCommandLineOption* self, QCommandLineOption* other) {
	self->swap(*other);
}

struct miqt_array /* of struct miqt_string */  QCommandLineOption_names(const QCommandLineOption* self) {
	QStringList _ret = self->names();
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

void QCommandLineOption_setValueName(QCommandLineOption* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setValueName(name_QString);
}

struct miqt_string QCommandLineOption_valueName(const QCommandLineOption* self) {
	QString _ret = self->valueName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCommandLineOption_setDescription(QCommandLineOption* self, struct miqt_string description) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	self->setDescription(description_QString);
}

struct miqt_string QCommandLineOption_description(const QCommandLineOption* self) {
	QString _ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCommandLineOption_setDefaultValue(QCommandLineOption* self, struct miqt_string defaultValue) {
	QString defaultValue_QString = QString::fromUtf8(defaultValue.data, defaultValue.len);
	self->setDefaultValue(defaultValue_QString);
}

void QCommandLineOption_setDefaultValues(QCommandLineOption* self, struct miqt_array /* of struct miqt_string */  defaultValues) {
	QStringList defaultValues_QList;
	defaultValues_QList.reserve(defaultValues.len);
	struct miqt_string* defaultValues_arr = static_cast<struct miqt_string*>(defaultValues.data);
	for(size_t i = 0; i < defaultValues.len; ++i) {
		QString defaultValues_arr_i_QString = QString::fromUtf8(defaultValues_arr[i].data, defaultValues_arr[i].len);
		defaultValues_QList.push_back(defaultValues_arr_i_QString);
	}
	self->setDefaultValues(defaultValues_QList);
}

struct miqt_array /* of struct miqt_string */  QCommandLineOption_defaultValues(const QCommandLineOption* self) {
	QStringList _ret = self->defaultValues();
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

int QCommandLineOption_flags(const QCommandLineOption* self) {
	QCommandLineOption::Flags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QCommandLineOption_setFlags(QCommandLineOption* self, int aflags) {
	self->setFlags(static_cast<QCommandLineOption::Flags>(aflags));
}

void QCommandLineOption_delete(QCommandLineOption* self) {
	delete self;
}

