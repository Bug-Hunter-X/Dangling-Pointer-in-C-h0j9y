int main() {int* ptr = (int*)malloc(sizeof(int)); *ptr = 10; free(ptr); ptr = NULL; return 0;} 