#!/usr/bin/lua

function fac(x)
				if x == 1  or x == 0 then
								return 1
				else
								return x * fac(x-1)
				end
end

n = fac(3)

print(n)
