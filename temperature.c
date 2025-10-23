 /*
 Name:Bivon nyandiko
 Reg no:PA106G/G/28825/25
 Description:function on temperature
 */
 
 
 #include <stdio.h>

float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    float f = 98.6;
    float c = convertToCelsius(f);
    printf("%.2f°F is %.2f°C\n", f, c);
    return 0;
}