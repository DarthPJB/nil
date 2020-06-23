/***************************************************************************
  ripped.h  -  NEEDDESCRIPTION
  --------------------------------------------------------------------------
  begin                : 1999-10-17
  by                   : Flemming Frandsen
  email                : dion@swamp.dk

  last changed         : 2004-01-25
  by                   : Christoph Brill (egore)
  email                : egore@gmx.de

  last changed         : 2004-09-19
  by                   : H. Ilari Liusvaara
  email                : hliusvaa@cc.hut.fi
  changedescription    : Make this selfstanding.

  copyright            : (C) 1999 by Flemming Frandsen
  email                : dion@swamp.dk
  
 ***************************************************************************/

#ifndef RIPPED_H
#define RIPPED_H

#define LIERO_MAP_SIZE_X 504
#define LIERO_MAP_SIZE_Y 350

const char vWormCollisions [ 256 ] = { // weird!
 0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,
 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
 1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,
 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
 1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,
 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
 0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,
 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
 0,0,0,1,1,1,1,1,0,0,0,1,1,1,1,1,
 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 };
const char vDiggable [ 256 ] = {
 0,1,1,0,0,0,0,0,0,0,0,0,1,1,1,1,
 1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,
 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
 0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,
 1,1,1,1,1,1,1,1,0,0,0,0,0,1,1,1,
 0,0,1,1,1,0,0,0,1,1,1,0,0,0,1,1,
 1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,1,1,1,1,1,0,0,0,1,1,1,1,1,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const char vAir [ 256 ] = {
 0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const char vProjCollisions [ 256 ] = {
 0,1,1,0,0,0,0,0,0,0,0,0,1,1,1,1,
 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
 1,1,1,0,0,0,0,1,1,1,1,1,0,0,0,0,
 0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,
 0,0,1,1,1,1,1,1,0,0,0,1,1,1,1,1,
 1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,1,1,1,1,1,0,0,0,1,1,1,1,1,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

const unsigned lieropal[256]={
0x00000000,0x006c3800,0x006c5000,0x00a49480,0x00009000,0x003cac3c,0x00fc5454,0x00a8a8a8,
0x00545454,0x005454fc,0x0054d854,0x0054fcfc,0x00784008,0x00804408,0x0088480c,0x00905010,
0x00985414,0x00a05818,0x00ac601c,0x004c4c4c,0x00545454,0x005c5c5c,0x00646464,0x006c6c6c,
0x00747474,0x007c7c7c,0x00848484,0x008c8c8c,0x00949494,0x009c9c9c,0x00385c94,0x004878c4,
0x00609cfc,0x0084b0f8,0x00b0ccf8,0x006c6c6c,0x00909090,0x00b4b4b4,0x00d8d8d8,0x0048946c,
0x0060c48c,0x007cfcb8,0x0098f8c4,0x00c0f8d8,0x006c6c6c,0x00909090,0x00b4b4b4,0x00d8d8d8,
0x00a8a8f8,0x00d0d0f4,0x00fcfcf4,0x003c5000,0x00587000,0x00749000,0x0094b000,0x00784834,
0x009c7858,0x00c4a87c,0x00ecd8a0,0x009c7858,0x00c4a87c,0x00ecd8a0,0x00c86400,0x00a05000,
0x00484848,0x006c6c6c,0x00909090,0x00b4b4b4,0x00d8d8d8,0x00fcfcfc,0x00c4c4c4,0x00909090,
0x00983c00,0x00b46400,0x00d08c00,0x00ecb400,0x00a85400,0x00d80000,0x00bc0000,0x00a40000,
0x00c80000,0x00ac0000,0x00d80000,0x00bc0000,0x00a40000,0x00d80000,0x00bc0000,0x00a40000,
0x004878c4,0x00609cfc,0x0084b0f8,0x004878c4,0x00609cfc,0x0084b0f8,0x00948800,0x00887c00,
0x007c7000,0x00746400,0x00845c28,0x00a08448,0x00bcb068,0x00d8dc88,0x00f8f8bc,0x00f4f4fc,
0x00fc0000,0x00f81804,0x00f83408,0x00f85010,0x00f86c14,0x00f88818,0x00f8a420,0x00f8c024,
0x00f8dc28,0x00f4e83c,0x00f4f450,0x00f4f470,0x00f4f494,0x00f0f0b4,0x00f0f0d4,0x00f0f0f8,
0x0060c48c,0x007cfcb8,0x0098f8c4,0x0060c48c,0x007cfcb8,0x0098f8c4,0x00f83c3c,0x00f47c7c,
0x00f4bcbc,0x00609cfc,0x0084b0f8,0x00b0ccf8,0x0084b0f8,0x007cfcb8,0x0098f8c4,0x00c0f8d8,
0x0098f8c4,0x00948800,0x00887400,0x007c6000,0x00704c00,0x00643800,0x00582800,0x00686888,
0x009090c0,0x00bcbcf8,0x00c8c8f4,0x00dcdcf4,0x00287028,0x002c842c,0x00349834,0x003cac3c,
0x00fcc8c8,0x00f4a4a4,0x00f85c5c,0x00f44c4c,0x00f43c3c,0x00f44c4c,0x00f45c5c,0x00f4a4a4,
0x00542800,0x00582800,0x005c2c00,0x00603000,0x003c1c00,0x00401c00,0x00442000,0x00482400,
0x00bcbcbc,0x00fcfcfc,0x00dcdcdc,0x00bcbcbc,0x009c9c9c,0x007c7c7c,0x009c9c9c,0x00dcdcdc,
0x006c4c2c,0x007c5430,0x008c6038,0x009c6c40,0x00ac7848,0x00000000,0x00282408,0x00504c14,
0x0078741c,0x00a09828,0x00c8c030,0x00f4e83c,0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00fc0000,0x00fc2400,0x00fc4800,0x00fc6c00,0x00fc9000,0x00fcb400,
0x00fcd800,0x00fcfc00,0x00a8f000,0x0054e800,0x0000e000,0x00fc0000,0x00e80414,0x00d80c2c,
0x00c41444,0x00b41858,0x00a02070,0x00902888,0x007c2c9c,0x006c34b4,0x00583ccc,0x004844e4
};



/* ---------------------------------------------------------------------------------------------
FILE *f=fopen("/leech/liero/LIERO.CHR","r");
Surface buff(640,480,getpixelformat());
int32 * buffer = (int32 *)buff.lock();
unsigned char sprite[16][16];
for (int c=0; c < 160;c++) {
	fseek(f,c*16*16+0x0a,SEEK_SET);
	fread(sprite,sizeof(sprite),1,f);
	for (int y=0; y<16; y++)
		for (int x=0; x<16; x++)
			buffer[(y+(20*(c % 12)))*640+x+(20*(c / 12))] = lieropal[sprite[x][y]];
}
fclose(f);
buff.unlock();
buff.copy(console);
console.update();
while (!console.key()) {usleep(1000);}
return 0;
--------------------------------------------------------------------------------------------- */

#endif