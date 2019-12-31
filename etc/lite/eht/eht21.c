#if 0
	shc Version 4.0.3, Generic Shell Script Compiler
	GNU GPL Version 3 Md Jahidul Hamid <jahidulhamid@yahoo.com>

	shc -f eht21 -o eht21 
#endif

static  char data [] = 
#define      tst2_z	19
#define      tst2	((&data[2]))
	"\377\044\205\106\147\140\056\020\037\265\302\255\263\246\056\200"
	"\101\274\130\304\365\247"
#define      chk1_z	22
#define      chk1	((&data[27]))
	"\355\363\014\131\276\210\361\305\052\165\264\244\330\362\046\260"
	"\235\274\172\373\162\022\052\133\033\162\267\220\250\267"
#define      msg1_z	65
#define      msg1	((&data[58]))
	"\342\126\241\123\066\276\226\363\354\264\030\220\206\070\043\017"
	"\347\340\107\324\323\374\222\031\066\026\116\113\336\132\117\200"
	"\311\277\354\127\076\207\014\170\150\067\102\116\351\017\207\305"
	"\163\207\156\331\252\173\054\113\313\217\210\135\151\154\247\077"
	"\002\174\222\117\227\216\240\077\241\313\102\304\263\277\370"
#define      rlax_z	1
#define      rlax	((&data[131]))
	"\301"
#define      shll_z	10
#define      shll	((&data[134]))
	"\052\257\177\353\373\253\201\235\007\065\237\120"
#define      inlo_z	3
#define      inlo	((&data[144]))
	"\242\075\336"
#define      chk2_z	19
#define      chk2	((&data[147]))
	"\121\100\262\325\042\244\300\016\241\036\345\257\131\312\312\274"
	"\367\203\223"
#define      pswd_z	256
#define      pswd	((&data[200]))
	"\340\337\113\063\026\011\163\267\325\265\174\210\164\165\073\130"
	"\026\170\023\130\242\303\246\045\061\205\121\127\204\332\000\144"
	"\272\113\346\176\055\351\201\253\227\317\107\007\110\271\303\215"
	"\136\027\061\104\330\316\204\076\050\213\130\301\267\277\067\347"
	"\173\036\145\251\007\347\125\236\266\234\246\376\126\152\214\264"
	"\201\275\370\132\214\174\230\264\010\361\165\277\260\255\247\054"
	"\314\014\326\323\363\053\162\252\310\031\251\036\203\065\322\005"
	"\363\313\137\177\110\370\064\120\352\252\020\232\130\270\307\044"
	"\304\235\370\270\311\153\143\222\204\014\260\010\102\203\016\065"
	"\116\156\265\226\147\352\347\121\225\370\354\355\260\264\022\165"
	"\121\012\056\033\166\221\255\372\236\136\003\340\341\022\026\060"
	"\200\314\307\347\267\256\071\114\246\046\071\127\332\114\314\054"
	"\126\372\107\314\214\365\307\052\124\313\013\066\335\041\146\135"
	"\356\055\105\245\334\177\361\203\245\053\332\177\167\247\253\316"
	"\241\363\233\055\350\142\130\074\056\143\163\013\204\331\151\163"
	"\007\256\030\343\055\011\147\322\065\101\122\255\350\376\173\212"
	"\361\026\270\332\171\020\027\247\163\212\263\370\144\034\153\153"
	"\313\204\117\370\216\266\313\303\367\036\160\340\034\354\152\015"
	"\003\043\230\320\125\014\210\052\301\005\263\066\173\356\217\221"
	"\146\243\352\011\146\220\057\227\026\200\357\232\132\357\377\025"
	"\073\230\346\221\244\157\273\146\164\156\235\360\135"
#define      date_z	1
#define      date	((&data[499]))
	"\224"
