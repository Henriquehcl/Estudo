<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Carro</title>
</head>
<body>
<h1>Carro</h1>

    <?php

        require_once "Carro.php";

        $c[0] = new Carro("Celta", "Branco", 2010);
        $c[1] = new Carro("Gol", "Preto", 2010);

        $c[0]->ligar();
        $c[1]->ligar();

        $c[0]->andar();

        $c[1]->ligarFarol();
        

        $c[0]->situacao();
        echo "<br>--------------------------";
        $c[1]->situacao();
       // $c[0]->buzinar();

        //print_r($c);

    ?>
    
</body>
</html>