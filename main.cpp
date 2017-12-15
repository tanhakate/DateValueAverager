#include<bits/stdc++.h>
using namespace std;


int main() {
    freopen("C:\\Users\\FORHAD\\CLionProjects\\Hello\\in.txt","r",stdin);
    freopen("C:\\Users\\FORHAD\\CLionProjects\\Hello\\out.txt","w",stdout);
    string str;
    getline(cin,str);
    int doshok = str[8] - '0';
    int ekok = str[9] - '0';
    int previousNumber = doshok * 10 + ekok;
    int previousMarks = (float)(str[str.length()-1] - '0');
    float count = 1;
    float sum = previousMarks;
    string prevString = str;
    while(getline(cin,str)){
        int doshok = str[8] - '0';
        int ekok = str[9] - '0';
        float marks = (float)(str[str.length()-1] - '0');
        int currentNumber = doshok * 10 + ekok;
        if(currentNumber == previousNumber){
            sum+=marks;
            count++;
//            cout <<"COUNT: " <<  count << " SUM" << sum << "String: " << str << endl;
            prevString = str;
        }
        else{
            previousNumber = currentNumber;
//            printf("ADDED: %s PREV: %d SUM: %0.2f COUNT:%f Str: %s \n",str.c_str(),previousNumber,sum/count,count,prevString.c_str());
//            printf("%s\n",prevString.substr(0,10).c_str());
            printf("%0.2f\n",sum/count);

            prevString = str;
            count = 1;
            sum = marks;
        }




//        printf("%d %0.2f\n",currentNumber,marks);
//
//        printf("%s\n",str.c_str());
    }
    printf("%s %0.2f\n",prevString.substr(0,10).c_str(), sum/count);
    return 0;
}