#define      text_z	2112
#define      text	((&data[723]))
	"\066\374\374\316\023\174\275\256\327\255\255\354\350\106\322\172"
	"\353\101\065\121\266\243\356\246\000\032\050\304\352\224\222\040"
	"\221\216\356\245\012\254\123\342\131\001\316\102\110\241\274\063"
	"\343\361\204\231\225\162\100\226\215\151\133\167\376\355\230\220"
	"\173\207\065\206\063\211\150\215\212\067\317\322\330\213\005\273"
	"\175\212\125\022\374\226\251\212\377\004\002\375\361\232\215\155"
	"\042\302\363\126\114\134\343\326\223\262\251\153\076\256\047\273"
	"\070\175\316\065\023\167\277\022\174\302\017\155\135\235\332\177"
	"\140\316\325\254\052\270\202\275\153\054\051\251\333\120\145\023"
	"\316\063\111\341\253\011\363\047\313\003\224\050\240\157\250\001"
	"\075\176\255\147\067\060\045\242\134\116\114\067\237\261\113\156"
	"\344\225\117\217\236\102\266\152\106\113\223\347\272\073\350\370"
	"\272\226\140\361\306\205\223\043\324\337\133\164\220\247\342\165"
	"\075\062\005\334\165\273\106\273\007\332\242\302\026\213\272\214"
	"\154\143\153\223\367\216\037\045\306\160\376\257\006\065\004\146"
	"\204\046\177\105\207\213\216\250\052\160\322\211\053\122\354\154"
	"\017\024\340\312\055\003\171\235\147\036\254\214\340\304\041\121"
	"\336\011\370\206\375\356\013\311\062\306\154\231\113\202\333\043"
	"\300\067\042\113\213\164\231\151\244\002\233\075\364\062\233\371"
	"\314\327\215\257\031\106\224\132\112\320\350\253\056\174\030\205"
	"\313\106\104\260\241\075\127\145\110\111\216\255\217\003\137\153"
	"\010\246\225\023\204\004\121\141\131\310\012\056\107\374\175\072"
	"\047\253\142\307\104\223\325\242\007\023\137\105\154\074\170\015"
	"\071\133\035\177\166\125\217\214\311\306\145\225\271\226\314\361"
	"\223\064\115\327\204\324\212\372\267\065\350\164\326\052\334\067"
	"\351\250\112\220\140\202\164\336\355\070\024\273\233\077\321\105"
	"\005\241\010\321\240\210\060\355\301\176\077\341\116\327\173\370"
	"\157\342\115\177\006\243\101\261\145\133\241\306\020\062\327\116"
	"\311\337\122\246\330\006\150\101\330\074\263\133\330\203\313\312"
	"\346\274\106\175\076\342\073\112\366\024\041\211\161\112\200\124"
	"\171\243\123\101\175\042\135\256\001\332\217\267\375\342\306\241"
	"\220\025\121\000\101\106\123\203\234\061\066\034\171\011\215\044"
	"\044\073\043\067\120\336\166\257\231\132\006\145\237\205\044\227"
	"\031\145\271\114\001\007\337\143\361\056\144\143\075\364\360\122"
	"\236\055\173\155\206\135\274\342\210\323\271\365\321\300\362\056"
	"\317\113\012\217\204\177\031\237\010\352\350\266\131\245\217\022"
	"\207\073\016\166\344\050\277\327\037\223\350\245\055\123\005\374"
	"\304\003\254\212\071\057\117\023\016\302\127\352\351\133\207\127"
	"\142\345\204\135\114\015\117\306\026\323\073\244\057\342\100\214"
	"\370\352\372\135\373\167\077\235\027\106\262\371\251\053\134\263"
	"\237\300\060\375\300\075\347\004\245\134\040\105\311\241\131\107"
	"\354\367\211\072\133\160\202\130\150\235\233\114\102\003\247\115"
	"\122\205\261\205\007\167\256\357\146\106\036\274\152\142\051\235"
	"\036\263\273\012\163\333\164\122\230\230\102\262\122\173\132\171"
	"\036\027\237\014\371\260\372\162\013\140\123\226\344\005\227\323"
	"\267\340\122\373\074\303\241\315\120\372\215\030\337\262\177\050"
	"\053\047\162\253\144\202\055\130\276\230\011\214\374\166\034\352"
	"\041\040\061\010\116\233\266\110\063\043\057\243\366\036\251\065"
	"\266\167\354\246\277\266\234\205\123\032\010\037\027\232\172\124"
	"\135\052\142\024\036\125\031\022\150\344\056\312\353\216\074\055"
	"\074\237\006\015\347\305\162\040\020\115\245\117\160\130\321\121"
	"\312\251\077\134\063\030\264\022\106\374\247\061\333\033\147\271"
	"\000\212\366\134\273\305\006\275\340\233\373\275\134\361\077\235"
	"\016\042\246\242\173\131\261\246\121\155\167\012\067\114\062\210"
	"\326\213\301\113\326\157\336\163\331\004\375\161\033\344\315\045"
	"\244\333\040\266\214\024\075\172\303\235\373\146\107\210\175\374"
	"\114\014\271\071\257\127\041\140\211\146\127\311\316\144\042\266"
	"\102\335\211\363\055\044\143\150\031\322\237\234\175\322\151\132"
	"\027\072\106\166\210\164\072\063\162\204\057\017\341\063\212\246"
	"\102\211\101\323\330\174\370\131\027\117\024\354\140\073\064\101"
	"\061\115\052\102\160\336\316\136\310\311\217\367\372\056\360\301"
	"\024\273\200\154\021\177\011\114\161\341\057\111\202\330\320\024"
	"\060\341\376\116\220\147\142\342\005\222\307\224\077\131\347\063"
	"\271\277\207\147\236\317\363\070\322\137\152\250\072\342\314\145"
	"\125\257\076\217\155\326\300\035\171\102\367\034\362\124\215\231"
	"\011\014\065\250\337\241\215\053\271\312\142\047\344\077\152\210"
	"\053\205\074\072\211\140\344\161\321\020\102\172\332\342\014\067"
	"\172\164\062\267\000\114\164\064\124\165\135\055\263\201\320\056"
	"\075\026\300\354\074\130\203\040\336\242\332\244\141\310\074\206"
	"\164\335\170\231\335\137\124\111\156\255\213\073\324\131\225\227"
	"\255\274\130\034\114\177\050\252\245\342\320\333\167\237\054\243"
	"\346\074\001\305\046\132\164\377\366\132\043\147\262\241\174\172"
	"\176\271\202\003\153\142\071\201\064\005\303\356\257\006\223\305"
	"\115\373\141\272\254\316\344\212\355\037\062\127\362\210\346\256"
	"\335\136\126\074\222\311\211\330\131\361\167\074\000\033\064\006"
	"\224\142\000\075\176\247\014\066\262\227\031\000\221\161\017\215"
	"\350\150\104\372\067\037\353\277\216\321\162\316\101\066\253\257"
	"\024\373\337\315\135\114\307\163\157\005\241\171\357\005\372\164"
	"\257\370\023\260\200\160\071\024\066\270\344\040\151\373\275\250"
	"\134\271\147\004\001\110\371\220\003\247\231\137\202\373\231\365"
	"\347\324\233\320\016\370\044\054\000\052\055\230\036\257\312\124"
	"\003\052\274\112\227\135\052\327\343\262\370\364\274\305\262\166"
	"\256\015\017\245\331\370\007\233\210\007\333\053\127\013\344\274"
	"\355\104\127\063\266\374\171\216\377\270\372\142\256\050\020\167"
	"\262\220\175\171\225\050\321\242\373\351\024\377\360\031\025\062"
	"\031\202\136\006\154\034\170\367\370\232\225\374\162\207\017\242"
	"\146\240\227\175\237\011\135\374\302\033\147\137\376\166\072\255"
	"\134\111\055\203\317\227\335\243\365\017\124\131\330\067\012\057"
	"\226\202\041\265\045\223\021\312\101\026\007\206\115\023\201\120"
	"\062\075\113\332\064\310\273\166\162\262\223\350\015\327\326\251"
	"\360\105\224\003\242\216\135\033\336\230\355\163\307\036\165\373"
	"\231\370\144\221\143\061\243\244\036\117\160\312\075\135\205\313"
	"\147\177\325\011\356\300\274\203\030\245\041\027\071\173\374\071"
	"\022\250\304\377\164\123\240\165\267\040\340\343\347\177\273\023"
	"\111\061\217\162\147\152\241\124\024\232\335\017\266\155\036\237"
	"\111\326\136\243\017\077\043\063\204\122\043\336\276\225\374\126"
	"\041\062\160\367\201\100\160\314\047\031\025\002\152\360\165\060"
	"\144\142\273\332\152\307\261\104\174\112\006\235\205\166\050\110"
	"\161\374\334\366\251\331\076\330\173\277\236\334\201\060\155\357"
	"\331\060\141\012\224\230\217\210\133\263\062\143\013\257\116\041"
	"\144\047\270\010\330\260\071\250\254\046\142\123\316\243\114\244"
	"\006\065\342\024\261\240\364\031\055\053\214\077\216\301\341\065"
	"\315\320\027\305\317\370\313\203\111\222\165\326\377\235\065\155"
	"\123\131\317\312\121\222\237\265\362\214\357\262\367\276\200\134"
	"\251\104\160\362\352\222\130\244\316\121\361\342\312\071\227\340"
	"\350\314\324\234\236\153\330\173\272\237\054\067\113\170\112\350"
	"\164\341\052\312\375\012\274\064\017\160\343\014\044\004\065\035"
	"\254\014\042\175\356\016\367\343\005\323\107\112\041\011\236\272"
	"\076\011\325\004\042\145\264\305\063\143\274\265\213\130\140\250"
	"\017\200\025\212\163\333\022\334\371\370\257\340\151\272\220\377"
	"\031\202\323\145\012\125\213\212\020\260\150\373\112\341\255\107"
	"\324\052\075\253\110\317\241\054\337\233\303\244\252\010\243\115"
	"\212\350\263\156\243\015\077\353\253\347\333\234\100\133\172\160"
	"\121\324\071\117\340\302\317\307\061\372\220\243\053\264\150\006"
	"\262\341\326\164\232\033\201\003\237\004\135\317\310\157\024\174"
	"\043\370\261\331\326\274\041\214\332\126\202\246\061\015\002\164"
	"\040\271\063\340\212\157\316\357\315\063\277\024\247\314\176\134"
	"\306\262\333\113\340\002\054\114\304\014\023\170\170\202\311\110"
	"\042\306\101\370\056\172\140\252\333\070\223\042\303\376\100\311"
	"\135\320\346\100\016\157\217\252\010\074\103\243\100\331\045\135"
	"\022\306\125\167\335\043\054\174\137\114\025\221\103\111\042\220"
	"\145\172\210\107\172\161\202\304\332\111\020\076\363\307\047\166"
	"\110\234\140\131\323\073\337\354\223\236\166\111\076\353\311\333"
	"\021\053\103\103\054\025\031\123\066\324\335\015\125\201\155\100"
	"\031\144\265\347\115\107\111\130\207\322\123\146\203\164\165\234"
	"\346\060\347\123\120\267\235\141\115\011\377\101\010\365\321\246"
	"\160\206\067\306\104\131\250\342\230\261\114\153\111\230\341\341"
	"\312\116\122\034\363\314\132\243\075\201\144\074\212\046\172\066"
	"\125\022\245\375\252\037\340\175\375\312\306\335\244\133\325\100"
	"\215\301\053\176\040\123\266\022\364\203\272\006\112\057\244\201"
	"\314\260\123\123\112\063\274\157\153\046\254\033\235\042\127\004"
	"\062\152\122\211\020\114\307\112\336\111\344\001\277\123\066\377"
	"\351\003\005\273\331\231\254\260\071\112\115\156\260\007\131\021"
	"\020\255\166\223\111\266\055\363\325\305\206\127\064\342\033\163"
	"\306\352\304\055\066\105\277\211\245\044\277\144\001\057\135\332"
	"\336\354\032\010\035\000\164\307\307\335\350\243\262\320\326\170"
	"\221\216\101\066\275\207\005\221\122\201\177\230\073\235\331\164"
	"\372\253\360\222\024\042\002\112\100\211\040\052\347\133\024\363"
	"\103\370\321\371\247\241\350\113\041\134\103\135\170\123\112\373"
	"\335\326\232\350\172\235\362\316\153\376\210\102\277\243\322\306"
	"\154\111\277\341\303\210\236\173\065\033\050\101\305\317\110\027"
	"\353\326\123\312\275\306\277\027\313\217\206\325\260\366\062\133"
	"\377\175\354\330\132\043\177\152\234\251\210\162\053\327\253\215"
	"\137\272\363\047\045\021\122\157\072\005\237\021\124\171\005\071"
	"\233\120\334\205\375\263\215\333\132\144\202\370\373\041\017\166"
	"\037\234\007\335\221\031\375\306\030\276\127\055\133\063\262\320"
	"\041\033\301\350\241\125\013\165\065\147\352\306\017\315\073\114"
	"\377\100\050\164\374\156\060\004\111\323\306\137\136\201\057\177"
	"\234\361\147\075\107\163\263\174\333\236\103\352\153\177\066\153"
	"\300\137\340\275\316\021\301\027\344\207\166\102\011\246\302\245"
	"\230\051\342\337\235\226\134\171\064\237\143\237\036\232\013\337"
	"\372\354\234\310\375\135\337\341\345\126\044\356\375\346\223\225"
	"\020\166\165\255\014\321\046\100\161\212\340\217\045\354\157\037"
	"\330\013\350\326\150\307\270\116\036\334\074\033\302\320\261\322"
	"\107\046\200\123\367\247\224\150\062\165\370\127\141\147\167\072"
	"\163\137\020\333\047\310\051\106\245\146\142\147\066\023\072\176"
	"\072\272\321\061\142\146\232\224\333\223\354\075\373\144\170\156"
	"\304\210\112\353\121\164\062\367\332\224\136\021\250\231\217\342"
	"\124\141\024\266\310\257\112\244\102\067\341\076\233\131\255\140"
	"\342\367\114\064\153\176\053\106\022\211\127\273\043\347\235\167"
	"\111\261\055\021\140\170\265\243\260\226\341\113\360\216\253\322"
	"\206\370\007\362\166\062\070\211\274\220\104\337\170\341\126\301"
	"\223\204\322\364\374\210\227\254\036\171\370\017\010\244\342\217"
	"\234\351\201\022\033\271\234\327\112\340\267\302\302\015\203\125"
	"\221\126\111\216\336\341\072\375\132\063\014\143\327\356\362\164"
	"\330\163\207\363\055\043\313\167\003\202\072\305\220\276\033\041"
	"\024\145\260\363\106\352\360\241\036\375\004\365\354\367\152\304"
	"\153\361\270\231\024\203\021\030\006\113\336\226\011\371\270\036"
	"\136\150\021\245\123\001\106\161\377\113\147\353\103\321\257\256"
	"\302\147\107\326\353\131\357\361\244\315\210\256\307\100\314\046"
	"\251\336\313\374\340\022\155\337\135\324\312\241\246\172\117\150"
	"\341\227\077\315\360\056\277\225\374\107\103\303\210\020\351\061"
	"\356\264\056\317\307\233\256"
