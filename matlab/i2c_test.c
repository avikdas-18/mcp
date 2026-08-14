/*
 * File: i2c_test.c
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

#include "i2c_test.h"
#include "rtwtypes.h"
#include "i2c_test_types.h"
#include "i2c_test_private.h"
#include "mw_stm32_i2c_ll.h"

/* Block states (default storage) */
DW_i2c_test_T i2c_test_DW;

/* Real-time model */
static RT_MODEL_i2c_test_T i2c_test_M_;
RT_MODEL_i2c_test_T *const i2c_test_M = &i2c_test_M_;

/* Forward declaration for local functions */
static void i2c_test_I2CDrvBlock_setupImpl(stm32cube_blocks_I2CControlle_T *obj);

/* Forward declaration for local functions */
static void i2c_tes_I2CDrvBlock_setupImpl_c(stm32cube_blocks_I2CControlle_T *obj);
static void i2c_test_I2CDrvBlock_setupImpl(stm32cube_blocks_I2CControlle_T *obj)
{
  STM32_I2C_Struct_T * i2cBlockStruct_loc;
  STM32_I2C_ModuleStruct_T c;

  /* Start for MATLABSystem: '<Root>/I2C Controller Write1' */
  c.instance = I2C2;
  c.txCommunicationMode = MW_I2C_COMMUNICATION_POLLING;
  c.rxCommunicationMode = MW_I2C_COMMUNICATION_POLLING;
  obj->MW_I2C_BlockStruct.h_i2c = NULL;
  obj->MW_I2C_BlockStruct.rxBufferStructPtr = NULL;
  obj->MW_I2C_BlockStruct.txBufferStructPtr = NULL;
  i2cBlockStruct_loc = (STM32_I2C_Struct_T *)(&obj->MW_I2C_BlockStruct);
  obj->MW_I2C_HANDLE = I2C_Init(&c, i2cBlockStruct_loc);
}

/* System initialize for atomic system: */
void i2c_te_I2CControllerWrite1_Init(DW_I2CControllerWrite1_i2c_te_T *localDW)
{
  /* Start for MATLABSystem: '<Root>/I2C Controller Write1' */
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  localDW->obj.isSetupComplete = false;
  localDW->obj.isInitialized = 1;
  i2c_test_I2CDrvBlock_setupImpl(&localDW->obj);
  localDW->obj.isSetupComplete = true;
}

/* Output and update for atomic system: */
void i2c_test_I2CControllerWrite1(uint8_T rtu_0, DW_I2CControllerWrite1_i2c_te_T
  *localDW)
{
  /* MATLABSystem: '<Root>/I2C Controller Write1' */
  I2C_Controller_TransmitData_Polling(localDW->obj.MW_I2C_HANDLE, 80, &rtu_0, 1U,
    false, false, 10U);
}

/* Termination for atomic system: */
void i2c_te_I2CControllerWrite1_Term(DW_I2CControllerWrite1_i2c_te_T *localDW)
{
  /* Terminate for MATLABSystem: '<Root>/I2C Controller Write1' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/I2C Controller Write1' */
}

static void i2c_tes_I2CDrvBlock_setupImpl_c(stm32cube_blocks_I2CControlle_T *obj)
{
  STM32_I2C_Struct_T * i2cBlockStruct_loc;
  STM32_I2C_ModuleStruct_T c;

  /* Start for MATLABSystem: '<Root>/I2C Controller Write5' */
  c.instance = I2C2;
  c.txCommunicationMode = MW_I2C_COMMUNICATION_POLLING;
  c.rxCommunicationMode = MW_I2C_COMMUNICATION_POLLING;
  obj->MW_I2C_BlockStruct.h_i2c = NULL;
  obj->MW_I2C_BlockStruct.rxBufferStructPtr = NULL;
  obj->MW_I2C_BlockStruct.txBufferStructPtr = NULL;
  i2cBlockStruct_loc = (STM32_I2C_Struct_T *)(&obj->MW_I2C_BlockStruct);
  obj->MW_I2C_HANDLE = I2C_Init(&c, i2cBlockStruct_loc);
}

