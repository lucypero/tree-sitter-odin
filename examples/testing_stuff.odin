package main

import "core:fmt"

main :: proc()
{
  types();

}

ints :: proc() {
  n : int;
  n = 0b101;
  n = 0o123502143;
  n = 0d122919;
  n = 0z12A91B;
  n = 0x2A91BFafCD;
  n = 1_232_4213_52;
  n = 1_232__4213_52;
  n = 1_232__4213_52___;
  n = 42;
  n = 042; // 042
  n = 0b1001011;
  n = 0o712;
  n = 0d42;
  n = 0z19b3;
  n = 0xDeadBeef;
  n = 210206826;
  n = 210_206_415_622_289;
}

floats :: proc()
{
	f : f32;
	f = 0.;
	f = .1;
	f = 0.0;
	f = 42.36;
	f = 042.36;  // == 42.36
	f = 6.28318530718;
	f = 1.e;
	f = 1.e+;
	f = 1.e-;
	f = 1.e-0;
	f = 1.e5;
	f = 1.e;
	f = 1.e+;
	f = 1.E-0;
	f = 1.054571800e-34;
	f = 1.054_571_800e-34;
	f = 1_123.054_571_800e-34;
	f = 1__._054_571_800e-_3__4__;
	f = 2;
	f = 2E3;
	f = .125;
	f = .12345e+5;
	f = 0hAF2F292F;
	f = 0h_A__aF2F292FF2F2__92F__;
}

imaginary_num :: proc()
{
	i : complex128;
	i = 0.i;
	i = 0.0i;
	i = 42.36i;
	i = 042.36i;  // == 42.36i
	i = 6.28318530718i;
	i = 1.e+0i;
	i = 1.054571800e-34i;
	i = 1.054_571_800e-34i;
	i = 1E9i;
	i = .125i;
	i = .12345e+5i;
}

runes :: proc()
{
	r : rune;
	r = '\a';
	r = '\b';
	r = '\e';
	r = '\f';
	r = '\n';
	r = '\r';
	r = '\t';
	r = '\v';
	r = '\\';
	r = '\'';
	r = '\"';

	r = '(';
	fmt.println("unicode char: ", r);
	r = '\u0028'; // little u value .. '('
	fmt.println("little u value: ", r);
	r = '\u007D'; // little u value .. '}'
	fmt.println("little u value: ", r);
	fmt.println("little u value: ", r);
	r = '\U0000007D'; // big u value .. }
	fmt.println("big u value: ", r);
	r = '\U0001F600'; // big u value .. 😀
	fmt.println("big u value: ", r);
	r = '\U0001F300'; // big u value .. 🌀
	fmt.println("big u value: ", r);
	r = '🌀'; // unicode char .. 🌀
	fmt.println("unicode char: ", r);

	// rune - octal byte value
	r = '\175'; // }
	fmt.println("octal byte value: ", r);

	// rune - hex byte value
	r = '\x7D'; // }
	fmt.println("hex byte value: ", r);
}

runes_for_test :: proc()
{
	r : rune;
	r = '\a';
	r = '\b';
	r = '\e';
	r = '\f';
	r = '\n';
	r = '\r';
	r = '\t';
	r = '\v';
	r = '\\';
	r = '\'';
	r = '\"';

	r = '(';
	r = '\u0028'; // little u value .. '('
	r = '\u007D'; // little u value .. '}'
	r = '\U0000007D'; // big u value .. }
	r = '\U0001F600'; // big u value .. 😀
	r = '\U0001F300'; // big u value .. 🌀
	r = '🌀'; // unicode char .. 🌀

	// rune - octal byte value
	r = '\175'; // }

	// rune - hex byte value
	r = '\x7D'; // }
}

strings :: proc()
{

	str : string;
	str = "hiiii 🌀🌀🌀jean";
	str = ` test jwajaja

	awjdiawda
	jiawdwa

	`;
}

types :: proc()
{

	a : (int);

	a = 3;
	fmt.println(a);

	// Array Types
  {
    ar : [32]byte;
  }
	// [2*N + 1]union{int, string}
	// [42]^f32
	// [2][3]int
	// [3][3][3]f64 // same as [3]([3]([3]f64))


  // "typeid"
  {
    ar : [32]byte;
  }

  // SliceType
  {
    ar : typeid;
  }

  // DynamicArrayType
  {
    ar : [dynamic]byte;
  }
  // MapType
  {
    ar : map[int]int;
  }


  // TODO(lucypero): keep doing this

  // StructType
  {
    ar : [32]byte;
  }
  // UnionType
  {
    ar : [32]byte;
  }
  // EnumType
  {
    ar : [32]byte;
  }
  // BitFieldType
  {
    ar : [32]byte;
  }

  // PointerType
  {
    ar : [32]byte;
  }
  // ProcedureType
  {
    ar : [32]byte;
  }

  // BitSetType
  {
    ar : [32]byte;
  }

  // OpaqueType
  {
    ar : [32]byte;
  }

  // SimdVectorType
  {
    ar : [32]byte;
  }

  // RelativePointerType
  {
    ar : [32]byte;
  }
  // RelativeSliceType .
  {
    ar : [32]byte;
  }


}

