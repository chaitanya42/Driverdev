################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drives/src/Nucelo476RG_gpio.c 

OBJS += \
./Drives/src/Nucelo476RG_gpio.o 

C_DEPS += \
./Drives/src/Nucelo476RG_gpio.d 


# Each subdirectory must supply rules for building sources it contributes
Drives/src/%.o: ../Drives/src/%.c Drives/src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32L4 -DSTM32 -DSTM32L476RGTx -c -I"C:/Users/chait/Desktop/Embedded C/Drivers_Dev/Drives/inc" -I"C:/Users/chait/Desktop/Embedded C/Drivers_Dev/Drives/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drives-2f-src

clean-Drives-2f-src:
	-$(RM) ./Drives/src/Nucelo476RG_gpio.d ./Drives/src/Nucelo476RG_gpio.o

.PHONY: clean-Drives-2f-src

