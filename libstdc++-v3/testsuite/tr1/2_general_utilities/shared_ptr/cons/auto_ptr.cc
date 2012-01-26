// Copyright (C) 2005, 2009 Free Software Foundation
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

// TR1 2.2.2 Template class shared_ptr [tr.util.smartptr.shared]

#include <tr1/memory>
#include <testsuite_hooks.h>

struct A { };

// 2.2.3.1 shared_ptr constructors [tr.util.smartptr.shared.const]

// Construction from auto_ptr
int
test01()
{
  bool test __attribute__((unused)) = true;

  std::auto_ptr<A> a(new A);
  std::tr1::shared_ptr<A> a2(a);
  VERIFY( a.get() == 0 );
  VERIFY( a2.get() != 0 );
  VERIFY( a2.use_count() == 1 );

  return 0;
}

int
main()
{
  test01();
  return 0;
}
