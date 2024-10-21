################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/MAX7219-master/max7219.c 

C_DEPS += \
./Drivers/MAX7219-master/max7219.d 

OBJS += \
./Drivers/MAX7219-master/max7219.o 


# Each subdirectory must supply rules for building sources it contributes
Drivers/MAX7219-master/%.o Drivers/MAX7219-master/%.su Drivers/MAX7219-master/%.cyclo: ../Drivers/MAX7219-master/%.c Drivers/MAX7219-master/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L152xE -c -I../Core/Inc -I../Drivers/STM32L1xx_HAL_Driver/Inc -I../Drivers/STM32L1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L1xx/Include -I../Drivers/CMSIS/Include -I"D:/Documents/Etude/prepa isen/5eme_annee/POO/voltmetre/Core/cpp" -I"D:/Documents/Etude/prepa isen/5eme_annee/POO/voltmetre/Drivers/MAX7219-master" -I"D:/Documents/Etude/prepa isen/5eme_annee/POO/voltmetre/Core/cpp/Affichage" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Drivers-2f-MAX7219-2d-master

clean-Drivers-2f-MAX7219-2d-master:
	-$(RM) ./Drivers/MAX7219-master/max7219.cyclo ./Drivers/MAX7219-master/max7219.d ./Drivers/MAX7219-master/max7219.o ./Drivers/MAX7219-master/max7219.su

.PHONY: clean-Drivers-2f-MAX7219-2d-master

