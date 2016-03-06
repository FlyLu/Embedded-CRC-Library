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

#ifndef __CRC_H__
#define __CRC_H__

/*============================ INCLUDES ======================================*/
#include ".\app_cfg.h"

/*============================ MACROS ========================================*/
//! \brief  CRC initialized value
#define CRC7_INIT                   (0x00)
#define CRC8_INIT                   (0x00)
#define CRC8_ROHC_INIT              (0xFF)

#define CRC16_MODBUS_INIT           (0xFFFF)
#define CRC16_USB_INIT              (0xFFFF)
#define CRC16_CCITT_FALSE_INIT      (0xFFFF)
#define CRC16_MODEM_INIT            (0x0000)

#define CRC32_INIT                  (0xFFFFFFFF)
#define CRC32_IEEE802_3_INIT        (0xFFFFFFFF)


/*============================ MACROFIED FUNCTIONS ===========================*/
/*============================ TYPES =========================================*/
/*============================ PROTOTYPES ====================================*/
/*============================ GLOBAL VARIABLES ==============================*/
/*============================ LOCAL VARIABLES ===============================*/
/*============================ PROTOTYPES ====================================*/

/*! \brief CRC7 MMC SD
 *!        Poly: 0x09
 *!        Init: 0x00
 *!        RefIn: False
 *!        RefOut: False
 *!        XorOut: 0x00
 *! \param pchCRCValue CRC Variable
 *! \param pchData target data stream address
 *! \param wLength the number of target data stream
 *! \return CRC7 result
 */
extern uint8_t crc7_stream_check( uint8_t  *pchCRCValue, 
                                  uint8_t  *pchData, 
                                  uint32_t wLength );
/*! \brief CRC7 MMC SD
 *!        Poly: 0x09
 *!        Init: 0x00
 *!        RefIn: False
 *!        RefOut: False
 *!        XorOut: 0x00
 *! \param pchCRCValue CRC Variable
 *! \param pchData target data byte
 *! \return CRC7 result
 */
extern uint8_t crc7_check(uint8_t *pchCRCValue, uint8_t chData);


/*! \brief CRC8
 *!        Poly: 0x07
 *!        Init: 0x00
 *!        RefIn: False
 *!        RefOut: False
 *!        XorOut: 0x00
 *! \param pchCRCValue CRC Variable
 *! \param pchData target data stream address
 *! \param wLength the number of target data stream
 *! \return CRC8 result
 */
extern uint8_t crc8_stream_check( uint8_t  *pchCRCValue, 
                                  uint8_t  *pchData, 
                                  uint32_t wLength );


/*! \brief CRC8
 *!        Poly: 0x07
 *!        Init: 0x00
 *!        RefIn: False
 *!        RefOut: False
 *!        XorOut: 0x00
 *! \param pchCRCValue CRC Variable
 *! \param pchData target data byte
 *! \return CRC8 result
 */
extern uint8_t crc8_check(uint8_t *pchCRCValue, uint8_t chData);


/*! \brief CRC8 ROHC
 *!        Poly: 0x07
 *!        Init: 0xFF
 *!        RefIn: True
 *!        RefOut: True
 *!        XorOut: 0x00
 *! \param pchCRCValue CRC Variable
 *! \param pchData target data stream address
 *! \param wLength the number of target data stream
 *! \return CRC8 result
 */
extern uint8_t crc8_rohc_stream_check( uint8_t  *pchCRCValue, 
                                       uint8_t  *pchData,
                                       uint32_t wLength );


/*! \brief CRC8 ROHC
 *!        Poly: 0x07
 *!        Init: 0xFF
 *!        RefIn: True
 *!        RefOut: True
 *!        XorOut: 0x00
 *! \param pchCRCValue CRC Variable
 *! \param pchData target data
 *! \return CRC8 result
 */
extern uint8_t crc8_rohc_check(uint8_t *pchCRCValue, uint8_t chData);


/*! \brief CRC16 CCITT FALSE
 *!        Poly: 0x1021
 *!        Init: 0xFFFF
 *!        RefIn: False
 *!        RefOut: False
 *!        XorOut: 0x0000
 *! \param pwCRCValue CRC Variable
 *! \param pchData target data stream address
 *! \param wLength the number of target data stream
 *! \return CRC16 result
 */
extern uint16_t crc16_ccitt_false_stream_check( uint16_t *phwCRCValue, 
                                                uint8_t  *pchData, 
                                                uint32_t wLength );
                                         

/*! \brief CRC16 CCITT FALSE
 *!        Poly: 0x1021
 *!        Init: 0xFFFF
 *!        RefIn: False
 *!        RefOut: False
 *!        XorOut: 0x0000
 *! \param pwCRCValue CRC Variable
 *! \param pchData target data byte
 *! \return CRC16 result
 */
extern uint16_t crc16_ccitt_false_check(uint16_t *phwCRCValue, uint8_t chData);


