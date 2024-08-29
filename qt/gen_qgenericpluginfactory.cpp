#include <QGenericPluginFactory>
#include <QList>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qgenericpluginfactory.h"

#include "gen_qgenericpluginfactory.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

void QGenericPluginFactory_Keys(char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = QGenericPluginFactory::keys();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

QObject* QGenericPluginFactory_Create(const char* param1, size_t param1_Strlen, const char* param2, size_t param2_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	QString param2_QString = QString::fromUtf8(param2, param2_Strlen);
	return QGenericPluginFactory::create(param1_QString, param2_QString);
}

void QGenericPluginFactory_Delete(QGenericPluginFactory* self) {
	delete self;
}

