#include<stdio.h>

void main() {
	FILE *src, *dst;
	char src_path[] = "src_img.png";
	char dst_path[] = "finished.png";
	int bin_data;
    int count=0;

	//create a new file
	src = fopen(src_path, "rb");
	dst = fopen(dst_path, "wb");

	while((bin_data = fgetc(src)) != EOF) {
		fputc(bin_data, dst);
    }

	printf("\nTotal bytes transferred: %d", ftell(src));

	fclose(src);
	fclose(dst);
}