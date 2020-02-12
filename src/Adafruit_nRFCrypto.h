/* 
 * The MIT License (MIT)
 *
 * Copyright (c) 2020 Ha Thach (tinyusb.org) for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef ADAFRUIT_NRFCRYPTO_H_
#define ADAFRUIT_NRFCRYPTO_H_

#include "common_inc.h"
#include "rtos.h"

#include "Adafruit_nRFCrypto_Random.h"
#include "Adafruit_nRFCrypto_Hash.h"
#include "Adafruit_nRFCrypto_ECPKI.h"

class Adafruit_nRFCrypto
{
  public:
    Adafruit_nRFCrypto(void);

    bool begin(void);
    void end(void);

    void enable(void);
    void disable(void);

    Adafruit_nRFCrypto_Random Random;

  private:
    uint32_t _en_count;
};

extern Adafruit_nRFCrypto nRFCrypto;

#endif /* ADAFRUIT_NRFCRYPTO_H_ */
