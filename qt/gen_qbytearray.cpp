#include <QByteArray>
#define WORKAROUND_INNER_CLASS_DEFINITION_QByteArray__FromBase64Result
#include <QByteArrayDataPtr>
#include <QByteRef>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qbytearray.h"

#include "gen_qbytearray.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QByteArrayDataPtr* QByteArrayDataPtr_new() {
	return new QByteArrayDataPtr();
}

QByteArrayDataPtr* QByteArrayDataPtr_new2(QByteArrayDataPtr* param1) {
	return new QByteArrayDataPtr(*param1);
}

void QByteArrayDataPtr_Delete(QByteArrayDataPtr* self) {
	delete self;
}

QByteArray* QByteArray_new() {
	return new QByteArray();
}

QByteArray* QByteArray_new2(const char* param1) {
	return new QByteArray(param1);
}

QByteArray* QByteArray_new3(int size, char c) {
	return new QByteArray(static_cast<int>(size), static_cast<char>(c));
}

QByteArray* QByteArray_new4(int size, uintptr_t param2) {
	return new QByteArray(static_cast<int>(size), static_cast<Qt::Initialization>(param2));
}

QByteArray* QByteArray_new5(QByteArray* param1) {
	return new QByteArray(*param1);
}

QByteArray* QByteArray_new6(QByteArrayDataPtr* dd) {
	return new QByteArray(*dd);
}

QByteArray* QByteArray_new7(const char* param1, int size) {
	return new QByteArray(param1, static_cast<int>(size));
}

void QByteArray_OperatorAssign(QByteArray* self, QByteArray* param1) {
	self->operator=(*param1);
}

void QByteArray_OperatorAssignWithStr(QByteArray* self, const char* str) {
	self->operator=(str);
}

void QByteArray_Swap(QByteArray* self, QByteArray* other) {
	self->swap(*other);
}

int QByteArray_Size(QByteArray* self) {
	return const_cast<const QByteArray*>(self)->size();
}

bool QByteArray_IsEmpty(QByteArray* self) {
	return const_cast<const QByteArray*>(self)->isEmpty();
}

void QByteArray_Resize(QByteArray* self, int size) {
	self->resize(static_cast<int>(size));
}

QByteArray* QByteArray_Fill(QByteArray* self, char c) {
	QByteArray& ret = self->fill(static_cast<char>(c));
	// Cast returned reference into pointer
	return &ret;
}

int QByteArray_Capacity(QByteArray* self) {
	return const_cast<const QByteArray*>(self)->capacity();
}

void QByteArray_Reserve(QByteArray* self, int size) {
	self->reserve(static_cast<int>(size));
}

void QByteArray_Squeeze(QByteArray* self) {
	self->squeeze();
}

char* QByteArray_Data(QByteArray* self) {
	return self->data();
}

const char* QByteArray_Data2(QByteArray* self) {
	return (const char*) const_cast<const QByteArray*>(self)->data();
}

const char* QByteArray_ConstData(QByteArray* self) {
	return (const char*) const_cast<const QByteArray*>(self)->constData();
}

void QByteArray_Detach(QByteArray* self) {
	self->detach();
}

bool QByteArray_IsDetached(QByteArray* self) {
	return const_cast<const QByteArray*>(self)->isDetached();
}

bool QByteArray_IsSharedWith(QByteArray* self, QByteArray* other) {
	return const_cast<const QByteArray*>(self)->isSharedWith(*other);
}

void QByteArray_Clear(QByteArray* self) {
	self->clear();
}

char QByteArray_At(QByteArray* self, int i) {
	return const_cast<const QByteArray*>(self)->at(static_cast<int>(i));
}

char QByteArray_OperatorSubscript(QByteArray* self, int i) {
	return const_cast<const QByteArray*>(self)->operator[](static_cast<int>(i));
}

char QByteArray_OperatorSubscriptWithUint(QByteArray* self, unsigned int i) {
	return const_cast<const QByteArray*>(self)->operator[](static_cast<uint>(i));
}

QByteRef* QByteArray_OperatorSubscriptWithInt(QByteArray* self, int i) {
	QByteRef ret = self->operator[](static_cast<int>(i));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteRef*>(new QByteRef(ret));
}

QByteRef* QByteArray_OperatorSubscript2(QByteArray* self, unsigned int i) {
	QByteRef ret = self->operator[](static_cast<uint>(i));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteRef*>(new QByteRef(ret));
}

char QByteArray_Front(QByteArray* self) {
	return const_cast<const QByteArray*>(self)->front();
}

