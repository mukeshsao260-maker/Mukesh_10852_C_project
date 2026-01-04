Algorithm for Basic Password Strength Checker

Start the program.

Prompt the user to enter a password.

Read the password input (using scanf or gets for C).

Call a function validatePassword(password) to check password strength.

Inside the function:

Check minimum length (e.g., password should be ≥ 8 characters).

Loop through each character to check if the password contains at least one digit.

Loop through each character to check if the password contains at least one uppercase letter.

Return success if all conditions are met; otherwise, return failure or an error message.

In main():

Display “Password is valid” if function returns success.

Display “Password is invalid” if function returns failure.

End the program.

Purpose of the Code

To validate a password based on basic security rules.

To ensure that users create passwords that are harder to guess.

To practice programming concepts like:

Strings (char arrays in C)

Loops

Conditional statements

Functions

String traversal

To introduce the concept of input validation in programming.

Expected Outcomes

When the program runs:

The user is prompted to enter a password.

If the password meets all criteria:

Minimum length (e.g., ≥ 8 characters)

Contains at least one digit

Contains at least one uppercase letter
→ The program prints: "Password is valid".

If the password fails any condition:
→ The program prints: "Password is invalid" and may optionally show which rule was broken.

Users learn how to implement validation logic using loops and conditions.

Future Use / Applications

Can be extended to real-world applications like:

User login systems for websites or apps.

Account creation for online platforms.

Security systems where password strength matters.

Can be enhanced to include:

Special characters requirement (!@#$%^&*)

Lowercase letters requirement

Password confirmation match

Serves as foundation for learning cybersecurity basics.
