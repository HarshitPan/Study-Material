echo "Enter a three-digit number: "
num=0
read num
if [ $num -le 999 ] && [ $num -ge 100 ]
then
r=$(($num%2))
if [ $r -eq 0 ]
then
sum=0
while [ $num != 0 ]
do
ld=$((num%10))
sum=$(($sum + $ld))
num=$(($num / 10))
done
echo "$sum"
else
product=1
while [ $num != 0 ]
do
ld=$((num%10))
product=$(($product * $ld))
num=$(($num / 10))
done
echo "$product"
fi
else
echo "Try again by entering a correct number!"
fi