#ifndef __SENSOR_H__
#define __SENSOR_H__

#include <stdbool.h>
#include <stdint.h>
#include "esp_err.h"

#ifdef __cplusplus
extern "C" {
#endif

#define KPA_TO_PSI  (0.145)
#define KPA_STD     (-5.5)
#define FIVE_PSI_VOUT   (0.93620)
#define VOUT_BASE       (1.3)
#define ONE_PSI_VOUT    (0.16724)

int flow_rate_sensor_config(void);

int pressure_diff_sensor_config(void);

int read_sensor_FlowRate(double *data);

int read_sensor_totalWater(double *data);

int read_sensor_pressure_diff(double *data);

int init_sensor_thread(void);

#ifdef __cplusplus
}
#endif

#endif
