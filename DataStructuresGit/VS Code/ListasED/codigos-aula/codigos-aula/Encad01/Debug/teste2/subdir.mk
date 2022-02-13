################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../teste2/t22.c 

OBJS += \
./teste2/t22.o 

C_DEPS += \
./teste2/t22.d 


# Each subdirectory must supply rules for building sources it contributes
teste2/%.o: ../teste2/%.c teste2/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


