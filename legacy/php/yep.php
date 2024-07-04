<?php
$table=9;
$rows=10;
?>
 <table>
  <tr>
    <th>multiplicant</th>
    <th>multiplier</th>
    <th>Answer</th>
  </tr>
<?php
    for($i=1;$i<$rows+1;$i++){
        ?>
        <tr>
            <td><?php print($table)?></td>
            <td><?php print($i)?></td>
            <td><?php print($table*$i)?></td>
        </tr>
        <?php
    }
?>
</table> 