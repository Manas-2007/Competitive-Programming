const mongoose=require('mongoose');
const express=require('express');
const cors=require('cors');
const PORT=3000;
mongoose.connect("......URL......")
.then(()=>{
    console.log("Database connected");
})
.catch((err)=>{
    console.log("Connection Failed",err);
});

const UserSchema=new mongoose.schema({
    name:{
        required:true,
        type:String
    },
    email:{
        required:true,
        unique:true,
        type:String
    }
});
module.exports=mongoose.model("Model",UserSchema);

app.post('/datashow',async(req,res)=>{
    try{
        const userData=new userInfo({
            Name:req.body.name,
            Email:req.body.email
        });
        await userData.save();
        console.log("Data Saved Successfully");
        res.redirect('/');
    }
    catch(err){
        console.log("Info Failed",err);
    }
});

app.get('/datashow',async(req,res)=>{
    try{
        const data=await datalist.find();
        res.json(data);
    }
    catch(err){
        console.log("Error Coming",err);
    }
});

app.get('/datashow',async(req,res)=>{
    try{
        const data=await datalist.findOne({Name:"Manas"});
        res.json(data);
    }
    catch(err){
        console.log("Error in data fetching",err);
    }
})

app.get('/datashow',async(req,res)=>{
    try{
        const data=await datalist.findById(req.params.id);
        res.json(data);
    }
    catch(err){
        console.log("Error generated",err);
    }
});


