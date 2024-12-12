################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/all_led_off.c \
../Core/Src/automatic.c \
../Core/Src/button.c \
../Core/Src/display7SEG.c \
../Core/Src/fsm_manual_run.c \
../Core/Src/global.c \
../Core/Src/led_update.c \
../Core/Src/main.c \
../Core/Src/open7segNumber.c \
../Core/Src/setRED.c \
../Core/Src/softwaretimer.c \
../Core/Src/stm32f1xx_hal_msp.c \
../Core/Src/stm32f1xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32f1xx.c 

OBJS += \
./Core/Src/all_led_off.o \
./Core/Src/automatic.o \
./Core/Src/button.o \
./Core/Src/display7SEG.o \
./Core/Src/fsm_manual_run.o \
./Core/Src/global.o \
./Core/Src/led_update.o \
./Core/Src/main.o \
./Core/Src/open7segNumber.o \
./Core/Src/setRED.o \
./Core/Src/softwaretimer.o \
./Core/Src/stm32f1xx_hal_msp.o \
./Core/Src/stm32f1xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32f1xx.o 

C_DEPS += \
./Core/Src/all_led_off.d \
./Core/Src/automatic.d \
./Core/Src/button.d \
./Core/Src/display7SEG.d \
./Core/Src/fsm_manual_run.d \
./Core/Src/global.d \
./Core/Src/led_update.d \
./Core/Src/main.d \
./Core/Src/open7segNumber.d \
./Core/Src/setRED.d \
./Core/Src/softwaretimer.d \
./Core/Src/stm32f1xx_hal_msp.d \
./Core/Src/stm32f1xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32f1xx.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103x6 -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

