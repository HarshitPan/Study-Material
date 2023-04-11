const mongoose= require("mongoose")
mongoose.connect("mongodb://localhost:27017/ytRegistration").then( () => {
    console.log("Connection Successfully...");
}).catch( (e) => {
    console.log(`no connection`);
})
