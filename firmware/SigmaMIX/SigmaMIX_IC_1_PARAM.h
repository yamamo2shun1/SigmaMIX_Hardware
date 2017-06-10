/*
 * File:           C:\Users\shun\Desktop\SigmaStudio\SigmaMIX_IC_1_PARAM.h
 *
 * Created:        Friday, June 09, 2017 5:08:57 PM
 * Description:    SigmaMIX:IC 1 parameter RAM definitions.
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
#ifndef __SIGMAMIX_IC_1_PARAM_H__
#define __SIGMAMIX_IC_1_PARAM_H__


/* Module Tone1 - Sine Tone*/
#define MOD_TONE1_COUNT                                3
#define MOD_TONE1_DEVICE                               "IC1"
#define MOD_STATIC_TONE1_ALG0_MASK_ADDR                0
#define MOD_STATIC_TONE1_ALG0_MASK_FIXPT               0x000000FF
#define MOD_STATIC_TONE1_ALG0_MASK_VALUE               SIGMASTUDIOTYPE_INTEGER_CONVERT(255)
#define MOD_STATIC_TONE1_ALG0_MASK_TYPE                SIGMASTUDIOTYPE_INTEGER
#define MOD_TONE1_ALG0_INCREMENT_ADDR                  1
#define MOD_TONE1_ALG0_INCREMENT_FIXPT                 0x000258BF
#define MOD_TONE1_ALG0_INCREMENT_VALUE                 SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.0183333333333333)
#define MOD_TONE1_ALG0_INCREMENT_TYPE                  SIGMASTUDIOTYPE_FIXPOINT
#define MOD_TONE1_ALG0_ON_ADDR                         2
#define MOD_TONE1_ALG0_ON_FIXPT                        0x00000000
#define MOD_TONE1_ALG0_ON_VALUE                        SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0)
#define MOD_TONE1_ALG0_ON_TYPE                         SIGMASTUDIOTYPE_FIXPOINT

/* Module Gain1 - Linear Gain*/
#define MOD_GAIN1_COUNT                                1
#define MOD_GAIN1_DEVICE                               "IC1"
#define MOD_GAIN1_GAIN1940ALGNS1_ADDR                  3
#define MOD_GAIN1_GAIN1940ALGNS1_FIXPT                 0x00400000
#define MOD_GAIN1_GAIN1940ALGNS1_VALUE                 SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.5)
#define MOD_GAIN1_GAIN1940ALGNS1_TYPE                  SIGMASTUDIOTYPE_FIXPOINT

/* Module St Mixer2 - Stereo Mixer*/
#define MOD_STMIXER2_COUNT                             2
#define MOD_STMIXER2_DEVICE                            "IC1"
#define MOD_STMIXER2_ALG0_STAGE0_VOLUME_ADDR           4
#define MOD_STMIXER2_ALG0_STAGE0_VOLUME_FIXPT          0x00800000
#define MOD_STMIXER2_ALG0_STAGE0_VOLUME_VALUE          SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_STMIXER2_ALG0_STAGE0_VOLUME_TYPE           SIGMASTUDIOTYPE_FIXPOINT
#define MOD_STMIXER2_ALG0_STAGE1_VOLUME_ADDR           5
#define MOD_STMIXER2_ALG0_STAGE1_VOLUME_FIXPT          0x00800000
#define MOD_STMIXER2_ALG0_STAGE1_VOLUME_VALUE          SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_STMIXER2_ALG0_STAGE1_VOLUME_TYPE           SIGMASTUDIOTYPE_FIXPOINT

#endif
