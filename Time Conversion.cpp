#include <bits/stdc++.h>
#include <sstream>
using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int l=s.length();
    int hh=(s[0]-'0')*10+(s[1]-'0');
    int mm=(s[3]-'0')*10+(s[4]-'0');
    int ss=(s[6]-'0')*10+(s[7]-'0');
    if(s[8]=='P'&&hh<12)
    hh+=12;
    else if(s[8]=='A'&&hh==12)
    hh=0;
    string rs,v,shh,smm,sss;
    shh=to_string(hh);
    smm=to_string(mm);
    sss=to_string(ss);
    
    
    if((s[3]-'0')==0||mm==0)
    smm="0"+smm;
    if((s[6]-'0')==0||ss==0)
    sss="0"+sss;
    if(s[8]!='P')
    {
    if((s[0]-'0')==0||hh==0)
    shh="0"+shh;
   }
   rs=shh+":"+smm+":"+sss;
    return rs;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
