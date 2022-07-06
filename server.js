const express=require("express");
const bodyParser=require("body-parser");
const formidable =require("formidable");
const shell = require('shelljs');

const app=express();

app.get("/",function(req,res){
    res.sendFile(__dirname+"/index.html");
    // shell.exec('temp.sh')
});
app.post("/",function(req,res){
    // res.send("Hello World");
    var form =new formidable.IncomingForm();
    form.parse(req);
    // console.log(form);
    form.on("fileBegin",function(name,file){
        file.path=__dirname+"/stress/"+name+".cpp";
    });
    shell.exec('run.sh 10');
    res.sendFile(__dirname+"/stress/final.txt");
});
app.listen(3000,function(){
    console.log("Server listening on http://localhost:3000 ...");
});