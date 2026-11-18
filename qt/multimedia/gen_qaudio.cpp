#include <qaudio.h>
#include "gen_qaudio.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

double miqt_QAudio_ConvertVolume2(double volume, int from, int to) {

	qreal _ret = QAudio::convertVolume(static_cast<qreal>(volume), static_cast<QAudio::VolumeScale>(from), static_cast<QAudio::VolumeScale>(to));
	return static_cast<double>(_ret);
}

