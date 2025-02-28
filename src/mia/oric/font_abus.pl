#!/usr/bin/perl
use JSON;

#my $bitfontmaker2_json = <DATA>;

my $hash_ref = decode_json(<DATA>);
printf ("// Font %s by %s\n", ${$hash_ref}{'name'},${$hash_ref}{'copy'});
print ("const unsigned char __in_flash() font_6x8[] = {\n");
for(my $i=32; $i<=127; $i++){
    printf("//<%c>\n", $i);
    my $arr_ref = ${$hash_ref}{$i};
    my @reversed = map(unpack('C', pack('B8',unpack('b8',pack('C',$_)))),@{$arr_ref}[5 .. 12]);
    my @glyph = map(sprintf("0x%02X",$_), @reversed);
#    foreach my $line (@glyph){
#        printf "\$%02X, ", $line>>2;
#    }
    print join(", ",@glyph);
    print ",\n";
}
print ("};");
__DATA__
{"33":[0,0,0,0,0,16,16,16,16,16,0,16,0,0,0,0],"34":[0,0,0,0,0,40,40,40,0,0,0,0,0,0,0,0],"35":[0,0,0,0,0,0,40,124,40,124,40,0,0,0,0,0],"36":[0,0,0,0,0,16,56,8,56,32,56,16,0,0,0,0],"37":[0,0,0,0,0,12,76,32,16,8,100,96,0,0,0,0],"38":[0,0,0,0,0,24,36,20,8,84,36,88,0,0,0,0],"39":[0,0,0,0,0,24,24,8,0,0,0,0,0,0,0,0],"40":[0,0,0,0,0,32,16,8,8,8,16,32,0,0,0,0],"41":[0,0,0,0,0,8,16,32,32,32,16,8,0,0,0,0],"42":[0,0,0,0,0,0,16,124,56,124,16,0,0,0,0,0],"43":[0,0,0,0,0,0,16,16,124,16,16,0,0,0,0,0],"44":[0,0,0,0,0,0,0,0,0,0,48,48,16,0,0,0],"45":[0,0,0,0,0,0,0,0,124,0,0,0,0,0,0,0],"46":[0,0,0,0,0,0,0,0,0,0,48,48,0,0,0,0],"47":[0,0,0,0,0,64,64,32,32,16,16,8,8,0,0,0],"48":[0,0,0,0,0,48,72,72,72,72,72,48,0,0,0,0],"49":[0,0,0,0,0,16,24,16,16,16,16,56,0,0,0,0],"50":[0,0,0,0,0,56,68,64,32,16,8,124,0,0,0,0],"51":[0,0,0,0,0,124,64,48,64,64,32,28,0,0,0,0],"52":[0,0,0,0,0,16,8,40,36,124,32,32,0,0,0,0],"53":[0,0,0,0,0,124,4,60,64,64,32,28,0,0,0,0],"54":[0,0,0,0,0,48,8,4,60,68,68,56,0,0,0,0],"55":[0,0,0,0,0,124,64,32,32,16,16,16,0,0,0,0],"56":[0,0,0,0,0,56,68,68,56,68,68,56,0,0,0,0],"57":[0,0,0,0,0,56,68,68,120,64,32,24,0,0,0,0],"58":[0,0,0,0,0,0,48,48,0,48,48,0,0,0,0,0],"59":[0,0,0,0,0,0,48,48,0,48,48,16,0,0,0,0],"60":[0,0,0,0,0,64,32,16,8,16,32,64,0,0,0,0],"61":[0,0,0,0,0,0,0,124,0,124,0,0,0,0,0,0],"62":[0,0,0,0,0,8,16,32,64,32,16,8,0,0,0,0],"63":[0,0,0,0,0,56,68,64,32,16,0,16,0,0,0,0],"64":[0,0,0,0,0,56,68,116,84,84,116,4,56,0,0,0],"65":[0,0,0,0,0,16,16,40,40,124,68,68,0,0,0,0],"66":[0,0,0,0,0,60,68,68,60,68,68,60,0,0,0,0],"67":[0,0,0,0,0,48,72,4,4,4,72,48,0,0,0,0],"68":[0,0,0,0,0,28,36,68,68,68,36,28,0,0,0,0],"69":[0,0,0,0,0,124,4,4,60,4,4,124,0,0,0,0],"70":[0,0,0,0,0,124,4,4,60,4,4,4,0,0,0,0],"71":[0,0,0,0,0,56,68,4,116,68,68,56,0,0,0,0],"72":[0,0,0,0,0,68,68,68,124,68,68,68,0,0,0,0],"73":[0,0,0,0,0,124,16,16,16,16,16,124,0,0,0,0],"74":[0,0,0,0,0,120,64,64,64,68,68,56,0,0,0,0],"75":[0,0,0,0,0,68,36,20,12,20,36,68,0,0,0,0],"76":[0,0,0,0,0,4,4,4,4,4,4,124,0,0,0,0],"77":[0,0,0,0,0,68,108,108,84,84,68,68,0,0,0,0],"78":[0,0,0,0,0,68,76,76,84,100,100,68,0,0,0,0],"79":[0,0,0,0,0,56,68,68,68,68,68,56,0,0,0,0],"80":[0,0,0,0,0,60,68,68,68,60,4,4,0,0,0,0],"81":[0,0,0,0,0,56,68,68,68,84,36,88,0,0,0,0],"82":[0,0,0,0,0,60,68,68,60,20,36,68,0,0,0,0],"83":[0,0,0,0,0,56,68,8,16,32,68,56,0,0,0,0],"84":[0,0,0,0,0,124,16,16,16,16,16,16,0,0,0,0],"85":[0,0,0,0,0,68,68,68,68,68,68,56,0,0,0,0],"86":[0,0,0,0,0,68,68,68,40,40,16,16,0,0,0,0],"87":[0,0,0,0,0,68,68,84,84,40,40,40,0,0,0,0],"88":[0,0,0,0,0,68,68,40,16,40,68,68,0,0,0,0],"89":[0,0,0,0,0,68,40,40,16,16,16,16,0,0,0,0],"90":[0,0,0,0,0,124,32,32,16,8,8,124,0,0,0,0],"91":[0,0,0,0,0,120,8,8,8,8,8,120,0,0,0,0],"92":[0,0,0,0,0,8,8,16,16,32,32,64,64,0,0,0],"93":[0,0,0,0,0,120,64,64,64,64,64,120,0,0,0,0],"94":[0,0,0,0,0,16,40,68,0,0,0,0,0,0,0,0],"95":[0,0,0,0,0,0,0,0,0,0,0,0,124,0,0,0],"96":[0,0,0,0,0,16,16,16,0,0,0,0,0,0,0,0],"97":[0,0,0,0,0,0,0,56,64,120,68,120,0,0,0,0],"98":[0,0,0,0,0,4,4,60,68,68,68,60,0,0,0,0],"99":[0,0,0,0,0,0,0,56,68,4,68,56,0,0,0,0],"100":[0,0,0,0,0,64,64,120,68,68,68,120,0,0,0,0],"101":[0,0,0,0,0,0,0,56,68,124,4,120,0,0,0,0],"102":[0,0,0,0,0,112,8,60,8,8,8,8,0,0,0,0],"103":[0,0,0,0,0,0,0,120,68,68,120,64,56,0,0,0],"104":[0,0,0,0,0,4,4,52,76,68,68,68,0,0,0,0],"105":[0,0,0,0,0,8,0,12,8,8,72,48,0,0,0,0],"106":[0,0,0,0,0,32,0,48,32,32,32,36,24,0,0,0],"107":[0,0,0,0,0,4,4,68,36,28,36,68,0,0,0,0],"108":[0,0,0,0,0,12,8,8,8,8,72,48,0,0,0,0],"109":[0,0,0,0,0,0,0,84,124,84,84,84,0,0,0,0],"110":[0,0,0,0,0,0,0,52,76,68,68,68,0,0,0,0],"111":[0,0,0,0,0,0,0,56,68,68,68,56,0,0,0,0],"112":[0,0,0,0,0,0,0,60,68,68,60,4,4,0,0,0],"113":[0,0,0,0,0,0,0,120,68,68,120,64,64,0,0,0],"114":[0,0,0,0,0,0,0,116,76,4,4,4,0,0,0,0],"115":[0,0,0,0,0,0,0,56,76,16,100,56,0,0,0,0],"116":[0,0,0,0,0,8,8,60,8,8,72,48,0,0,0,0],"117":[0,0,0,0,0,0,0,68,68,68,100,88,0,0,0,0],"118":[0,0,0,0,0,0,0,68,40,40,16,16,0,0,0,0],"119":[0,0,0,0,0,0,0,68,84,84,40,40,0,0,0,0],"120":[0,0,0,0,0,0,0,68,40,16,40,68,0,0,0,0],"121":[0,0,0,0,0,0,0,68,40,40,16,16,12,0,0,0],"122":[0,0,0,0,0,0,0,124,32,16,8,124,0,0,0,0],"123":[0,0,0,0,0,112,16,16,28,16,16,112,0,0,0,0],"124":[0,0,0,0,0,16,16,16,16,16,16,16,16,0,0,0],"125":[0,0,0,0,0,28,16,16,112,16,16,28,0,0,0,0],"126":[0,0,0,0,0,0,0,88,36,0,0,0,0,0,0,0],"127":[0,0,0,0,0,252,252,252,252,252,252,252,252,0,0,0],"161":[0,0,0,0,0,16,0,16,16,16,16,16,0,0,0,0],"162":[0,0,0,0,0,16,16,56,8,56,16,16,0,0,0,0],"163":[0,0,0,0,0,48,8,8,28,8,8,124,0,0,0,0],"164":[0,0,0,0,0,0,68,56,40,56,68,0,0,0,0,0],"165":[0,0,0,0,0,68,68,40,16,124,16,16,0,0,0,0],"166":[0,0,0,0,0,16,16,16,0,0,16,16,16,0,0,0],"167":[0,0,0,0,0,120,8,120,72,120,64,120,0,0,0,0],"168":[0,0,0,0,0,108,108,0,0,0,0,0,0,0,0,0],"169":[0,0,0,0,0,56,68,84,76,84,68,56,0,0,0,0],"8364":[0,0,0,0,0,48,72,28,8,28,72,48,0,0,0,0],"name":"LociAbus","copy":"Sodiumlightbaby","letterspace":"64","basefont_size":"512","basefont_left":"62","basefont_top":"0","basefont":"Arial","basefont2":"","monospace":true,"monospacewidth":"6"}