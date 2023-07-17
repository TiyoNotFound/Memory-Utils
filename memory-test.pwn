#include <a_samp>

#include <memory_utils>

public OnGameModeInit()
{
    // Test memory allocation
    new blockIndex = Memory_Allocate();
    if (blockIndex != INVALID_MEMORY)
    {
        printf("Memory block allocated successfully! Block Index: %d", blockIndex);

        // Test memory modification and access
        new Float:value = 3.14159; // Create a new float variable
        new Float:value1 = Memory_SetFloat(blockIndex, 0, value); // Pass the float variable as an argument
        value = Memory_GetFloat(blockIndex, 0);
        printf("Value read from memory block %d: %f", blockIndex, value);
        printf("%f", value1);

        // Test memory deallocation
        if (Memory_Deallocate(blockIndex))
            printf("Memory block %d deallocated successfully!", blockIndex);
        else
            printf("Failed to deallocate memory block %d.", blockIndex);
    }
    else
    {
        printf("Failed to allocate memory block!");
    }
    return 1;
}

public OnPlayerConnect(playerid)
{
    // You can use the memory management functions anywhere in your gamemode
    return 1;
}
