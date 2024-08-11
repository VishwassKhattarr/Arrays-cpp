void printSubstrings(char input[]) {
    // Write your code here
   long count=0;
    for(long i=count;input[i]!='\0';i++){
        for(int j=count;j<=i;j++){
            cout<<input[j];
        }
        cout<<endl;
        count++;
    }
}


void printSubstrings(char input[]) {
    int k = 1;
    while (k <= strlen(input)) {
        for (int i = 0; i <= strlen(input) - k; i++) {
            for (int j = i; j < i + k; j++) {
                cout << input[j];
            }
            cout << endl;
        }
        k++;
    }
}