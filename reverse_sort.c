//override weak funciton
int compare(int a, int b)
{
    return b - a;
}

int compare_for_qsort(const void* a, const void* b)
{
    return *((int*) b) - *((int*)a);
}
