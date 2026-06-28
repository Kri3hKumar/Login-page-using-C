# Password Login System (C)

## About

This is a simple console-based Password Login System written in C as a practice project while learning the basics of the C programming language.

The program allows the user to:
- Create a password.
- Log in using the created password.
- Get up to 3 login attempts.
- View the remaining number of attempts.
- Lock the account after 3 failed attempts.
- Reset the password after the account is locked.

## Concepts Used

- Variables
- Input and Output (`scanf`, `printf`)
- `if-else`
- `do-while` loop
- `goto`
- Conditional statements

## How to Run

Compile the program:

```bash
gcc Password_Login.c -o Password_Login
```

Run the executable:

```bash
./Password_Login
```

(On Windows, you can run `Password_Login.exe`.)

## Sample Output

```
Create your password: 1234
Now enter your password to log in: 1111
2 chances left
Invalid! Try again!

1234
You took 2 chances to login.

Login successful
'''



