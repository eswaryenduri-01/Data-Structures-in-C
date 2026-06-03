#include <stdio.h>

void mergesort(int a[], int l, int h);
void merge(int a[], int l, int mid, int h);

void mergesort(int a[], int l, int h)
{
    int mid;
    if (l < h)
    {
        mid = (l + h) / 2;

        mergesort(a, l, mid);
        mergesort(a, mid + 1, h);

        merge(a, l, mid, h);
    }
}

void merge(int a[], int l, int mid, int h)
{
    int i = l;
    int j = mid + 1;
    int k = l;
    int temp[100];

    while (i <= mid && j <= h)
    {
        if (a[i] <= a[j])
        {
            temp[k] = a[i];
            i++;
        }
        else
        {
            temp[k] = a[j];
            j++;
        }
        k++;
    }

    while (i <= mid)
    {
        temp[k] = a[i];
        i++;
        k++;
    }

    while (j <= h)
    {
        temp[k] = a[j];
        j++;
        k++;
    }

    for (i = l; i <= h; i++)
    {
        a[i] = temp[i];
    }
}

int main()
{
    int n, i;

    printf("Enter n value: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    mergesort(a, 0, n - 1);

    printf("After merge sort:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
