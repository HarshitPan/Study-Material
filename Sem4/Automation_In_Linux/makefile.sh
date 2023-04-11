count=0
mkdir trial
cd trial
while [ $count -lt 5 ]
do 
    file=$(( $count+1 )).txt
    touch $file
    sleep 1
    count=$(( $count+1 ))
done
cd .
rm -r ../trial