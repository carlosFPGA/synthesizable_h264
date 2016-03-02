// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2014.4
// Copyright (C) 2014 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xdecode_main.h"

extern XDecode_main_Config XDecode_main_ConfigTable[];

XDecode_main_Config *XDecode_main_LookupConfig(u16 DeviceId) {
	XDecode_main_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XDECODE_MAIN_NUM_INSTANCES; Index++) {
		if (XDecode_main_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XDecode_main_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XDecode_main_Initialize(XDecode_main *InstancePtr, u16 DeviceId) {
	XDecode_main_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XDecode_main_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XDecode_main_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif
