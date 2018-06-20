################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CFG_SRCS += \
../app.cfg 

CMD_SRCS += \
../TM4C123GH6PM.cmd 

C_SRCS += \
../main.c \
../stub.c 

GEN_CMDS += \
./configPkg/linker.cmd 

GEN_FILES += \
./configPkg/linker.cmd \
./configPkg/compiler.opt 

GEN_MISC_DIRS += \
./configPkg/ 

C_DEPS += \
./main.d \
./stub.d 

GEN_OPTS += \
./configPkg/compiler.opt 

OBJS += \
./main.obj \
./stub.obj 

GEN_MISC_DIRS__QUOTED += \
"configPkg/" 

OBJS__QUOTED += \
"main.obj" \
"stub.obj" 

C_DEPS__QUOTED += \
"main.d" \
"stub.d" 

GEN_FILES__QUOTED += \
"configPkg/linker.cmd" \
"configPkg/compiler.opt" 

C_SRCS__QUOTED += \
"../main.c" \
"../stub.c" 


