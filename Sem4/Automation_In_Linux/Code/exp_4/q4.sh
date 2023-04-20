echo "Enter the number of first lines to read"
f=0
read f
echo "Enter the number of last lines to read"
l=0
read l
head -n $f $1
echo "------------------------"
tail -n $l $1