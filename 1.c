#include <stdio.h>
#include <math.h>

int main()
{
    char ISBN[14];
    char correct_char_code;
    int digit[9];
    scanf("%s",ISBN);
    digit[0]=ISBN[0]-'0';
    digit[1]=ISBN[2]-'0';
    digit[2]=ISBN[3]-'0';
    digit[3]=ISBN[4]-'0';
    digit[4]=ISBN[6]-'0';
    digit[5]=ISBN[7]-'0';
    digit[6]=ISBN[8]-'0';
    digit[7]=ISBN[9]-'0';
    digit[8]=ISBN[10]-'0';
    int result=(digit[0]*1+digit[1]*2+digit[2]*3+digit[3]*4+digit[4]*5+digit[5]*6+digit[6]*7+digit[7]*8+digit[8]*9)%11;
    if(result==10) {
        correct_char_code='X';
    }
    else {
        correct_char_code = result + '0';
    }
    if (correct_char_code==ISBN[12]) {
        printf("Right");
    }
    else {
            printf("%c-", ISBN[0]);
            printf("%c%c%c-", ISBN[2], ISBN[3], ISBN[4]);
            printf("%c%c%c%c%c-", ISBN[6], ISBN[7], ISBN[8], ISBN[9], ISBN[10]);
            printf("%c\n", correct_char_code);
        }
    return 0;
}
