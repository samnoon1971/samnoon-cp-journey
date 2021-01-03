<?php

function practice(){
    $n = intval(fgets(STDIN));
    $r1 = trim(fgets(STDIN));
    $ar = explode(' ', $r1);
    $mps = [];
    for($i=0; $i<$n; $i++){
        $val = $ar[$i];
        if(isset($mps[$val]))
          $mps[$val]++;
        else $mps[$val] = 1;
    }
    for($i=0; $i<=2*$n; $i++){
        if(isset($mps[$i]))
        {
            if($mps[$i] > 1)
            {
                if(isset($mps[$i + 1])){
                  $mps[$i + 1]++;
                }
                else{
                    $mps[$i + 1] = 1;
                }
            }
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