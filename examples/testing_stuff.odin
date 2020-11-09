package main

import "core:fmt"

main :: proc()
{

	fmt.println("hi");

	//integer literals
	n : int;
	n = 0b101;
	// n = 0b201; not valid
	n = 0o123502143;
	// n = 0o249; not valid
	n = 0d122919;
	n = 0z12A91B;
	// n = 0z1CA91B; not valid
	n = 0x2A91BFafCD;
	// n = 0x2A91BFafHD; not valid
	n = 1_232_4213_52;
	n = 1_232__4213_52;
	n = 1_232__4213_52___;
	// n = _1_232__4213_52___;  not valid
	fmt.println(n);

	n = 42;
	n = 042; // 042
	n = 0b1001011;
	n = 0o712;
	n = 0d42;
	n = 0z19b3;
	n = 0xDeadBeef;
	n = 210206826;
	n = 210_206_415_622_289;

	//floating point literals
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
	fmt.println("hi", f);
	f = 1.e+;
	fmt.println("hi", f);
	f = 1.E-0;
	f = 1.054571800e-34;
	f = 1.054_571_800e-34;
	f = 1_123.054_571_800e-34;
	f = 1__._054_571_800e-_3__4__;
	fmt.println("___",f);
	// f = _1.054_571_800e-34; no
	f = 2;
	f = 2E3;
	fmt.println("no point", f);
	f = .125;
	f = .12345e+5;
	f = 0hAF2F292F;
	f = 0h_A__aF2F292FF2F2__92F__;

	fmt.println(f);

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
