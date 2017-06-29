/* process_vm_writev.c COPYRIGHT FUJITSU LIMITED 2015 */
#include "test_mck.h"
#include "testsuite.h"

ssize_t call_process_vm_writev(pid_t pid,
			      const struct iovec *lvec, unsigned long liovcnt,
			      const struct iovec *rvec, unsigned long riovcnt,
			      unsigned long flags)
{
	return syscall(__NR_process_vm_writev, pid, lvec, liovcnt,
			rvec, riovcnt, flags);
}

