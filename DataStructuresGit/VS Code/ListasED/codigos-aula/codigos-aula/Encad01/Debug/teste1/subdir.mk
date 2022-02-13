################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../teste1/t11.c 

OBJS += \
./teste1/t11.o 

C_DEPS += \
./teste1/t11.d 


# Each subdirectory must supply rules for building sources it contributes
teste1/%.o: ../teste1/%.c teste1/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


