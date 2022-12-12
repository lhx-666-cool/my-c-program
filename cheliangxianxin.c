#include <stdio.h>

int main() {
    int week, wu, chepai, hou;
    scanf("%d %d %d", & week, & wu, & chepai);
    hou = chepai % 10;
    if (week >= 1 && week <= 5) {
        if (wu < 200) {
            printf("%d no", hou);
        } else if (wu >= 200 & wu < 400) {
            if (week == 1) {
                if (hou == 1 || hou == 6) {
                    printf("%d yes", hou);
                } else {
                    printf("%d no", hou);
                }
            }
            if (week == 2) {
                if (hou == 2 || hou == 7) {
                    printf("%d yes", hou);
                } else {
                    printf("%d no", hou);
                }
            }
            if (week == 3) {
                if (hou == 3 || hou == 8) {
                    printf("%d yes", hou);
                } else {
                    printf("%d no", hou);
                }
            }
            if (week == 4) {
                if (hou == 4 || hou == 9) {
                    printf("%d yes", hou);
                } else {
                    printf("%d no", hou);
                }
            }
            if (week == 5) {
                if (hou == 5 || hou == 0) {
                    printf("%d yes", hou);
                } else {
                    printf("%d no", hou);
                }
            }
        } else if (wu >= 400 && wu <= 600) {
            if (week == 1 || week == 3 || week == 5) {
                if (hou == 1 || hou == 3 || hou == 5 || hou == 7 || hou == 9) {
                    printf("%d yes", hou);
                } else {
                    printf("%d no", hou);
                }
            }
            if (week == 2 || week == 4) {
                if (hou == 0 || hou == 2 || hou == 4 || hou == 6 || hou == 8) {
                    printf("%d yes", hou);
                } else {
                    printf("%d no", hou);
                }
            }
        } else {

        }
    } else {
        printf("%d no", hou);
    }
}