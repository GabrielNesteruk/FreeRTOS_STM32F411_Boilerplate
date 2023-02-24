#include "FreeRTOS.h"
#include "task.h"
#include "SEGGER_SYSVIEW.h"

uint32_t SystemCoreClock = 16000000;

int main()
{
	SEGGER_SYSVIEW_Conf();
    while (true)
    {
    }
}
