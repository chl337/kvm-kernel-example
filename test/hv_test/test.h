#ifndef TEST_H
#define TEST_H

#include "../../hypervisor/hypercall.h"

void hv_syscall_test(uint16_t syscall_nr, VM *vm) {
		if (hp_handler(syscall_nr, vm))
				error("HV_TEST:HV_Syscall failed");
		else
				printf("HV_TEST:HV_Syscall_success.\n");
}

#endif
