const express=require("express");
const path=require("path")
const hbs=require("hbs")
const Registers=require("./models/resgisters")

const app=express();
const port=process.env.PORT || 3000;
const static_path =path.join(__dirname, "../public")
const template_path=path.join(__dirname,"../templates/views")
const partials_path=path.join(__dirname,"../templates/partials")

//require("./db/con");
//hello world
//app.use(express.static(static_path))

app.use(express.json())
app.use(express.urlencoded({extended:false}))

app.set("view engine","hbs")
app.set("views",template_path)

hbs.registerPartials(partials_path)

app.get("/",(req , res) => {
    res.render("index")
})
app.get("/register", (req,res) =>{
    res.render("register")
})

//after getting value from user
app.post("/register", async (req,res) =>{
    try{
        const register=new Registers({
            firstname:req.body.firstname,
            lastname:req.body.lastname,
            email:req.body.email,
            phone:req.body.phone
        })

        const registered = await register.save()
        res.status(201).render("index");
    }
    catch(error)
    {
        res.status(400).send(error);
    }
})

app.get("/login",(req,res) => {
    res.render("login")
})

app.post("/login" , async(req,res) => {
    try {
        const email=req.body.email;
        const phone=req.body.phone;

        const value = await Registers.findOne({email:email})
        if(phone == value.phone)
        {
            res.render("register")
            console.log("Successful")
        }
        else
        {
            res.send("Password are not matching...")
        }
    } catch (error) {
        res.status(400).send("Invalid Email")
    }
})

app.listen(port,() => {
    console.log(`Server is running at port ${port}`);
})