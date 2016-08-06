################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -f

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include arduino/core/subdir.mk
-include Libraries/Wire/utility/subdir.mk
-include Libraries/Wire/subdir.mk
-include Libraries/TimerOne/subdir.mk
-include Libraries/Arduino-LiquidCrystal-I2C-library-master/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
AR += \
arduino.ar \

ELF += \
interruptPing.elf \

EEP += \
interruptPing.eep \

FLASH_IMAGE += \
interruptPing.hex \


# All Target
all: interruptPing

# Tool invocations
interruptPing: $(FLASH_IMAGE)
	@echo 'Building target: $@'
	@echo 'Printing size:'
	"C:\arduino-1.6.5-r5\hardware\tools\avr/bin/avr-size" -A "C:/Users/Manch/2016Workspace/interruptPing/Release/interruptPing.elf"
	@echo 'Finished building target: $@'
	@echo ' '

arduino.ar: $(AR_OBJ)
	@echo 'Starting archiver'
	"C:\arduino-1.6.5-r5\hardware\tools\avr/bin/avr-ar" rcs  "C:/Users/Manch/2016Workspace/interruptPing/Release/arduino.ar"   $(AR_OBJ)
	@echo 'Finished building: $@'
	@echo ' '

interruptPing.elf: $(LINK_OBJ) $(AR)
	@echo 'Starting combiner'
	"C:\arduino-1.6.5-r5\hardware\tools\avr/bin/avr-gcc" -Os -Wl,--gc-sections,--relax -mmcu=atmega2560  -o "C:/Users/Manch/2016Workspace/interruptPing/Release/interruptPing.elf"   $(LINK_OBJ) $(AR)  "C:/Users/Manch/2016Workspace/interruptPing/Release/arduino.ar" "-LC:/Users/Manch/2016Workspace/interruptPing/Release" -lm
	@echo 'Finished building: $@'
	@echo ' '

interruptPing.eep: $(ELF)
	@echo 'Create eeprom image'
	"C:\arduino-1.6.5-r5\hardware\tools\avr/bin/avr-objcopy" -O ihex -j .eeprom --set-section-flags=.eeprom=alloc,load --no-change-warnings --change-section-lma .eeprom=0  "C:/Users/Manch/2016Workspace/interruptPing/Release/interruptPing.elf" "C:/Users/Manch/2016Workspace/interruptPing/Release/interruptPing.eep"
	@echo 'Finished building: $@'
	@echo ' '

interruptPing.hex: $(EEP)
	@echo 'Create Flash image (ihex format)'
	"C:\arduino-1.6.5-r5\hardware\tools\avr/bin/avr-objcopy" -O ihex -R .eeprom  "C:/Users/Manch/2016Workspace/interruptPing/Release/interruptPing.elf" "C:/Users/Manch/2016Workspace/interruptPing/Release/interruptPing.hex"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(C_UPPER_DEPS)$(C_DEPS)$(AR)$(EEP)$(FLASH_IMAGE)$(CC_DEPS)$(AR_OBJ)$(C++_DEPS)$(LINK_OBJ)$(CXX_DEPS)$(ASM_DEPS)$(INO_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(ELF)$(CPP_DEPS) interruptPing
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
