package main

import "core:fmt"

main :: proc()
{

	a := 1;

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
	f = 0.0;
	f = 42.36;
	f = 042.36;  // == 42.36
	f = 6.28318530718;
	f = 1.e+0;
	f = 1.054571800e-34;
	f = 1.054_571_800e-34;
	f = 1E9;
	fmt.println(f);
	f = .125;
	f = .12345e+5;
	f = 0hAF2F292F;
	f = 0hAAF2F292FF2F292F;

	fmt.println(f);

}
