/*
 * model1_data.c
 *
 * Code generation for model "model1".
 *
 * Model version              : 1.191
 * Simulink Coder version : 8.7 (R2014b) 08-Sep-2014
 * C source code generated on : Tue Oct 18 16:13:05 2016
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#include "model1.h"
#include "model1_private.h"

/* Block parameters (auto storage) */
P_model1_T model1_P = {
  60.0,                                /* Mask Parameter: Source1_Frequency
                                        * Referenced by:
                                        *   '<S11>/Sine Wave A'
                                        *   '<S11>/Sine Wave B'
                                        *   '<S11>/Sine Wave C'
                                        */
  1.0,                                 /* Expression: Ki
                                        * Referenced by: '<S1>/Kv'
                                        */
  1.0,                                 /* Expression: Kv
                                        * Referenced by: '<S1>/Kv1'
                                        */
  1.0,                                 /* Expression: Ki
                                        * Referenced by: '<S2>/Kv'
                                        */
  1.0,                                 /* Expression: Kv
                                        * Referenced by: '<S2>/Kv1'
                                        */
  20412.414523193154,                  /* Expression: Amplitude
                                        * Referenced by: '<S11>/Sine Wave A'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S11>/Sine Wave A'
                                        */
  0.018848439715408175,                /* Computed Parameter: SineWaveA_Hsin
                                        * Referenced by: '<S11>/Sine Wave A'
                                        */
  0.999822352380809,                   /* Computed Parameter: SineWaveA_HCos
                                        * Referenced by: '<S11>/Sine Wave A'
                                        */
  -0.018848439715408175,               /* Computed Parameter: SineWaveA_PSin
                                        * Referenced by: '<S11>/Sine Wave A'
                                        */
  0.999822352380809,                   /* Computed Parameter: SineWaveA_PCos
                                        * Referenced by: '<S11>/Sine Wave A'
                                        */
  20412.414523193154,                  /* Expression: Amplitude
                                        * Referenced by: '<S11>/Sine Wave B'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S11>/Sine Wave B'
                                        */
  0.018848439715408175,                /* Computed Parameter: SineWaveB_Hsin
                                        * Referenced by: '<S11>/Sine Wave B'
                                        */
  0.999822352380809,                   /* Computed Parameter: SineWaveB_HCos
                                        * Referenced by: '<S11>/Sine Wave B'
                                        */
  -0.85644733657559335,                /* Computed Parameter: SineWaveB_PSin
                                        * Referenced by: '<S11>/Sine Wave B'
                                        */
  -0.51623440380564745,                /* Computed Parameter: SineWaveB_PCos
                                        * Referenced by: '<S11>/Sine Wave B'
                                        */
  20412.414523193154,                  /* Expression: Amplitude
                                        * Referenced by: '<S11>/Sine Wave C'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S11>/Sine Wave C'
                                        */
  0.018848439715408175,                /* Computed Parameter: SineWaveC_Hsin
                                        * Referenced by: '<S11>/Sine Wave C'
                                        */
  0.999822352380809,                   /* Computed Parameter: SineWaveC_HCos
                                        * Referenced by: '<S11>/Sine Wave C'
                                        */
  0.87529577629100175,                 /* Computed Parameter: SineWaveC_PSin
                                        * Referenced by: '<S11>/Sine Wave C'
                                        */
  -0.48358794857516113                 /* Computed Parameter: SineWaveC_PCos
                                        * Referenced by: '<S11>/Sine Wave C'
                                        */
};
