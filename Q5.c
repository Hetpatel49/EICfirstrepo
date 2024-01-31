#include <stdio.h>
#include <stdlib.h>

int min(int x, int y) { return (x < y) ? x : y; }

int calculateangle(int h, int m)
{
    // To calculate angle between hour hand and minute hand,
    // To calculate hour hand angle,
    // 12 hour -> 360 degree means 1 hour -> 30 degree means angle -> 30*hour
    // also minute changes hour hand
    // 60 minute means 30 degree shift of hour hand
    // so 1 minute means 0.5 degree hour hand shift
    // adding both degrees, hour hand angle is (30*hour + 0.5*minute)

    // To calculate minute hand angle,
    // 60 minute means 360 degrees
    // so 1 minute means 6 degrees
    // therefore minute hand angle is (6*minute)

    int hour_hand_angle = (h * 30 + 0.5 * m);
    int minute_hand_angle = 6 * m;

    // angle between to hands is difference between their individual angles
    int angle = abs(hour_hand_angle - minute_hand_angle);

    // finding angle in range of 0-180
    angle = min(360 - angle, angle);

    return angle;
}

int main()
{
    int hour, minute;
    printf("Enter hours between 0-11: ");
    scanf("%d", &hour);
    if (hour >= 0 && hour <= 11)
    {
        printf("Enter minutes between 0-59: ");
        scanf("%d", &minute);
        if (minute >= 0 && minute <= 59)
        {
            printf("Angle = %d\n", calculateangle(hour, minute));
        }
        else
            printf("Invalid input");
    }

    else
        printf("Invalid input");
    return 0;
}
