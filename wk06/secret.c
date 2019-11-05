
// - what does this do?
// - what questions do you have?
int secret_function(char *word) {
    int i = 0;
    int result = 0;
    while (word[i] != '\0') {
        if(word[i] >= 'a' && word[i] <= 'z') {
            result++;
        }
        i++;
    }
    return result;
}






#include <stdio.h>

int main (void){
    char* word = "Hello";
    int num = secret_function(word);

    printf("%s gives %d\n", word, num);
}
