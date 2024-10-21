################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Core/cpp/Affichage/7segm.cpp \
../Core/cpp/Affichage/Affichage.cpp \
../Core/cpp/Affichage/Terminal.cpp 

OBJS += \
./Core/cpp/Affichage/7segm.o \
./Core/cpp/Affichage/Affichage.o \
./Core/cpp/Affichage/Terminal.o 

CPP_DEPS += \
./Core/cpp/Affichage/7segm.d \
./Core/cpp/Affichage/Affichage.d \
./Core/cpp/Affichage/Terminal.d 


# Each subdirectory must supply rules for building sources it contributes
Core/cpp/Affichage/%.o Core/cpp/Affichage/%.su Core/cpp/Affichage/%.cyclo: ../Core/cpp/Affichage/%.cpp Core/cpp/Affichage/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m3 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L152xE -c -I../Core/Inc -I../Drivers/STM32L1xx_HAL_Driver/Inc -I../Drivers/STM32L1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L1xx/Include -I../Drivers/CMSIS/Include -I"D:/Documents/Etude/prepa isen/5eme_annee/POO/voltmetre/Core/cpp" -I"D:/Documents/Etude/prepa isen/5eme_annee/POO/voltmetre/Drivers/MAX7219-master" -I"D:/Documents/Etude/prepa isen/5eme_annee/POO/voltmetre/Core/cpp/Affichage" -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-cpp-2f-Affichage

clean-Core-2f-cpp-2f-Affichage:
	-$(RM) ./Core/cpp/Affichage/7segm.cyclo ./Core/cpp/Affichage/7segm.d ./Core/cpp/Affichage/7segm.o ./Core/cpp/Affichage/7segm.su ./Core/cpp/Affichage/Affichage.cyclo ./Core/cpp/Affichage/Affichage.d ./Core/cpp/Affichage/Affichage.o ./Core/cpp/Affichage/Affichage.su ./Core/cpp/Affichage/Terminal.cyclo ./Core/cpp/Affichage/Terminal.d ./Core/cpp/Affichage/Terminal.o ./Core/cpp/Affichage/Terminal.su

.PHONY: clean-Core-2f-cpp-2f-Affichage

