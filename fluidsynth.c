#include <stdio.h>
#include <stdint.h>
#include <fluidsynth.h>

#include "audio.h"

int zz_fluidsynth_audio_cb(void *userdata, float *stream, int len) {
  fluid_synth_t *synth = (fluid_synth_t*) userdata;
  int frames = len / (2 * sizeof(float));
  /* [lr]{off,incr} args are offsets into float[] */
  fluid_synth_write_float(synth, frames,
                          stream, 0, 2,
                          stream, 1, 2);
  return 1;
}
