#include <libimobiledevice.h>

int main(char*,char**)
{
	idevice_t device;
	return idevice_new(&device,0);
}