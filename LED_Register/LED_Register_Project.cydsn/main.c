/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/

/////Test_project////
#include "project.h"

void GPIO_init(void);

int main(void)
{
    GPIO_init();

    for(;;)
    {
      CY_SET_REG32((void *)(CYREG_GPIO_PRT2_DR), 0x00000000u);
	  CyDelay(200);
	  CY_SET_REG32((void *)(CYREG_GPIO_PRT2_DR), 0x00000040u);
	  CyDelay(200);
		
    }
}

void GPIO_init(void)
{	
	//设置GPIO的模式 P2.6/输出模式增强驱动模式/FAST/COMS
	CY_SET_REG32((void *)(CYREG_GPIO_PRT2_PC), 0x021C0000u);
	//设置GPIO的值
	CY_SET_REG32((void *)(CYREG_GPIO_PRT2_DR), 0x00000040u);
 }
/* [] END OF FILE */
