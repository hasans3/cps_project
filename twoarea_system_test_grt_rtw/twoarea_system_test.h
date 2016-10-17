/*
 * twoarea_system_test.h
 *
 * Code generation for model "twoarea_system_test".
 *
 * Model version              : 1.60
 * Simulink Coder version : 8.7 (R2014b) 08-Sep-2014
 * C source code generated on : Mon Oct 17 13:24:35 2016
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#ifndef RTW_HEADER_twoarea_system_test_h_
#define RTW_HEADER_twoarea_system_test_h_
#include <math.h>
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef twoarea_system_test_COMMON_INCLUDES_
# define twoarea_system_test_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* twoarea_system_test_COMMON_INCLUDES_ */

#include "twoarea_system_test_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_look.h"
#include "rt_look1d.h"
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

/* Block signals (auto storage) */
typedef struct {
  real_T SineWaveA;                    /* '<S110>/Sine Wave A' */
  real_T SineWaveB;                    /* '<S110>/Sine Wave B' */
  real_T SineWaveC;                    /* '<S110>/Sine Wave C' */
  real_T SineWaveA_g;                  /* '<S109>/Sine Wave A' */
  real_T SineWaveB_e;                  /* '<S109>/Sine Wave B' */
  real_T SineWaveC_i;                  /* '<S109>/Sine Wave C' */
  real_T SineWaveA_b;                  /* '<S108>/Sine Wave A' */
  real_T SineWaveB_j;                  /* '<S108>/Sine Wave B' */
  real_T SineWaveC_b;                  /* '<S108>/Sine Wave C' */
  real_T SineWaveA_e;                  /* '<S107>/Sine Wave A' */
  real_T SineWaveB_m;                  /* '<S107>/Sine Wave B' */
  real_T SineWaveC_g;                  /* '<S107>/Sine Wave C' */
  real_T StateSpace_o1[63];            /* '<S465>/State-Space' */
  real_T StateSpace_o2[63];            /* '<S465>/State-Space' */
  real_T IC;                           /* '<S175>/IC' */
  real_T IC_k;                         /* '<S178>/IC' */
  real_T IC_j;                         /* '<S181>/IC' */
  real_T IC_i;                         /* '<S189>/IC' */
  real_T IC_n;                         /* '<S192>/IC' */
  real_T IC_c;                         /* '<S195>/IC' */
  real_T IC_p;                         /* '<S203>/IC' */
  real_T IC_ka;                        /* '<S206>/IC' */
  real_T IC_l;                         /* '<S209>/IC' */
  real_T IC_c3;                        /* '<S217>/IC' */
  real_T IC_m;                         /* '<S220>/IC' */
  real_T IC_mt;                        /* '<S223>/IC' */
  real_T IC_o;                         /* '<S231>/IC' */
  real_T IC_nw;                        /* '<S234>/IC' */
  real_T IC_ps;                        /* '<S237>/IC' */
  real_T IC_jr;                        /* '<S245>/IC' */
  real_T IC_lp;                        /* '<S248>/IC' */
  real_T IC_ki;                        /* '<S251>/IC' */
  real_T IC_ib;                        /* '<S259>/IC' */
  real_T IC_g;                         /* '<S262>/IC' */
  real_T IC_d;                         /* '<S265>/IC' */
  real_T IC_dd;                        /* '<S273>/IC' */
  real_T IC_p3;                        /* '<S276>/IC' */
  real_T IC_ix;                        /* '<S279>/IC' */
  real_T IC_cx;                        /* '<S287>/IC' */
  real_T IC_a;                         /* '<S290>/IC' */
  real_T IC_b;                         /* '<S293>/IC' */
  real_T IC_e;                         /* '<S301>/IC' */
  real_T IC_h;                         /* '<S304>/IC' */
  real_T IC_cp;                        /* '<S307>/IC' */
  real_T IC_px;                        /* '<S315>/IC' */
  real_T IC_iz;                        /* '<S318>/IC' */
  real_T IC_ne;                        /* '<S321>/IC' */
  real_T IC_ov;                        /* '<S329>/IC' */
  real_T IC_f;                         /* '<S332>/IC' */
  real_T IC_j5;                        /* '<S335>/IC' */
  real_T IC_dz;                        /* '<S343>/IC' */
  real_T IC_cx3;                       /* '<S346>/IC' */
  real_T IC_cq;                        /* '<S349>/IC' */
  real_T IC_pp;                        /* '<S357>/IC' */
  real_T IC_fb;                        /* '<S360>/IC' */
  real_T IC_g1;                        /* '<S363>/IC' */
  real_T IC_gl;                        /* '<S371>/IC' */
  real_T IC_it;                        /* '<S374>/IC' */
  real_T IC_he;                        /* '<S377>/IC' */
  real_T IC_bh;                        /* '<S385>/IC' */
  real_T IC_j4;                        /* '<S388>/IC' */
  real_T IC_g1y;                       /* '<S391>/IC' */
  real_T IC_bm;                        /* '<S399>/IC' */
  real_T IC_ae;                        /* '<S402>/IC' */
  real_T IC_pl;                        /* '<S405>/IC' */
  real_T IC_gg;                        /* '<S413>/IC' */
  real_T IC_h1;                        /* '<S416>/IC' */
  real_T IC_ea;                        /* '<S419>/IC' */
  real_T IC_n2;                        /* '<S427>/IC' */
  real_T IC_hh;                        /* '<S430>/IC' */
  real_T IC_o1;                        /* '<S433>/IC' */
  real_T IC_bl;                        /* '<S441>/IC' */
  real_T IC_i5;                        /* '<S444>/IC' */
  real_T IC_iw;                        /* '<S447>/IC' */
  real_T IC_gm;                        /* '<S455>/IC' */
  real_T IC_pa;                        /* '<S458>/IC' */
  real_T IC_b1;                        /* '<S461>/IC' */
} B_twoarea_system_test_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T StateSpace_DSTATE[238];       /* '<S465>/State-Space' */
  real_T DelayTs_DSTATE;               /* '<S175>/Delay Ts' */
  real_T DelayTs_DSTATE_m;             /* '<S175>/Delay Ts ' */
  real_T DelayTs_DSTATE_a;             /* '<S178>/Delay Ts' */
  real_T DelayTs_DSTATE_f;             /* '<S178>/Delay Ts ' */
  real_T DelayTs_DSTATE_g;             /* '<S181>/Delay Ts' */
  real_T DelayTs_DSTATE_mj;            /* '<S181>/Delay Ts ' */
  real_T DelayTs_DSTATE_p;             /* '<S189>/Delay Ts' */
  real_T DelayTs_DSTATE_d;             /* '<S189>/Delay Ts ' */
  real_T DelayTs_DSTATE_o;             /* '<S192>/Delay Ts' */
  real_T DelayTs_DSTATE_n;             /* '<S192>/Delay Ts ' */
  real_T DelayTs_DSTATE_l;             /* '<S195>/Delay Ts' */
  real_T DelayTs_DSTATE_i;             /* '<S195>/Delay Ts ' */
  real_T DelayTs_DSTATE_c;             /* '<S203>/Delay Ts' */
  real_T DelayTs_DSTATE_dk;            /* '<S203>/Delay Ts ' */
  real_T DelayTs_DSTATE_o3;            /* '<S206>/Delay Ts' */
  real_T DelayTs_DSTATE_b;             /* '<S206>/Delay Ts ' */
  real_T DelayTs_DSTATE_j;             /* '<S209>/Delay Ts' */
  real_T DelayTs_DSTATE_o0;            /* '<S209>/Delay Ts ' */
  real_T DelayTs_DSTATE_mc;            /* '<S217>/Delay Ts' */
  real_T DelayTs_DSTATE_mn;            /* '<S217>/Delay Ts ' */
  real_T DelayTs_DSTATE_ai;            /* '<S220>/Delay Ts' */
  real_T DelayTs_DSTATE_aa;            /* '<S220>/Delay Ts ' */
  real_T DelayTs_DSTATE_jt;            /* '<S223>/Delay Ts' */
  real_T DelayTs_DSTATE_cb;            /* '<S223>/Delay Ts ' */
  real_T DelayTs_DSTATE_ao;            /* '<S231>/Delay Ts' */
  real_T DelayTs_DSTATE_pl;            /* '<S231>/Delay Ts ' */
  real_T DelayTs_DSTATE_jp;            /* '<S234>/Delay Ts' */
  real_T DelayTs_DSTATE_h;             /* '<S234>/Delay Ts ' */
  real_T DelayTs_DSTATE_n2;            /* '<S237>/Delay Ts' */
  real_T DelayTs_DSTATE_fw;            /* '<S237>/Delay Ts ' */
  real_T DelayTs_DSTATE_b1;            /* '<S245>/Delay Ts' */
  real_T DelayTs_DSTATE_pm;            /* '<S245>/Delay Ts ' */
  real_T DelayTs_DSTATE_pu;            /* '<S248>/Delay Ts' */
  real_T DelayTs_DSTATE_plz;           /* '<S248>/Delay Ts ' */
  real_T DelayTs_DSTATE_gr;            /* '<S251>/Delay Ts' */
  real_T DelayTs_DSTATE_bd;            /* '<S251>/Delay Ts ' */
  real_T DelayTs_DSTATE_hu;            /* '<S259>/Delay Ts' */
  real_T DelayTs_DSTATE_iv;            /* '<S259>/Delay Ts ' */
  real_T DelayTs_DSTATE_ax;            /* '<S262>/Delay Ts' */
  real_T DelayTs_DSTATE_e;             /* '<S262>/Delay Ts ' */
  real_T DelayTs_DSTATE_mck;           /* '<S265>/Delay Ts' */
  real_T DelayTs_DSTATE_pa;            /* '<S265>/Delay Ts ' */
  real_T DelayTs_DSTATE_ef;            /* '<S273>/Delay Ts' */
  real_T DelayTs_DSTATE_m3;            /* '<S273>/Delay Ts ' */
  real_T DelayTs_DSTATE_grx;           /* '<S276>/Delay Ts' */
  real_T DelayTs_DSTATE_fb;            /* '<S276>/Delay Ts ' */
  real_T DelayTs_DSTATE_dj;            /* '<S279>/Delay Ts' */
  real_T DelayTs_DSTATE_ne;            /* '<S279>/Delay Ts ' */
  real_T DelayTs_DSTATE_ch;            /* '<S287>/Delay Ts' */
  real_T DelayTs_DSTATE_ia;            /* '<S287>/Delay Ts ' */
  real_T DelayTs_DSTATE_nl;            /* '<S290>/Delay Ts' */
  real_T DelayTs_DSTATE_bz;            /* '<S290>/Delay Ts ' */
  real_T DelayTs_DSTATE_oe;            /* '<S293>/Delay Ts' */
  real_T DelayTs_DSTATE_ou;            /* '<S293>/Delay Ts ' */
  real_T DelayTs_DSTATE_lw;            /* '<S301>/Delay Ts' */
  real_T DelayTs_DSTATE_dv;            /* '<S301>/Delay Ts ' */
  real_T DelayTs_DSTATE_k;             /* '<S304>/Delay Ts' */
  real_T DelayTs_DSTATE_e3;            /* '<S304>/Delay Ts ' */
  real_T DelayTs_DSTATE_cj;            /* '<S307>/Delay Ts' */
  real_T DelayTs_DSTATE_n1;            /* '<S307>/Delay Ts ' */
  real_T DelayTs_DSTATE_od;            /* '<S315>/Delay Ts' */
  real_T DelayTs_DSTATE_ouw;           /* '<S315>/Delay Ts ' */
  real_T DelayTs_DSTATE_fy;            /* '<S318>/Delay Ts' */
  real_T DelayTs_DSTATE_ld;            /* '<S318>/Delay Ts ' */
  real_T DelayTs_DSTATE_cq;            /* '<S321>/Delay Ts' */
  real_T DelayTs_DSTATE_ii;            /* '<S321>/Delay Ts ' */
  real_T DelayTs_DSTATE_fe;            /* '<S329>/Delay Ts' */
  real_T DelayTs_DSTATE_fq;            /* '<S329>/Delay Ts ' */
  real_T DelayTs_DSTATE_pz;            /* '<S332>/Delay Ts' */
  real_T DelayTs_DSTATE_a2;            /* '<S332>/Delay Ts ' */
  real_T DelayTs_DSTATE_pv;            /* '<S335>/Delay Ts' */
  real_T DelayTs_DSTATE_chz;           /* '<S335>/Delay Ts ' */
  real_T DelayTs_DSTATE_chp;           /* '<S343>/Delay Ts' */
  real_T DelayTs_DSTATE_kv;            /* '<S343>/Delay Ts ' */
  real_T DelayTs_DSTATE_d0;            /* '<S346>/Delay Ts' */
  real_T DelayTs_DSTATE_o33;           /* '<S346>/Delay Ts ' */
  real_T DelayTs_DSTATE_dq;            /* '<S349>/Delay Ts' */
  real_T DelayTs_DSTATE_ec;            /* '<S349>/Delay Ts ' */
  real_T DelayTs_DSTATE_jtz;           /* '<S357>/Delay Ts' */
  real_T DelayTs_DSTATE_k2;            /* '<S357>/Delay Ts ' */
  real_T DelayTs_DSTATE_dr;            /* '<S360>/Delay Ts' */
  real_T DelayTs_DSTATE_kd;            /* '<S360>/Delay Ts ' */
  real_T DelayTs_DSTATE_if;            /* '<S363>/Delay Ts' */
  real_T DelayTs_DSTATE_cy;            /* '<S363>/Delay Ts ' */
  real_T DelayTs_DSTATE_pn;            /* '<S371>/Delay Ts' */
  real_T DelayTs_DSTATE_lx;            /* '<S371>/Delay Ts ' */
  real_T DelayTs_DSTATE_jv;            /* '<S374>/Delay Ts' */
  real_T DelayTs_DSTATE_c4;            /* '<S374>/Delay Ts ' */
  real_T DelayTs_DSTATE_f2;            /* '<S377>/Delay Ts' */
  real_T DelayTs_DSTATE_cqv;           /* '<S377>/Delay Ts ' */
  real_T DelayTs_DSTATE_iw;            /* '<S385>/Delay Ts' */
  real_T DelayTs_DSTATE_cc;            /* '<S385>/Delay Ts ' */
  real_T DelayTs_DSTATE_bc;            /* '<S388>/Delay Ts' */
  real_T DelayTs_DSTATE_cp;            /* '<S388>/Delay Ts ' */
  real_T DelayTs_DSTATE_d0i;           /* '<S391>/Delay Ts' */
  real_T DelayTs_DSTATE_ju;            /* '<S391>/Delay Ts ' */
  real_T DelayTs_DSTATE_ga;            /* '<S399>/Delay Ts' */
  real_T DelayTs_DSTATE_id;            /* '<S399>/Delay Ts ' */
  real_T DelayTs_DSTATE_a5;            /* '<S402>/Delay Ts' */
  real_T DelayTs_DSTATE_c0;            /* '<S402>/Delay Ts ' */
  real_T DelayTs_DSTATE_ha;            /* '<S405>/Delay Ts' */
  real_T DelayTs_DSTATE_cm;            /* '<S405>/Delay Ts ' */
  real_T DelayTs_DSTATE_n1y;           /* '<S413>/Delay Ts' */
  real_T DelayTs_DSTATE_pj;            /* '<S413>/Delay Ts ' */
  real_T DelayTs_DSTATE_nz;            /* '<S416>/Delay Ts' */
  real_T DelayTs_DSTATE_bw;            /* '<S416>/Delay Ts ' */
  real_T DelayTs_DSTATE_gb;            /* '<S419>/Delay Ts' */
  real_T DelayTs_DSTATE_hd;            /* '<S419>/Delay Ts ' */
  real_T DelayTs_DSTATE_oq;            /* '<S427>/Delay Ts' */
  real_T DelayTs_DSTATE_idd;           /* '<S427>/Delay Ts ' */
  real_T DelayTs_DSTATE_pw;            /* '<S430>/Delay Ts' */
  real_T DelayTs_DSTATE_mx;            /* '<S430>/Delay Ts ' */
  real_T DelayTs_DSTATE_ik;            /* '<S433>/Delay Ts' */
  real_T DelayTs_DSTATE_cqf;           /* '<S433>/Delay Ts ' */
  real_T DelayTs_DSTATE_oz;            /* '<S441>/Delay Ts' */
  real_T DelayTs_DSTATE_k2m;           /* '<S441>/Delay Ts ' */
  real_T DelayTs_DSTATE_i1;            /* '<S444>/Delay Ts' */
  real_T DelayTs_DSTATE_ic;            /* '<S444>/Delay Ts ' */
  real_T DelayTs_DSTATE_pj0;           /* '<S447>/Delay Ts' */
  real_T DelayTs_DSTATE_ca;            /* '<S447>/Delay Ts ' */
  real_T DelayTs_DSTATE_n5;            /* '<S455>/Delay Ts' */
  real_T DelayTs_DSTATE_idf;           /* '<S455>/Delay Ts ' */
  real_T DelayTs_DSTATE_l5;            /* '<S458>/Delay Ts' */
  real_T DelayTs_DSTATE_dg;            /* '<S458>/Delay Ts ' */
  real_T DelayTs_DSTATE_e5;            /* '<S461>/Delay Ts' */
  real_T DelayTs_DSTATE_ox;            /* '<S461>/Delay Ts ' */
  real_T lastSin;                      /* '<S110>/Sine Wave A' */
  real_T lastCos;                      /* '<S110>/Sine Wave A' */
  real_T lastSin_d;                    /* '<S110>/Sine Wave B' */
  real_T lastCos_e;                    /* '<S110>/Sine Wave B' */
  real_T lastSin_i;                    /* '<S110>/Sine Wave C' */
  real_T lastCos_f;                    /* '<S110>/Sine Wave C' */
  real_T lastSin_f;                    /* '<S109>/Sine Wave A' */
  real_T lastCos_n;                    /* '<S109>/Sine Wave A' */
  real_T lastSin_o;                    /* '<S109>/Sine Wave B' */
  real_T lastCos_m;                    /* '<S109>/Sine Wave B' */
  real_T lastSin_l;                    /* '<S109>/Sine Wave C' */
  real_T lastCos_c;                    /* '<S109>/Sine Wave C' */
  real_T lastSin_c;                    /* '<S108>/Sine Wave A' */
  real_T lastCos_cw;                   /* '<S108>/Sine Wave A' */
  real_T lastSin_j;                    /* '<S108>/Sine Wave B' */
  real_T lastCos_ch;                   /* '<S108>/Sine Wave B' */
  real_T lastSin_op;                   /* '<S108>/Sine Wave C' */
  real_T lastCos_b;                    /* '<S108>/Sine Wave C' */
  real_T lastSin_lh;                   /* '<S107>/Sine Wave A' */
  real_T lastCos_l;                    /* '<S107>/Sine Wave A' */
  real_T lastSin_g;                    /* '<S107>/Sine Wave B' */
  real_T lastCos_o;                    /* '<S107>/Sine Wave B' */
  real_T lastSin_ga;                   /* '<S107>/Sine Wave C' */
  real_T lastCos_bc;                   /* '<S107>/Sine Wave C' */
  struct {
    void *AS;
    void *BS;
    void *CS;
    void *DS;
    void *DX_COL;
    void *BD_COL;
    void *TMP1;
    void *TMP2;
    void *XTMP;
    void *SWITCH_STATUS;
    void *SWITCH_STATUS_INIT;
    void *SW_CHG;
    void *CHOPPER;
    void *G_STATE;
    void *XKM12;
    void *XKP12;
    void *XLAST;
    void *ULAST;
    void *IDX_SW_CHG;
    void *Y_SWITCH;
    void *SWITCH_TYPES;
    void *IDX_OUT_SW;
  } StateSpace_PWORK;                  /* '<S465>/State-Space' */

  int32_T systemEnable;                /* '<S110>/Sine Wave A' */
  int32_T systemEnable_b;              /* '<S110>/Sine Wave B' */
  int32_T systemEnable_k;              /* '<S110>/Sine Wave C' */
  int32_T systemEnable_e;              /* '<S109>/Sine Wave A' */
  int32_T systemEnable_o;              /* '<S109>/Sine Wave B' */
  int32_T systemEnable_l;              /* '<S109>/Sine Wave C' */
  int32_T systemEnable_bp;             /* '<S108>/Sine Wave A' */
  int32_T systemEnable_f;              /* '<S108>/Sine Wave B' */
  int32_T systemEnable_ej;             /* '<S108>/Sine Wave C' */
  int32_T systemEnable_p;              /* '<S107>/Sine Wave A' */
  int32_T systemEnable_ow;             /* '<S107>/Sine Wave B' */
  int32_T systemEnable_i;              /* '<S107>/Sine Wave C' */
  int_T StateSpace_IWORK[5];           /* '<S465>/State-Space' */
  boolean_T u5_Mode;                   /* '<S175>/>1.5' */
  boolean_T IC_FirstOutputTime;        /* '<S175>/IC' */
  boolean_T u5_Mode_h;                 /* '<S178>/>1.5' */
  boolean_T IC_FirstOutputTime_l;      /* '<S178>/IC' */
  boolean_T u5_Mode_e;                 /* '<S181>/>1.5' */
  boolean_T IC_FirstOutputTime_p;      /* '<S181>/IC' */
  boolean_T u5_Mode_c;                 /* '<S189>/>1.5' */
  boolean_T IC_FirstOutputTime_k;      /* '<S189>/IC' */
  boolean_T u5_Mode_o;                 /* '<S192>/>1.5' */
  boolean_T IC_FirstOutputTime_c;      /* '<S192>/IC' */
  boolean_T u5_Mode_o0;                /* '<S195>/>1.5' */
  boolean_T IC_FirstOutputTime_a;      /* '<S195>/IC' */
  boolean_T u5_Mode_l;                 /* '<S203>/>1.5' */
  boolean_T IC_FirstOutputTime_k1;     /* '<S203>/IC' */
  boolean_T u5_Mode_eb;                /* '<S206>/>1.5' */
  boolean_T IC_FirstOutputTime_pr;     /* '<S206>/IC' */
  boolean_T u5_Mode_f;                 /* '<S209>/>1.5' */
  boolean_T IC_FirstOutputTime_ko;     /* '<S209>/IC' */
  boolean_T u5_Mode_b;                 /* '<S217>/>1.5' */
  boolean_T IC_FirstOutputTime_d;      /* '<S217>/IC' */
  boolean_T u5_Mode_j;                 /* '<S220>/>1.5' */
  boolean_T IC_FirstOutputTime_m;      /* '<S220>/IC' */
  boolean_T u5_Mode_l0;                /* '<S223>/>1.5' */
  boolean_T IC_FirstOutputTime_lj;     /* '<S223>/IC' */
  boolean_T u5_Mode_k;                 /* '<S231>/>1.5' */
  boolean_T IC_FirstOutputTime_cb;     /* '<S231>/IC' */
  boolean_T u5_Mode_p;                 /* '<S234>/>1.5' */
  boolean_T IC_FirstOutputTime_j;      /* '<S234>/IC' */
  boolean_T u5_Mode_g;                 /* '<S237>/>1.5' */
  boolean_T IC_FirstOutputTime_cx;     /* '<S237>/IC' */
  boolean_T u5_Mode_d;                 /* '<S245>/>1.5' */
  boolean_T IC_FirstOutputTime_n;      /* '<S245>/IC' */
  boolean_T u5_Mode_jw;                /* '<S248>/>1.5' */
  boolean_T IC_FirstOutputTime_jq;     /* '<S248>/IC' */
  boolean_T u5_Mode_je;                /* '<S251>/>1.5' */
  boolean_T IC_FirstOutputTime_dc;     /* '<S251>/IC' */
  boolean_T u5_Mode_j1;                /* '<S259>/>1.5' */
  boolean_T IC_FirstOutputTime_e;      /* '<S259>/IC' */
  boolean_T u5_Mode_pw;                /* '<S262>/>1.5' */
  boolean_T IC_FirstOutputTime_i;      /* '<S262>/IC' */
  boolean_T u5_Mode_jn;                /* '<S265>/>1.5' */
  boolean_T IC_FirstOutputTime_de;     /* '<S265>/IC' */
  boolean_T u5_Mode_a;                 /* '<S273>/>1.5' */
  boolean_T IC_FirstOutputTime_kog;    /* '<S273>/IC' */
  boolean_T u5_Mode_f1;                /* '<S276>/>1.5' */
  boolean_T IC_FirstOutputTime_h;      /* '<S276>/IC' */
  boolean_T u5_Mode_k0;                /* '<S279>/>1.5' */
  boolean_T IC_FirstOutputTime_hs;     /* '<S279>/IC' */
  boolean_T u5_Mode_gi;                /* '<S287>/>1.5' */
  boolean_T IC_FirstOutputTime_jd;     /* '<S287>/IC' */
  boolean_T u5_Mode_ct;                /* '<S290>/>1.5' */
  boolean_T IC_FirstOutputTime_g;      /* '<S290>/IC' */
  boolean_T u5_Mode_pz;                /* '<S293>/>1.5' */
  boolean_T IC_FirstOutputTime_ic;     /* '<S293>/IC' */
  boolean_T u5_Mode_n;                 /* '<S301>/>1.5' */
  boolean_T IC_FirstOutputTime_hl;     /* '<S301>/IC' */
  boolean_T u5_Mode_i;                 /* '<S304>/>1.5' */
  boolean_T IC_FirstOutputTime_ju;     /* '<S304>/IC' */
  boolean_T u5_Mode_j0;                /* '<S307>/>1.5' */
  boolean_T IC_FirstOutputTime_kb;     /* '<S307>/IC' */
  boolean_T u5_Mode_m;                 /* '<S315>/>1.5' */
  boolean_T IC_FirstOutputTime_ec;     /* '<S315>/IC' */
  boolean_T u5_Mode_il;                /* '<S318>/>1.5' */
  boolean_T IC_FirstOutputTime_hg;     /* '<S318>/IC' */
  boolean_T u5_Mode_n0;                /* '<S321>/>1.5' */
  boolean_T IC_FirstOutputTime_gn;     /* '<S321>/IC' */
  boolean_T u5_Mode_om;                /* '<S329>/>1.5' */
  boolean_T IC_FirstOutputTime_o;      /* '<S329>/IC' */
  boolean_T u5_Mode_lx;                /* '<S332>/>1.5' */
  boolean_T IC_FirstOutputTime_g3;     /* '<S332>/IC' */
  boolean_T u5_Mode_cp;                /* '<S335>/>1.5' */
  boolean_T IC_FirstOutputTime_df;     /* '<S335>/IC' */
  boolean_T u5_Mode_od;                /* '<S343>/>1.5' */
  boolean_T IC_FirstOutputTime_hm;     /* '<S343>/IC' */
  boolean_T u5_Mode_dt;                /* '<S346>/>1.5' */
  boolean_T IC_FirstOutputTime_b;      /* '<S346>/IC' */
  boolean_T u5_Mode_oe;                /* '<S349>/>1.5' */
  boolean_T IC_FirstOutputTime_a2;     /* '<S349>/IC' */
  boolean_T u5_Mode_i3;                /* '<S357>/>1.5' */
  boolean_T IC_FirstOutputTime_mv;     /* '<S357>/IC' */
  boolean_T u5_Mode_g3;                /* '<S360>/>1.5' */
  boolean_T IC_FirstOutputTime_f;      /* '<S360>/IC' */
  boolean_T u5_Mode_hk;                /* '<S363>/>1.5' */
  boolean_T IC_FirstOutputTime_fa;     /* '<S363>/IC' */
  boolean_T u5_Mode_ft;                /* '<S371>/>1.5' */
  boolean_T IC_FirstOutputTime_fp;     /* '<S371>/IC' */
  boolean_T u5_Mode_hc;                /* '<S374>/>1.5' */
  boolean_T IC_FirstOutputTime_iq;     /* '<S374>/IC' */
  boolean_T u5_Mode_am;                /* '<S377>/>1.5' */
  boolean_T IC_FirstOutputTime_ar;     /* '<S377>/IC' */
  boolean_T u5_Mode_kl;                /* '<S385>/>1.5' */
  boolean_T IC_FirstOutputTime_lf;     /* '<S385>/IC' */
  boolean_T u5_Mode_kz;                /* '<S388>/>1.5' */
  boolean_T IC_FirstOutputTime_ae;     /* '<S388>/IC' */
  boolean_T u5_Mode_hm;                /* '<S391>/>1.5' */
  boolean_T IC_FirstOutputTime_mn;     /* '<S391>/IC' */
  boolean_T u5_Mode_h4;                /* '<S399>/>1.5' */
  boolean_T IC_FirstOutputTime_oe;     /* '<S399>/IC' */
  boolean_T u5_Mode_bp;                /* '<S402>/>1.5' */
  boolean_T IC_FirstOutputTime_nh;     /* '<S402>/IC' */
  boolean_T u5_Mode_ma;                /* '<S405>/>1.5' */
  boolean_T IC_FirstOutputTime_fn;     /* '<S405>/IC' */
  boolean_T u5_Mode_il1;               /* '<S413>/>1.5' */
  boolean_T IC_FirstOutputTime_dg;     /* '<S413>/IC' */
  boolean_T u5_Mode_bm;                /* '<S416>/>1.5' */
  boolean_T IC_FirstOutputTime_nv;     /* '<S416>/IC' */
  boolean_T u5_Mode_no;                /* '<S419>/>1.5' */
  boolean_T IC_FirstOutputTime_bs;     /* '<S419>/IC' */
  boolean_T u5_Mode_dr;                /* '<S427>/>1.5' */
  boolean_T IC_FirstOutputTime_kz;     /* '<S427>/IC' */
  boolean_T u5_Mode_p4;                /* '<S430>/>1.5' */
  boolean_T IC_FirstOutputTime_d4;     /* '<S430>/IC' */
  boolean_T u5_Mode_h0;                /* '<S433>/>1.5' */
  boolean_T IC_FirstOutputTime_e4;     /* '<S433>/IC' */
  boolean_T u5_Mode_mw;                /* '<S441>/>1.5' */
  boolean_T IC_FirstOutputTime_az;     /* '<S441>/IC' */
  boolean_T u5_Mode_px;                /* '<S444>/>1.5' */
  boolean_T IC_FirstOutputTime_py;     /* '<S444>/IC' */
  boolean_T u5_Mode_dn;                /* '<S447>/>1.5' */
  boolean_T IC_FirstOutputTime_ev;     /* '<S447>/IC' */
  boolean_T u5_Mode_b1;                /* '<S455>/>1.5' */
  boolean_T IC_FirstOutputTime_bj;     /* '<S455>/IC' */
  boolean_T u5_Mode_fq;                /* '<S458>/>1.5' */
  boolean_T IC_FirstOutputTime_c4;     /* '<S458>/IC' */
  boolean_T u5_Mode_ja;                /* '<S461>/>1.5' */
  boolean_T IC_FirstOutputTime_j0;     /* '<S461>/IC' */
} DW_twoarea_system_test_T;

