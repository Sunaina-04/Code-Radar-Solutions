// Your code here...
#include <stdio.h>
int main(){
    char a;
    scanf(''%c',&a);
    if (a<=97 && a>=122)||(a<=65 && a>=90){
        if (a=='A'||a=='E'||a=='I'||a=='O'||a=='U'||a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){printf('Vowel');}
        else{printf('Consonant');}}
    else if(a<=48 && a>=57){printf('Digit');}
    else {
        printf('Special Character');
    }
}