#include <stdio.h>
#include <string.h>

int checkLogin(char *login, char *passwd);
int checkValidPass(char *ps);

int main() {

    char login[64], password[64];

    printf("Enter login : ");
    gets(login);

    printf("Enter password : ");
    gets(password);

    if(checkLogin(login, password))
        printf("Welcome\n");
    else
        printf("Incorrect login or password\n");

    if(checkValidPass(password))
        printf("Accepted\n");
    else
        printf("Reject\n");

    return 0;
}

int checkValidPass(char *ps) {

    int len = strlen(ps);
    int digit = 0;
    int upper = 0;
    int first = 0;

    int use[26] = {0};
    int Upper1 = 0;

    int i;

    if(!(ps[0] >= '0' && ps[0] <= '9'))
        first = 1;

    for(i = 0; i < len; i++) {

        if(ps[i] >= '0' && ps[i] <= '9')
            digit++;

        if(ps[i] >= 'A' && ps[i] <= 'Z') {
            upper++;

            if(use[ps[i] - 'A'] == 1)
                Upper1 = 1;
            else
                use[ps[i] - 'A'] = 1;
        }
    }

    int c1 = (len == 5 && digit >= 1);

    int c2 = (len >= 5 && len <= 8 &&
                 first &&
                 upper >= 2 &&
                 digit >= 2);

    int c3 = (len >= 5 && len <= 8 &&
                 upper >= 2 &&
                 digit >= 2 &&
                 Upper1 == 0);

    if(c1 || c2 || c3)
        return 1;

    return 0;
}

int checkLogin(char *login, char *passwd) {

    if(strcmp(login, "student1") == 0 &&
       strcmp(passwd, "mypass") == 0)
        return 1;

    return 0;
}
