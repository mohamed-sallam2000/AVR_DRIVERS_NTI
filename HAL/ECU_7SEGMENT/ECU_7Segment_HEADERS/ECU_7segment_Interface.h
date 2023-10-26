/*
 * ECU_7segment_Interface.h
 *
 *  Created on: Oct 22, 2023
 *      Author: mohamed
 */

#ifndef HAL_ECU_7SEGMENT_ECU_7SEGMENT_INTERFACE_H_
#define HAL_ECU_7SEGMENT_ECU_7SEGMENT_INTERFACE_H_
#include "../../../MCAL_DIO/DIO_HEADERS/MCAL_DIO_INTERFACE.h"

#include"ECU_7Segment_Config.h"




typedef struct {
	pin_t p1;
	pin_t p2;
	pin_t p4;
	pin_t p8;
	pin_t en;
u8 common_t:1;


}ssd_t;


/*function deecliration*/
Std_ReturnType ECU_7Seg_Init(ssd_t * ssd_obj);
Std_ReturnType ECU_7Seg_Print_Num(ssd_t * ssd,u8 value);
//a=10||b=11||c=12||d=13||e=14||f=15
// print 15

#endif /* HAL_ECU_7SEGMENT_ECU_7SEGMENT_INTERFACE_H_ */
/*ssd_t seven1;
seven1.common_t=COMMON_ANODE;
seven1.en.pin=pin3;
seven1.en.port_index=PORT_A;
seven1.en.direction=OUTPUT;

seven1.p1.pin=pin0;
seven1.p1.port_index=PORT_B;
seven1.p1.direction=OUTPUT;

seven1.p2.pin=pin1;
seven1.p2.port_index=PORT_B;
seven1.p2.direction=OUTPUT;

seven1.p4.pin=pin2;
seven1.p4.port_index=PORT_B;
seven1.p4.direction=OUTPUT;

seven1.p8.pin=pin4;
seven1.p8.port_index=PORT_B;
seven1.p8.direction=OUTPUT;
ECU_7Seg_Init(&seven1);
ECU_7Seg_Print_Num(&seven1,7);*/
