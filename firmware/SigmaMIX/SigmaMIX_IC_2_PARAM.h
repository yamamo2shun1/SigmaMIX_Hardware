/*
 * File:           C:\Users\shun\Desktop\SigmaStudio\SigmaMIX_IC_2_PARAM.h
 *
 * Created:        Friday, June 09, 2017 5:08:57 PM
 * Description:    SigmaMIX:IC 2 parameter RAM definitions.
 *
 * This software is distributed in the hope that it will be useful,
 * but is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
 * CONDITIONS OF ANY KIND, without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * This software may only be used to program products purchased from
 * Analog Devices for incorporation by you into audio products that
 * are intended for resale to audio product end users. This software
 * may not be distributed whole or in any part to third parties.
 *
 * Copyright ©2017 Analog Devices, Inc. All rights reserved.
 */
#ifndef __SIGMAMIX_IC_2_PARAM_H__
#define __SIGMAMIX_IC_2_PARAM_H__


/* Module fader2 - Single SW slew vol (adjustable)*/
#define MOD_FADER2_COUNT                               2
#define MOD_FADER2_DEVICE                              "IC2"
#define MOD_FADER2_ALG0_TARGET_ADDR                    0
#define MOD_FADER2_ALG0_TARGET_FIXPT                   0x00067D4E
#define MOD_FADER2_ALG0_TARGET_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.0506990708274704)
#define MOD_FADER2_ALG0_TARGET_TYPE                    SIGMASTUDIOTYPE_FIXPOINT
#define MOD_FADER2_ALG0_STEP_ADDR                      1
#define MOD_FADER2_ALG0_STEP_FIXPT                     0x00080000
#define MOD_FADER2_ALG0_STEP_VALUE                     SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.0625)
#define MOD_FADER2_ALG0_STEP_TYPE                      SIGMASTUDIOTYPE_FIXPOINT

/* Module fader1 - Single SW slew vol (adjustable)*/
#define MOD_FADER1_COUNT                               2
#define MOD_FADER1_DEVICE                              "IC2"
#define MOD_FADER1_ALG0_TARGET_ADDR                    2
#define MOD_FADER1_ALG0_TARGET_FIXPT                   0x00067D4E
#define MOD_FADER1_ALG0_TARGET_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.0506990708274704)
#define MOD_FADER1_ALG0_TARGET_TYPE                    SIGMASTUDIOTYPE_FIXPOINT
#define MOD_FADER1_ALG0_STEP_ADDR                      3
#define MOD_FADER1_ALG0_STEP_FIXPT                     0x00080000
#define MOD_FADER1_ALG0_STEP_VALUE                     SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.0625)
#define MOD_FADER1_ALG0_STEP_TYPE                      SIGMASTUDIOTYPE_FIXPOINT

/* Module St Mixer1 - Stereo Mixer*/
#define MOD_STMIXER1_COUNT                             2
#define MOD_STMIXER1_DEVICE                            "IC2"
#define MOD_STMIXER1_ALG0_STAGE0_VOLUME_ADDR           4
#define MOD_STMIXER1_ALG0_STAGE0_VOLUME_FIXPT          0x00800000
#define MOD_STMIXER1_ALG0_STAGE0_VOLUME_VALUE          SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_STMIXER1_ALG0_STAGE0_VOLUME_TYPE           SIGMASTUDIOTYPE_FIXPOINT
#define MOD_STMIXER1_ALG0_STAGE1_VOLUME_ADDR           5
#define MOD_STMIXER1_ALG0_STAGE1_VOLUME_FIXPT          0x00800000
#define MOD_STMIXER1_ALG0_STAGE1_VOLUME_VALUE          SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_STMIXER1_ALG0_STAGE1_VOLUME_TYPE           SIGMASTUDIOTYPE_FIXPOINT

#endif
