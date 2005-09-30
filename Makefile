all:
	cd usgsmap && make
	cd xsonar && make byteOrder
	cd xsonar && make xsonar

optimize:
	cd usgsmap && make clean OPTIMIZE=1
	cd usgsmap && make
	cd xsonar && make clean
	cd xsonar && make byteOrder
	cd xsonar && make xsonar OPTIMIZE=1

clean:
	cd usgsmap && make clean
	cd xsonar && make clean