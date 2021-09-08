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
iis2clx_i2c.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
iis2clx_i2c.list \

OBJCOPY_BIN += \
iis2clx_i2c.bin \


# All Target
all: iis2clx_i2c.elf secondary-outputs

# Tool invocations
iis2clx_i2c.elf: $(OBJS) $(USER_OBJS) /home/miir_ho3ein/STM32CubeIDE/workspace_1.3.0/iis2clx_i2c/STM32L476VGTX_FLASH.ld
	arm-none-eabi-gcc -o "iis2clx_i2c.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"/home/miir_ho3ein/STM32CubeIDE/workspace_1.3.0/iis2clx_i2c/STM32L476VGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="iis2clx_i2c.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

iis2clx_i2c.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "iis2clx_i2c.list"
	@echo 'Finished building: $@'
	@echo ' '

iis2clx_i2c.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "iis2clx_i2c.bin"
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
