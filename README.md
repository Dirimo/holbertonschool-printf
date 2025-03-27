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
git clone https://github.com/your-username/printf-project.git
cd holberton-printf


### Compilation
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o printf


## 🎬 Usage Example
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

## 📂 Project Structure
```
printf-project/
│
├── main.h           # Main header file
├── _printf.c        # _printf function implementation
├── print_functions.c # Specific printing functions
└── README.md        # This file
|__ Man page         # Manual page

## 🤝 Contributing
1. Fork the repository
2. Create a feature branch
3. Commit your changes
4. Push the branch
5. Create a Pull Request

### Contribution Guidelines
- Follow Betty coding style
- Add explanatory comments
- Do the compilation before doing git push

## 🧪 Testing
```bash
# Command to run tests (to be customized)
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o *c printf
./printf


## 🛡️ Allowed Functions
- `write()`
- `malloc()`
- `free()`
- Functions from `stdarg.h`, stddef, stdio, limits, main.h

## 👥 Authors
- Latifa, Nomen and Dirimo
  

## 📄 License
This project is licensed under the MIT License - see the LICENSE file for details.

## 📞 Contact
- GitHub Profile: [Titif75 - Nomen-collab - Dirimo20]

## 📋 Version Notes
### Version 1.0.0
- Initial implementation
- Handling specifiers `%c`, `%s`, `%d`, `%i`, `%%`
