<?php
require_once "Control.php";
class Carro implements Control{

    
    private $modelo;
    private $cor;
    private $ano;
    private $funcionando;
    private $movimento;
    private $farol;

    


    public function __construct($model, $color, $year){
        $this->modelo = $model;
        $this->cor = $color;
        $this->ano = $year;
        $this->funcionando = false;
        $this->farol = false;
    }

    public function situacao(){
        echo "<br>O carro ".$this->modelo;
        echo "<br> Na cor ".$this->cor;
        echo "<br> Ano:".$this->ano;
        echo "<br> O motor está:" ;
        if($this->funcionando == false){ 
            echo " Desligado";
        } else {
            echo " Ligado";
        }
        echo "<br> O carro está";
        if($this->movimento == true){
            echo " Andando";
        } else {
            echo " Parado";
        }
        echo "<br> O farol está ";
        if($this->farol == true) {
            echo "ligado.";
        } else {
            echo "desligado.";
        }
    }

    public function getModelo() {
        return $this->modelo;
    }

    public function setModelo($model) {
        $this->modelo = $model;
    }

    public function getCor(){
        return $this -> cor;
    }

    public function setCor($color) {
        $this->cor = $color;
    }

    public function getAno() {
        return $this->ano;
    }

    public function setAno($year) {
        $this->ano = $year;
    }

    public function getFuncionando(){
        return $this->funcionando;
    }

    public function setFuncionando($on) {
        $this->funcionando = $on;
    }

    public function getFarol() {
        return $this->farol;
    }

    public function setFarol($ligth) {
        $this->farol = $ligth;
    }


    public function ligar(){
        $this->funcionando = true;

    }

    public function desligar() {
        $this->funcionando = false;
       
        

    }

    public function parar() {
        $this->movimento = false;

    }

    public function andar() {
        if ($this->funcionando == true){
            $this->movimento = true;
        }else {
       $this->movimento = false;
        }

    }

    public function buzinar(){
        echo "<br> Buzinando...";
        
    }

    public function ligarFarol(){
        $this->setFarol(true);
        
    }

    public function desligarFarol(){
        $this->setFarol(false);
    
    }
}

?>