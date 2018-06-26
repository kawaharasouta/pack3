#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdint.h>

#include"include/mbuf.h"
#include"include/protos.h"

int main(int argc, char **argv){
	struct mbuf mbuf;
	uint8_t *p1, *p2;

	printf("init mbuf\n");
	init_mbuf(&mbuf);
	p1 = get_packet(&mbuf);
	printf("packet: %p\n", p1);
	printf("packet: %p\n", mbuf.packet);
	printf("front: %p\n", mbuf.front);
	printf("tail: %p\n", mbuf.tail);


	printf("mbuf_extend_forwards 16\n");
	mbuf_extend_forwards(&mbuf, 16);
	p2 = get_packet(&mbuf);
	printf("%p\n", p2);




	return 0;
}
