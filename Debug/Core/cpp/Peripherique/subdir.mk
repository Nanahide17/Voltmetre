################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Core/cpp/Peripherique/Bouton.cpp \
../Core/cpp/Peripherique/Potentiometre.cpp 

OBJS += \
./Core/cpp/Peripherique/Bouton.o \
./Core/cpp/Peripherique/Potentiometre.o 

CPP_DEPS += \
./Core/cpp/Peripherique/Bouton.d \
./Core/cpp/Peripherique/Potentiometre.d 


# Each subdirectory must supply rules for building sources it contributes
Core/cpp/Peripherique/%.o Core/cpp/Peripherique/%.su Core/cpp/Peripherique/%.cyclo: ../Core/cpp/Peripherique/%.cpp Core/cpp/Peripherique/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m3 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L152xE -c -I../Core/Inc -I../Drivers/STM32L1xx_HAL_Driver/Inc -I../Drivers/STM32L1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L1xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/anahi/STM32CubeIDE/workspace_1.14.0/voltmetre/Core/cpp" -I"C:/Users/anahi/STM32CubeIDE/workspace_1.14.0/voltmetre/Drivers/MAX7219-master" -I"C:/Users/anahi/STM32CubeIDE/workspace_1.14.0/voltmetre/Core/cpp/Peripherique" -I"C:/Users/anahi/STM32CubeIDE/workspace_1.14.0/voltmetre/Core/cpp/Affichage" -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-cpp-2f-Peripherique

clean-Core-2f-cpp-2f-Peripherique:
	-$(RM) ./Core/cpp/Peripherique/Bouton.cyclo ./Core/cpp/Peripherique/Bouton.d ./Core/cpp/Peripherique/Bouton.o ./Core/cpp/Peripherique/Bouton.su ./Core/cpp/Peripherique/Potentiometre.cyclo ./Core/cpp/Peripherique/Potentiometre.d ./Core/cpp/Peripherique/Potentiometre.o ./Core/cpp/Peripherique/Potentiometre.su

.PHONY: clean-Core-2f-cpp-2f-Peripherique

