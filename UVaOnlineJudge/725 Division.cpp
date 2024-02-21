#include <bits/stdc++.h>
using namespace std;

bool checkValues(int a, int b){
   map<int,int> data;

   while(a != 0){
        data[a%10]++;
        a/=10;
   }

   while(b != 0){
        data[b%10]++;
        b/=10;
   }

   if(data.size() != 10)
        return false;

   for(map<int,int>::iterator it = data.begin(); it != data.end(); it++){
        if(it->second != 1)
            return false;
   }

   return true;
}

int main(){
    int abcde, fghij, N, flagOne, flagTwo;
    bool hasAnswer, spaceAnswer = false;

    while(scanf("%d", &N)){
        if(!N)
            break;

        if(!spaceAnswer)
            spaceAnswer = true;
        else
            printf("\n");

        hasAnswer = false;

        for(fghij=1234; fghij<=98765; fghij++){
            abcde = N * fghij;
            if(abcde > 98765)
                break;
            if(abcde < 10000)
                flagOne = abcde * 10;
            else
                flagOne = abcde;
            if(fghij < 10000)
                flagTwo = fghij * 10;
            else
                flagTwo = fghij;

            if(checkValues(flagOne, flagTwo)){
                if(abcde < 10000)
                    printf("0%d / %d = %d\n", abcde, fghij, N);
                else if(fghij < 10000)
                    printf("%d / 0%d = %d\n", abcde, fghij, N);
                else
                    printf("%d / %d = %d\n", abcde, fghij, N);
                hasAnswer = true;
            }

        }

        if(!hasAnswer)
            printf("There are no solutions for %d.\n", N);
    }
return 0;
}
