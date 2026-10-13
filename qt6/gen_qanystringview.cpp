#include <QAnyStringView>
#include <QByteArray>
#include <QChar>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qanystringview.h>
#include "gen_qanystringview.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

#include <type_traits>

struct MiqtQAnyStringViewStorage {
	QByteArray utf8;
	QString utf16;
	QAnyStringView view;

	MiqtQAnyStringViewStorage() = default;
	MiqtQAnyStringViewStorage(const QByteArray& str): utf8(str), view(utf8) {}
	MiqtQAnyStringViewStorage(const QString& str): utf16(str), view(utf16) {}
	MiqtQAnyStringViewStorage(QChar c): utf16(c), view(utf16) {}
	MiqtQAnyStringViewStorage(QAnyStringView str) {
		if (str.isNull()) {
			return;
		}
		// Copy the data, including its encoding and embedded NULs. A
		// borrowed or copied input need not outlive the new Go wrapper.
		str.visit([this](auto source) {
			if constexpr (std::is_same_v<decltype(source), QStringView>) {
				utf16 = QString(source.data(), source.size());
				view = QAnyStringView(utf16);
			} else {
				utf8 = QByteArray(source.data(), source.size());
				view = QAnyStringView(decltype(source)(utf8.constData(), utf8.size()));
			}
		});
	}
};

QAnyStringView* QAnyStringView_new(void** ownedStorage) {
	*ownedStorage = nullptr;
	return new (std::nothrow) QAnyStringView();
}

QAnyStringView* QAnyStringView_new2(struct miqt_string str, void** ownedStorage) {
	*ownedStorage = nullptr;
	QByteArray str_QByteArray(str.data, str.len);
	auto* storage = new (std::nothrow) MiqtQAnyStringViewStorage(str_QByteArray);
	if (!storage) { return nullptr; }
	// Keep the native view independently deletable through unsafe interop.
	auto* view = new (std::nothrow) QAnyStringView(storage->view);
	if (!view) { delete storage; return nullptr; }
	*ownedStorage = storage;
	return view;
}

QAnyStringView* QAnyStringView_new3(struct miqt_string str, void** ownedStorage) {
	*ownedStorage = nullptr;
	QString str_QString = QString::fromUtf8(str.data, str.len);
	auto* storage = new (std::nothrow) MiqtQAnyStringViewStorage(str_QString);
	if (!storage) { return nullptr; }
	// Keep the native view independently deletable through unsafe interop.
	auto* view = new (std::nothrow) QAnyStringView(storage->view);
	if (!view) { delete storage; return nullptr; }
	*ownedStorage = storage;
	return view;
}

QAnyStringView* QAnyStringView_new4(QChar* c, void** ownedStorage) {
	*ownedStorage = nullptr;
	auto* storage = new (std::nothrow) MiqtQAnyStringViewStorage(*c);
	if (!storage) { return nullptr; }
	// Keep the native view independently deletable through unsafe interop.
	auto* view = new (std::nothrow) QAnyStringView(storage->view);
	if (!view) { delete storage; return nullptr; }
	*ownedStorage = storage;
	return view;
}

QAnyStringView* QAnyStringView_new5(QAnyStringView* param1, void** ownedStorage) {
	*ownedStorage = nullptr;
	auto* storage = new (std::nothrow) MiqtQAnyStringViewStorage(*param1);
	if (!storage) { return nullptr; }
	// Keep the native view independently deletable through unsafe interop.
	auto* view = new (std::nothrow) QAnyStringView(storage->view);
	if (!view) { delete storage; return nullptr; }
	*ownedStorage = storage;
	return view;
}

struct miqt_string QAnyStringView_toString(const QAnyStringView* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

ptrdiff_t QAnyStringView_size(const QAnyStringView* self) {
	qsizetype _ret = self->size();
	return static_cast<ptrdiff_t>(_ret);
}

const void* QAnyStringView_data(const QAnyStringView* self) {
	return (const void*) self->data();
}

int QAnyStringView_compare(QAnyStringView* lhs, QAnyStringView* rhs) {
	return QAnyStringView::compare(*lhs, *rhs);
}

bool QAnyStringView_equal(QAnyStringView* lhs, QAnyStringView* rhs) {
	return QAnyStringView::equal(*lhs, *rhs);
}

QChar* QAnyStringView_front(const QAnyStringView* self) {
	return new QChar(self->front());
}

QChar* QAnyStringView_back(const QAnyStringView* self) {
	return new QChar(self->back());
}

bool QAnyStringView_empty(const QAnyStringView* self) {
	return self->empty();
}

ptrdiff_t QAnyStringView_sizeBytes(const QAnyStringView* self) {
	qsizetype _ret = self->size_bytes();
	return static_cast<ptrdiff_t>(_ret);
}

bool QAnyStringView_isNull(const QAnyStringView* self) {
	return self->isNull();
}

bool QAnyStringView_isEmpty(const QAnyStringView* self) {
	return self->isEmpty();
}

ptrdiff_t QAnyStringView_length(const QAnyStringView* self) {
	qsizetype _ret = self->length();
	return static_cast<ptrdiff_t>(_ret);
}

int QAnyStringView_compare2(QAnyStringView* lhs, QAnyStringView* rhs, int cs) {
	return QAnyStringView::compare(*lhs, *rhs, static_cast<Qt::CaseSensitivity>(cs));
}

void QAnyStringView_delete(QAnyStringView* self, void* ownedStorage) {
	delete self;
	delete static_cast<MiqtQAnyStringViewStorage*>(ownedStorage);
}

