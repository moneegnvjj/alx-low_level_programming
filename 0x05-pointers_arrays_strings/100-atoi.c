#include <stdio.h>

#define INT_MAX 2147483647
#define INT_MIN -2147483648

int _atoi(char *s) {
    int sign = 1;
    int result = 0;
    int i = 0;

    // Skip leading whitespace
    while (s[i] == ' ') {
        i++;
    }

    // Check for sign
    if (s[i] == '-') {
		sign = -1;
        i++;
    } else if (s[i] == '+') {
        i++;
    }

    /* Convert digits to integer*/
    while (s[i] >= '0' && s[i] <= '9') {
        int digit = s[i] - '0';

        /* Check for overflow*/
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10)) {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        result = result * 10 + digit;
        i++;
    }

    return result * sign

