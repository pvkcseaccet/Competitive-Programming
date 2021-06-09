test=io.read()
for i=1,test do
	sides=io.read()
	local num=sides
	while tonumber(num) % 2 == 0 do
		num=num/2
	end
	if num % 3 == 0 then
		num=num/3
	end
	if num % 5 == 0 then
		num=num/5
	end
	if num % 17 == 0 then
		num=num/17
	end
	if num % 257 == 0 then
		num=num/257
	end
	if num % 65537 == 0 then
		num=num/65537
	end
	if num == 1 then
		print("Yes")
	else
		print("No")
	end
end 