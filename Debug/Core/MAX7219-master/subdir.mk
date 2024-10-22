################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/MAX7219-master/max7219.c 

C_DEPS += \
./Core/MAX7219-master/max7219.d 

OBJS += \
./Core/MAX7219-master/max7219.o 


# Each subdirectory must supply rules for building sources it contributes
Core/MAX7219-master/%.o Core/MAX7219-master/%.su Core/MAX7219-master/%.cyclo: ../Core/MAX7219-master/%.c Core/MAX7219-master/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L152xE -c -I../Core/Inc -I../Drivers/STM32L1xx_HAL_Driver/Inc -I../Drivers/STM32L1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L1xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/anahi/STM32CubeIDE/workspace_1.14.0/voltmetre/Core/cpp" -I"C:/Users/anahi/STM32CubeIDE/workspace_1.14.0/voltmetre/Core/MAX7219-master" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-MAX7219-2d-master

clean-Core-2f-MAX7219-2d-master:
	-$(RM) ./Core/MAX7219-master/max7219.cyclo ./Core/MAX7219-master/max7219.d ./Core/MAX7219-master/max7219.o ./Core/MAX7219-master/max7219.su

.PHONY: clean-Core-2f-MAX7219-2d-master

