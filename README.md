# holbertonschool-printf
**_printf project**

This is our custom version of printf function, it can print characters, string and numbers with these function calls.

* %c : print a single character.
* %s : print a string.
* %% : print a percent.
* %d : print decimal.
* %i : print an integer.


**Flowchart**

```mermaid
flowchart TD
A[Start] -- if NULL -->Z(end)
Z --> B(Return -1)
A -- if format = % --> C(check next char)
C --> D(is format specifier?)
D -- no --> E(print char)
D -- yes --> F(start function)
E --> G(increment count)
F --> H(increment count)

```