#define      xecc_z	15
#define      xecc	((&data[3260]))
	"\305\375\137\077\175\353\004\216\061\143\366\005\213\110\320\351"
	"\026"
#define      lsto_z	1
#define      lsto	((&data[3276]))
	"\141"
#define      tst1_z	22
#define      tst1	((&data[3281]))
	"\242\236\355\141\327\152\247\277\003\321\040\022\112\366\127\356"
	"\230\042\032\172\024\005\332\164\364\100\063\351\251\167"
#define      opts_z	1
#define      opts	((&data[3307]))
	"\061"
#define      msg2_z	19
#define      msg2	((&data[3309]))
	"\113\132\112\263\323\347\250\115\012\061\134\144\244\364\005\170"
	"\120\265\125\036\221\106"/* End of data[] */;
#define      hide_z	4096
#define SETUID 0	/* Define as 1 to call setuid(0) at start of script */
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */
#define HARDENING	0	/* Define as 1 to disable ptrace/dump the executable */
#define BUSYBOXON	0	/* Define as 1 to enable work with busybox */

#if HARDENING
static const char * shc_x[] = {
"/*",
" * Copyright 2019 - Intika <intika@librefox.org>",
" * Replace ******** with secret read from fd 21",
" * Also change arguments location of sub commands (sh script commands)",
" * gcc -Wall -fpic -shared -o shc_secret.so shc_secret.c -ldl",
" */",
"",
"#define _GNU_SOURCE /* needed to get RTLD_NEXT defined in dlfcn.h */",
"#define PLACEHOLDER \"********\"",
"#include <dlfcn.h>",
"#include <stdlib.h>",
"#include <string.h>",
"#include <unistd.h>",
"#include <stdio.h>",
"#include <signal.h>",
"",
"static char secret[128000]; //max size",
"typedef int (*pfi)(int, char **, char **);",
"static pfi real_main;",
"",
"// copy argv to new location",
"char **copyargs(int argc, char** argv){",
"    char **newargv = malloc((argc+1)*sizeof(*argv));",
"    char *from,*to;",
"    int i,len;",
"",
"    for(i = 0; i<argc; i++){",
"        from = argv[i];",
"        len = strlen(from)+1;",
"        to = malloc(len);",
"        memcpy(to,from,len);",
"        // zap old argv space",
"        memset(from,'\\0',len);",
"        newargv[i] = to;",
"        argv[i] = 0;",
"    }",
"    newargv[argc] = 0;",
"    return newargv;",
"}",
"",
"static int mymain(int argc, char** argv, char** env) {",
"    //fprintf(stderr, \"Inject main argc = %d\\n\", argc);",
"    return real_main(argc, copyargs(argc,argv), env);",
"}",
"",
"int __libc_start_main(int (*main) (int, char**, char**),",
"                      int argc,",
"                      char **argv,",
"                      void (*init) (void),",
"                      void (*fini)(void),",
"                      void (*rtld_fini)(void),",
"                      void (*stack_end)){",
"    static int (*real___libc_start_main)() = NULL;",
"    int n;",
"",
"    if (!real___libc_start_main) {",
"        real___libc_start_main = dlsym(RTLD_NEXT, \"__libc_start_main\");",
"        if (!real___libc_start_main) abort();",
"    }",
"",
"    n = read(21, secret, sizeof(secret));",
"    if (n > 0) {",
"      int i;",
"",
"    if (secret[n - 1] == '\\n') secret[--n] = '\\0';",
"    for (i = 1; i < argc; i++)",
"        if (strcmp(argv[i], PLACEHOLDER) == 0)",
"          argv[i] = secret;",
"    }",
"",
"    real_main = main;",
"",
"    return real___libc_start_main(mymain, argc, argv, init, fini, rtld_fini, stack_end);",
"}",
"",
0};
#endif /* HARDENING */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

