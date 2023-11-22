---
marp: true
---

#### if文発展課題①
`変数 e が10より小さい場合に「eは10未満です」と出力するプログラムを書いてください。`

**answer**
```c
#include <stdio.h>

int main() {
    int e = 9;
    if (e < 10) {
        printf("eは10未満です\n");
    }
    return 0;
}

```
---
### fot文チャレンジ問題
`0~19までの整数を開業して出力されるプログラムを作成してください`
```c
#include <stdio.h>

int main() {
    for (int i = 0; i < 20; i++) {
        printf("%d\n", i);
    }

    return 0;
}

```
---
### while文チャレンジ問題
**1~10までの数字の中から偶数のみを出力するプログラムを作成してください。**
```c
#include <stdio.h>

int main() {
    // カウントダウンの処理
    int count = 10;
    printf("カウントダウン:\n");
    while (count > 0) {
        printf("%d\n", count);
        count--;
    }

    // 偶数のみ出力する処理
    int number = 1;
    printf("偶数のみ出力:\n");
    while (number <= 10) {
        if (number % 2 == 0) {
            printf("%d\n", number);
        }
        number++;
    }

    return 0;
}


```

---
## 総合テスト 解凍
**1から50までの数字の中で、3で割り切れる数字を出力するプログラムを書いてください。ただし、出力は次のルールに従ってください**

- 1から25までは for ループを使う。
- 26から50までは while ループを使う。

---
```c
#include <stdio.h>

int main() {
    // 1から25までの処理
    for (int i = 1; i <= 25; i++) {
        if (i % 3 == 0) {
            printf("%d\n", i);
        }
    }

    // 26から50までの処理
    int j = 26;
    while (j <= 50) {
        if (j % 3 == 0) {
            printf("%d\n", j);
        }
        j++;
    }

    return 0;
}
```