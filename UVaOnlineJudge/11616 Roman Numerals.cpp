#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num, i, round, len, sum;
    string s;
    while(cin >> s)
    {
        if(s[0] >= '0' && s[0] <= '9')
        {
            num = stoi(s);
            if(num >= 1000)
            {
                round = num/1000;
                for(i=0; i<round; i++)
                {
                    cout << "M";
                    num %= 1000;
                }
            }
            if(num >= 900)
            {
                cout << "CM";
                num -= 900;
            }
            if(num >= 500)
            {
                cout << "D";
                num -= 500;
            }
            if(num >= 400)
            {
                cout << "CD";
                num -= 400;
            }
            if(num >= 100)
            {
                round = num/100;
                for(i=0; i<round; i++)
                {
                    cout << "C";
                    num %= 100;
                }
            }
            if(num >= 90)
            {
                cout << "XC";
                num -= 90;
            }
            if(num >= 50)
            {
                cout << "L";
                num -= 50;
            }
            if(num >= 40)
            {
                cout << "XL";
                num -= 40;
            }
            if(num >= 10)
            {
                round = num/10;
                for(i=0; i<round; i++)
                {
                    cout << "X";
                    num %= 10;
                }
            }
            if(num == 9)
            {
                cout << "IX";
                num = 0;
            } 
            if(num >= 5)
            {
                cout << "V";
                num -= 5;
            }
            if(num == 4){
                cout << "IV";
                num = 0;
            } 
            if(num)
            {
                for(i=0; i<num; i++)
                {
                    cout << "I";
                }
            }
            cout << endl;
        }
        else
        {
            len = s.length(), sum=0;
            for(i=0; i<len; i++)
            {
                if(s[i] == 'M') sum += 1000;
                else if(s[i] == 'C')
                {
                    if(s[i+1] == 'M')
                    {
                        sum += 900;
                        i++;
                    }
                    else if(s[i+1] == 'D')
                    {
                        sum += 400;
                        i++;
                    }
                    else sum += 100;
                }
                else if(s[i] == 'D') sum += 500;
                else if(s[i] == 'X')
                {
                    if(s[i+1] == 'C')
                    {
                        sum += 90;
                        i++;
                    }
                    else if(s[i+1] == 'L')
                    {
                        sum += 40;
                        i++;
                    }
                    else sum += 10;
                }
                else if(s[i] == 'L') sum += 50;
                else if(s[i] == 'I')
                {
                    if(s[i+1] == 'X')
                    {
                        sum += 9;
                        i++;
                    }
                    else if(s[i+1] == 'V')
                    {
                        sum += 4;
                        i++;
                    }
                    else sum += 1;
                }
                else if(s[i] == 'V') sum += 5;
            }
            cout << sum << endl;
        }
    }
    return 0;
}