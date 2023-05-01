// #include <iostream>
// using namespace std;
// void swap(int *x, int *y){
//     int temp = *x;
//     *x=*y;
//     *y=temp;
//     cout<<*x<<" "<<*y<<endl;
//     cout<<x<<" "<<y<<endl;
// }
// int main(){
//     int x=12;
//     int y=15;
//     cout<<&x<<endl<<&y<<endl;
//     swap(&x,&y);
//     cout<<&x<<endl<<&y<<endl;
//     cout<<x<<endl<<y;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void find_and_last_index(string s,char ch,int *first , int *last){
//     for(int i=0;i<s.size();i++){
//         if(s[i]==ch){
//             *first=i;
//             break loop;
//         }
//         if(s[(s.size()-1)-i]==ch){
//             *last=(s.size()-1-i);
//             break;
//         }
//     }

// }
// int main() {
// string s="aaabac";
// char ch='a';
// int first=-1;
// int last=-1;
// int *pf=&first;
// int *pl=&last;
// find_and_last_index(s,ch,pf,pl);
// cout<<*pf<<" "<<*pl;
//     return 0;
// }

#include <iostream>
using namespace std;

void find_and_last_index(string s, char ch, int* first, int* last) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ch && *first==-1) {
            *first = i;
        }
        if(*last==-1 && s[s.size()-1-i]==ch){
            *last=s.size()-1-i;
        }
        if(*first!=-1 && *last!=-1){
            break;
        }

    }
    return;
}

int main() {
    string s = "aaabac";
    char ch = 'a';
    int first = -1;
    int last = -1;
    int* pf = &first;
    int* pl = &last;
    find_and_last_index(s, ch, pf, pl);
    cout << *pf << " " << *pl;
    return 0;
}
