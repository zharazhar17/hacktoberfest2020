<?php

$head = array();
$arrayToJson = array();
$file="vw.csv";
$csv= file_get_contents($file);
$arrayCsv = array_map("str_getcsv", explode("\n", $csv));
$rowLine = count($arrayCsv);
$headLine = count($arrayCsv[0]);

$do = 1;
for ($row=1; $row < $rowLine; $row++) { 	
	for ($i=0; $i < $headLine; $i++) { 
		$head[$arrayCsv[0][$i]] = preg_replace(array('/\s{2,}/', '/[\t\n]/'), "", $arrayCsv[$row][$i]);
	}
	$arrayToJson[] = $head;
	$x = $row % 5;
//	if ($x == 0) {
		$toJson = json_encode($arrayToJson);
		file_put_contents("res$do.json", $toJson);
		$do = $do + 1;
		echo $row." = ".$x."\n";
	}//
}
$parse =array_chunk($arrayToJson, 5);
print_r($parse);