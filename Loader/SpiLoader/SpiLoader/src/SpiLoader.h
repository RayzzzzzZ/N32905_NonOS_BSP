/**************************************************************************//**
 * @file     spiloader.h
 * @brief    Spiloader header file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
*****************************************************************************/
#define IMAGE_TYPE_DATA		0
#define IMAGE_TYPE_EXE		1
#define IMAGE_TYPE_ROMFS	2
#define IMAGE_TYPE_SYSTEM	3
#define IMAGE_TYPE_LOGO		4

VOID SPI_OpenSPI(VOID);
VOID SPI_CloseSPI(VOID);
int SPIReadFast(BOOL bEDMAread, UINT32 addr, UINT32 len, UINT32 *buf);