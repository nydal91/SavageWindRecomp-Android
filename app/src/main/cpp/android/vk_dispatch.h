// android/vk_dispatch.c: the Vulkan library in use and GPU max clocks
#pragma once
#include <stdbool.h>
const char *vk_driver_name(void);  // "system", or the installed driver's name (its meta.json)
bool vk_driver_custom(void);
void vk_gpu_turbo(bool on);        // hold the GPU at its top clock (KGSL power control), or let it go