QByteRef* QByteArray_Front2(QByteArray* self) {
	QByteRef ret = self->front();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteRef*>(new QByteRef(ret));
}

char QByteArray_Back(QByteArray* self) {
	return const_cast<const QByteArray*>(self)->back();
}

QByteRef* QByteArray_Back2(QByteArray* self) {
	QByteRef ret = self->back();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteRef*>(new QByteRef(ret));
}

int QByteArray_IndexOf(QByteArray* self, char c) {
	return const_cast<const QByteArray*>(self)->indexOf(static_cast<char>(c));
}

int QByteArray_IndexOfWithChar(QByteArray* self, const char* c) {
	return const_cast<const QByteArray*>(self)->indexOf(c);
}

int QByteArray_IndexOfWithQByteArray(QByteArray* self, QByteArray* a) {
	return const_cast<const QByteArray*>(self)->indexOf(*a);
}

int QByteArray_LastIndexOf(QByteArray* self, char c) {
	return const_cast<const QByteArray*>(self)->lastIndexOf(static_cast<char>(c));
}

int QByteArray_LastIndexOfWithChar(QByteArray* self, const char* c) {
	return const_cast<const QByteArray*>(self)->lastIndexOf(c);
}

int QByteArray_LastIndexOfWithQByteArray(QByteArray* self, QByteArray* a) {
	return const_cast<const QByteArray*>(self)->lastIndexOf(*a);
}

bool QByteArray_Contains(QByteArray* self, char c) {
	return const_cast<const QByteArray*>(self)->contains(static_cast<char>(c));
}

bool QByteArray_ContainsWithChar(QByteArray* self, const char* a) {
	return const_cast<const QByteArray*>(self)->contains(a);
}

bool QByteArray_ContainsWithQByteArray(QByteArray* self, QByteArray* a) {
	return const_cast<const QByteArray*>(self)->contains(*a);
}

int QByteArray_Count(QByteArray* self, char c) {
	return const_cast<const QByteArray*>(self)->count(static_cast<char>(c));
}

int QByteArray_CountWithChar(QByteArray* self, const char* a) {
	return const_cast<const QByteArray*>(self)->count(a);
}

int QByteArray_CountWithQByteArray(QByteArray* self, QByteArray* a) {
	return const_cast<const QByteArray*>(self)->count(*a);
}

int QByteArray_Compare(QByteArray* self, const char* c) {
	return const_cast<const QByteArray*>(self)->compare(c);
}

int QByteArray_CompareWithQByteArray(QByteArray* self, QByteArray* a) {
	return const_cast<const QByteArray*>(self)->compare(*a);
}

