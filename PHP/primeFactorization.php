<!DOCTYPE html>
<html>
<body>
<?php
$num = 186;
$flag = 0;

for($i=2; $i<$num; $i++)
{
 // check for divisibility
 if($num % $i == 0)
 {
  $count = 0;
  // check for prime number
  for($j=1; $j<=$i; $j++)
  {
   if($i % $j == 0)
    $count++;
  }
  if($count == 2)
  {
   if($flag == 0)
   {
    echo "Prime factor of $num: <br>";
    $flag = 1;
   }
   echo "$i ";
  }
 }
}

if($flag == 0)
 echo "There is no Prime factor for $num";
?>
</body>
</html>
