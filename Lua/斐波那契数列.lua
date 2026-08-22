function fac(n)
				if (n == 1) or (n == 2) then
								return 1
				else
								return fac(n - 1) + fac(n - 2)
				end
end

local number = io.input()

io.write(number, "is", fac(number))

