package qt

/*

#include "gen_qalgorithms.h"
#include <stdlib.h>

*/
import "C"

func QPopulationCountWithQuint32(v uint) uint {
	return (uint)(C.miqt_QPopulationCountWithQuint32((C.uint)(v)))
}

func QPopulationCountWithQuint8(v byte) uint {
	return (uint)(C.miqt_QPopulationCountWithQuint8((C.uchar)(v)))
}

func QPopulationCountWithQuint16(v uint16) uint {
	return (uint)(C.miqt_QPopulationCountWithQuint16((C.ushort)(v)))
}

func QPopulationCountWithQuint64(v uint64) uint {
	return (uint)(C.miqt_QPopulationCountWithQuint64((C.ulonglong)(v)))
}

func QPopulationCountWithUnsignedlong(v uint64) uint {
	return (uint)(C.miqt_QPopulationCountWithUnsignedlong((C.ulong)(v)))
}

func QCountTrailingZeroBitsWithQuint32(v uint) uint {
	return (uint)(C.miqt_QCountTrailingZeroBitsWithQuint32((C.uint)(v)))
}

func QCountTrailingZeroBitsWithQuint8(v byte) uint {
	return (uint)(C.miqt_QCountTrailingZeroBitsWithQuint8((C.uchar)(v)))
}

func QCountTrailingZeroBitsWithQuint16(v uint16) uint {
	return (uint)(C.miqt_QCountTrailingZeroBitsWithQuint16((C.ushort)(v)))
}

func QCountTrailingZeroBitsWithQuint64(v uint64) uint {
	return (uint)(C.miqt_QCountTrailingZeroBitsWithQuint64((C.ulonglong)(v)))
}

func QCountTrailingZeroBitsWithUnsignedlong(v uint64) uint {
	return (uint)(C.miqt_QCountTrailingZeroBitsWithUnsignedlong((C.ulong)(v)))
}

func QCountLeadingZeroBitsWithQuint32(v uint) uint {
	return (uint)(C.miqt_QCountLeadingZeroBitsWithQuint32((C.uint)(v)))
}

func QCountLeadingZeroBitsWithQuint8(v byte) uint {
	return (uint)(C.miqt_QCountLeadingZeroBitsWithQuint8((C.uchar)(v)))
}

func QCountLeadingZeroBitsWithQuint16(v uint16) uint {
	return (uint)(C.miqt_QCountLeadingZeroBitsWithQuint16((C.ushort)(v)))
}

func QCountLeadingZeroBitsWithQuint64(v uint64) uint {
	return (uint)(C.miqt_QCountLeadingZeroBitsWithQuint64((C.ulonglong)(v)))
}

func QCountLeadingZeroBitsWithUnsignedlong(v uint64) uint {
	return (uint)(C.miqt_QCountLeadingZeroBitsWithUnsignedlong((C.ulong)(v)))
}
