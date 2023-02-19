#include <stdio.h>

int main(int argc, char* argv[])
{
    while (argc > 0) {
        argc--;

        if (argv[argc][0] == '-') {
            if (argv[argc][1] == 'a')
                printf("-a option\n");
            if (argv[argc][1] == 's')
                printf("-s option\n");
        }
    }

    return 0;
}

/*
text file
binary file
file.datにbinary形式で10,20,30が16進数のリトルエンディアンで書き込まれる。
大量の情報を処理する際にディスプレイにいちいち表示させるのは手間。またファイルに
保存できれば何かと便利
*/