    
    cd stress;
    echo -n "" >final.txt;
    g++ -std=c++17 gen.cpp -o gen;     
    g++ -std=c++17 brute.cpp -o brute;
    g++ -std=c++17 wrong.cpp -o wrong;
    echo "$(tput setaf 2)Your Codes are Sucessfully Compiled";
         
#!/usr/bin/env bash
for ((testNum=0;testNum<$1;testNum++))
do   
    ./gen.exe > input;
    ./brute.exe < input > outSlow;
    ./wrong.exe < input > outWrong;
    H1=`md5sum outWrong`;
    H2=`md5sum outSlow`;
    let temp="testNum+1";
    echo "$(tput setaf 6)Test Case: #"$temp"$(tput setaf 7)";
    if !(cmp -s "outWrong" "outSlow");
    then
        let wrongOn="testNum+1";
        echo "Got Wrong on Test Case:#$wrongOn out of $1";
        echo;
        echo "$(tput setaf 4)Error found!$(tput setaf 7)";
        echo "$(tput setaf 7)Input:$(tput setaf 3)";
        cat input;
        echo "$(tput setaf 7)Wrong Output:$(tput setaf 1)";
        cat outWrong;
        echo "$(tput setaf 7)Correct Output:$(tput setaf 2)";
        cat outSlow;
        input>>final.txt;
        outWrong>>final.txt;
        outSlow>>final.txt;
        exit;
    fi;
done
echo "Passed $1 tests" >> final.txt;
# "All tests Passed">>final.txt;


 