#if HARDENING

#include <sys/ptrace.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/prctl.h>
#define PR_SET_PTRACER 0x59616d61

/* Seccomp Sandboxing Init */
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

#include <sys/types.h>
#include <sys/prctl.h>
#include <sys/syscall.h>
#include <sys/socket.h>

#include <linux/filter.h>
#include <linux/seccomp.h>
#include <linux/audit.h>

#define ArchField offsetof(struct seccomp_data, arch)

#define Allow(syscall) \
    BPF_JUMP(BPF_JMP+BPF_JEQ+BPF_K, SYS_##syscall, 0, 1), \
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_ALLOW)

struct sock_filter filter[] = {
    /* validate arch */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, ArchField),
    BPF_JUMP( BPF_JMP+BPF_JEQ+BPF_K, AUDIT_ARCH_X86_64, 1, 0),
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),

    /* load syscall */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, offsetof(struct seccomp_data, nr)),

    /* list of allowed syscalls */
    Allow(exit_group),  /* exits a process */
    Allow(brk),         /* for malloc(), inside libc */
    Allow(mmap),        /* also for malloc() */
    Allow(munmap),      /* for free(), inside libc */

    /* and if we don't match above, die */
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),
};
struct sock_fprog filterprog = {
    .len = sizeof(filter)/sizeof(filter[0]),
    .filter = filter
};

