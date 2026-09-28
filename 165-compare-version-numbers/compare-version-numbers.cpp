class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i = 0;
        int j = 0;
        while (i < version1.size() || j < version2.size()) {
            int end1 = i;
            while (end1 < version1.size() && version1[end1] != '.') {
                end1++;
            }
            int end2 = j;
            while (end2 < version2.size() && version2[end2] != '.') {
                end2++;
            }
            int num1 = 0;
            int num2 = 0;
            if (i < version1.size()) {
                num1 = stoi(version1.substr(i, end1 - i));
            }
            if (j < version2.size()) {
                num2 = stoi(version2.substr(j, end2 - j));
            }
            if(num1<num2) return -1;
            if(num2<num1) return 1;
            i=end1+1;
            j=end2+1;
        }
        return 0;
    }
};