// Constants for invalid memory block index
#define INVALID_MEMORY (-1)

#define MAX_FLOATS_IN_BLOCK 10 // Number of floats you want to store in each memory block
#define MAX_MEMORY_BLOCKS 1000 // Maximum number of memory blocks

new g_MemoryBlocks[MAX_MEMORY_BLOCKS][MAX_FLOATS_IN_BLOCK]; // Memory blocks array
new g_NextBlock = 0; // Index of the next available memory block

// Function to allocate memory
stock Memory_Allocate()
{
    if (g_NextBlock >= MAX_MEMORY_BLOCKS)
        return INVALID_MEMORY; // No available memory block

    new blockIndex = g_NextBlock;
    g_NextBlock++;

    return blockIndex;
}

// Function to deallocate memory
stock Memory_Deallocate(blockIndex)
{
    if (blockIndex < 0 || blockIndex >= g_NextBlock)
        return false; // Invalid memory block index

    g_NextBlock--;
    if (blockIndex != g_NextBlock)
    {
        // Swap the deallocated block with the last allocated block
        for (new i = 0; i < MAX_FLOATS_IN_BLOCK; i++)
        {
            g_MemoryBlocks[blockIndex][i] = g_MemoryBlocks[g_NextBlock][i];
        }
    }

    return true;
}

// Function to access allocated memory
stock Float:Memory_GetFloat(blockIndex, offset)
{
    if (blockIndex < 0 || blockIndex >= g_NextBlock)
        return 0.0; // Invalid memory block index

    if (offset < 0 || offset >= MAX_FLOATS_IN_BLOCK)
        return 0.0; // Invalid offset

    return Float:g_MemoryBlocks[blockIndex][offset];
}


// Function to modify allocated memory
stock Float:Memory_SetFloat(blockIndex, offset, Float:value)
{
    if (blockIndex < 0 || blockIndex >= g_NextBlock)
        return 0.0; // Invalid memory block index

    if (offset < 0 || offset >= MAX_FLOATS_IN_BLOCK)
        return 0.0; // Invalid offset

    return Float:g_MemoryBlocks[blockIndex][offset] = value;
}