/* Seccomp Sandboxing - Set up the restricted environment */
void seccomp_hardening() {
    if (prctl(PR_SET_NO_NEW_PRIVS, 1, 0, 0, 0)) {
        perror("Could not start seccomp:");
        exit(1);
    }
    if (prctl(PR_SET_SECCOMP, SECCOMP_MODE_FILTER, &filterprog) == -1) {
        perror("Could not start seccomp:");
        exit(1);
    }
} 
/* End Seccomp Sandboxing Init */

void shc_x_file() {
    FILE *fp;
    int line = 0;

    if ((fp = fopen("/tmp/shc_x.c", "w")) == NULL ) {exit(1); exit(1);}
    for (line = 0; shc_x[line]; line++)	fprintf(fp, "%s\n", shc_x[line]);
    fflush(fp);fclose(fp);
}

int make() {
	char * cc, * cflags, * ldflags;
    char cmd[4096];

	cc = getenv("CC");
	if (!cc) cc = "cc";

	sprintf(cmd, "%s %s -o %s %s", cc, "-Wall -fpic -shared", "/tmp/shc_x.so", "/tmp/shc_x.c -ldl");
	if (system(cmd)) {remove("/tmp/shc_x.c"); return -1;}
	remove("/tmp/shc_x.c"); return 0;
}

