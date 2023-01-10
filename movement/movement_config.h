/*
 * MIT License
 *
 * Copyright (c) 2022 Joey Castillo
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef MOVEMENT_CONFIG_H_
#define MOVEMENT_CONFIG_H_

#include "movement_faces.h"

/*
# install emscripten if necessary
command -v emmake > /dev/null || brew install emscripten

# build simulator
cd movement/make
make clean && emmake make
python3 -m http.server 8000 --bind 127.0.0.1 -d build-sim
open http://127.0.0.1/watch.html

# build and install firmware
cd movement/make
make install
*/

const watch_face_t watch_faces[] = {
    simple_clock_face,
    day_one_face,
    sunrise_sunset_face,
    totp_face,
    /* counter_face, */
    countdown_face,
    stopwatch_face,

    pulsometer_face,
    alarm_face,
    preferences_face,
    set_time_face,
};

#define MOVEMENT_NUM_FACES (sizeof(watch_faces) / sizeof(watch_face_t))

/* Determines what face to go to from the first face if you've already set 
 * a mode long press to go to the first face in preferences, and
 * excludes these faces from the normal rotation.
 * Usually it makes sense to set this to the preferences face.
 */
#define MOVEMENT_SECONDARY_FACE_INDEX (MOVEMENT_NUM_FACES - 4)

#endif // MOVEMENT_CONFIG_H_
