<?php

function practice(){
    $n = intval(fgets(STDIN));
    $r1 = trim(fgets(STDIN));
    $ar = explode(' ', $r1);
    $mps = [];
    for($i=0; $i<$n; $i++){
        for($j=$i+1; $j<$n; $j++){
            $temp = $ar[$j] - $ar[$i];
            $mps[$temp] = 1;
        }
    }
    echo count($mps);
    echo "\n";
}

$t = trim(fgets(STDIN));
for($i=0; $i<$t; $i++){
    practice();
}


?>