QByteArray* QByteArray_Left(QByteArray* self, int lenVal) {
	QByteArray ret = const_cast<const QByteArray*>(self)->left(static_cast<int>(lenVal));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_Right(QByteArray* self, int lenVal) {
	QByteArray ret = const_cast<const QByteArray*>(self)->right(static_cast<int>(lenVal));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_Mid(QByteArray* self, int index) {
	QByteArray ret = const_cast<const QByteArray*>(self)->mid(static_cast<int>(index));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_Chopped(QByteArray* self, int lenVal) {
	QByteArray ret = const_cast<const QByteArray*>(self)->chopped(static_cast<int>(lenVal));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

bool QByteArray_StartsWith(QByteArray* self, QByteArray* a) {
	return const_cast<const QByteArray*>(self)->startsWith(*a);
}

bool QByteArray_StartsWithWithChar(QByteArray* self, char c) {
	return const_cast<const QByteArray*>(self)->startsWith(static_cast<char>(c));
}

bool QByteArray_StartsWith2(QByteArray* self, const char* c) {
	return const_cast<const QByteArray*>(self)->startsWith(c);
}

bool QByteArray_EndsWith(QByteArray* self, QByteArray* a) {
	return const_cast<const QByteArray*>(self)->endsWith(*a);
}

bool QByteArray_EndsWithWithChar(QByteArray* self, char c) {
	return const_cast<const QByteArray*>(self)->endsWith(static_cast<char>(c));
}

bool QByteArray_EndsWith2(QByteArray* self, const char* c) {
	return const_cast<const QByteArray*>(self)->endsWith(c);
}

bool QByteArray_IsUpper(QByteArray* self) {
	return const_cast<const QByteArray*>(self)->isUpper();
}

bool QByteArray_IsLower(QByteArray* self) {
	return const_cast<const QByteArray*>(self)->isLower();
}

void QByteArray_Truncate(QByteArray* self, int pos) {
	self->truncate(static_cast<int>(pos));
}

void QByteArray_Chop(QByteArray* self, int n) {
	self->chop(static_cast<int>(n));
}

QByteArray* QByteArray_ToLower(QByteArray* self) {
	QByteArray ret = const_cast<const QByteArray*>(self)->toLower();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_ToUpper(QByteArray* self) {
	QByteArray ret = const_cast<const QByteArray*>(self)->toUpper();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_Trimmed(QByteArray* self) {
	QByteArray ret = const_cast<const QByteArray*>(self)->trimmed();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_Simplified(QByteArray* self) {
	QByteArray ret = const_cast<const QByteArray*>(self)->simplified();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_LeftJustified(QByteArray* self, int width) {
	QByteArray ret = const_cast<const QByteArray*>(self)->leftJustified(static_cast<int>(width));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_RightJustified(QByteArray* self, int width) {
	QByteArray ret = const_cast<const QByteArray*>(self)->rightJustified(static_cast<int>(width));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_Prepend(QByteArray* self, char c) {
	QByteArray& ret = self->prepend(static_cast<char>(c));
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_Prepend2(QByteArray* self, int count, char c) {
	QByteArray& ret = self->prepend(static_cast<int>(count), static_cast<char>(c));
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_PrependWithChar(QByteArray* self, const char* s) {
	QByteArray& ret = self->prepend(s);
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_Prepend3(QByteArray* self, const char* s, int lenVal) {
	QByteArray& ret = self->prepend(s, static_cast<int>(lenVal));
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_PrependWithQByteArray(QByteArray* self, QByteArray* a) {
	QByteArray& ret = self->prepend(*a);
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_Append(QByteArray* self, char c) {
	QByteArray& ret = self->append(static_cast<char>(c));
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_Append2(QByteArray* self, int count, char c) {
	QByteArray& ret = self->append(static_cast<int>(count), static_cast<char>(c));
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_AppendWithChar(QByteArray* self, const char* s) {
	QByteArray& ret = self->append(s);
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_Append3(QByteArray* self, const char* s, int lenVal) {
	QByteArray& ret = self->append(s, static_cast<int>(lenVal));
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_AppendWithQByteArray(QByteArray* self, QByteArray* a) {
	QByteArray& ret = self->append(*a);
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_Insert(QByteArray* self, int i, char c) {
	QByteArray& ret = self->insert(static_cast<int>(i), static_cast<char>(c));
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_Insert2(QByteArray* self, int i, int count, char c) {
	QByteArray& ret = self->insert(static_cast<int>(i), static_cast<int>(count), static_cast<char>(c));
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_Insert3(QByteArray* self, int i, const char* s) {
	QByteArray& ret = self->insert(static_cast<int>(i), s);
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_Insert4(QByteArray* self, int i, const char* s, int lenVal) {
	QByteArray& ret = self->insert(static_cast<int>(i), s, static_cast<int>(lenVal));
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_Insert5(QByteArray* self, int i, QByteArray* a) {
	QByteArray& ret = self->insert(static_cast<int>(i), *a);
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_Remove(QByteArray* self, int index, int lenVal) {
	QByteArray& ret = self->remove(static_cast<int>(index), static_cast<int>(lenVal));
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_Replace(QByteArray* self, int index, int lenVal, const char* s) {
	QByteArray& ret = self->replace(static_cast<int>(index), static_cast<int>(lenVal), s);
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_Replace2(QByteArray* self, int index, int lenVal, const char* s, int alen) {
	QByteArray& ret = self->replace(static_cast<int>(index), static_cast<int>(lenVal), s, static_cast<int>(alen));
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_Replace3(QByteArray* self, int index, int lenVal, QByteArray* s) {
	QByteArray& ret = self->replace(static_cast<int>(index), static_cast<int>(lenVal), *s);
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_Replace4(QByteArray* self, char before, const char* after) {
	QByteArray& ret = self->replace(static_cast<char>(before), after);
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_Replace5(QByteArray* self, char before, QByteArray* after) {
	QByteArray& ret = self->replace(static_cast<char>(before), *after);
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_Replace6(QByteArray* self, const char* before, const char* after) {
	QByteArray& ret = self->replace(before, after);
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_Replace7(QByteArray* self, const char* before, int bsize, const char* after, int asize) {
	QByteArray& ret = self->replace(before, static_cast<int>(bsize), after, static_cast<int>(asize));
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_Replace8(QByteArray* self, QByteArray* before, QByteArray* after) {
	QByteArray& ret = self->replace(*before, *after);
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_Replace9(QByteArray* self, QByteArray* before, const char* after) {
	QByteArray& ret = self->replace(*before, after);
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_Replace10(QByteArray* self, const char* before, QByteArray* after) {
	QByteArray& ret = self->replace(before, *after);
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_Replace11(QByteArray* self, char before, char after) {
	QByteArray& ret = self->replace(static_cast<char>(before), static_cast<char>(after));
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_OperatorPlusAssign(QByteArray* self, char c) {
	QByteArray& ret = self->operator+=(static_cast<char>(c));
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_OperatorPlusAssignWithChar(QByteArray* self, const char* s) {
	QByteArray& ret = self->operator+=(s);
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_OperatorPlusAssignWithQByteArray(QByteArray* self, QByteArray* a) {
	QByteArray& ret = self->operator+=(*a);
	// Cast returned reference into pointer
	return &ret;
}

void QByteArray_Split(QByteArray* self, char sep, QByteArray*** _out, size_t* _out_len) {
	QList<QByteArray> ret = const_cast<const QByteArray*>(self)->split(static_cast<char>(sep));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** __out = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QByteArray(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

QByteArray* QByteArray_Repeated(QByteArray* self, int times) {
	QByteArray ret = const_cast<const QByteArray*>(self)->repeated(static_cast<int>(times));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_AppendWithQString(QByteArray* self, const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	QByteArray& ret = self->append(s_QString);
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_Insert6(QByteArray* self, int i, const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	QByteArray& ret = self->insert(static_cast<int>(i), s_QString);
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_Replace12(QByteArray* self, const char* before, size_t before_Strlen, const char* after) {
	QString before_QString = QString::fromUtf8(before, before_Strlen);
	QByteArray& ret = self->replace(before_QString, after);
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_Replace13(QByteArray* self, char c, const char* after, size_t after_Strlen) {
	QString after_QString = QString::fromUtf8(after, after_Strlen);
	QByteArray& ret = self->replace(static_cast<char>(c), after_QString);
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_Replace14(QByteArray* self, const char* before, size_t before_Strlen, QByteArray* after) {
	QString before_QString = QString::fromUtf8(before, before_Strlen);
	QByteArray& ret = self->replace(before_QString, *after);
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_OperatorPlusAssignWithQString(QByteArray* self, const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	QByteArray& ret = self->operator+=(s_QString);
	// Cast returned reference into pointer
	return &ret;
}

int QByteArray_IndexOfWithQString(QByteArray* self, const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return const_cast<const QByteArray*>(self)->indexOf(s_QString);
}

int QByteArray_LastIndexOfWithQString(QByteArray* self, const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return const_cast<const QByteArray*>(self)->lastIndexOf(s_QString);
}

bool QByteArray_OperatorEqual(QByteArray* self, const char* s2, size_t s2_Strlen) {
	QString s2_QString = QString::fromUtf8(s2, s2_Strlen);
	return const_cast<const QByteArray*>(self)->operator==(s2_QString);
}

bool QByteArray_OperatorNotEqual(QByteArray* self, const char* s2, size_t s2_Strlen) {
	QString s2_QString = QString::fromUtf8(s2, s2_Strlen);
	return const_cast<const QByteArray*>(self)->operator!=(s2_QString);
}

bool QByteArray_OperatorLesser(QByteArray* self, const char* s2, size_t s2_Strlen) {
	QString s2_QString = QString::fromUtf8(s2, s2_Strlen);
	return const_cast<const QByteArray*>(self)->operator<(s2_QString);
}

bool QByteArray_OperatorGreater(QByteArray* self, const char* s2, size_t s2_Strlen) {
	QString s2_QString = QString::fromUtf8(s2, s2_Strlen);
	return const_cast<const QByteArray*>(self)->operator>(s2_QString);
}

bool QByteArray_OperatorLesserOrEqual(QByteArray* self, const char* s2, size_t s2_Strlen) {
	QString s2_QString = QString::fromUtf8(s2, s2_Strlen);
	return const_cast<const QByteArray*>(self)->operator<=(s2_QString);
}

bool QByteArray_OperatorGreaterOrEqual(QByteArray* self, const char* s2, size_t s2_Strlen) {
	QString s2_QString = QString::fromUtf8(s2, s2_Strlen);
	return const_cast<const QByteArray*>(self)->operator>=(s2_QString);
}

int16_t QByteArray_ToShort(QByteArray* self) {
	return const_cast<const QByteArray*>(self)->toShort();
}

uint16_t QByteArray_ToUShort(QByteArray* self) {
	return const_cast<const QByteArray*>(self)->toUShort();
}

int QByteArray_ToInt(QByteArray* self) {
	return const_cast<const QByteArray*>(self)->toInt();
}

unsigned int QByteArray_ToUInt(QByteArray* self) {
	return const_cast<const QByteArray*>(self)->toUInt();
}

long QByteArray_ToLong(QByteArray* self) {
	return const_cast<const QByteArray*>(self)->toLong();
}

unsigned long QByteArray_ToULong(QByteArray* self) {
	return const_cast<const QByteArray*>(self)->toULong();
}

int64_t QByteArray_ToLongLong(QByteArray* self) {
	return const_cast<const QByteArray*>(self)->toLongLong();
}

uint64_t QByteArray_ToULongLong(QByteArray* self) {
	return const_cast<const QByteArray*>(self)->toULongLong();
}

float QByteArray_ToFloat(QByteArray* self) {
	return const_cast<const QByteArray*>(self)->toFloat();
}

double QByteArray_ToDouble(QByteArray* self) {
	return const_cast<const QByteArray*>(self)->toDouble();
}

QByteArray* QByteArray_ToBase64(QByteArray* self, int options) {
	QByteArray ret = const_cast<const QByteArray*>(self)->toBase64(static_cast<QByteArray::Base64Options>(options));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_ToBase642(QByteArray* self) {
	QByteArray ret = const_cast<const QByteArray*>(self)->toBase64();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_ToHex(QByteArray* self) {
	QByteArray ret = const_cast<const QByteArray*>(self)->toHex();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_ToHexWithSeparator(QByteArray* self, char separator) {
	QByteArray ret = const_cast<const QByteArray*>(self)->toHex(static_cast<char>(separator));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_ToPercentEncoding(QByteArray* self) {
	QByteArray ret = const_cast<const QByteArray*>(self)->toPercentEncoding();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_SetNum(QByteArray* self, int16_t param1) {
	QByteArray& ret = self->setNum(static_cast<short>(param1));
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_SetNumWithUshort(QByteArray* self, uint16_t param1) {
	QByteArray& ret = self->setNum(static_cast<ushort>(param1));
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_SetNumWithInt(QByteArray* self, int param1) {
	QByteArray& ret = self->setNum(static_cast<int>(param1));
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_SetNumWithUint(QByteArray* self, unsigned int param1) {
	QByteArray& ret = self->setNum(static_cast<uint>(param1));
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_SetNumWithQlonglong(QByteArray* self, int64_t param1) {
	QByteArray& ret = self->setNum((qlonglong)(param1));
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_SetNumWithQulonglong(QByteArray* self, uint64_t param1) {
	QByteArray& ret = self->setNum((qulonglong)(param1));
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_SetNumWithFloat(QByteArray* self, float param1) {
	QByteArray& ret = self->setNum(static_cast<float>(param1));
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_SetNumWithDouble(QByteArray* self, double param1) {
	QByteArray& ret = self->setNum(static_cast<double>(param1));
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_SetRawData(QByteArray* self, const char* a, unsigned int n) {
	QByteArray& ret = self->setRawData(a, static_cast<uint>(n));
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_Number(int param1) {
	QByteArray ret = QByteArray::number(static_cast<int>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_NumberWithUint(unsigned int param1) {
	QByteArray ret = QByteArray::number(static_cast<uint>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_NumberWithQlonglong(int64_t param1) {
	QByteArray ret = QByteArray::number((qlonglong)(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_NumberWithQulonglong(uint64_t param1) {
	QByteArray ret = QByteArray::number((qulonglong)(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_NumberWithDouble(double param1) {
	QByteArray ret = QByteArray::number(static_cast<double>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_FromRawData(const char* param1, int size) {
	QByteArray ret = QByteArray::fromRawData(param1, static_cast<int>(size));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray__FromBase64Result* QByteArray_FromBase64Encoding(QByteArray* base64) {
	QByteArray::FromBase64Result ret = QByteArray::fromBase64Encoding(*base64);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray::FromBase64Result*>(new QByteArray::FromBase64Result(ret));
}

QByteArray* QByteArray_FromBase64(QByteArray* base64, int options) {
	QByteArray ret = QByteArray::fromBase64(*base64, static_cast<QByteArray::Base64Options>(options));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_FromBase64WithBase64(QByteArray* base64) {
	QByteArray ret = QByteArray::fromBase64(*base64);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_FromHex(QByteArray* hexEncoded) {
	QByteArray ret = QByteArray::fromHex(*hexEncoded);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_FromPercentEncoding(QByteArray* pctEncoded) {
	QByteArray ret = QByteArray::fromPercentEncoding(*pctEncoded);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

char* QByteArray_Begin(QByteArray* self) {
	return self->begin();
}

const char* QByteArray_Begin2(QByteArray* self) {
	return (const char*) const_cast<const QByteArray*>(self)->begin();
}

const char* QByteArray_Cbegin(QByteArray* self) {
	return (const char*) const_cast<const QByteArray*>(self)->cbegin();
}

const char* QByteArray_ConstBegin(QByteArray* self) {
	return (const char*) const_cast<const QByteArray*>(self)->constBegin();
}

char* QByteArray_End(QByteArray* self) {
	return self->end();
}

const char* QByteArray_End2(QByteArray* self) {
	return (const char*) const_cast<const QByteArray*>(self)->end();
}

const char* QByteArray_Cend(QByteArray* self) {
	return (const char*) const_cast<const QByteArray*>(self)->cend();
}

const char* QByteArray_ConstEnd(QByteArray* self) {
	return (const char*) const_cast<const QByteArray*>(self)->constEnd();
}

void QByteArray_PushBack(QByteArray* self, char c) {
	self->push_back(static_cast<char>(c));
}

void QByteArray_PushBackWithChar(QByteArray* self, const char* c) {
	self->push_back(c);
}

void QByteArray_PushBackWithQByteArray(QByteArray* self, QByteArray* a) {
	self->push_back(*a);
}

void QByteArray_PushFront(QByteArray* self, char c) {
	self->push_front(static_cast<char>(c));
}

void QByteArray_PushFrontWithChar(QByteArray* self, const char* c) {
	self->push_front(c);
}

void QByteArray_PushFrontWithQByteArray(QByteArray* self, QByteArray* a) {
	self->push_front(*a);
}

void QByteArray_ShrinkToFit(QByteArray* self) {
	self->shrink_to_fit();
}

int QByteArray_Count2(QByteArray* self) {
	return const_cast<const QByteArray*>(self)->count();
}

int QByteArray_Length(QByteArray* self) {
	return const_cast<const QByteArray*>(self)->length();
}

bool QByteArray_IsNull(QByteArray* self) {
	return const_cast<const QByteArray*>(self)->isNull();
}

QByteArray* QByteArray_Fill2(QByteArray* self, char c, int size) {
	QByteArray& ret = self->fill(static_cast<char>(c), static_cast<int>(size));
	// Cast returned reference into pointer
	return &ret;
}

int QByteArray_IndexOf2(QByteArray* self, char c, int from) {
	return self->indexOf(static_cast<char>(c), static_cast<int>(from));
}

int QByteArray_IndexOf22(QByteArray* self, const char* c, int from) {
	return self->indexOf(c, static_cast<int>(from));
}

int QByteArray_IndexOf23(QByteArray* self, QByteArray* a, int from) {
	return self->indexOf(*a, static_cast<int>(from));
}

int QByteArray_LastIndexOf2(QByteArray* self, char c, int from) {
	return self->lastIndexOf(static_cast<char>(c), static_cast<int>(from));
}

int QByteArray_LastIndexOf22(QByteArray* self, const char* c, int from) {
	return self->lastIndexOf(c, static_cast<int>(from));
}

int QByteArray_LastIndexOf23(QByteArray* self, QByteArray* a, int from) {
	return self->lastIndexOf(*a, static_cast<int>(from));
}

int QByteArray_Compare2(QByteArray* self, const char* c, uintptr_t cs) {
	return self->compare(c, static_cast<Qt::CaseSensitivity>(cs));
}

int QByteArray_Compare22(QByteArray* self, QByteArray* a, uintptr_t cs) {
	return self->compare(*a, static_cast<Qt::CaseSensitivity>(cs));
}

QByteArray* QByteArray_Mid2(QByteArray* self, int index, int lenVal) {
	QByteArray ret = self->mid(static_cast<int>(index), static_cast<int>(lenVal));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_LeftJustified2(QByteArray* self, int width, char fill) {
	QByteArray ret = self->leftJustified(static_cast<int>(width), static_cast<char>(fill));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_LeftJustified3(QByteArray* self, int width, char fill, bool truncate) {
	QByteArray ret = self->leftJustified(static_cast<int>(width), static_cast<char>(fill), truncate);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_RightJustified2(QByteArray* self, int width, char fill) {
	QByteArray ret = self->rightJustified(static_cast<int>(width), static_cast<char>(fill));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_RightJustified3(QByteArray* self, int width, char fill, bool truncate) {
	QByteArray ret = self->rightJustified(static_cast<int>(width), static_cast<char>(fill), truncate);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

int QByteArray_IndexOf24(QByteArray* self, const char* s, size_t s_Strlen, int from) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return self->indexOf(s_QString, static_cast<int>(from));
}

int QByteArray_LastIndexOf24(QByteArray* self, const char* s, size_t s_Strlen, int from) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return self->lastIndexOf(s_QString, static_cast<int>(from));
}

int16_t QByteArray_ToShort1(QByteArray* self, bool* ok) {
	return self->toShort(ok);
}

int16_t QByteArray_ToShort2(QByteArray* self, bool* ok, int base) {
	return self->toShort(ok, static_cast<int>(base));
}

uint16_t QByteArray_ToUShort1(QByteArray* self, bool* ok) {
	return self->toUShort(ok);
}

uint16_t QByteArray_ToUShort2(QByteArray* self, bool* ok, int base) {
	return self->toUShort(ok, static_cast<int>(base));
}

int QByteArray_ToInt1(QByteArray* self, bool* ok) {
	return self->toInt(ok);
}

int QByteArray_ToInt2(QByteArray* self, bool* ok, int base) {
	return self->toInt(ok, static_cast<int>(base));
}

unsigned int QByteArray_ToUInt1(QByteArray* self, bool* ok) {
	return self->toUInt(ok);
}

unsigned int QByteArray_ToUInt2(QByteArray* self, bool* ok, int base) {
	return self->toUInt(ok, static_cast<int>(base));
}

long QByteArray_ToLong1(QByteArray* self, bool* ok) {
	return self->toLong(ok);
}

long QByteArray_ToLong2(QByteArray* self, bool* ok, int base) {
	return self->toLong(ok, static_cast<int>(base));
}

unsigned long QByteArray_ToULong1(QByteArray* self, bool* ok) {
	return self->toULong(ok);
}

unsigned long QByteArray_ToULong2(QByteArray* self, bool* ok, int base) {
	return self->toULong(ok, static_cast<int>(base));
}

int64_t QByteArray_ToLongLong1(QByteArray* self, bool* ok) {
	return self->toLongLong(ok);
}

int64_t QByteArray_ToLongLong2(QByteArray* self, bool* ok, int base) {
	return self->toLongLong(ok, static_cast<int>(base));
}

uint64_t QByteArray_ToULongLong1(QByteArray* self, bool* ok) {
	return self->toULongLong(ok);
}

uint64_t QByteArray_ToULongLong2(QByteArray* self, bool* ok, int base) {
	return self->toULongLong(ok, static_cast<int>(base));
}

float QByteArray_ToFloat1(QByteArray* self, bool* ok) {
	return self->toFloat(ok);
}

double QByteArray_ToDouble1(QByteArray* self, bool* ok) {
	return self->toDouble(ok);
}

QByteArray* QByteArray_ToPercentEncoding1(QByteArray* self, QByteArray* exclude) {
	QByteArray ret = self->toPercentEncoding(*exclude);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_ToPercentEncoding2(QByteArray* self, QByteArray* exclude, QByteArray* include) {
	QByteArray ret = self->toPercentEncoding(*exclude, *include);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_ToPercentEncoding3(QByteArray* self, QByteArray* exclude, QByteArray* include, char percent) {
	QByteArray ret = self->toPercentEncoding(*exclude, *include, static_cast<char>(percent));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_SetNum2(QByteArray* self, int16_t param1, int base) {
	QByteArray& ret = self->setNum(static_cast<short>(param1), static_cast<int>(base));
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_SetNum22(QByteArray* self, uint16_t param1, int base) {
	QByteArray& ret = self->setNum(static_cast<ushort>(param1), static_cast<int>(base));
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_SetNum23(QByteArray* self, int param1, int base) {
	QByteArray& ret = self->setNum(static_cast<int>(param1), static_cast<int>(base));
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_SetNum24(QByteArray* self, unsigned int param1, int base) {
	QByteArray& ret = self->setNum(static_cast<uint>(param1), static_cast<int>(base));
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_SetNum25(QByteArray* self, int64_t param1, int base) {
	QByteArray& ret = self->setNum((qlonglong)(param1), static_cast<int>(base));
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_SetNum26(QByteArray* self, uint64_t param1, int base) {
	QByteArray& ret = self->setNum((qulonglong)(param1), static_cast<int>(base));
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_SetNum27(QByteArray* self, float param1, char f) {
	QByteArray& ret = self->setNum(static_cast<float>(param1), static_cast<char>(f));
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_SetNum3(QByteArray* self, float param1, char f, int prec) {
	QByteArray& ret = self->setNum(static_cast<float>(param1), static_cast<char>(f), static_cast<int>(prec));
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_SetNum28(QByteArray* self, double param1, char f) {
	QByteArray& ret = self->setNum(static_cast<double>(param1), static_cast<char>(f));
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_SetNum32(QByteArray* self, double param1, char f, int prec) {
	QByteArray& ret = self->setNum(static_cast<double>(param1), static_cast<char>(f), static_cast<int>(prec));
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray_Number2(int param1, int base) {
	QByteArray ret = QByteArray::number(static_cast<int>(param1), static_cast<int>(base));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_Number22(unsigned int param1, int base) {
	QByteArray ret = QByteArray::number(static_cast<uint>(param1), static_cast<int>(base));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_Number23(int64_t param1, int base) {
	QByteArray ret = QByteArray::number((qlonglong)(param1), static_cast<int>(base));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_Number24(uint64_t param1, int base) {
	QByteArray ret = QByteArray::number((qulonglong)(param1), static_cast<int>(base));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_Number25(double param1, char f) {
	QByteArray ret = QByteArray::number(static_cast<double>(param1), static_cast<char>(f));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QByteArray_Number3(double param1, char f, int prec) {
	QByteArray ret = QByteArray::number(static_cast<double>(param1), static_cast<char>(f), static_cast<int>(prec));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray__FromBase64Result* QByteArray_FromBase64Encoding2(QByteArray* base64, int options) {
	QByteArray::FromBase64Result ret = QByteArray::fromBase64Encoding(*base64, static_cast<QByteArray::Base64Options>(options));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray::FromBase64Result*>(new QByteArray::FromBase64Result(ret));
}

QByteArray* QByteArray_FromPercentEncoding2(QByteArray* pctEncoded, char percent) {
	QByteArray ret = QByteArray::fromPercentEncoding(*pctEncoded, static_cast<char>(percent));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QByteArray_Delete(QByteArray* self) {
	delete self;
}

QByteRef* QByteRef_new(QByteRef* param1) {
	return new QByteRef(*param1);
}

void QByteRef_OperatorAssign(QByteRef* self, char c) {
	self->operator=(static_cast<char>(c));
}

void QByteRef_OperatorAssignWithQByteRef(QByteRef* self, QByteRef* c) {
	self->operator=(*c);
}

bool QByteRef_OperatorEqual(QByteRef* self, char c) {
	return const_cast<const QByteRef*>(self)->operator==(static_cast<char>(c));
}

bool QByteRef_OperatorNotEqual(QByteRef* self, char c) {
	return const_cast<const QByteRef*>(self)->operator!=(static_cast<char>(c));
}

bool QByteRef_OperatorGreater(QByteRef* self, char c) {
	return const_cast<const QByteRef*>(self)->operator>(static_cast<char>(c));
}

bool QByteRef_OperatorGreaterOrEqual(QByteRef* self, char c) {
	return const_cast<const QByteRef*>(self)->operator>=(static_cast<char>(c));
}

bool QByteRef_OperatorLesser(QByteRef* self, char c) {
	return const_cast<const QByteRef*>(self)->operator<(static_cast<char>(c));
}

bool QByteRef_OperatorLesserOrEqual(QByteRef* self, char c) {
	return const_cast<const QByteRef*>(self)->operator<=(static_cast<char>(c));
}

void QByteRef_Delete(QByteRef* self) {
	delete self;
}

QByteArray__FromBase64Result* QByteArray__FromBase64Result_new(QByteArray__FromBase64Result* param1) {
	return new QByteArray::FromBase64Result(*param1);
}

void QByteArray__FromBase64Result_Swap(QByteArray__FromBase64Result* self, QByteArray__FromBase64Result* other) {
	self->swap(*other);
}

QByteArray* QByteArray__FromBase64Result_OperatorMultiply(QByteArray__FromBase64Result* self) {
	QByteArray& ret = self->operator*();
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QByteArray__FromBase64Result_OperatorMultiply2(QByteArray__FromBase64Result* self) {
	const QByteArray& ret = const_cast<const QByteArray::FromBase64Result*>(self)->operator*();
	// Cast returned reference into pointer
	return const_cast<QByteArray*>(&ret);
}

void QByteArray__FromBase64Result_Delete(QByteArray__FromBase64Result* self) {
	delete self;
}

