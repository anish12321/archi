/*
 * Copyright (C) 2018 ETH Zurich and University of Bologna
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __ARCHI_UDMA_UDMA_I2S_V2_H__
#define __ARCHI_UDMA_UDMA_I2S_V2_H__

// I2S custom registers offset definition
#define I2S_EXT_OFFSET             (0x00)
#define I2S_CFG_CLKGEN0_OFFSET            (0x04)
#define I2S_CFG_CLKGEN1_OFFSET            (0x08)
#define I2S_CFG_CLKGEN_OFFSET(clk) (I2S_CFG_CLKGEN0_OFFSET + (clk)*4)
#define I2S_CHMODE_OFFSET          (0x0C)
#define I2S_FILT_CH0_OFFSET        (0x10)
#define I2S_FILT_CH1_OFFSET        (0x14)
#define I2S_FILT_CH_OFFSET(clk)    (I2S_FILT_CH0_OFFSET + (clk)*4)

// I2S custom registers bitfields offset, mask, value definition
#define I2S_EXT_BITS_WORD_OFFSET  0
#define I2S_EXT_BITS_WORD_WIDTH   5
#define I2S_EXT_BITS_WORD_MASK    (0x1f << I2S_EXT_BITS_WORD_OFFSET)
#define I2S_EXT_BITS_WORD(val)    ((val-1) << I2S_EXT_BITS_WORD_OFFSET)


#define I2S_CFG_CLKGEN_BITS_WORD_OFFSET 0
#define I2S_CFG_CLKGEN_BITS_WORD_WIDTH  5
#define I2S_CFG_CLKGEN_BITS_WORD_MASK   (0x1f << I2S_CFG_CLKGEN_BITS_WORD_OFFSET)
#define I2S_CFG_CLKGEN_BITS_WORD(val)   ((val-1) << I2S_CFG_CLKGEN_BITS_WORD_OFFSET)

#define I2S_CFG_CLKGEN_CLK_EN_OFFSET    8
#define I2S_CFG_CLKGEN_CLK_EN_WIDTH   1
#define I2S_CFG_CLKGEN_CLK_EN_MASK    (0x1 << I2S_CFG_CLKGEN_CLK_EN_OFFSET)
#define I2S_CFG_CLKGEN_CLK_EN     (1 << I2S_CFG_CLKGEN_CLK_EN_OFFSET)
#define I2S_CFG_CLKGEN_CLK_DIS    (0 << I2S_CFG_CLKGEN_CLK_EN_OFFSET)

#define I2S_CFG_CLKGEN_CLKDIV_OFFSET    16
#define I2S_CFG_CLKGEN_CLKDIV_WIDTH   16
#define I2S_CFG_CLKGEN_CLKDIV_MASK    (0xffff << I2S_CFG_CLKGEN_CLKDIV_OFFSET)
#define I2S_CFG_CLKGEN_CLKDIV(val)    (val << I2S_CFG_CLKGEN_CLKDIV_OFFSET)


#define I2S_CFG_CLKGEN0_BITS_WORD_OFFSET  0
#define I2S_CFG_CLKGEN0_BITS_WORD_WIDTH 5
#define I2S_CFG_CLKGEN0_BITS_WORD_MASK    (0x1f << I2S_CFG_CLKGEN0_BITS_WORD_OFFSET)
#define I2S_CFG_CLKGEN0_BITS_WORD(val)    ((val-1) << I2S_CFG_CLKGEN0_BITS_WORD_OFFSET)

#define I2S_CFG_CLKGEN0_CLK_EN_OFFSET   8
#define I2S_CFG_CLKGEN0_CLK_EN_WIDTH    1
#define I2S_CFG_CLKGEN0_CLK_EN_MASK   (0x1 << I2S_CFG_CLKGEN0_CLK_EN_OFFSET)
#define I2S_CFG_CLKGEN0_CLK_EN      (1 << I2S_CFG_CLKGEN0_CLK_EN_OFFSET)
#define I2S_CFG_CLKGEN0_CLK_DIS   (0 << I2S_CFG_CLKGEN0_CLK_EN_OFFSET)

#define I2S_CFG_CLKGEN0_CLKDIV_OFFSET   16
#define I2S_CFG_CLKGEN0_CLKDIV_WIDTH    16
#define I2S_CFG_CLKGEN0_CLKDIV_MASK   (0xffff << I2S_CFG_CLKGEN0_CLKDIV_OFFSET)
#define I2S_CFG_CLKGEN0_CLKDIV(val)   (val << I2S_CFG_CLKGEN0_CLKDIV_OFFSET)

#define I2S_CFG_CLKGEN1_BITS_WORD_OFFSET  0
#define I2S_CFG_CLKGEN1_BITS_WORD_WIDTH 5
#define I2S_CFG_CLKGEN1_BITS_WORD_MASK    (0x1f << I2S_CFG_CLKGEN1_BITS_WORD_OFFSET)
#define I2S_CFG_CLKGEN1_BITS_WORD(val)    ((val-1) << I2S_CFG_CLKGEN1_BITS_WORD_OFFSET)

#define I2S_CFG_CLKGEN1_CLK_EN_OFFSET   8
#define I2S_CFG_CLKGEN1_CLK_EN_WIDTH    1
#define I2S_CFG_CLKGEN1_CLK_EN_MASK   (0x1 << I2S_CFG_CLKGEN1_CLK_EN_OFFSET)
#define I2S_CFG_CLKGEN1_CLK_EN      (1 << I2S_CFG_CLKGEN1_CLK_EN_OFFSET)
#define I2S_CFG_CLKGEN1_CLK_DIS   (0 << I2S_CFG_CLKGEN1_CLK_EN_OFFSET)

#define I2S_CFG_CLKGEN1_CLKDIV_OFFSET   16
#define I2S_CFG_CLKGEN1_CLKDIV_WIDTH    16
#define I2S_CFG_CLKGEN1_CLKDIV_MASK   (0xffff << I2S_CFG_CLKGEN1_CLKDIV_OFFSET)
#define I2S_CFG_CLKGEN1_CLKDIV(val)   (val << I2S_CFG_CLKGEN1_CLKDIV_OFFSET)



#define I2S_CHMODE_CH_SNAPCAM_OFFSET(x)       (0 + (x))
#define I2S_CHMODE_CH_SNAPCAM_WIDTH(x)        (1)
#define I2S_CHMODE_CH_SNAPCAM_MASK(x)         (0x1 << I2S_CHMODE_CH_SNAPCAM_OFFSET(x))
#define I2S_CHMODE_CH_SNAPCAM_ENA(x)          (0x1 << I2S_CHMODE_CH_SNAPCAM_OFFSET(x))
#define I2S_CHMODE_CH_SNAPCAM_DIS(x)          (0x0 << I2S_CHMODE_CH_SNAPCAM_OFFSET(x))

#define I2S_CHMODE_CH_LSBFIRST_OFFSET(x)      (4 + (x))
#define I2S_CHMODE_CH_LSBFIRST_WIDTH(x)       (1)
#define I2S_CHMODE_CH_LSBFIRST_MASK(x)        (0x1 << I2S_CHMODE_CH_LSBFIRST_OFFSET(x))
#define I2S_CHMODE_CH_LSBFIRST_ENA(x)         (1 << I2S_CHMODE_CH_LSBFIRST_OFFSET(x))
#define I2S_CHMODE_CH_LSBFIRST_DIS(x)         (0 << I2S_CHMODE_CH_LSBFIRST_OFFSET(x))

#define I2S_CHMODE_CH_PDM_USEFILTER_OFFSET(x) (8 + (x))
#define I2S_CHMODE_CH_PDM_USEFILTER_WIDTH(x)  (1)
#define I2S_CHMODE_CH_PDM_USEFILTER_MASK(x)   (0x1 << I2S_CHMODE_CH_PDM_USEFILTER_OFFSET(x))
#define I2S_CHMODE_CH_PDM_USEFILTER_ENA(x)    (1 << I2S_CHMODE_CH_PDM_USEFILTER_OFFSET(x))
#define I2S_CHMODE_CH_PDM_USEFILTER_DIS(x)    (0 << I2S_CHMODE_CH_PDM_USEFILTER_OFFSET(x))

#define I2S_CHMODE_CH_PDM_EN_OFFSET(x)        (12 + (x))
#define I2S_CHMODE_CH_PDM_EN_WIDTH(x)         (1)
#define I2S_CHMODE_CH_PDM_EN_MASK(x)          (0x1 << I2S_CHMODE_CH_PDM_EN_OFFSET(x))
#define I2S_CHMODE_CH_PDM_EN_ENA(x)           (1 << I2S_CHMODE_CH_PDM_EN_OFFSET(x))
#define I2S_CHMODE_CH_PDM_EN_DIS(x)           (0 << I2S_CHMODE_CH_PDM_EN_OFFSET(x))

#define I2S_CHMODE_CH_USEDDR_OFFSET(x)        (16 + (x))
#define I2S_CHMODE_CH_USEDDR_WIDTH(x)         (1)
#define I2S_CHMODE_CH_USEDDR_MASK(x)          (0x1 << I2S_CHMODE_CH_USEDDR_OFFSET(x))
#define I2S_CHMODE_CH_USEDDR_ENA(x)           (1 << I2S_CHMODE_CH_USEDDR_OFFSET(x))
#define I2S_CHMODE_CH_USEDDR_DIS(x)           (0 << I2S_CHMODE_CH_USEDDR_OFFSET(x))

#define I2S_CHMODE_CH_MODE_OFFSET(x)          (24 + (x*2))
#define I2S_CHMODE_CH_MODE_WIDTH(x)           (2)
#define I2S_CHMODE_CH_MODE_MASK(x)            (0x3 << I2S_CHMODE_CH_MODE_OFFSET(x))
#define I2S_CHMODE_CH_MODE_CLK(x,clk)         (clk << I2S_CHMODE_CH_MODE_OFFSET(x))
#define I2S_CHMODE_CH_MODE_EXTCLK_INTWS(x)    (2 << I2S_CHMODE_CH_MODE_OFFSET(x))
#define I2S_CHMODE_CH_MODE_EXTCLK_EXTWS(x)    (2 << I2S_CHMODE_CH_MODE_OFFSET(x))



#define I2S_CHMODE_CH0_SNAPCAM_OFFSET 0
#define I2S_CHMODE_CH0_SNAPCAM_WIDTH  1
#define I2S_CHMODE_CH0_SNAPCAM_MASK (0x1 << I2S_CHMODE_CH0_SNAPCAM_OFFSET)
#define I2S_CHMODE_CH0_SNAPCAM_ENA  (0x1 << I2S_CHMODE_CH0_SNAPCAM_OFFSET)
#define I2S_CHMODE_CH0_SNAPCAM_DIS  (0x0 << I2S_CHMODE_CH0_SNAPCAM_OFFSET)

#define I2S_CHMODE_CH0_LSBFIRST_OFFSET  4
#define I2S_CHMODE_CH0_LSBFIRST_WIDTH 1
#define I2S_CHMODE_CH0_LSBFIRST_MASK  (0x1 << I2S_CHMODE_CH0_LSBFIRST_OFFSET)
#define I2S_CHMODE_CH0_LSBFIRST_ENA (1 << I2S_CHMODE_CH0_LSBFIRST_OFFSET)
#define I2S_CHMODE_CH0_LSBFIRST_DIS (0 << I2S_CHMODE_CH0_LSBFIRST_OFFSET)

#define I2S_CHMODE_CH0_PDM_USEFILTER_OFFSET   8
#define I2S_CHMODE_CH0_PDM_USEFILTER_WIDTH    1
#define I2S_CHMODE_CH0_PDM_USEFILTER_MASK   (0x1 << I2S_CHMODE_CH0_PDM_USEFILTER_OFFSET)
#define I2S_CHMODE_CH0_PDM_USEFILTER_ENA    (1 << I2S_CHMODE_CH0_PDM_USEFILTER_OFFSET)
#define I2S_CHMODE_CH0_PDM_USEFILTER_DIS    (0 << I2S_CHMODE_CH0_PDM_USEFILTER_OFFSET)

#define I2S_CHMODE_CH0_PDM_EN_OFFSET  12
#define I2S_CHMODE_CH0_PDM_EN_WIDTH 1
#define I2S_CHMODE_CH0_PDM_EN_MASK  (0x1 << I2S_CHMODE_CH0_PDM_EN_OFFSET)
#define I2S_CHMODE_CH0_PDM_EN_ENA (1 << I2S_CHMODE_CH0_PDM_EN_OFFSET)
#define I2S_CHMODE_CH0_PDM_EN_DIS (0 << I2S_CHMODE_CH0_PDM_EN_OFFSET)

#define I2S_CHMODE_CH0_USEDDR_OFFSET  16
#define I2S_CHMODE_CH0_USEDDR_WIDTH 1
#define I2S_CHMODE_CH0_USEDDR_MASK  (0x1 << I2S_CHMODE_CH0_USEDDR_OFFSET)
#define I2S_CHMODE_CH0_USEDDR_ENA (1 << I2S_CHMODE_CH0_USEDDR_OFFSET)
#define I2S_CHMODE_CH0_USEDDR_DIS (0 << I2S_CHMODE_CH0_USEDDR_OFFSET)

#define I2S_CHMODE_CH0_MODE_OFFSET    24
#define I2S_CHMODE_CH0_MODE_WIDTH   2
#define I2S_CHMODE_CH0_MODE_MASK    (0x3 << I2S_CHMODE_CH0_MODE_OFFSET)
#define I2S_CHMODE_CH0_MODE_CLK0    (0 << I2S_CHMODE_CH0_MODE_OFFSET)
#define I2S_CHMODE_CH0_MODE_CLK1    (1 << I2S_CHMODE_CH0_MODE_OFFSET)
#define I2S_CHMODE_CH0_MODE_EXTCLK_INTWS  (2 << I2S_CHMODE_CH0_MODE_OFFSET)
#define I2S_CHMODE_CH0_MODE_EXTCLK_EXTWS  (2 << I2S_CHMODE_CH0_MODE_OFFSET)

#define I2S_CHMODE_CH1_SNAPCAM_OFFSET 1
#define I2S_CHMODE_CH1_SNAPCAM_WIDTH  1
#define I2S_CHMODE_CH1_SNAPCAM_MASK (0x1 << I2S_CHMODE_CH1_SNAPCAM_OFFSET)
#define I2S_CHMODE_CH1_SNAPCAM_ENA  (0x1 << I2S_CHMODE_CH1_SNAPCAM_OFFSET)
#define I2S_CHMODE_CH1_SNAPCAM_DIS  (0x0 << I2S_CHMODE_CH1_SNAPCAM_OFFSET)

#define I2S_CHMODE_CH1_LSBFIRST_OFFSET  5
#define I2S_CHMODE_CH1_LSBFIRST_WIDTH 1
#define I2S_CHMODE_CH1_LSBFIRST_MASK  (0x1 << I2S_CHMODE_CH1_LSBFIRST_OFFSET)
#define I2S_CHMODE_CH1_LSBFIRST_ENA (1 << I2S_CHMODE_CH1_LSBFIRST_OFFSET)
#define I2S_CHMODE_CH1_LSBFIRST_DIS (0 << I2S_CHMODE_CH1_LSBFIRST_OFFSET)

#define I2S_CHMODE_CH1_PDM_USEFILTER_OFFSET 9
#define I2S_CHMODE_CH1_PDM_USEFILTER_WIDTH  1
#define I2S_CHMODE_CH1_PDM_USEFILTER_MASK (0x1 << I2S_CHMODE_CH1_PDM_USEFILTER_OFFSET)
#define I2S_CHMODE_CH1_PDM_USEFILTER_ENA  (1 << I2S_CHMODE_CH1_PDM_USEFILTER_OFFSET)
#define I2S_CHMODE_CH1_PDM_USEFILTER_DIS  (0 << I2S_CHMODE_CH1_PDM_USEFILTER_OFFSET)

#define I2S_CHMODE_CH1_PDM_EN_OFFSET  13
#define I2S_CHMODE_CH1_PDM_EN_WIDTH 1
#define I2S_CHMODE_CH1_PDM_EN_MASK  (0x1 << I2S_CHMODE_CH1_PDM_EN_OFFSET)
#define I2S_CHMODE_CH1_PDM_EN_ENA (1 << I2S_CHMODE_CH1_PDM_EN_OFFSET)
#define I2S_CHMODE_CH1_PDM_EN_DIS (0 << I2S_CHMODE_CH1_PDM_EN_OFFSET)

#define I2S_CHMODE_CH1_USEDDR_OFFSET  17
#define I2S_CHMODE_CH1_USEDDR_WIDTH 1
#define I2S_CHMODE_CH1_USEDDR_MASK  (0x1 << I2S_CHMODE_CH1_USEDDR_OFFSET)
#define I2S_CHMODE_CH1_USEDDR_ENA (1 << I2S_CHMODE_CH1_USEDDR_OFFSET)
#define I2S_CHMODE_CH1_USEDDR_DIS (0 << I2S_CHMODE_CH1_USEDDR_OFFSET)

#define I2S_CHMODE_CH1_MODE_OFFSET    26
#define I2S_CHMODE_CH1_MODE_WIDTH   2
#define I2S_CHMODE_CH1_MODE_MASK    (0x3 << I2S_CHMODE_CH1_MODE_OFFSET)
#define I2S_CHMODE_CH1_MODE_CLK0    (0 << I2S_CHMODE_CH1_MODE_OFFSET)
#define I2S_CHMODE_CH1_MODE_CLK1    (1 << I2S_CHMODE_CH1_MODE_OFFSET)
#define I2S_CHMODE_CH1_MODE_EXTCLK_INTWS  (2 << I2S_CHMODE_CH1_MODE_OFFSET)
#define I2S_CHMODE_CH1_MODE_EXTCLK_EXTWS  (2 << I2S_CHMODE_CH1_MODE_OFFSET)

// Channel clock modes
// Write strobe is the clock for switching left/right channels
#define I2S_CHMODE_INT_CLOCK0        0    // Internal clock 0
#define I2S_CHMODE_INT_CLOCK1        1    // Internal clock 1
#define I2S_CHMODE_EXT_CLOCK_INT_WS  2    // External clock internal write strobe
#define I2S_CHMODE_EXT_CLOCK_EXT_WS  3    // External clock external write strobe


#define I2S_FILT_CH0_DECIMATION_OFFSET  0
#define I2S_FILT_CH0_DECIMATION_WIDTH 10
#define I2S_FILT_CH0_DECIMATION_MASK  (0x3ff << I2S_FILT_CH0_DECIMATION_OFFSET)
#define I2S_FILT_CH0_DECIMATION(val)  (val << I2S_FILT_CH0_DECIMATION_OFFSET)

#define I2S_FILT_CH0_SHIFT_OFFSET 16
#define I2S_FILT_CH0_SHIFT_WIDTH  3
#define I2S_FILT_CH0_SHIFT_MASK   (0x7 << I2S_FILT_CH0_SHIFT_OFFSET)
#define I2S_FILT_CH0_SHIFT(val)   (val << I2S_FILT_CH0_SHIFT_OFFSET)

#define I2S_FILT_CH1_DECIMATION_OFFSET  0
#define I2S_FILT_CH1_DECIMATION_WIDTH 10
#define I2S_FILT_CH1_DECIMATION_MASK  (0x3ff << I2S_FILT_CH1_DECIMATION_OFFSET)
#define I2S_FILT_CH1_DECIMATION(val)  (val << I2S_FILT_CH1_DECIMATION_OFFSET)

#define I2S_FILT_CH1_SHIFT_OFFSET 16
#define I2S_FILT_CH1_SHIFT_WIDTH  3
#define I2S_FILT_CH1_SHIFT_MASK   (0x7 << I2S_FILT_CH1_SHIFT_OFFSET)
#define I2S_FILT_CH1_SHIFT(val)   (val << I2S_FILT_CH1_SHIFT_OFFSET)
///////////////////////////////////////////////////

#endif