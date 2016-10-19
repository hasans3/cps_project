/*
 * model1.h
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
#ifndef RTW_HEADER_model1_h_
#define RTW_HEADER_model1_h_
#include <math.h>
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef model1_COMMON_INCLUDES_
# define model1_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* model1_COMMON_INCLUDES_ */

#include "model1_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T lastSin;                      /* '<S11>/Sine Wave A' */
  real_T lastCos;                      /* '<S11>/Sine Wave A' */
  real_T lastSin_o;                    /* '<S11>/Sine Wave B' */
  real_T lastCos_l;                    /* '<S11>/Sine Wave B' */
  real_T lastSin_b;                    /* '<S11>/Sine Wave C' */
  real_T lastCos_g;                    /* '<S11>/Sine Wave C' */
  int32_T systemEnable;                /* '<S11>/Sine Wave A' */
  int32_T systemEnable_i;              /* '<S11>/Sine Wave B' */
  int32_T systemEnable_g;              /* '<S11>/Sine Wave C' */
} DW_model1_T;

/* Parameters (auto storage) */
struct P_model1_T_ {
  real_T Source1_Frequency;            /* Mask Parameter: Source1_Frequency
                                        * Referenced by:
                                        *   '<S11>/Sine Wave A'
                                        *   '<S11>/Sine Wave B'
                                        *   '<S11>/Sine Wave C'
                                        */
  real_T Kv_Gain;                      /* Expression: Ki
                                        * Referenced by: '<S1>/Kv'
                                        */
  real_T Kv1_Gain;                     /* Expression: Kv
                                        * Referenced by: '<S1>/Kv1'
                                        */
  real_T Kv_Gain_f;                    /* Expression: Ki
                                        * Referenced by: '<S2>/Kv'
                                        */
  real_T Kv1_Gain_d;                   /* Expression: Kv
                                        * Referenced by: '<S2>/Kv1'
                                        */
  real_T SineWaveA_Amp;                /* Expression: Amplitude
                                        * Referenced by: '<S11>/Sine Wave A'
                                        */
  real_T SineWaveA_Bias;               /* Expression: 0
                                        * Referenced by: '<S11>/Sine Wave A'
                                        */
  real_T SineWaveA_Hsin;               /* Computed Parameter: SineWaveA_Hsin
                                        * Referenced by: '<S11>/Sine Wave A'
                                        */
  real_T SineWaveA_HCos;               /* Computed Parameter: SineWaveA_HCos
                                        * Referenced by: '<S11>/Sine Wave A'
                                        */
  real_T SineWaveA_PSin;               /* Computed Parameter: SineWaveA_PSin
                                        * Referenced by: '<S11>/Sine Wave A'
                                        */
  real_T SineWaveA_PCos;               /* Computed Parameter: SineWaveA_PCos
                                        * Referenced by: '<S11>/Sine Wave A'
                                        */
  real_T SineWaveB_Amp;                /* Expression: Amplitude
                                        * Referenced by: '<S11>/Sine Wave B'
                                        */
  real_T SineWaveB_Bias;               /* Expression: 0
                                        * Referenced by: '<S11>/Sine Wave B'
                                        */
  real_T SineWaveB_Hsin;               /* Computed Parameter: SineWaveB_Hsin
                                        * Referenced by: '<S11>/Sine Wave B'
                                        */
  real_T SineWaveB_HCos;               /* Computed Parameter: SineWaveB_HCos
                                        * Referenced by: '<S11>/Sine Wave B'
                                        */
  real_T SineWaveB_PSin;               /* Computed Parameter: SineWaveB_PSin
                                        * Referenced by: '<S11>/Sine Wave B'
                                        */
  real_T SineWaveB_PCos;               /* Computed Parameter: SineWaveB_PCos
                                        * Referenced by: '<S11>/Sine Wave B'
                                        */
  real_T SineWaveC_Amp;                /* Expression: Amplitude
                                        * Referenced by: '<S11>/Sine Wave C'
                                        */
  real_T SineWaveC_Bias;               /* Expression: 0
                                        * Referenced by: '<S11>/Sine Wave C'
                                        */
  real_T SineWaveC_Hsin;               /* Computed Parameter: SineWaveC_Hsin
                                        * Referenced by: '<S11>/Sine Wave C'
                                        */
  real_T SineWaveC_HCos;               /* Computed Parameter: SineWaveC_HCos
                                        * Referenced by: '<S11>/Sine Wave C'
                                        */
  real_T SineWaveC_PSin;               /* Computed Parameter: SineWaveC_PSin
                                        * Referenced by: '<S11>/Sine Wave C'
                                        */
  real_T SineWaveC_PCos;               /* Computed Parameter: SineWaveC_PCos
                                        * Referenced by: '<S11>/Sine Wave C'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_model1_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (auto storage) */
extern P_model1_T model1_P;

/* Block states (auto storage) */
extern DW_model1_T model1_DW;

/* Model entry point functions */
extern void model1_initialize(void);
extern void model1_step(void);
extern void model1_terminate(void);

/* Real-time Model object */
extern RT_MODEL_model1_T *const model1_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'model1'
 * '<S1>'   : 'model1/B1'
 * '<S2>'   : 'model1/B3'
 * '<S3>'   : 'model1/Source1'
 * '<S4>'   : 'model1/powergui'
 * '<S5>'   : 'model1/B1/Mode I'
 * '<S6>'   : 'model1/B1/Mode V'
 * '<S7>'   : 'model1/B1/Model'
 * '<S8>'   : 'model1/B3/Mode I'
 * '<S9>'   : 'model1/B3/Mode V'
 * '<S10>'  : 'model1/B3/Model'
 * '<S11>'  : 'model1/Source1/Model'
 * '<S12>'  : 'model1/powergui/EquivalentModel1'
 * '<S13>'  : 'model1/powergui/EquivalentModel1/Sources'
 */
#endif                                 /* RTW_HEADER_model1_h_ */
