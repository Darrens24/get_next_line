<p align="center">
    <img src="get_next_linem.png" alt="Badge Name">
</p>

## Introduction
`get_next_line` is a function that reads a file line by line. This project at 42 is designed to help students understand file handling in C, dynamic memory allocation, and static variables. The aim is to create a highly efficient and memory-leak-free function that can be used in future projects.

## Objectives
- To handle reading from multiple file descriptors without losing the reading thread.
- To manage memory efficiently, ensuring no leaks.
- To optimize for speed and efficiency.

## Implementation
- Written in C, adhering to the Norm.
- Utilizes static variables to maintain the state of multiple file reads.
- Efficient memory management to prevent leaks.

### Bonus Achievements
- **Multiple File Descriptor Support**: Ability to read from multiple file descriptors without mixing up content.
- **Buffer Size Independence**: The function works irrespective of the buffer size defined during compilation.

## Challenges and Solutions
- **Buffer Management**: Implementing an efficient way to handle buffers was challenging. A dynamic approach to buffer management was adopted to ensure flexibility and efficiency.
- **Memory Leaks**: Rigorous testing was conducted using Valgrind and other tools to ensure there were no memory leaks.

## Usage
```c
#include "get_next_line.h"

int main()
{
    int fd = open("example_file.txt", O_RDONLY);
    char *line;

    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    }
    close(fd);
    return (0);
}
