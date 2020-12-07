package main;

import "core:fmt";


// type test

//typeid type
a : typeid;

//array type
// TODO(lucypero): #partial does not compile.. ebnf is wrong
ar : [2]int;
Blah :: enum {
	A,
	B, 
	C, 
	D,
};
blah: #partial [Blah]int;


//slice type
as : []int;
//dynamic type
ad : [dynamic]int;
//map type
am : map[int]int;
//struct type
Astruct :: struct
{
	a : int,
	b : string,
	c : f32,
	d : rune,
};

astr : Astruct;
astr2 : struct {
	a : string, b: f32,
};

// union type
Aunion :: union
{
	int, u32, f32
};

auni : Aunion;
auni2 : union {
	int, u32, f32,
};
// enumtype
Aenum :: enum {hi, hi2 = 1, lala = 2};
aenum : enum int { hi, hi2 = 1, lala = 1};
// bitfield type
Bftype :: bit_field {
    width_validated: 1,
    height_validated: 1,
    age: 3,
};

bft : Bftype;
bf2 : bit_field {
    width_validated: 1,
    height_validated: 1,
    age: 3,
};

//pointer type
ap : ^int;

// procedure type
lala :: proc(a,b,c: int) -> (r :  string) {return;};


// bitset type
abst : bit_set[Aenum];
abs : bit_set[4..<90];
abs2 : bit_set[4..90];
// opaque type
opa : opaque int;

// simd vector type
smdvt : #simd[2]int;

// relative pointer type
rpt : #relative(int)^int;

// relative slice type
rst : #relative(int)[]int;

main :: proc()
{ 
	fmt.println("hi"); 
};


assignments :: proc()
{
	a,b,c : int;
	a,b,c = 2,3,2;
}
