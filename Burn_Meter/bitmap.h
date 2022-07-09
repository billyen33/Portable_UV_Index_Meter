#ifndef BITMAP_H
#define BITMAP_H

//Face is 60W*69H pixels, in R5G6B5 format
const uint16_t face[] PROGMEM = {
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x0000, 0x0000, 0x0000, 0x0800, 0x0000, 0x0000, 0x0800, 0x2903, 0x2904, 0x0820, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x0000, 0x0000, 0x0841, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0800, 0x0000, 0x20c2, 0x5a69, 0x6aeb, 0x62ca, 0x6b0b, 0x732b, 0x734c, 0x838d, 0x944f, 0x83ee, 0x62c9, 0x5a88, 0x5aa9, 0x736c, 0x5a89, 0x2944, 0x0820, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x0000, 0x0000, 0x0800, 0x0000, 0x20c2, 0x4184, 0x5a46, 0x7b4a, 0x838b, 0x942e, 0xacd0, 0xbd52, 0xb511, 0xb4f1, 0xacd0, 0xa48f, 0xa48f, 0x9c4e, 0x940d, 0x942e, 0x9c6f, 0x9c90, 0x944f, 0x7bad, 0x62ca, 0x4a07, 0x3165, 0x18a2, 0x0820, 0x0000, 0x0000, 0x0000, 0x0021, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0800, 0x1060, 0x62ea, 0x9c6f, 0xb4f1, 0xa46e, 0xa44e, 0xac8f, 0xbd10, 0xacaf, 0xa46e, 0xa44d, 0x93ec, 0x9c2d, 0xac8f, 0xacaf, 0xb4d0, 0xbd31, 0xb4f0, 0xaccf, 0x9c4e, 0x9c6f, 0x940e, 0x838c, 0x83ad, 0x944f, 0x83ce, 0x62ca, 0x3986, 0x0820, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x0020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0800, 0x0800, 0x2902, 0x9c4f, 0xb532, 0xa48f, 0xa44e, 0xa44d, 0xacaf, 0xbd11, 0xb4af, 0xac6e, 0x9bec, 0x8349, 0x8b6a, 0x834a, 0x8329, 0x7b08, 0x8349, 0x93ec, 0xa46e, 0xb4f0, 0xb4b0, 0x9c2e, 0x9c2e, 0xa46f, 0x940e, 0x83ac, 0x940e, 0xa4d1, 0x8c0f, 0x734b, 0x3985, 0x0840, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1861, 0x734b, 0xb512, 0xacd1, 0x9c4e, 0x93cc, 0xa46e, 0x836a, 0x93ec, 0xbcf0, 0x9c0d, 0x93ec, 0x9c0d, 0x93cc, 0x8b8b, 0x7b09, 0x6aa7, 0x72a8, 0x72c8, 0x72c8, 0x7b09, 0x834a, 0x9bec, 0x93cc, 0x93cc, 0x8bab, 0x834a, 0x838b, 0x940d, 0x940e, 0x9c6f, 0x8bee, 0x83ce, 0x62ea, 0x20e3, 0x0000, 0x0020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x41a5, 0x9c50, 0xbd32, 0xbd32, 0xac90, 0xb48f, 0xa42e, 0x93ac, 0x9c0e, 0xa42e, 0x9c0d, 0x93ac, 0x8b6b, 0x832a, 0x834a, 0x72c9, 0x72c9, 0x72c9, 0x8bac, 0x9c2e, 0x9bee, 0x93ed, 0x8b8c, 0x8b6a, 0x9bec, 0xb48f, 0xb4af, 0xa42e, 0x9c2d, 0x9c4e, 0x93ed, 0x8bed, 0x8bed, 0x7b8c, 0x8c0f, 0x8c2f, 0x41e7, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x5a88, 0x944f, 0xa490, 0xacb0, 0xb4b0, 0xa42e, 0x9bac, 0x9bcc, 0x93ac, 0x9bed, 0xa44f, 0x9bed, 0x93cd, 0x93ad, 0x93cd, 0x938c, 0x8b8c, 0x93cd, 0x8b8c, 0x9bee, 0x9c0e, 0x9c0e, 0xa44f, 0x93cd, 0x8b6b, 0x9bcc, 0xa42e, 0xa44e, 0xa44e, 0xacaf, 0xa46e, 0x7b6a, 0x7b4a, 0x734a, 0x6b0a, 0x7b6b, 0x9c91, 0x9cb1, 0x5269, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0021, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x5a88, 0xa4b0, 0x8c0d, 0x9c4f, 0xa42e, 0x8b8b, 0x8b6b, 0x938b, 0x938c, 0x938c, 0x9bcd, 0x832a, 0x7ae9, 0x938b, 0x8b6b, 0x832a, 0x8b4b, 0x9bcd, 0x9bcd, 0x938c, 0x8b4b, 0x830a, 0x8b4b, 0x8b4b, 0x832b, 0x93ac, 0x8b6b, 0xa44e, 0x8b6b, 0x8b8b, 0x9c4e, 0x9c4e, 0x7309, 0x6ae8, 0x732a, 0x5a67, 0x8bed, 0x7b6c, 0x6aea, 0x9c50, 0x62ca, 0x0820, 0x0000, 0x0000, 0x0000, 0x0020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0001, 0x0021, 0x0000, 0x0000, 0x0840, 0x0000, 0x41c5, 0x944e, 0x940d, 0x83ab, 0x8bac, 0x8b6b, 0x8b6b, 0xa3ed, 0x9bcd, 0x8b2a, 0x8b4b, 0x8309, 0x7ac8, 0x832a, 0x8b6b, 0x8b4b, 0x93ac, 0x9c0d, 0x9bed, 0xa40e, 0xac4f, 0xa40e, 0x832a, 0x72a9, 0x832a, 0x93ac, 0x8b6c, 0x7ae9, 0x9bed, 0x93ac, 0x93cd, 0x93cc, 0xacb0, 0x9c2e, 0x7b4a, 0x7b2a, 0x732a, 0x8bed, 0xa490, 0x7b4b, 0x62a9, 0x942f, 0x736c, 0x18c2, 0x0000, 0x0000, 0x0000, 0x0841, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0001, 0x0001, 0x0000, 0x0000, 0x0000, 0x1880, 0x83cc, 0x9c6f, 0x8bcc, 0x8bab, 0x93ed, 0x9c0d, 0x9bed, 0x938c, 0x830a, 0x7ae9, 0x938c, 0x8b8b, 0x836a, 0x8bab, 0x93ac, 0x93ac, 0x9bed, 0x9bed, 0x9c0d, 0x8b8b, 0x830a, 0x72c8, 0x6a87, 0x72a8, 0x832a, 0x93ac, 0x8b6c, 0x7aea, 0x832b, 0x8bac, 0x8bac, 0x6267, 0x7b4b, 0xacb0, 0xa46f, 0x730a, 0x6ac9, 0x83ac, 0x93ed, 0x838c, 0x732a, 0x6aea, 0x83ad, 0x7bae, 0x20c2, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0001, 0x0000, 0x0000, 0x0820, 0x0800, 0x6b0b, 0xacf1, 0x940e, 0x838b, 0x9c0d, 0xa46e, 0x9c0d, 0x8b8b, 0x8b6b, 0x8b6c, 0x93ad, 0x8b8b, 0x8bac, 0x7b29, 0x7b29, 0x8b8b, 0x834a, 0x72e9, 0x72e9, 0x72c9, 0x72c8, 0x6aa8, 0x6247, 0x6247, 0x6a88, 0x6a67, 0x5a06, 0x6a68, 0x7b0a, 0x7b2a, 0x8b6c, 0x7b2a, 0x6268, 0x5a06, 0x6ac9, 0x838c, 0x838c, 0x7b2b, 0x83ac, 0x7b2a, 0x6aa8, 0x8bcd, 0x836c, 0x62a9, 0x62ca, 0x5a69, 0x1040, 0x0000, 0x0000, 0x0841, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0021, 0x0000, 0x0000, 0x41c6, 0xa4b1, 0xa490, 0x93ee, 0x9c0e, 0x9c0e, 0x93cc, 0x93cc, 0x9bed, 0x93cd, 0x8b6c, 0x832b, 0x834b, 0x730a, 0x6267, 0x6aa8, 0x7b2a, 0x6aa8, 0x6267, 0x6a88, 0x72e9, 0x7b0a, 0x7b0a, 0x72a8, 0x6a88, 0x72c9, 0x72c9, 0x6a67, 0x51a5, 0x4964, 0x5a06, 0x72a9, 0x6247, 0x6a68, 0x49a5, 0x3922, 0x51c5, 0x7b4b, 0x838c, 0x6267, 0x6288, 0x7b2b, 0x8bac, 0x7b2b, 0x62a9, 0x6289, 0x7b6c, 0x41c6, 0x0000, 0x0000, 0x0000, 0x0020, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0020, 0x0000, 0x1061, 0x734c, 0x8bce, 0x838c, 0x8bad, 0x8b6c, 0x7b0a, 0x6a88, 0x72a9, 0x72a8, 0x6287, 0x72e9, 0x836b, 0x7b2a, 0x72c9, 0x72c9, 0x7b0a, 0x72c9, 0x6aa8, 0x6aa9, 0x6267, 0x6247, 0x6247, 0x72a8, 0x7ae9, 0x7aea, 0x7ae9, 0x72a9, 0x6a67, 0x6226, 0x4122, 0x59c5, 0x6a47, 0x6a88, 0x6227, 0x51c5, 0x51c5, 0x4143, 0x49a5, 0x6288, 0x5a27, 0x6268, 0x62a8, 0x6ac9, 0x7b2b, 0x83ad, 0x83cd, 0x7b6c, 0x8c0f, 0x3144, 0x0000, 0x0820, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0020, 0x4207, 0x732c, 0x6aeb, 0x730b, 0x72eb, 0x6227, 0x6207, 0x51a5, 0x51e6, 0x6a88, 0x7b2a, 0x7b4a, 0x6ac8, 0x6a67, 0x6a68, 0x72a9, 0x72c9, 0x6a67, 0x6a67, 0x7288, 0x6206, 0x59a5, 0x51a4, 0x6206, 0x7288, 0x7268, 0x6a06, 0x6a06, 0x6a26, 0x6a26, 0x7267, 0x82e9, 0x7aa8, 0x830a, 0x7aea, 0x6a68, 0x6227, 0x4164, 0x4984, 0x51e6, 0x5206, 0x7b2b, 0x7b2b, 0x732a, 0x838c, 0x8bee, 0x83ad, 0x734b, 0x83ce, 0x9450, 0x2944, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0840, 0x6b2c, 0x5a68, 0x62aa, 0x6248, 0x51c6, 0x5a07, 0x5a07, 0x51e6, 0x51e6, 0x51e5, 0x49c5, 0x5226, 0x5205, 0x59c5, 0x6206, 0x6206, 0x6a27, 0x7268, 0x7268, 0x7268, 0x7288, 0x7aa9, 0x7247, 0x7247, 0x8ae9, 0x932b, 0x930a, 0x930a, 0x92ea, 0x930a, 0x936b, 0x9b6b, 0x9bac, 0xa3cd, 0xa40e, 0x9bcd, 0x7b0a, 0x59e6, 0x3902, 0x5a06, 0x6268, 0x834b, 0x7b4b, 0x6ac9, 0x7b6b, 0x732a, 0x940e, 0x940e, 0x940f, 0x942f, 0x62ca, 0x1061, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x3985, 0x62ca, 0x5227, 0x49c6, 0x3964, 0x49c6, 0x51e7, 0x49a6, 0x49a6, 0x51c6, 0x51e6, 0x49c5, 0x4184, 0x4184, 0x59e6, 0x59e6, 0x6227, 0x6a47, 0x6a47, 0x7248, 0x7aa9, 0x8b0b, 0x8aca, 0x930b, 0x9b2b, 0xa34c, 0xa36c, 0xab6c, 0xab6c, 0xa36c, 0xab8c, 0xabad, 0xb3ee, 0xb40e, 0xb44f, 0xb46f, 0xac4f, 0xa40e, 0x8b6b, 0x6a67, 0x830a, 0x8b6b, 0x832a, 0x93cd, 0x72e9, 0x6ac9, 0x7b4b, 0x9c4f, 0x8bcd, 0x940e, 0x9c2f, 0x7b6c, 0x2103, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x1041, 0x6b2c, 0x62aa, 0x2903, 0x4185, 0x49e6, 0x4185, 0x4164, 0x4165, 0x51c6, 0x5a07, 0x5a07, 0x5a07, 0x5a06, 0x5a07, 0x6a48, 0x6207, 0x61e6, 0x61e6, 0x6a07, 0x7248, 0x8289, 0x8aea, 0x930b, 0xa34c, 0xabad, 0xb3ce, 0xbbce, 0xbbce, 0xb3ad, 0xb3ad, 0xbbce, 0xbc0f, 0xbc2f, 0xc470, 0xc490, 0xc4b1, 0xbcb0, 0xb48f, 0xac4f, 0x8b4a, 0x82e9, 0x832a, 0x72a8, 0x93cd, 0x836b, 0x6288, 0x6ac9, 0x942e, 0x93ee, 0x8bad, 0x8bcd, 0x940f, 0x4a48, 0x0020, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x1041, 0x83ae, 0x62ca, 0x3123, 0x41a5, 0x5227, 0x51e6, 0x51c6, 0x51c6, 0x59c7, 0x59c7, 0x51c6, 0x51c6, 0x59e6, 0x6207, 0x6a27, 0x61e6, 0x61c6, 0x61e6, 0x7228, 0x8289, 0x8aeb, 0x9b2c, 0xa36d, 0xb3ae, 0xbc0f, 0xc42f, 0xc42f, 0xc40f, 0xc40e, 0xc40e, 0xc40f, 0xc42f, 0xc470, 0xc490, 0xccd1, 0xccf1, 0xc4f1, 0xc4d1, 0xb490, 0x9bcd, 0x830a, 0x830a, 0x7ae9, 0x72c9, 0x8b8c, 0x6288, 0x5a47, 0x83ac, 0x93ed, 0x836c, 0x836c, 0x940f, 0x736c, 0x10a1, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x20e3, 0x7bae, 0x5248, 0x3964, 0x49c6, 0x4985, 0x4164, 0x4945, 0x5165, 0x5145, 0x4924, 0x5144, 0x59a6, 0x61e6, 0x61e6, 0x5985, 0x69e7, 0x8289, 0x932b, 0x9b4c, 0x9b6d, 0xa36d, 0xab6d, 0xb3ce, 0xbbef, 0xc430, 0xc430, 0xc42f, 0xc42f, 0xcc2f, 0xcc2f, 0xc42f, 0xcc50, 0xc470, 0xcc90, 0xccb1, 0xccd1, 0xccf1, 0xc4d1, 0xb46f, 0xac2e, 0x9bac, 0x832a, 0x7aea, 0x6247, 0x72ea, 0x62a8, 0x62a8, 0x7b6b, 0x93cd, 0x93ad, 0x8bad, 0x8bcd, 0x83ce, 0x3185, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x2945, 0x6b2c, 0x5228, 0x4185, 0x4165, 0x38e2, 0x4123, 0x61c6, 0x7269, 0x82ab, 0x8acb, 0x92eb, 0x9b6d, 0xa38d, 0x9b2c, 0x8aa9, 0x930b, 0xa38d, 0xb3ef, 0xbbef, 0xbbef, 0xbbef, 0xbbef, 0xc410, 0xc40f, 0xc430, 0xcc2f, 0xcc2f, 0xcc2f, 0xcc4f, 0xcc50, 0xcc50, 0xcc70, 0xcc70, 0xcc90, 0xccb1, 0xccd1, 0xccd1, 0xccd1, 0xc491, 0xac2f, 0xa3ee, 0x8b2b, 0x6227, 0x6ac9, 0x5a47, 0x5a47, 0x6ac9, 0x7b2a, 0x838c, 0x8b6c, 0x8bad, 0x838d, 0x83ce, 0x4a07, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x2945, 0x5aaa, 0x5248, 0x4185, 0x4165, 0x4144, 0x59c6, 0x8aeb, 0xa38e, 0xbc30, 0xbc30, 0xbc10, 0xc450, 0xc430, 0xbbef, 0xbbef, 0xbbef, 0xbbef, 0xbbef, 0xbbef, 0xc3ef, 0xc410, 0xcc30, 0xc40f, 0xc40f, 0xc40f, 0xcc30, 0xcc50, 0xcc50, 0xcc50, 0xcc70, 0xcc70, 0xcc90, 0xcc91, 0xcc91, 0xccb1, 0xccb1, 0xccd1, 0xccd1, 0xc491, 0xabee, 0x9bad, 0x9bad, 0x6a68, 0x6268, 0x6ac9, 0x6288, 0x6288, 0x72ea, 0x7b2a, 0x72c9, 0x836c, 0x838d, 0x83ce, 0x4a07, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x39a6, 0x62ca, 0x49e7, 0x3945, 0x49a6, 0x59c7, 0x7269, 0xa38d, 0xb3ef, 0xc430, 0xc430, 0xc410, 0xc40f, 0xcc0f, 0xc40f, 0xc40f, 0xc40f, 0xc40f, 0xc40f, 0xcc10, 0xcc0f, 0xc3ef, 0xc3ef, 0xcc0f, 0xcc0f, 0xcc30, 0xcc50, 0xcc50, 0xcc50, 0xcc70, 0xcc70, 0xd490, 0xd491, 0xcc91, 0xd4b1, 0xd4b1, 0xccb1, 0xccb1, 0xccd1, 0xc470, 0xb40e, 0x9b8d, 0x9bad, 0x8b4c, 0x59e6, 0x7b2b, 0x7b4b, 0x6288, 0x6ac9, 0x7b0a, 0x6aa8, 0x7b2b, 0x838d, 0x83ce, 0x5248, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x3165, 0x5a8a, 0x41c7, 0x4186, 0x4144, 0x59a6, 0x9b8d, 0xb40f, 0xbbef, 0xbbef, 0xc410, 0xcbef, 0xcbef, 0xcbef, 0xcc0f, 0xcc10, 0xcc10, 0xcc10, 0xcc0f, 0xcbef, 0xcc0f, 0xcc10, 0xd430, 0xcc30, 0xd430, 0xd450, 0xd471, 0xd470, 0xcc70, 0xcc70, 0xd491, 0xd491, 0xcc91, 0xd4b1, 0xd4b1, 0xd4b1, 0xd4b1, 0xd4d1, 0xd4d2, 0xc471, 0xbc2f, 0x9b8d, 0x7aa9, 0x7aea, 0x6247, 0x5206, 0x7b4b, 0x6aa8, 0x6288, 0x730a, 0x6ac9, 0x72e9, 0x730a, 0x7b6c, 0x5248, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x18c3, 0x5248, 0x5228, 0x49a6, 0x38e3, 0x61c7, 0xabef, 0xb3ef, 0xbc10, 0xc410, 0xc3ef, 0xcbef, 0xcbef, 0xcbef, 0xd410, 0xcc10, 0xcc10, 0xcc10, 0xcc10, 0xcc10, 0xcc10, 0xd430, 0xd430, 0xd430, 0xd450, 0xd450, 0xd471, 0xcc71, 0xcc71, 0xcc71, 0xcc91, 0xd4b1, 0xd4d1, 0xd4d2, 0xd4b1, 0xcc91, 0xccb1, 0xd4d2, 0xd4d2, 0xcc91, 0xc470, 0xb3ef, 0x934c, 0x6a68, 0x4984, 0x4984, 0x5a47, 0x6268, 0x6288, 0x6ac9, 0x6267, 0x5a47, 0x6ac9, 0x732b, 0x5a89, 0x1040, 0x0000, 0x0000, 0x0000, 
0x0000, 0x1081, 0x5269, 0x5249, 0x30c3, 0x4104, 0x7aab, 0xabef, 0xbc10, 0xbc0f, 0xc3ef, 0xc3ef, 0xcc10, 0xd430, 0xd410, 0xd410, 0xd451, 0xd451, 0xd451, 0xd430, 0xd430, 0xd410, 0xd410, 0xcc10, 0xd450, 0xcc50, 0xcc30, 0xc42f, 0xc430, 0xc450, 0xcc91, 0xccb1, 0xd4d2, 0xccb2, 0xcc91, 0xcc91, 0xccb1, 0xd4d2, 0xd4f2, 0xd4d2, 0xccb1, 0xc491, 0xbc70, 0xb430, 0x938d, 0x6a27, 0x4164, 0x4143, 0x5206, 0x5a47, 0x5a67, 0x7b6b, 0x6268, 0x6ac9, 0x6289, 0x6aeb, 0x1861, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0020, 0x41a7, 0x49e7, 0x28a2, 0x6208, 0x9bcf, 0xabcf, 0xb3ef, 0xbbef, 0xbbef, 0xc40f, 0xd430, 0xd450, 0xd430, 0xd451, 0xd450, 0xd430, 0xd430, 0xd430, 0xd430, 0xd430, 0xcc10, 0xcc0f, 0xcc30, 0xc40f, 0xc40f, 0xc430, 0xcc71, 0xcc91, 0xc471, 0xc470, 0xb40f, 0xabee, 0xabce, 0xabce, 0xb3ee, 0xb42f, 0xbc50, 0xc471, 0xccb1, 0xc491, 0xc491, 0xccd2, 0xbcb1, 0xa3ee, 0x72a9, 0x4984, 0x51e6, 0x49e5, 0x5a47, 0x6ac9, 0x6ac9, 0x6ac9, 0x730a, 0x730b, 0x3144, 0x0800, 0x0000, 0x0000, 
0x0000, 0x0000, 0x20c3, 0x3945, 0x3925, 0x7aec, 0xa3f0, 0xabef, 0xb3ef, 0xbc0f, 0xc430, 0xc42f, 0xcc50, 0xcc50, 0xcc30, 0xd450, 0xcc30, 0xcc30, 0xcc30, 0xcc30, 0xcc30, 0xcc10, 0xc40f, 0xc3ef, 0xc3ef, 0xbbef, 0xbbee, 0xb3ce, 0xab8d, 0x9b4c, 0x930b, 0x8aca, 0x8289, 0x82aa, 0x8aca, 0x932b, 0x9b6c, 0x9b6c, 0xa38d, 0xabce, 0xbc50, 0xc470, 0xc4b1, 0xc4b1, 0xc4d2, 0xc4f2, 0xac2f, 0x7ac9, 0x51c5, 0x51e6, 0x5a26, 0x5a47, 0x5a27, 0x6288, 0x72ea, 0x7b2c, 0x41a6, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0020, 0x1061, 0x3965, 0x49a7, 0x7aec, 0x936e, 0xa3ef, 0xb40f, 0xbc30, 0xc450, 0xc450, 0xcc50, 0xcc50, 0xc430, 0xc410, 0xbbef, 0xbbef, 0xc3ef, 0xc3ef, 0xc3cf, 0xc3cf, 0xbbce, 0xbbce, 0xbbae, 0xb3ae, 0xab6d, 0x92ca, 0x7a07, 0x69c6, 0x69e7, 0x7228, 0x7a69, 0x82ca, 0x8b0c, 0x9b8d, 0xa3ce, 0xa3ce, 0xa3ae, 0xabce, 0xb40e, 0xc491, 0xd512, 0xccf2, 0xc4d1, 0xcd12, 0xbcb1, 0x9bcd, 0x72a9, 0x5a06, 0x49e5, 0x5226, 0x6267, 0x6247, 0x6aa9, 0x7b2c, 0x41a6, 0x0800, 0x0000, 0x0041, 
0x0000, 0x0000, 0x0820, 0x3986, 0x51e8, 0x6a8a, 0x830c, 0xa3ef, 0xb40f, 0xbc30, 0xc450, 0xc470, 0xcc91, 0xcc91, 0xc451, 0xc430, 0xbbef, 0xbbef, 0xbbce, 0xb3ae, 0xb38d, 0xb38d, 0xb38d, 0xb38d, 0xab8d, 0xa32c, 0x8aaa, 0x7a28, 0x71e7, 0x7207, 0x7a69, 0x82aa, 0x8b2c, 0x938d, 0x938e, 0x936d, 0x934c, 0x8b2c, 0x9b6c, 0xabee, 0xabee, 0xbc2f, 0xc4b1, 0xccf2, 0xd512, 0xd533, 0xccf2, 0xbc90, 0x9bcd, 0x6248, 0x4984, 0x49a4, 0x6247, 0x5a27, 0x72a9, 0x832c, 0x6248, 0x1841, 0x0000, 0x0020, 
0x0020, 0x0000, 0x0000, 0x3145, 0x5208, 0x5a29, 0x726a, 0xa3cf, 0xb430, 0xbc70, 0xc491, 0xc470, 0xc450, 0xbc2f, 0xb3ce, 0xabae, 0xab8d, 0xab8d, 0xb3ae, 0xab8d, 0xab6d, 0xab6d, 0xab6d, 0xab6d, 0xab6d, 0x9b0b, 0x8a89, 0x7a68, 0x7a89, 0x8289, 0x7a89, 0x7269, 0x7249, 0x830c, 0x936d, 0x9bae, 0x9bae, 0x934c, 0x82ca, 0x82c9, 0xa38d, 0xabcd, 0xb40e, 0xc490, 0xd512, 0xdd33, 0xd512, 0xccf2, 0xa3ee, 0x832b, 0x5a06, 0x51c5, 0x3923, 0x51a5, 0x6a68, 0x93ce, 0xcd75, 0x7b2c, 0x1061, 0x0000, 
0x0000, 0x0020, 0x0000, 0x20e3, 0x49e8, 0x4986, 0x59c7, 0x9bcf, 0xac0f, 0xbc71, 0xbc70, 0xb3ee, 0x9b2c, 0x8289, 0x7228, 0x71e7, 0x69c6, 0x7a28, 0x8a89, 0x9aeb, 0xa32c, 0xa34c, 0xab8d, 0xb38d, 0xa34c, 0xa32c, 0x9b0b, 0x8aeb, 0x8aaa, 0x7a89, 0x7228, 0x6a07, 0x6a28, 0x61e7, 0x4945, 0x4965, 0x6a48, 0x82eb, 0x82ea, 0x8aea, 0x9b6c, 0xb3ee, 0xbc50, 0xcc91, 0xd4f2, 0xdd32, 0xd512, 0xd512, 0xc4b1, 0x9bcd, 0x832b, 0x59e6, 0x51a5, 0x4144, 0x7aaa, 0xac30, 0x82eb, 0x8b6d, 0x3945, 0x0800, 
0x0000, 0x0000, 0x0000, 0x1041, 0x5229, 0x3925, 0x4125, 0x938e, 0xb430, 0xabef, 0x9b2c, 0x8aaa, 0x7228, 0x5985, 0x5986, 0x5986, 0x5986, 0x5965, 0x69c6, 0x7a28, 0x92ca, 0xab6d, 0xc40f, 0xbbef, 0xbbcf, 0xb3ae, 0x9b0c, 0x8aaa, 0x828a, 0x7a29, 0x69e8, 0x6a28, 0x82eb, 0x5186, 0x4924, 0x59c7, 0x7a89, 0x8b2b, 0x9b8d, 0xb40f, 0xbc50, 0xc470, 0xcc91, 0xccb1, 0xd4d2, 0xdcf2, 0xdd13, 0xdd33, 0xd512, 0xb42e, 0x8b2b, 0x7aea, 0x59e7, 0x6228, 0xabce, 0xa32c, 0x8229, 0x8aab, 0x6a69, 0x1000, 
0x0000, 0x0000, 0x0000, 0x0821, 0x41a7, 0x3925, 0x30e4, 0x936e, 0xac10, 0xa38e, 0x8289, 0x82aa, 0x932c, 0x8b0c, 0x726a, 0x7249, 0x6a08, 0x6a07, 0x61c7, 0x69e7, 0x8269, 0xab6d, 0xc430, 0xd4b2, 0xcc50, 0xbbef, 0xa34d, 0x9b0c, 0x9b0c, 0x8aaa, 0x7a49, 0x7a8a, 0x936d, 0x82cb, 0x8b0c, 0x9b6d, 0xa3ce, 0xb40f, 0xb42f, 0xc470, 0xc470, 0xcc90, 0xccb1, 0xd4d1, 0xdcf2, 0xdd13, 0xdd13, 0xdcf2, 0xdd32, 0xc490, 0x934c, 0x7aa9, 0x6a69, 0x9b8d, 0xbc10, 0xc3cf, 0xaaec, 0x928a, 0x7acb, 0x28c3, 
0x0000, 0x0000, 0x0000, 0x0000, 0x2905, 0x3946, 0x28a3, 0x8b4d, 0x936e, 0x8aeb, 0x9b4c, 0x8aeb, 0x932c, 0x82aa, 0x8b4d, 0x8b4d, 0x728a, 0x59a7, 0x61a7, 0x69e7, 0x7a28, 0xa34c, 0xd491, 0xdcd2, 0xdcb2, 0xcc50, 0xb3ae, 0xb38e, 0xb3ae, 0xa36d, 0x9b2c, 0x9b4d, 0xa38e, 0x9b4d, 0x9b6d, 0xa38d, 0xa38d, 0xabae, 0xb3ce, 0xbc0e, 0xcc70, 0xcc70, 0xcc90, 0xd4b1, 0xd4f2, 0xdd12, 0xdd12, 0xdd12, 0xdd32, 0xd532, 0x9b8c, 0x61e7, 0x8b4c, 0xac30, 0xcc71, 0xe514, 0xcbcf, 0x8a69, 0x82eb, 0x4165, 
0x0000, 0x0000, 0x0000, 0x0000, 0x1062, 0x3966, 0x28a3, 0x834d, 0x9baf, 0x9b8d, 0x932c, 0x82aa, 0x82eb, 0x936d, 0x7aaa, 0x59a7, 0x5166, 0x4104, 0x61e7, 0x69e7, 0x8289, 0xa32c, 0xdcd2, 0xdcb2, 0xdcd2, 0xd491, 0xc40f, 0xbbce, 0xbbef, 0xbbef, 0xb3ce, 0xb3ae, 0xab8d, 0xa34d, 0xa32c, 0xa34d, 0xab8d, 0xbc0f, 0xcc70, 0xd4b1, 0xd491, 0xd490, 0xcc90, 0xcc91, 0xd4d1, 0xdcf2, 0xdd12, 0xdd32, 0xdd32, 0xdd33, 0xb42f, 0x6a27, 0x9bae, 0xabef, 0x8aaa, 0xd451, 0xdc92, 0x9aeb, 0x830c, 0x4186, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0001, 0x3125, 0x28c3, 0x7b0c, 0x9bcf, 0x936d, 0x82aa, 0x61c6, 0x934c, 0x61e7, 0x38a3, 0x40e4, 0x4925, 0x6a28, 0x82cb, 0x7a49, 0x9b4d, 0xab8e, 0xcc71, 0xdcd3, 0xdcb2, 0xdc91, 0xd450, 0xcc0f, 0xc40f, 0xc40f, 0xc40f, 0xc40f, 0xcc30, 0xc410, 0xc410, 0xcc30, 0xd471, 0xdc91, 0xdcb1, 0xdcd1, 0xdcd2, 0xdcf2, 0xdcd1, 0xdcd1, 0xd4d1, 0xd4d1, 0xd4f2, 0xdd12, 0xdd12, 0xccf2, 0xcd13, 0xa3ef, 0xac2f, 0xc4b2, 0x6965, 0xa2ea, 0xdc71, 0xbbcf, 0x830c, 0x3945, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x18c3, 0x28e4, 0x72ec, 0xac51, 0x8b4c, 0x82eb, 0x7a69, 0x5986, 0x6a28, 0x7a8a, 0x59a7, 0x7aab, 0x8b2c, 0x9b4d, 0xa36d, 0xb3cf, 0xbbef, 0xcc50, 0xe4f3, 0xdcb2, 0xdc91, 0xd470, 0xdc91, 0xd470, 0xd450, 0xd450, 0xd471, 0xd450, 0xd451, 0xd430, 0xdc71, 0xe4b2, 0xdc91, 0xe4b2, 0xe4f2, 0xe4d1, 0xe4f2, 0xe512, 0xe512, 0xdcf2, 0xdcf1, 0xd4f2, 0xd4f2, 0xdd13, 0xccd1, 0xccf2, 0xc513, 0xbcd2, 0xd533, 0x9b0b, 0x9268, 0xc3ce, 0xcc91, 0x8b2c, 0x3103, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0821, 0x28e4, 0x628a, 0xa430, 0x9bae, 0x9b6d, 0x82ca, 0x7a69, 0x7a69, 0x934d, 0x936d, 0x9b4d, 0x930c, 0xa36d, 0xbc10, 0xbbef, 0xc410, 0xd471, 0xe4f3, 0xdcb2, 0xdc71, 0xdc71, 0xdcb1, 0xdc91, 0xdc70, 0xd450, 0xd450, 0xdc71, 0xe492, 0xdc51, 0xdc51, 0xdc71, 0xd430, 0xdc71, 0xe491, 0xdc71, 0xdcb1, 0xe4f2, 0xe4f2, 0xdd12, 0xdd12, 0xdcf2, 0xdcf2, 0xdd13, 0xd4f2, 0xbc91, 0xbcb1, 0xc4d2, 0xccb2, 0xbc0f, 0x9aa9, 0xb36c, 0xd513, 0x8b8d, 0x28c3, 
0x0000, 0x0020, 0x0000, 0x0000, 0x0000, 0x0000, 0x20c3, 0x5a49, 0xac71, 0xac30, 0xa3ee, 0xb42f, 0xabce, 0x9b6d, 0x9b4d, 0x8aeb, 0x9b0c, 0xb3af, 0xc451, 0xc410, 0xc410, 0xc3ef, 0xd471, 0xe4d2, 0xdc91, 0xdc71, 0xdc50, 0xdc50, 0xd450, 0xd430, 0xcbef, 0xbb6d, 0xc3ae, 0xd410, 0xcbef, 0xd410, 0xdc51, 0xd450, 0xdc50, 0xd450, 0xdc71, 0xdc91, 0xdcb2, 0xe4f2, 0xe513, 0xe513, 0xdd12, 0xdcf2, 0xcc91, 0xccb1, 0xc4b2, 0xbc91, 0xc4d2, 0xd513, 0xab6c, 0xb38d, 0xa32b, 0xd513, 0x8b8d, 0x1881, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0820, 0x5208, 0xac91, 0xb491, 0xbcb1, 0xbc70, 0xb3ef, 0xb40f, 0xa3ae, 0xb3ef, 0xcc51, 0xcc51, 0xd471, 0xd471, 0xc3cf, 0xc3ef, 0xd471, 0xd451, 0xd451, 0xd471, 0xd471, 0xdcb2, 0xd451, 0xd451, 0xd451, 0xab0c, 0x9a8a, 0xb32c, 0xbb8e, 0xc3ae, 0xc3cf, 0xcbcf, 0xcc0f, 0xd430, 0xcc10, 0xd450, 0xd471, 0xd491, 0xdcb2, 0xdcf2, 0xdcf2, 0xd4d2, 0xcc91, 0xccb2, 0xbc91, 0xb470, 0xc4d2, 0xccf2, 0xc44f, 0xdd12, 0xc491, 0xbcb1, 0x7b0c, 0x0800, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0800, 0x4185, 0xb4b2, 0xbcb1, 0xc491, 0xc470, 0xc470, 0xccb2, 0xcc92, 0xd4b2, 0xd491, 0xdc71, 0xd471, 0xcc0f, 0xbb8e, 0xbbae, 0xcbef, 0xcc30, 0xcbef, 0xc3cf, 0xbbae, 0xcc10, 0xd471, 0xdc92, 0xd451, 0xa2cb, 0x9249, 0x9249, 0x926a, 0xa2cb, 0xb34d, 0xbbae, 0xc3ae, 0xc3ce, 0xc3ef, 0xcc0f, 0xcc50, 0xcc50, 0xcc70, 0xd491, 0xd4b1, 0xd4b1, 0xcc91, 0xc491, 0xc4b1, 0xc4f2, 0xc4b1, 0xd533, 0xdd33, 0xdd33, 0xccd1, 0xb490, 0x49a6, 0x0800, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x28c2, 0xac91, 0xb490, 0xbc50, 0xc450, 0xd4b1, 0xdcf3, 0xe513, 0xe4f3, 0xdc91, 0xdc71, 0xcc0f, 0xbb4d, 0xbb6d, 0xc3ae, 0xb34d, 0xab2d, 0xa2eb, 0xab2d, 0xab0c, 0xa2ec, 0xa2eb, 0xab0c, 0xb36e, 0xa2ec, 0xab2d, 0xa30c, 0x92aa, 0x9289, 0x9aaa, 0x9acb, 0xab2c, 0xb36d, 0xbbae, 0xc3ef, 0xc40f, 0xc40f, 0xc430, 0xc450, 0xcc70, 0xcc71, 0xcc71, 0xc450, 0xbc71, 0xcd13, 0xc4d2, 0xccf2, 0xdd53, 0xd533, 0xdd95, 0xa42f, 0x1861, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1820, 0xac70, 0xbcb1, 0xbc70, 0xc450, 0xd4d2, 0xdcd2, 0xe4f3, 0xdc92, 0xd430, 0xcbef, 0xc38d, 0xb32c, 0xbb8e, 0xb34d, 0x8a49, 0x9269, 0x9aab, 0x9aeb, 0x8a49, 0x6965, 0x58c3, 0x6124, 0x8a6a, 0xab4d, 0xbbef, 0xbbef, 0xab8e, 0x9aeb, 0x92aa, 0x92aa, 0x9acb, 0xab2c, 0xb36d, 0xb38d, 0xbbae, 0xbbce, 0xbbef, 0xbc0f, 0xc430, 0xc450, 0xc450, 0xc471, 0xbc91, 0xcd13, 0xcd13, 0xc4d1, 0xc4d1, 0xddb5, 0xcd94, 0x5207, 0x0800, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0800, 0x9bef, 0xccf3, 0xc491, 0xcc70, 0xdcb2, 0xd471, 0xdc91, 0xcc10, 0xcc0f, 0xc38e, 0xb34c, 0xab0c, 0xab0c, 0x8208, 0x58a2, 0x6945, 0x7186, 0x79e8, 0x8228, 0x8a8a, 0x9acb, 0x9b0c, 0xab6d, 0xb3cf, 0xb3ef, 0xbc0f, 0xbbef, 0xb3ae, 0xab8d, 0xab6d, 0xab4d, 0xa32c, 0xa32c, 0xa32c, 0xab6c, 0xab8d, 0xb3ce, 0xbbee, 0xbc0f, 0xbc2f, 0xc42f, 0xcc91, 0xc4d2, 0xc4f2, 0xc513, 0xbcd1, 0xa3ee, 0xbcb1, 0x72ca, 0x0800, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0800, 0x830b, 0xcd13, 0xc471, 0xc450, 0xd471, 0xcc30, 0xd430, 0xc3cf, 0xc3ae, 0xbb6d, 0xab0c, 0x9aaa, 0x9aab, 0x8208, 0x58e3, 0x5904, 0x69a6, 0x69a6, 0x71c7, 0x8249, 0x9aec, 0xa34d, 0xab8d, 0xb3ce, 0xbbef, 0xbc0f, 0xb3cf, 0xab8d, 0xab6d, 0xab6d, 0xab4d, 0xa34c, 0xa32c, 0xa32b, 0xa34c, 0xab8d, 0xb3ce, 0xb3ee, 0xb40e, 0xbc0e, 0xc450, 0xc450, 0xc4d2, 0xbcd2, 0xc4f2, 0xc4f2, 0x82ea, 0x4984, 0x1000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0001, 0x0000, 0x0000, 0x0800, 0x6228, 0xcd13, 0xbc50, 0xc450, 0xcc50, 0xcc10, 0xcbf0, 0xc3af, 0xb34d, 0xab4d, 0xa2eb, 0x9acb, 0xab4d, 0xab8e, 0x9b0c, 0x828a, 0x8acb, 0x8aab, 0x8acb, 0x92cb, 0x9b0c, 0xab8e, 0xbc10, 0xcc91, 0xccb2, 0xcc91, 0xc430, 0xb3ce, 0xab8d, 0xa34c, 0xab6d, 0xb3ce, 0xab8d, 0xab8d, 0xabad, 0xb3cd, 0xb3ee, 0xb40e, 0xb40e, 0xbc2f, 0xc470, 0xc450, 0xc4d1, 0xc4f2, 0xc513, 0xcd33, 0x72a9, 0x1000, 0x0800, 0x0000, 0x0000, 0x0001, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0021, 0x0000, 0x0000, 0x0800, 0x4165, 0xc4d3, 0xb410, 0xc430, 0xcc10, 0xc3ef, 0xbb8e, 0xb36d, 0xab4d, 0xa30b, 0x9acb, 0xab4d, 0xb3cf, 0xb3cf, 0xab8e, 0xa34d, 0xa36e, 0xa38e, 0xabae, 0xabae, 0xb3ce, 0xbc10, 0xbc10, 0xb3ef, 0xb40f, 0xb3ef, 0xbbef, 0xbbef, 0xb3ce, 0xa34c, 0xa32b, 0xab8d, 0xb3ee, 0xb3ee, 0xb3ee, 0xb40e, 0xb3ee, 0xb3ee, 0xb40e, 0xbc2f, 0xbc0e, 0xc470, 0xbcb1, 0xc4d2, 0xbcf2, 0xbd12, 0x7b0b, 0x1840, 0x0800, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1841, 0xac51, 0xb410, 0xb3af, 0xbbaf, 0xbb8d, 0xbb8d, 0xab2b, 0xa32b, 0x9b0b, 0xa32c, 0xb38e, 0xb3af, 0xab6e, 0xb38f, 0xc410, 0xc431, 0xbbef, 0xbbcf, 0xb3ae, 0xab6d, 0x9b0b, 0xa32c, 0x8a89, 0x8268, 0x7227, 0x69c6, 0x69c6, 0x69c6, 0x7207, 0x92eb, 0xa36c, 0xb40f, 0xbc2f, 0xbc2f, 0xbc2f, 0xbc2e, 0xb40e, 0xb3ee, 0xb3ee, 0xbc0f, 0xc470, 0xbc91, 0xbcb1, 0xbcf2, 0xbd33, 0x730a, 0x1000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0800, 0x7b0c, 0xac10, 0xb3af, 0xb38e, 0xb36d, 0xab2b, 0xa32b, 0x9b2b, 0xa34b, 0xa34c, 0xab6d, 0xb3af, 0xbbd0, 0xbbd0, 0xb38e, 0xa32c, 0x9b0b, 0x9b0b, 0x8a89, 0x8228, 0x8248, 0x71e7, 0x8aaa, 0x932b, 0x932b, 0xabcd, 0x82a9, 0x7207, 0x4081, 0x5944, 0xa38c, 0xb3ee, 0xbc2f, 0xc46f, 0xbc4f, 0xbc2f, 0xbc2f, 0xbc0f, 0xbc0f, 0xbc2f, 0xbc4f, 0xbc50, 0xc4d2, 0xbcd2, 0xbcf3, 0x62a9, 0x0800, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x4165, 0xa410, 0xa38e, 0xa34d, 0xa32c, 0x9aeb, 0xa30b, 0x9aea, 0x9b2b, 0x9b2c, 0xa32c, 0xa36e, 0xab6e, 0x9b2d, 0x8aaa, 0x8269, 0x69c6, 0x7206, 0x7a68, 0x7a88, 0xbc90, 0xc4d1, 0xbc90, 0xe5b5, 0xdd33, 0xd4d2, 0xbc4f, 0xabad, 0x6185, 0x8aa9, 0xb3ee, 0xabad, 0xb40e, 0xc46f, 0xc44f, 0xbc2f, 0xbc2f, 0xbc2f, 0xbc0f, 0xbc2f, 0xbc4f, 0xbc50, 0xc4f2, 0xbcd2, 0xacb2, 0x5207, 0x0800, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1041, 0x832c, 0x9b6d, 0x9b2c, 0x92cb, 0x9b0b, 0xa32b, 0x9b2b, 0x92ca, 0x92ca, 0x9b0c, 0x92cb, 0x71e8, 0x6166, 0x6165, 0x61c6, 0x934b, 0xabee, 0xcd12, 0xcd12, 0xe5f5, 0xee36, 0xdd94, 0xd533, 0xabad, 0xa36c, 0x8268, 0x6164, 0x8aaa, 0xc470, 0xb3ee, 0xa38c, 0xb3ee, 0xbc4f, 0xbc4f, 0xbc2f, 0xbc2f, 0xbc2f, 0xbc0e, 0xbc2f, 0xc470, 0xbc70, 0xbcd1, 0xb4d2, 0x940f, 0x3144, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x49a6, 0x9bce, 0x9b6d, 0x92cb, 0x9b0b, 0xa34c, 0x9b0b, 0x8a89, 0x7a28, 0x69c7, 0x48a3, 0x3000, 0x5124, 0x8b0b, 0xabef, 0xd574, 0xd553, 0xe615, 0xd594, 0xc4f1, 0xb4b0, 0x8b2a, 0x92ea, 0x9b0b, 0x9b2b, 0x9b0b, 0xa36d, 0xcc91, 0xcc71, 0xbc2f, 0xb3cd, 0xb3ee, 0xbc2f, 0xc44f, 0xbc4f, 0xbc2e, 0xbc0e, 0xbc2f, 0xbc2f, 0xbc4f, 0xbc90, 0xbcd1, 0xb4d2, 0x6aca, 0x1040, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x0000, 0x1040, 0x8bce, 0x9bae, 0x9b4c, 0x930b, 0xab8d, 0xb3ce, 0xa36d, 0x930b, 0x7a48, 0x5124, 0x4082, 0x6186, 0x932c, 0x9b6d, 0x8aea, 0x82c9, 0xa3ac, 0x8b0a, 0x7a88, 0x9b8c, 0xb40e, 0xd4d2, 0xcc70, 0xb3ce, 0xbc0f, 0xbbef, 0xbbee, 0xc470, 0xbc0f, 0xbc0e, 0xbc0e, 0xbc2e, 0xc44f, 0xbc4f, 0xbc2e, 0xbc0e, 0xbc4f, 0xbc4f, 0xbc4f, 0xbc90, 0xbcd2, 0x9c50, 0x3985, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x0000, 0x0000, 0x5a68, 0x9bce, 0x9bae, 0x9b4c, 0xab8d, 0xb3ef, 0xb40f, 0xb40f, 0xb3ef, 0xa36d, 0x82aa, 0x6185, 0x48c2, 0x71e6, 0x9b4c, 0xabce, 0xabad, 0xbc2f, 0xcc70, 0xc430, 0xcc50, 0xc40f, 0xc450, 0xd491, 0xb3ce, 0xbc0f, 0xcc91, 0xc450, 0xc470, 0xc44f, 0xc42f, 0xc44f, 0xc44f, 0xbc2f, 0xbc2e, 0xb40e, 0xbc2f, 0xbc6f, 0xb44f, 0xb490, 0xac90, 0x6aca, 0x1861, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x18a1, 0x8bad, 0x9bce, 0xa38e, 0x9b4d, 0xab8d, 0xbc0f, 0xc450, 0xbc30, 0xb40f, 0xb3ef, 0xab8d, 0x9b2b, 0xb3ce, 0xc450, 0xc430, 0xcc50, 0xcc30, 0xcc30, 0xcc30, 0xcc30, 0xcc50, 0xc3ef, 0xab6d, 0xb3ae, 0xc430, 0xcc70, 0xcc50, 0xc42f, 0xc44f, 0xc46f, 0xc46f, 0xbc4f, 0xbc2f, 0xb42f, 0xbc2f, 0xb42f, 0xb44f, 0xb470, 0xac70, 0x93ee, 0x3944, 0x0000, 0x0820, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x0000, 0x5a69, 0x9bef, 0x9b8e, 0xa38e, 0xa36d, 0xb3ee, 0xbc2f, 0xbc2f, 0xbc0f, 0xb3ce, 0xab8d, 0xabae, 0xc430, 0xcc71, 0xd492, 0xd472, 0xd431, 0xcc10, 0xc3af, 0xb34d, 0xa2eb, 0xab2c, 0xb38e, 0xc430, 0xcc50, 0xc430, 0xcc50, 0xcc90, 0xcc70, 0xcc90, 0xc490, 0xc46f, 0xbc2f, 0xb42f, 0xb42f, 0xb42f, 0xac2f, 0xac4f, 0xa42f, 0x5a27, 0x1020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x0000, 0x0020, 0x0000, 0x1041, 0x834d, 0x938e, 0xa38e, 0xa3ae, 0xa38c, 0xabce, 0xbc4f, 0xc490, 0xbc2f, 0xab8d, 0x9b0b, 0x9aeb, 0xa30c, 0xab2c, 0xab0c, 0xab0c, 0xaaec, 0xaaec, 0xa2cb, 0xb34d, 0xb3ad, 0xc3ef, 0xc430, 0xcc50, 0xcc50, 0xcc50, 0xcc70, 0xcc70, 0xccb1, 0xc490, 0xb42e, 0xb42f, 0xb42f, 0xb42f, 0xb450, 0xa40f, 0xac90, 0x7b2b, 0x28e2, 0x0800, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x0020, 0x0000, 0x4186, 0x8b8e, 0x938e, 0xa3ae, 0x9b6c, 0xa3ad, 0xabee, 0xb40e, 0xbc2f, 0xbc2f, 0xab8d, 0x9b0b, 0x9b0c, 0x9aeb, 0x9aab, 0x92ab, 0x92ab, 0x9aab, 0x9acb, 0xab2c, 0xb38d, 0xbbef, 0xc40f, 0xcc30, 0xcc91, 0xd4b1, 0xd4b1, 0xccb1, 0xccd1, 0xbc6f, 0xb42e, 0xbc70, 0xb44f, 0xa3ee, 0xac2f, 0xa450, 0x93ee, 0x49c6, 0x0800, 0x0000, 0x0000, 0x0000, 0x0020, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0800, 0x624a, 0x93af, 0x9bae, 0x9b8d, 0xa3ad, 0xa3ce, 0xabee, 0xb42f, 0xbc4f, 0xb40f, 0xabae, 0xab8d, 0xa34d, 0xa32d, 0xa34d, 0xab6d, 0xabae, 0xb3cf, 0xb3ce, 0xc40f, 0xcc50, 0xcc50, 0xcc71, 0xd491, 0xd4b1, 0xcc91, 0xd4d1, 0xc4b0, 0xbc4f, 0xb44f, 0xb470, 0xa40e, 0x9bee, 0xa42f, 0x9c50, 0x5a69, 0x1881, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1841, 0x628a, 0x93af, 0x9bce, 0x938d, 0x9b8d, 0xac0e, 0xb44f, 0xb42f, 0xbc2f, 0xb40f, 0xabce, 0xab8e, 0xabae, 0xb3ef, 0xbc30, 0xc450, 0xcc71, 0xcc70, 0xd491, 0xd4b1, 0xd4b1, 0xd4b2, 0xcc91, 0xcc91, 0xc470, 0xccb0, 0xbc6f, 0xb44f, 0xac4f, 0xa40e, 0x9bee, 0xa40f, 0x9c0f, 0x6aeb, 0x20c3, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x0000, 0x0020, 0x0000, 0x1882, 0x626a, 0x8b8e, 0x9bef, 0x938d, 0x9bad, 0xac0f, 0xb450, 0xc470, 0xc470, 0xbc50, 0xbc30, 0xc430, 0xc471, 0xcc91, 0xccb1, 0xccb1, 0xcc90, 0xcc90, 0xd491, 0xd4b1, 0xd4b2, 0xcc91, 0xc470, 0xc470, 0xbc4f, 0xb40e, 0xb42f, 0xac2e, 0xa40e, 0xa42f, 0x93ee, 0x6aca, 0x2903, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x0000, 0x0020, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0020, 0x0020, 0x0020, 0x0000, 0x0000, 0x0800, 0x0800, 0x0000, 0x0000, 0x0000, 0x0000, 0x0841, 0x0000, 0x1042, 0x49e7, 0x7b4d, 0x93ce, 0x93ce, 0xa3ee, 0xb42f, 0xbc50, 0xc450, 0xcc51, 0xcc71, 0xd471, 0xd491, 0xd4b1, 0xd491, 0xcc70, 0xcc50, 0xc450, 0xcc70, 0xcc70, 0xcc50, 0xc430, 0xbc0f, 0xb40e, 0xabcd, 0xa3cd, 0xa3ed, 0x9bee, 0x9bce, 0x8bad, 0x6a69, 0x30e3, 0x0800, 0x0000, 0x0020, 0x0000, 0x0000, 0x0020, 0x0000, 0x0020, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x0020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0800, 0x3966, 0x7b2c, 0x93ce, 0x93ae, 0xa3ee, 0xb42f, 0xb40f, 0xc450, 0xc451, 0xc430, 0xc410, 0xc40f, 0xbbce, 0xb38d, 0xb3ad, 0xb3ae, 0xb3ce, 0xb3ce, 0xb3ee, 0xb3ee, 0xabce, 0xa3ce, 0x9bad, 0x9bad, 0x93ad, 0x8b8c, 0x7b2b, 0x5a48, 0x30e3, 0x0800, 0x0000, 0x0000, 0x0000, 0x0020, 0x0000, 0x0000, 0x0020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0800, 0x20a2, 0x49e7, 0x7b4c, 0x93cf, 0x9bcf, 0xa3ef, 0xac10, 0xb410, 0xb3ef, 0xb3cf, 0xabae, 0xa36d, 0x9b2c, 0x9b2c, 0x9b4c, 0x9b6d, 0x9b6d, 0x9b8d, 0x9b8d, 0x938d, 0x8b4c, 0x8b6d, 0x834c, 0x730b, 0x5a48, 0x3945, 0x1861, 0x0800, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x0000, 0x0000, 0x0000, 0x0800, 0x2904, 0x5229, 0x72eb, 0x832d, 0x8b6d, 0x938e, 0x936d, 0x934d, 0x932c, 0x8aeb, 0x8aeb, 0x82cb, 0x82eb, 0x82cb, 0x82cb, 0x82eb, 0x830b, 0x830c, 0x7b0b, 0x72cb, 0x5a48, 0x4185, 0x20e3, 0x1061, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0021, 0x0000, 0x0000, 0x0000, 0x0820, 0x1041, 0x3965, 0x49a6, 0x51e7, 0x5a08, 0x5a08, 0x5a08, 0x6228, 0x6248, 0x6249, 0x6249, 0x6a49, 0x6249, 0x6248, 0x6228, 0x5207, 0x51e7, 0x3965, 0x28c3, 0x1020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0820, 0x1061, 0x1882, 0x20a2, 0x28c3, 0x3104, 0x3944, 0x3945, 0x3965, 0x4185, 0x4165, 0x3944, 0x2903, 0x2082, 0x1861, 0x1020, 0x0800, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x0020, 0x0000, 0x0000, 0x0020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x0860, 0x1081, 0x18c2, 0x18a2, 0x18a2, 0x1882, 0x1061, 0x0820, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
};

#endif