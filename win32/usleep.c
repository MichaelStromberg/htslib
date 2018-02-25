#include "usleep.h"
#include "Windows.h"

int usleep(int usec) {
	Sleep(usec/1000);
}
