#include <stdio.h>

// ============================================================
// CSCI 232 – Lab: Implementing Standard Library Functions
//
// RULES:
//   - Use ONLY: if, switch, goto, putchar(), getchar()
//   - Do NOT use: while, for, do-while
//   - Do NOT use any standard library functions
//
// Iteration pattern (shown in lab today):
//
//   int i = 0;
//   loop:
//       if (i >= n)
//           goto done;
//       // body
//       i++;
//       goto loop;
//   done:
//
// ============================================================


// ============================================================
// FUNCTION 1: my_isdigit
//
// Returns 1 if c is a digit character ('0' through '9').
// Returns 0 otherwise.
//
// Example:
//   my_isdigit('5')  →  1
//   my_isdigit('a')  →  0
// ============================================================

int my_isdigit(char c)

{
    if (c >= 48 && c <= 57)
{
    return 1;
}
else
{
    return 0;
}
}


// ============================================================
// FUNCTION 2: my_islower
//
// Returns 1 if c is a lowercase letter ('a' through 'z').
// Returns 0 otherwise.
//
// Example:
//   my_islower('m')  →  1
//   my_islower('M')  →  0
// ============================================================
int my_islower(char c)
{
if(c <= 122 && c >= 97)
{  
    return 1;
}
else
{ 
    return 0;
}
}


// ============================================================
// FUNCTION 3: my_strlen
//
// Returns the number of characters in the string s,
// not counting the null terminator '\0'.
//
// Example:
//   my_strlen("hello")  →  5
//   my_strlen("")        →  0
// ============================================================
int my_strlen(char s[])
{
    int i = 1;
loop:
    if (s[i] == NULL)
        goto done;
    else
    {
        putchar( s[i] );
        i = i + 1;  
        goto loop;

    }
    done:


    return 0;
}


// ============================================================
// FUNCTION 4: my_strcpy
//
// Copies the string src into dest,
// including the null terminator '\0'.
//
// Example:
//   my_strcpy(buf, "hello")  →  buf contains "hello"
// ============================================================
void my_strcpy(char dest[], char src[])
{
    int i = 0;
    loop:
    dest[i] = src[i];
    if (src[i] == NULL)
        goto done;
    else
    {
        (src[i]);
        i = i + 1;  
        goto loop;

    }
    done:


    return 0;

}


// ============================================================
// FUNCTION 5: my_atoi
//
// Converts a string of digit characters to an integer.
// Handles an optional leading '-' sign.
//
// Examples:
//   my_atoi("123")   →   123
//   my_atoi("-42")   →  -42
//   my_atoi("0")     →    0
// ============================================================
int my_atoi(char s[])
{

// digits cannnot be bigger than 255   
   
    int i = 0;
    int n = 0;
    int a = 0;
    loop:
    if (s[i] == 45)
    {    
        n = 1;
        if (n == 1)
        {
            a = a + '-';
        }
        else
        {
            goto loop;
        }
    }
    else
    {
        if (s[i] >= 48 && s[i] <= 57)
        {    
        a = a * 10;
        a = a + s[i] - 48;
        i = i + 1;
        }
        else
        {
goto done;
        }

    goto loop;
    }

    done:
    return 0;
}

// Signed, Rhyker Mohr

// ============================================================
// Do NOT modify below this line.
// ============================================================

void runTests(void);

int main() 
{

//Testing section 1
// my_isdigit('H');

//Testing section 2
// my_islower('H');

//Testing section 3
//my_strlen("hello");

//Testing section 4
/*char buf[10];
my_strcpy(buf, "hello");
*/
//Testing section 5

my_atoi("123");


	 runTests(); 
	 return 0; 
}
