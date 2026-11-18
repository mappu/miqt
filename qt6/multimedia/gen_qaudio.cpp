#include <qaudio.h>
#include "gen_qaudio.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

float miqt_QAudio_ConvertVolume2(float volume, int from, int to) {

	return QAudio::convertVolume(static_cast<float>(volume), static_cast<QAudio::VolumeScale>(from), static_cast<QAudio::VolumeScale>(to));
}

