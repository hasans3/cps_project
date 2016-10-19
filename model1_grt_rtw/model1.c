/*
 * model1.c
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

/* Block states (auto storage) */
DW_model1_T model1_DW;

/* Real-time model */
RT_MODEL_model1_T model1_M_;
RT_MODEL_model1_T *const model1_M = &model1_M_;

/* Model step function */
void model1_step(void)
{
  /* local block i/o variables */
  real_T rtb_Kv;
  real_T rtb_Kv1;
  real_T rtb_Kv_p;
  real_T rtb_Kv1_d;
  real_T rtb_SineWaveA;
  real_T rtb_SineWaveB;
  real_T rtb_SineWaveC;
  real_T HoldSine;

  /* Gain: '<S1>/Kv' */
  rtb_Kv = model1_P.Kv_Gain * 0.0;

  /* Gain: '<S1>/Kv1' */
  rtb_Kv1 = model1_P.Kv1_Gain * 0.0;

  /* Gain: '<S2>/Kv' */
  rtb_Kv_p = model1_P.Kv_Gain_f * 0.0;

  /* Gain: '<S2>/Kv1' */
  rtb_Kv1_d = model1_P.Kv1_Gain_d * 0.0;

  /* Sin: '<S11>/Sine Wave A' */
  if (model1_DW.systemEnable != 0) {
    model1_DW.lastSin = sin(6.2831853071795862 * model1_P.Source1_Frequency *
      model1_M->Timing.taskTime0);
    model1_DW.lastCos = cos(6.2831853071795862 * model1_P.Source1_Frequency *
      model1_M->Timing.taskTime0);
    model1_DW.systemEnable = 0;
  }

  rtb_SineWaveA = ((model1_DW.lastSin * model1_P.SineWaveA_PCos +
                    model1_DW.lastCos * model1_P.SineWaveA_PSin) *
                   model1_P.SineWaveA_HCos + (model1_DW.lastCos *
    model1_P.SineWaveA_PCos - model1_DW.lastSin * model1_P.SineWaveA_PSin) *
                   model1_P.SineWaveA_Hsin) * model1_P.SineWaveA_Amp +
    model1_P.SineWaveA_Bias;

  /* End of Sin: '<S11>/Sine Wave A' */

  /* Sin: '<S11>/Sine Wave B' */
  if (model1_DW.systemEnable_i != 0) {
    model1_DW.lastSin_o = sin(6.2831853071795862 * model1_P.Source1_Frequency *
      model1_M->Timing.taskTime0);
    model1_DW.lastCos_l = cos(6.2831853071795862 * model1_P.Source1_Frequency *
      model1_M->Timing.taskTime0);
    model1_DW.systemEnable_i = 0;
  }

  rtb_SineWaveB = ((model1_DW.lastSin_o * model1_P.SineWaveB_PCos +
                    model1_DW.lastCos_l * model1_P.SineWaveB_PSin) *
                   model1_P.SineWaveB_HCos + (model1_DW.lastCos_l *
    model1_P.SineWaveB_PCos - model1_DW.lastSin_o * model1_P.SineWaveB_PSin) *
                   model1_P.SineWaveB_Hsin) * model1_P.SineWaveB_Amp +
    model1_P.SineWaveB_Bias;

  /* End of Sin: '<S11>/Sine Wave B' */

  /* Sin: '<S11>/Sine Wave C' */
  if (model1_DW.systemEnable_g != 0) {
    model1_DW.lastSin_b = sin(6.2831853071795862 * model1_P.Source1_Frequency *
      model1_M->Timing.taskTime0);
    model1_DW.lastCos_g = cos(6.2831853071795862 * model1_P.Source1_Frequency *
      model1_M->Timing.taskTime0);
    model1_DW.systemEnable_g = 0;
  }

  rtb_SineWaveC = ((model1_DW.lastSin_b * model1_P.SineWaveC_PCos +
                    model1_DW.lastCos_g * model1_P.SineWaveC_PSin) *
                   model1_P.SineWaveC_HCos + (model1_DW.lastCos_g *
    model1_P.SineWaveC_PCos - model1_DW.lastSin_b * model1_P.SineWaveC_PSin) *
                   model1_P.SineWaveC_Hsin) * model1_P.SineWaveC_Amp +
    model1_P.SineWaveC_Bias;

  /* End of Sin: '<S11>/Sine Wave C' */

  /* Update for Sin: '<S11>/Sine Wave A' */
  HoldSine = model1_DW.lastSin;
  model1_DW.lastSin = model1_DW.lastSin * model1_P.SineWaveA_HCos +
    model1_DW.lastCos * model1_P.SineWaveA_Hsin;
  model1_DW.lastCos = model1_DW.lastCos * model1_P.SineWaveA_HCos - HoldSine *
    model1_P.SineWaveA_Hsin;

  /* Update for Sin: '<S11>/Sine Wave B' */
  HoldSine = model1_DW.lastSin_o;
  model1_DW.lastSin_o = model1_DW.lastSin_o * model1_P.SineWaveB_HCos +
    model1_DW.lastCos_l * model1_P.SineWaveB_Hsin;
  model1_DW.lastCos_l = model1_DW.lastCos_l * model1_P.SineWaveB_HCos - HoldSine
    * model1_P.SineWaveB_Hsin;

  /* Update for Sin: '<S11>/Sine Wave C' */
  HoldSine = model1_DW.lastSin_b;
  model1_DW.lastSin_b = model1_DW.lastSin_b * model1_P.SineWaveC_HCos +
    model1_DW.lastCos_g * model1_P.SineWaveC_Hsin;
  model1_DW.lastCos_g = model1_DW.lastCos_g * model1_P.SineWaveC_HCos - HoldSine
    * model1_P.SineWaveC_Hsin;

  /* Matfile logging */
  rt_UpdateTXYLogVars(model1_M->rtwLogInfo, (&model1_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [5.0E-5s, 0.0s] */
    if ((rtmGetTFinal(model1_M)!=-1) &&
        !((rtmGetTFinal(model1_M)-model1_M->Timing.taskTime0) >
          model1_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(model1_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++model1_M->Timing.clockTick0)) {
    ++model1_M->Timing.clockTickH0;
  }

  model1_M->Timing.taskTime0 = model1_M->Timing.clockTick0 *
    model1_M->Timing.stepSize0 + model1_M->Timing.clockTickH0 *
    model1_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void model1_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)model1_M, 0,
                sizeof(RT_MODEL_model1_T));
  rtmSetTFinal(model1_M, 2.0);
  model1_M->Timing.stepSize0 = 5.0E-5;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    model1_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(model1_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(model1_M->rtwLogInfo, (NULL));
    rtliSetLogT(model1_M->rtwLogInfo, "tout");
    rtliSetLogX(model1_M->rtwLogInfo, "");
    rtliSetLogXFinal(model1_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(model1_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(model1_M->rtwLogInfo, 0);
    rtliSetLogMaxRows(model1_M->rtwLogInfo, 1000);
    rtliSetLogDecimation(model1_M->rtwLogInfo, 1);
    rtliSetLogY(model1_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(model1_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(model1_M->rtwLogInfo, (NULL));
  }

  /* states (dwork) */
  (void) memset((void *)&model1_DW, 0,
                sizeof(DW_model1_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(model1_M->rtwLogInfo, 0.0, rtmGetTFinal
    (model1_M), model1_M->Timing.stepSize0, (&rtmGetErrorStatus(model1_M)));

  /* Enable for Sin: '<S11>/Sine Wave A' */
  model1_DW.systemEnable = 1;

  /* Enable for Sin: '<S11>/Sine Wave B' */
  model1_DW.systemEnable_i = 1;

  /* Enable for Sin: '<S11>/Sine Wave C' */
  model1_DW.systemEnable_g = 1;
}

/* Model terminate function */
void model1_terminate(void)
{
  /* (no terminate code required) */
}
