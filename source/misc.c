/*
 * KubOS RT
 * Copyright (C) 2016 Kubos Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "misc.h"
#include <kubos-hal/gpio.h>
#include <FreeRTOS.h>
#include <task.h>


inline void blink(int pin) {
    k_gpio_write(pin, 1);
    vTaskDelay(1);
    k_gpio_write(pin, 0);
}
