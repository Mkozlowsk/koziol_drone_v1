################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/MainDev.c \
../Src/bldc_esc_drv.c \
../Src/bmp338_drv.c \
../Src/i2c_drv.c \
../Src/main.c \
../Src/nRF24L01_drv.c \
../Src/qmc58331_drv.c \
../Src/sensors.c \
../Src/syscalls.c \
../Src/sysmem.c \
../Src/system_stm32f4xx.c 

OBJS += \
./Src/MainDev.o \
./Src/bldc_esc_drv.o \
./Src/bmp338_drv.o \
./Src/i2c_drv.o \
./Src/main.o \
./Src/nRF24L01_drv.o \
./Src/qmc58331_drv.o \
./Src/sensors.o \
./Src/syscalls.o \
./Src/sysmem.o \
./Src/system_stm32f4xx.o 

C_DEPS += \
./Src/MainDev.d \
./Src/bldc_esc_drv.d \
./Src/bmp338_drv.d \
./Src/i2c_drv.d \
./Src/main.d \
./Src/nRF24L01_drv.d \
./Src/qmc58331_drv.d \
./Src/sensors.d \
./Src/syscalls.d \
./Src/sysmem.d \
./Src/system_stm32f4xx.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o Src/%.su Src/%.cyclo: ../Src/%.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F411VETx -DSTM32 -DSTM32F4 -DSTM32F411E_DISCO -c -I../Inc -I"C:/Users/panba/Documents/koziol_drone_v1/submodules/STM32CubeF4/Drivers/CMSIS/Include" -I"C:/Users/panba/Documents/koziol_drone_v1/submodules/STM32CubeF4/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/Users/panba/Documents/koziol_drone_v1/submodules/STM32CubeF4/Drivers/STM32F4xx_HAL_Driver/Inc" -I"C:/Users/panba/Documents/koziol_drone_v1/submodules/STM32CubeF4/Drivers/CMSIS/Device/ST/STM32F4xx/Source" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src

clean-Src:
	-$(RM) ./Src/MainDev.cyclo ./Src/MainDev.d ./Src/MainDev.o ./Src/MainDev.su ./Src/bldc_esc_drv.cyclo ./Src/bldc_esc_drv.d ./Src/bldc_esc_drv.o ./Src/bldc_esc_drv.su ./Src/bmp338_drv.cyclo ./Src/bmp338_drv.d ./Src/bmp338_drv.o ./Src/bmp338_drv.su ./Src/i2c_drv.cyclo ./Src/i2c_drv.d ./Src/i2c_drv.o ./Src/i2c_drv.su ./Src/main.cyclo ./Src/main.d ./Src/main.o ./Src/main.su ./Src/nRF24L01_drv.cyclo ./Src/nRF24L01_drv.d ./Src/nRF24L01_drv.o ./Src/nRF24L01_drv.su ./Src/qmc58331_drv.cyclo ./Src/qmc58331_drv.d ./Src/qmc58331_drv.o ./Src/qmc58331_drv.su ./Src/sensors.cyclo ./Src/sensors.d ./Src/sensors.o ./Src/sensors.su ./Src/syscalls.cyclo ./Src/syscalls.d ./Src/syscalls.o ./Src/syscalls.su ./Src/sysmem.cyclo ./Src/sysmem.d ./Src/sysmem.o ./Src/sysmem.su ./Src/system_stm32f4xx.cyclo ./Src/system_stm32f4xx.d ./Src/system_stm32f4xx.o ./Src/system_stm32f4xx.su

.PHONY: clean-Src

