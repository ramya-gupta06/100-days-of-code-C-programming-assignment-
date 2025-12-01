// Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char src_name[512];
    char dst_name[512];

    printf("Enter source filename: ");
    if (fgets(src_name, sizeof(src_name), stdin) == NULL) {
        fprintf(stderr, "Error reading source filename.\n");
        return 1;
    }
    printf("Enter destination filename: ");
    if (fgets(dst_name, sizeof(dst_name), stdin) == NULL) {
        fprintf(stderr, "Error reading destination filename.\n");
        return 1;
    }

    src_name[strcspn(src_name, "\r\n")] = '\0';
    dst_name[strcspn(dst_name, "\r\n")] = '\0';

    if (strcmp(src_name, dst_name) == 0) {
        fprintf(stderr, "Source and destination filenames are the same. Aborting to avoid truncation.\n");
        return 1;
    }

    FILE *src = fopen(src_name, "rb");
    if (src == NULL) {
        perror("Error opening source file");
        return 1;
    }

    FILE *dst = fopen(dst_name, "wb");
    if (dst == NULL) {
        perror("Error opening/creating destination file");
        fclose(src);
        return 1;
    }

    int ch;
    long count = 0;
    while ((ch = fgetc(src)) != EOF) {
        if (fputc(ch, dst) == EOF) {
            perror("Error writing to destination file");
            fclose(src);
            fclose(dst);
            return 1;
        }
        count++;
    }

    if (ferror(src)) {
        perror("Error reading source file");
        fclose(src);
        fclose(dst);
        return 1;
    }

    fclose(src);
    fclose(dst);

    printf("Copied %ld bytes from '%s' to '%s'.\n", count, src_name, dst_name);
    return 0;
}