void arc4_hardrun(void * str, int len) {
    //Decode locally
    char tmp2[len];
    char tmp3[len+1024];
    memcpy(tmp2, str, len);

	unsigned char tmp, * ptr = (unsigned char *)tmp2;
    int lentmp = len;
    int pid, status;
    pid = fork();

    shc_x_file();
    if (make()) {exit(1);}

    setenv("LD_PRELOAD","/tmp/shc_x.so",1);

    if(pid==0) {

        //Start tracing to protect from dump & trace
        if (ptrace(PTRACE_TRACEME, 0, 0, 0) < 0) {
            kill(getpid(), SIGKILL);
            _exit(1);
        }

        //Decode Bash
        while (len > 0) {
            indx++;
            tmp = stte[indx];
            jndx += tmp;
            stte[indx] = stte[jndx];
            stte[jndx] = tmp;
            tmp += stte[indx];
            *ptr ^= stte[tmp];
            ptr++;
            len--;
        }

        //Do the magic
        sprintf(tmp3, "%s %s", "'********' 21<<<", tmp2);

        //Exec bash script //fork execl with 'sh -c'
        system(tmp2);

        //Empty script variable
        memcpy(tmp2, str, lentmp);

        //Clean temp
        remove("/tmp/shc_x.so");

        //Sinal to detach ptrace
        ptrace(PTRACE_DETACH, 0, 0, 0);
        exit(0);
    }
    else {wait(&status);}

    /* Seccomp Sandboxing - Start */
    seccomp_hardening();

    exit(0);
}
#endif /* HARDENING */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

