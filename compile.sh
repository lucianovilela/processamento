#!/usr/bin/bash
function runJava(){
    echo "Java"
    cd java
    javac Main.java
    time java Main
    cd ..
}
function runC(){
    echo "C"
    cd c
    rm -f Main.o Main
    gcc Main.c -o Main
    time ./Main
    cd ..
}
function runPython(){
    echo "Python"
    cd python
    time python Main.py
    cd ..
}

runC
runJava
runPython