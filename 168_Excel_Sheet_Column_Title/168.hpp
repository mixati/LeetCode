class Solution {
public:
    string convertToTitle(int columnNumber) {
        string resault;
        
        while (columnNumber) {
            columnNumber--;
            resault = string(1, (char)(columnNumber % 26 + 65)) + resault;
            columnNumber /= 26;
        }
        return resault;
    }
};