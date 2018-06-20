################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
build-1370153631:
	@$(MAKE) --no-print-directory -Onone -f subdir_rules.mk build-1370153631-inproc

build-1370153631-inproc: ../app.cfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: XDCtools'
	"/home/satish/ti/xdctools_3_50_05_12_core/xs" --xdcpath="/home/satish/ti/bios_6_70_01_03/packages;/home/satish/ti/tirtos_tivac_2_16_00_08/packages;/home/satish/ti/tirtos_tivac_2_16_00_08/products/tidrivers_tivac_2_16_00_08/packages;/home/satish/ti/tirtos_tivac_2_16_00_08/products/bios_6_45_01_29/packages;/home/satish/ti/tirtos_tivac_2_16_00_08/products/ndk_2_25_00_09/packages;/home/satish/ti/tirtos_tivac_2_16_00_08/products/uia_2_00_05_50/packages;/home/satish/ti/tirtos_tivac_2_16_00_08/products/ns_1_11_00_10/packages;" xdc.tools.configuro -o configPkg -t ti.targets.arm.elf.M4F -p ti.platforms.tiva:TM4C123GH6PM -r release -c "/home/satish/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.1.LTS" --compileOptions "-g" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

configPkg/linker.cmd: build-1370153631 ../app.cfg
configPkg/compiler.opt: build-1370153631
configPkg/: build-1370153631

main.obj: ../main.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"/home/satish/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.1.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path="/home/satish/workspace_v8/projectx_alpha" --include_path="/home/satish/ti/bios_6_70_01_03/packages/ti/posix/ccs" --include_path="/home/satish/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.1.LTS/include" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="main.d_raw" $(GEN_OPTS__FLAG) "$(shell echo $<)"
	@echo 'Finished building: "$<"'
	@echo ' '


