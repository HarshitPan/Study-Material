const mongoose=require("mongoose")

const m_schemna=new mongoose.Schema({
    firstname : {
        type : String,
        required :true
    },
    lastname : {
        type : String,
        required :true
    },
    email : {
        type : String,
        required :true,
        unique : true
    },
    phone : {
        type : Number,
        required : true,
        unique : true
    },
})

const Registers=new mongoose.model("Register", m_schemna)

module.exports=Registers