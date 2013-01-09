/*
   'src_compress_LZS_lzsc.c' Obfuscated by COBF (Version 1.06 2006-01-07 by BB) at Tue Sep  4 10:25:31 2012
*/
#include"cobf.h"
#ifdef _WIN32
#if defined( UNDER_CE) && defined( bb354) || ! defined( bb336)
#define bb331 1
#define bb357 1
#else
#define bb349 bb343
#define bb356 1
#define bb338 1
#endif
#define bb342 1
#include"uncobf.h"
#include<ndis.h>
#include"cobf.h"
#ifdef UNDER_CE
#include"uncobf.h"
#include<ndiswan.h>
#include"cobf.h"
#endif
#include"uncobf.h"
#include<stdio.h>
#include<basetsd.h>
#include"cobf.h"
bba bbs bbl bbf, *bb1;bba bbs bbe bbq, *bb93;bba bb135 bb123, *bb330;
bba bbs bbl bb39, *bb72;bba bbs bb135 bbk, *bb59;bba bbe bbu, *bb134;
bba bbh bbf*bb89;
#ifdef bb308
bba bbd bb60, *bb122;
#endif
#else
#include"uncobf.h"
#include<linux/module.h>
#include<linux/ctype.h>
#include<linux/time.h>
#include<linux/slab.h>
#include"cobf.h"
#ifndef bb112
#define bb112
#ifdef _WIN32
#include"uncobf.h"
#include<wtypes.h>
#include"cobf.h"
#else
#ifdef bb115
#include"uncobf.h"
#include<linux/types.h>
#include"cobf.h"
#else
#include"uncobf.h"
#include<stddef.h>
#include<sys/types.h>
#include"cobf.h"
#endif
#endif
#ifdef _WIN32
bba bb118 bb285;
#else
bba bbe bbu, *bb134, *bb214;
#define bb201 1
#define bb202 0
bba bb221 bb287, *bb278, *bb292;bba bbe bb286, *bb241, *bb232;bba bbs
bbq, *bb93, *bb233;bba bb5 bb280, *bb283;bba bbs bb5 bb226, *bb235;
bba bb5 bb111, *bb281;bba bbs bb5 bb63, *bb251;bba bb63 bb282, *bb255
;bba bb63 bb275, *bb262;bba bb111 bb118, *bb219;bba bb273 bb288;bba
bb254 bb123;bba bb210 bb83;bba bb113 bb114;bba bb113 bb250;
#ifdef bb259
bba bb209 bb39, *bb72;bba bb291 bbk, *bb59;bba bb256 bbd, *bb28;bba
bb236 bb56, *bb117;
#else
bba bb272 bb39, *bb72;bba bb212 bbk, *bb59;bba bb271 bbd, *bb28;bba
bb243 bb56, *bb117;
#endif
bba bb39 bbf, *bb1, *bb206;bba bbk bb274, *bb246, *bb215;bba bbk bb263
, *bb268, *bb234;bba bbd bb60, *bb122, *bb220;bba bb83 bb37, *bb249, *
bb207;bba bbd bb230, *bb218, *bb248;bba bb114 bb264, *bb253, *bb266;
bba bb56 bb279, *bb239, *bb284;
#define bb142 bbb
bba bbb*bb231, *bb76;bba bbh bbb*bb269;bba bbl bb276;bba bbl*bb240;
bba bbh bbl*bb82;
#if defined( bb115)
bba bbe bb120;
#endif
bba bb120 bb19;bba bb19*bb289;bba bbh bb19*bb187;
#if defined( bb247) || defined( bb265)
bba bb19 bb36;bba bb19 bb116;
#else
bba bbl bb36;bba bbs bbl bb116;
#endif
bba bbh bb36*bb223;bba bb36*bb224;bba bb60 bb229, *bb290;bba bbb*
bb105;bba bb105*bb208;
#define bb228( bb34) bbi bb34##__ { bbe bb260; }; bba bbi bb34##__  * \
 bb34
