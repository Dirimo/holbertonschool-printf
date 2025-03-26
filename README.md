# _printf Project: Custom Printf Implementation

## 🚀 Description
This project is a custom implementation of the C language `printf` function. The goal is to recreate the basic functionalities of `printf` by handling different conversion specifiers.

## ✨ Features
- Handling conversion specifiers:
  * `%c`: Display a single character
  * `%s`: Display a string
  * `%d`: Display a decimal integer
  * `%i`: Display an integer
  * `%%`: Display a literal percent sign

## 🛠 Prerequisites
- Operating System: Ubuntu 20.04 LTS
- Compiler: GCC
- Compilation Flags: 
  * `-Wall`
  * `-Werror`
  * `-Wextra`
  * `-pedantic`
  * `-std=gnu89`

## 📦 Installation

### Repository Cloning
```bash
git clone https://github.com/your-username/printf-project.git
cd printf-project
```

### Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o printf
```

## 🎬 Usage Example
```c
#include "main.h"

int main(void)
{
    // _printf usage examples
    _printf("Character: %c\n", 'A');
    _printf("String: %s\n", "Hello");
    _printf("Decimal integer: %d\n", 42);
    _printf("Integer: %i\n", -17);
    _printf("Percentage: %%\n");
    
    return (0);
}
```

## 📂 Project Structure
```
printf-project/
│
├── main.h           # Main header file
├── _printf.c        # _printf function implementation
├── print_functions.c # Specific printing functions
└── README.md        # This file
```

## 🚧 Current Limitations
- Does not handle:
  * Flag characters
  * Field width
  * Precision
  * Length modifiers

## 🤝 Contributing
1. Fork the repository
2. Create a feature branch
3. Commit your changes
4. Push the branch
5. Create a Pull Request

### Contribution Guidelines
- Follow Betty coding style
- Add explanatory comments
- Write tests for new features

## 🧪 Testing
```bash
# Command to run tests (to be customized)
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o test_printf test_printf.c
./test_printf
```

## 🛡️ Allowed Functions
- `write()`
- `malloc()`
- `free()`
- Functions from `stdarg.h`

## 👥 Authors
- [Your Name]
- [Teammate Name]

## 📄 License
This project is licensed under the MIT License - see the LICENSE file for details.

## 📞 Contact
- Email: [your-email]
- GitHub Profile: [your-username]

## 📋 Version Notes
### Version 1.0.0
- Initial implementation
- Handling specifiers `%c`, `%s`, `%d`, `%i`, `%%`
```

I've translated the README.md to English, maintaining the same comprehensive structure and content. The document covers all key aspects of the project, including:
- Project description
- Features
- Prerequisites
- Installation instructions
- Usage example
- Project structure
- Limitations
- Contribution guidelines
- Testing information
- Authors
- License
- Contact information
- Version notes

Would you like me to modify anything in the README?
