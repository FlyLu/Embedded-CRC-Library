/***************************************************************************
 *   Copyright(C)2014-2015 by FlyLu <Linch.Embedded@gmail.com>             *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU Lesser General Public License as        *
 *   published by the Free Software Foundation; either version 2 of the    *
 *   License, or (at your option) any later version.                       *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU Lesser General Public      *
 *   License along with this program; if not, write to the                 *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/


//! \note do not move this pre-processor statement to other places
#ifndef ___CRC_APP_CFG_H__
#define ___CRC_APP_CFG_H__

/*============================ INCLUDES ======================================*/
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

/*============================ MACROS ========================================*/
//! \name CRC configuration
//! @{
#define CRC_OPT_SIZE        2
#define CRC_OPT_BALANCE     1
#define CRC_OPT_SPEED       0

#define CRC7_OPTIMIZE                   CRC_OPT_SPEED
#define CRC8_OPTIMIZE                   CRC_OPT_BALANCE
#define CRC8_ROHC_OPTIMIZE              CRC_OPT_BALANCE
#define CRC16_MODBUS_OPTIMIZE           CRC_OPT_BALANCE
#define CRC16_USB_OPTIMIZE              CRC_OPT_BALANCE
#define CRC16_CCITT_FALSE_OPTIMIZE      CRC_OPT_BALANCE
#define CRC16_MODEM_OPTIMIZE            CRC_OPT_BALANCE
#define CRC32_IEEE802_3_OPTIMIZE        CRC_OPT_BALANCE
#define CRC32_OPTIMIZE                  CRC_OPT_BALANCE
//! @}

/*============================ MACROFIED FUNCTIONS ===========================*/
/*============================ TYPES =========================================*/
/*============================ GLOBAL VARIABLES ==============================*/
/*============================ LOCAL VARIABLES ===============================*/
/*============================ PROTOTYPES ====================================*/

#endif
/* EOF */