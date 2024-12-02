# 📚 Get_Next_Line :



## 🎯 About The Project :

get_next_line is a function that reads a file line by line, returning the next line each time it is called. This function is designed to handle files, standard input, or any valid file descriptor. The implementation ensures memory efficiency and supports arbitrary buffer sizes defined at compile time.

This project is a typical exercise in memory management and understanding I/O operations in C, often part of learning software development fundamentals.

### 💡 What I Learned : 

- **File Handling and I/O in C** : I learned how to efficiently handle file I/O operations using file descriptors and manage memory while reading data from files in C. This includes using the read function to gather data in chunks and dynamically resizing buffers as needed.

- **Memory Management** : I practiced the importance of memory management in C, specifically how to allocate, use, and free memory correctly to avoid memory leaks. This project helped me understand the nuances of static variables, dynamic memory allocation, and the importance of freeing memory after use.

- **String Manipulation** : I became more comfortable working with strings in C. I implemented string functions like ft_strlen, ft_strjoin, and ft_substr, which taught me about string manipulation and the internal workings of string functions.

- **Efficient Buffering** : I gained experience in handling buffers with a fixed size (BUFFER_SIZE). I understood how to use buffers to store data incrementally while reading files and how to split the content at the correct positions (e.g., at newlines).

- **Error Handling and Edge Cases** : The project helped me to think about edge cases like empty files, reading beyond the file’s end, and error handling when file descriptors are invalid. Handling such situations efficiently is crucial for robust C programming.

- **Modular Design** : I learned how to break down complex problems into smaller, more manageable helper functions. This made the code more modular, reusable, and easier to understand.

## 🌱 Personal Experience :

- This project was my first deep dive into working with files and memory in C. I faced challenges with pointer manipulation and memory management, especially dealing with buffers and freeing memory.
  
- The most valuable lesson was understanding how to efficiently manage memory and avoid leaks.

- Overall, it was a tough but rewarding experience. I’m glad I completed it and gained a stronger understanding of C programming.

## 📝 Main Function :

- **find_newline** : Reads the file and returns the content up to the first newline character.

- **substr_newline** : Extracts a substring up to the newline character.

- **update_str** : Updates the static string to store the remaining content after the newline.

- **get_next_line** : Retrieves the next line from the file.


## 🛠️ Helper Functions : 

- **ft_strlen** : Returns the length of a string.
- **ft_strjoin** : Concatenates two strings into a new one.
- **ft_strdup** : Duplicates a string.
- **ft_substr** : Extracts a substring from a given string.
- **ft_strchr** : Finds the first occurrence of a character in a string.
