#ifndef __I2C_SLAVE_H
#define __I2C_SLAVE_H
#include "stm8s.h"


/********************** EXTERNAL FUNCTION **********************************/  
void transaction_begin(void);
void transaction_end(void);
void byte_received(u8 u8_RxData);
u8 byte_write(void);
void Init_I2C(void);
void I2C_Slave_check_event();  //Call From ISR


/********************** I2C configuration variables *****************************/  
/* Define I2C Address mode ---------------------------------------------------*/
#define I2C_slave_7Bits_Address

/* Define Slave Address  -----------------------------------------------------*/

#define SLAVE_ADDRESS 0x50


#endif /*__I2C_SLAVE_H*/


/******************* (C) COPYRIGHT 2009 STMicroelectronics *****END OF FILE****/
