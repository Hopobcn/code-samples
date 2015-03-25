reduce: main.cu *.h
	nvcc -I../../c++11_cuda/cpp11-range --std=c++11 -O3 main.cu -o reduce -arch=sm_52

clean:
	rm -f reduce

