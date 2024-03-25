bool isAnagram(char* s, char* t) {
    int cmpfunc( const void *a, const void *b) {
        return *(char*)a - *(char*)b;
    }

    qsort(s, strlen(s), sizeof(char), cmpfunc);
    qsort(t, strlen(t), sizeof(char), cmpfunc);

    if (strlen(s) != strlen(t)) {
        return false;
    }

    for (size_t i = 0; i < strlen(s); i++) {
        if (s[i] != t[i]) {
            return false;
        }
    }
    return true;
}
