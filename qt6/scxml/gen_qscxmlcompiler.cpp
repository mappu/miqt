#include <QByteArray>
#include <QList>
#include <QScxmlCompiler>
#define WORKAROUND_INNER_CLASS_DEFINITION_QScxmlCompiler__Loader
#include <QScxmlError>
#include <QScxmlStateMachine>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QXmlStreamReader>
#include <qscxmlcompiler.h>
#include "gen_qscxmlcompiler.h"

#ifdef __cplusplus
extern "C" {
#endif

struct miqt_string miqt_exec_callback_QScxmlCompiler__Loader_load(QScxmlCompiler__Loader*, intptr_t, struct miqt_string, struct miqt_string, struct miqt_array /* of struct miqt_string */ );
#ifdef __cplusplus
} /* extern C */
#endif

QScxmlCompiler* QScxmlCompiler_new(QXmlStreamReader* xmlReader) {
	return new (std::nothrow) QScxmlCompiler(xmlReader);
}

struct miqt_string QScxmlCompiler_fileName(const QScxmlCompiler* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QScxmlCompiler_setFileName(QScxmlCompiler* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setFileName(fileName_QString);
}

QScxmlCompiler__Loader* QScxmlCompiler_loader(const QScxmlCompiler* self) {
	return self->loader();
}

void QScxmlCompiler_setLoader(QScxmlCompiler* self, QScxmlCompiler__Loader* newLoader) {
	self->setLoader(newLoader);
}

QScxmlStateMachine* QScxmlCompiler_compile(QScxmlCompiler* self) {
	return self->compile();
}

struct miqt_array /* of QScxmlError* */  QScxmlCompiler_errors(const QScxmlCompiler* self) {
	QList<QScxmlError> _ret = self->errors();
	// Convert QList<> from C++ memory to manually-managed C memory
	QScxmlError** _arr = static_cast<QScxmlError**>(malloc(sizeof(QScxmlError*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QScxmlError(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QScxmlCompiler_delete(QScxmlCompiler* self) {
	delete self;
}

class MiqtVirtualQScxmlCompilerLoader final : public QScxmlCompiler::Loader {
public:

	MiqtVirtualQScxmlCompilerLoader(): QScxmlCompiler::Loader() {}

	virtual ~MiqtVirtualQScxmlCompilerLoader() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__load = 0;

	// Subclass to allow providing a Go implementation
	virtual QByteArray load(const QString& name, const QString& baseDir, QStringList* errors) override {
		if (handle__load == 0) {
			return QByteArray(); // Pure virtual, there is no base we can call
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		const QString baseDir_ret = baseDir;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray baseDir_b = baseDir_ret.toUtf8();
		struct miqt_string baseDir_ms;
		baseDir_ms.len = baseDir_b.length();
		baseDir_ms.data = static_cast<char*>(malloc(baseDir_ms.len));
		memcpy(baseDir_ms.data, baseDir_b.data(), baseDir_ms.len);
		struct miqt_string sigval2 = baseDir_ms;
		QStringList* errors_ret = errors;
		// Convert QList<> from C++ memory to manually-managed C memory
		struct miqt_string* errors_arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * errors_ret.length()));
		for (size_t i = 0, e = errors_ret.length(); i < e; ++i) {
			QString errors_lv_ret = errors_ret[i];
			// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
			QByteArray errors_lv_b = errors_lv_ret.toUtf8();
			struct miqt_string errors_lv_ms;
			errors_lv_ms.len = errors_lv_b.length();
			errors_lv_ms.data = static_cast<char*>(malloc(errors_lv_ms.len));
			memcpy(errors_lv_ms.data, errors_lv_b.data(), errors_lv_ms.len);
			errors_arr[i] = errors_lv_ms;
		}
		struct miqt_array errors_out;
		errors_out.len = errors_ret.length();
		errors_out.data = static_cast<void*>(errors_arr);
		struct miqt_array /* of struct miqt_string */  sigval3 = errors_out;
		struct miqt_string callback_return_value = miqt_exec_callback_QScxmlCompiler__Loader_load(this, handle__load, sigval1, sigval2, sigval3);
		QByteArray callback_return_value_QByteArray(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QByteArray;
	}

};

QScxmlCompiler__Loader* QScxmlCompiler__Loader_new() {
	return new (std::nothrow) MiqtVirtualQScxmlCompilerLoader();
}

struct miqt_string QScxmlCompiler__Loader_load(QScxmlCompiler__Loader* self, struct miqt_string name, struct miqt_string baseDir, struct miqt_array /* of struct miqt_string */  errors) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString baseDir_QString = QString::fromUtf8(baseDir.data, baseDir.len);
	QStringList errors_QList;
	errors_QList.reserve(errors.len);
	struct miqt_string* errors_arr = static_cast<struct miqt_string*>(errors.data);
	for(size_t i = 0; i < errors.len; ++i) {
		QString errors_arr_i_QString = QString::fromUtf8(errors_arr[i].data, errors_arr[i].len);
		errors_QList.push_back(errors_arr_i_QString);
	}
	QByteArray _qb = self->load(name_QString, baseDir_QString, &errors_QList);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QScxmlCompiler__Loader_operatorAssign(QScxmlCompiler__Loader* self, QScxmlCompiler__Loader* param1) {
	self->operator=(*param1);
}

bool QScxmlCompiler__Loader_override_virtual_load(void* self, intptr_t slot) {
	MiqtVirtualQScxmlCompilerLoader* self_cast = dynamic_cast<MiqtVirtualQScxmlCompilerLoader*>( (QScxmlCompiler::Loader*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__load = slot;
	return true;
}

void QScxmlCompiler__Loader_delete(QScxmlCompiler__Loader* self) {
	delete self;
}