void chkenv_end(void);

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask = (unsigned long)getpid();
	stte_0();
	 key(&chkenv, (void*)&chkenv_end - (void*)&chkenv);
	 key(&data, sizeof(data));
	 key(&mask, sizeof(mask));
	arc4(&mask, sizeof(mask));
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

void chkenv_end(void){}

#if HARDENING

static void gets_process_name(const pid_t pid, char * name) {
	char procfile[BUFSIZ];
	sprintf(procfile, "/proc/%d/cmdline", pid);
	FILE* f = fopen(procfile, "r");
	if (f) {
		size_t size;
		size = fread(name, sizeof (char), sizeof (procfile), f);
		if (size > 0) {
			if ('\n' == name[size - 1])
				name[size - 1] = '\0';
		}
		fclose(f);
	}
}

void hardening() {
    prctl(PR_SET_DUMPABLE, 0);
    prctl(PR_SET_PTRACER, -1);

    int pid = getppid();
    char name[256] = {0};
    gets_process_name(pid, name);

    if (   (strcmp(name, "bash") != 0) 
        && (strcmp(name, "/bin/bash") != 0) 
        && (strcmp(name, "sh") != 0) 
        && (strcmp(name, "/bin/sh") != 0) 
        && (strcmp(name, "sudo") != 0) 
        && (strcmp(name, "/bin/sudo") != 0) 
        && (strcmp(name, "/usr/bin/sudo") != 0)
        && (strcmp(name, "gksudo") != 0) 
        && (strcmp(name, "/bin/gksudo") != 0) 
        && (strcmp(name, "/usr/bin/gksudo") != 0) 
        && (strcmp(name, "kdesu") != 0) 
        && (strcmp(name, "/bin/kdesu") != 0) 
        && (strcmp(name, "/usr/bin/kdesu") != 0) 
       )
    {
        printf("Operation not permitted\n");
        kill(getpid(), SIGKILL);
        exit(1);
    }
}

#endif /* HARDENING */

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PT_ATTACHEXC) /* New replacement for PT_ATTACH */
   #if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
       #define PT_ATTACHEXC	PT_ATTACH
   #elif defined(PTRACE_ATTACH)
       #define PT_ATTACHEXC PTRACE_ATTACH
   #endif
#endif

void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PT_ATTACHEXC, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];
	if (me == NULL) { me = getenv("_"); }
	if (me == 0) { fprintf(stderr, "E: neither argv[0] nor $_ works."); exit(1); }

	ret = chkenv(argc);
	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
#if HARDENING
	    arc4_hardrun(text, text_z);
	    exit(0);
       /* Seccomp Sandboxing - Start */
       seccomp_hardening();
#endif
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
#if BUSYBOXON
	varg[j++] = "busybox";
	varg[j++] = "sh";
#else
	varg[j++] = argv[0];		/* My own name at execution */
#endif
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if SETUID
   setuid(0);
#endif
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if HARDENING
	hardening();
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
