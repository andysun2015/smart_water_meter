## Getting Started

For more information on Amazon FreeRTOS, refer to the [Getting Started section of Amazon FreeRTOS webpage](https://aws.amazon.com/freertos).

To directly access the **Getting Started Guide** for supported hardware platforms, click the corresponding link in the Supported Hardware section below.

For detailed documentation on Amazon FreeRTOS, refer to the [Amazon FreeRTOS User Guide](https://aws.amazon.com/documentation/freertos).

## Goal

This package is used to support smart water meter which take use of water flow sensor and water pressure sensor based on esp platform. After provision aws user credential, it will send flow data and pressre data via MQTT protocol to AWS IoT Core.

The AWS service application will receive these data to do: 1) data visulization, 2) pressure alarm SNS.

