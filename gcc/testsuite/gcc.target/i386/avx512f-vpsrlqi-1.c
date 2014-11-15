/* { dg-do compile } */
/* { dg-options "-O2 -mavx512f" } */
/* { dg-final { scan-assembler-times "vpsrlq\[ \\t\]+\[^\n\]*%zmm\[0-9\]\[^\{\]" 3 } } */
/* { dg-final { scan-assembler-times "vpsrlq\[ \\t\]+\[^\n\]*%zmm\[0-9\]\{%k\[1-7\]\}\[^\{\]" 1 } } */
/* { dg-final { scan-assembler-times "vpsrlq\[ \\t\]+\[^\n\]*%zmm\[0-9\]\{%k\[1-7\]\}\{z\}" 1 } } */

#include <immintrin.h>

volatile __m512i x;
#define y 7
volatile __mmask8 m;

void extern
avx512f_test (void)
{
  x = _mm512_srli_epi64 (x, y);
  x = _mm512_mask_srli_epi64 (x, m, x, y);
  x = _mm512_maskz_srli_epi64 (m, x, y);
}
