bool canConstruct(char * ransomNote, char * magazine){
    int map[26] = {0};
    while(*ransomNote){
        map[*ransomNote - 'a']++;
        ransomNote++;
    }
    while(*magazine){
        map[*magazine - 'a']--;
        magazine++;
    }
    for(int i=0;i<26;i++)
        if (map[i] > 0) return false;
    return true;
}
