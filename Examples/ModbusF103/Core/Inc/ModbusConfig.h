/*
 * ModbusConfig.h
 *
 *  Created on: Apr 28, 2021
 *      Author: Alejandro Mera
 *
 *  This is a template for the Modbus library configuration.
 *  Every project needs configure and include a copy of this file renamed to ModbusConfig.h
 */

#ifndef THIRD_PARTY_MODBUS_LIB_CONFIG_MODBUSCONFIG_H_
#define THIRD_PARTY_MODBUS_LIB_CONFIG_MODBUSCONFIG_H_



/* Uncomment the following line to enable support for Modbus RTU over USB CDC profile. Only tested for BluePill f103 board. */
//#define ENABLE_USB_CDC 1

/* Uncomment the following line to enable support for Modbus TCP. Only tested for Nucleo144-F429ZI. */
//#define ENABLE_TCP 1


#define T35  3              // Timer T35 period (in ticks) for end of frame detection.
#define MAX_BUFFER  128	    // Maximum size for the communication buffer in bytes.
#define MAX_M_HANDLERS 2    //Maximum number of modbus handlers that can work concurrently
#define MAX_TELEGRAMS 2     //Max number of Telegrams in master queue




#endif /* THIRD_PARTY_MODBUS_LIB_CONFIG_MODBUSCONFIG_H_ */
