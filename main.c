/*
 *  ======== main.c ========
 */

#include <xdc/std.h>

#include <xdc/runtime/Error.h>
#include <xdc/runtime/System.h>

#include <ti/sysbios/BIOS.h>

#include <ti/sysbios/knl/Task.h>
#include "variablespec.h"
//stub file//Unit testing // Must be included in main to avoid Junk//
#include "stub.h"
/*
 *  ======== taskFxn ========
 */
Void taskFxn(UArg a0, UArg a1)
{
    System_printf("enter taskFxn()\n");

    Task_sleep(10);

    System_printf("exit taskFxn()\n");

    System_flush(); /* force SysMin output to console */
}

//stub test will be removed later on// To make the main cleaner//
void stubtest()
{
test_variables();
}

/*
 *  ======== main ========
 */

/// most important priority// sections have to be defined//  Will do it later//

//For now remove the filters and it should build fine :) otherwise memory overlap error will shoot//
Int main()
{ 
    Task_Handle task;
    Error_Block eb;
    System_printf("enter main()\n");

    Error_init(&eb);
    task = Task_create(taskFxn, NULL, &eb);
    if (task == NULL) {
        System_printf("Task_create() failed!\n");
        BIOS_exit(0);
    }
    BIOS_start();
    // To test the functionalities of the variables specs// Will be removed later //
    // Have to find a way to create different segments in memory :) //
    stubtest();
    return(0);
}
