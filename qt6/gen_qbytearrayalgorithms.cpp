#include <QByteArrayView>
#include <qbytearrayalgorithms.h>
#include "gen_qbytearrayalgorithms.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

char* miqt_QstrdupWithChar(const char* param1) {

	return qstrdup(param1);
}

size_t miqt_QstrlenWithStr(const char* str) {

	return qstrlen(str);
}

size_t miqt_Qstrnlen2(const char* str, size_t maxlen) {

	return qstrnlen(str, static_cast<size_t>(maxlen));
}

char* miqt_Qstrcpy2(char* dst, const char* src) {

	return qstrcpy(dst, src);
}

char* miqt_Qstrncpy2(char* dst, const char* src, size_t len) {

	return qstrncpy(dst, src, static_cast<size_t>(len));
}

int miqt_Qstrcmp2(const char* str1, const char* str2) {

	return qstrcmp(str1, str2);
}

int miqt_Qstrncmp2(const char* str1, const char* str2, size_t len) {

	return qstrncmp(str1, str2, static_cast<size_t>(len));
}

int miqt_Qstricmp2(const char* param1, const char* param2) {

	return qstricmp(param1, param2);
}

int miqt_Qstrnicmp2(const char* param1, const char* param2, size_t len) {

	return qstrnicmp(param1, param2, static_cast<size_t>(len));
}

int miqt_Qstrnicmp3(const char* param1, ptrdiff_t param2, const char* param3, ptrdiff_t param4) {

	return qstrnicmp(param1, (qsizetype)(param2), param3, (qsizetype)(param4));
}

unsigned short miqt_QChecksum2(QByteArrayView* data, int standard) {

	quint16 _ret = qChecksum(*data, static_cast<Qt::ChecksumType>(standard));
	return static_cast<unsigned short>(_ret);
}

