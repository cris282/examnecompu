<?php
$NoDPI=$_GET['DPI'];
$NombrePadre=$_GET['NOMBRE'];
$Profesion=$_GET['PROFESION'];
$EstadoCivil=$_GET['ESTADO_CIVIL'];
$Nacionalidad=$_GET['NACIONALIDAD'];
$IDPersonal=$_GET['CUI'];
$NombreBebe=$_GET['NOMBRE_COMPLETO'];
$FechaNacimiento=$_GET['FECHA_NACIMIENTO'];
$LugarNacimiento=$_GET['LUGAR_NACIMIENTO'];
$Nacionalidad=$_GET['NACIONALIDAD'];

if(isset($_GET['RegistrarPadre'])){
$aurtorizacion=mysqli_connect("localhost","root","","RENAP");
$inst="insert into PADRES(DPI,NOMBRE,PROFESION,ESTADO_CIVIL,NACIONALIDAD) values('$NoDPI','$NombrePadre','$Profesion','$EstadoCivil','$Nacionalidad')";
mysqli_query($aurtorizacion,$inst);
header('location:basededatos.sql');
}

if(isset($_GET['ActualizarPadre'])){
   $aurtorizacion=mysqli_connect("localhost","root","","RENAP");
$inst="update PADRES set DPI='$NoDPI',NOMBRE='$NombrePadre',PROFESION='$Profesion',ESTADO_CIVIL='$EstadoCivil',NACIONALIDAD='$Nacionalidad' where id='$id' ";
echo $inst;
mysqli_query($aurtorizacion,$inst); 
header('location:basededatos.sql');
}

if(isset($_GET['EliminarPadre'])){
   $aurtorizacion=mysqli_connect("localhost","root","","RENAP");
$inst="delete from PADRES where id='$id' ";
echo $inst;
mysqli_query($aurtorizacion,$inst); 
header('location:basededatos.sql');
}

if(isset($_GET['GuardarPartida'])){
$aurtorizacion=mysqli_connect("localhost","root","","RENAP");
$inst="insert into BEBE(CUI,NOMBRE_COMPLETO,FECHA_NACIMIENTO,LUGAR_NACIMIENTO,NACIONALIDAD) values('$IDPersonal','$NombreBebe','$FechaNacimiento','$LugarNacimiento','$Nacionalidad')";
mysqli_query($aurtorizacion,$inst);
header('location:basededatos.sql');
}

if(isset($_GET['ActualizarPartida'])){
   $aurtorizacion=mysqli_connect("localhost","root","","RENAP");
$inst="update BEBE set CUI='$IDPersonal',NOMBRE_COMPLETO='$NombreBebe',FECHA_NACIMIENTO='$FechaNacimiento',LUGAR_NACIMIENTO='$LugarNacimiento',NACIONALIDAD='$Nacionalidad' where id='$id' ";
echo $inst;
mysqli_query($aurtorizacion,$inst); 
header('location:basededatos.sql');
}

if(isset($_GET['EliminarPartida'])){
   $aurtorizacion=mysqli_connect("localhost","root","","RENAP");
$inst="delete from BEBE where id='$id' ";
echo $inst;
mysqli_query($aurtorizacion,$inst); 
header('location:basededatos.sql');
}