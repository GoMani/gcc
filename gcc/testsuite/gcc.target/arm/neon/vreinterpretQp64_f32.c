/* Test the `vreinterpretQp64_f32' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_crypto_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_crypto } */

#include "arm_neon.h"

void test_vreinterpretQp64_f32 (void)
{
  poly64x2_t out_poly64x2_t;
  float32x4_t arg0_float32x4_t;

  out_poly64x2_t = vreinterpretq_p64_f32 (arg0_float32x4_t);
}

/* { dg-final { cleanup-saved-temps } } */