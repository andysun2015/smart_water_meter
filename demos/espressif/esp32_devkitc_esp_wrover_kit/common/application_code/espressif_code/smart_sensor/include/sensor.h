#ifndef __SENSOR_H__
#define __SENSOR_H__

#include <stdbool.h>
#include <stdint.h>
#include "esp_err.h"

#ifdef __cplusplus
extern "C" {
#endif

int sensor_config(void);

int read_sensor_data(int *data);

#ifdef __cplusplus
}
#endif

#endif
