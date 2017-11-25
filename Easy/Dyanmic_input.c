char * input(charx *a){

    char *string = (char *)malloc(sizeof(char));
    int i=0;

    printf("%s", a);

    while ( (string[i] = getchar()) != '\n'){
        string = realloc(string, strlen(string)+sizeof(char));
        i++;
    }

    string[i] = '\0';

    return string;

}
