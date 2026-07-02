class Solution {
public:
    string intToRoman(int num) {
         
         string s="";
         if(num/1000==1)
         s+='M';
         else if(num/1000==2)
         s+="MM";
         else if(num/1000==3)
         s+="MMM";
         vector<string> hundreds = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"}; 
         int h=(num/100)%10;
         s+=hundreds[h];
         int t=(num/10)%10;
         vector<string> tens = { "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
         s+=tens[t];
         int o=num%10;
         vector<string> ones = {"", "I", "II", "III", "IV","V", "VI", "VII", "VIII", "IX"};
         s+=ones[o];
         return s;
    }
};