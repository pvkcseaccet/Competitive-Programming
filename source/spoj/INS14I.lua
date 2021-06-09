test=io.read()
test=tonumber(test)
for i=1,test do
	num=io.read()
	num=tonumber(num)
	if num==0 then
		print("4")
	end
	if num>0 then
		n1=math.ceil(num/(3+2*math.sqrt(2)))
		n2=math.floor(n1*(3+2*math.sqrt(2)))
		if num==n2 then
			print("4")
		else
			print("5")
		end
	end
end 