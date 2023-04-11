echo -n "enter n ->"
read n
echo -n "enter k ->"
read k
x=$(( $n-$k ))
factn=1
factk=1
factnk=1
i=1
while [ $i -le $n ]
do 
    factn=$(( $factn*$i ))
    i=$(( $i+1 ))
done
i=1
while [ $i -le $k ]
do 
    factk=$(( $factk*$i ))
    i=$(( $i+1 ))
done
i=1
while [ $i -le $x ]
do 
    factnk=$(( $factnk*$i ))
    i=$(( $i+1 ))
done
temp=$(( $factk*$factnk ))
temp=$(( $factn/$temp ))
echo $n"C"$k" -> "$temp