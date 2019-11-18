#include "wifi_base_config.h"
#include "appliance.h"
#include "stm32f4xx.h"
/* FreeRTOSͷ�ļ� */
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "dhcp.h"

#define PRINTF printf

/**
 * @brief app_main
 *
 */
void app_main( void )
{
	
		/*����wifi lwip��Ϣ*/
		Config_WIFI_LwIP_Info();
	
		dhcp_netconn_init();
}