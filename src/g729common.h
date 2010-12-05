#ifndef __GSTG729_COMMON__
#define __GSTG729_COMMON__

#define SAMPLE_RATE 8000
#define FRAME_DURATION 10
#define RAW_FRAME_SAMPLES (SAMPLE_RATE*FRAME_DURATION/1000)
#define G729_FRAME_BYTES 10
#define G729_SID_BYTES 2
#define G729_SILENCE_BYTES 0
#define RAW_FRAME_BYTES (RAW_FRAME_SAMPLES*2)

#endif
