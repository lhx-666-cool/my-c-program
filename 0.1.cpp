#include<cstdio>
#include<algorithm>
#include<cctype>
using namespace std;
int nums[10] = { 0 };
int op[10] = { 0 };
int n;
int con = 0;
int jisuan() {
    int res[10] = { 0 };
    int head = -1;
    res[++head] = nums[0];
    for (int i = 0;i < n - 1;i++) {
        if (op[i] == 0) {
            res[++head] = nums[i + 1];
        }
        if (op[i] == 1) {
            res[++head] = -nums[i + 1];
        }
        if (op[i] == 2) {
            res[head] = res[head] * nums[i + 1];
        }
        if (op[i] == 3) {
            res[head] = res[head] / nums[i + 1];
        }
    }
    for (int i = 1;i <= head;i++) {
        res[0] += res[i];
    }
    return res[0];

}
void dfs(int c) {
    if (c < n - 1) {
        for (int i = 0;i < 4;i++) {
            op[c] = i;
            dfs(c + 1);
            op[c] = 0;
        }
    } else {
        int res = jisuan();
        if (res == 24) {
            for (int i = 0;i < 2 * n;i++) {
                if (i % 2 == 0) {
                    printf("%d", nums[i / 2]);
                    // if (nums[i / 2] == 1) {
                    //     printf("A");
                    // } else if (nums[i / 2] == 11) {
                    //     printf("J");
                    // } else if (nums[i / 2] == 12) {
                    //     printf("Q");
                    // } else if (nums[i / 2] == 13) {
                    //     printf("K");
                    // } else {
                    //     printf("%d", nums[i / 2]);
                    // }
                } else if (i % 2 == 1 && i != 2 * n - 1) {
                    if (op[i / 2] == 0) {
                        printf("+");
                    } else if (op[i / 2] == 1) {
                        printf("-");
                    } else if (op[i / 2] == 2) {
                        printf("*");
                    } else if (op[i / 2] == 3) {
                        printf("/");
                    }
                }
            }
            printf("\n");
            con++;
        }
    }
}
int main() {
    scanf("%d", &n);
    // char inp[2] = { 0 };
    for (int i = 0;i < n;i++) {
        scanf("%d", &nums[i]);
        // scanf(" %s", inp);
        // if (inp[0] == 'A') {
        //     nums[i] = 1;
        // } else if (inp[0] == 'J') {
        //     nums[i] = 11;
        // } else if (inp[0] == 'Q') {
        //     nums[i] = 12;
        // } else if (inp[0] == 'K') {
        //     nums[i] = 13;
        // } else {
        //     nums[i] = atoi(inp);
        // }
    }
    sort(nums, nums + n);
    do {
        dfs(0);
    } while (next_permutation(nums, nums + n));
    printf("%d", con);
}