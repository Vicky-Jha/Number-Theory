<?php
 
function countDivisors($n)
{
    $cnt = 0;
    for ($i = 1; $i <= sqrt($n); $i++)
    {
        if ($n % $i == 0)
        {
            if ($n / $i == $i)
            $cnt++;
 
            else
                $cnt = $cnt + 2;
        }
    }
    return $cnt;
}
 
echo "Total distinct divisors of 100 are : ",
        countDivisors(100);
?>
