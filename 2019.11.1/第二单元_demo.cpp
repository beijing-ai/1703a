# include <iostream>
using namespace std;

int main()
{ 
    char sentence[80], prev = ' '; //prev 表示当前字符的前一字符
    int i, num = 0;

    gets(sentence);

    for (i = 0; sentence[i] != '\0'; ++i) {
        cout << sentence[i] ;
        if (sentence[i] == ' ')
        {
            ++num;
        }
    }
	cout << num;
    return 0;
}
