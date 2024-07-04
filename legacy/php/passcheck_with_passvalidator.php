<?php
function checkpass($password){
    return exec("./phppasscheck '$password'" );
}
function passvalidator($string){
    $regex="/[#&'\s;|]+/i";
    $yep=preg_replace($regex,'',$string);
    return $yep;
}

$pass=readline("Enter a password: ");
$validatedpass=passvalidator($pass);
print("unvalid is $pass\n");
print("valid is $validatedpass\n");
print("The password $validatedpass has strength ".checkpass($validatedpass)."\n");
?>