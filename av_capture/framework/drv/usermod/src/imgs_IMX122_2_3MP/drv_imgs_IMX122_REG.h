#ifndef _DRV_IMGS_IMX122_REG_H_
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
#define _DRV_IMGS_IMX122_REG_H_

const unsigned short IMX122_SETTING[]={
    0x0200,0x31,//standy mode
    0x0201,0x80,//vertical scanning direction control
    0x0202,0x0F,//HD 1080p mode
    //HMAX
    0x0203,0x28,//4c 
    0x0204,0x05,//04 
    //VMAX
    0x0205,0x65,
    0x0206,0x04, 
    
    0x0207,0x00, 
    0x0208,0x00, 
    0x0209,0x00, 
    0x020a,0x00, 
    0x020b,0x00, 
    0x020c,0x00, 
    0x020d,0x00, 
    0x020e,0x00, 
    0x020f,0x00, 
    0x0210,0x00, 
    0x0211,0x00, 
    0x0212,0x82,//AD gradation setting 0:10bite  1:12bits
    0x0213,0x40, 
    0x0214,0x00, 
    0x0215,0x00, 
    0x0216,0x3c, 
    0x0217,0x00, 
    0x0218,0xc0, 
    0x0219,0x07, 
    0x021a,0xc9, 
    0x021b,0x04, 
    0x021c,0x50, 
    0x021d,0x00, 
    0x021e,0x80,//Gain setting 
    0x021f,0x31, 
    0x0220,0xf0,//f0 Black level offset value setting 
    0x0221,0x00, 
    0x0222,0x40, 
    0x0223,0x08, 
    0x0224,0x30, 
    0x0225,0x00, 
    0x0226,0x80, 
    0x0227,0x20, 
    0x0228,0x34, 
    0x0229,0x63, 
    0x022a,0x00, 
    0x022b,0x00, 
    0x022c,0x00, 
    0x022d,0x40, 
    0x022e,0x00, 
    0x022f,0x02, 
    0x0230,0x30, 
    0x0231,0x20, 
    0x0232,0x00, 
    0x0233,0x14, 
    0x0234,0x20, 
    0x0235,0x60, 
    0x0236,0x00, 
    0x0237,0x23, 
    0x0238,0x01, 
    0x0239,0x00, 
    0x023a,0xa8, 
    0x023b,0xe0,//in parallel cmos output mode 
    0x023c,0x06, 
    0x023d,0x00, 
    0x023e,0x10, 
    0x023f,0x00, 
    0x0240,0x42, 
    0x0241,0x23, 
    0x0242,0x3c, 
    0x0243,0x01, 
    0x0244,0x00, 
    0x0245,0x00, 
    0x0246,0x00, 
    0x0247,0x00, 
    0x0248,0x00, 
    0x0249,0x00, 
    0x024a,0x00, 
    0x024b,0x00, 
    0x024c,0x01, 
    0x024d,0x00, 
    0x024e,0x01, 
    0x024f,0x07, 
    0x0250,0x10, 
    0x0251,0x18, 
    0x0252,0x12, 
    0x0253,0x00, 
    0x0254,0x00, 
    0x0255,0x00, 
    0x0256,0x00, 
    0x0257,0x00, 
    0x0258,0xe0, 
    0x0259,0x01, 
    0x025a,0xe0, 
    0x025b,0x01, 
    0x025c,0x00,  
    0x025d,0x00, 
    0x025e,0x00, 
    0x025f,0x00, 
    0x0260,0x00, 
    0x0261,0x00, 
    0x0262,0x76, 
    0x0263,0x00, 
    0x0264,0x01, 
    0x0265,0x00, 
    0x0266,0x00, 
    0x0267,0x00, 
    0x0268,0x00, 
    0x0269,0x00, 
    0x026a,0x00, 
    0x026b,0x00, 
    0x026c,0x00, 
    0x026d,0x00, 
    0x026e,0x00, 
    0x026f,0x00, 
    0x0270,0x00, 
    0x0271,0x00, 
    0x0272,0x00, 
    0x0273,0x01, 
    0x0274,0x06, 
    0x0275,0x07, 
    0x0276,0x80, 
    0x0277,0x00, 
    0x0278,0x40, 
    0x0279,0x08, 
    0x027a,0x00, 
    0x027b,0x00, 
    0x027c,0x10, 
    0x027d,0x00, 
    0x027e,0x00, 
    0x027f,0x00, 
    0x0280,0x06, 
    0x0281,0x19, 
    0x0282,0x00, 
    0x0283,0x64, 
    0x0284,0x00, 
    0x0285,0x01, 
    0x0286,0x00, 
    0x0287,0x00, 
    0x0288,0x00, 
    0x0289,0x00, 
    0x028a,0x00, 
    0x028b,0x00, 
    0x028c,0x00, 
    0x028d,0x00, 
    0x028e,0x00, 
    0x028f,0x00, 
    0x0290,0x00, 
    0x0291,0x00, 
    0x0292,0x01, 
    0x0293,0x01, 
    0x0294,0x00, 
    0x0295,0xff, 
    0x0296,0x0f, 
    0x0297,0x00, 
    0x0298,0x26, 
    0x0299,0x02, 
    0x029a,0x26, 
    0x029b,0x02, 
    0x029c,0x9c, 
    0x029d,0x01, 
    0x029e,0x39, 
    0x029f,0x03, 
    0x02a0,0x01, 
    0x02a1,0x05, 
    0x02a2,0xd0, 
    0x02a3,0x07, 
    0x02a4,0x00, 
    0x02a5,0x02, 
    0x02a6,0x0b, 
    0x02a7,0x0f, 
    0x02a8,0x24, 
    0x02a9,0x00, 
    0x02aa,0x28, 
    0x02ab,0x00, 
    0x02ac,0xe8, 
    0x02ad,0x04, 
    0x02ae,0xec, 
    0x02af,0x04, 
    0x02b0,0x00, 
    0x02b1,0x00, 
    0x02b2,0x03, 
    0x02b3,0x05, 
    0x02b4,0x00, 
    0x02b5,0x0f, 
    0x02b6,0x10, 
    0x02b7,0x00, 
    0x02b8,0x28, 
    0x02b9,0x00, 
    0x02ba,0xbf, 
    0x02bb,0x07, 
    0x02bc,0xcf, 
    0x02bd,0x07, 
    0x02be,0xcf, 
    0x02bf,0x07, 
    0x02c0,0xcf, 
    0x02c1,0x07, 
    0x02c2,0xd0, 
    0x02c3,0x07, 
    0x02c4,0x01, 
    0x02c5,0x02, 
    0x02c6,0x03, 
    0x02c7,0x04, 
    0x02c8,0x05, 
    0x02c9,0x06, 
    0x02ca,0x07, 
    0x02cb,0x08, 
    0x02cc,0x01, 
    0x02cd,0x03, 
    0x02ce,0x16, 
    0x02cf,0x82, 
    0x02d0,0x00, 
    0x02d1,0x00, 
    0x02d2,0x00,  
    0x02d3,0x00, 
    0x02d4,0x00, 
    0x02d5,0x00, 
    0x02d6,0x00, 
    0x02d7,0x00, 
    0x02d8,0x00, 
    0x02d9,0x00, 
    0x02da,0x00, 
    0x02db,0x00, 
    0x02dc,0x00, 
    0x02dd,0x00, 
    0x02de,0x00, 
    0x02df,0x00, 
    0x02e0,0x00, 
    0x02e1,0x00, 
    0x02e2,0x00, 
    0x02e3,0x00, 
    0x02e4,0x00, 
    0x02e5,0x00, 
    0x02e6,0x00, 
    0x02e7,0x00, 
    0x02e8,0x00, 
    0x02e9,0x00, 
    0x02ea,0x00, 
    0x02eb,0x00, 
    0x02ec,0x00, 
    0x02ed,0x00,  
    0x02ee,0x00, 
    0x02ef,0x00, 
    0x02f0,0x00, 
    0x02f1,0x00, 
    0x02f2,0x00, 
    0x02f3,0x00, 
    0x02f4,0x00, 
    0x02f5,0x00, 
    0x02f6,0x00,  
    0x02f7,0x00, 
    0x02f8,0x00, 
    0x02f9,0x00, 
    0x02fa,0x00, 
    0x02fb,0x00, 
    0x02fc,0x00, 
    0x02fd,0x00, 
    0x02fe,0x00, 
    0x02ff,0x00,
    0x0300,0x00,
    0x0301,0x00,
    0x0302,0x00,
    0x0303,0x00,
    0x0304,0x00,
    0x0305,0x00,
    0x0306,0x00,
    0x0307,0xfa,
    0x0308,0xfa,
    0x0309,0x41,
    0x030a,0x31,
    0x030b,0x38,
    0x030c,0x04,
    0x030d,0x00,
    0x030e,0x1a,
    0x030f,0x10,
    0x0310,0x00,
    0x0311,0x00,
    0x0312,0x10,
    0x0313,0x00,
    0x0314,0x00,
    0x0315,0x06,
    0x0316,0x33,
    0x0317,0x0d,//fixed 0dh
    0x0318,0x00,
    0x0319,0x00,
    0x031a,0x00,
    0x031b,0x00,
    0x031c,0x00,
    0x031d,0x00,
    0x031e,0x00,
    0x031f,0x00,
    0x0320,0x00,
    0x0321,0x80,
    0x0322,0x0c,
    0x0323,0x00,
    0x0324,0x00,
    0x0325,0x00,
    0x0326,0x00,
    0x0327,0x00,
    0x0328,0x05,
    0x0329,0x80,
    0x032a,0x00,
    0x032b,0x00,
    0x032c,0x04,
    0x032d,0x04,
    0x032e,0x00,
    0x032f,0x00,
    0x0330,0x9b,
    0x0331,0x71,
    0x0332,0x33,
    0x0333,0x37,
    0x0334,0xb3,
    0x0335,0x19,
    0x0336,0x97,
    0x0337,0xb1,
    0x0338,0x19,
    0x0339,0x01,
    0x033a,0x50,
    0x033b,0x00,
    0x033c,0x35,
    0x033d,0xb0,
    0x033e,0x03,
    0x033f,0xd1,
    0x0340,0x71,
    0x0341,0x1d,
    0x0342,0x00,
    0x0343,0x00,
    0x0344,0x00,
    0x0345,0x00,
    0x0346,0x02,
    0x0347,0x30,
    0x0348,0x00,
    0x0349,0x00,
    0x034a,0x00,
    0x034b,0x03,
    0x034c,0x00,
    0x034d,0x02,
    0x034e,0x10,
    0x034f,0xa0,
    0x0350,0x00,
    0x0351,0x07,
    0x0352,0x40,
    0x0353,0x80,
    0x0354,0x00,
    0x0355,0x02,
    0x0356,0x50,
    0x0357,0x02,
    0x0358,0x23,
    0x0359,0xe4,
    0x035a,0x45,
    0x035b,0x33,
    0x035c,0x79, 
    0x035d,0xd1,
    0x035e,0xcc,
    0x035f,0x2f,
    0x0360,0xb6,
    0x0361,0xa1,
    0x0362,0x17,
    0x0363,0xcb,
    0x0364,0xe8,
    0x0365,0xc5,
    0x0366,0x32,
    0x0367,0xc0,
    0x0368,0xa8,
    0x0369,0xc6,
    0x036a,0x5e,
    0x036b,0x20,
    0x036c,0x63,
    0x036d,0x0d,
    0x036e,0x6d,
    0x036f,0x44,
    0x0370,0xa6,
    0x0371,0x32,
    0x0372,0x24,
    0x0373,0x50,
    0x0374,0xc4,
    0x0375,0x2f,
    0x0376,0xf4,
    0x0377,0x42,
    0x0378,0x82,
    0x0379,0x13,
    0x037a,0x90,
    0x037b,0x00,
    0x037c,0x10,
    0x037d,0x8a,
    0x037e,0x60,
    0x037f,0xc4,
    0x0380,0x2f,
    0x0381,0x84,
    0x0382,0xf1,
    0x0383,0x0b,
    0x0384,0xcd,
    0x0385,0x70,
    0x0386,0x42,
    0x0387,0x16,
    0x0388,0x00,
    0x0389,0x61,
    0x038a,0x0b,
    0x038b,0x29,
    0x038c,0x74,
    0x038d,0x81,
    0x038e,0x10,
    0x038f,0xba,
    0x0390,0x18,
    0x0391,0x22,
    0x0392,0x11,
    0x0393,0xe9,
    0x0394,0x60,
    0x0395,0x07,
    0x0396,0x09,
    0x0397,0xf6,
    0x0398,0x40,
    0x0399,0x02,
    0x039a,0x3c,
    0x039b,0x00,
    0x039c,0x00,
    0x039d,0x00,
    0x039e,0x00,
    0x039f,0x00,
    0x03a0,0x80,
    0x03a1,0x0b,
    0x03a2,0x64,
    0x03a3,0x90,
    0x03a4,0x8d,
    0x03a5,0x6e,
    0x03a6,0x98,
    0x03a7,0x40,
    0x03a8,0x05,
    0x03a9,0xd1,
    0x03aa,0xa8,
    0x03ab,0x86,
    0x03ac,0x09,
    0x03ad,0x54,
    0x03ae,0x10,
    0x03af,0x8d,
    0x03b0,0x6a,
    0x03b1,0xe8,
    0x03b2,0x82,
    0x03b3,0x17,
    0x03b4,0x1c,
    0x03b5,0x60,
    0x03b6,0xc1,
    0x03b7,0x31,
    0x03b8,0xae,
    0x03b9,0xd1,
    0x03ba,0x81,
    0x03bb,0x16,
    0x03bc,0x20,
    0x03bd,0x03,
    0x03be,0x1b,
    0x03bf,0x24,
    0x03c0,0xe0,
    0x03c1,0xc1,
    0x03c2,0x33,
    0x03c3,0xbe,
    0x03c4,0x51,
    0x03c5,0x82,
    0x03c6,0x1e,
    0x03c7,0x40,
    0x03c8,0x03,
    0x03c9,0x1c,
    0x03ca,0x34,
    0x03cb,0xd0,
    0x03cc,0x81,
    0x03cd,0x02,
    0x03ce,0x16,
    0x03cf,0x00,
    0x03d0,0x02,
    0x03d1,0x04,
    0x03d2,0x00, 
    0x03d3,0x00,
    0x03d4,0x00,
    0x03d5,0x80,
    0x03d6,0x00,
    0x03d7,0x00,
    0x03d8,0x23,
    0x03d9,0x01,
    0x03da,0x03,
    0x03db,0x02,
    0x03dc,0x00,
    0x03dd,0x00,
    0x03de,0x00,
    0x03df,0x00,
    0x03e0,0x22,
    0x03e1,0x00,
//    0x03e2,0x00,
    0x03e3,0x00,
    0x03e4,0x3f,
    0x03e5,0x17,
    0x03e6,0x15,
    0x03e7,0x00,
    0x03e8,0x00,
    0x03e9,0x00,
    0x03ea,0x00,
    0x03eb,0x00,
    0x03ec,0x00,
    0x03ed,0x00, 
    0x03ee,0x00,
    0x03ef,0x00,
    0x03f0,0x00,
    0x03f1,0x00,
    0x03f2,0x00,
    0x03f3,0x00,
    0x03f4,0x00,
    0x03f5,0x00,
    0x03f6,0x00, 
    0x03f7,0x00,
    0x03f8,0x00,
    0x03f9,0x00,
    0x03fa,0x00,
    0x03fb,0x00,
    0x03fc,0x00,
    0x03fd,0x00,
    0x03fe,0x00,
    0x03ff,0x00
};
#endif

