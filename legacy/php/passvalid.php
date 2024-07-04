<?php
$regex="/[#&'\s;|]+/i";
$yep=preg_replace($regex,'',"hello' &&cat#");
print("its $yep");
?>