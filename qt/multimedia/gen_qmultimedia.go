package multimedia

/*

#include "gen_qmultimedia.h"
#include <stdlib.h>

*/
import "C"

type QMultimedia__SupportEstimate int

const (
	QMultimedia__NotSupported      QMultimedia__SupportEstimate = 0
	QMultimedia__MaybeSupported    QMultimedia__SupportEstimate = 1
	QMultimedia__ProbablySupported QMultimedia__SupportEstimate = 2
	QMultimedia__PreferredService  QMultimedia__SupportEstimate = 3
)

type QMultimedia__EncodingQuality int

const (
	QMultimedia__VeryLowQuality  QMultimedia__EncodingQuality = 0
	QMultimedia__LowQuality      QMultimedia__EncodingQuality = 1
	QMultimedia__NormalQuality   QMultimedia__EncodingQuality = 2
	QMultimedia__HighQuality     QMultimedia__EncodingQuality = 3
	QMultimedia__VeryHighQuality QMultimedia__EncodingQuality = 4
)

type QMultimedia__EncodingMode int

const (
	QMultimedia__ConstantQualityEncoding QMultimedia__EncodingMode = 0
	QMultimedia__ConstantBitRateEncoding QMultimedia__EncodingMode = 1
	QMultimedia__AverageBitRateEncoding  QMultimedia__EncodingMode = 2
	QMultimedia__TwoPassEncoding         QMultimedia__EncodingMode = 3
)

type QMultimedia__AvailabilityStatus int

const (
	QMultimedia__Available      QMultimedia__AvailabilityStatus = 0
	QMultimedia__ServiceMissing QMultimedia__AvailabilityStatus = 1
	QMultimedia__Busy           QMultimedia__AvailabilityStatus = 2
	QMultimedia__ResourceError  QMultimedia__AvailabilityStatus = 3
)
