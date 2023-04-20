echo "Enter a number: "
num=1
read num
i=1
product=1
Factorial()
{
for (( i; i <= $num; i++ ))
do
product=$(($product*$i))
done
echo "$product"
}
var=$(Factorial)
echo "$var"