#include<bits/stdc++.h>
using namespace std;
int main()
{
    while (1) {
        string input,line;
        int len,flen,correct=0;
        cout<<"Enter the word: "; getline(cin,input);
        len = input.length();
        for (int i=0; i < len; i++)
            input[i] = tolower(input[i]);
        ifstream words ("words.txt");
        if(words)
        {
            while (getline(words,line))
            {
                flen = line.length();
                if (len==flen)
                {
                    if (line==input)
                    {
                        correct=1;
                    }
                    else continue;
                }
                else continue;
            }
            words.close();
            if (correct==1)
            {
                cout<<endl<<"Spelling is correct"<<endl;
            }
            if (correct==0)
            {
                int missing = 0, extra = 0, mixed = 0, incorrect = 0, exchanged = 0;
                cout<<endl<<"Spelling is wrong. Possible right spellings are given below:- "<<endl<<endl;
                missing = missingCharacter(input);
                extra = extraCharacter(input);
                mixed = mixedExtraMissing(input);
                incorrect = incorrectArrangement(input);
                exchanged = exchangedCharacters(input);
                if (missing == 0 && extra == 0 && mixed == 0 && incorrect == 0 && exchanged == 0)
                {
                    cout<<endl<<"No such word exist"<<endl;
                }
            }
        }
        else
        {
            cout<<" to open words.txt"<<endl;
        }
        cout<<endl<<"Press any key to continue..."<<endl<<endl;
        _getch();
    }
    return 0;

}