/* Parameters (auto storage) */
struct P_twoarea_system_test_T_ {
  real_T ThreePhaseFault1_FaultA;      /* Mask Parameter: ThreePhaseFault1_FaultA
                                        * Referenced by: '<S59>/Constant1'
                                        */
  real_T ThreePhaseFault1_FaultB;      /* Mask Parameter: ThreePhaseFault1_FaultB
                                        * Referenced by: '<S59>/Constant2'
                                        */
  real_T ThreePhaseFault1_FaultC;      /* Mask Parameter: ThreePhaseFault1_FaultC
                                        * Referenced by: '<S59>/Constant3'
                                        */
  real_T G4_Frequency;                 /* Mask Parameter: G4_Frequency
                                        * Referenced by:
                                        *   '<S110>/Sine Wave A'
                                        *   '<S110>/Sine Wave B'
                                        *   '<S110>/Sine Wave C'
                                        */
  real_T G3_Frequency;                 /* Mask Parameter: G3_Frequency
                                        * Referenced by:
                                        *   '<S109>/Sine Wave A'
                                        *   '<S109>/Sine Wave B'
                                        *   '<S109>/Sine Wave C'
                                        */
  real_T G2_Frequency;                 /* Mask Parameter: G2_Frequency
                                        * Referenced by:
                                        *   '<S108>/Sine Wave A'
                                        *   '<S108>/Sine Wave B'
                                        *   '<S108>/Sine Wave C'
                                        */
  real_T G1_Frequency;                 /* Mask Parameter: G1_Frequency
                                        * Referenced by:
                                        *   '<S107>/Sine Wave A'
                                        *   '<S107>/Sine Wave B'
                                        *   '<S107>/Sine Wave C'
                                        */
  real_T PA1_BR_SwitchA;               /* Mask Parameter: PA1_BR_SwitchA
                                        * Referenced by: '<S39>/Constant1'
                                        */
  real_T PA2_BR_SwitchA;               /* Mask Parameter: PA2_BR_SwitchA
                                        * Referenced by: '<S40>/Constant1'
                                        */
  real_T PA3_BR_SwitchA;               /* Mask Parameter: PA3_BR_SwitchA
                                        * Referenced by: '<S41>/Constant1'
                                        */
  real_T PA3_BR10_SwitchA;             /* Mask Parameter: PA3_BR10_SwitchA
                                        * Referenced by: '<S42>/Constant1'
                                        */
  real_T PA3_BR11_SwitchA;             /* Mask Parameter: PA3_BR11_SwitchA
                                        * Referenced by: '<S43>/Constant1'
                                        */
  real_T PA3_BR12_SwitchA;             /* Mask Parameter: PA3_BR12_SwitchA
                                        * Referenced by: '<S44>/Constant1'
                                        */
  real_T PA3_BR13_SwitchA;             /* Mask Parameter: PA3_BR13_SwitchA
                                        * Referenced by: '<S45>/Constant1'
                                        */
  real_T PA3_BR14_SwitchA;             /* Mask Parameter: PA3_BR14_SwitchA
                                        * Referenced by: '<S46>/Constant1'
                                        */
  real_T PA3_BR15_SwitchA;             /* Mask Parameter: PA3_BR15_SwitchA
                                        * Referenced by: '<S47>/Constant1'
                                        */
  real_T PA3_BR16_SwitchA;             /* Mask Parameter: PA3_BR16_SwitchA
                                        * Referenced by: '<S48>/Constant1'
                                        */
  real_T PA3_BR17_SwitchA;             /* Mask Parameter: PA3_BR17_SwitchA
                                        * Referenced by: '<S49>/Constant1'
                                        */
  real_T PA3_BR18_SwitchA;             /* Mask Parameter: PA3_BR18_SwitchA
                                        * Referenced by: '<S50>/Constant1'
                                        */
  real_T PA3_BR19_SwitchA;             /* Mask Parameter: PA3_BR19_SwitchA
                                        * Referenced by: '<S51>/Constant1'
                                        */
  real_T PA3_BR4_SwitchA;              /* Mask Parameter: PA3_BR4_SwitchA
                                        * Referenced by: '<S52>/Constant1'
                                        */
  real_T PA3_BR5_SwitchA;              /* Mask Parameter: PA3_BR5_SwitchA
                                        * Referenced by: '<S53>/Constant1'
                                        */
  real_T PA3_BR6_SwitchA;              /* Mask Parameter: PA3_BR6_SwitchA
                                        * Referenced by: '<S54>/Constant1'
                                        */
  real_T PA3_BR7_SwitchA;              /* Mask Parameter: PA3_BR7_SwitchA
                                        * Referenced by: '<S55>/Constant1'
                                        */
  real_T PA3_BR8_SwitchA;              /* Mask Parameter: PA3_BR8_SwitchA
                                        * Referenced by: '<S56>/Constant1'
                                        */
  real_T PA3_BR9_SwitchA;              /* Mask Parameter: PA3_BR9_SwitchA
                                        * Referenced by: '<S57>/Constant1'
                                        */
  real_T PA4_BR_SwitchA;               /* Mask Parameter: PA4_BR_SwitchA
                                        * Referenced by: '<S58>/Constant1'
                                        */
  real_T PA1_BR_SwitchB;               /* Mask Parameter: PA1_BR_SwitchB
                                        * Referenced by: '<S39>/Constant2'
                                        */
  real_T PA2_BR_SwitchB;               /* Mask Parameter: PA2_BR_SwitchB
                                        * Referenced by: '<S40>/Constant2'
                                        */
  real_T PA3_BR_SwitchB;               /* Mask Parameter: PA3_BR_SwitchB
                                        * Referenced by: '<S41>/Constant2'
                                        */
  real_T PA3_BR10_SwitchB;             /* Mask Parameter: PA3_BR10_SwitchB
                                        * Referenced by: '<S42>/Constant2'
                                        */
  real_T PA3_BR11_SwitchB;             /* Mask Parameter: PA3_BR11_SwitchB
                                        * Referenced by: '<S43>/Constant2'
                                        */
  real_T PA3_BR12_SwitchB;             /* Mask Parameter: PA3_BR12_SwitchB
                                        * Referenced by: '<S44>/Constant2'
                                        */
  real_T PA3_BR13_SwitchB;             /* Mask Parameter: PA3_BR13_SwitchB
                                        * Referenced by: '<S45>/Constant2'
                                        */
  real_T PA3_BR14_SwitchB;             /* Mask Parameter: PA3_BR14_SwitchB
                                        * Referenced by: '<S46>/Constant2'
                                        */
  real_T PA3_BR15_SwitchB;             /* Mask Parameter: PA3_BR15_SwitchB
                                        * Referenced by: '<S47>/Constant2'
                                        */
  real_T PA3_BR16_SwitchB;             /* Mask Parameter: PA3_BR16_SwitchB
                                        * Referenced by: '<S48>/Constant2'
                                        */
  real_T PA3_BR17_SwitchB;             /* Mask Parameter: PA3_BR17_SwitchB
                                        * Referenced by: '<S49>/Constant2'
                                        */
  real_T PA3_BR18_SwitchB;             /* Mask Parameter: PA3_BR18_SwitchB
                                        * Referenced by: '<S50>/Constant2'
                                        */
  real_T PA3_BR19_SwitchB;             /* Mask Parameter: PA3_BR19_SwitchB
                                        * Referenced by: '<S51>/Constant2'
                                        */
  real_T PA3_BR4_SwitchB;              /* Mask Parameter: PA3_BR4_SwitchB
                                        * Referenced by: '<S52>/Constant2'
                                        */
  real_T PA3_BR5_SwitchB;              /* Mask Parameter: PA3_BR5_SwitchB
                                        * Referenced by: '<S53>/Constant2'
                                        */
  real_T PA3_BR6_SwitchB;              /* Mask Parameter: PA3_BR6_SwitchB
                                        * Referenced by: '<S54>/Constant2'
                                        */
  real_T PA3_BR7_SwitchB;              /* Mask Parameter: PA3_BR7_SwitchB
                                        * Referenced by: '<S55>/Constant2'
                                        */
  real_T PA3_BR8_SwitchB;              /* Mask Parameter: PA3_BR8_SwitchB
                                        * Referenced by: '<S56>/Constant2'
                                        */
  real_T PA3_BR9_SwitchB;              /* Mask Parameter: PA3_BR9_SwitchB
                                        * Referenced by: '<S57>/Constant2'
                                        */
  real_T PA4_BR_SwitchB;               /* Mask Parameter: PA4_BR_SwitchB
                                        * Referenced by: '<S58>/Constant2'
                                        */
  real_T PA1_BR_SwitchC;               /* Mask Parameter: PA1_BR_SwitchC
                                        * Referenced by: '<S39>/Constant3'
                                        */
  real_T PA2_BR_SwitchC;               /* Mask Parameter: PA2_BR_SwitchC
                                        * Referenced by: '<S40>/Constant3'
                                        */
  real_T PA3_BR_SwitchC;               /* Mask Parameter: PA3_BR_SwitchC
                                        * Referenced by: '<S41>/Constant3'
                                        */
  real_T PA3_BR10_SwitchC;             /* Mask Parameter: PA3_BR10_SwitchC
                                        * Referenced by: '<S42>/Constant3'
                                        */
  real_T PA3_BR11_SwitchC;             /* Mask Parameter: PA3_BR11_SwitchC
                                        * Referenced by: '<S43>/Constant3'
                                        */
  real_T PA3_BR12_SwitchC;             /* Mask Parameter: PA3_BR12_SwitchC
                                        * Referenced by: '<S44>/Constant3'
                                        */
  real_T PA3_BR13_SwitchC;             /* Mask Parameter: PA3_BR13_SwitchC
                                        * Referenced by: '<S45>/Constant3'
                                        */
  real_T PA3_BR14_SwitchC;             /* Mask Parameter: PA3_BR14_SwitchC
                                        * Referenced by: '<S46>/Constant3'
                                        */
  real_T PA3_BR15_SwitchC;             /* Mask Parameter: PA3_BR15_SwitchC
                                        * Referenced by: '<S47>/Constant3'
                                        */
  real_T PA3_BR16_SwitchC;             /* Mask Parameter: PA3_BR16_SwitchC
                                        * Referenced by: '<S48>/Constant3'
                                        */
  real_T PA3_BR17_SwitchC;             /* Mask Parameter: PA3_BR17_SwitchC
                                        * Referenced by: '<S49>/Constant3'
                                        */
  real_T PA3_BR18_SwitchC;             /* Mask Parameter: PA3_BR18_SwitchC
                                        * Referenced by: '<S50>/Constant3'
                                        */
  real_T PA3_BR19_SwitchC;             /* Mask Parameter: PA3_BR19_SwitchC
                                        * Referenced by: '<S51>/Constant3'
                                        */
  real_T PA3_BR4_SwitchC;              /* Mask Parameter: PA3_BR4_SwitchC
                                        * Referenced by: '<S52>/Constant3'
                                        */
  real_T PA3_BR5_SwitchC;              /* Mask Parameter: PA3_BR5_SwitchC
                                        * Referenced by: '<S53>/Constant3'
                                        */
  real_T PA3_BR6_SwitchC;              /* Mask Parameter: PA3_BR6_SwitchC
                                        * Referenced by: '<S54>/Constant3'
                                        */
  real_T PA3_BR7_SwitchC;              /* Mask Parameter: PA3_BR7_SwitchC
                                        * Referenced by: '<S55>/Constant3'
                                        */
  real_T PA3_BR8_SwitchC;              /* Mask Parameter: PA3_BR8_SwitchC
                                        * Referenced by: '<S56>/Constant3'
                                        */
  real_T PA3_BR9_SwitchC;              /* Mask Parameter: PA3_BR9_SwitchC
                                        * Referenced by: '<S57>/Constant3'
                                        */
  real_T PA4_BR_SwitchC;               /* Mask Parameter: PA4_BR_SwitchC
                                        * Referenced by: '<S58>/Constant3'
                                        */
  real_T com_Value;                    /* Expression: 1
                                        * Referenced by: '<S39>/com'
                                        */
  real_T Switch_Threshold;             /* Expression: 0.5
                                        * Referenced by: '<S39>/Switch'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<S39>/Switch1'
                                        */
  real_T Switch2_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<S39>/Switch2'
                                        */
  real_T com_Value_h;                  /* Expression: 1
                                        * Referenced by: '<S40>/com'
                                        */
  real_T Switch_Threshold_i;           /* Expression: 0.5
                                        * Referenced by: '<S40>/Switch'
                                        */
  real_T Switch1_Threshold_l;          /* Expression: 0.5
                                        * Referenced by: '<S40>/Switch1'
                                        */
  real_T Switch2_Threshold_g;          /* Expression: 0.5
                                        * Referenced by: '<S40>/Switch2'
                                        */
  real_T com_Value_d;                  /* Expression: 1
                                        * Referenced by: '<S41>/com'
                                        */
  real_T Switch_Threshold_h;           /* Expression: 0.5
                                        * Referenced by: '<S41>/Switch'
                                        */
  real_T Switch1_Threshold_g;          /* Expression: 0.5
                                        * Referenced by: '<S41>/Switch1'
                                        */
  real_T Switch2_Threshold_n;          /* Expression: 0.5
                                        * Referenced by: '<S41>/Switch2'
                                        */
  real_T com_Value_m;                  /* Expression: 1
                                        * Referenced by: '<S42>/com'
                                        */
  real_T Switch_Threshold_f;           /* Expression: 0.5
                                        * Referenced by: '<S42>/Switch'
                                        */
  real_T Switch1_Threshold_b;          /* Expression: 0.5
                                        * Referenced by: '<S42>/Switch1'
                                        */
  real_T Switch2_Threshold_p;          /* Expression: 0.5
                                        * Referenced by: '<S42>/Switch2'
                                        */
  real_T com_Value_j;                  /* Expression: 1
                                        * Referenced by: '<S43>/com'
                                        */
  real_T Switch_Threshold_n;           /* Expression: 0.5
                                        * Referenced by: '<S43>/Switch'
                                        */
  real_T Switch1_Threshold_p;          /* Expression: 0.5
                                        * Referenced by: '<S43>/Switch1'
                                        */
  real_T Switch2_Threshold_gd;         /* Expression: 0.5
                                        * Referenced by: '<S43>/Switch2'
                                        */
  real_T com_Value_n;                  /* Expression: 1
                                        * Referenced by: '<S44>/com'
                                        */
  real_T Switch_Threshold_a;           /* Expression: 0.5
                                        * Referenced by: '<S44>/Switch'
                                        */
  real_T Switch1_Threshold_f;          /* Expression: 0.5
                                        * Referenced by: '<S44>/Switch1'
                                        */
  real_T Switch2_Threshold_c;          /* Expression: 0.5
                                        * Referenced by: '<S44>/Switch2'
                                        */
  real_T com_Value_a;                  /* Expression: 1
                                        * Referenced by: '<S45>/com'
                                        */
  real_T Switch_Threshold_e;           /* Expression: 0.5
                                        * Referenced by: '<S45>/Switch'
                                        */
  real_T Switch1_Threshold_p3;         /* Expression: 0.5
                                        * Referenced by: '<S45>/Switch1'
                                        */
  real_T Switch2_Threshold_gp;         /* Expression: 0.5
                                        * Referenced by: '<S45>/Switch2'
                                        */
  real_T com_Value_b;                  /* Expression: 1
                                        * Referenced by: '<S46>/com'
                                        */
  real_T Switch_Threshold_eg;          /* Expression: 0.5
                                        * Referenced by: '<S46>/Switch'
                                        */
  real_T Switch1_Threshold_a;          /* Expression: 0.5
                                        * Referenced by: '<S46>/Switch1'
                                        */
  real_T Switch2_Threshold_k;          /* Expression: 0.5
                                        * Referenced by: '<S46>/Switch2'
                                        */
  real_T com_Value_md;                 /* Expression: 1
                                        * Referenced by: '<S47>/com'
                                        */
  real_T Switch_Threshold_m;           /* Expression: 0.5
                                        * Referenced by: '<S47>/Switch'
                                        */
  real_T Switch1_Threshold_b1;         /* Expression: 0.5
                                        * Referenced by: '<S47>/Switch1'
                                        */
  real_T Switch2_Threshold_a;          /* Expression: 0.5
                                        * Referenced by: '<S47>/Switch2'
                                        */
  real_T com_Value_e;                  /* Expression: 1
                                        * Referenced by: '<S48>/com'
                                        */
  real_T Switch_Threshold_k;           /* Expression: 0.5
                                        * Referenced by: '<S48>/Switch'
                                        */
  real_T Switch1_Threshold_lv;         /* Expression: 0.5
                                        * Referenced by: '<S48>/Switch1'
                                        */
  real_T Switch2_Threshold_m;          /* Expression: 0.5
                                        * Referenced by: '<S48>/Switch2'
                                        */
  real_T com_Value_at;                 /* Expression: 1
                                        * Referenced by: '<S49>/com'
                                        */
  real_T Switch_Threshold_c;           /* Expression: 0.5
                                        * Referenced by: '<S49>/Switch'
                                        */
  real_T Switch1_Threshold_lj;         /* Expression: 0.5
                                        * Referenced by: '<S49>/Switch1'
                                        */
  real_T Switch2_Threshold_gq;         /* Expression: 0.5
                                        * Referenced by: '<S49>/Switch2'
                                        */
  real_T com_Value_dl;                 /* Expression: 1
                                        * Referenced by: '<S50>/com'
                                        */
  real_T Switch_Threshold_ef;          /* Expression: 0.5
                                        * Referenced by: '<S50>/Switch'
                                        */
  real_T Switch1_Threshold_e;          /* Expression: 0.5
                                        * Referenced by: '<S50>/Switch1'
                                        */
  real_T Switch2_Threshold_o;          /* Expression: 0.5
                                        * Referenced by: '<S50>/Switch2'
                                        */
  real_T com_Value_o;                  /* Expression: 1
                                        * Referenced by: '<S51>/com'
                                        */
  real_T Switch_Threshold_l;           /* Expression: 0.5
                                        * Referenced by: '<S51>/Switch'
                                        */
  real_T Switch1_Threshold_n;          /* Expression: 0.5
                                        * Referenced by: '<S51>/Switch1'
                                        */
  real_T Switch2_Threshold_n5;         /* Expression: 0.5
                                        * Referenced by: '<S51>/Switch2'
                                        */
  real_T com_Value_c;                  /* Expression: 1
                                        * Referenced by: '<S52>/com'
                                        */
  real_T Switch_Threshold_en;          /* Expression: 0.5
                                        * Referenced by: '<S52>/Switch'
                                        */
  real_T Switch1_Threshold_ga;         /* Expression: 0.5
                                        * Referenced by: '<S52>/Switch1'
                                        */
  real_T Switch2_Threshold_j;          /* Expression: 0.5
                                        * Referenced by: '<S52>/Switch2'
                                        */
  real_T com_Value_i;                  /* Expression: 1
                                        * Referenced by: '<S53>/com'
                                        */
  real_T Switch_Threshold_c2;          /* Expression: 0.5
                                        * Referenced by: '<S53>/Switch'
                                        */
  real_T Switch1_Threshold_j;          /* Expression: 0.5
                                        * Referenced by: '<S53>/Switch1'
                                        */
  real_T Switch2_Threshold_f;          /* Expression: 0.5
                                        * Referenced by: '<S53>/Switch2'
                                        */
  real_T com_Value_k;                  /* Expression: 1
                                        * Referenced by: '<S54>/com'
                                        */
  real_T Switch_Threshold_nf;          /* Expression: 0.5
                                        * Referenced by: '<S54>/Switch'
                                        */
  real_T Switch1_Threshold_po;         /* Expression: 0.5
                                        * Referenced by: '<S54>/Switch1'
                                        */
  real_T Switch2_Threshold_me;         /* Expression: 0.5
                                        * Referenced by: '<S54>/Switch2'
                                        */
  real_T com_Value_ib;                 /* Expression: 1
                                        * Referenced by: '<S55>/com'
                                        */
  real_T Switch_Threshold_p;           /* Expression: 0.5
                                        * Referenced by: '<S55>/Switch'
                                        */
  real_T Switch1_Threshold_d;          /* Expression: 0.5
                                        * Referenced by: '<S55>/Switch1'
                                        */
  real_T Switch2_Threshold_kj;         /* Expression: 0.5
                                        * Referenced by: '<S55>/Switch2'
                                        */
  real_T com_Value_l;                  /* Expression: 1
                                        * Referenced by: '<S56>/com'
                                        */
  real_T Switch_Threshold_j;           /* Expression: 0.5
                                        * Referenced by: '<S56>/Switch'
                                        */
  real_T Switch1_Threshold_lu;         /* Expression: 0.5
                                        * Referenced by: '<S56>/Switch1'
                                        */
  real_T Switch2_Threshold_nn;         /* Expression: 0.5
                                        * Referenced by: '<S56>/Switch2'
                                        */
  real_T com_Value_j0;                 /* Expression: 1
                                        * Referenced by: '<S57>/com'
                                        */
  real_T Switch_Threshold_ei;          /* Expression: 0.5
                                        * Referenced by: '<S57>/Switch'
                                        */
  real_T Switch1_Threshold_i;          /* Expression: 0.5
                                        * Referenced by: '<S57>/Switch1'
                                        */
  real_T Switch2_Threshold_l;          /* Expression: 0.5
                                        * Referenced by: '<S57>/Switch2'
                                        */
  real_T com_Value_ev;                 /* Expression: 1
                                        * Referenced by: '<S58>/com'
                                        */
  real_T Switch_Threshold_b;           /* Expression: 0.5
                                        * Referenced by: '<S58>/Switch'
                                        */
  real_T Switch1_Threshold_fc;         /* Expression: 0.5
                                        * Referenced by: '<S58>/Switch1'
                                        */
  real_T Switch2_Threshold_aa;         /* Expression: 0.5
                                        * Referenced by: '<S58>/Switch2'
                                        */
  real_T com_Value_hq;                 /* Expression: 1
                                        * Referenced by: '<S59>/com'
                                        */
  real_T SwitchCurrents_Value[63];     /* Expression: zeros(63,1)
                                        * Referenced by: '<S467>/SwitchCurrents'
                                        */
  real_T SineWaveA_Amp;                /* Expression: Amplitude
                                        * Referenced by: '<S110>/Sine Wave A'
                                        */
  real_T SineWaveA_Bias;               /* Expression: 0
                                        * Referenced by: '<S110>/Sine Wave A'
                                        */
  real_T SineWaveA_Hsin;               /* Computed Parameter: SineWaveA_Hsin
                                        * Referenced by: '<S110>/Sine Wave A'
                                        */
  real_T SineWaveA_HCos;               /* Computed Parameter: SineWaveA_HCos
                                        * Referenced by: '<S110>/Sine Wave A'
                                        */
  real_T SineWaveA_PSin;               /* Computed Parameter: SineWaveA_PSin
                                        * Referenced by: '<S110>/Sine Wave A'
                                        */
  real_T SineWaveA_PCos;               /* Computed Parameter: SineWaveA_PCos
                                        * Referenced by: '<S110>/Sine Wave A'
                                        */
  real_T SineWaveB_Amp;                /* Expression: Amplitude
                                        * Referenced by: '<S110>/Sine Wave B'
                                        */
  real_T SineWaveB_Bias;               /* Expression: 0
                                        * Referenced by: '<S110>/Sine Wave B'
                                        */
  real_T SineWaveB_Hsin;               /* Computed Parameter: SineWaveB_Hsin
                                        * Referenced by: '<S110>/Sine Wave B'
                                        */
  real_T SineWaveB_HCos;               /* Computed Parameter: SineWaveB_HCos
                                        * Referenced by: '<S110>/Sine Wave B'
                                        */
  real_T SineWaveB_PSin;               /* Computed Parameter: SineWaveB_PSin
                                        * Referenced by: '<S110>/Sine Wave B'
                                        */
  real_T SineWaveB_PCos;               /* Computed Parameter: SineWaveB_PCos
                                        * Referenced by: '<S110>/Sine Wave B'
                                        */
  real_T SineWaveC_Amp;                /* Expression: Amplitude
                                        * Referenced by: '<S110>/Sine Wave C'
                                        */
  real_T SineWaveC_Bias;               /* Expression: 0
                                        * Referenced by: '<S110>/Sine Wave C'
                                        */
  real_T SineWaveC_Hsin;               /* Computed Parameter: SineWaveC_Hsin
                                        * Referenced by: '<S110>/Sine Wave C'
                                        */
  real_T SineWaveC_HCos;               /* Computed Parameter: SineWaveC_HCos
                                        * Referenced by: '<S110>/Sine Wave C'
                                        */
  real_T SineWaveC_PSin;               /* Computed Parameter: SineWaveC_PSin
                                        * Referenced by: '<S110>/Sine Wave C'
                                        */
  real_T SineWaveC_PCos;               /* Computed Parameter: SineWaveC_PCos
                                        * Referenced by: '<S110>/Sine Wave C'
                                        */
  real_T SineWaveA_Amp_k;              /* Expression: Amplitude
                                        * Referenced by: '<S109>/Sine Wave A'
                                        */
  real_T SineWaveA_Bias_f;             /* Expression: 0
                                        * Referenced by: '<S109>/Sine Wave A'
                                        */
  real_T SineWaveA_Hsin_n;             /* Computed Parameter: SineWaveA_Hsin_n
                                        * Referenced by: '<S109>/Sine Wave A'
                                        */
  real_T SineWaveA_HCos_o;             /* Computed Parameter: SineWaveA_HCos_o
                                        * Referenced by: '<S109>/Sine Wave A'
                                        */
  real_T SineWaveA_PSin_j;             /* Computed Parameter: SineWaveA_PSin_j
                                        * Referenced by: '<S109>/Sine Wave A'
                                        */
  real_T SineWaveA_PCos_c;             /* Computed Parameter: SineWaveA_PCos_c
                                        * Referenced by: '<S109>/Sine Wave A'
                                        */
  real_T SineWaveB_Amp_o;              /* Expression: Amplitude
                                        * Referenced by: '<S109>/Sine Wave B'
                                        */
  real_T SineWaveB_Bias_l;             /* Expression: 0
                                        * Referenced by: '<S109>/Sine Wave B'
                                        */
  real_T SineWaveB_Hsin_b;             /* Computed Parameter: SineWaveB_Hsin_b
                                        * Referenced by: '<S109>/Sine Wave B'
                                        */
  real_T SineWaveB_HCos_e;             /* Computed Parameter: SineWaveB_HCos_e
                                        * Referenced by: '<S109>/Sine Wave B'
                                        */
  real_T SineWaveB_PSin_i;             /* Computed Parameter: SineWaveB_PSin_i
                                        * Referenced by: '<S109>/Sine Wave B'
                                        */
  real_T SineWaveB_PCos_a;             /* Computed Parameter: SineWaveB_PCos_a
                                        * Referenced by: '<S109>/Sine Wave B'
                                        */
  real_T SineWaveC_Amp_m;              /* Expression: Amplitude
                                        * Referenced by: '<S109>/Sine Wave C'
                                        */
  real_T SineWaveC_Bias_a;             /* Expression: 0
                                        * Referenced by: '<S109>/Sine Wave C'
                                        */
  real_T SineWaveC_Hsin_a;             /* Computed Parameter: SineWaveC_Hsin_a
                                        * Referenced by: '<S109>/Sine Wave C'
                                        */
  real_T SineWaveC_HCos_h;             /* Computed Parameter: SineWaveC_HCos_h
                                        * Referenced by: '<S109>/Sine Wave C'
                                        */
  real_T SineWaveC_PSin_k;             /* Computed Parameter: SineWaveC_PSin_k
                                        * Referenced by: '<S109>/Sine Wave C'
                                        */
  real_T SineWaveC_PCos_e;             /* Computed Parameter: SineWaveC_PCos_e
                                        * Referenced by: '<S109>/Sine Wave C'
                                        */
  real_T SineWaveA_Amp_a;              /* Expression: Amplitude
                                        * Referenced by: '<S108>/Sine Wave A'
                                        */
  real_T SineWaveA_Bias_e;             /* Expression: 0
                                        * Referenced by: '<S108>/Sine Wave A'
                                        */
  real_T SineWaveA_Hsin_l;             /* Computed Parameter: SineWaveA_Hsin_l
                                        * Referenced by: '<S108>/Sine Wave A'
                                        */
  real_T SineWaveA_HCos_b;             /* Computed Parameter: SineWaveA_HCos_b
                                        * Referenced by: '<S108>/Sine Wave A'
                                        */
  real_T SineWaveA_PSin_o;             /* Computed Parameter: SineWaveA_PSin_o
                                        * Referenced by: '<S108>/Sine Wave A'
                                        */
  real_T SineWaveA_PCos_f;             /* Computed Parameter: SineWaveA_PCos_f
                                        * Referenced by: '<S108>/Sine Wave A'
                                        */
  real_T SineWaveB_Amp_i;              /* Expression: Amplitude
                                        * Referenced by: '<S108>/Sine Wave B'
                                        */
  real_T SineWaveB_Bias_j;             /* Expression: 0
                                        * Referenced by: '<S108>/Sine Wave B'
                                        */
  real_T SineWaveB_Hsin_e;             /* Computed Parameter: SineWaveB_Hsin_e
                                        * Referenced by: '<S108>/Sine Wave B'
                                        */
  real_T SineWaveB_HCos_m;             /* Computed Parameter: SineWaveB_HCos_m
                                        * Referenced by: '<S108>/Sine Wave B'
                                        */
  real_T SineWaveB_PSin_j;             /* Computed Parameter: SineWaveB_PSin_j
                                        * Referenced by: '<S108>/Sine Wave B'
                                        */
  real_T SineWaveB_PCos_j;             /* Computed Parameter: SineWaveB_PCos_j
                                        * Referenced by: '<S108>/Sine Wave B'
                                        */
  real_T SineWaveC_Amp_n;              /* Expression: Amplitude
                                        * Referenced by: '<S108>/Sine Wave C'
                                        */
  real_T SineWaveC_Bias_j;             /* Expression: 0
                                        * Referenced by: '<S108>/Sine Wave C'
                                        */
  real_T SineWaveC_Hsin_m;             /* Computed Parameter: SineWaveC_Hsin_m
                                        * Referenced by: '<S108>/Sine Wave C'
                                        */
  real_T SineWaveC_HCos_p;             /* Computed Parameter: SineWaveC_HCos_p
                                        * Referenced by: '<S108>/Sine Wave C'
                                        */
  real_T SineWaveC_PSin_m;             /* Computed Parameter: SineWaveC_PSin_m
                                        * Referenced by: '<S108>/Sine Wave C'
                                        */
  real_T SineWaveC_PCos_p;             /* Computed Parameter: SineWaveC_PCos_p
                                        * Referenced by: '<S108>/Sine Wave C'
                                        */
  real_T SineWaveA_Amp_c;              /* Expression: Amplitude
                                        * Referenced by: '<S107>/Sine Wave A'
                                        */
  real_T SineWaveA_Bias_i;             /* Expression: 0
                                        * Referenced by: '<S107>/Sine Wave A'
                                        */
  real_T SineWaveA_Hsin_j;             /* Computed Parameter: SineWaveA_Hsin_j
                                        * Referenced by: '<S107>/Sine Wave A'
                                        */
  real_T SineWaveA_HCos_e;             /* Computed Parameter: SineWaveA_HCos_e
                                        * Referenced by: '<S107>/Sine Wave A'
                                        */
  real_T SineWaveA_PSin_i;             /* Computed Parameter: SineWaveA_PSin_i
                                        * Referenced by: '<S107>/Sine Wave A'
                                        */
  real_T SineWaveA_PCos_e;             /* Computed Parameter: SineWaveA_PCos_e
                                        * Referenced by: '<S107>/Sine Wave A'
                                        */
  real_T SineWaveB_Amp_k;              /* Expression: Amplitude
                                        * Referenced by: '<S107>/Sine Wave B'
                                        */
  real_T SineWaveB_Bias_p;             /* Expression: 0
                                        * Referenced by: '<S107>/Sine Wave B'
                                        */
  real_T SineWaveB_Hsin_g;             /* Computed Parameter: SineWaveB_Hsin_g
                                        * Referenced by: '<S107>/Sine Wave B'
                                        */
  real_T SineWaveB_HCos_k;             /* Computed Parameter: SineWaveB_HCos_k
                                        * Referenced by: '<S107>/Sine Wave B'
                                        */
  real_T SineWaveB_PSin_g;             /* Computed Parameter: SineWaveB_PSin_g
                                        * Referenced by: '<S107>/Sine Wave B'
                                        */
  real_T SineWaveB_PCos_d;             /* Computed Parameter: SineWaveB_PCos_d
                                        * Referenced by: '<S107>/Sine Wave B'
                                        */
  real_T SineWaveC_Amp_l;              /* Expression: Amplitude
                                        * Referenced by: '<S107>/Sine Wave C'
                                        */
  real_T SineWaveC_Bias_m;             /* Expression: 0
                                        * Referenced by: '<S107>/Sine Wave C'
                                        */
  real_T SineWaveC_Hsin_k;             /* Computed Parameter: SineWaveC_Hsin_k
                                        * Referenced by: '<S107>/Sine Wave C'
                                        */
  real_T SineWaveC_HCos_a;             /* Computed Parameter: SineWaveC_HCos_a
                                        * Referenced by: '<S107>/Sine Wave C'
                                        */
  real_T SineWaveC_PSin_g;             /* Computed Parameter: SineWaveC_PSin_g
                                        * Referenced by: '<S107>/Sine Wave C'
                                        */
  real_T SineWaveC_PCos_n;             /* Computed Parameter: SineWaveC_PCos_n
                                        * Referenced by: '<S107>/Sine Wave C'
                                        */
  real_T u_Value;                      /* Expression: 0
                                        * Referenced by: '<S175>/0 1'
                                        */
  real_T Gain_Gain;                    /* Expression: 2
                                        * Referenced by: '<S175>/Gain'
                                        */
  real_T DelayTs_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<S175>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_b;   /* Expression: 0
                                        * Referenced by: '<S175>/Delay Ts '
                                        */
  real_T C4_Value;                     /* Expression: External
                                        * Referenced by: '<S39>/C4'
                                        */
  real_T LookUpTable_XData[4];         /* Expression: sps.tv
                                        * Referenced by: '<S184>/Look-Up Table'
                                        */
  real_T LookUpTable_YData[4];         /* Expression: sps.opv
                                        * Referenced by: '<S184>/Look-Up Table'
                                        */
  real_T Switch3_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<S39>/Switch3'
                                        */
  real_T Constant5_Value;              /* Expression: InitialState
                                        * Referenced by: '<S39>/Constant5'
                                        */
  real_T C4_Value_b;                   /* Expression: BR.com
                                        * Referenced by: '<S175>/C4'
                                        */
  real_T LookUpTable_XData_i[4];       /* Expression: sps.tv
                                        * Referenced by: '<S177>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_o[4];       /* Expression: sps.opv
                                        * Referenced by: '<S177>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_m;          /* Expression: 0.5
                                        * Referenced by: '<S175>/Switch3'
                                        */
  real_T u5_OnVal;                     /* Expression: 1.5
                                        * Referenced by: '<S175>/>1.5'
                                        */
  real_T u5_OffVal;                    /* Expression: 0
                                        * Referenced by: '<S175>/>1.5'
                                        */
  real_T u5_YOn;                       /* Expression: 1
                                        * Referenced by: '<S175>/>1.5'
                                        */
  real_T u5_YOff;                      /* Expression: 0
                                        * Referenced by: '<S175>/>1.5'
                                        */
  real_T IC_Value;                     /* Expression: double(InitialState)
                                        * Referenced by: '<S175>/IC'
                                        */
  real_T u_Value_n;                    /* Expression: 0
                                        * Referenced by: '<S178>/0 1'
                                        */
  real_T Gain_Gain_o;                  /* Expression: 2
                                        * Referenced by: '<S178>/Gain'
                                        */
  real_T DelayTs_InitialCondition_l;   /* Expression: 0
                                        * Referenced by: '<S178>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_j;   /* Expression: 0
                                        * Referenced by: '<S178>/Delay Ts '
                                        */
  real_T C4_Value_n;                   /* Expression: BR.com
                                        * Referenced by: '<S178>/C4'
                                        */
  real_T LookUpTable_XData_n[4];       /* Expression: sps.tv
                                        * Referenced by: '<S180>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_l[4];       /* Expression: sps.opv
                                        * Referenced by: '<S180>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_p;          /* Expression: 0.5
                                        * Referenced by: '<S178>/Switch3'
                                        */
  real_T u5_OnVal_h;                   /* Expression: 1.5
                                        * Referenced by: '<S178>/>1.5'
                                        */
  real_T u5_OffVal_n;                  /* Expression: 0
                                        * Referenced by: '<S178>/>1.5'
                                        */
  real_T u5_YOn_j;                     /* Expression: 1
                                        * Referenced by: '<S178>/>1.5'
                                        */
  real_T u5_YOff_d;                    /* Expression: 0
                                        * Referenced by: '<S178>/>1.5'
                                        */
  real_T IC_Value_j;                   /* Expression: double(InitialState)
                                        * Referenced by: '<S178>/IC'
                                        */
  real_T u_Value_f;                    /* Expression: 0
                                        * Referenced by: '<S181>/0 1'
                                        */
  real_T Gain_Gain_e;                  /* Expression: 2
                                        * Referenced by: '<S181>/Gain'
                                        */
  real_T DelayTs_InitialCondition_c;   /* Expression: 0
                                        * Referenced by: '<S181>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_i;   /* Expression: 0
                                        * Referenced by: '<S181>/Delay Ts '
                                        */
  real_T C4_Value_i;                   /* Expression: BR.com
                                        * Referenced by: '<S181>/C4'
                                        */
  real_T LookUpTable_XData_j[4];       /* Expression: sps.tv
                                        * Referenced by: '<S183>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_k[4];       /* Expression: sps.opv
                                        * Referenced by: '<S183>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_pq;         /* Expression: 0.5
                                        * Referenced by: '<S181>/Switch3'
                                        */
  real_T u5_OnVal_i;                   /* Expression: 1.5
                                        * Referenced by: '<S181>/>1.5'
                                        */
  real_T u5_OffVal_d;                  /* Expression: 0
                                        * Referenced by: '<S181>/>1.5'
                                        */
  real_T u5_YOn_m;                     /* Expression: 1
                                        * Referenced by: '<S181>/>1.5'
                                        */
  real_T u5_YOff_p;                    /* Expression: 0
                                        * Referenced by: '<S181>/>1.5'
                                        */
  real_T IC_Value_e;                   /* Expression: double(InitialState)
                                        * Referenced by: '<S181>/IC'
                                        */
  real_T u_Value_fx;                   /* Expression: 0
                                        * Referenced by: '<S189>/0 1'
                                        */
  real_T Gain_Gain_b;                  /* Expression: 2
                                        * Referenced by: '<S189>/Gain'
                                        */
  real_T DelayTs_InitialCondition_jq;  /* Expression: 0
                                        * Referenced by: '<S189>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_d;   /* Expression: 0
                                        * Referenced by: '<S189>/Delay Ts '
                                        */
  real_T C4_Value_f;                   /* Expression: External
                                        * Referenced by: '<S40>/C4'
                                        */
  real_T LookUpTable_XData_k[4];       /* Expression: sps.tv
                                        * Referenced by: '<S198>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_c[4];       /* Expression: sps.opv
                                        * Referenced by: '<S198>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_n;          /* Expression: 0.5
                                        * Referenced by: '<S40>/Switch3'
                                        */
  real_T Constant5_Value_d;            /* Expression: InitialState
                                        * Referenced by: '<S40>/Constant5'
                                        */
  real_T C4_Value_fi;                  /* Expression: BR.com
                                        * Referenced by: '<S189>/C4'
                                        */
  real_T LookUpTable_XData_m[4];       /* Expression: sps.tv
                                        * Referenced by: '<S191>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_cd[4];      /* Expression: sps.opv
                                        * Referenced by: '<S191>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_a;          /* Expression: 0.5
                                        * Referenced by: '<S189>/Switch3'
                                        */
  real_T u5_OnVal_a;                   /* Expression: 1.5
                                        * Referenced by: '<S189>/>1.5'
                                        */
  real_T u5_OffVal_c;                  /* Expression: 0
                                        * Referenced by: '<S189>/>1.5'
                                        */
  real_T u5_YOn_a;                     /* Expression: 1
                                        * Referenced by: '<S189>/>1.5'
                                        */
  real_T u5_YOff_n;                    /* Expression: 0
                                        * Referenced by: '<S189>/>1.5'
                                        */
  real_T IC_Value_d;                   /* Expression: double(InitialState)
                                        * Referenced by: '<S189>/IC'
                                        */
  real_T u_Value_l;                    /* Expression: 0
                                        * Referenced by: '<S192>/0 1'
                                        */
  real_T Gain_Gain_f;                  /* Expression: 2
                                        * Referenced by: '<S192>/Gain'
                                        */
  real_T DelayTs_InitialCondition_p;   /* Expression: 0
                                        * Referenced by: '<S192>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_cu;  /* Expression: 0
                                        * Referenced by: '<S192>/Delay Ts '
                                        */
  real_T C4_Value_d;                   /* Expression: BR.com
                                        * Referenced by: '<S192>/C4'
                                        */
  real_T LookUpTable_XData_mx[4];      /* Expression: sps.tv
                                        * Referenced by: '<S194>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_d[4];       /* Expression: sps.opv
                                        * Referenced by: '<S194>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_m2;         /* Expression: 0.5
                                        * Referenced by: '<S192>/Switch3'
                                        */
  real_T u5_OnVal_b;                   /* Expression: 1.5
                                        * Referenced by: '<S192>/>1.5'
                                        */
  real_T u5_OffVal_h;                  /* Expression: 0
                                        * Referenced by: '<S192>/>1.5'
                                        */
  real_T u5_YOn_l;                     /* Expression: 1
                                        * Referenced by: '<S192>/>1.5'
                                        */
  real_T u5_YOff_l;                    /* Expression: 0
                                        * Referenced by: '<S192>/>1.5'
                                        */
  real_T IC_Value_o;                   /* Expression: double(InitialState)
                                        * Referenced by: '<S192>/IC'
                                        */
  real_T u_Value_h;                    /* Expression: 0
                                        * Referenced by: '<S195>/0 1'
                                        */
  real_T Gain_Gain_p;                  /* Expression: 2
                                        * Referenced by: '<S195>/Gain'
                                        */
  real_T DelayTs_InitialCondition_la;  /* Expression: 0
                                        * Referenced by: '<S195>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_m;   /* Expression: 0
                                        * Referenced by: '<S195>/Delay Ts '
                                        */
  real_T C4_Value_l;                   /* Expression: BR.com
                                        * Referenced by: '<S195>/C4'
                                        */
  real_T LookUpTable_XData_jf[4];      /* Expression: sps.tv
                                        * Referenced by: '<S197>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_cu[4];      /* Expression: sps.opv
                                        * Referenced by: '<S197>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_i;          /* Expression: 0.5
                                        * Referenced by: '<S195>/Switch3'
                                        */
  real_T u5_OnVal_g;                   /* Expression: 1.5
                                        * Referenced by: '<S195>/>1.5'
                                        */
  real_T u5_OffVal_cc;                 /* Expression: 0
                                        * Referenced by: '<S195>/>1.5'
                                        */
  real_T u5_YOn_e;                     /* Expression: 1
                                        * Referenced by: '<S195>/>1.5'
                                        */
  real_T u5_YOff_h;                    /* Expression: 0
                                        * Referenced by: '<S195>/>1.5'
                                        */
  real_T IC_Value_jy;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S195>/IC'
                                        */
  real_T u_Value_e;                    /* Expression: 0
                                        * Referenced by: '<S203>/0 1'
                                        */
  real_T Gain_Gain_i;                  /* Expression: 2
                                        * Referenced by: '<S203>/Gain'
                                        */
  real_T DelayTs_InitialCondition_mz;  /* Expression: 0
                                        * Referenced by: '<S203>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_h;   /* Expression: 0
                                        * Referenced by: '<S203>/Delay Ts '
                                        */
  real_T C4_Value_nl;                  /* Expression: External
                                        * Referenced by: '<S41>/C4'
                                        */
  real_T LookUpTable_XData_g[4];       /* Expression: sps.tv
                                        * Referenced by: '<S212>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_kx[4];      /* Expression: sps.opv
                                        * Referenced by: '<S212>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_l;          /* Expression: 0.5
                                        * Referenced by: '<S41>/Switch3'
                                        */
  real_T Constant5_Value_g;            /* Expression: InitialState
                                        * Referenced by: '<S41>/Constant5'
                                        */
  real_T C4_Value_nm;                  /* Expression: BR.com
                                        * Referenced by: '<S203>/C4'
                                        */
  real_T LookUpTable_XData_ku[4];      /* Expression: sps.tv
                                        * Referenced by: '<S205>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_j[4];       /* Expression: sps.opv
                                        * Referenced by: '<S205>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_h;          /* Expression: 0.5
                                        * Referenced by: '<S203>/Switch3'
                                        */
  real_T u5_OnVal_e;                   /* Expression: 1.5
                                        * Referenced by: '<S203>/>1.5'
                                        */
  real_T u5_OffVal_df;                 /* Expression: 0
                                        * Referenced by: '<S203>/>1.5'
                                        */
  real_T u5_YOn_j3;                    /* Expression: 1
                                        * Referenced by: '<S203>/>1.5'
                                        */
  real_T u5_YOff_k;                    /* Expression: 0
                                        * Referenced by: '<S203>/>1.5'
                                        */
  real_T IC_Value_ex;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S203>/IC'
                                        */
  real_T u_Value_m;                    /* Expression: 0
                                        * Referenced by: '<S206>/0 1'
                                        */
  real_T Gain_Gain_i0;                 /* Expression: 2
                                        * Referenced by: '<S206>/Gain'
                                        */
  real_T DelayTs_InitialCondition_k;   /* Expression: 0
                                        * Referenced by: '<S206>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_dw;  /* Expression: 0
                                        * Referenced by: '<S206>/Delay Ts '
                                        */
  real_T C4_Value_o;                   /* Expression: BR.com
                                        * Referenced by: '<S206>/C4'
                                        */
  real_T LookUpTable_XData_o[4];       /* Expression: sps.tv
                                        * Referenced by: '<S208>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_h[4];       /* Expression: sps.opv
                                        * Referenced by: '<S208>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_d;          /* Expression: 0.5
                                        * Referenced by: '<S206>/Switch3'
                                        */
  real_T u5_OnVal_f;                   /* Expression: 1.5
                                        * Referenced by: '<S206>/>1.5'
                                        */
  real_T u5_OffVal_p;                  /* Expression: 0
                                        * Referenced by: '<S206>/>1.5'
                                        */
  real_T u5_YOn_o;                     /* Expression: 1
                                        * Referenced by: '<S206>/>1.5'
                                        */
  real_T u5_YOff_lv;                   /* Expression: 0
                                        * Referenced by: '<S206>/>1.5'
                                        */
  real_T IC_Value_m;                   /* Expression: double(InitialState)
                                        * Referenced by: '<S206>/IC'
                                        */
  real_T u_Value_lm;                   /* Expression: 0
                                        * Referenced by: '<S209>/0 1'
                                        */
  real_T Gain_Gain_iz;                 /* Expression: 2
                                        * Referenced by: '<S209>/Gain'
                                        */
  real_T DelayTs_InitialCondition_g;   /* Expression: 0
                                        * Referenced by: '<S209>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_e;   /* Expression: 0
                                        * Referenced by: '<S209>/Delay Ts '
                                        */
  real_T C4_Value_a;                   /* Expression: BR.com
                                        * Referenced by: '<S209>/C4'
                                        */
  real_T LookUpTable_XData_d[4];       /* Expression: sps.tv
                                        * Referenced by: '<S211>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_g[4];       /* Expression: sps.opv
                                        * Referenced by: '<S211>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_o;          /* Expression: 0.5
                                        * Referenced by: '<S209>/Switch3'
                                        */
  real_T u5_OnVal_k;                   /* Expression: 1.5
                                        * Referenced by: '<S209>/>1.5'
                                        */
  real_T u5_OffVal_cd;                 /* Expression: 0
                                        * Referenced by: '<S209>/>1.5'
                                        */
  real_T u5_YOn_er;                    /* Expression: 1
                                        * Referenced by: '<S209>/>1.5'
                                        */
  real_T u5_YOff_c;                    /* Expression: 0
                                        * Referenced by: '<S209>/>1.5'
                                        */
  real_T IC_Value_p;                   /* Expression: double(InitialState)
                                        * Referenced by: '<S209>/IC'
                                        */
  real_T u_Value_p;                    /* Expression: 0
                                        * Referenced by: '<S217>/0 1'
                                        */
  real_T Gain_Gain_ij;                 /* Expression: 2
                                        * Referenced by: '<S217>/Gain'
                                        */
  real_T DelayTs_InitialCondition_pt;  /* Expression: 0
                                        * Referenced by: '<S217>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_f;   /* Expression: 0
                                        * Referenced by: '<S217>/Delay Ts '
                                        */
  real_T C4_Value_i5;                  /* Expression: External
                                        * Referenced by: '<S42>/C4'
                                        */
  real_T LookUpTable_XData_df[4];      /* Expression: sps.tv
                                        * Referenced by: '<S226>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_du[4];      /* Expression: sps.opv
                                        * Referenced by: '<S226>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_j;          /* Expression: 0.5
                                        * Referenced by: '<S42>/Switch3'
                                        */
  real_T Constant5_Value_l;            /* Expression: InitialState
                                        * Referenced by: '<S42>/Constant5'
                                        */
  real_T C4_Value_j;                   /* Expression: BR.com
                                        * Referenced by: '<S217>/C4'
                                        */
  real_T LookUpTable_XData_p[4];       /* Expression: sps.tv
                                        * Referenced by: '<S219>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_hn[4];      /* Expression: sps.opv
                                        * Referenced by: '<S219>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_do;         /* Expression: 0.5
                                        * Referenced by: '<S217>/Switch3'
                                        */
  real_T u5_OnVal_n;                   /* Expression: 1.5
                                        * Referenced by: '<S217>/>1.5'
                                        */
  real_T u5_OffVal_i;                  /* Expression: 0
                                        * Referenced by: '<S217>/>1.5'
                                        */
  real_T u5_YOn_p;                     /* Expression: 1
                                        * Referenced by: '<S217>/>1.5'
                                        */
  real_T u5_YOff_hc;                   /* Expression: 0
                                        * Referenced by: '<S217>/>1.5'
                                        */
  real_T IC_Value_g;                   /* Expression: double(InitialState)
                                        * Referenced by: '<S217>/IC'
                                        */
  real_T u_Value_hy;                   /* Expression: 0
                                        * Referenced by: '<S220>/0 1'
                                        */
  real_T Gain_Gain_bi;                 /* Expression: 2
                                        * Referenced by: '<S220>/Gain'
                                        */
  real_T DelayTs_InitialCondition_gn;  /* Expression: 0
                                        * Referenced by: '<S220>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_g5;  /* Expression: 0
                                        * Referenced by: '<S220>/Delay Ts '
                                        */
  real_T C4_Value_i1;                  /* Expression: BR.com
                                        * Referenced by: '<S220>/C4'
                                        */
  real_T LookUpTable_XData_e[4];       /* Expression: sps.tv
                                        * Referenced by: '<S222>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_a[4];       /* Expression: sps.opv
                                        * Referenced by: '<S222>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_k;          /* Expression: 0.5
                                        * Referenced by: '<S220>/Switch3'
                                        */
  real_T u5_OnVal_p;                   /* Expression: 1.5
                                        * Referenced by: '<S220>/>1.5'
                                        */
  real_T u5_OffVal_o;                  /* Expression: 0
                                        * Referenced by: '<S220>/>1.5'
                                        */
  real_T u5_YOn_e2;                    /* Expression: 1
                                        * Referenced by: '<S220>/>1.5'
                                        */
  real_T u5_YOff_da;                   /* Expression: 0
                                        * Referenced by: '<S220>/>1.5'
                                        */
  real_T IC_Value_dg;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S220>/IC'
                                        */
  real_T u_Value_i;                    /* Expression: 0
                                        * Referenced by: '<S223>/0 1'
                                        */
  real_T Gain_Gain_pd;                 /* Expression: 2
                                        * Referenced by: '<S223>/Gain'
                                        */
  real_T DelayTs_InitialCondition_o;   /* Expression: 0
                                        * Referenced by: '<S223>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_ig;  /* Expression: 0
                                        * Referenced by: '<S223>/Delay Ts '
                                        */
  real_T C4_Value_c;                   /* Expression: BR.com
                                        * Referenced by: '<S223>/C4'
                                        */
  real_T LookUpTable_XData_pg[4];      /* Expression: sps.tv
                                        * Referenced by: '<S225>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_cj[4];      /* Expression: sps.opv
                                        * Referenced by: '<S225>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_jc;         /* Expression: 0.5
                                        * Referenced by: '<S223>/Switch3'
                                        */
  real_T u5_OnVal_m;                   /* Expression: 1.5
                                        * Referenced by: '<S223>/>1.5'
                                        */
  real_T u5_OffVal_f;                  /* Expression: 0
                                        * Referenced by: '<S223>/>1.5'
                                        */
  real_T u5_YOn_b;                     /* Expression: 1
                                        * Referenced by: '<S223>/>1.5'
                                        */
  real_T u5_YOff_j;                    /* Expression: 0
                                        * Referenced by: '<S223>/>1.5'
                                        */
  real_T IC_Value_ps;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S223>/IC'
                                        */
  real_T u_Value_pg;                   /* Expression: 0
                                        * Referenced by: '<S231>/0 1'
                                        */
  real_T Gain_Gain_fi;                 /* Expression: 2
                                        * Referenced by: '<S231>/Gain'
                                        */
  real_T DelayTs_InitialCondition_pi;  /* Expression: 0
                                        * Referenced by: '<S231>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_cr;  /* Expression: 0
                                        * Referenced by: '<S231>/Delay Ts '
                                        */
  real_T C4_Value_l1;                  /* Expression: External
                                        * Referenced by: '<S43>/C4'
                                        */
  real_T LookUpTable_XData_h[4];       /* Expression: sps.tv
                                        * Referenced by: '<S240>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_jg[4];      /* Expression: sps.opv
                                        * Referenced by: '<S240>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_j1;         /* Expression: 0.5
                                        * Referenced by: '<S43>/Switch3'
                                        */
  real_T Constant5_Value_a;            /* Expression: InitialState
                                        * Referenced by: '<S43>/Constant5'
                                        */
  real_T C4_Value_h;                   /* Expression: BR.com
                                        * Referenced by: '<S231>/C4'
                                        */
  real_T LookUpTable_XData_hk[4];      /* Expression: sps.tv
                                        * Referenced by: '<S233>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_kxg[4];     /* Expression: sps.opv
                                        * Referenced by: '<S233>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_mv;         /* Expression: 0.5
                                        * Referenced by: '<S231>/Switch3'
                                        */
  real_T u5_OnVal_ih;                  /* Expression: 1.5
                                        * Referenced by: '<S231>/>1.5'
                                        */
  real_T u5_OffVal_fy;                 /* Expression: 0
                                        * Referenced by: '<S231>/>1.5'
                                        */
  real_T u5_YOn_h;                     /* Expression: 1
                                        * Referenced by: '<S231>/>1.5'
                                        */
  real_T u5_YOff_lc;                   /* Expression: 0
                                        * Referenced by: '<S231>/>1.5'
                                        */
  real_T IC_Value_l;                   /* Expression: double(InitialState)
                                        * Referenced by: '<S231>/IC'
                                        */
  real_T u_Value_k;                    /* Expression: 0
                                        * Referenced by: '<S234>/0 1'
                                        */
  real_T Gain_Gain_en;                 /* Expression: 2
                                        * Referenced by: '<S234>/Gain'
                                        */
  real_T DelayTs_InitialCondition_ik;  /* Expression: 0
                                        * Referenced by: '<S234>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_gp;  /* Expression: 0
                                        * Referenced by: '<S234>/Delay Ts '
                                        */
  real_T C4_Value_ca;                  /* Expression: BR.com
                                        * Referenced by: '<S234>/C4'
                                        */
  real_T LookUpTable_XData_pa[4];      /* Expression: sps.tv
                                        * Referenced by: '<S236>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_gy[4];      /* Expression: sps.opv
                                        * Referenced by: '<S236>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_f;          /* Expression: 0.5
                                        * Referenced by: '<S234>/Switch3'
                                        */
  real_T u5_OnVal_l;                   /* Expression: 1.5
                                        * Referenced by: '<S234>/>1.5'
                                        */
  real_T u5_OffVal_dx;                 /* Expression: 0
                                        * Referenced by: '<S234>/>1.5'
                                        */
  real_T u5_YOn_k;                     /* Expression: 1
                                        * Referenced by: '<S234>/>1.5'
                                        */
  real_T u5_YOff_lr;                   /* Expression: 0
                                        * Referenced by: '<S234>/>1.5'
                                        */
  real_T IC_Value_a;                   /* Expression: double(InitialState)
                                        * Referenced by: '<S234>/IC'
                                        */
  real_T u_Value_a;                    /* Expression: 0
                                        * Referenced by: '<S237>/0 1'
                                        */
  real_T Gain_Gain_pu;                 /* Expression: 2
                                        * Referenced by: '<S237>/Gain'
                                        */
  real_T DelayTs_InitialCondition_ji;  /* Expression: 0
                                        * Referenced by: '<S237>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_cv;  /* Expression: 0
                                        * Referenced by: '<S237>/Delay Ts '
                                        */
  real_T C4_Value_na;                  /* Expression: BR.com
                                        * Referenced by: '<S237>/C4'
                                        */
  real_T LookUpTable_XData_l[4];       /* Expression: sps.tv
                                        * Referenced by: '<S239>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_p[4];       /* Expression: sps.opv
                                        * Referenced by: '<S239>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_g;          /* Expression: 0.5
                                        * Referenced by: '<S237>/Switch3'
                                        */
  real_T u5_OnVal_hk;                  /* Expression: 1.5
                                        * Referenced by: '<S237>/>1.5'
                                        */
  real_T u5_OffVal_l;                  /* Expression: 0
                                        * Referenced by: '<S237>/>1.5'
                                        */
  real_T u5_YOn_pj;                    /* Expression: 1
                                        * Referenced by: '<S237>/>1.5'
                                        */
  real_T u5_YOff_g;                    /* Expression: 0
                                        * Referenced by: '<S237>/>1.5'
                                        */
  real_T IC_Value_gi;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S237>/IC'
                                        */
  real_T u_Value_b;                    /* Expression: 0
                                        * Referenced by: '<S245>/0 1'
                                        */
  real_T Gain_Gain_k;                  /* Expression: 2
                                        * Referenced by: '<S245>/Gain'
                                        */
  real_T DelayTs_InitialCondition_a;   /* Expression: 0
                                        * Referenced by: '<S245>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_n;   /* Expression: 0
                                        * Referenced by: '<S245>/Delay Ts '
                                        */
  real_T C4_Value_n4;                  /* Expression: External
                                        * Referenced by: '<S44>/C4'
                                        */
  real_T LookUpTable_XData_nx[4];      /* Expression: sps.tv
                                        * Referenced by: '<S254>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_kp[4];      /* Expression: sps.opv
                                        * Referenced by: '<S254>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_c;          /* Expression: 0.5
                                        * Referenced by: '<S44>/Switch3'
                                        */
  real_T Constant5_Value_j;            /* Expression: InitialState
                                        * Referenced by: '<S44>/Constant5'
                                        */
  real_T C4_Value_oy;                  /* Expression: BR.com
                                        * Referenced by: '<S245>/C4'
                                        */
  real_T LookUpTable_XData_jk[4];      /* Expression: sps.tv
                                        * Referenced by: '<S247>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_cq[4];      /* Expression: sps.opv
                                        * Referenced by: '<S247>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_ol;         /* Expression: 0.5
                                        * Referenced by: '<S245>/Switch3'
                                        */
  real_T u5_OnVal_hf;                  /* Expression: 1.5
                                        * Referenced by: '<S245>/>1.5'
                                        */
  real_T u5_OffVal_cn;                 /* Expression: 0
                                        * Referenced by: '<S245>/>1.5'
                                        */
  real_T u5_YOn_pg;                    /* Expression: 1
                                        * Referenced by: '<S245>/>1.5'
                                        */
  real_T u5_YOff_na;                   /* Expression: 0
                                        * Referenced by: '<S245>/>1.5'
                                        */
  real_T IC_Value_f;                   /* Expression: double(InitialState)
                                        * Referenced by: '<S245>/IC'
                                        */
  real_T u_Value_kq;                   /* Expression: 0
                                        * Referenced by: '<S248>/0 1'
                                        */
  real_T Gain_Gain_pb;                 /* Expression: 2
                                        * Referenced by: '<S248>/Gain'
                                        */
  real_T DelayTs_InitialCondition_kd;  /* Expression: 0
                                        * Referenced by: '<S248>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_i1;  /* Expression: 0
                                        * Referenced by: '<S248>/Delay Ts '
                                        */
  real_T C4_Value_jm;                  /* Expression: BR.com
                                        * Referenced by: '<S248>/C4'
                                        */
  real_T LookUpTable_XData_et[4];      /* Expression: sps.tv
                                        * Referenced by: '<S250>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_at[4];      /* Expression: sps.opv
                                        * Referenced by: '<S250>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_hd;         /* Expression: 0.5
                                        * Referenced by: '<S248>/Switch3'
                                        */
  real_T u5_OnVal_ln;                  /* Expression: 1.5
                                        * Referenced by: '<S248>/>1.5'
                                        */
  real_T u5_OffVal_j;                  /* Expression: 0
                                        * Referenced by: '<S248>/>1.5'
                                        */
  real_T u5_YOn_g;                     /* Expression: 1
                                        * Referenced by: '<S248>/>1.5'
                                        */
  real_T u5_YOff_i;                    /* Expression: 0
                                        * Referenced by: '<S248>/>1.5'
                                        */
  real_T IC_Value_o0;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S248>/IC'
                                        */
  real_T u_Value_ar;                   /* Expression: 0
                                        * Referenced by: '<S251>/0 1'
                                        */
  real_T Gain_Gain_m;                  /* Expression: 2
                                        * Referenced by: '<S251>/Gain'
                                        */
  real_T DelayTs_InitialCondition_eq;  /* Expression: 0
                                        * Referenced by: '<S251>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_jf;  /* Expression: 0
                                        * Referenced by: '<S251>/Delay Ts '
                                        */
  real_T C4_Value_p;                   /* Expression: BR.com
                                        * Referenced by: '<S251>/C4'
                                        */
  real_T LookUpTable_XData_ks[4];      /* Expression: sps.tv
                                        * Referenced by: '<S253>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_cqe[4];     /* Expression: sps.opv
                                        * Referenced by: '<S253>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_kk;         /* Expression: 0.5
                                        * Referenced by: '<S251>/Switch3'
                                        */
  real_T u5_OnVal_o;                   /* Expression: 1.5
                                        * Referenced by: '<S251>/>1.5'
                                        */
  real_T u5_OffVal_lf;                 /* Expression: 0
                                        * Referenced by: '<S251>/>1.5'
                                        */
  real_T u5_YOn_hr;                    /* Expression: 1
                                        * Referenced by: '<S251>/>1.5'
                                        */
  real_T u5_YOff_hh;                   /* Expression: 0
                                        * Referenced by: '<S251>/>1.5'
                                        */
  real_T IC_Value_k;                   /* Expression: double(InitialState)
                                        * Referenced by: '<S251>/IC'
                                        */
  real_T u_Value_bb;                   /* Expression: 0
                                        * Referenced by: '<S259>/0 1'
                                        */
  real_T Gain_Gain_g;                  /* Expression: 2
                                        * Referenced by: '<S259>/Gain'
                                        */
  real_T DelayTs_InitialCondition_a1;  /* Expression: 0
                                        * Referenced by: '<S259>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_ap;  /* Expression: 0
                                        * Referenced by: '<S259>/Delay Ts '
                                        */
  real_T C4_Value_al;                  /* Expression: External
                                        * Referenced by: '<S45>/C4'
                                        */
  real_T LookUpTable_XData_lz[4];      /* Expression: sps.tv
                                        * Referenced by: '<S268>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_jq[4];      /* Expression: sps.opv
                                        * Referenced by: '<S268>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_e;          /* Expression: 0.5
                                        * Referenced by: '<S45>/Switch3'
                                        */
  real_T Constant5_Value_lf;           /* Expression: InitialState
                                        * Referenced by: '<S45>/Constant5'
                                        */
  real_T C4_Value_nn;                  /* Expression: BR.com
                                        * Referenced by: '<S259>/C4'
                                        */
  real_T LookUpTable_XData_dt[4];      /* Expression: sps.tv
                                        * Referenced by: '<S261>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_pa[4];      /* Expression: sps.opv
                                        * Referenced by: '<S261>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_jj;         /* Expression: 0.5
                                        * Referenced by: '<S259>/Switch3'
                                        */
  real_T u5_OnVal_a3;                  /* Expression: 1.5
                                        * Referenced by: '<S259>/>1.5'
                                        */
  real_T u5_OffVal_b;                  /* Expression: 0
                                        * Referenced by: '<S259>/>1.5'
                                        */
  real_T u5_YOn_i;                     /* Expression: 1
                                        * Referenced by: '<S259>/>1.5'
                                        */
  real_T u5_YOff_gq;                   /* Expression: 0
                                        * Referenced by: '<S259>/>1.5'
                                        */
  real_T IC_Value_fl;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S259>/IC'
                                        */
  real_T u_Value_et;                   /* Expression: 0
                                        * Referenced by: '<S262>/0 1'
                                        */
  real_T Gain_Gain_h;                  /* Expression: 2
                                        * Referenced by: '<S262>/Gain'
                                        */
  real_T DelayTs_InitialCondition_ey;  /* Expression: 0
                                        * Referenced by: '<S262>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_ib;  /* Expression: 0
                                        * Referenced by: '<S262>/Delay Ts '
                                        */
  real_T C4_Value_dr;                  /* Expression: BR.com
                                        * Referenced by: '<S262>/C4'
                                        */
  real_T LookUpTable_XData_gm[4];      /* Expression: sps.tv
                                        * Referenced by: '<S264>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_hq[4];      /* Expression: sps.opv
                                        * Referenced by: '<S264>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_hr;         /* Expression: 0.5
                                        * Referenced by: '<S262>/Switch3'
                                        */
  real_T u5_OnVal_nw;                  /* Expression: 1.5
                                        * Referenced by: '<S262>/>1.5'
                                        */
  real_T u5_OffVal_ic;                 /* Expression: 0
                                        * Referenced by: '<S262>/>1.5'
                                        */
  real_T u5_YOn_ox;                    /* Expression: 1
                                        * Referenced by: '<S262>/>1.5'
                                        */
  real_T u5_YOff_o;                    /* Expression: 0
                                        * Referenced by: '<S262>/>1.5'
                                        */
  real_T IC_Value_lv;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S262>/IC'
                                        */
  real_T u_Value_ac;                   /* Expression: 0
                                        * Referenced by: '<S265>/0 1'
                                        */
  real_T Gain_Gain_a;                  /* Expression: 2
                                        * Referenced by: '<S265>/Gain'
                                        */
  real_T DelayTs_InitialCondition_bn;  /* Expression: 0
                                        * Referenced by: '<S265>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_nr;  /* Expression: 0
                                        * Referenced by: '<S265>/Delay Ts '
                                        */
  real_T C4_Value_ne;                  /* Expression: BR.com
                                        * Referenced by: '<S265>/C4'
                                        */
  real_T LookUpTable_XData_c[4];       /* Expression: sps.tv
                                        * Referenced by: '<S267>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_ap[4];      /* Expression: sps.opv
                                        * Referenced by: '<S267>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_j4;         /* Expression: 0.5
                                        * Referenced by: '<S265>/Switch3'
                                        */
  real_T u5_OnVal_pq;                  /* Expression: 1.5
                                        * Referenced by: '<S265>/>1.5'
                                        */
  real_T u5_OffVal_b0;                 /* Expression: 0
                                        * Referenced by: '<S265>/>1.5'
                                        */
  real_T u5_YOn_hv;                    /* Expression: 1
                                        * Referenced by: '<S265>/>1.5'
                                        */
  real_T u5_YOff_pq;                   /* Expression: 0
                                        * Referenced by: '<S265>/>1.5'
                                        */
  real_T IC_Value_jq;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S265>/IC'
                                        */
  real_T u_Value_ig;                   /* Expression: 0
                                        * Referenced by: '<S273>/0 1'
                                        */
  real_T Gain_Gain_br;                 /* Expression: 2
                                        * Referenced by: '<S273>/Gain'
                                        */
  real_T DelayTs_InitialCondition_ez;  /* Expression: 0
                                        * Referenced by: '<S273>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_mt;  /* Expression: 0
                                        * Referenced by: '<S273>/Delay Ts '
                                        */
  real_T C4_Value_g;                   /* Expression: External
                                        * Referenced by: '<S46>/C4'
                                        */
  real_T LookUpTable_XData_ic[4];      /* Expression: sps.tv
                                        * Referenced by: '<S282>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_j3[4];      /* Expression: sps.opv
                                        * Referenced by: '<S282>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_l5;         /* Expression: 0.5
                                        * Referenced by: '<S46>/Switch3'
                                        */
  real_T Constant5_Value_gg;           /* Expression: InitialState
                                        * Referenced by: '<S46>/Constant5'
                                        */
  real_T C4_Value_gu;                  /* Expression: BR.com
                                        * Referenced by: '<S273>/C4'
                                        */
  real_T LookUpTable_XData_ip[4];      /* Expression: sps.tv
                                        * Referenced by: '<S275>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_hp[4];      /* Expression: sps.opv
                                        * Referenced by: '<S275>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_ms;         /* Expression: 0.5
                                        * Referenced by: '<S273>/Switch3'
                                        */
  real_T u5_OnVal_i2;                  /* Expression: 1.5
                                        * Referenced by: '<S273>/>1.5'
                                        */
  real_T u5_OffVal_oi;                 /* Expression: 0
                                        * Referenced by: '<S273>/>1.5'
                                        */
  real_T u5_YOn_kz;                    /* Expression: 1
                                        * Referenced by: '<S273>/>1.5'
                                        */
  real_T u5_YOff_n3;                   /* Expression: 0
                                        * Referenced by: '<S273>/>1.5'
                                        */
  real_T IC_Value_l4;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S273>/IC'
                                        */
  real_T u_Value_kqc;                  /* Expression: 0
                                        * Referenced by: '<S276>/0 1'
                                        */
  real_T Gain_Gain_po;                 /* Expression: 2
                                        * Referenced by: '<S276>/Gain'
                                        */
  real_T DelayTs_InitialCondition_ef;  /* Expression: 0
                                        * Referenced by: '<S276>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_bk;  /* Expression: 0
                                        * Referenced by: '<S276>/Delay Ts '
                                        */
  real_T C4_Value_cu;                  /* Expression: BR.com
                                        * Referenced by: '<S276>/C4'
                                        */
  real_T LookUpTable_XData_dc[4];      /* Expression: sps.tv
                                        * Referenced by: '<S278>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_a4[4];      /* Expression: sps.opv
                                        * Referenced by: '<S278>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_on;         /* Expression: 0.5
                                        * Referenced by: '<S276>/Switch3'
                                        */
  real_T u5_OnVal_ia;                  /* Expression: 1.5
                                        * Referenced by: '<S276>/>1.5'
                                        */
  real_T u5_OffVal_lk;                 /* Expression: 0
                                        * Referenced by: '<S276>/>1.5'
                                        */
  real_T u5_YOn_ap;                    /* Expression: 1
                                        * Referenced by: '<S276>/>1.5'
                                        */
  real_T u5_YOff_b;                    /* Expression: 0
                                        * Referenced by: '<S276>/>1.5'
                                        */
  real_T IC_Value_n;                   /* Expression: double(InitialState)
                                        * Referenced by: '<S276>/IC'
                                        */
  real_T u_Value_i3;                   /* Expression: 0
                                        * Referenced by: '<S279>/0 1'
                                        */
  real_T Gain_Gain_it;                 /* Expression: 2
                                        * Referenced by: '<S279>/Gain'
                                        */
  real_T DelayTs_InitialCondition_dk;  /* Expression: 0
                                        * Referenced by: '<S279>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_d0;  /* Expression: 0
                                        * Referenced by: '<S279>/Delay Ts '
                                        */
  real_T C4_Value_dm;                  /* Expression: BR.com
                                        * Referenced by: '<S279>/C4'
                                        */
  real_T LookUpTable_XData_b[4];       /* Expression: sps.tv
                                        * Referenced by: '<S281>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_pi[4];      /* Expression: sps.opv
                                        * Referenced by: '<S281>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_ad;         /* Expression: 0.5
                                        * Referenced by: '<S279>/Switch3'
                                        */
  real_T u5_OnVal_j;                   /* Expression: 1.5
                                        * Referenced by: '<S279>/>1.5'
                                        */
  real_T u5_OffVal_oj;                 /* Expression: 0
                                        * Referenced by: '<S279>/>1.5'
                                        */
  real_T u5_YOn_ei;                    /* Expression: 1
                                        * Referenced by: '<S279>/>1.5'
                                        */
  real_T u5_YOff_kc;                   /* Expression: 0
                                        * Referenced by: '<S279>/>1.5'
                                        */
  real_T IC_Value_ot;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S279>/IC'
                                        */
  real_T u_Value_lr;                   /* Expression: 0
                                        * Referenced by: '<S287>/0 1'
                                        */
  real_T Gain_Gain_j;                  /* Expression: 2
                                        * Referenced by: '<S287>/Gain'
                                        */
  real_T DelayTs_InitialCondition_df;  /* Expression: 0
                                        * Referenced by: '<S287>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_b2;  /* Expression: 0
                                        * Referenced by: '<S287>/Delay Ts '
                                        */
  real_T C4_Value_fu;                  /* Expression: External
                                        * Referenced by: '<S47>/C4'
                                        */
  real_T LookUpTable_XData_a[4];       /* Expression: sps.tv
                                        * Referenced by: '<S296>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_ah[4];      /* Expression: sps.opv
                                        * Referenced by: '<S296>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_ef;         /* Expression: 0.5
                                        * Referenced by: '<S47>/Switch3'
                                        */
  real_T Constant5_Value_n;            /* Expression: InitialState
                                        * Referenced by: '<S47>/Constant5'
                                        */
  real_T C4_Value_bs;                  /* Expression: BR.com
                                        * Referenced by: '<S287>/C4'
                                        */
  real_T LookUpTable_XData_dk[4];      /* Expression: sps.tv
                                        * Referenced by: '<S289>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_gr[4];      /* Expression: sps.opv
                                        * Referenced by: '<S289>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_dx;         /* Expression: 0.5
                                        * Referenced by: '<S287>/Switch3'
                                        */
  real_T u5_OnVal_eo;                  /* Expression: 1.5
                                        * Referenced by: '<S287>/>1.5'
                                        */
  real_T u5_OffVal_dj;                 /* Expression: 0
                                        * Referenced by: '<S287>/>1.5'
                                        */
  real_T u5_YOn_d;                     /* Expression: 1
                                        * Referenced by: '<S287>/>1.5'
                                        */
  real_T u5_YOff_he;                   /* Expression: 0
                                        * Referenced by: '<S287>/>1.5'
                                        */
  real_T IC_Value_c;                   /* Expression: double(InitialState)
                                        * Referenced by: '<S287>/IC'
                                        */
  real_T u_Value_kp;                   /* Expression: 0
                                        * Referenced by: '<S290>/0 1'
                                        */
  real_T Gain_Gain_n;                  /* Expression: 2
                                        * Referenced by: '<S290>/Gain'
                                        */
  real_T DelayTs_InitialCondition_kb;  /* Expression: 0
                                        * Referenced by: '<S290>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_aj;  /* Expression: 0
                                        * Referenced by: '<S290>/Delay Ts '
                                        */
  real_T C4_Value_o5;                  /* Expression: BR.com
                                        * Referenced by: '<S290>/C4'
                                        */
  real_T LookUpTable_XData_ix[4];      /* Expression: sps.tv
                                        * Referenced by: '<S292>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_on[4];      /* Expression: sps.opv
                                        * Referenced by: '<S292>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_np;         /* Expression: 0.5
                                        * Referenced by: '<S290>/Switch3'
                                        */
  real_T u5_OnVal_hs;                  /* Expression: 1.5
                                        * Referenced by: '<S290>/>1.5'
                                        */
  real_T u5_OffVal_ov;                 /* Expression: 0
                                        * Referenced by: '<S290>/>1.5'
                                        */
  real_T u5_YOn_kl;                    /* Expression: 1
                                        * Referenced by: '<S290>/>1.5'
                                        */
  real_T u5_YOff_o2;                   /* Expression: 0
                                        * Referenced by: '<S290>/>1.5'
                                        */
  real_T IC_Value_oa;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S290>/IC'
                                        */
  real_T u_Value_lf;                   /* Expression: 0
                                        * Referenced by: '<S293>/0 1'
                                        */
  real_T Gain_Gain_gy;                 /* Expression: 2
                                        * Referenced by: '<S293>/Gain'
                                        */
  real_T DelayTs_InitialCondition_k5;  /* Expression: 0
                                        * Referenced by: '<S293>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_ny;  /* Expression: 0
                                        * Referenced by: '<S293>/Delay Ts '
                                        */
  real_T C4_Value_n0;                  /* Expression: BR.com
                                        * Referenced by: '<S293>/C4'
                                        */
  real_T LookUpTable_XData_gv[4];      /* Expression: sps.tv
                                        * Referenced by: '<S295>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_f[4];       /* Expression: sps.opv
                                        * Referenced by: '<S295>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_gw;         /* Expression: 0.5
                                        * Referenced by: '<S293>/Switch3'
                                        */
  real_T u5_OnVal_bu;                  /* Expression: 1.5
                                        * Referenced by: '<S293>/>1.5'
                                        */
  real_T u5_OffVal_f4;                 /* Expression: 0
                                        * Referenced by: '<S293>/>1.5'
                                        */
  real_T u5_YOn_hu;                    /* Expression: 1
                                        * Referenced by: '<S293>/>1.5'
                                        */
  real_T u5_YOff_e;                    /* Expression: 0
                                        * Referenced by: '<S293>/>1.5'
                                        */
  real_T IC_Value_df;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S293>/IC'
                                        */
  real_T u_Value_nf;                   /* Expression: 0
                                        * Referenced by: '<S301>/0 1'
                                        */
  real_T Gain_Gain_ky;                 /* Expression: 2
                                        * Referenced by: '<S301>/Gain'
                                        */
  real_T DelayTs_InitialCondition_fy;  /* Expression: 0
                                        * Referenced by: '<S301>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_f1;  /* Expression: 0
                                        * Referenced by: '<S301>/Delay Ts '
                                        */
  real_T C4_Value_i0;                  /* Expression: External
                                        * Referenced by: '<S48>/C4'
                                        */
  real_T LookUpTable_XData_cq[4];      /* Expression: sps.tv
                                        * Referenced by: '<S310>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_fc[4];      /* Expression: sps.opv
                                        * Referenced by: '<S310>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_ew;         /* Expression: 0.5
                                        * Referenced by: '<S48>/Switch3'
                                        */
  real_T Constant5_Value_b;            /* Expression: InitialState
                                        * Referenced by: '<S48>/Constant5'
                                        */
  real_T C4_Value_n4u;                 /* Expression: BR.com
                                        * Referenced by: '<S301>/C4'
                                        */
  real_T LookUpTable_XData_dq[4];      /* Expression: sps.tv
                                        * Referenced by: '<S303>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_lc[4];      /* Expression: sps.opv
                                        * Referenced by: '<S303>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_hh;         /* Expression: 0.5
                                        * Referenced by: '<S301>/Switch3'
                                        */
  real_T u5_OnVal_il;                  /* Expression: 1.5
                                        * Referenced by: '<S301>/>1.5'
                                        */
  real_T u5_OffVal_dr;                 /* Expression: 0
                                        * Referenced by: '<S301>/>1.5'
                                        */
  real_T u5_YOn_c;                     /* Expression: 1
                                        * Referenced by: '<S301>/>1.5'
                                        */
  real_T u5_YOff_d4;                   /* Expression: 0
                                        * Referenced by: '<S301>/>1.5'
                                        */
  real_T IC_Value_h;                   /* Expression: double(InitialState)
                                        * Referenced by: '<S301>/IC'
                                        */
  real_T u_Value_o;                    /* Expression: 0
                                        * Referenced by: '<S304>/0 1'
                                        */
  real_T Gain_Gain_fn;                 /* Expression: 2
                                        * Referenced by: '<S304>/Gain'
                                        */
  real_T DelayTs_InitialCondition_cs;  /* Expression: 0
                                        * Referenced by: '<S304>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_cw;  /* Expression: 0
                                        * Referenced by: '<S304>/Delay Ts '
                                        */
  real_T C4_Value_m;                   /* Expression: BR.com
                                        * Referenced by: '<S304>/C4'
                                        */
  real_T LookUpTable_XData_jn[4];      /* Expression: sps.tv
                                        * Referenced by: '<S306>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_i[4];       /* Expression: sps.opv
                                        * Referenced by: '<S306>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_b;          /* Expression: 0.5
                                        * Referenced by: '<S304>/Switch3'
                                        */
  real_T u5_OnVal_gu;                  /* Expression: 1.5
                                        * Referenced by: '<S304>/>1.5'
                                        */
  real_T u5_OffVal_k;                  /* Expression: 0
                                        * Referenced by: '<S304>/>1.5'
                                        */
  real_T u5_YOn_n;                     /* Expression: 1
                                        * Referenced by: '<S304>/>1.5'
                                        */
  real_T u5_YOff_jp;                   /* Expression: 0
                                        * Referenced by: '<S304>/>1.5'
                                        */
  real_T IC_Value_ow;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S304>/IC'
                                        */
  real_T u_Value_ev;                   /* Expression: 0
                                        * Referenced by: '<S307>/0 1'
                                        */
  real_T Gain_Gain_pk;                 /* Expression: 2
                                        * Referenced by: '<S307>/Gain'
                                        */
  real_T DelayTs_InitialCondition_cuu; /* Expression: 0
                                        * Referenced by: '<S307>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_by;  /* Expression: 0
                                        * Referenced by: '<S307>/Delay Ts '
                                        */
  real_T C4_Value_e;                   /* Expression: BR.com
                                        * Referenced by: '<S307>/C4'
                                        */
  real_T LookUpTable_XData_ik[4];      /* Expression: sps.tv
                                        * Referenced by: '<S309>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_ha[4];      /* Expression: sps.opv
                                        * Referenced by: '<S309>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_f5;         /* Expression: 0.5
                                        * Referenced by: '<S307>/Switch3'
                                        */
  real_T u5_OnVal_pp;                  /* Expression: 1.5
                                        * Referenced by: '<S307>/>1.5'
                                        */
  real_T u5_OffVal_l1;                 /* Expression: 0
                                        * Referenced by: '<S307>/>1.5'
                                        */
  real_T u5_YOn_gl;                    /* Expression: 1
                                        * Referenced by: '<S307>/>1.5'
                                        */
  real_T u5_YOff_n2;                   /* Expression: 0
                                        * Referenced by: '<S307>/>1.5'
                                        */
  real_T IC_Value_mv;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S307>/IC'
                                        */
  real_T u_Value_ke;                   /* Expression: 0
                                        * Referenced by: '<S315>/0 1'
                                        */
  real_T Gain_Gain_d;                  /* Expression: 2
                                        * Referenced by: '<S315>/Gain'
                                        */
  real_T DelayTs_InitialCondition_af;  /* Expression: 0
                                        * Referenced by: '<S315>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_gs;  /* Expression: 0
                                        * Referenced by: '<S315>/Delay Ts '
                                        */
  real_T C4_Value_hm;                  /* Expression: External
                                        * Referenced by: '<S49>/C4'
                                        */
  real_T LookUpTable_XData_f[4];       /* Expression: sps.tv
                                        * Referenced by: '<S324>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_cc[4];      /* Expression: sps.opv
                                        * Referenced by: '<S324>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_az;         /* Expression: 0.5
                                        * Referenced by: '<S49>/Switch3'
                                        */
  real_T Constant5_Value_m;            /* Expression: InitialState
                                        * Referenced by: '<S49>/Constant5'
                                        */
  real_T C4_Value_m4;                  /* Expression: BR.com
                                        * Referenced by: '<S315>/C4'
                                        */
  real_T LookUpTable_XData_cu[4];      /* Expression: sps.tv
                                        * Referenced by: '<S317>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_b[4];       /* Expression: sps.opv
                                        * Referenced by: '<S317>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_j3;         /* Expression: 0.5
                                        * Referenced by: '<S315>/Switch3'
                                        */
  real_T u5_OnVal_g3;                  /* Expression: 1.5
                                        * Referenced by: '<S315>/>1.5'
                                        */
  real_T u5_OffVal_e;                  /* Expression: 0
                                        * Referenced by: '<S315>/>1.5'
                                        */
  real_T u5_YOn_g2;                    /* Expression: 1
                                        * Referenced by: '<S315>/>1.5'
                                        */
  real_T u5_YOff_h0;                   /* Expression: 0
                                        * Referenced by: '<S315>/>1.5'
                                        */
  real_T IC_Value_mv0;                 /* Expression: double(InitialState)
                                        * Referenced by: '<S315>/IC'
                                        */
  real_T u_Value_mt;                   /* Expression: 0
                                        * Referenced by: '<S318>/0 1'
                                        */
  real_T Gain_Gain_iv;                 /* Expression: 2
                                        * Referenced by: '<S318>/Gain'
                                        */
  real_T DelayTs_InitialCondition_kv;  /* Expression: 0
                                        * Referenced by: '<S318>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_lx;  /* Expression: 0
                                        * Referenced by: '<S318>/Delay Ts '
                                        */
  real_T C4_Value_pz;                  /* Expression: BR.com
                                        * Referenced by: '<S318>/C4'
                                        */
  real_T LookUpTable_XData_op[4];      /* Expression: sps.tv
                                        * Referenced by: '<S320>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_pf[4];      /* Expression: sps.opv
                                        * Referenced by: '<S320>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_ia;         /* Expression: 0.5
                                        * Referenced by: '<S318>/Switch3'
                                        */
  real_T u5_OnVal_mo;                  /* Expression: 1.5
                                        * Referenced by: '<S318>/>1.5'
                                        */
  real_T u5_OffVal_g;                  /* Expression: 0
                                        * Referenced by: '<S318>/>1.5'
                                        */
  real_T u5_YOn_cu;                    /* Expression: 1
                                        * Referenced by: '<S318>/>1.5'
                                        */
  real_T u5_YOff_bx;                   /* Expression: 0
                                        * Referenced by: '<S318>/>1.5'
                                        */
  real_T IC_Value_pse;                 /* Expression: double(InitialState)
                                        * Referenced by: '<S318>/IC'
                                        */
  real_T u_Value_b3;                   /* Expression: 0
                                        * Referenced by: '<S321>/0 1'
                                        */
  real_T Gain_Gain_io;                 /* Expression: 2
                                        * Referenced by: '<S321>/Gain'
                                        */
  real_T DelayTs_InitialCondition_cc;  /* Expression: 0
                                        * Referenced by: '<S321>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_ox;  /* Expression: 0
                                        * Referenced by: '<S321>/Delay Ts '
                                        */
  real_T C4_Value_ib;                  /* Expression: BR.com
                                        * Referenced by: '<S321>/C4'
                                        */
  real_T LookUpTable_XData_me[4];      /* Expression: sps.tv
                                        * Referenced by: '<S323>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_pe[4];      /* Expression: sps.opv
                                        * Referenced by: '<S323>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_ez;         /* Expression: 0.5
                                        * Referenced by: '<S321>/Switch3'
                                        */
  real_T u5_OnVal_iv;                  /* Expression: 1.5
                                        * Referenced by: '<S321>/>1.5'
                                        */
  real_T u5_OffVal_ee;                 /* Expression: 0
                                        * Referenced by: '<S321>/>1.5'
                                        */
  real_T u5_YOn_do;                    /* Expression: 1
                                        * Referenced by: '<S321>/>1.5'
                                        */
  real_T u5_YOff_l4;                   /* Expression: 0
                                        * Referenced by: '<S321>/>1.5'
                                        */
  real_T IC_Value_kw;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S321>/IC'
                                        */
  real_T u_Value_p4;                   /* Expression: 0
                                        * Referenced by: '<S329>/0 1'
                                        */
  real_T Gain_Gain_it1;                /* Expression: 2
                                        * Referenced by: '<S329>/Gain'
                                        */
  real_T DelayTs_InitialCondition_o2;  /* Expression: 0
                                        * Referenced by: '<S329>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_ga;  /* Expression: 0
                                        * Referenced by: '<S329>/Delay Ts '
                                        */
  real_T C4_Value_ik;                  /* Expression: External
                                        * Referenced by: '<S50>/C4'
                                        */
  real_T LookUpTable_XData_ikb[4];     /* Expression: sps.tv
                                        * Referenced by: '<S338>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_oj[4];      /* Expression: sps.opv
                                        * Referenced by: '<S338>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_dc;         /* Expression: 0.5
                                        * Referenced by: '<S50>/Switch3'
                                        */
  real_T Constant5_Value_df;           /* Expression: InitialState
                                        * Referenced by: '<S50>/Constant5'
                                        */
  real_T C4_Value_an;                  /* Expression: BR.com
                                        * Referenced by: '<S329>/C4'
                                        */
  real_T LookUpTable_XData_ga[4];      /* Expression: sps.tv
                                        * Referenced by: '<S331>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_m[4];       /* Expression: sps.opv
                                        * Referenced by: '<S331>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_ak;         /* Expression: 0.5
                                        * Referenced by: '<S329>/Switch3'
                                        */
  real_T u5_OnVal_ix;                  /* Expression: 1.5
                                        * Referenced by: '<S329>/>1.5'
                                        */
  real_T u5_OffVal_fk;                 /* Expression: 0
                                        * Referenced by: '<S329>/>1.5'
                                        */
  real_T u5_YOn_bf;                    /* Expression: 1
                                        * Referenced by: '<S329>/>1.5'
                                        */
  real_T u5_YOff_i5;                   /* Expression: 0
                                        * Referenced by: '<S329>/>1.5'
                                        */
  real_T IC_Value_ca;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S329>/IC'
                                        */
  real_T u_Value_j;                    /* Expression: 0
                                        * Referenced by: '<S332>/0 1'
                                        */
  real_T Gain_Gain_l;                  /* Expression: 2
                                        * Referenced by: '<S332>/Gain'
                                        */
  real_T DelayTs_InitialCondition_cx;  /* Expression: 0
                                        * Referenced by: '<S332>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_dz;  /* Expression: 0
                                        * Referenced by: '<S332>/Delay Ts '
                                        */
  real_T C4_Value_gl;                  /* Expression: BR.com
                                        * Referenced by: '<S332>/C4'
                                        */
  real_T LookUpTable_XData_j5[4];      /* Expression: sps.tv
                                        * Referenced by: '<S334>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_pn[4];      /* Expression: sps.opv
                                        * Referenced by: '<S334>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_ay;         /* Expression: 0.5
                                        * Referenced by: '<S332>/Switch3'
                                        */
  real_T u5_OnVal_fl;                  /* Expression: 1.5
                                        * Referenced by: '<S332>/>1.5'
                                        */
  real_T u5_OffVal_jc;                 /* Expression: 0
                                        * Referenced by: '<S332>/>1.5'
                                        */
  real_T u5_YOn_eq;                    /* Expression: 1
                                        * Referenced by: '<S332>/>1.5'
                                        */
  real_T u5_YOff_dh;                   /* Expression: 0
                                        * Referenced by: '<S332>/>1.5'
                                        */
  real_T IC_Value_jl;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S332>/IC'
                                        */
  real_T u_Value_kj;                   /* Expression: 0
                                        * Referenced by: '<S335>/0 1'
                                        */
  real_T Gain_Gain_po3;                /* Expression: 2
                                        * Referenced by: '<S335>/Gain'
                                        */
  real_T DelayTs_InitialCondition_is;  /* Expression: 0
                                        * Referenced by: '<S335>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_ac;  /* Expression: 0
                                        * Referenced by: '<S335>/Delay Ts '
                                        */
  real_T C4_Value_a3;                  /* Expression: BR.com
                                        * Referenced by: '<S335>/C4'
                                        */
  real_T LookUpTable_XData_jke[4];     /* Expression: sps.tv
                                        * Referenced by: '<S337>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_mi[4];      /* Expression: sps.opv
                                        * Referenced by: '<S337>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_g2;         /* Expression: 0.5
                                        * Referenced by: '<S335>/Switch3'
                                        */
  real_T u5_OnVal_d;                   /* Expression: 1.5
                                        * Referenced by: '<S335>/>1.5'
                                        */
  real_T u5_OffVal_lj;                 /* Expression: 0
                                        * Referenced by: '<S335>/>1.5'
                                        */
  real_T u5_YOn_pt;                    /* Expression: 1
                                        * Referenced by: '<S335>/>1.5'
                                        */
  real_T u5_YOff_ge;                   /* Expression: 0
                                        * Referenced by: '<S335>/>1.5'
                                        */
  real_T IC_Value_gv;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S335>/IC'
                                        */
  real_T u_Value_lg;                   /* Expression: 0
                                        * Referenced by: '<S343>/0 1'
                                        */
  real_T Gain_Gain_c;                  /* Expression: 2
                                        * Referenced by: '<S343>/Gain'
                                        */
  real_T DelayTs_InitialCondition_oq;  /* Expression: 0
                                        * Referenced by: '<S343>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_cwl; /* Expression: 0
                                        * Referenced by: '<S343>/Delay Ts '
                                        */
  real_T C4_Value_nlc;                 /* Expression: External
                                        * Referenced by: '<S51>/C4'
                                        */
  real_T LookUpTable_XData_au[4];      /* Expression: sps.tv
                                        * Referenced by: '<S352>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_hh[4];      /* Expression: sps.opv
                                        * Referenced by: '<S352>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_lv;         /* Expression: 0.5
                                        * Referenced by: '<S51>/Switch3'
                                        */
  real_T Constant5_Value_h;            /* Expression: InitialState
                                        * Referenced by: '<S51>/Constant5'
                                        */
  real_T C4_Value_hy;                  /* Expression: BR.com
                                        * Referenced by: '<S343>/C4'
                                        */
  real_T LookUpTable_XData_ks5[4];     /* Expression: sps.tv
                                        * Referenced by: '<S345>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_m2[4];      /* Expression: sps.opv
                                        * Referenced by: '<S345>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_ff;         /* Expression: 0.5
                                        * Referenced by: '<S343>/Switch3'
                                        */
  real_T u5_OnVal_mm;                  /* Expression: 1.5
                                        * Referenced by: '<S343>/>1.5'
                                        */
  real_T u5_OffVal_eg;                 /* Expression: 0
                                        * Referenced by: '<S343>/>1.5'
                                        */
  real_T u5_YOn_eh;                    /* Expression: 1
                                        * Referenced by: '<S343>/>1.5'
                                        */
  real_T u5_YOff_a;                    /* Expression: 0
                                        * Referenced by: '<S343>/>1.5'
                                        */
  real_T IC_Value_px;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S343>/IC'
                                        */
  real_T u_Value_g;                    /* Expression: 0
                                        * Referenced by: '<S346>/0 1'
                                        */
  real_T Gain_Gain_ff;                 /* Expression: 2
                                        * Referenced by: '<S346>/Gain'
                                        */
  real_T DelayTs_InitialCondition_lj;  /* Expression: 0
                                        * Referenced by: '<S346>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_mm;  /* Expression: 0
                                        * Referenced by: '<S346>/Delay Ts '
                                        */
  real_T C4_Value_fq;                  /* Expression: BR.com
                                        * Referenced by: '<S346>/C4'
                                        */
  real_T LookUpTable_XData_ax[4];      /* Expression: sps.tv
                                        * Referenced by: '<S348>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_gb[4];      /* Expression: sps.opv
                                        * Referenced by: '<S348>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_f52;        /* Expression: 0.5
                                        * Referenced by: '<S346>/Switch3'
                                        */
  real_T u5_OnVal_g2;                  /* Expression: 1.5
                                        * Referenced by: '<S346>/>1.5'
                                        */
  real_T u5_OffVal_fp;                 /* Expression: 0
                                        * Referenced by: '<S346>/>1.5'
                                        */
  real_T u5_YOn_mu;                    /* Expression: 1
                                        * Referenced by: '<S346>/>1.5'
                                        */
  real_T u5_YOff_nb;                   /* Expression: 0
                                        * Referenced by: '<S346>/>1.5'
                                        */
  real_T IC_Value_lu;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S346>/IC'
                                        */
  real_T u_Value_bi;                   /* Expression: 0
                                        * Referenced by: '<S349>/0 1'
                                        */
  real_T Gain_Gain_ii;                 /* Expression: 2
                                        * Referenced by: '<S349>/Gain'
                                        */
  real_T DelayTs_InitialCondition_db;  /* Expression: 0
                                        * Referenced by: '<S349>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_gz;  /* Expression: 0
                                        * Referenced by: '<S349>/Delay Ts '
                                        */
  real_T C4_Value_ml;                  /* Expression: BR.com
                                        * Referenced by: '<S349>/C4'
                                        */
  real_T LookUpTable_XData_d1[4];      /* Expression: sps.tv
                                        * Referenced by: '<S351>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_mq[4];      /* Expression: sps.opv
                                        * Referenced by: '<S351>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_bq;         /* Expression: 0.5
                                        * Referenced by: '<S349>/Switch3'
                                        */
  real_T u5_OnVal_hd;                  /* Expression: 1.5
                                        * Referenced by: '<S349>/>1.5'
                                        */
  real_T u5_OffVal_oc;                 /* Expression: 0
                                        * Referenced by: '<S349>/>1.5'
                                        */
  real_T u5_YOn_la;                    /* Expression: 1
                                        * Referenced by: '<S349>/>1.5'
                                        */
  real_T u5_YOff_iw;                   /* Expression: 0
                                        * Referenced by: '<S349>/>1.5'
                                        */
  real_T IC_Value_m4;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S349>/IC'
                                        */
  real_T u_Value_ly;                   /* Expression: 0
                                        * Referenced by: '<S357>/0 1'
                                        */
  real_T Gain_Gain_jv;                 /* Expression: 2
                                        * Referenced by: '<S357>/Gain'
                                        */
  real_T DelayTs_InitialCondition_d5;  /* Expression: 0
                                        * Referenced by: '<S357>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_no;  /* Expression: 0
                                        * Referenced by: '<S357>/Delay Ts '
                                        */
  real_T C4_Value_di;                  /* Expression: External
                                        * Referenced by: '<S52>/C4'
                                        */
  real_T LookUpTable_XData_nd[4];      /* Expression: sps.tv
                                        * Referenced by: '<S366>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_pl[4];      /* Expression: sps.opv
                                        * Referenced by: '<S366>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_dn;         /* Expression: 0.5
                                        * Referenced by: '<S52>/Switch3'
                                        */
  real_T Constant5_Value_i;            /* Expression: InitialState
                                        * Referenced by: '<S52>/Constant5'
                                        */
  real_T C4_Value_gq;                  /* Expression: BR.com
                                        * Referenced by: '<S357>/C4'
                                        */
  real_T LookUpTable_XData_du[4];      /* Expression: sps.tv
                                        * Referenced by: '<S359>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_oy[4];      /* Expression: sps.opv
                                        * Referenced by: '<S359>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_hhq;        /* Expression: 0.5
                                        * Referenced by: '<S357>/Switch3'
                                        */
  real_T u5_OnVal_me;                  /* Expression: 1.5
                                        * Referenced by: '<S357>/>1.5'
                                        */
  real_T u5_OffVal_ja;                 /* Expression: 0
                                        * Referenced by: '<S357>/>1.5'
                                        */
  real_T u5_YOn_jt;                    /* Expression: 1
                                        * Referenced by: '<S357>/>1.5'
                                        */
  real_T u5_YOff_o0;                   /* Expression: 0
                                        * Referenced by: '<S357>/>1.5'
                                        */
  real_T IC_Value_jf;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S357>/IC'
                                        */
  real_T u_Value_nk;                   /* Expression: 0
                                        * Referenced by: '<S360>/0 1'
                                        */
  real_T Gain_Gain_e0;                 /* Expression: 2
                                        * Referenced by: '<S360>/Gain'
                                        */
  real_T DelayTs_InitialCondition_cz;  /* Expression: 0
                                        * Referenced by: '<S360>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_ph;  /* Expression: 0
                                        * Referenced by: '<S360>/Delay Ts '
                                        */
  real_T C4_Value_k;                   /* Expression: BR.com
                                        * Referenced by: '<S360>/C4'
                                        */
  real_T LookUpTable_XData_mc[4];      /* Expression: sps.tv
                                        * Referenced by: '<S362>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_by[4];      /* Expression: sps.opv
                                        * Referenced by: '<S362>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_hq;         /* Expression: 0.5
                                        * Referenced by: '<S360>/Switch3'
                                        */
  real_T u5_OnVal_l3;                  /* Expression: 1.5
                                        * Referenced by: '<S360>/>1.5'
                                        */
  real_T u5_OffVal_ch;                 /* Expression: 0
                                        * Referenced by: '<S360>/>1.5'
                                        */
  real_T u5_YOn_cc;                    /* Expression: 1
                                        * Referenced by: '<S360>/>1.5'
                                        */
  real_T u5_YOff_h4;                   /* Expression: 0
                                        * Referenced by: '<S360>/>1.5'
                                        */
  real_T IC_Value_el;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S360>/IC'
                                        */
  real_T u_Value_gz;                   /* Expression: 0
                                        * Referenced by: '<S363>/0 1'
                                        */
  real_T Gain_Gain_kf;                 /* Expression: 2
                                        * Referenced by: '<S363>/Gain'
                                        */
  real_T DelayTs_InitialCondition_dy;  /* Expression: 0
                                        * Referenced by: '<S363>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_py;  /* Expression: 0
                                        * Referenced by: '<S363>/Delay Ts '
                                        */
  real_T C4_Value_ow;                  /* Expression: BR.com
                                        * Referenced by: '<S363>/C4'
                                        */
  real_T LookUpTable_XData_oy[4];      /* Expression: sps.tv
                                        * Referenced by: '<S365>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_la[4];      /* Expression: sps.opv
                                        * Referenced by: '<S365>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_fr;         /* Expression: 0.5
                                        * Referenced by: '<S363>/Switch3'
                                        */
  real_T u5_OnVal_io;                  /* Expression: 1.5
                                        * Referenced by: '<S363>/>1.5'
                                        */
  real_T u5_OffVal_kt;                 /* Expression: 0
                                        * Referenced by: '<S363>/>1.5'
                                        */
  real_T u5_YOn_gx;                    /* Expression: 1
                                        * Referenced by: '<S363>/>1.5'
                                        */
  real_T u5_YOff_g4;                   /* Expression: 0
                                        * Referenced by: '<S363>/>1.5'
                                        */
  real_T IC_Value_oe;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S363>/IC'
                                        */
  real_T u_Value_d;                    /* Expression: 0
                                        * Referenced by: '<S371>/0 1'
                                        */
  real_T Gain_Gain_dr;                 /* Expression: 2
                                        * Referenced by: '<S371>/Gain'
                                        */
  real_T DelayTs_InitialCondition_gpg; /* Expression: 0
                                        * Referenced by: '<S371>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_h2;  /* Expression: 0
                                        * Referenced by: '<S371>/Delay Ts '
                                        */
  real_T C4_Value_ir;                  /* Expression: External
                                        * Referenced by: '<S53>/C4'
                                        */
  real_T LookUpTable_XData_jkb[4];     /* Expression: sps.tv
                                        * Referenced by: '<S380>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_e[4];       /* Expression: sps.opv
                                        * Referenced by: '<S380>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_kr;         /* Expression: 0.5
                                        * Referenced by: '<S53>/Switch3'
                                        */
  real_T Constant5_Value_c;            /* Expression: InitialState
                                        * Referenced by: '<S53>/Constant5'
                                        */
  real_T C4_Value_kx;                  /* Expression: BR.com
                                        * Referenced by: '<S371>/C4'
                                        */
  real_T LookUpTable_XData_eh[4];      /* Expression: sps.tv
                                        * Referenced by: '<S373>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_fy[4];      /* Expression: sps.opv
                                        * Referenced by: '<S373>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_ck;         /* Expression: 0.5
                                        * Referenced by: '<S371>/Switch3'
                                        */
  real_T u5_OnVal_mr;                  /* Expression: 1.5
                                        * Referenced by: '<S371>/>1.5'
                                        */
  real_T u5_OffVal_jr;                 /* Expression: 0
                                        * Referenced by: '<S371>/>1.5'
                                        */
  real_T u5_YOn_f;                     /* Expression: 1
                                        * Referenced by: '<S371>/>1.5'
                                        */
  real_T u5_YOff_eo;                   /* Expression: 0
                                        * Referenced by: '<S371>/>1.5'
                                        */
  real_T IC_Value_i;                   /* Expression: double(InitialState)
                                        * Referenced by: '<S371>/IC'
                                        */
  real_T u_Value_nm;                   /* Expression: 0
                                        * Referenced by: '<S374>/0 1'
                                        */
  real_T Gain_Gain_ar;                 /* Expression: 2
                                        * Referenced by: '<S374>/Gain'
                                        */
  real_T DelayTs_InitialCondition_nd;  /* Expression: 0
                                        * Referenced by: '<S374>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_hr;  /* Expression: 0
                                        * Referenced by: '<S374>/Delay Ts '
                                        */
  real_T C4_Value_cs;                  /* Expression: BR.com
                                        * Referenced by: '<S374>/C4'
                                        */
  real_T LookUpTable_XData_l0[4];      /* Expression: sps.tv
                                        * Referenced by: '<S376>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_gw[4];      /* Expression: sps.opv
                                        * Referenced by: '<S376>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_my;         /* Expression: 0.5
                                        * Referenced by: '<S374>/Switch3'
                                        */
  real_T u5_OnVal_jo;                  /* Expression: 1.5
                                        * Referenced by: '<S374>/>1.5'
                                        */
  real_T u5_OffVal_hu;                 /* Expression: 0
                                        * Referenced by: '<S374>/>1.5'
                                        */
  real_T u5_YOn_jq;                    /* Expression: 1
                                        * Referenced by: '<S374>/>1.5'
                                        */
  real_T u5_YOff_bxa;                  /* Expression: 0
                                        * Referenced by: '<S374>/>1.5'
                                        */
  real_T IC_Value_ga;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S374>/IC'
                                        */
  real_T u_Value_etl;                  /* Expression: 0
                                        * Referenced by: '<S377>/0 1'
                                        */
  real_T Gain_Gain_ek;                 /* Expression: 2
                                        * Referenced by: '<S377>/Gain'
                                        */
  real_T DelayTs_InitialCondition_dv;  /* Expression: 0
                                        * Referenced by: '<S377>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_fr;  /* Expression: 0
                                        * Referenced by: '<S377>/Delay Ts '
                                        */
  real_T C4_Value_i1z;                 /* Expression: BR.com
                                        * Referenced by: '<S377>/C4'
                                        */
  real_T LookUpTable_XData_p5[4];      /* Expression: sps.tv
                                        * Referenced by: '<S379>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_c2[4];      /* Expression: sps.opv
                                        * Referenced by: '<S379>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_ffe;        /* Expression: 0.5
                                        * Referenced by: '<S377>/Switch3'
                                        */
  real_T u5_OnVal_br;                  /* Expression: 1.5
                                        * Referenced by: '<S377>/>1.5'
                                        */
  real_T u5_OffVal_m;                  /* Expression: 0
                                        * Referenced by: '<S377>/>1.5'
                                        */
  real_T u5_YOn_hx;                    /* Expression: 1
                                        * Referenced by: '<S377>/>1.5'
                                        */
  real_T u5_YOff_jj;                   /* Expression: 0
                                        * Referenced by: '<S377>/>1.5'
                                        */
  real_T IC_Value_l2;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S377>/IC'
                                        */
  real_T u_Value_ng;                   /* Expression: 0
                                        * Referenced by: '<S385>/0 1'
                                        */
  real_T Gain_Gain_bw;                 /* Expression: 2
                                        * Referenced by: '<S385>/Gain'
                                        */
  real_T DelayTs_InitialCondition_nu;  /* Expression: 0
                                        * Referenced by: '<S385>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_hb;  /* Expression: 0
                                        * Referenced by: '<S385>/Delay Ts '
                                        */
  real_T C4_Value_jv;                  /* Expression: External
                                        * Referenced by: '<S54>/C4'
                                        */
  real_T LookUpTable_XData_ce[4];      /* Expression: sps.tv
                                        * Referenced by: '<S394>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_ok[4];      /* Expression: sps.opv
                                        * Referenced by: '<S394>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_ok;         /* Expression: 0.5
                                        * Referenced by: '<S54>/Switch3'
                                        */
  real_T Constant5_Value_hw;           /* Expression: InitialState
                                        * Referenced by: '<S54>/Constant5'
                                        */
  real_T C4_Value_a0;                  /* Expression: BR.com
                                        * Referenced by: '<S385>/C4'
                                        */
  real_T LookUpTable_XData_j2[4];      /* Expression: sps.tv
                                        * Referenced by: '<S387>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_ds[4];      /* Expression: sps.opv
                                        * Referenced by: '<S387>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_al;         /* Expression: 0.5
                                        * Referenced by: '<S385>/Switch3'
                                        */
  real_T u5_OnVal_g2o;                 /* Expression: 1.5
                                        * Referenced by: '<S385>/>1.5'
                                        */
  real_T u5_OffVal_li;                 /* Expression: 0
                                        * Referenced by: '<S385>/>1.5'
                                        */
  real_T u5_YOn_ac;                    /* Expression: 1
                                        * Referenced by: '<S385>/>1.5'
                                        */
  real_T u5_YOff_nv;                   /* Expression: 0
                                        * Referenced by: '<S385>/>1.5'
                                        */
  real_T IC_Value_n1;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S385>/IC'
                                        */
  real_T u_Value_p2;                   /* Expression: 0
                                        * Referenced by: '<S388>/0 1'
                                        */
  real_T Gain_Gain_hm;                 /* Expression: 2
                                        * Referenced by: '<S388>/Gain'
                                        */
  real_T DelayTs_InitialCondition_o4;  /* Expression: 0
                                        * Referenced by: '<S388>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_pc;  /* Expression: 0
                                        * Referenced by: '<S388>/Delay Ts '
                                        */
  real_T C4_Value_bx;                  /* Expression: BR.com
                                        * Referenced by: '<S388>/C4'
                                        */
  real_T LookUpTable_XData_ba[4];      /* Expression: sps.tv
                                        * Referenced by: '<S390>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_hf[4];      /* Expression: sps.opv
                                        * Referenced by: '<S390>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_ic;         /* Expression: 0.5
                                        * Referenced by: '<S388>/Switch3'
                                        */
  real_T u5_OnVal_od;                  /* Expression: 1.5
                                        * Referenced by: '<S388>/>1.5'
                                        */
  real_T u5_OffVal_hc;                 /* Expression: 0
                                        * Referenced by: '<S388>/>1.5'
                                        */
  real_T u5_YOn_ag;                    /* Expression: 1
                                        * Referenced by: '<S388>/>1.5'
                                        */
  real_T u5_YOff_ip;                   /* Expression: 0
                                        * Referenced by: '<S388>/>1.5'
                                        */
  real_T IC_Value_aw;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S388>/IC'
                                        */
  real_T u_Value_fp;                   /* Expression: 0
                                        * Referenced by: '<S391>/0 1'
                                        */
  real_T Gain_Gain_bf;                 /* Expression: 2
                                        * Referenced by: '<S391>/Gain'
                                        */
  real_T DelayTs_InitialCondition_ibm; /* Expression: 0
                                        * Referenced by: '<S391>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_hq;  /* Expression: 0
                                        * Referenced by: '<S391>/Delay Ts '
                                        */
  real_T C4_Value_kt;                  /* Expression: BR.com
                                        * Referenced by: '<S391>/C4'
                                        */
  real_T LookUpTable_XData_n2[4];      /* Expression: sps.tv
                                        * Referenced by: '<S393>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_n[4];       /* Expression: sps.opv
                                        * Referenced by: '<S393>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_jn;         /* Expression: 0.5
                                        * Referenced by: '<S391>/Switch3'
                                        */
  real_T u5_OnVal_c;                   /* Expression: 1.5
                                        * Referenced by: '<S391>/>1.5'
                                        */
  real_T u5_OffVal_b1;                 /* Expression: 0
                                        * Referenced by: '<S391>/>1.5'
                                        */
  real_T u5_YOn_mn;                    /* Expression: 1
                                        * Referenced by: '<S391>/>1.5'
                                        */
  real_T u5_YOff_hi;                   /* Expression: 0
                                        * Referenced by: '<S391>/>1.5'
                                        */
  real_T IC_Value_e5;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S391>/IC'
                                        */
  real_T u_Value_gl;                   /* Expression: 0
                                        * Referenced by: '<S399>/0 1'
                                        */
  real_T Gain_Gain_cq;                 /* Expression: 2
                                        * Referenced by: '<S399>/Gain'
                                        */
  real_T DelayTs_InitialCondition_jx;  /* Expression: 0
                                        * Referenced by: '<S399>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_fa;  /* Expression: 0
                                        * Referenced by: '<S399>/Delay Ts '
                                        */
  real_T C4_Value_ac;                  /* Expression: External
                                        * Referenced by: '<S55>/C4'
                                        */
  real_T LookUpTable_XData_lw[4];      /* Expression: sps.tv
                                        * Referenced by: '<S408>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_hs[4];      /* Expression: sps.opv
                                        * Referenced by: '<S408>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_gm;         /* Expression: 0.5
                                        * Referenced by: '<S55>/Switch3'
                                        */
  real_T Constant5_Value_k;            /* Expression: InitialState
                                        * Referenced by: '<S55>/Constant5'
                                        */
  real_T C4_Value_ci;                  /* Expression: BR.com
                                        * Referenced by: '<S399>/C4'
                                        */
  real_T LookUpTable_XData_ixh[4];     /* Expression: sps.tv
                                        * Referenced by: '<S401>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_mb[4];      /* Expression: sps.opv
                                        * Referenced by: '<S401>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_om;         /* Expression: 0.5
                                        * Referenced by: '<S399>/Switch3'
                                        */
  real_T u5_OnVal_dm;                  /* Expression: 1.5
                                        * Referenced by: '<S399>/>1.5'
                                        */
  real_T u5_OffVal_ef;                 /* Expression: 0
                                        * Referenced by: '<S399>/>1.5'
                                        */
  real_T u5_YOn_nl;                    /* Expression: 1
                                        * Referenced by: '<S399>/>1.5'
                                        */
  real_T u5_YOff_nn;                   /* Expression: 0
                                        * Referenced by: '<S399>/>1.5'
                                        */
  real_T IC_Value_jx;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S399>/IC'
                                        */
  real_T u_Value_k1;                   /* Expression: 0
                                        * Referenced by: '<S402>/0 1'
                                        */
  real_T Gain_Gain_el;                 /* Expression: 2
                                        * Referenced by: '<S402>/Gain'
                                        */
  real_T DelayTs_InitialCondition_au;  /* Expression: 0
                                        * Referenced by: '<S402>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_ajy; /* Expression: 0
                                        * Referenced by: '<S402>/Delay Ts '
                                        */
  real_T C4_Value_mo;                  /* Expression: BR.com
                                        * Referenced by: '<S402>/C4'
                                        */
  real_T LookUpTable_XData_oe[4];      /* Expression: sps.tv
                                        * Referenced by: '<S404>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_ho[4];      /* Expression: sps.opv
                                        * Referenced by: '<S404>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_ky;         /* Expression: 0.5
                                        * Referenced by: '<S402>/Switch3'
                                        */
  real_T u5_OnVal_a2;                  /* Expression: 1.5
                                        * Referenced by: '<S402>/>1.5'
                                        */
  real_T u5_OffVal_es;                 /* Expression: 0
                                        * Referenced by: '<S402>/>1.5'
                                        */
  real_T u5_YOn_du;                    /* Expression: 1
                                        * Referenced by: '<S402>/>1.5'
                                        */
  real_T u5_YOff_hj;                   /* Expression: 0
                                        * Referenced by: '<S402>/>1.5'
                                        */
  real_T IC_Value_la;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S402>/IC'
                                        */
  real_T u_Value_go;                   /* Expression: 0
                                        * Referenced by: '<S405>/0 1'
                                        */
  real_T Gain_Gain_aa;                 /* Expression: 2
                                        * Referenced by: '<S405>/Gain'
                                        */
  real_T DelayTs_InitialCondition_ih;  /* Expression: 0
                                        * Referenced by: '<S405>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_by3; /* Expression: 0
                                        * Referenced by: '<S405>/Delay Ts '
                                        */
  real_T C4_Value_ls;                  /* Expression: BR.com
                                        * Referenced by: '<S405>/C4'
                                        */
  real_T LookUpTable_XData_bx[4];      /* Expression: sps.tv
                                        * Referenced by: '<S407>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_px[4];      /* Expression: sps.opv
                                        * Referenced by: '<S407>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_d4;         /* Expression: 0.5
                                        * Referenced by: '<S405>/Switch3'
                                        */
  real_T u5_OnVal_jn;                  /* Expression: 1.5
                                        * Referenced by: '<S405>/>1.5'
                                        */
  real_T u5_OffVal_os;                 /* Expression: 0
                                        * Referenced by: '<S405>/>1.5'
                                        */
  real_T u5_YOn_mo;                    /* Expression: 1
                                        * Referenced by: '<S405>/>1.5'
                                        */
  real_T u5_YOff_or;                   /* Expression: 0
                                        * Referenced by: '<S405>/>1.5'
                                        */
  real_T IC_Value_l2n;                 /* Expression: double(InitialState)
                                        * Referenced by: '<S405>/IC'
                                        */
  real_T u_Value_lyt;                  /* Expression: 0
                                        * Referenced by: '<S413>/0 1'
                                        */
  real_T Gain_Gain_cv;                 /* Expression: 2
                                        * Referenced by: '<S413>/Gain'
                                        */
  real_T DelayTs_InitialCondition_fyw; /* Expression: 0
                                        * Referenced by: '<S413>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_mh;  /* Expression: 0
                                        * Referenced by: '<S413>/Delay Ts '
                                        */
  real_T C4_Value_dy;                  /* Expression: External
                                        * Referenced by: '<S56>/C4'
                                        */
  real_T LookUpTable_XData_fd[4];      /* Expression: sps.tv
                                        * Referenced by: '<S422>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_jy[4];      /* Expression: sps.opv
                                        * Referenced by: '<S422>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_dy;         /* Expression: 0.5
                                        * Referenced by: '<S56>/Switch3'
                                        */
  real_T Constant5_Value_if;           /* Expression: InitialState
                                        * Referenced by: '<S56>/Constant5'
                                        */
  real_T C4_Value_hy1;                 /* Expression: BR.com
                                        * Referenced by: '<S413>/C4'
                                        */
  real_T LookUpTable_XData_e0[4];      /* Expression: sps.tv
                                        * Referenced by: '<S415>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_cy[4];      /* Expression: sps.opv
                                        * Referenced by: '<S415>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_ov;         /* Expression: 0.5
                                        * Referenced by: '<S413>/Switch3'
                                        */
  real_T u5_OnVal_kp;                  /* Expression: 1.5
                                        * Referenced by: '<S413>/>1.5'
                                        */
  real_T u5_OffVal_et;                 /* Expression: 0
                                        * Referenced by: '<S413>/>1.5'
                                        */
  real_T u5_YOn_io;                    /* Expression: 1
                                        * Referenced by: '<S413>/>1.5'
                                        */
  real_T u5_YOff_lm;                   /* Expression: 0
                                        * Referenced by: '<S413>/>1.5'
                                        */
  real_T IC_Value_j0;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S413>/IC'
                                        */
  real_T u_Value_jp;                   /* Expression: 0
                                        * Referenced by: '<S416>/0 1'
                                        */
  real_T Gain_Gain_ei;                 /* Expression: 2
                                        * Referenced by: '<S416>/Gain'
                                        */
  real_T DelayTs_InitialCondition_g3;  /* Expression: 0
                                        * Referenced by: '<S416>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_eyr; /* Expression: 0
                                        * Referenced by: '<S416>/Delay Ts '
                                        */
  real_T C4_Value_me;                  /* Expression: BR.com
                                        * Referenced by: '<S416>/C4'
                                        */
  real_T LookUpTable_XData_j2j[4];     /* Expression: sps.tv
                                        * Referenced by: '<S418>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_jk[4];      /* Expression: sps.opv
                                        * Referenced by: '<S418>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_gb;         /* Expression: 0.5
                                        * Referenced by: '<S416>/Switch3'
                                        */
  real_T u5_OnVal_kj;                  /* Expression: 1.5
                                        * Referenced by: '<S416>/>1.5'
                                        */
  real_T u5_OffVal_kc;                 /* Expression: 0
                                        * Referenced by: '<S416>/>1.5'
                                        */
  real_T u5_YOn_cj;                    /* Expression: 1
                                        * Referenced by: '<S416>/>1.5'
                                        */
  real_T u5_YOff_f;                    /* Expression: 0
                                        * Referenced by: '<S416>/>1.5'
                                        */
  real_T IC_Value_kc;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S416>/IC'
                                        */
  real_T u_Value_i5;                   /* Expression: 0
                                        * Referenced by: '<S419>/0 1'
                                        */
  real_T Gain_Gain_k5;                 /* Expression: 2
                                        * Referenced by: '<S419>/Gain'
                                        */
  real_T DelayTs_InitialCondition_lk;  /* Expression: 0
                                        * Referenced by: '<S419>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_lkr; /* Expression: 0
                                        * Referenced by: '<S419>/Delay Ts '
                                        */
  real_T C4_Value_fs;                  /* Expression: BR.com
                                        * Referenced by: '<S419>/C4'
                                        */
  real_T LookUpTable_XData_ay[4];      /* Expression: sps.tv
                                        * Referenced by: '<S421>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_fc4[4];     /* Expression: sps.opv
                                        * Referenced by: '<S421>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_je;         /* Expression: 0.5
                                        * Referenced by: '<S419>/Switch3'
                                        */
  real_T u5_OnVal_hj;                  /* Expression: 1.5
                                        * Referenced by: '<S419>/>1.5'
                                        */
  real_T u5_OffVal_or;                 /* Expression: 0
                                        * Referenced by: '<S419>/>1.5'
                                        */
  real_T u5_YOn_he;                    /* Expression: 1
                                        * Referenced by: '<S419>/>1.5'
                                        */
  real_T u5_YOff_a4;                   /* Expression: 0
                                        * Referenced by: '<S419>/>1.5'
                                        */
  real_T IC_Value_lp;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S419>/IC'
                                        */
  real_T u_Value_bw;                   /* Expression: 0
                                        * Referenced by: '<S427>/0 1'
                                        */
  real_T Gain_Gain_iu;                 /* Expression: 2
                                        * Referenced by: '<S427>/Gain'
                                        */
  real_T DelayTs_InitialCondition_gz1; /* Expression: 0
                                        * Referenced by: '<S427>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_fe;  /* Expression: 0
                                        * Referenced by: '<S427>/Delay Ts '
                                        */
  real_T C4_Value_fp;                  /* Expression: External
                                        * Referenced by: '<S57>/C4'
                                        */
  real_T LookUpTable_XData_in[4];      /* Expression: sps.tv
                                        * Referenced by: '<S436>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_hfe[4];     /* Expression: sps.opv
                                        * Referenced by: '<S436>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_iv;         /* Expression: 0.5
                                        * Referenced by: '<S57>/Switch3'
                                        */
  real_T Constant5_Value_p;            /* Expression: InitialState
                                        * Referenced by: '<S57>/Constant5'
                                        */
  real_T C4_Value_k5;                  /* Expression: BR.com
                                        * Referenced by: '<S427>/C4'
                                        */
  real_T LookUpTable_XData_py[4];      /* Expression: sps.tv
                                        * Referenced by: '<S429>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_n2[4];      /* Expression: sps.opv
                                        * Referenced by: '<S429>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_m5;         /* Expression: 0.5
                                        * Referenced by: '<S427>/Switch3'
                                        */
  real_T u5_OnVal_gt;                  /* Expression: 1.5
                                        * Referenced by: '<S427>/>1.5'
                                        */
  real_T u5_OffVal_j3;                 /* Expression: 0
                                        * Referenced by: '<S427>/>1.5'
                                        */
  real_T u5_YOn_oh;                    /* Expression: 1
                                        * Referenced by: '<S427>/>1.5'
                                        */
  real_T u5_YOff_jh;                   /* Expression: 0
                                        * Referenced by: '<S427>/>1.5'
                                        */
  real_T IC_Value_gj;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S427>/IC'
                                        */
  real_T u_Value_k2;                   /* Expression: 0
                                        * Referenced by: '<S430>/0 1'
                                        */
  real_T Gain_Gain_p4;                 /* Expression: 2
                                        * Referenced by: '<S430>/Gain'
                                        */
  real_T DelayTs_InitialCondition_ir;  /* Expression: 0
                                        * Referenced by: '<S430>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_jy;  /* Expression: 0
                                        * Referenced by: '<S430>/Delay Ts '
                                        */
  real_T C4_Value_pg;                  /* Expression: BR.com
                                        * Referenced by: '<S430>/C4'
                                        */
  real_T LookUpTable_XData_g0[4];      /* Expression: sps.tv
                                        * Referenced by: '<S432>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_p4[4];      /* Expression: sps.opv
                                        * Referenced by: '<S432>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_bi;         /* Expression: 0.5
                                        * Referenced by: '<S430>/Switch3'
                                        */
  real_T u5_OnVal_lg;                  /* Expression: 1.5
                                        * Referenced by: '<S430>/>1.5'
                                        */
  real_T u5_OffVal_i0;                 /* Expression: 0
                                        * Referenced by: '<S430>/>1.5'
                                        */
  real_T u5_YOn_c0;                    /* Expression: 1
                                        * Referenced by: '<S430>/>1.5'
                                        */
  real_T u5_YOff_ax;                   /* Expression: 0
                                        * Referenced by: '<S430>/>1.5'
                                        */
  real_T IC_Value_pf;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S430>/IC'
                                        */
  real_T u_Value_dx;                   /* Expression: 0
                                        * Referenced by: '<S433>/0 1'
                                        */
  real_T Gain_Gain_nf;                 /* Expression: 2
                                        * Referenced by: '<S433>/Gain'
                                        */
  real_T DelayTs_InitialCondition_ix;  /* Expression: 0
                                        * Referenced by: '<S433>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_du;  /* Expression: 0
                                        * Referenced by: '<S433>/Delay Ts '
                                        */
  real_T C4_Value_gi;                  /* Expression: BR.com
                                        * Referenced by: '<S433>/C4'
                                        */
  real_T LookUpTable_XData_pq[4];      /* Expression: sps.tv
                                        * Referenced by: '<S435>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_df[4];      /* Expression: sps.opv
                                        * Referenced by: '<S435>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_pk;         /* Expression: 0.5
                                        * Referenced by: '<S433>/Switch3'
                                        */
  real_T u5_OnVal_jc;                  /* Expression: 1.5
                                        * Referenced by: '<S433>/>1.5'
                                        */
  real_T u5_OffVal_pg;                 /* Expression: 0
                                        * Referenced by: '<S433>/>1.5'
                                        */
  real_T u5_YOn_os;                    /* Expression: 1
                                        * Referenced by: '<S433>/>1.5'
                                        */
  real_T u5_YOff_nr;                   /* Expression: 0
                                        * Referenced by: '<S433>/>1.5'
                                        */
  real_T IC_Value_pw;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S433>/IC'
                                        */
  real_T u_Value_in;                   /* Expression: 0
                                        * Referenced by: '<S441>/0 1'
                                        */
  real_T Gain_Gain_lj;                 /* Expression: 2
                                        * Referenced by: '<S441>/Gain'
                                        */
  real_T DelayTs_InitialCondition_o3;  /* Expression: 0
                                        * Referenced by: '<S441>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_pn;  /* Expression: 0
                                        * Referenced by: '<S441>/Delay Ts '
                                        */
  real_T C4_Value_ez;                  /* Expression: External
                                        * Referenced by: '<S58>/C4'
                                        */
  real_T LookUpTable_XData_co[4];      /* Expression: sps.tv
                                        * Referenced by: '<S450>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_lab[4];     /* Expression: sps.opv
                                        * Referenced by: '<S450>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_dd;         /* Expression: 0.5
                                        * Referenced by: '<S58>/Switch3'
                                        */
  real_T Constant5_Value_pw;           /* Expression: InitialState
                                        * Referenced by: '<S58>/Constant5'
                                        */
  real_T C4_Value_p2;                  /* Expression: BR.com
                                        * Referenced by: '<S441>/C4'
                                        */
  real_T LookUpTable_XData_lzm[4];     /* Expression: sps.tv
                                        * Referenced by: '<S443>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_lk[4];      /* Expression: sps.opv
                                        * Referenced by: '<S443>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_or;         /* Expression: 0.5
                                        * Referenced by: '<S441>/Switch3'
                                        */
  real_T u5_OnVal_ou;                  /* Expression: 1.5
                                        * Referenced by: '<S441>/>1.5'
                                        */
  real_T u5_OffVal_bk;                 /* Expression: 0
                                        * Referenced by: '<S441>/>1.5'
                                        */
  real_T u5_YOn_dt;                    /* Expression: 1
                                        * Referenced by: '<S441>/>1.5'
                                        */
  real_T u5_YOff_ba;                   /* Expression: 0
                                        * Referenced by: '<S441>/>1.5'
                                        */
  real_T IC_Value_m1;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S441>/IC'
                                        */
  real_T u_Value_k5;                   /* Expression: 0
                                        * Referenced by: '<S444>/0 1'
                                        */
  real_T Gain_Gain_ns;                 /* Expression: 2
                                        * Referenced by: '<S444>/Gain'
                                        */
  real_T DelayTs_InitialCondition_ia;  /* Expression: 0
                                        * Referenced by: '<S444>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_hd;  /* Expression: 0
                                        * Referenced by: '<S444>/Delay Ts '
                                        */
  real_T C4_Value_fh;                  /* Expression: BR.com
                                        * Referenced by: '<S444>/C4'
                                        */
  real_T LookUpTable_XData_oyt[4];     /* Expression: sps.tv
                                        * Referenced by: '<S446>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_o4[4];      /* Expression: sps.opv
                                        * Referenced by: '<S446>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_aa;         /* Expression: 0.5
                                        * Referenced by: '<S444>/Switch3'
                                        */
  real_T u5_OnVal_gi;                  /* Expression: 1.5
                                        * Referenced by: '<S444>/>1.5'
                                        */
  real_T u5_OffVal_jh;                 /* Expression: 0
                                        * Referenced by: '<S444>/>1.5'
                                        */
  real_T u5_YOn_eg;                    /* Expression: 1
                                        * Referenced by: '<S444>/>1.5'
                                        */
  real_T u5_YOff_az;                   /* Expression: 0
                                        * Referenced by: '<S444>/>1.5'
                                        */
  real_T IC_Value_ic;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S444>/IC'
                                        */
  real_T u_Value_eo;                   /* Expression: 0
                                        * Referenced by: '<S447>/0 1'
                                        */
  real_T Gain_Gain_au;                 /* Expression: 2
                                        * Referenced by: '<S447>/Gain'
                                        */
  real_T DelayTs_InitialCondition_d52; /* Expression: 0
                                        * Referenced by: '<S447>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_ad;  /* Expression: 0
                                        * Referenced by: '<S447>/Delay Ts '
                                        */
  real_T C4_Value_g2;                  /* Expression: BR.com
                                        * Referenced by: '<S447>/C4'
                                        */
  real_T LookUpTable_XData_bb[4];      /* Expression: sps.tv
                                        * Referenced by: '<S449>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_b3[4];      /* Expression: sps.opv
                                        * Referenced by: '<S449>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_gx;         /* Expression: 0.5
                                        * Referenced by: '<S447>/Switch3'
                                        */
  real_T u5_OnVal_ab;                  /* Expression: 1.5
                                        * Referenced by: '<S447>/>1.5'
                                        */
  real_T u5_OffVal_jr3;                /* Expression: 0
                                        * Referenced by: '<S447>/>1.5'
                                        */
  real_T u5_YOn_ni;                    /* Expression: 1
                                        * Referenced by: '<S447>/>1.5'
                                        */
  real_T u5_YOff_jz;                   /* Expression: 0
                                        * Referenced by: '<S447>/>1.5'
                                        */
  real_T IC_Value_py;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S447>/IC'
                                        */
  real_T u_Value_oe;                   /* Expression: 0
                                        * Referenced by: '<S455>/0 1'
                                        */
  real_T Gain_Gain_ao;                 /* Expression: 2
                                        * Referenced by: '<S455>/Gain'
                                        */
  real_T DelayTs_InitialCondition_ko;  /* Expression: 0
                                        * Referenced by: '<S455>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_mj;  /* Expression: 0
                                        * Referenced by: '<S455>/Delay Ts '
                                        */
  real_T C4_Value_lr;                  /* Expression: External
                                        * Referenced by: '<S59>/C4'
                                        */
  real_T LookUpTable_XData_da[4];      /* Expression: sps.tv
                                        * Referenced by: '<S464>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_fcl[4];     /* Expression: sps.opv
                                        * Referenced by: '<S464>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_lc;         /* Expression: 0.5
                                        * Referenced by: '<S59>/Switch3'
                                        */
  real_T C4_Value_mu;                  /* Expression: BR.com
                                        * Referenced by: '<S455>/C4'
                                        */
  real_T LookUpTable_XData_i3[4];      /* Expression: sps.tv
                                        * Referenced by: '<S457>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_l5[4];      /* Expression: sps.opv
                                        * Referenced by: '<S457>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_ci;         /* Expression: 0.5
                                        * Referenced by: '<S455>/Switch3'
                                        */
  real_T u5_OnVal_kd;                  /* Expression: 1.5
                                        * Referenced by: '<S455>/>1.5'
                                        */
  real_T u5_OffVal_og;                 /* Expression: 0
                                        * Referenced by: '<S455>/>1.5'
                                        */
  real_T u5_YOn_fq;                    /* Expression: 1
                                        * Referenced by: '<S455>/>1.5'
                                        */
  real_T u5_YOff_l3;                   /* Expression: 0
                                        * Referenced by: '<S455>/>1.5'
                                        */
  real_T IC_Value_jo;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S455>/IC'
                                        */
  real_T u_Value_fs;                   /* Expression: 0
                                        * Referenced by: '<S458>/0 1'
                                        */
  real_T Gain_Gain_c3;                 /* Expression: 2
                                        * Referenced by: '<S458>/Gain'
                                        */
  real_T DelayTs_InitialCondition_jm;  /* Expression: 0
                                        * Referenced by: '<S458>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_b4;  /* Expression: 0
                                        * Referenced by: '<S458>/Delay Ts '
                                        */
  real_T C4_Value_gy;                  /* Expression: BR.com
                                        * Referenced by: '<S458>/C4'
                                        */
  real_T LookUpTable_XData_p1[4];      /* Expression: sps.tv
                                        * Referenced by: '<S460>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_e4[4];      /* Expression: sps.opv
                                        * Referenced by: '<S460>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_jel;        /* Expression: 0.5
                                        * Referenced by: '<S458>/Switch3'
                                        */
  real_T u5_OnVal_jq;                  /* Expression: 1.5
                                        * Referenced by: '<S458>/>1.5'
                                        */
  real_T u5_OffVal_om;                 /* Expression: 0
                                        * Referenced by: '<S458>/>1.5'
                                        */
  real_T u5_YOn_by;                    /* Expression: 1
                                        * Referenced by: '<S458>/>1.5'
                                        */
  real_T u5_YOff_oq;                   /* Expression: 0
                                        * Referenced by: '<S458>/>1.5'
                                        */
  real_T IC_Value_iy;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S458>/IC'
                                        */
  real_T u_Value_nn;                   /* Expression: 0
                                        * Referenced by: '<S461>/0 1'
                                        */
  real_T Gain_Gain_n3;                 /* Expression: 2
                                        * Referenced by: '<S461>/Gain'
                                        */
  real_T DelayTs_InitialCondition_mn;  /* Expression: 0
                                        * Referenced by: '<S461>/Delay Ts'
                                        */
  real_T DelayTs_InitialCondition_bc;  /* Expression: 0
                                        * Referenced by: '<S461>/Delay Ts '
                                        */
  real_T C4_Value_gf;                  /* Expression: BR.com
                                        * Referenced by: '<S461>/C4'
                                        */
  real_T LookUpTable_XData_cob[4];     /* Expression: sps.tv
                                        * Referenced by: '<S463>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_bb[4];      /* Expression: sps.opv
                                        * Referenced by: '<S463>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_id;         /* Expression: 0.5
                                        * Referenced by: '<S461>/Switch3'
                                        */
  real_T u5_OnVal_e4;                  /* Expression: 1.5
                                        * Referenced by: '<S461>/>1.5'
                                        */
  real_T u5_OffVal_ig;                 /* Expression: 0
                                        * Referenced by: '<S461>/>1.5'
                                        */
  real_T u5_YOn_ln;                    /* Expression: 1
                                        * Referenced by: '<S461>/>1.5'
                                        */
  real_T u5_YOff_ji;                   /* Expression: 0
                                        * Referenced by: '<S461>/>1.5'
                                        */
  real_T IC_Value_or;                  /* Expression: double(InitialState)
                                        * Referenced by: '<S461>/IC'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_twoarea_system_test_T {
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
extern P_twoarea_system_test_T twoarea_system_test_P;

/* Block signals (auto storage) */
extern B_twoarea_system_test_T twoarea_system_test_B;

/* Block states (auto storage) */
extern DW_twoarea_system_test_T twoarea_system_test_DW;

/* Model entry point functions */
extern void twoarea_system_test_initialize(void);
extern void twoarea_system_test_step(void);
extern void twoarea_system_test_terminate(void);

/* Real-time Model object */
extern RT_MODEL_twoarea_system_test_T *const twoarea_system_test_M;

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
 * '<Root>' : 'twoarea_system_test'
 * '<S1>'   : 'twoarea_system_test/20KV//230KV'
 * '<S2>'   : 'twoarea_system_test/20KV//230KV1'
 * '<S3>'   : 'twoarea_system_test/20KV//230KV2'
 * '<S4>'   : 'twoarea_system_test/20KV//230KV4'
 * '<S5>'   : 'twoarea_system_test/B1'
 * '<S6>'   : 'twoarea_system_test/B10'
 * '<S7>'   : 'twoarea_system_test/B11'
 * '<S8>'   : 'twoarea_system_test/B3'
 * '<S9>'   : 'twoarea_system_test/B4'
 * '<S10>'  : 'twoarea_system_test/B5'
 * '<S11>'  : 'twoarea_system_test/B6'
 * '<S12>'  : 'twoarea_system_test/B7'
 * '<S13>'  : 'twoarea_system_test/B9'
 * '<S14>'  : 'twoarea_system_test/Bus_2 18 KV3'
 * '<S15>'  : 'twoarea_system_test/G1'
 * '<S16>'  : 'twoarea_system_test/G2'
 * '<S17>'  : 'twoarea_system_test/G3'
 * '<S18>'  : 'twoarea_system_test/G4'
 * '<S19>'  : 'twoarea_system_test/I_L3B1'
 * '<S20>'  : 'twoarea_system_test/I_L3B10'
 * '<S21>'  : 'twoarea_system_test/I_L3B11'
 * '<S22>'  : 'twoarea_system_test/I_L3B12'
 * '<S23>'  : 'twoarea_system_test/I_L3B13'
 * '<S24>'  : 'twoarea_system_test/I_L3B14'
 * '<S25>'  : 'twoarea_system_test/I_L3B15'
 * '<S26>'  : 'twoarea_system_test/I_L3B16'
 * '<S27>'  : 'twoarea_system_test/I_L3B17'
 * '<S28>'  : 'twoarea_system_test/I_L3B18'
 * '<S29>'  : 'twoarea_system_test/I_L3B19'
 * '<S30>'  : 'twoarea_system_test/I_L3B2'
 * '<S31>'  : 'twoarea_system_test/I_L3B20'
 * '<S32>'  : 'twoarea_system_test/I_L3B3'
 * '<S33>'  : 'twoarea_system_test/I_L3B4'
 * '<S34>'  : 'twoarea_system_test/I_L3B5'
 * '<S35>'  : 'twoarea_system_test/I_L3B6'
 * '<S36>'  : 'twoarea_system_test/I_L3B7'
 * '<S37>'  : 'twoarea_system_test/I_L3B8'
 * '<S38>'  : 'twoarea_system_test/I_L3B9'
 * '<S39>'  : 'twoarea_system_test/PA1_BR'
 * '<S40>'  : 'twoarea_system_test/PA2_BR'
 * '<S41>'  : 'twoarea_system_test/PA3_BR'
 * '<S42>'  : 'twoarea_system_test/PA3_BR10'
 * '<S43>'  : 'twoarea_system_test/PA3_BR11'
 * '<S44>'  : 'twoarea_system_test/PA3_BR12'
 * '<S45>'  : 'twoarea_system_test/PA3_BR13'
 * '<S46>'  : 'twoarea_system_test/PA3_BR14'
 * '<S47>'  : 'twoarea_system_test/PA3_BR15'
 * '<S48>'  : 'twoarea_system_test/PA3_BR16'
 * '<S49>'  : 'twoarea_system_test/PA3_BR17'
 * '<S50>'  : 'twoarea_system_test/PA3_BR18'
 * '<S51>'  : 'twoarea_system_test/PA3_BR19'
 * '<S52>'  : 'twoarea_system_test/PA3_BR4'
 * '<S53>'  : 'twoarea_system_test/PA3_BR5'
 * '<S54>'  : 'twoarea_system_test/PA3_BR6'
 * '<S55>'  : 'twoarea_system_test/PA3_BR7'
 * '<S56>'  : 'twoarea_system_test/PA3_BR8'
 * '<S57>'  : 'twoarea_system_test/PA3_BR9'
 * '<S58>'  : 'twoarea_system_test/PA4_BR'
 * '<S59>'  : 'twoarea_system_test/Three-Phase Fault1'
 * '<S60>'  : 'twoarea_system_test/powergui'
 * '<S61>'  : 'twoarea_system_test/20KV//230KV/Model'
 * '<S62>'  : 'twoarea_system_test/20KV//230KV/Model/Linear'
 * '<S63>'  : 'twoarea_system_test/20KV//230KV/Model/Linear1'
 * '<S64>'  : 'twoarea_system_test/20KV//230KV/Model/Linear2'
 * '<S65>'  : 'twoarea_system_test/20KV//230KV1/Model'
 * '<S66>'  : 'twoarea_system_test/20KV//230KV1/Model/Linear'
 * '<S67>'  : 'twoarea_system_test/20KV//230KV1/Model/Linear1'
 * '<S68>'  : 'twoarea_system_test/20KV//230KV1/Model/Linear2'
 * '<S69>'  : 'twoarea_system_test/20KV//230KV2/Model'
 * '<S70>'  : 'twoarea_system_test/20KV//230KV2/Model/Linear'
 * '<S71>'  : 'twoarea_system_test/20KV//230KV2/Model/Linear1'
 * '<S72>'  : 'twoarea_system_test/20KV//230KV2/Model/Linear2'
 * '<S73>'  : 'twoarea_system_test/20KV//230KV4/Model'
 * '<S74>'  : 'twoarea_system_test/20KV//230KV4/Model/Linear'
 * '<S75>'  : 'twoarea_system_test/20KV//230KV4/Model/Linear1'
 * '<S76>'  : 'twoarea_system_test/20KV//230KV4/Model/Linear2'
 * '<S77>'  : 'twoarea_system_test/B1/Mode I'
 * '<S78>'  : 'twoarea_system_test/B1/Mode V'
 * '<S79>'  : 'twoarea_system_test/B1/Model'
 * '<S80>'  : 'twoarea_system_test/B10/Mode I'
 * '<S81>'  : 'twoarea_system_test/B10/Mode V'
 * '<S82>'  : 'twoarea_system_test/B10/Model'
 * '<S83>'  : 'twoarea_system_test/B11/Mode I'
 * '<S84>'  : 'twoarea_system_test/B11/Mode V'
 * '<S85>'  : 'twoarea_system_test/B11/Model'
 * '<S86>'  : 'twoarea_system_test/B3/Mode I'
 * '<S87>'  : 'twoarea_system_test/B3/Mode V'
 * '<S88>'  : 'twoarea_system_test/B3/Model'
 * '<S89>'  : 'twoarea_system_test/B4/Mode I'
 * '<S90>'  : 'twoarea_system_test/B4/Mode V'
 * '<S91>'  : 'twoarea_system_test/B4/Model'
 * '<S92>'  : 'twoarea_system_test/B5/Mode I'
 * '<S93>'  : 'twoarea_system_test/B5/Mode V'
 * '<S94>'  : 'twoarea_system_test/B5/Model'
 * '<S95>'  : 'twoarea_system_test/B6/Mode I'
 * '<S96>'  : 'twoarea_system_test/B6/Mode V'
 * '<S97>'  : 'twoarea_system_test/B6/Model'
 * '<S98>'  : 'twoarea_system_test/B7/Mode I'
 * '<S99>'  : 'twoarea_system_test/B7/Mode V'
 * '<S100>' : 'twoarea_system_test/B7/Model'
 * '<S101>' : 'twoarea_system_test/B9/Mode I'
 * '<S102>' : 'twoarea_system_test/B9/Mode V'
 * '<S103>' : 'twoarea_system_test/B9/Model'
 * '<S104>' : 'twoarea_system_test/Bus_2 18 KV3/Mode I'
 * '<S105>' : 'twoarea_system_test/Bus_2 18 KV3/Mode V'
 * '<S106>' : 'twoarea_system_test/Bus_2 18 KV3/Model'
 * '<S107>' : 'twoarea_system_test/G1/Model'
 * '<S108>' : 'twoarea_system_test/G2/Model'
 * '<S109>' : 'twoarea_system_test/G3/Model'
 * '<S110>' : 'twoarea_system_test/G4/Model'
 * '<S111>' : 'twoarea_system_test/I_L3B1/Mode I'
 * '<S112>' : 'twoarea_system_test/I_L3B1/Mode V'
 * '<S113>' : 'twoarea_system_test/I_L3B1/Model'
 * '<S114>' : 'twoarea_system_test/I_L3B10/Mode I'
 * '<S115>' : 'twoarea_system_test/I_L3B10/Mode V'
 * '<S116>' : 'twoarea_system_test/I_L3B10/Model'
 * '<S117>' : 'twoarea_system_test/I_L3B11/Mode I'
 * '<S118>' : 'twoarea_system_test/I_L3B11/Mode V'
 * '<S119>' : 'twoarea_system_test/I_L3B11/Model'
 * '<S120>' : 'twoarea_system_test/I_L3B12/Mode I'
 * '<S121>' : 'twoarea_system_test/I_L3B12/Mode V'
 * '<S122>' : 'twoarea_system_test/I_L3B12/Model'
 * '<S123>' : 'twoarea_system_test/I_L3B13/Mode I'
 * '<S124>' : 'twoarea_system_test/I_L3B13/Mode V'
 * '<S125>' : 'twoarea_system_test/I_L3B13/Model'
 * '<S126>' : 'twoarea_system_test/I_L3B14/Mode I'
 * '<S127>' : 'twoarea_system_test/I_L3B14/Mode V'
 * '<S128>' : 'twoarea_system_test/I_L3B14/Model'
 * '<S129>' : 'twoarea_system_test/I_L3B15/Mode I'
 * '<S130>' : 'twoarea_system_test/I_L3B15/Mode V'
 * '<S131>' : 'twoarea_system_test/I_L3B15/Model'
 * '<S132>' : 'twoarea_system_test/I_L3B16/Mode I'
 * '<S133>' : 'twoarea_system_test/I_L3B16/Mode V'
 * '<S134>' : 'twoarea_system_test/I_L3B16/Model'
 * '<S135>' : 'twoarea_system_test/I_L3B17/Mode I'
 * '<S136>' : 'twoarea_system_test/I_L3B17/Mode V'
 * '<S137>' : 'twoarea_system_test/I_L3B17/Model'
 * '<S138>' : 'twoarea_system_test/I_L3B18/Mode I'
 * '<S139>' : 'twoarea_system_test/I_L3B18/Mode V'
 * '<S140>' : 'twoarea_system_test/I_L3B18/Model'
 * '<S141>' : 'twoarea_system_test/I_L3B19/Mode I'
 * '<S142>' : 'twoarea_system_test/I_L3B19/Mode V'
 * '<S143>' : 'twoarea_system_test/I_L3B19/Model'
 * '<S144>' : 'twoarea_system_test/I_L3B2/Mode I'
 * '<S145>' : 'twoarea_system_test/I_L3B2/Mode V'
 * '<S146>' : 'twoarea_system_test/I_L3B2/Model'
 * '<S147>' : 'twoarea_system_test/I_L3B20/Mode I'
 * '<S148>' : 'twoarea_system_test/I_L3B20/Mode V'
 * '<S149>' : 'twoarea_system_test/I_L3B20/Model'
 * '<S150>' : 'twoarea_system_test/I_L3B3/Mode I'
 * '<S151>' : 'twoarea_system_test/I_L3B3/Mode V'
 * '<S152>' : 'twoarea_system_test/I_L3B3/Model'
 * '<S153>' : 'twoarea_system_test/I_L3B4/Mode I'
 * '<S154>' : 'twoarea_system_test/I_L3B4/Mode V'
 * '<S155>' : 'twoarea_system_test/I_L3B4/Model'
 * '<S156>' : 'twoarea_system_test/I_L3B5/Mode I'
 * '<S157>' : 'twoarea_system_test/I_L3B5/Mode V'
 * '<S158>' : 'twoarea_system_test/I_L3B5/Model'
 * '<S159>' : 'twoarea_system_test/I_L3B6/Mode I'
 * '<S160>' : 'twoarea_system_test/I_L3B6/Mode V'
 * '<S161>' : 'twoarea_system_test/I_L3B6/Model'
 * '<S162>' : 'twoarea_system_test/I_L3B7/Mode I'
 * '<S163>' : 'twoarea_system_test/I_L3B7/Mode V'
 * '<S164>' : 'twoarea_system_test/I_L3B7/Model'
 * '<S165>' : 'twoarea_system_test/I_L3B8/Mode I'
 * '<S166>' : 'twoarea_system_test/I_L3B8/Mode V'
 * '<S167>' : 'twoarea_system_test/I_L3B8/Model'
 * '<S168>' : 'twoarea_system_test/I_L3B9/Mode I'
 * '<S169>' : 'twoarea_system_test/I_L3B9/Mode V'
 * '<S170>' : 'twoarea_system_test/I_L3B9/Model'
 * '<S171>' : 'twoarea_system_test/PA1_BR/Breaker A'
 * '<S172>' : 'twoarea_system_test/PA1_BR/Breaker B'
 * '<S173>' : 'twoarea_system_test/PA1_BR/Breaker C'
 * '<S174>' : 'twoarea_system_test/PA1_BR/Stair Generator'
 * '<S175>' : 'twoarea_system_test/PA1_BR/Breaker A/Model'
 * '<S176>' : 'twoarea_system_test/PA1_BR/Breaker A/Model/Stair Generator'
 * '<S177>' : 'twoarea_system_test/PA1_BR/Breaker A/Model/Stair Generator/Model'
 * '<S178>' : 'twoarea_system_test/PA1_BR/Breaker B/Model'
 * '<S179>' : 'twoarea_system_test/PA1_BR/Breaker B/Model/Stair Generator'
 * '<S180>' : 'twoarea_system_test/PA1_BR/Breaker B/Model/Stair Generator/Model'
 * '<S181>' : 'twoarea_system_test/PA1_BR/Breaker C/Model'
 * '<S182>' : 'twoarea_system_test/PA1_BR/Breaker C/Model/Stair Generator'
 * '<S183>' : 'twoarea_system_test/PA1_BR/Breaker C/Model/Stair Generator/Model'
 * '<S184>' : 'twoarea_system_test/PA1_BR/Stair Generator/Model'
 * '<S185>' : 'twoarea_system_test/PA2_BR/Breaker A'
 * '<S186>' : 'twoarea_system_test/PA2_BR/Breaker B'
 * '<S187>' : 'twoarea_system_test/PA2_BR/Breaker C'
 * '<S188>' : 'twoarea_system_test/PA2_BR/Stair Generator'
 * '<S189>' : 'twoarea_system_test/PA2_BR/Breaker A/Model'
 * '<S190>' : 'twoarea_system_test/PA2_BR/Breaker A/Model/Stair Generator'
 * '<S191>' : 'twoarea_system_test/PA2_BR/Breaker A/Model/Stair Generator/Model'
 * '<S192>' : 'twoarea_system_test/PA2_BR/Breaker B/Model'
 * '<S193>' : 'twoarea_system_test/PA2_BR/Breaker B/Model/Stair Generator'
 * '<S194>' : 'twoarea_system_test/PA2_BR/Breaker B/Model/Stair Generator/Model'
 * '<S195>' : 'twoarea_system_test/PA2_BR/Breaker C/Model'
 * '<S196>' : 'twoarea_system_test/PA2_BR/Breaker C/Model/Stair Generator'
 * '<S197>' : 'twoarea_system_test/PA2_BR/Breaker C/Model/Stair Generator/Model'
 * '<S198>' : 'twoarea_system_test/PA2_BR/Stair Generator/Model'
 * '<S199>' : 'twoarea_system_test/PA3_BR/Breaker A'
 * '<S200>' : 'twoarea_system_test/PA3_BR/Breaker B'
 * '<S201>' : 'twoarea_system_test/PA3_BR/Breaker C'
 * '<S202>' : 'twoarea_system_test/PA3_BR/Stair Generator'
 * '<S203>' : 'twoarea_system_test/PA3_BR/Breaker A/Model'
 * '<S204>' : 'twoarea_system_test/PA3_BR/Breaker A/Model/Stair Generator'
 * '<S205>' : 'twoarea_system_test/PA3_BR/Breaker A/Model/Stair Generator/Model'
 * '<S206>' : 'twoarea_system_test/PA3_BR/Breaker B/Model'
 * '<S207>' : 'twoarea_system_test/PA3_BR/Breaker B/Model/Stair Generator'
 * '<S208>' : 'twoarea_system_test/PA3_BR/Breaker B/Model/Stair Generator/Model'
 * '<S209>' : 'twoarea_system_test/PA3_BR/Breaker C/Model'
 * '<S210>' : 'twoarea_system_test/PA3_BR/Breaker C/Model/Stair Generator'
 * '<S211>' : 'twoarea_system_test/PA3_BR/Breaker C/Model/Stair Generator/Model'
 * '<S212>' : 'twoarea_system_test/PA3_BR/Stair Generator/Model'
 * '<S213>' : 'twoarea_system_test/PA3_BR10/Breaker A'
 * '<S214>' : 'twoarea_system_test/PA3_BR10/Breaker B'
 * '<S215>' : 'twoarea_system_test/PA3_BR10/Breaker C'
 * '<S216>' : 'twoarea_system_test/PA3_BR10/Stair Generator'
 * '<S217>' : 'twoarea_system_test/PA3_BR10/Breaker A/Model'
 * '<S218>' : 'twoarea_system_test/PA3_BR10/Breaker A/Model/Stair Generator'
 * '<S219>' : 'twoarea_system_test/PA3_BR10/Breaker A/Model/Stair Generator/Model'
 * '<S220>' : 'twoarea_system_test/PA3_BR10/Breaker B/Model'
 * '<S221>' : 'twoarea_system_test/PA3_BR10/Breaker B/Model/Stair Generator'
 * '<S222>' : 'twoarea_system_test/PA3_BR10/Breaker B/Model/Stair Generator/Model'
 * '<S223>' : 'twoarea_system_test/PA3_BR10/Breaker C/Model'
 * '<S224>' : 'twoarea_system_test/PA3_BR10/Breaker C/Model/Stair Generator'
 * '<S225>' : 'twoarea_system_test/PA3_BR10/Breaker C/Model/Stair Generator/Model'
 * '<S226>' : 'twoarea_system_test/PA3_BR10/Stair Generator/Model'
 * '<S227>' : 'twoarea_system_test/PA3_BR11/Breaker A'
 * '<S228>' : 'twoarea_system_test/PA3_BR11/Breaker B'
 * '<S229>' : 'twoarea_system_test/PA3_BR11/Breaker C'
 * '<S230>' : 'twoarea_system_test/PA3_BR11/Stair Generator'
 * '<S231>' : 'twoarea_system_test/PA3_BR11/Breaker A/Model'
 * '<S232>' : 'twoarea_system_test/PA3_BR11/Breaker A/Model/Stair Generator'
 * '<S233>' : 'twoarea_system_test/PA3_BR11/Breaker A/Model/Stair Generator/Model'
 * '<S234>' : 'twoarea_system_test/PA3_BR11/Breaker B/Model'
 * '<S235>' : 'twoarea_system_test/PA3_BR11/Breaker B/Model/Stair Generator'
 * '<S236>' : 'twoarea_system_test/PA3_BR11/Breaker B/Model/Stair Generator/Model'
 * '<S237>' : 'twoarea_system_test/PA3_BR11/Breaker C/Model'
 * '<S238>' : 'twoarea_system_test/PA3_BR11/Breaker C/Model/Stair Generator'
 * '<S239>' : 'twoarea_system_test/PA3_BR11/Breaker C/Model/Stair Generator/Model'
 * '<S240>' : 'twoarea_system_test/PA3_BR11/Stair Generator/Model'
 * '<S241>' : 'twoarea_system_test/PA3_BR12/Breaker A'
 * '<S242>' : 'twoarea_system_test/PA3_BR12/Breaker B'
 * '<S243>' : 'twoarea_system_test/PA3_BR12/Breaker C'
 * '<S244>' : 'twoarea_system_test/PA3_BR12/Stair Generator'
 * '<S245>' : 'twoarea_system_test/PA3_BR12/Breaker A/Model'
 * '<S246>' : 'twoarea_system_test/PA3_BR12/Breaker A/Model/Stair Generator'
 * '<S247>' : 'twoarea_system_test/PA3_BR12/Breaker A/Model/Stair Generator/Model'
 * '<S248>' : 'twoarea_system_test/PA3_BR12/Breaker B/Model'
 * '<S249>' : 'twoarea_system_test/PA3_BR12/Breaker B/Model/Stair Generator'
 * '<S250>' : 'twoarea_system_test/PA3_BR12/Breaker B/Model/Stair Generator/Model'
 * '<S251>' : 'twoarea_system_test/PA3_BR12/Breaker C/Model'
 * '<S252>' : 'twoarea_system_test/PA3_BR12/Breaker C/Model/Stair Generator'
 * '<S253>' : 'twoarea_system_test/PA3_BR12/Breaker C/Model/Stair Generator/Model'
 * '<S254>' : 'twoarea_system_test/PA3_BR12/Stair Generator/Model'
 * '<S255>' : 'twoarea_system_test/PA3_BR13/Breaker A'
 * '<S256>' : 'twoarea_system_test/PA3_BR13/Breaker B'
 * '<S257>' : 'twoarea_system_test/PA3_BR13/Breaker C'
 * '<S258>' : 'twoarea_system_test/PA3_BR13/Stair Generator'
 * '<S259>' : 'twoarea_system_test/PA3_BR13/Breaker A/Model'
 * '<S260>' : 'twoarea_system_test/PA3_BR13/Breaker A/Model/Stair Generator'
 * '<S261>' : 'twoarea_system_test/PA3_BR13/Breaker A/Model/Stair Generator/Model'
 * '<S262>' : 'twoarea_system_test/PA3_BR13/Breaker B/Model'
 * '<S263>' : 'twoarea_system_test/PA3_BR13/Breaker B/Model/Stair Generator'
 * '<S264>' : 'twoarea_system_test/PA3_BR13/Breaker B/Model/Stair Generator/Model'
 * '<S265>' : 'twoarea_system_test/PA3_BR13/Breaker C/Model'
 * '<S266>' : 'twoarea_system_test/PA3_BR13/Breaker C/Model/Stair Generator'
 * '<S267>' : 'twoarea_system_test/PA3_BR13/Breaker C/Model/Stair Generator/Model'
 * '<S268>' : 'twoarea_system_test/PA3_BR13/Stair Generator/Model'
 * '<S269>' : 'twoarea_system_test/PA3_BR14/Breaker A'
 * '<S270>' : 'twoarea_system_test/PA3_BR14/Breaker B'
 * '<S271>' : 'twoarea_system_test/PA3_BR14/Breaker C'
 * '<S272>' : 'twoarea_system_test/PA3_BR14/Stair Generator'
 * '<S273>' : 'twoarea_system_test/PA3_BR14/Breaker A/Model'
 * '<S274>' : 'twoarea_system_test/PA3_BR14/Breaker A/Model/Stair Generator'
 * '<S275>' : 'twoarea_system_test/PA3_BR14/Breaker A/Model/Stair Generator/Model'
 * '<S276>' : 'twoarea_system_test/PA3_BR14/Breaker B/Model'
 * '<S277>' : 'twoarea_system_test/PA3_BR14/Breaker B/Model/Stair Generator'
 * '<S278>' : 'twoarea_system_test/PA3_BR14/Breaker B/Model/Stair Generator/Model'
 * '<S279>' : 'twoarea_system_test/PA3_BR14/Breaker C/Model'
 * '<S280>' : 'twoarea_system_test/PA3_BR14/Breaker C/Model/Stair Generator'
 * '<S281>' : 'twoarea_system_test/PA3_BR14/Breaker C/Model/Stair Generator/Model'
 * '<S282>' : 'twoarea_system_test/PA3_BR14/Stair Generator/Model'
 * '<S283>' : 'twoarea_system_test/PA3_BR15/Breaker A'
 * '<S284>' : 'twoarea_system_test/PA3_BR15/Breaker B'
 * '<S285>' : 'twoarea_system_test/PA3_BR15/Breaker C'
 * '<S286>' : 'twoarea_system_test/PA3_BR15/Stair Generator'
 * '<S287>' : 'twoarea_system_test/PA3_BR15/Breaker A/Model'
 * '<S288>' : 'twoarea_system_test/PA3_BR15/Breaker A/Model/Stair Generator'
 * '<S289>' : 'twoarea_system_test/PA3_BR15/Breaker A/Model/Stair Generator/Model'
 * '<S290>' : 'twoarea_system_test/PA3_BR15/Breaker B/Model'
 * '<S291>' : 'twoarea_system_test/PA3_BR15/Breaker B/Model/Stair Generator'
 * '<S292>' : 'twoarea_system_test/PA3_BR15/Breaker B/Model/Stair Generator/Model'
 * '<S293>' : 'twoarea_system_test/PA3_BR15/Breaker C/Model'
 * '<S294>' : 'twoarea_system_test/PA3_BR15/Breaker C/Model/Stair Generator'
 * '<S295>' : 'twoarea_system_test/PA3_BR15/Breaker C/Model/Stair Generator/Model'
 * '<S296>' : 'twoarea_system_test/PA3_BR15/Stair Generator/Model'
 * '<S297>' : 'twoarea_system_test/PA3_BR16/Breaker A'
 * '<S298>' : 'twoarea_system_test/PA3_BR16/Breaker B'
 * '<S299>' : 'twoarea_system_test/PA3_BR16/Breaker C'
 * '<S300>' : 'twoarea_system_test/PA3_BR16/Stair Generator'
 * '<S301>' : 'twoarea_system_test/PA3_BR16/Breaker A/Model'
 * '<S302>' : 'twoarea_system_test/PA3_BR16/Breaker A/Model/Stair Generator'
 * '<S303>' : 'twoarea_system_test/PA3_BR16/Breaker A/Model/Stair Generator/Model'
 * '<S304>' : 'twoarea_system_test/PA3_BR16/Breaker B/Model'
 * '<S305>' : 'twoarea_system_test/PA3_BR16/Breaker B/Model/Stair Generator'
 * '<S306>' : 'twoarea_system_test/PA3_BR16/Breaker B/Model/Stair Generator/Model'
 * '<S307>' : 'twoarea_system_test/PA3_BR16/Breaker C/Model'
 * '<S308>' : 'twoarea_system_test/PA3_BR16/Breaker C/Model/Stair Generator'
 * '<S309>' : 'twoarea_system_test/PA3_BR16/Breaker C/Model/Stair Generator/Model'
 * '<S310>' : 'twoarea_system_test/PA3_BR16/Stair Generator/Model'
 * '<S311>' : 'twoarea_system_test/PA3_BR17/Breaker A'
 * '<S312>' : 'twoarea_system_test/PA3_BR17/Breaker B'
 * '<S313>' : 'twoarea_system_test/PA3_BR17/Breaker C'
 * '<S314>' : 'twoarea_system_test/PA3_BR17/Stair Generator'
 * '<S315>' : 'twoarea_system_test/PA3_BR17/Breaker A/Model'
 * '<S316>' : 'twoarea_system_test/PA3_BR17/Breaker A/Model/Stair Generator'
 * '<S317>' : 'twoarea_system_test/PA3_BR17/Breaker A/Model/Stair Generator/Model'
 * '<S318>' : 'twoarea_system_test/PA3_BR17/Breaker B/Model'
 * '<S319>' : 'twoarea_system_test/PA3_BR17/Breaker B/Model/Stair Generator'
 * '<S320>' : 'twoarea_system_test/PA3_BR17/Breaker B/Model/Stair Generator/Model'
 * '<S321>' : 'twoarea_system_test/PA3_BR17/Breaker C/Model'
 * '<S322>' : 'twoarea_system_test/PA3_BR17/Breaker C/Model/Stair Generator'
 * '<S323>' : 'twoarea_system_test/PA3_BR17/Breaker C/Model/Stair Generator/Model'
 * '<S324>' : 'twoarea_system_test/PA3_BR17/Stair Generator/Model'
 * '<S325>' : 'twoarea_system_test/PA3_BR18/Breaker A'
 * '<S326>' : 'twoarea_system_test/PA3_BR18/Breaker B'
 * '<S327>' : 'twoarea_system_test/PA3_BR18/Breaker C'
 * '<S328>' : 'twoarea_system_test/PA3_BR18/Stair Generator'
 * '<S329>' : 'twoarea_system_test/PA3_BR18/Breaker A/Model'
 * '<S330>' : 'twoarea_system_test/PA3_BR18/Breaker A/Model/Stair Generator'
 * '<S331>' : 'twoarea_system_test/PA3_BR18/Breaker A/Model/Stair Generator/Model'
 * '<S332>' : 'twoarea_system_test/PA3_BR18/Breaker B/Model'
 * '<S333>' : 'twoarea_system_test/PA3_BR18/Breaker B/Model/Stair Generator'
 * '<S334>' : 'twoarea_system_test/PA3_BR18/Breaker B/Model/Stair Generator/Model'
 * '<S335>' : 'twoarea_system_test/PA3_BR18/Breaker C/Model'
 * '<S336>' : 'twoarea_system_test/PA3_BR18/Breaker C/Model/Stair Generator'
 * '<S337>' : 'twoarea_system_test/PA3_BR18/Breaker C/Model/Stair Generator/Model'
 * '<S338>' : 'twoarea_system_test/PA3_BR18/Stair Generator/Model'
 * '<S339>' : 'twoarea_system_test/PA3_BR19/Breaker A'
 * '<S340>' : 'twoarea_system_test/PA3_BR19/Breaker B'
 * '<S341>' : 'twoarea_system_test/PA3_BR19/Breaker C'
 * '<S342>' : 'twoarea_system_test/PA3_BR19/Stair Generator'
 * '<S343>' : 'twoarea_system_test/PA3_BR19/Breaker A/Model'
 * '<S344>' : 'twoarea_system_test/PA3_BR19/Breaker A/Model/Stair Generator'
 * '<S345>' : 'twoarea_system_test/PA3_BR19/Breaker A/Model/Stair Generator/Model'
 * '<S346>' : 'twoarea_system_test/PA3_BR19/Breaker B/Model'
 * '<S347>' : 'twoarea_system_test/PA3_BR19/Breaker B/Model/Stair Generator'
 * '<S348>' : 'twoarea_system_test/PA3_BR19/Breaker B/Model/Stair Generator/Model'
 * '<S349>' : 'twoarea_system_test/PA3_BR19/Breaker C/Model'
 * '<S350>' : 'twoarea_system_test/PA3_BR19/Breaker C/Model/Stair Generator'
 * '<S351>' : 'twoarea_system_test/PA3_BR19/Breaker C/Model/Stair Generator/Model'
 * '<S352>' : 'twoarea_system_test/PA3_BR19/Stair Generator/Model'
 * '<S353>' : 'twoarea_system_test/PA3_BR4/Breaker A'
 * '<S354>' : 'twoarea_system_test/PA3_BR4/Breaker B'
 * '<S355>' : 'twoarea_system_test/PA3_BR4/Breaker C'
 * '<S356>' : 'twoarea_system_test/PA3_BR4/Stair Generator'
 * '<S357>' : 'twoarea_system_test/PA3_BR4/Breaker A/Model'
 * '<S358>' : 'twoarea_system_test/PA3_BR4/Breaker A/Model/Stair Generator'
 * '<S359>' : 'twoarea_system_test/PA3_BR4/Breaker A/Model/Stair Generator/Model'
 * '<S360>' : 'twoarea_system_test/PA3_BR4/Breaker B/Model'
 * '<S361>' : 'twoarea_system_test/PA3_BR4/Breaker B/Model/Stair Generator'
 * '<S362>' : 'twoarea_system_test/PA3_BR4/Breaker B/Model/Stair Generator/Model'
 * '<S363>' : 'twoarea_system_test/PA3_BR4/Breaker C/Model'
 * '<S364>' : 'twoarea_system_test/PA3_BR4/Breaker C/Model/Stair Generator'
 * '<S365>' : 'twoarea_system_test/PA3_BR4/Breaker C/Model/Stair Generator/Model'
 * '<S366>' : 'twoarea_system_test/PA3_BR4/Stair Generator/Model'
 * '<S367>' : 'twoarea_system_test/PA3_BR5/Breaker A'
 * '<S368>' : 'twoarea_system_test/PA3_BR5/Breaker B'
 * '<S369>' : 'twoarea_system_test/PA3_BR5/Breaker C'
 * '<S370>' : 'twoarea_system_test/PA3_BR5/Stair Generator'
 * '<S371>' : 'twoarea_system_test/PA3_BR5/Breaker A/Model'
 * '<S372>' : 'twoarea_system_test/PA3_BR5/Breaker A/Model/Stair Generator'
 * '<S373>' : 'twoarea_system_test/PA3_BR5/Breaker A/Model/Stair Generator/Model'
 * '<S374>' : 'twoarea_system_test/PA3_BR5/Breaker B/Model'
 * '<S375>' : 'twoarea_system_test/PA3_BR5/Breaker B/Model/Stair Generator'
 * '<S376>' : 'twoarea_system_test/PA3_BR5/Breaker B/Model/Stair Generator/Model'
 * '<S377>' : 'twoarea_system_test/PA3_BR5/Breaker C/Model'
 * '<S378>' : 'twoarea_system_test/PA3_BR5/Breaker C/Model/Stair Generator'
 * '<S379>' : 'twoarea_system_test/PA3_BR5/Breaker C/Model/Stair Generator/Model'
 * '<S380>' : 'twoarea_system_test/PA3_BR5/Stair Generator/Model'
 * '<S381>' : 'twoarea_system_test/PA3_BR6/Breaker A'
 * '<S382>' : 'twoarea_system_test/PA3_BR6/Breaker B'
 * '<S383>' : 'twoarea_system_test/PA3_BR6/Breaker C'
 * '<S384>' : 'twoarea_system_test/PA3_BR6/Stair Generator'
 * '<S385>' : 'twoarea_system_test/PA3_BR6/Breaker A/Model'
 * '<S386>' : 'twoarea_system_test/PA3_BR6/Breaker A/Model/Stair Generator'
 * '<S387>' : 'twoarea_system_test/PA3_BR6/Breaker A/Model/Stair Generator/Model'
 * '<S388>' : 'twoarea_system_test/PA3_BR6/Breaker B/Model'
 * '<S389>' : 'twoarea_system_test/PA3_BR6/Breaker B/Model/Stair Generator'
 * '<S390>' : 'twoarea_system_test/PA3_BR6/Breaker B/Model/Stair Generator/Model'
 * '<S391>' : 'twoarea_system_test/PA3_BR6/Breaker C/Model'
 * '<S392>' : 'twoarea_system_test/PA3_BR6/Breaker C/Model/Stair Generator'
 * '<S393>' : 'twoarea_system_test/PA3_BR6/Breaker C/Model/Stair Generator/Model'
 * '<S394>' : 'twoarea_system_test/PA3_BR6/Stair Generator/Model'
 * '<S395>' : 'twoarea_system_test/PA3_BR7/Breaker A'
 * '<S396>' : 'twoarea_system_test/PA3_BR7/Breaker B'
 * '<S397>' : 'twoarea_system_test/PA3_BR7/Breaker C'
 * '<S398>' : 'twoarea_system_test/PA3_BR7/Stair Generator'
 * '<S399>' : 'twoarea_system_test/PA3_BR7/Breaker A/Model'
 * '<S400>' : 'twoarea_system_test/PA3_BR7/Breaker A/Model/Stair Generator'
 * '<S401>' : 'twoarea_system_test/PA3_BR7/Breaker A/Model/Stair Generator/Model'
 * '<S402>' : 'twoarea_system_test/PA3_BR7/Breaker B/Model'
 * '<S403>' : 'twoarea_system_test/PA3_BR7/Breaker B/Model/Stair Generator'
 * '<S404>' : 'twoarea_system_test/PA3_BR7/Breaker B/Model/Stair Generator/Model'
 * '<S405>' : 'twoarea_system_test/PA3_BR7/Breaker C/Model'
 * '<S406>' : 'twoarea_system_test/PA3_BR7/Breaker C/Model/Stair Generator'
 * '<S407>' : 'twoarea_system_test/PA3_BR7/Breaker C/Model/Stair Generator/Model'
 * '<S408>' : 'twoarea_system_test/PA3_BR7/Stair Generator/Model'
 * '<S409>' : 'twoarea_system_test/PA3_BR8/Breaker A'
 * '<S410>' : 'twoarea_system_test/PA3_BR8/Breaker B'
 * '<S411>' : 'twoarea_system_test/PA3_BR8/Breaker C'
 * '<S412>' : 'twoarea_system_test/PA3_BR8/Stair Generator'
 * '<S413>' : 'twoarea_system_test/PA3_BR8/Breaker A/Model'
 * '<S414>' : 'twoarea_system_test/PA3_BR8/Breaker A/Model/Stair Generator'
 * '<S415>' : 'twoarea_system_test/PA3_BR8/Breaker A/Model/Stair Generator/Model'
 * '<S416>' : 'twoarea_system_test/PA3_BR8/Breaker B/Model'
 * '<S417>' : 'twoarea_system_test/PA3_BR8/Breaker B/Model/Stair Generator'
 * '<S418>' : 'twoarea_system_test/PA3_BR8/Breaker B/Model/Stair Generator/Model'
 * '<S419>' : 'twoarea_system_test/PA3_BR8/Breaker C/Model'
 * '<S420>' : 'twoarea_system_test/PA3_BR8/Breaker C/Model/Stair Generator'
 * '<S421>' : 'twoarea_system_test/PA3_BR8/Breaker C/Model/Stair Generator/Model'
 * '<S422>' : 'twoarea_system_test/PA3_BR8/Stair Generator/Model'
 * '<S423>' : 'twoarea_system_test/PA3_BR9/Breaker A'
 * '<S424>' : 'twoarea_system_test/PA3_BR9/Breaker B'
 * '<S425>' : 'twoarea_system_test/PA3_BR9/Breaker C'
 * '<S426>' : 'twoarea_system_test/PA3_BR9/Stair Generator'
 * '<S427>' : 'twoarea_system_test/PA3_BR9/Breaker A/Model'
 * '<S428>' : 'twoarea_system_test/PA3_BR9/Breaker A/Model/Stair Generator'
 * '<S429>' : 'twoarea_system_test/PA3_BR9/Breaker A/Model/Stair Generator/Model'
 * '<S430>' : 'twoarea_system_test/PA3_BR9/Breaker B/Model'
 * '<S431>' : 'twoarea_system_test/PA3_BR9/Breaker B/Model/Stair Generator'
 * '<S432>' : 'twoarea_system_test/PA3_BR9/Breaker B/Model/Stair Generator/Model'
 * '<S433>' : 'twoarea_system_test/PA3_BR9/Breaker C/Model'
 * '<S434>' : 'twoarea_system_test/PA3_BR9/Breaker C/Model/Stair Generator'
 * '<S435>' : 'twoarea_system_test/PA3_BR9/Breaker C/Model/Stair Generator/Model'
 * '<S436>' : 'twoarea_system_test/PA3_BR9/Stair Generator/Model'
 * '<S437>' : 'twoarea_system_test/PA4_BR/Breaker A'
 * '<S438>' : 'twoarea_system_test/PA4_BR/Breaker B'
 * '<S439>' : 'twoarea_system_test/PA4_BR/Breaker C'
 * '<S440>' : 'twoarea_system_test/PA4_BR/Stair Generator'
 * '<S441>' : 'twoarea_system_test/PA4_BR/Breaker A/Model'
 * '<S442>' : 'twoarea_system_test/PA4_BR/Breaker A/Model/Stair Generator'
 * '<S443>' : 'twoarea_system_test/PA4_BR/Breaker A/Model/Stair Generator/Model'
 * '<S444>' : 'twoarea_system_test/PA4_BR/Breaker B/Model'
 * '<S445>' : 'twoarea_system_test/PA4_BR/Breaker B/Model/Stair Generator'
 * '<S446>' : 'twoarea_system_test/PA4_BR/Breaker B/Model/Stair Generator/Model'
 * '<S447>' : 'twoarea_system_test/PA4_BR/Breaker C/Model'
 * '<S448>' : 'twoarea_system_test/PA4_BR/Breaker C/Model/Stair Generator'
 * '<S449>' : 'twoarea_system_test/PA4_BR/Breaker C/Model/Stair Generator/Model'
 * '<S450>' : 'twoarea_system_test/PA4_BR/Stair Generator/Model'
 * '<S451>' : 'twoarea_system_test/Three-Phase Fault1/Fault A'
 * '<S452>' : 'twoarea_system_test/Three-Phase Fault1/Fault B'
 * '<S453>' : 'twoarea_system_test/Three-Phase Fault1/Fault C'
 * '<S454>' : 'twoarea_system_test/Three-Phase Fault1/Stair Generator'
 * '<S455>' : 'twoarea_system_test/Three-Phase Fault1/Fault A/Model'
 * '<S456>' : 'twoarea_system_test/Three-Phase Fault1/Fault A/Model/Stair Generator'
 * '<S457>' : 'twoarea_system_test/Three-Phase Fault1/Fault A/Model/Stair Generator/Model'
 * '<S458>' : 'twoarea_system_test/Three-Phase Fault1/Fault B/Model'
 * '<S459>' : 'twoarea_system_test/Three-Phase Fault1/Fault B/Model/Stair Generator'
 * '<S460>' : 'twoarea_system_test/Three-Phase Fault1/Fault B/Model/Stair Generator/Model'
 * '<S461>' : 'twoarea_system_test/Three-Phase Fault1/Fault C/Model'
 * '<S462>' : 'twoarea_system_test/Three-Phase Fault1/Fault C/Model/Stair Generator'
 * '<S463>' : 'twoarea_system_test/Three-Phase Fault1/Fault C/Model/Stair Generator/Model'
 * '<S464>' : 'twoarea_system_test/Three-Phase Fault1/Stair Generator/Model'
 * '<S465>' : 'twoarea_system_test/powergui/EquivalentModel1'
 * '<S466>' : 'twoarea_system_test/powergui/EquivalentModel1/Gates'
 * '<S467>' : 'twoarea_system_test/powergui/EquivalentModel1/Sources'
 * '<S468>' : 'twoarea_system_test/powergui/EquivalentModel1/Status'
 * '<S469>' : 'twoarea_system_test/powergui/EquivalentModel1/Yout'
 */
#endif                                 /* RTW_HEADER_twoarea_system_test_h_ */
