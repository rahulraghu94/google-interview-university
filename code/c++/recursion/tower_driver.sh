g++ tower_of_brahma.c -g -Wall -o tower

for i in {1..25}
do
	./tower $i | wc
done