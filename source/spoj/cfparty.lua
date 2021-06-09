test=io.read()
for i=1,test do
	peeps=io.read()
	peeps_left=tonumber(peeps)-2
	if tonumber(peeps_left) >0 then
		io.write(peeps_left.."\n")
	else
		io.write("0".."\n")
	end
end
 