# **PRINTF Project**
![Language](https://img.shields.io/badge/Language-C-green?labelColor=grey&style=flat)
**_print**
---
This is our custom version of printf function, it can print characters, string and numbers with these function calls.

* `%c` : print a single character.
* `%s` : print a string.
* `%%` : print a percent.
* `%d` : print decimal.
* `%i` : print an integer.


**Flowchart**
---

```mermaid
flowchart TD
classDef start fill:#4cff00
classDef fonction fill:#0092ff
classDef cond fill:#ff8100
classDef return fill:#ff1100
A[Start]:::start --> B(is null):::cond
B -- yes --> C(Return -1):::return
C --> Z(end):::return
B -- no --> D(check the string):::fonction
D -- if --> E('\0'):::cond
E --> Y(Return increment count):::start --> Z
D -- no --> F(is % ?):::cond
F -- no --> G(print char):::start --> J(increment count):::fonction
F -- yes --> H(check next char):::fonction
H --> K(is spec format):::fonction
K -- no --> G
K -- yes --> I(start function):::start --> J
G --> D
I --> D
```

**EXAMPLES**
---

```c
#include "main.h"
int main()
{
_printf("String: %s\n", "School");
_printf("Decimal: %d\n", 745);
return(0);
}

```
**OUTPUT**
---
```c
String: School
Decimal: 745

```

**Compilation**
* `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c`

## Authors
* Alexis B.
* Killian R.
