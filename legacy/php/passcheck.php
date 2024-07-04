<?php
function checkpass($password){
    return exec("./phppasscheck '$password'" );
}

$pass=readline("Enter a password: ");
print("The password $pass has strength ".checkpass($pass)."\n");
?>