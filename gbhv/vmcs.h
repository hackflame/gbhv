#pragma once
#include "extern.h"
#include "vmm.h"

IA32_VMX_PINBASED_CTLS_REGISTER HvSetupVmcsControlPinBased(PVMM_CONTEXT GlobalContext);

IA32_VMX_PROCBASED_CTLS_REGISTER HvSetupVmcsControlProcessor(PVMM_CONTEXT GlobalContext);

IA32_VMX_PROCBASED_CTLS2_REGISTER HvSetupVmcsControlSecondaryProcessor(PVMM_CONTEXT GlobalContext);