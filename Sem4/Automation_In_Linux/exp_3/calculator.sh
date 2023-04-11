while [ 0 -lt 1 ]
do
    clear
    echo "1. Addition"
    echo "2. Subtract"
    echo "3. Multiply"
    echo "4. Division"
    echo -n "Enter choice ->"
    read choice
    echo -n "Enter 1st number -> "
    read n1
    echo -n "Enter 2nd number -> "
    read n2
    check=0
    if [ $choice == 1 ]
    then
        check=1
        echo $(( $n1+$n2 ))
    fi
    if [ $choice == 2 ]
    then
        check=1
        echo $(( $n1-$n2 ))
    fi
    if [ $choice == 3 ]
    then    
        check=1
        echo $(( $n1*$n2 ))
    fi
    if [ $choice == 4 ]
    then
        check=1
        echo $(( $n1/$n2 ))
    fi
    if [ $check == 0 ]
    then
        echo "Invalid Choice...Try Again..."
    fi
    sleep 2
done