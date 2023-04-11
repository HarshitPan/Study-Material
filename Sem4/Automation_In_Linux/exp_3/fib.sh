a=0
b=1
count=2
echo -n "Enter Range -> "
read n
if [ $n -gt 0 ]
then 
    echo -n "0"
fi
if [ $n -gt 1 ]
then 
    echo -n ", 1"
fi
while [ $count -lt $n ]
do
    temp=$b
    b=$(( $a+$b ))
    a=$temp
    echo -n " "$b" ,"
    count=$(( $count+1 ))
done 