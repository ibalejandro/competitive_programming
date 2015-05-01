#include <iostream>

using namespace std;

int main()
{
    string key, text, out;
    char letter;
    while(cin >> key && key != "0"){
        cin >> text;
        for(int k = 0, i = 0; k < text.size(); ++k, ++i){
            if(i >= key.size()) i = 0;
            int toSum = ((int) (key[i]));
            toSum -= 64;
            int textInt = (int) text[k];
            if((textInt + toSum) > 90){
                toSum = ((textInt + toSum) - 90);
                letter = (char) (toSum+64);
            }else{
                 int letterInt = textInt + toSum;
                 letter = (char) (letterInt);
            }
            out += letter;
        }
        cout << out << endl;
        out = "";
    }
    return 0;
}
