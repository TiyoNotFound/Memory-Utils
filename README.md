
# Memory Utils Library for SA-MP

[![License](https://img.shields.io/badge/license-MIT-blue.svg)](https://opensource.org/licenses/MIT)

The Memory Utils Library is a simple and efficient memory allocation and management system designed for San Andreas Multiplayer (SA-MP) server scripts. It allows dynamic allocation of memory blocks to store floating-point values (`float`s) and provides functions to access and modify the allocated memory.

## Features

- **Memory Allocation:** The library provides a function (`Memory_Allocate`) to dynamically allocate memory blocks for storing floating-point values.

- **Memory Deallocation:** It offers a function (`Memory_Deallocate`) to deallocate memory blocks, preventing memory leaks and reusing memory efficiently.

- **Memory Access:** The library provides a function (`Memory_GetFloat`) to access the float values stored in the allocated memory blocks.

- **Memory Modification:** You can modify the float values in the memory blocks using the `Memory_SetFloat` function.

- **Efficient Memory Usage:** The library minimizes memory waste, optimizing server performance, especially with large player counts.

- **Error Handling:** The library checks for invalid memory block indices and offsets, providing error codes to gracefully handle invalid memory requests.

- **Dynamic Memory Allocation:** Memory blocks can be allocated and deallocated at runtime, providing flexibility and scalability in managing memory.

- **Simplified Memory Access:** The library abstracts low-level memory operations, making it easy to work with stored float values without worrying about implementation details.

- **Code Reusability:** The library can be easily reused in multiple scripts, improving code modularity and reducing code duplication.

- **Prevention of Memory Leaks:** Proper deallocation ensures that memory is released when it is no longer needed, improving server stability.

## Projects Suggestion using Memory Utils Library

1. **Player Stats System:** Store player stats (e.g., health, armor, money) in memory blocks to efficiently access and modify their values during gameplay.
   - **Function used:** `Memory_SetFloat`, `Memory_GetFloat`

2. **Dynamic Object System:** Create a system to allocate and manage dynamic objects in memory blocks, allowing you to efficiently handle a large number of objects.
   - **Function used:** `Memory_Allocate`, `Memory_Deallocate`, `Memory_SetFloat`, `Memory_GetFloat`

3. **Weather System:** Use memory blocks to store weather data and dynamically modify weather conditions based on in-game events.
   - **Function used:** `Memory_SetFloat`, `Memory_GetFloat`

4. **Dynamic Teleport System:** Implement a teleport system that allocates memory for teleportation points and stores the coordinates of various locations.
   - **Function used:** `Memory_Allocate`, `Memory_Deallocate`, `Memory_SetFloat`, `Memory_GetFloat`

5. **Vehicle Save System:** Create a system to save vehicle data (e.g., position, health, model) in memory blocks to enable fast and efficient vehicle loading.
   - **Function used:** `Memory_SetFloat`, `Memory_GetFloat`

6. **Achievement Tracking:** Use memory blocks to track player achievements and progress throughout the game.
   - **Function used:** `Memory_SetFloat`, `Memory_GetFloat`

7. **Inventory System:** Implement a dynamic inventory system that allows players to store and manage items in memory blocks.
   - **Function used:** `Memory_Allocate`, `Memory_Deallocate`, `Memory_SetFloat`, `Memory_GetFloat`

8. **Dynamic Team System:** Create a team management system that allocates memory for each team, storing player data and team-related information.
   - **Function used:** `Memory_Allocate`, `Memory_Deallocate`, `Memory_SetFloat`, `Memory_GetFloat`

9. **Persistent Data Storage:** Develop a system to save player data persistently in memory blocks, allowing for faster data retrieval during player logins.
   - **Function used:** `Memory_SetFloat`, `Memory_GetFloat`

10. **Damage Log System:** Use memory blocks to store damage log data, recording all damage dealt and received by players during gameplay.
    - **Function used:** `Memory_Allocate`, `Memory_Deallocate`, `Memory_SetFloat`, `Memory_GetFloat`

## Installation

1. Download the [memory_utils.inc](memory_utils.inc) file from this repository.

2. Place the `memory_utils.inc` file in the `pawno/includes` folder of your SA-MP server.

3. Include the library in your script using the `#include <memory_utils>` directive.



## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Contributions
```
Contributions to this project are welcome! Please open an issue or submit a pull request for any improvements or bug fixes.
```
