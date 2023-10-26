/*
 * ECU_7SEGMETN_PROGRAM.c
 *
 *  Created on: Oct 22, 2023
 *      Author: mohamed
 */


#include"../ECU_7Segment_HEADERS/ECU_7segment_Interface.h"
Std_ReturnType ECU_7Seg_Init(ssd_t * ssd){
	Std_ReturnType ret = E_NOT_OK;



	ret&=Mcal_Dio_Std_Set_Pin_Direction(&ssd->en);
	ret&=Mcal_Dio_Std_Set_Pin_Direction(&ssd->p1);

	ret&=Mcal_Dio_Std_Set_Pin_Direction(&ssd->p2);

	ret&=Mcal_Dio_Std_Set_Pin_Direction(&ssd->p8);

	ret&=Mcal_Dio_Std_Set_Pin_Direction(&ssd->p4);
	ret&=Mcal_Dio_Std_Set_Pin_Value(&ssd->en,!(ssd->common_t));//deactivate
return ret;
}



Std_ReturnType ECU_7Seg_Print_Num(ssd_t * ssd,u8 value){

	Std_ReturnType ret = E_OK;

ret=Mcal_Dio_Std_Set_Pin_Value(&ssd->p1,(value&0x01)>>0);
ret=Mcal_Dio_Std_Set_Pin_Value(&ssd->p2,(value&0x02)>>1);
ret=Mcal_Dio_Std_Set_Pin_Value(&ssd->p4,(value&0x04)>>2);
ret=Mcal_Dio_Std_Set_Pin_Value(&(ssd->p8),(value&0x08)>>3);
ret&=Mcal_Dio_Std_Set_Pin_Value(&ssd->en,(ssd->common_t));//activate
	return ret;



}

