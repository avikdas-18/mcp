/*
 * File: i2c_test.h
 *
 * Code generated for Simulink model 'i2c_test'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Aug 14 10:35:27 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef i2c_test_h_
#define i2c_test_h_
#ifndef i2c_test_COMMON_INCLUDES_
#define i2c_test_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#include "main.h"
#include "mw_stm32_i2c_ll.h"
#include "mw_stm32_utils.h"
#endif                                 /* i2c_test_COMMON_INCLUDES_ */

#include "i2c_test_types.h"
#include <stddef.h>
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>/I2C Controller Write1' */
typedef struct {
  stm32cube_blocks_I2CControlle_T obj; /* '<Root>/I2C Controller Write1' */
  boolean_T objisempty;                /* '<Root>/I2C Controller Write1' */
} DW_I2CControllerWrite1_i2c_te_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32cube_blocks_I2CControlle_T obj; /* '<Root>/I2C Controller Write5' */
  int32_T clockTickCounter;            /* '<Root>/Pulse Generator' */
  DW_I2CControllerWrite1_i2c_te_T I2CControllerWrite4;/* '<Root>/I2C Controller Write1' */
  DW_I2CControllerWrite1_i2c_te_T I2CControllerWrite3;/* '<Root>/I2C Controller Write1' */
  DW_I2CControllerWrite1_i2c_te_T I2CControllerWrite2;/* '<Root>/I2C Controller Write1' */
  DW_I2CControllerWrite1_i2c_te_T I2CControllerWrite1;/* '<Root>/I2C Controller Write1' */
} DW_i2c_test_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: 0xC0400FA0
   * Referenced by: '<Root>/Constant3'
   */
  uint32_T Constant3_Value;
} ConstP_i2c_test_T;

/* Real-time Model Data Structure */
struct tag_RTM_i2c_test_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_i2c_test_T i2c_test_DW;

/* Constant parameters (default storage) */
extern const ConstP_i2c_test_T i2c_test_ConstP;

/* Model entry point functions */
extern void i2c_test_initialize(void);
extern void i2c_test_step(void);
extern void i2c_test_terminate(void);

/* Real-time Model object */
extern RT_MODEL_i2c_test_T *const i2c_test_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<Root>/Scope1' : Unused code path elimination
 * Block '<Root>/Scope2' : Unused code path elimination
 * Block '<Root>/Scope3' : Unused code path elimination
 * Block '<Root>/Scope4' : Unused code path elimination
 */

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
 * '<Root>' : 'i2c_test'
 * '<S1>'   : 'i2c_test/Digital Port Write'
 * '<S2>'   : 'i2c_test/Digital Port Write/ECSoC'
 * '<S3>'   : 'i2c_test/Digital Port Write/ECSoC/ECSimCodegen'
 */
#endif                                 /* i2c_test_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
