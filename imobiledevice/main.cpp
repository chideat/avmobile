#include <Windows.h>
#include "libimobiledevice/libimobiledevice.h"

int main(char*, char**)
{
	const char* udid = NULL;
	idevice_t device;
	idevice_new(&device, udid);
	return 0;
}
