/*
 * SigmaStudioFW.c
 *
 *  Created on: 2017/06/01
 *      Author: shun
 */

#include "SigmaStudioFW.h"

I2C_TransferReturn_TypeDef I2CSPM_Transfer(I2C_TypeDef *i2c, I2C_TransferSeq_TypeDef *seq)
{
  I2C_TransferReturn_TypeDef ret;
  uint32_t timeout = I2CSPM_TRANSFER_TIMEOUT;
  /* Do a polled transfer */
  ret = I2C_TransferInit(i2c, seq);
  while (ret == i2cTransferInProgress && timeout--)
  {
    ret = I2C_Transfer(i2c);
  }
  return ret;
}

//int32_t SIGMA_WRITE_REGISTER_BLOCK(uint8_t devAddress, uint16_t address, uint16_t length, uint8_t *pData)
int32_t SIGMA_WRITE_REGISTER_BLOCK(uint8_t devAddress, uint16_t address, uint16_t length, ADI_REG_TYPE *pData)
{
  I2C_TransferSeq_TypeDef    seq;
  I2C_TransferReturn_TypeDef ret;
  uint8_t  i2c_read_data[2];
  static uint8_t i2c_write_data[5500 + 2];
  //uint8_t i2c_write_data[length + 2];
  //uint8_t *i2c_write_data = (uint8_t *)malloc(sizeof(uint8_t) * (length + 2));

  seq.addr  = devAddress;
  seq.flags = I2C_FLAG_WRITE;
  /* Select command to issue */
  i2c_write_data[0] = (address >> 8) & 0x00FF;
  i2c_write_data[1] = address & 0x00FF;

  for (uint32_t i = 0; i < length; i++)
  {
    i2c_write_data[i + 2] = pData[i];
  }
  seq.buf[0].data   = i2c_write_data;
  seq.buf[0].len    = length + 2;
  /* Select location/length of data to be read */
  seq.buf[1].data = i2c_read_data;
  seq.buf[1].len  = 0;

  ret = I2CSPM_Transfer(I2C0, &seq);

  if (ret != i2cTransferDone)
  {
    return((uint32_t) ret);
  }

  //free(i2c_write_data);

  return((uint32_t) 0);
}

int32_t SIGMA_WRITE_REGISTER_CONTROL(uint8_t devAddress, uint16_t address, uint16_t length, ADI_REG_U8 *pData)
{
  I2C_TransferSeq_TypeDef    seq;
  I2C_TransferReturn_TypeDef ret;
  uint8_t  i2c_read_data[2];
  static uint8_t i2c_write_data[100 + 2];
  //uint8_t i2c_write_data[length + 2];
  //uint8_t *i2c_write_data = (uint8_t *)malloc(sizeof(uint8_t) * (length + 2));

  seq.addr  = devAddress;
  seq.flags = I2C_FLAG_WRITE;
  /* Select command to issue */
  i2c_write_data[0] = (address >> 8) & 0x00FF;
  i2c_write_data[1] = address & 0x00FF;

  for (uint32_t i = 0; i < length; i++)
  {
    i2c_write_data[i + 2] = pData[i];
  }
  seq.buf[0].data   = i2c_write_data;
  seq.buf[0].len    = length + 2;
  /* Select location/length of data to be read */
  seq.buf[1].data = i2c_read_data;
  seq.buf[1].len  = 0;

  ret = I2CSPM_Transfer(I2C0, &seq);

  if (ret != i2cTransferDone)
  {
    return((uint32_t) ret);
  }

  //free(i2c_write_data);

  return((uint32_t) 0);
}