bba bbi{bb37 bb188,bb245,bb244,bb237;}bb277, *bb270, *bb242;bba bbi{
bb37 bb8,bb192;}bb211, *bb217, *bb261;bba bbi{bb37 bb227,bb257;}bb216
, *bb238, *bb225;
#endif
bba bbh bbf*bb89;
#endif
bba bbf bb101;
#define IN
#define OUT
#ifdef _DEBUG
#define bb139( bbc) bb31( bbc)
#else
#define bb139( bbc) ( bbb)( bbc)
#endif
bba bbe bb160, *bb173;
#define bb205 0
#define bb315 1
#define bb299 2
#define bb319 3
#define bb345 4
bba bbe bb353;bba bbb*bb121;
#endif
#ifdef _WIN32
#ifndef UNDER_CE
#define bb30 bb339
#define bb43 bb346
bba bbs bb5 bb30;bba bb5 bb43;
#endif
#else
#endif
#ifdef _WIN32
bbb*bb127(bb30 bb47);bbb bb106(bbb* );bbb*bb137(bb30 bb159,bb30 bb47);
#else
#define bb127( bbc) bb146(1, bbc, bb140)
#define bb106( bbc) bb332( bbc)
#define bb137( bbc, bbn) bb146( bbc, bbn, bb140)
#endif
#ifdef _WIN32
#define bb31( bbc) bb334( bbc)
#else
#ifdef _DEBUG
bbe bb145(bbh bbl*bb97,bbh bbl*bb25,bbs bb258);
#define bb31( bbc) ( bbb)(( bbc) || ( bb145(# bbc, __FILE__, __LINE__ \
)))
#else
#define bb31( bbc) (( bbb)0)
#endif
#endif
bb43 bb300(bb43*bb323);
#ifndef _WIN32
bbe bb326(bbh bbl*bbg);bbe bb320(bbh bbl*bb20,...);
#endif
#ifdef _WIN32
bba bb337 bb95;
#define bb141( bbc) bb352( bbc)
#define bb144( bbc) bb350( bbc)
#define bb133( bbc) bb355( bbc)
#define bb132( bbc) bb333( bbc)
#else
bba bb347 bb95;
#define bb141( bbc) ( bbb)(  *  bbc = bb329( bbc))
#define bb144( bbc) (( bbb)0)
#define bb133( bbc) bb358( bbc)
#define bb132( bbc) bb348( bbc)
#endif
bba bbi bb1863 bb1863;bba bbi bb1863*bb490;bbd bb2194(bbb);bbb bb2137
(bb490 bb0,bbb*bb1311);bbk bb2174(bb490 bb0,bbf* *bb1738,bbf* *bb1732
,bbd*bb908,bbd*bb604,bbb*bb1311,bbk bb374,bbk bb2157);bbk bb2290(
bb490 bb0,bbf* *bb1738,bbf* *bb1732,bbd*bb908,bbd*bb604,bbb*bb1311,
bbk bb374);
#define bb201 1
#define bb202 0
#define bb1244 bb201
#define bb2373 bb202
bba bbi{bbf*bb1751;bbd bb987;bbf*bb1742;bbd bb594;bbd bb1272;bbd
bb1744;bbk bb2046;bbf bb1911;bbf bb2610;bbk bb1690;bbd bb534;bbd
bb1839;bbk bb1249;bbd*bb2269;bbd bb2287;bbk bb1330;bbk bb2245;bbk
bb2050;bbk bb2098;bbk bb2058;bbk bb2116;bbk bb1018;bb123 bb1055;bbf
bb1711;bbf bb2609;bb123 bb1943;bbk bb1997;bbk bb1820;}bb2526;bba bbi{
bbf*bb1751;bbd bb987;bbf*bb1742;bbd bb594;bbk bb2091;bbk bb1756;bbk
bb1163;bbk bb2437;bb123 bb1149;bbk bb1145;bbk bb993;bb123 bb1047;
bb123 bb92;bbd bb464;bbk bb1970;}bb2538;bba bbi{bbf bb1842[2048 ];bbk
bb1873[2048 ];bbd bb2083[4096 ];bb2526 bb44;bbf bb2163[2048 ];bb2538 bb80
;bbf bb1148[64 ];}bb2045;bbi bb1863{bb2045*bb449;bb2045 bb13;bbk bb2112
;bbk bb1748;};bba bbi bb2585{bbk bb2315;bb123 bb47;}bb2448;bb40 bb2448
bb2155[24 ]={{0x0 ,0 },{0x0 ,0 },{0x0 ,2 },{0x1 ,2 },{0x2 ,2 },{0xC ,4 },{0xD ,4 },{
0xE ,4 },{0xF0 ,8 },{0xF1 ,8 },{0xF2 ,8 },{0xF3 ,8 },{0xF4 ,8 },{0xF5 ,8 },{0xF6 ,8 }
,{0xF7 ,8 },{0xF8 ,8 },{0xF9 ,8 },{0xFA ,8 },{0xFB ,8 },{0xFC ,8 },{0xFD ,8 },{0xFE
,8 }};bb40 bbk bb2478[5 ][3 ]={{1 ,1 ,1 },{1 ,1 ,1 },{0 ,0 ,1 },{0 ,0 ,1 },{0 ,1 ,1 }};
bb9{bb2227,bb2566,bb2486,bb2470,bb2385};bb9{bb2082,bb2346,bb2379,
bb2348,bb2307,bb2306,bb2420,bb2234,bb2363};bb40 bbb bb2222(bb490 bb0);
bb40 bbb bb2371(bb490 bb0);bb40 bbb bb1097(bb490 bb0);bb40 bbb bb2378
(bb490 bb0);bb40 bbb bb2129(bbd*bb2407,bbd bb2323);bb40 bbb bb2077(
bb490 bb0,bbk bb2156,bbd bb2099);bb40 bbb bb2123(bb490 bb0);bb40 bbk
bb2280(bb490 bb0);bb40 bbk bb1846(bb490 bb0);bb40 bbb bb2072(bb490 bb0
,bbf bbo);bbd bb2194(bbb){bb2 bb11(bb1863);}bb40 bbb bb2222(bb490 bb0
){bb0->bb13.bb44.bb1943=8 ;bb0->bb13.bb44.bb1711=0 ;bb0->bb13.bb44.
bb1330=bb0->bb13.bb44.bb1690=0 ;bb0->bb13.bb44.bb534=bb0->bb13.bb44.
bb1839=0 ;bb0->bb13.bb44.bb2116=bb0->bb13.bb44.bb1820=0 ;bb2;}bbb bb2137
(bb490 bb0,bbb*bb1311){bb0->bb449=(bb2045* )bb1311;bb0->bb13.bb44=bb0
->bb449->bb44;bb0->bb13.bb44.bb1272=0xFFFFFFFFL ;bb0->bb13.bb44.bb1744
=bb0->bb13.bb44.bb1272-1 ;bb0->bb13.bb44.bb1997=0 ;bb2222(bb0);bb2129(
bb0->bb449->bb2083,0xC0000000L );bb0->bb449->bb44=bb0->bb13.bb44;bb0->
bb13.bb80=bb0->bb449->bb80;bb0->bb13.bb80.bb2091=0 ;bb2123(bb0);bb0->
bb449->bb80=bb0->bb13.bb80;bb2;}bb40 bbb bb2129(bbd*bb2407,bbd bb2323
){bbk bbz;bb91(bbz=0 ;bbz<4096 ;bbz++) *bb2407++=bb2323;bb2;}bb40 bbb
bb2371(bb490 bb0){bb915 bbk bbz;bbd*bb2133;bbd bb2220;bb2220=
0xC0000000L ;bbm(bb0->bb13.bb44.bb1272!=0 )bb2220=0x40000000L ;bb2133=
bb0->bb449->bb2083;bb91(bbz=0 ;bbz<4096 ;bbz++,bb2133++)bbm(bb0->bb13.
bb44.bb1272- *bb2133>2048 -2 ) *bb2133=bb2220;bb2;}bb40 bbb bb1097(
bb490 bb0){bb915 bb123 bb1968;bbm(bb0->bb13.bb44.bb594==0 )bb0->bb13.
bb44.bb1997=1 ;bbm((bb1968=bb0->bb13.bb44.bb1055-bb0->bb13.bb44.bb1943
)>0 ){bb0->bb13.bb44.bb1711|=(bb0->bb13.bb44.bb1018>>bb1968);bb0->bb13
.bb44.bb1943=8 ; *bb0->bb13.bb44.bb1742++=bb0->bb13.bb44.bb1711;--bb0
->bb13.bb44.bb594;bb0->bb13.bb44.bb1711=0 ;bb0->bb13.bb44.bb1018&=((1
<<bb1968)-1 );bb0->bb13.bb44.bb1055=bb1968;bb1097(bb0);}bb54 bbm(
bb1968<0 ){bb0->bb13.bb44.bb1711|=(bb0->bb13.bb44.bb1018<<-bb1968);bb0
->bb13.bb44.bb1943-=bb0->bb13.bb44.bb1055;}bb54{bb0->bb13.bb44.bb1711
|=bb0->bb13.bb44.bb1018;bb0->bb13.bb44.bb1943=8 ; *bb0->bb13.bb44.
bb1742++=bb0->bb13.bb44.bb1711;--bb0->bb13.bb44.bb594;bb0->bb13.bb44.
bb1711=0 ;}bb2;}bb40 bbb bb2378(bb490 bb0){bb0->bb13.bb44.bb1018=(
0x180 );bb0->bb13.bb44.bb1055=(9 );bb1097(bb0);bbm(bb0->bb13.bb44.
bb1943!=8 ){ *bb0->bb13.bb44.bb1742++=bb0->bb13.bb44.bb1711;--bb0->
bb13.bb44.bb594;bbm(bb0->bb13.bb44.bb594==0 ){bb0->bb13.bb44.bb1997=1 ;
}}bb0->bb13.bb44.bb1943=8 ;bb0->bb13.bb44.bb1711=0 ;bb2;}bb40 bbb bb2077
(bb490 bb0,bbk bb2156,bbd bb2099){bbm(bb0->bb13.bb44.bb1820==0 ){bbm(
bb2156<128 ){bb0->bb13.bb44.bb1018=(0x180 |bb2156);bb0->bb13.bb44.
bb1055=(9 );bb1097(bb0);}bb54{bb0->bb13.bb44.bb1018=(0x1000 |bb2156);
bb0->bb13.bb44.bb1055=(13 );bb1097(bb0);}}bbm(bb2099>=23 ){bb0->bb13.
bb44.bb1018=(((1 <<4 )-1 ));bb0->bb13.bb44.bb1055=(4 );bb1097(bb0);bb2099
-=((1 <<4 )-1 );bb0->bb13.bb44.bb1839+=((1 <<4 )-1 );bb0->bb13.bb44.bb1820=
1 ;}bb54{bb0->bb13.bb44.bb1018=(bb2155[(bbk)bb2099].bb2315);bb0->bb13.
bb44.bb1055=(bb2155[(bbk)bb2099].bb47);bb1097(bb0);bb0->bb13.bb44.
bb1820=0 ;bb0->bb13.bb44.bb534=0 ;bb0->bb13.bb44.bb1839=0 ;bb0->bb1748=
bb2385;}bb2;}bb40 bbb bb2193(bb490 bb0,bbk bb374){bbm(bb0->bb13.bb44.
bb2116==1 ){bbm(bb0->bb13.bb44.bb534==0 ){bb0->bb13.bb44.bb1018=((bb0->
bb13.bb44.bb1911));bb0->bb13.bb44.bb1055=(9 );bb1097(bb0);bb0->bb1748=
bb2227;}bb54 bb2077(bb0,bb0->bb13.bb44.bb1330,bb0->bb13.bb44.bb534);}
bb2378(bb0);bbm((bb374&0x04 )==0 ){bbm(0 -bb0->bb13.bb44.bb1272>=2048 )bb2129
(bb0->bb449->bb2083,0xC0000000L );bb54 bbm(0x80000000L -bb0->bb13.bb44.
bb1272>=2048 )bb2129(bb0->bb449->bb2083,0x40000000L );bb0->bb13.bb44.
bb1272+=2048 ;bb0->bb13.bb44.bb1744+=2048 ;bb2222(bb0);}bb0->bb13.bb44.
bb2116=0 ;bb2;}bbk bb2174(bb490 bb0,bbf* *bb1738,bbf* *bb1732,bbd*
bb908,bbd*bb604,bbb*bb1311,bbk bb374,bbk bb2157){bb915 bbk bb2182;
bb915 bbk bb2039;bbk bb2169;bbk bb1041=0 ;bb0->bb449=(bb2045* )bb1311;
bb0->bb13.bb44=bb0->bb449->bb44;bb0->bb13.bb44.bb1751= *bb1738;bb0->
bb13.bb44.bb987= *bb908;bb0->bb13.bb44.bb1742= *bb1732;bb0->bb13.bb44
.bb594= *bb604;bb0->bb13.bb44.bb1997=0 ;bb0->bb2112=0X0018 &bb374;bbm(
bb0->bb2112>0x0010 ){bb0->bb2112=0x0010 ;}bb0->bb2112>>=3 ;bbm( *bb604<=
15 )bb1041=0 ;bb54 bbm(bb0->bb13.bb44.bb987!=0 ){bb0->bb13.bb44.bb594-=
15 ;bbm(bb0->bb13.bb44.bb2116==0 ){bb0->bb13.bb44.bb1911= *bb0->bb13.
bb44.bb1751++;--bb0->bb13.bb44.bb987;++bb0->bb13.bb44.bb1272;++bb0->
bb13.bb44.bb1744;bb0->bb13.bb44.bb2046=(bbk)bb0->bb13.bb44.bb1744&(
2048 -1 );bb0->bb449->bb1842[(bbk)bb0->bb13.bb44.bb1272&(2048 -1 )]=bb0->
bb13.bb44.bb1911;bb0->bb13.bb44.bb1690=(bb0->bb13.bb44.bb1690<<8 )+bb0
->bb13.bb44.bb1911;bb0->bb13.bb44.bb2116=1 ;}bb108((bb0->bb13.bb44.
bb987!=0 )&&(bb0->bb13.bb44.bb1997==0 )){++bb0->bb13.bb44.bb1272;++bb0
->bb13.bb44.bb1744;bb0->bb13.bb44.bb2046=(bbk)bb0->bb13.bb44.bb1744&(
2048 -1 );bbm(((bb0->bb13.bb44.bb1272&0x7FFFFFFFL )==0 ))bb2371(bb0);bb0
->bb449->bb1842[(bbk)bb0->bb13.bb44.bb1272&(2048 -1 )]=bb0->bb13.bb44.
bb1911= *bb0->bb13.bb44.bb1751++;bb0->bb13.bb44.bb1690=(bb0->bb13.
bb44.bb1690<<8 )+bb0->bb13.bb44.bb1911;--bb0->bb13.bb44.bb987;bb0->
bb13.bb44.bb2269=bb0->bb449->bb2083+((((bb0->bb13.bb44.bb1690)&0xFF00
)>>4 )^((bb0->bb13.bb44.bb1690)&0x00FF ));bbm((bb0->bb13.bb44.bb2287=
bb0->bb13.bb44.bb1744- *bb0->bb13.bb44.bb2269)>2048 -2 ){bb0->bb449->
bb1873[bb0->bb13.bb44.bb2046]=0 ;bbm(bb0->bb13.bb44.bb534!=0 ){bb2077(
bb0,bb0->bb13.bb44.bb1330,bb0->bb13.bb44.bb534);}bb54{bb0->bb13.bb44.
bb1018=((bb0->bb13.bb44.bb1690>>8 ));bb0->bb13.bb44.bb1055=(9 );bb1097(
bb0);bb0->bb1748=bb2227;}}bb54{bb0->bb449->bb1873[bb0->bb13.bb44.
bb2046]=(bbk)bb0->bb13.bb44.bb2287;bbm(bb0->bb13.bb44.bb534!=0 ){bbm((
bb0->bb449->bb1842[(bbk)(((bbd)bb0->bb13.bb44.bb1249+bb0->bb13.bb44.
bb534+bb0->bb13.bb44.bb1839)&(bbd)(2048 -1 ))]==bb0->bb13.bb44.bb1911)&&
((bb0->bb13.bb44.bb534+bb0->bb13.bb44.bb1839)<(bbd)0xFFFFFFFFL )){++
bb0->bb13.bb44.bb534;bb0->bb1748=bb2486;bbm(bb0->bb13.bb44.bb1820){
bbm(bb0->bb13.bb44.bb534>=23 ){bb0->bb13.bb44.bb1018=(((1 <<4 )-1 ));bb0
->bb13.bb44.bb1055=(4 );bb1097(bb0);bb0->bb13.bb44.bb534-=((1 <<4 )-1 );
bb0->bb13.bb44.bb1839+=((1 <<4 )-1 );}}bb54 bbm(bb0->bb13.bb44.bb534>=23
){bbm(bb0->bb13.bb44.bb1330<128 ){bb0->bb13.bb44.bb1018=(0x180 |bb0->
bb13.bb44.bb1330);bb0->bb13.bb44.bb1055=(9 );bb1097(bb0);}bb54{bb0->
bb13.bb44.bb1018=(0x1000 |bb0->bb13.bb44.bb1330);bb0->bb13.bb44.bb1055
=(13 );bb1097(bb0);}bb0->bb13.bb44.bb1018=(((1 <<4 )-1 ));bb0->bb13.bb44.
bb1055=(4 );bb1097(bb0);bb0->bb13.bb44.bb534-=((1 <<4 )-1 );bb0->bb13.
bb44.bb1839+=((1 <<4 )-1 );bb0->bb13.bb44.bb1820=1 ;}}bb54 bbm(bb0->bb13.
bb44.bb1820){bb0->bb13.bb44.bb1018=(bb2155[(bbk)bb0->bb13.bb44.bb534]
.bb2315);bb0->bb13.bb44.bb1055=(bb2155[(bbk)bb0->bb13.bb44.bb534].
bb47);bb1097(bb0);bb0->bb13.bb44.bb534=0 ;bb0->bb13.bb44.bb1839=0 ;bb0
->bb13.bb44.bb1820=0 ;bb0->bb1748=bb2385;}bb54 bbm(bb0->bb13.bb44.
bb534>=8 ){bb2077(bb0,bb0->bb13.bb44.bb1330,bb0->bb13.bb44.bb534);}
bb54{bb2039=0 ;bb0->bb13.bb44.bb2098=bb0->bb13.bb44.bb1330;bb108((bb0
->bb449->bb1873[bb0->bb13.bb44.bb1249]!=0 )&&(bb2039==0 )&&(bb0->bb13.
bb44.bb2058<bb2157)&&(bb0->bb13.bb44.bb2098<(bbk)(2048 -bb0->bb13.bb44
.bb534))){bb0->bb13.bb44.bb2098+=bb0->bb449->bb1873[bb0->bb13.bb44.
bb1249];++bb0->bb13.bb44.bb2058;bbm(bb0->bb13.bb44.bb2098<(bbk)(2048 -
bb0->bb13.bb44.bb534)){bb0->bb13.bb44.bb1249=bb0->bb13.bb44.bb1249-
bb0->bb449->bb1873[bb0->bb13.bb44.bb1249]&(2048 -1 );bbm(bb0->bb449->
bb1842[bb0->bb13.bb44.bb1249]==bb0->bb449->bb1842[bb0->bb13.bb44.
bb2245]){bb2039=1 ;bb91(bb2182=2 ,bb2169=(bb0->bb13.bb44.bb1249+2 )&(
2048 -1 );bb2182<=(bbk)bb0->bb13.bb44.bb534;bb2182++,bb2169=(bb2169+1 )&
(2048 -1 )){bbm(bb0->bb449->bb1842[bb2169]!=bb0->bb449->bb1842[(bb0->
bb13.bb44.bb2245+bb2182)&(2048 -1 )]){bb2039=0 ;bb22;}}}}}bbm(bb2039){
bb0->bb13.bb44.bb1330=bb0->bb13.bb44.bb2098;++bb0->bb13.bb44.bb534;
bb0->bb1748=bb2470;}bb54{bb2077(bb0,bb0->bb13.bb44.bb1330,bb0->bb13.
bb44.bb534);}}}bb54{bb0->bb13.bb44.bb2050=(bbk)bb0->bb13.bb44.bb2287;
bb0->bb13.bb44.bb2058=0 ;bb567{bb0->bb13.bb44.bb1249=(bbk)(bb0->bb13.
bb44.bb1744-bb0->bb13.bb44.bb2050&(2048 -1 ));bbm(bb0->bb449->bb1842[
bb0->bb13.bb44.bb1249]==(bbf)(bb0->bb13.bb44.bb1690>>8 )){bb0->bb13.
bb44.bb534=2 ;bb0->bb13.bb44.bb2245=bb0->bb13.bb44.bb2046;bb0->bb13.
bb44.bb1330=bb0->bb13.bb44.bb2050;bb0->bb1748=bb2566;bb22;}bb54{bb0->
bb13.bb44.bb2050+=bb0->bb449->bb1873[bb0->bb13.bb44.bb1249];++bb0->
bb13.bb44.bb2058;}}bb108((bb0->bb449->bb1873[bb0->bb13.bb44.bb1249]!=
0 )&&(bb0->bb13.bb44.bb2058<bb2157)&&(bb0->bb13.bb44.bb2050<2048 -2 ));
bbm(bb0->bb13.bb44.bb534==0 ){bb0->bb13.bb44.bb1018=((bb0->bb13.bb44.
bb1690>>8 ));bb0->bb13.bb44.bb1055=(9 );bb1097(bb0);bb0->bb1748=bb2227;
}}}bbm(bb2478[bb0->bb1748][bb0->bb2112]){ *bb0->bb13.bb44.bb2269=bb0
->bb13.bb44.bb1744;}}bbm(bb0->bb13.bb44.bb987==0 ){bb1041=1 ;bbm(bb374&
0x01 ){bb2193(bb0,bb374);bb1041|=4 ;}}bbm((bb0->bb13.bb44.bb594==0 )||(
bb0->bb13.bb44.bb1997)){bbm(!(bb1041&1 )){bb1041=2 ;bbm(bb374&0x02 ){
bb2193(bb0,bb374);bb1041|=4 ;}}bb54{bb1041|=3 ;bbm((!(bb374&0x01 ))&&(
bb374&0x02 )){bb2193(bb0,bb374);bb1041|=4 ;}}}bb0->bb13.bb44.bb594+=15 ;
}bb54{bb1041=1 ;bbm(bb374&0x01 ){bb2193(bb0,bb374);bb1041|=4 ;}}bb0->
bb449->bb44=bb0->bb13.bb44; *bb1738=bb0->bb13.bb44.bb1751; *bb908=bb0
->bb13.bb44.bb987; *bb1732=bb0->bb13.bb44.bb1742; *bb604=bb0->bb13.
bb44.bb594;bb2(bb1041);}bb40 bbb bb2123(bb490 bb0){bb0->bb13.bb80.
bb2091&=(2048 -1 );bb0->bb13.bb80.bb1047=bb0->bb13.bb80.bb1149=bb0->
bb13.bb80.bb92=0 ;bb0->bb13.bb80.bb993=bb0->bb13.bb80.bb1756=bb0->bb13
.bb80.bb1145=0 ;bb0->bb13.bb80.bb464=0 ;bb0->bb13.bb80.bb1970=0 ;bb0->
bb13.bb80.bb1163=bb2082;bb0->bb13.bb80.bb2437=1 ;bb2;}bb40 bbk bb2280(
bb490 bb0){bbm((bb0->bb13.bb80.bb987==0 )&&(bb0->bb13.bb80.bb1047==0 ))bb0
->bb13.bb80.bb993=bb2373;bb54{bb0->bb13.bb80.bb993=bb1244;bbm(bb0->
bb13.bb80.bb1047==0 ){bb0->bb13.bb80.bb1756= *bb0->bb13.bb80.bb1751++;
--bb0->bb13.bb80.bb987;bb0->bb13.bb80.bb1047=7 ;bb0->bb13.bb80.bb1145=
(bb0->bb13.bb80.bb1756>127 )?1 :0 ;bb0->bb13.bb80.bb1756&=((bbf)0x7F );}
bb54{bb0->bb13.bb80.bb1145=(bb0->bb13.bb80.bb1756>>(bb0->bb13.bb80.
bb1047-1 ));--bb0->bb13.bb80.bb1047;bb0->bb13.bb80.bb1756&=((bbf)0xFF
>>(8 -bb0->bb13.bb80.bb1047));}}bb2(bb0->bb13.bb80.bb993);}bb40 bbk
bb1846(bb490 bb0){bbk bb2154;bb123 bb8;bbm(bb0->bb13.bb80.bb993==
bb1244)bb0->bb13.bb80.bb1145=0 ;bb54 bb0->bb13.bb80.bb993=bb1244;bb108
((bb0->bb13.bb80.bb1149>0 )&&(bb0->bb13.bb80.bb993==bb1244)){bbm((bb0
->bb13.bb80.bb987==0 )&&(bb0->bb13.bb80.bb1047==0 ))bb0->bb13.bb80.
bb993=bb2373;bb54{bbm(bb0->bb13.bb80.bb1047==0 ){bb0->bb13.bb80.bb1756
= *bb0->bb13.bb80.bb1751++;--bb0->bb13.bb80.bb987;bb0->bb13.bb80.
bb1047=8 ;}bb2154=bb0->bb13.bb80.bb1756;bbm((bb8=bb0->bb13.bb80.bb1149
-bb0->bb13.bb80.bb1047)>0 )bb2154<<=bb8;bb54 bb2154>>=-bb8;bb0->bb13.
bb80.bb1145|=bb2154;bb8=((((8 )<(bb0->bb13.bb80.bb1149)?(8 ):(bb0->bb13
.bb80.bb1149)))<(bb0->bb13.bb80.bb1047)?(((8 )<(bb0->bb13.bb80.bb1149)?
(8 ):(bb0->bb13.bb80.bb1149))):(bb0->bb13.bb80.bb1047));bb0->bb13.bb80
.bb1149-=bb8;bb0->bb13.bb80.bb1047-=bb8;bb0->bb13.bb80.bb1756&=((bbf)0xFF
>>(8 -bb0->bb13.bb80.bb1047));}}bb2(bb0->bb13.bb80.bb993);}bb40 bbb
bb2072(bb490 bb0,bbf bbo){bbm(bb0->bb13.bb80.bb594!=0 ){ *bb0->bb13.
bb80.bb1742++=bbo;--bb0->bb13.bb80.bb594;bb0->bb449->bb2163[bb0->bb13
.bb80.bb2091++]=(bbf)bbo;bb0->bb13.bb80.bb2091&=(2048 -1 );}}bbk bb2290
(bb490 bb0,bbf* *bb1738,bbf* *bb1732,bbd*bb908,bbd*bb604,bbb*bb1311,
bbk bb374){bbk bb2198=0 ;bbk bb1041=0 ;bb0->bb449=(bb2045* )bb1311;bb0
->bb13.bb80=bb0->bb449->bb80;bb0->bb13.bb80.bb1751= *bb1738;bb0->bb13
.bb80.bb987= *bb908;bb0->bb13.bb80.bb1742= *bb1732;bb0->bb13.bb80.
bb594= *bb604;bbm(bb374&0x01 ){bb2123(bb0);}bbm((bb0->bb13.bb80.bb987
!=0 )&&(bb0->bb13.bb80.bb594!=0 )){bb108((bb0->bb13.bb80.bb594!=0 )&&((
bb0->bb13.bb80.bb987!=0 )||(bb0->bb13.bb80.bb1047!=0 ))&&(bb2198==0 )){
bbm(bb0->bb13.bb80.bb1970){bb108((bb0->bb13.bb80.bb594!=0 )&&(bb0->
bb13.bb80.bb464>0 )){bb0->bb13.bb80.bb92&=(2048 -1 );bb2072(bb0,bb0->
bb449->bb2163[bb0->bb13.bb80.bb92++]);--bb0->bb13.bb80.bb464;}bbm(bb0
->bb13.bb80.bb464==0 )bb0->bb13.bb80.bb1970=0 ;bb0->bb13.bb80.bb1163=
bb2082;}bb54{bb298(bb0->bb13.bb80.bb1163){bb15 bb2082:bb2280(bb0);bbm
(bb0->bb13.bb80.bb1145==0 ){bb0->bb13.bb80.bb1149=8 ;bb0->bb13.bb80.
bb1163=bb2346;bb15 bb2346:bb1846(bb0);bbm(bb0->bb13.bb80.bb993==
bb1244){bb2072(bb0,(bbf)bb0->bb13.bb80.bb1145);bb0->bb13.bb80.bb1163=
bb2082;}}bb54{bb0->bb13.bb80.bb1163=bb2379;bb15 bb2379:bb2280(bb0);
bbm(bb0->bb13.bb80.bb993==bb1244){bb0->bb13.bb80.bb1149=bb0->bb13.
bb80.bb1145?7 :11 ;bb0->bb13.bb80.bb1163=bb2348;bb15 bb2348:bb1846(bb0);
bbm(bb0->bb13.bb80.bb993==bb1244){bb0->bb13.bb80.bb92=bb0->bb13.bb80.
bb1145;bbm(bb0->bb13.bb80.bb92==0 )bb2198=1 ;bb54{bb0->bb13.bb80.bb92=
bb0->bb13.bb80.bb2091-bb0->bb13.bb80.bb92;bb0->bb13.bb80.bb1149=2 ;bb0
->bb13.bb80.bb1163=bb2307;bb15 bb2307:bb1846(bb0);bbm(bb0->bb13.bb80.
bb993==bb1244){bb0->bb13.bb80.bb464=2 +bb0->bb13.bb80.bb1145;bbm(bb0->
bb13.bb80.bb464==5 ){bb0->bb13.bb80.bb1149=2 ;bb0->bb13.bb80.bb1163=
bb2306;bb15 bb2306:bb1846(bb0);bbm(bb0->bb13.bb80.bb993==bb1244){bb0
->bb13.bb80.bb464+=bb0->bb13.bb80.bb1145;bbm(bb0->bb13.bb80.bb464==8 ){
bb0->bb13.bb80.bb1149=4 ;bb0->bb13.bb80.bb1163=bb2420;bb15 bb2420:
bb1846(bb0);bbm(bb0->bb13.bb80.bb993==bb1244){bb0->bb13.bb80.bb464+=
bb0->bb13.bb80.bb1145;bbm(bb0->bb13.bb80.bb464==23 ){bb567{bb15 bb2234
:bb108((bb0->bb13.bb80.bb594!=0 )&&(bb0->bb13.bb80.bb464>0 )){bb0->bb13
.bb80.bb92&=(2048 -1 );bb2072(bb0,bb0->bb449->bb2163[bb0->bb13.bb80.
bb92++]);--bb0->bb13.bb80.bb464;}bbm(bb0->bb13.bb80.bb594==0 ){bb0->
bb13.bb80.bb1163=bb2234;bb22;}bb54{bb0->bb13.bb80.bb1149=4 ;bb0->bb13.
bb80.bb1163=bb2363;bb15 bb2363:bb1846(bb0);bbm(bb0->bb13.bb80.bb993==
bb1244)bb0->bb13.bb80.bb464+=bb0->bb13.bb80.bb1145;bb54 bb22;}}bb108(
bb0->bb13.bb80.bb1145==((1 <<4 )-1 ));}}}}}}bbm((bb0->bb13.bb80.bb993==
bb1244)&&(bb0->bb13.bb80.bb1163!=bb2234)){bb0->bb13.bb80.bb1970=1 ;}}}
}}}}}bbm(bb0->bb13.bb80.bb1970){bb108((bb0->bb13.bb80.bb594!=0 )&&(bb0
->bb13.bb80.bb464>0 )){bb0->bb13.bb80.bb92&=(2048 -1 );bb2072(bb0,bb0->
bb449->bb2163[bb0->bb13.bb80.bb92++]);--bb0->bb13.bb80.bb464;}bbm(bb0
->bb13.bb80.bb464==0 )bb0->bb13.bb80.bb1970=0 ;bb0->bb13.bb80.bb1163=
bb2082;}}bbm(bb2198){bb2123(bb0);bb1041|=4 ;}bbm(bb0->bb13.bb80.bb987
==0 ){bb1041|=1 ;}bbm(bb0->bb13.bb80.bb594==0 ){bb1041|=2 ;}bb0->bb449->
bb80=bb0->bb13.bb80; *bb1738=bb0->bb13.bb80.bb1751; *bb908=bb0->bb13.
bb80.bb987; *bb1732=bb0->bb13.bb80.bb1742; *bb604=bb0->bb13.bb80.
bb594;bb2(bb1041);}