/* Model step function */
void i2c_test_step(void)
{
  GPIO_TypeDef * portNameLoc;
  int32_T rtb_PulseGenerator;
  uint8_T txDataSwapLoc[4];

  /* Constant: '<Root>/Constant' */
  i2c_test_I2CControllerWrite1(64, &i2c_test_DW.I2CControllerWrite1);

  /* Constant: '<Root>/Constant1' */
  i2c_test_I2CControllerWrite1(15, &i2c_test_DW.I2CControllerWrite2);

  /* Constant: '<Root>/Constant2' */
  i2c_test_I2CControllerWrite1(160, &i2c_test_DW.I2CControllerWrite3);

  /* MATLABSystem: '<Root>/I2C Controller Write5' incorporates:
   *  Constant: '<Root>/Constant3'
   */
  mw_swap_xint32_uint8(&txDataSwapLoc[0], &i2c_test_ConstP.Constant3_Value, 1U);
  I2C_Controller_TransmitData_Polling(i2c_test_DW.obj.MW_I2C_HANDLE, 80,
    &txDataSwapLoc[0], 4U, false, false, 10U);

  /* Constant: '<Root>/Constant4' */
  i2c_test_I2CControllerWrite1(192, &i2c_test_DW.I2CControllerWrite4);

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  rtb_PulseGenerator = ((i2c_test_DW.clockTickCounter < 1) &&
                        (i2c_test_DW.clockTickCounter >= 0));
  if (i2c_test_DW.clockTickCounter >= 1) {
    i2c_test_DW.clockTickCounter = 0;
  } else {
    i2c_test_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator' */

  /* MATLABSystem: '<S3>/Digital Port Write' */
  portNameLoc = GPIOD;
  if (rtb_PulseGenerator != 0) {
    rtb_PulseGenerator = 32768;
  } else {
    rtb_PulseGenerator = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)rtb_PulseGenerator);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)rtb_PulseGenerator & 32768U);

  /* End of MATLABSystem: '<S3>/Digital Port Write' */
}

/* Model initialize function */
void i2c_test_initialize(void)
{
  i2c_te_I2CControllerWrite1_Init(&i2c_test_DW.I2CControllerWrite1);
  i2c_te_I2CControllerWrite1_Init(&i2c_test_DW.I2CControllerWrite2);
  i2c_te_I2CControllerWrite1_Init(&i2c_test_DW.I2CControllerWrite3);

  /* Start for MATLABSystem: '<Root>/I2C Controller Write5' */
  i2c_test_DW.obj.matlabCodegenIsDeleted = false;
  i2c_test_DW.obj.isSetupComplete = false;
  i2c_test_DW.obj.isInitialized = 1;
  i2c_tes_I2CDrvBlock_setupImpl_c(&i2c_test_DW.obj);
  i2c_test_DW.obj.isSetupComplete = true;
  i2c_te_I2CControllerWrite1_Init(&i2c_test_DW.I2CControllerWrite4);
}

/* Model terminate function */
void i2c_test_terminate(void)
{
  i2c_te_I2CControllerWrite1_Term(&i2c_test_DW.I2CControllerWrite1);
  i2c_te_I2CControllerWrite1_Term(&i2c_test_DW.I2CControllerWrite2);
  i2c_te_I2CControllerWrite1_Term(&i2c_test_DW.I2CControllerWrite3);

  /* Terminate for MATLABSystem: '<Root>/I2C Controller Write5' */
  if (!i2c_test_DW.obj.matlabCodegenIsDeleted) {
    i2c_test_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/I2C Controller Write5' */
  i2c_te_I2CControllerWrite1_Term(&i2c_test_DW.I2CControllerWrite4);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