/*! \brief CRC16 USB
 *!        Poly: 0x8005
 *!        Init: 0xFFFF
 *!        RefIn: True
 *!        RefOut: True
 *!        XorOut: 0xFFFF
 *! \param phwCRCValue CRC Variable
 *! \param pchData target data stream address
 *! \param wLength the number of target data stream
 *! \return CRC16 result
 */
extern uint16_t crc16_usb_stream_check( uint16_t *phwCRCValue, 
                                        uint8_t  *pchData, 
                                        uint32_t wLength );


/*! \brief CRC16 USB
 *!        Poly: 0x8005
 *!        Init: 0xFFFF
 *!        RefIn: True
 *!        RefOut: True
 *!        XorOut: 0xFFFF
 *! \param phwCRCValue CRC Variable
 *! \param pchData target data
 *! \return CRC16 result
 */
extern uint16_t crc16_usb_check(uint16_t *phwCRCValue, uint8_t chData);


/*! \brief CRC16 MODBUS
 *!        Poly: 0x8005
 *!        Init: 0xFFFF
 *!        RefIn: True
 *!        RefOut: True
 *!        XorOut: 0x0000
 *! \param phwCRCValue CRC Variable
 *! \param pchData target data stream address
 *! \param wLength the number of target data stream
 *! \return CRC16 result
 */
extern uint16_t crc16_modbus_stream_check( uint16_t *phwCRCValue, 
                                           uint8_t  *pchData, 
                                           uint32_t wLength );

/*! \brief CRC16 MODBUS
 *!        Poly: 0x8005
 *!        Init: 0xFFFF
 *!        RefIn: True
 *!        RefOut: True
 *!        XorOut: 0x0000
 *! \param pwCRCValue CRC Variable
 *! \param pchData target data byte
 *! \return CRC16 result
 */
extern uint16_t crc16_modbus_check(uint16_t *phwCRCValue, uint8_t chData);

/*! \brief CRC16 XMODEM or ZMODEM or ACORN
 *!        Poly: 0x1021
 *!        Init: 0x0000
 *!        RefIn: False
 *!        RefOut: False
 *!        XorOut: 0x0000
 *! \param phwCRCValue CRC Variable
 *! \param pchData target data stream address
 *! \param wLength the number of target data stream
 *! \return CRC16 result
 */
extern uint16_t crc16_modem_stream_check( uint16_t *phwCRCValue, 
                                          uint8_t *pchData, 
                                          uint32_t wLength );


/*! \brief CRC16 XMODEM or ZMODEM or ACORN
 *!        Poly: 0x1021
 *!        Init: 0x0000
 *!        RefIn: False
 *!        RefOut: False
 *!        XorOut: 0x0000
 *! \param phwCRCValue CRC Variable
 *! \param pchData target data byte
 *! \return CRC16 result
 */
extern uint16_t crc16_modem_check(uint16_t *phwCRCValue, uint8_t chData);

/*! \brief CRC32 IEEE802.3
 *!        Poly: 0x04C11DB7
 *!        Init: 0xFFFFFFFF
 *!        RefIn: False
 *!        RefOut: False
 *!        XorOut: 0x00000000
 *! \param pwCRCValue CRC Variable
 *! \param pchData target data stream address
 *! \param wLength the number of target data stream
 *! \return CRC32 result
 */
extern uint32_t crc32_ieee802_3_stream_check( uint32_t *pwCRCValue, 
                                              uint8_t  *pchData, 
                                              uint32_t wLength );

/*! \brief CRC32 IEEE802.3
 *!        Poly: 0x04C11DB7
 *!        Init: 0xFFFFFFFF
 *!        RefIn: False
 *!        RefOut: False
 *!        XorOut: 0x00000000
 *! \param pwCRCValue CRC Variable
 *! \param pchData target data byte
 *! \return CRC32 result
 */
extern uint32_t crc32_ieee802_3_check(uint32_t *pwCRCValue, uint8_t chData);


/*! \brief CRC32 
 *!        Poly: 0x04C11DB7
 *!        Init: 0xFFFFFFFF
 *!        RefIn: True
 *!        RefOut: True
 *!        XorOut: 0xFFFFFFFF
 *! \param pwCRCValue CRC Variable
 *! \param pchData target data stream address
 *! \param wLength the number of target data stream
 *! \return CRC32 result
 */
extern uint32_t crc32_stream_check( uint32_t *pwCRCValue, 
                                    uint8_t  *pchData, 
                                    uint32_t wLength );

/*! \brief CRC32 
 *!        Poly: 0x04C11DB7
 *!        Init: 0xFFFFFFFF
 *!        RefIn: True
 *!        RefOut: True
 *!        XorOut: 0xFFFFFFFF
 *! \param pwCRCValue CRC Variable
 *! \param pchData target data byte
 *! \return CRC32 result
 */
extern uint32_t crc32_check(uint32_t *pwCRCValue, uint8_t chData);



#endif

/* EOF */