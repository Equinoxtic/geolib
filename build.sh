if [ ! -d build/ ]; then
	mkdir build/
fi

if [ ! -d build/config/ ]; then
	mkdir build/config/
fi
	
if [ ! -e build/config/gitv.txt ]; then
	touch build/config/gitv.txt
fi

if [ -e build/config/gitv.txt ]; then
	cat config/gitv.txt > build/config/gitv.txt
fi

make 
