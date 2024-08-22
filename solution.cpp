#include <iostream>
#include <vector>
#include <bitset>


    class Solution {
public:
   
   std::string getNoleadingzerobinary(int num)
   {
       std::bitset<32> binary(num);  // this binary is base 2 
       std::string binarystr = binary.to_string();
       // Find the first '1' to remove leading zeros
       size_t firstOne=binarystr.find('1');
       if (firstOne != std::string::npos)
       return binarystr.substr(firstOne);
       return 0;
   }
   
   int getComplement(const std::string& binarystr)
   {
       int complement;
       int size=binarystr.size();
       
       for (char bit : binarystr)
       {
            complement+=( bit =='0')? 1<<(size-1):0;
            --size;
       }
       return complement;
   }
   
    
    void findComplement(int num) {
        std::string binarystr;
        int complement=0;
        binarystr=getNoleadingzerobinary(num);
        std::cout << binarystr << std::endl;
        
        complement=getComplement(binarystr);
        std::cout << complement << std::endl;

        
        
        
    }
};


int main() {
    Solution s;
    int num=1111;
    s.findComplement(num);
    //std::cout<< s.findComplement(num) << std::endl;
}
