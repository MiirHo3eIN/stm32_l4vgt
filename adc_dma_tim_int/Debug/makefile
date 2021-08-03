################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32L4xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
adc_dma_tim_int.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
adc_dma_tim_int.list \

OBJCOPY_BIN += \
adc_dma_tim_int.bin \


# All Target
all: adc_dma_tim_int.elf secondary-outputs

# Tool invocations
adc_dma_tim_int.elf: $(OBJS) $(USER_OBJS) /home/miir_ho3ein/STM32CubeIDE/workspace_1.3.0/adc_dma_tim_int/STM32L476VGTX_FLASH.ld
	arm-none-eabi-gcc -o "adc_dma_tim_int.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"/home/miir_ho3ein/STM32CubeIDE/workspace_1.3.0/adc_dma_tim_int/STM32L476VGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="adc_dma_tim_int.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

adc_dma_tim_int.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "adc_dma_tim_int.list"
	@echo 'Finished building: $@'
	@echo ' '

adc_dma_tim_int.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "adc_dma_tim_int.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
